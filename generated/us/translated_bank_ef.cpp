// Generated from ca65 instruction spans. Do not edit.
#include "eb/cpu.hpp"
#include <cstdint>

namespace eb::us {
bool translated_bank_ef(Cpu& c, std::uint16_t offset) {
    switch (offset) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0000: c.execute<0xC2>(0x000031, 2); return true;
    // src/battle/enemy_flashing_off.asm:8 LDA CURRENT_FLASHING_ENEMY
    case 0x0002: c.execute<0xAD>(0x0089D0, 3); return true;
    // src/battle/enemy_flashing_off.asm:9 CMP #$FFFF
    case 0x0005: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/battle/enemy_flashing_off.asm:9 CMP #$FFFF
    // Overlapping static entry reached from 0xEF0005.
    case 0x0007: c.execute<0xFF>(0xAD45F0, 4); return true;
    // src/battle/enemy_flashing_off.asm:10 BEQ @UNKNOWN2
    case 0x0008: c.execute<0xF0>(0x000045, 2); return true;
    // src/battle/enemy_flashing_off.asm:11 LDA CURRENT_FLASHING_ENEMY_ROW
    case 0x000A: c.execute<0xAD>(0x0089D2, 3); return true;
    // src/battle/enemy_flashing_off.asm:11 LDA CURRENT_FLASHING_ENEMY_ROW
    // Overlapping static entry reached from 0xEF0007.
    case 0x000B: c.execute<0xD2>(0x000089, 2); return true;
    // src/battle/enemy_flashing_off.asm:12 BEQ @UNKNOWN0
    case 0x000D: c.execute<0xF0>(0x000018, 2); return true;
    // src/battle/enemy_flashing_off.asm:13 LDX CURRENT_FLASHING_ENEMY
    case 0x000F: c.execute<0xAE>(0x0089D0, 3); return true;
    // src/battle/enemy_flashing_off.asm:14 LDA BACK_ROW_BATTLERS,X
    case 0x0012: c.execute<0xBD>(0x00AD82, 3); return true;
    // src/battle/enemy_flashing_off.asm:15 AND #$00FF
    case 0x0015: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/battle/enemy_flashing_off.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xEF0015.
    case 0x0017: c.execute<0x00>(0x0000A0, 2); return true;
    // src/battle/enemy_flashing_off.asm:16 LDY #.SIZEOF(battler)
    case 0x0018: if (c.p & 0x10) c.execute<0xA0>(0x00004E, 2); else c.execute<0xA0>(0x00004E, 3); return true;
    // src/battle/enemy_flashing_off.asm:16 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xEF0018.
    case 0x001A: c.execute<0x00>(0x000022, 2); return true;
    // src/battle/enemy_flashing_off.asm:17 JSL MULT168
    case 0x001B: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/battle/enemy_flashing_off.asm:18 TAX
    case 0x001F: c.execute<0xAA>(0x000000, 1); return true;
    // src/battle/enemy_flashing_off.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0x0020: c.execute<0xE2>(0x000020, 2); return true;
    // src/battle/enemy_flashing_off.asm:20 STZ BATTLERS_TABLE+74,X
    case 0x0022: c.execute<0x9E>(0x009FF6, 3); return true;
    // src/battle/enemy_flashing_off.asm:21 BRA @UNKNOWN1
    case 0x0025: c.execute<0x80>(0x000016, 2); return true;
    // src/battle/enemy_flashing_off.asm:24 LDX CURRENT_FLASHING_ENEMY
    case 0x0027: c.execute<0xAE>(0x0089D0, 3); return true;
    // src/battle/enemy_flashing_off.asm:25 LDA FRONT_ROW_BATTLERS,X
    case 0x002A: c.execute<0xBD>(0x00AD7A, 3); return true;
    // src/battle/enemy_flashing_off.asm:26 AND #$00FF
    case 0x002D: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/battle/enemy_flashing_off.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xEF002D.
    case 0x002F: c.execute<0x00>(0x0000A0, 2); return true;
    // src/battle/enemy_flashing_off.asm:27 LDY #.SIZEOF(battler)
    case 0x0030: if (c.p & 0x10) c.execute<0xA0>(0x00004E, 2); else c.execute<0xA0>(0x00004E, 3); return true;
    // src/battle/enemy_flashing_off.asm:27 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xEF0030.
    case 0x0032: c.execute<0x00>(0x000022, 2); return true;
    // src/battle/enemy_flashing_off.asm:28 JSL MULT168
    case 0x0033: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/battle/enemy_flashing_off.asm:29 TAX
    case 0x0037: c.execute<0xAA>(0x000000, 1); return true;
    // src/battle/enemy_flashing_off.asm:30 SEP #PROC_FLAGS::ACCUM8
    case 0x0038: c.execute<0xE2>(0x000020, 2); return true;
    // src/battle/enemy_flashing_off.asm:31 STZ BATTLERS_TABLE+74,X
    case 0x003A: c.execute<0x9E>(0x009FF6, 3); return true;
    // src/battle/enemy_flashing_off.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0x003D: c.execute<0xC2>(0x000020, 2); return true;
    // src/battle/enemy_flashing_off.asm:34 STZ ENEMY_TARGETTING_FLASHING
    case 0x003F: c.execute<0x9C>(0x00ADA2, 3); return true;
    // src/battle/enemy_flashing_off.asm:35 LDA #$FFFF
    case 0x0042: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/battle/enemy_flashing_off.asm:35 LDA #$FFFF
    // Overlapping static entry reached from 0xEF0042.
    case 0x0044: c.execute<0xFF>(0x89D08D, 4); return true;
    // src/battle/enemy_flashing_off.asm:36 STA CURRENT_FLASHING_ENEMY
    case 0x0045: c.execute<0x8D>(0x0089D0, 3); return true;
    // src/battle/enemy_flashing_off.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0x0048: c.execute<0xE2>(0x000020, 2); return true;
    // src/battle/enemy_flashing_off.asm:38 LDA #$0001
    case 0x004A: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x008D01, 3); return true;
    // src/battle/enemy_flashing_off.asm:39 STA REDRAW_ALL_WINDOWS
    case 0x004C: c.execute<0x8D>(0x009623, 3); return true;
    // src/battle/enemy_flashing_off.asm:39 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xEF004A.
    case 0x004D: c.execute<0x23>(0x000096, 2); return true;
    // src/battle/enemy_flashing_off.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0x004F: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:30 RTL
    case 0x0051: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0052: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0054: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0x0055: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0056: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0057: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF0057.
    case 0x0059: c.execute<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x005A: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0x005B: c.execute<0x68>(0x000000, 1); return true;
    // src/battle/enemy_flashing_on.asm:14 STX @LOCAL01
    case 0x005C: c.execute<0x86>(0x000010, 2); return true;
    // src/battle/enemy_flashing_on.asm:14 STX @LOCAL01
    // Overlapping static entry reached from 0xEF0059.
    case 0x005D: c.execute<0x10>(0x000085, 2); return true;
    // src/battle/enemy_flashing_on.asm:15 STA @LOCAL00
    case 0x005E: c.execute<0x85>(0x00000E, 2); return true;
    // src/battle/enemy_flashing_on.asm:15 STA @LOCAL00
    // Overlapping static entry reached from 0xEF005D.
    case 0x005F: c.execute<0x0E>(0x00D0AD, 3); return true;
    // src/battle/enemy_flashing_on.asm:16 LDA CURRENT_FLASHING_ENEMY
    case 0x0060: c.execute<0xAD>(0x0089D0, 3); return true;
    // src/battle/enemy_flashing_on.asm:16 LDA CURRENT_FLASHING_ENEMY
    // Overlapping static entry reached from 0xEF005F.
    case 0x0062: if (c.p & 0x20) c.execute<0x89>(0x0000C9, 2); else c.execute<0x89>(0x00FFC9, 3); return true;
    // src/battle/enemy_flashing_on.asm:17 CMP #$FFFF
    case 0x0063: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/battle/enemy_flashing_on.asm:17 CMP #$FFFF
    // Overlapping static entry reached from 0xEF0062.
    case 0x0064: c.execute<0xFF>(0x04F0FF, 4); return true;
    // src/battle/enemy_flashing_on.asm:17 CMP #$FFFF
    // Overlapping static entry reached from 0xEF0063.
    case 0x0065: c.execute<0xFF>(0x2204F0, 4); return true;
    // src/battle/enemy_flashing_on.asm:18 BEQ @UNKNOWN0
    case 0x0066: c.execute<0xF0>(0x000004, 2); return true;
    // src/battle/enemy_flashing_on.asm:20 JSL ENEMY_FLASHING_OFF
    case 0x0068: c.execute<0x22>(0xEF0000, 4); return true;
    // src/battle/enemy_flashing_on.asm:20 JSL ENEMY_FLASHING_OFF
    // Overlapping static entry reached from 0xEF0065.
    case 0x0069: c.execute<0x00>(0x000000, 2); return true;
    // src/battle/enemy_flashing_on.asm:25 LDX @LOCAL01
    case 0x006C: c.execute<0xA6>(0x000010, 2); return true;
    // src/battle/enemy_flashing_on.asm:26 STX CURRENT_FLASHING_ENEMY
    case 0x006E: c.execute<0x8E>(0x0089D0, 3); return true;
    // src/battle/enemy_flashing_on.asm:27 LDA @LOCAL00
    case 0x0071: c.execute<0xA5>(0x00000E, 2); return true;
    // src/battle/enemy_flashing_on.asm:28 STA CURRENT_FLASHING_ENEMY_ROW
    case 0x0073: c.execute<0x8D>(0x0089D2, 3); return true;
    // src/battle/enemy_flashing_on.asm:29 BEQ @UNKNOWN1
    case 0x0076: c.execute<0xF0>(0x00001A, 2); return true;
    // src/battle/enemy_flashing_on.asm:30 LDX CURRENT_FLASHING_ENEMY
    case 0x0078: c.execute<0xAE>(0x0089D0, 3); return true;
    // src/battle/enemy_flashing_on.asm:31 LDA BACK_ROW_BATTLERS,X
    case 0x007B: c.execute<0xBD>(0x00AD82, 3); return true;
    // src/battle/enemy_flashing_on.asm:32 AND #$00FF
    case 0x007E: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/battle/enemy_flashing_on.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xEF007E.
    case 0x0080: c.execute<0x00>(0x0000A0, 2); return true;
    // src/battle/enemy_flashing_on.asm:33 LDY #.SIZEOF(battler)
    case 0x0081: if (c.p & 0x10) c.execute<0xA0>(0x00004E, 2); else c.execute<0xA0>(0x00004E, 3); return true;
    // src/battle/enemy_flashing_on.asm:33 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xEF0081.
    case 0x0083: c.execute<0x00>(0x000022, 2); return true;
    // src/battle/enemy_flashing_on.asm:34 JSL MULT168
    case 0x0084: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/battle/enemy_flashing_on.asm:35 TAX
    case 0x0088: c.execute<0xAA>(0x000000, 1); return true;
    // src/battle/enemy_flashing_on.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0x0089: c.execute<0xE2>(0x000020, 2); return true;
    // src/battle/enemy_flashing_on.asm:37 LDA #1
    case 0x008B: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x009D01, 3); return true;
    // src/battle/enemy_flashing_on.asm:38 STA BATTLERS_TABLE+battler::unknown74,X
    case 0x008D: c.execute<0x9D>(0x009FF6, 3); return true;
    // src/battle/enemy_flashing_on.asm:38 STA BATTLERS_TABLE+battler::unknown74,X
    // Overlapping static entry reached from 0xEF008B.
    case 0x008E: c.execute<0xF6>(0x00009F, 2); return true;
    // src/battle/enemy_flashing_on.asm:39 BRA @UNKNOWN2
    case 0x0090: c.execute<0x80>(0x000018, 2); return true;
    // src/battle/enemy_flashing_on.asm:42 LDX CURRENT_FLASHING_ENEMY
    case 0x0092: c.execute<0xAE>(0x0089D0, 3); return true;
    // src/battle/enemy_flashing_on.asm:43 LDA FRONT_ROW_BATTLERS,X
    case 0x0095: c.execute<0xBD>(0x00AD7A, 3); return true;
    // src/battle/enemy_flashing_on.asm:44 AND #$00FF
    case 0x0098: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/battle/enemy_flashing_on.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xEF0098.
    case 0x009A: c.execute<0x00>(0x0000A0, 2); return true;
    // src/battle/enemy_flashing_on.asm:45 LDY #.SIZEOF(battler)
    case 0x009B: if (c.p & 0x10) c.execute<0xA0>(0x00004E, 2); else c.execute<0xA0>(0x00004E, 3); return true;
    // src/battle/enemy_flashing_on.asm:45 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xEF009B.
    case 0x009D: c.execute<0x00>(0x000022, 2); return true;
    // src/battle/enemy_flashing_on.asm:46 JSL MULT168
    case 0x009E: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/battle/enemy_flashing_on.asm:47 TAX
    case 0x00A2: c.execute<0xAA>(0x000000, 1); return true;
    // src/battle/enemy_flashing_on.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0x00A3: c.execute<0xE2>(0x000020, 2); return true;
    // src/battle/enemy_flashing_on.asm:49 LDA #1
    case 0x00A5: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x009D01, 3); return true;
    // src/battle/enemy_flashing_on.asm:50 STA BATTLERS_TABLE+battler::unknown74,X
    case 0x00A7: c.execute<0x9D>(0x009FF6, 3); return true;
    // src/battle/enemy_flashing_on.asm:50 STA BATTLERS_TABLE+battler::unknown74,X
    // Overlapping static entry reached from 0xEF00A5.
    case 0x00A8: c.execute<0xF6>(0x00009F, 2); return true;
    // src/battle/enemy_flashing_on.asm:50 STA BATTLERS_TABLE+battler::unknown74,X
    // Overlapping static entry reached from 0xEF05E1.
    case 0x00A9: c.execute<0x9F>(0xA920C2, 4); return true;
    // src/battle/enemy_flashing_on.asm:52 REP #PROC_FLAGS::ACCUM8
    case 0x00AA: c.execute<0xC2>(0x000020, 2); return true;
    // src/battle/enemy_flashing_on.asm:53 LDA #1
    case 0x00AC: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/battle/enemy_flashing_on.asm:53 LDA #1
    // Overlapping static entry reached from 0xEF00A9.
    case 0x00AD: c.execute<0x01>(0x000000, 2); return true;
    // src/battle/enemy_flashing_on.asm:53 LDA #1
    // Overlapping static entry reached from 0xEF00AC.
    case 0x00AE: c.execute<0x00>(0x00008D, 2); return true;
    // src/battle/enemy_flashing_on.asm:54 STA ENEMY_TARGETTING_FLASHING
    case 0x00AF: c.execute<0x8D>(0x00ADA2, 3); return true;
    // src/battle/enemy_flashing_on.asm:55 SEP #PROC_FLAGS::ACCUM8
    case 0x00B2: c.execute<0xE2>(0x000020, 2); return true;
    // src/battle/enemy_flashing_on.asm:56 STA REDRAW_ALL_WINDOWS
    case 0x00B4: c.execute<0x8D>(0x009623, 3); return true;
    // src/battle/enemy_flashing_on.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0x00B7: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    case 0x00B9: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x00BA: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x00BB: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x00BD: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0x00BE: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x00BF: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x00C0: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF00C0.
    case 0x00C2: c.execute<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x00C3: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0x00C4: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EF00BB.asm:8 STA @LOCAL00
    case 0x00C5: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EF00BB.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xEF00C2.
    case 0x00C6: c.execute<0x0E>(0x00B9A8, 3); return true;
    // src/unknown/EF/EF00BB.asm:9 TAY
    case 0x00C7: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EF00BB.asm:10 LDA __BSS_START__,Y
    case 0x00C8: c.execute<0xB9>(0x000000, 3); return true;
    // src/unknown/EF/EF00BB.asm:10 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xEF00C6.
    case 0x00C9: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EF00BB.asm:11 AND #$03FF
    case 0x00CB: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0003FF, 3); return true;
    // src/unknown/EF/EF00BB.asm:11 AND #$03FF
    // Overlapping static entry reached from 0xEF00CB.
    case 0x00CD: c.execute<0x03>(0x000099, 2); return true;
    // src/unknown/EF/EF00BB.asm:12 STA __BSS_START__,Y
    case 0x00CE: c.execute<0x99>(0x000000, 3); return true;
    // src/unknown/EF/EF00BB.asm:12 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xEF00CD.
    case 0x00CF: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EF00BB.asm:13 TXA
    case 0x00D1: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF00BB.asm:14 ASL
    case 0x00D2: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF00BB.asm:15 STA @VIRTUAL02
    case 0x00D3: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF00BB.asm:16 LDA @LOCAL00
    case 0x00D5: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EF00BB.asm:17 CLC
    case 0x00D7: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF00BB.asm:18 ADC @VIRTUAL02
    case 0x00D8: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/EF/EF00BB.asm:19 TAX
    case 0x00DA: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF00BB.asm:20 LDA __BSS_START__,X
    case 0x00DB: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF00BB.asm:21 AND #$03FF
    case 0x00DE: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0003FF, 3); return true;
    // src/unknown/EF/EF00BB.asm:21 AND #$03FF
    // Overlapping static entry reached from 0xEF00DE.
    case 0x00E0: c.execute<0x03>(0x00009D, 2); return true;
    // src/unknown/EF/EF00BB.asm:22 STA __BSS_START__,X
    case 0x00E1: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF00BB.asm:22 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEF00E0.
    case 0x00E2: c.execute<0x00>(0x000000, 2); return true;
    // include/macros.asm:25 PLD
    case 0x00E4: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x00E5: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x00E6: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x00E8: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0x00E9: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x00EA: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x00EB: if (c.p & 0x20) c.execute<0x69>(0x0000F2, 2); else c.execute<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF00EB.
    case 0x00ED: c.execute<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x00EE: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0x00EF: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EF00E6.asm:9 STY @VIRTUAL02
    case 0x00F0: c.execute<0x84>(0x000002, 2); return true;
    // src/unknown/EF/EF00E6.asm:9 STY @VIRTUAL02
    // Overlapping static entry reached from 0xEF00ED.
    case 0x00F1: c.execute<0x02>(0x00009B, 2); return true;
    // src/unknown/EF/EF00E6.asm:10 TXY
    case 0x00F2: c.execute<0x9B>(0x000000, 1); return true;
    // src/unknown/EF/EF00E6.asm:11 TAX
    case 0x00F3: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF00E6.asm:12 LDA __BSS_START__,X
    case 0x00F4: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF00E6.asm:13 AND #$03FF
    case 0x00F7: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0003FF, 3); return true;
    // src/unknown/EF/EF00E6.asm:13 AND #$03FF
    // Overlapping static entry reached from 0xEF00F7.
    case 0x00F9: c.execute<0x03>(0x000005, 2); return true;
    // src/unknown/EF/EF00E6.asm:14 ORA @VIRTUAL02
    case 0x00FA: c.execute<0x05>(0x000002, 2); return true;
    // src/unknown/EF/EF00E6.asm:14 ORA @VIRTUAL02
    // Overlapping static entry reached from 0xEF00F9.
    case 0x00FB: c.execute<0x02>(0x00009D, 2); return true;
    // src/unknown/EF/EF00E6.asm:15 STA __BSS_START__,X
    case 0x00FC: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF00E6.asm:16 TYA
    case 0x00FF: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/EF/EF00E6.asm:17 ASL
    case 0x0100: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF00E6.asm:18 STA @VIRTUAL04
    case 0x0101: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EF00E6.asm:19 TXA
    case 0x0103: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF00E6.asm:20 CLC
    case 0x0104: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF00E6.asm:21 ADC @VIRTUAL04
    case 0x0105: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/EF/EF00E6.asm:22 TAX
    case 0x0107: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF00E6.asm:23 LDA __BSS_START__,X
    case 0x0108: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF00E6.asm:24 AND #$03FF
    case 0x010B: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0003FF, 3); return true;
    // src/unknown/EF/EF00E6.asm:24 AND #$03FF
    // Overlapping static entry reached from 0xEF010B.
    case 0x010D: c.execute<0x03>(0x000005, 2); return true;
    // src/unknown/EF/EF00E6.asm:25 ORA @VIRTUAL02
    case 0x010E: c.execute<0x05>(0x000002, 2); return true;
    // src/unknown/EF/EF00E6.asm:25 ORA @VIRTUAL02
    // Overlapping static entry reached from 0xEF010D.
    case 0x010F: c.execute<0x02>(0x00009D, 2); return true;
    // src/unknown/EF/EF00E6.asm:26 STA __BSS_START__,X
    case 0x0110: c.execute<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    case 0x0113: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x0114: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0115: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0117: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0x0118: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0119: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x011A: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF011A.
    case 0x011C: c.execute<0xFF>(0x0A685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x011D: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0x011E: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EF0115.asm:9 ASL
    case 0x011F: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0115.asm:10 TAX
    case 0x0120: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0115.asm:11 LDA OPEN_WINDOW_TABLE,X
    case 0x0121: c.execute<0xBD>(0x0088E4, 3); return true;
    // src/unknown/EF/EF0115.asm:12 LDY #.SIZEOF(window_stats)
    case 0x0124: if (c.p & 0x10) c.execute<0xA0>(0x000052, 2); else c.execute<0xA0>(0x000052, 3); return true;
    // src/unknown/EF/EF0115.asm:12 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xEF0124.
    case 0x0126: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF0115.asm:13 JSL MULT168
    case 0x0127: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/EF/EF0115.asm:14 CLC
    case 0x012B: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0115.asm:15 ADC #.LOWORD(WINDOW_STATS)
    case 0x012C: if (c.p & 0x20) c.execute<0x69>(0x000050, 2); else c.execute<0x69>(0x008650, 3); return true;
    // src/unknown/EF/EF0115.asm:15 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xEF012C.
    case 0x012E: c.execute<0x86>(0x0000AA, 2); return true;
    // src/unknown/EF/EF0115.asm:16 TAX
    case 0x012F: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0115.asm:17 LDY a:window_stats::tilemap_address,X
    case 0x0130: c.execute<0xBC>(0x000035, 3); return true;
    // src/unknown/EF/EF0115.asm:18 STY @LOCAL01
    case 0x0133: c.execute<0x84>(0x000010, 2); return true;
    // src/unknown/EF/EF0115.asm:19 LDY a:window_stats::height,X
    case 0x0135: c.execute<0xBC>(0x00000C, 3); return true;
    // src/unknown/EF/EF0115.asm:20 LDA a:window_stats::width,X
    case 0x0138: c.execute<0xBD>(0x00000A, 3); return true;
    // src/unknown/EF/EF0115.asm:21 JSL MULT16
    case 0x013B: c.execute<0x22>(0xC09032, 4); return true;
    // src/unknown/EF/EF0115.asm:22 TAX
    case 0x013F: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0115.asm:23 STX @LOCAL00
    case 0x0140: c.execute<0x86>(0x00000E, 2); return true;
    // src/unknown/EF/EF0115.asm:24 BRA @UNKNOWN2
    case 0x0142: c.execute<0x80>(0x00001C, 2); return true;
    // src/unknown/EF/EF0115.asm:26 LDY @LOCAL01
    case 0x0144: c.execute<0xA4>(0x000010, 2); return true;
    // src/unknown/EF/EF0115.asm:27 LDA __BSS_START__,Y
    case 0x0146: c.execute<0xB9>(0x000000, 3); return true;
    // src/unknown/EF/EF0115.asm:28 BEQ @UNKNOWN1
    case 0x0149: c.execute<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EF0115.asm:29 JSL FREE_TILE_SAFE
    case 0x014B: c.execute<0x22>(0xC44E4D, 4); return true;
    // src/unknown/EF/EF0115.asm:31 LDA #64
    case 0x014F: if (c.p & 0x20) c.execute<0xA9>(0x000040, 2); else c.execute<0xA9>(0x000040, 3); return true;
    // src/unknown/EF/EF0115.asm:31 LDA #64
    // Overlapping static entry reached from 0xEF014F.
    case 0x0151: c.execute<0x00>(0x0000A4, 2); return true;
    // src/unknown/EF/EF0115.asm:32 LDY @LOCAL01
    case 0x0152: c.execute<0xA4>(0x000010, 2); return true;
    // src/unknown/EF/EF0115.asm:33 STA __BSS_START__,Y
    case 0x0154: c.execute<0x99>(0x000000, 3); return true;
    // src/unknown/EF/EF0115.asm:34 INY
    case 0x0157: c.execute<0xC8>(0x000000, 1); return true;
    // src/unknown/EF/EF0115.asm:35 INY
    case 0x0158: c.execute<0xC8>(0x000000, 1); return true;
    // src/unknown/EF/EF0115.asm:36 STY @LOCAL01
    case 0x0159: c.execute<0x84>(0x000010, 2); return true;
    // src/unknown/EF/EF0115.asm:37 LDX @LOCAL00
    case 0x015B: c.execute<0xA6>(0x00000E, 2); return true;
    // src/unknown/EF/EF0115.asm:38 DEX
    case 0x015D: c.execute<0xCA>(0x000000, 1); return true;
    // src/unknown/EF/EF0115.asm:39 STX @LOCAL00
    case 0x015E: c.execute<0x86>(0x00000E, 2); return true;
    // src/unknown/EF/EF0115.asm:41 BNE @UNKNOWN0
    case 0x0160: c.execute<0xD0>(0x0000E2, 2); return true;
    // src/unknown/EF/EF0115.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0x0162: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EF0115.asm:43 LDA #1
    case 0x0164: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x008D01, 3); return true;
    // src/unknown/EF/EF0115.asm:44 STA REDRAW_ALL_WINDOWS
    case 0x0166: c.execute<0x8D>(0x009623, 3); return true;
    // src/unknown/EF/EF0115.asm:44 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xEF0164.
    case 0x0167: c.execute<0x23>(0x000096, 2); return true;
    // src/unknown/EF/EF0115.asm:45 JSL UNKNOWN_C07C5B
    case 0x0169: c.execute<0x22>(0xC07C5B, 4); return true;
    // include/macros.asm:25 PLD
    case 0x016D: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x016E: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x016F: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0171: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0172: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0173: if (c.p & 0x20) c.execute<0x69>(0x0000EC, 2); else c.execute<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF0173.
    case 0x0175: c.execute<0xFF>(0x58AD5B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0176: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:9 LDA CURRENT_FOCUS_WINDOW
    case 0x0177: c.execute<0xAD>(0x008958, 3); return true;
    // src/unknown/EF/EF016F.asm:9 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xEF0175.
    case 0x0179: if (c.p & 0x20) c.execute<0x89>(0x00000A, 2); else c.execute<0x89>(0x00AA0A, 3); return true;
    // src/unknown/EF/EF016F.asm:10 ASL
    case 0x017A: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:11 TAX
    case 0x017B: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:12 LDA OPEN_WINDOW_TABLE,X
    case 0x017C: c.execute<0xBD>(0x0088E4, 3); return true;
    // src/unknown/EF/EF016F.asm:13 LDY #.SIZEOF(window_stats)
    case 0x017F: if (c.p & 0x10) c.execute<0xA0>(0x000052, 2); else c.execute<0xA0>(0x000052, 3); return true;
    // src/unknown/EF/EF016F.asm:13 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xEF017F.
    case 0x0181: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF016F.asm:14 JSL MULT168
    case 0x0182: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/EF/EF016F.asm:15 CLC
    case 0x0186: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:16 ADC #.LOWORD(WINDOW_STATS)
    case 0x0187: if (c.p & 0x20) c.execute<0x69>(0x000050, 2); else c.execute<0x69>(0x008650, 3); return true;
    // src/unknown/EF/EF016F.asm:16 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xEF0187.
    case 0x0189: c.execute<0x86>(0x000085, 2); return true;
    // src/unknown/EF/EF016F.asm:17 STA @LOCAL02
    case 0x018A: c.execute<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EF016F.asm:17 STA @LOCAL02
    // Overlapping static entry reached from 0xEF0189.
    case 0x018B: c.execute<0x12>(0x000018, 2); return true;
    // src/unknown/EF/EF016F.asm:18 CLC
    case 0x018C: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:19 ADC #window_stats::current_option
    case 0x018D: if (c.p & 0x20) c.execute<0x69>(0x00002B, 2); else c.execute<0x69>(0x00002B, 3); return true;
    // src/unknown/EF/EF016F.asm:19 ADC #window_stats::current_option
    // Overlapping static entry reached from 0xEF018D.
    case 0x018F: c.execute<0x00>(0x0000A8, 2); return true;
    // src/unknown/EF/EF016F.asm:20 TAY
    case 0x0190: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:21 STY @LOCAL01
    case 0x0191: c.execute<0x84>(0x000010, 2); return true;
    // src/unknown/EF/EF016F.asm:22 LDA @LOCAL02
    case 0x0193: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF016F.asm:23 CLC
    case 0x0195: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:24 ADC #window_stats::selected_option
    case 0x0196: if (c.p & 0x20) c.execute<0x69>(0x00002F, 2); else c.execute<0x69>(0x00002F, 3); return true;
    // src/unknown/EF/EF016F.asm:24 ADC #window_stats::selected_option
    // Overlapping static entry reached from 0xEF0196.
    case 0x0198: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF016F.asm:25 STA @LOCAL00
    case 0x0199: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EF016F.asm:26 TAX
    case 0x019B: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:27 LDA __BSS_START__,X
    case 0x019C: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF016F.asm:28 STA @VIRTUAL02
    case 0x019F: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF016F.asm:29 LDA __BSS_START__,Y
    case 0x01A1: c.execute<0xB9>(0x000000, 3); return true;
    // src/unknown/EF/EF016F.asm:30 CLC
    case 0x01A4: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:31 ADC @VIRTUAL02
    case 0x01A5: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/EF/EF016F.asm:32 LDY #.SIZEOF(menu_option)
    case 0x01A7: if (c.p & 0x10) c.execute<0xA0>(0x00002D, 2); else c.execute<0xA0>(0x00002D, 3); return true;
    // src/unknown/EF/EF016F.asm:32 LDY #.SIZEOF(menu_option)
    // Overlapping static entry reached from 0xEF01A7.
    case 0x01A9: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF016F.asm:33 JSL MULT168
    case 0x01AA: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/EF/EF016F.asm:34 CLC
    case 0x01AE: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:35 ADC #.LOWORD(MENU_OPTIONS)
    case 0x01AF: if (c.p & 0x20) c.execute<0x69>(0x0000D4, 2); else c.execute<0x69>(0x0089D4, 3); return true;
    // src/unknown/EF/EF016F.asm:35 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xEF01AF.
    case 0x01B1: if (c.p & 0x20) c.execute<0x89>(0x0000AA, 2); else c.execute<0x89>(0x00BDAA, 3); return true;
    // src/unknown/EF/EF016F.asm:36 TAX
    case 0x01B2: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:37 LDA a:menu_option::text_x,X
    case 0x01B3: c.execute<0xBD>(0x000008, 3); return true;
    // src/unknown/EF/EF016F.asm:37 LDA a:menu_option::text_x,X
    // Overlapping static entry reached from 0xEF01B1.
    case 0x01B4: c.execute<0x08>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:37 LDA a:menu_option::text_x,X
    // Overlapping static entry reached from 0xEF01B4.
    case 0x01B5: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF016F.asm:38 STA MENU_BACKUP_SELECTED_TEXT_X
    case 0x01B6: c.execute<0x8D>(0x009684, 3); return true;
    // src/unknown/EF/EF016F.asm:39 LDA a:menu_option::text_y,X
    case 0x01B9: c.execute<0xBD>(0x00000A, 3); return true;
    // src/unknown/EF/EF016F.asm:40 STA MENU_BACKUP_SELECTED_TEXT_Y
    case 0x01BC: c.execute<0x8D>(0x009686, 3); return true;
    // src/unknown/EF/EF016F.asm:41 LDY @LOCAL01
    case 0x01BF: c.execute<0xA4>(0x000010, 2); return true;
    // src/unknown/EF/EF016F.asm:42 LDA __BSS_START__,Y
    case 0x01C1: c.execute<0xB9>(0x000000, 3); return true;
    // src/unknown/EF/EF016F.asm:43 STA MENU_BACKUP_CURRENT_OPTION
    case 0x01C4: c.execute<0x8D>(0x009688, 3); return true;
    // src/unknown/EF/EF016F.asm:44 LDA @LOCAL00
    case 0x01C7: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EF016F.asm:45 TAX
    case 0x01C9: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:46 LDA __BSS_START__,X
    case 0x01CA: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF016F.asm:47 STA MENU_BACKUP_SELECTED_OPTION
    case 0x01CD: c.execute<0x8D>(0x00968A, 3); return true;
    // include/macros.asm:25 PLD
    case 0x01D0: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x01D1: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x01D2: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x01D4: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0x01D5: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x01D6: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x01D7: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF01D7.
    case 0x01D9: c.execute<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x01DA: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0x01DB: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:8 STA @LOCAL00
    case 0x01DC: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EF01D2.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xEF01D9.
    case 0x01DD: c.execute<0x0E>(0x0058AD, 3); return true;
    // src/unknown/EF/EF01D2.asm:9 LDA CURRENT_FOCUS_WINDOW
    case 0x01DE: c.execute<0xAD>(0x008958, 3); return true;
    // src/unknown/EF/EF01D2.asm:9 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xEF01DD.
    case 0x01E0: if (c.p & 0x20) c.execute<0x89>(0x00000A, 2); else c.execute<0x89>(0x00AA0A, 3); return true;
    // src/unknown/EF/EF01D2.asm:10 ASL
    case 0x01E1: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:11 TAX
    case 0x01E2: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:12 LDA OPEN_WINDOW_TABLE,X
    case 0x01E3: c.execute<0xBD>(0x0088E4, 3); return true;
    // src/unknown/EF/EF01D2.asm:13 LDY #.SIZEOF(window_stats)
    case 0x01E6: if (c.p & 0x10) c.execute<0xA0>(0x000052, 2); else c.execute<0xA0>(0x000052, 3); return true;
    // src/unknown/EF/EF01D2.asm:13 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xEF01E6.
    case 0x01E8: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF01D2.asm:14 JSL MULT168
    case 0x01E9: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/EF/EF01D2.asm:15 CLC
    case 0x01ED: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:16 ADC #.LOWORD(WINDOW_STATS)
    case 0x01EE: if (c.p & 0x20) c.execute<0x69>(0x000050, 2); else c.execute<0x69>(0x008650, 3); return true;
    // src/unknown/EF/EF01D2.asm:16 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xEF01EE.
    case 0x01F0: c.execute<0x86>(0x0000AA, 2); return true;
    // src/unknown/EF/EF01D2.asm:17 TAX
    case 0x01F1: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:18 LDA @LOCAL00
    case 0x01F2: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EF01D2.asm:19 SEC
    case 0x01F4: c.execute<0x38>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:20 SBC #$50
    case 0x01F5: if (c.p & 0x20) c.execute<0xE9>(0x000050, 2); else c.execute<0xE9>(0x000050, 3); return true;
    // src/unknown/EF/EF01D2.asm:20 SBC #$50
    // Overlapping static entry reached from 0xEF01F5.
    case 0x01F7: c.execute<0x00>(0x000029, 2); return true;
    // src/unknown/EF/EF01D2.asm:21 AND #$007F
    case 0x01F8: if (c.p & 0x20) c.execute<0x29>(0x00007F, 2); else c.execute<0x29>(0x00007F, 3); return true;
    // src/unknown/EF/EF01D2.asm:21 AND #$007F
    // Overlapping static entry reached from 0xEF01F8.
    case 0x01FA: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF01D2.asm:22 STA @LOCAL00
    case 0x01FB: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EF01D2.asm:23 LDA CHARACTER_PADDING
    case 0x01FD: c.execute<0xAD>(0x005E6D, 3); return true;
    // src/unknown/EF/EF01D2.asm:24 AND #$00FF
    case 0x0200: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EF01D2.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xEF0200.
    case 0x0202: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF01D2.asm:25 STA @VIRTUAL02
    case 0x0203: c.execute<0x85>(0x000002, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0205: c.execute<0xAF>(0xC3F054, 4); return true;
    // include/macros.asm:837 STA dest
    case 0x0209: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x020B: c.execute<0xAF>(0xC3F056, 4); return true;
    // include/macros.asm:839 STA dest+2
    case 0x020F: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EF01D2.asm:27 LDA @LOCAL00
    case 0x0211: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EF01D2.asm:28 CLC
    case 0x0213: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:29 ADC @VIRTUAL06
    case 0x0214: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EF01D2.asm:30 STA @VIRTUAL06
    case 0x0216: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EF01D2.asm:31 LDA [@VIRTUAL06]
    case 0x0218: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/EF/EF01D2.asm:32 AND #$00FF
    case 0x021A: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EF01D2.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xEF021A.
    case 0x021C: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EF01D2.asm:33 CLC
    case 0x021D: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:34 ADC @VIRTUAL02
    case 0x021E: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/EF/EF01D2.asm:35 STA @LOCAL00
    case 0x0220: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EF01D2.asm:36 LDA VWF_X
    case 0x0222: c.execute<0xAD>(0x009E23, 3); return true;
    // src/unknown/EF/EF01D2.asm:37 AND #$0007
    case 0x0225: if (c.p & 0x20) c.execute<0x29>(0x000007, 2); else c.execute<0x29>(0x000007, 3); return true;
    // src/unknown/EF/EF01D2.asm:37 AND #$0007
    // Overlapping static entry reached from 0xEF0225.
    case 0x0227: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF01D2.asm:38 STA @VIRTUAL04
    case 0x0228: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EF01D2.asm:39 LDA a:window_stats::text_x,X
    case 0x022A: c.execute<0xBD>(0x00000E, 3); return true;
    // src/unknown/EF/EF01D2.asm:40 DEC
    case 0x022D: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:41 ASL
    case 0x022E: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:42 ASL
    case 0x022F: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:43 ASL
    case 0x0230: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:44 CLC
    case 0x0231: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:45 ADC @VIRTUAL04
    case 0x0232: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/EF/EF01D2.asm:46 STA @VIRTUAL02
    case 0x0234: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF01D2.asm:47 LDA @LOCAL00
    case 0x0236: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EF01D2.asm:48 CLC
    case 0x0238: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:49 ADC @VIRTUAL02
    case 0x0239: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/EF/EF01D2.asm:50 STA @VIRTUAL02
    case 0x023B: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF01D2.asm:51 LDA a:window_stats::width,X
    case 0x023D: c.execute<0xBD>(0x00000A, 3); return true;
    // src/unknown/EF/EF01D2.asm:52 ASL
    case 0x0240: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:53 ASL
    case 0x0241: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:54 ASL
    case 0x0242: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:55 CMP @VIRTUAL02
    case 0x0243: c.execute<0xC5>(0x000002, 2); return true;
    // src/unknown/EF/EF01D2.asm:56 BCS @UNKNOWN0
    case 0x0245: c.execute<0xB0>(0x00000B, 2); return true;
    // src/unknown/EF/EF01D2.asm:57 JSL REDIRECT_PRINT_NEWLINE
    case 0x0247: c.execute<0x22>(0xC10C79, 4); return true;
    // src/unknown/EF/EF01D2.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0x024B: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EF01D2.asm:59 LDA #1
    case 0x024D: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x008D01, 3); return true;
    // src/unknown/EF/EF01D2.asm:60 STA VWF_INDENT_NEW_LINE
    case 0x024F: c.execute<0x8D>(0x005E75, 3); return true;
    // src/unknown/EF/EF01D2.asm:60 STA VWF_INDENT_NEW_LINE
    // Overlapping static entry reached from 0xEF024D.
    case 0x0250: c.execute<0x75>(0x00005E, 2); return true;
    // src/unknown/EF/EF01D2.asm:62 REP #PROC_FLAGS::ACCUM8
    case 0x0252: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    case 0x0254: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x0255: c.execute<0x6B>(0x000000, 1); return true;
    // src/audio/pause_music.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0256: c.execute<0xC2>(0x000031, 2); return true;
    // src/audio/pause_music.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0x0258: c.execute<0xE2>(0x000020, 2); return true;
    // src/audio/pause_music.asm:5 LDA #$0001
    case 0x025A: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x008D01, 3); return true;
    // src/audio/pause_music.asm:6 STA DISABLE_HPPP_ROLLING
    case 0x025C: c.execute<0x8D>(0x009697, 3); return true;
    // src/audio/pause_music.asm:6 STA DISABLE_HPPP_ROLLING
    // Overlapping static entry reached from 0xEF025A.
    case 0x025D: c.execute<0x97>(0x000096, 2); return true;
    // src/audio/pause_music.asm:7 REP #PROC_FLAGS::ACCUM8
    case 0x025F: c.execute<0xC2>(0x000020, 2); return true;
    // src/audio/pause_music.asm:8 RTL
    case 0x0261: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0262: c.execute<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EF0262.asm:5 SEP #PROC_FLAGS::ACCUM8
    case 0x0264: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EF0262.asm:6 LDA #1
    case 0x0266: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x008D01, 3); return true;
    // src/unknown/EF/EF0262.asm:7 STA HALF_HPPP_METER_SPEED
    case 0x0268: c.execute<0x8D>(0x009695, 3); return true;
    // src/unknown/EF/EF0262.asm:7 STA HALF_HPPP_METER_SPEED
    // Overlapping static entry reached from 0xEF0266.
    case 0x0269: c.execute<0x95>(0x000096, 2); return true;
    // src/unknown/EF/EF0262.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0x026B: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:30 RTL
    case 0x026D: c.execute<0x6B>(0x000000, 1); return true;
    // src/audio/resume_music.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x026E: c.execute<0xC2>(0x000031, 2); return true;
    // src/audio/resume_music.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0x0270: c.execute<0xE2>(0x000020, 2); return true;
    // src/audio/resume_music.asm:5 LDA #$0000
    case 0x0272: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x008D00, 3); return true;
    // src/audio/resume_music.asm:6 STA HALF_HPPP_METER_SPEED
    case 0x0274: c.execute<0x8D>(0x009695, 3); return true;
    // src/audio/resume_music.asm:6 STA HALF_HPPP_METER_SPEED
    // Overlapping static entry reached from 0xEF0272.
    case 0x0275: c.execute<0x95>(0x000096, 2); return true;
    // src/audio/resume_music.asm:7 STA DISABLE_HPPP_ROLLING
    case 0x0277: c.execute<0x8D>(0x009697, 3); return true;
    // src/audio/resume_music.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0x027A: c.execute<0xC2>(0x000020, 2); return true;
    // src/audio/resume_music.asm:9 RTL
    case 0x027C: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x027D: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Overlapping static entry reached from 0xEF02CF.
    case 0x027E: c.execute<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    case 0x027F: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0280: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0281: if (c.p & 0x20) c.execute<0x69>(0x0000F2, 2); else c.execute<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF0281.
    case 0x0283: c.execute<0xFF>(0x339C5B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0284: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:6 STZ BUBBLE_MONKEY_MODE
    case 0x0285: c.execute<0x9C>(0x009F33, 3); return true;
    // src/unknown/EF/EF027D.asm:6 STZ BUBBLE_MONKEY_MODE
    // Overlapping static entry reached from 0xEF0283.
    case 0x0287: c.execute<0x9F>(0x001EA9, 4); return true;
    // src/unknown/EF/EF027D.asm:7 LDA #30
    case 0x0288: if (c.p & 0x20) c.execute<0xA9>(0x00001E, 2); else c.execute<0xA9>(0x00001E, 3); return true;
    // src/unknown/EF/EF027D.asm:7 LDA #30
    // Overlapping static entry reached from 0xEF0288.
    case 0x028A: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF027D.asm:8 STA BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0x028B: c.execute<0x8D>(0x009F35, 3); return true;
    // src/unknown/EF/EF027D.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0x028E: c.execute<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF027D.asm:10 ASL
    case 0x0291: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:11 TAX
    case 0x0292: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:12 LDA #4
    case 0x0293: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EF027D.asm:12 LDA #4
    // Overlapping static entry reached from 0xEF0293.
    case 0x0295: c.execute<0x00>(0x00009D, 2); return true;
    // src/unknown/EF/EF027D.asm:13 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0x0296: c.execute<0x9D>(0x000F12, 3); return true;
    // src/unknown/EF/EF027D.asm:14 LDA CURRENT_ENTITY_SLOT
    case 0x0299: c.execute<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF027D.asm:15 ASL
    case 0x029C: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:16 TAX
    case 0x029D: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:17 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0x029E: c.execute<0xBD>(0x000E9A, 3); return true;
    // src/unknown/EF/EF027D.asm:18 ASL
    case 0x02A1: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:19 TAX
    case 0x02A2: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:20 LDA CHOSEN_FOUR_PTRS,X
    case 0x02A3: c.execute<0xBD>(0x004DC8, 3); return true;
    // src/unknown/EF/EF027D.asm:21 TAX
    case 0x02A6: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:22 LDA a:char_struct::position_index,X
    case 0x02A7: c.execute<0xBD>(0x00003D, 3); return true;
    // include/macros.asm:568 STA scratch
    case 0x02AA: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    case 0x02AC: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    case 0x02AD: c.execute<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    case 0x02AF: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    case 0x02B0: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:24 CLC
    case 0x02B1: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:25 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0x02B2: if (c.p & 0x20) c.execute<0x69>(0x000056, 2); else c.execute<0x69>(0x005156, 3); return true;
    // src/unknown/EF/EF027D.asm:25 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xEF02B2.
    case 0x02B4: c.execute<0x51>(0x0000AA, 2); return true;
    // src/unknown/EF/EF027D.asm:26 TAX
    case 0x02B5: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:27 LDA GAME_STATE+game_state::leader_x_coord
    case 0x02B6: c.execute<0xAD>(0x009877, 3); return true;
    // src/unknown/EF/EF027D.asm:28 STA a:player_position_buffer_entry::x_coord,X
    case 0x02B9: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF027D.asm:29 LDA GAME_STATE+game_state::leader_y_coord
    case 0x02BC: c.execute<0xAD>(0x00987B, 3); return true;
    // src/unknown/EF/EF027D.asm:30 STA a:player_position_buffer_entry::y_coord,X
    case 0x02BF: c.execute<0x9D>(0x000002, 3); return true;
    // include/macros.asm:25 PLD
    case 0x02C2: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x02C3: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x02C4: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x02C6: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0x02C7: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x02C8: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x02C9: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF02C9.
    case 0x02CB: c.execute<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x02CC: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0x02CD: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:9 STA @LOCAL01
    case 0x02CE: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EF02C4.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xEF02CB.
    case 0x02CF: c.execute<0x10>(0x0000AD, 2); return true;
    // src/unknown/EF/EF02C4.asm:10 LDA BUBBLE_MONKEY_MODE
    case 0x02D0: c.execute<0xAD>(0x009F33, 3); return true;
    // src/unknown/EF/EF02C4.asm:10 LDA BUBBLE_MONKEY_MODE
    // Overlapping static entry reached from 0xEF02CF.
    case 0x02D1: c.execute<0x33>(0x00009F, 2); return true;
    // src/unknown/EF/EF02C4.asm:11 CMP #3
    case 0x02D3: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EF02C4.asm:11 CMP #3
    // Overlapping static entry reached from 0xEF02D3.
    case 0x02D5: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EF02C4.asm:12 BEQ @UNKNOWN0
    case 0x02D6: c.execute<0xF0>(0x000008, 2); return true;
    // src/unknown/EF/EF02C4.asm:13 LDA BUBBLE_MONKEY_MODE
    case 0x02D8: c.execute<0xAD>(0x009F33, 3); return true;
    // src/unknown/EF/EF02C4.asm:14 CMP #1
    case 0x02DB: if (c.p & 0x20) c.execute<0xC9>(0x000001, 2); else c.execute<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EF02C4.asm:14 CMP #1
    // Overlapping static entry reached from 0xEF02DB.
    case 0x02DD: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EF02C4.asm:15 BNE @UNKNOWN1
    case 0x02DE: c.execute<0xD0>(0x000008, 2); return true;
    // src/unknown/EF/EF02C4.asm:17 LDA #2
    case 0x02E0: if (c.p & 0x20) c.execute<0xA9>(0x000002, 2); else c.execute<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EF02C4.asm:17 LDA #2
    // Overlapping static entry reached from 0xEF02E0.
    case 0x02E2: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF02C4.asm:18 STA BUBBLE_MONKEY_MODE
    case 0x02E3: c.execute<0x8D>(0x009F33, 3); return true;
    // src/unknown/EF/EF02C4.asm:19 BRA @UNKNOWN3
    case 0x02E6: c.execute<0x80>(0x000022, 2); return true;
    // src/unknown/EF/EF02C4.asm:21 LDA @LOCAL01
    case 0x02E8: c.execute<0xA5>(0x000010, 2); return true;
    // src/unknown/EF/EF02C4.asm:22 JSL UNKNOWN_C03E9D
    case 0x02EA: c.execute<0x22>(0xC03E9D, 4); return true;
    // src/unknown/EF/EF02C4.asm:23 CMP #40
    case 0x02EE: if (c.p & 0x20) c.execute<0xC9>(0x000028, 2); else c.execute<0xC9>(0x000028, 3); return true;
    // src/unknown/EF/EF02C4.asm:23 CMP #40
    // Overlapping static entry reached from 0xEF02EE.
    case 0x02F0: c.execute<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    case 0x02F1: c.execute<0x90>(0x00000A, 2); return true;
    // include/macros.asm:762 BEQ dest
    case 0x02F3: c.execute<0xF0>(0x000008, 2); return true;
    // src/unknown/EF/EF02C4.asm:25 LDA #2
    case 0x02F5: if (c.p & 0x20) c.execute<0xA9>(0x000002, 2); else c.execute<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EF02C4.asm:25 LDA #2
    // Overlapping static entry reached from 0xEF02F5.
    case 0x02F7: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF02C4.asm:26 STA BUBBLE_MONKEY_MODE
    case 0x02F8: c.execute<0x8D>(0x009F33, 3); return true;
    // src/unknown/EF/EF02C4.asm:27 BRA @UNKNOWN3
    case 0x02FB: c.execute<0x80>(0x00000D, 2); return true;
    // src/unknown/EF/EF02C4.asm:29 JSL RAND
    case 0x02FD: c.execute<0x22>(0xC08E9A, 4); return true;
    // src/unknown/EF/EF02C4.asm:30 AND #$0003
    case 0x0301: if (c.p & 0x20) c.execute<0x29>(0x000003, 2); else c.execute<0x29>(0x000003, 3); return true;
    // src/unknown/EF/EF02C4.asm:30 AND #$0003
    // Overlapping static entry reached from 0xEF0301.
    case 0x0303: c.execute<0x00>(0x0000AA, 2); return true;
    // src/unknown/EF/EF02C4.asm:31 TAX
    case 0x0304: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:32 STX @LOCAL00
    case 0x0305: c.execute<0x86>(0x00000E, 2); return true;
    // src/unknown/EF/EF02C4.asm:33 STX BUBBLE_MONKEY_MODE
    case 0x0307: c.execute<0x8E>(0x009F33, 3); return true;
    // src/unknown/EF/EF02C4.asm:35 LDX @LOCAL00
    case 0x030A: c.execute<0xA6>(0x00000E, 2); return true;
    // src/unknown/EF/EF02C4.asm:36 TXA
    case 0x030C: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:37 AND #$0003
    case 0x030D: if (c.p & 0x20) c.execute<0x29>(0x000003, 2); else c.execute<0x29>(0x000003, 3); return true;
    // src/unknown/EF/EF02C4.asm:37 AND #$0003
    // Overlapping static entry reached from 0xEF030D.
    case 0x030F: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:522 STA scratch
    case 0x0310: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    case 0x0312: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    case 0x0313: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/EF/EF02C4.asm:39 INC
    case 0x0315: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:40 INC
    case 0x0316: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:41 INC
    case 0x0317: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:42 INC
    case 0x0318: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:43 STA BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0x0319: c.execute<0x8D>(0x009F35, 3); return true;
    // include/macros.asm:25 PLD
    case 0x031C: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0x031D: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x031E: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0320: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0321: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0322: if (c.p & 0x20) c.execute<0x69>(0x0000E6, 2); else c.execute<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF0322.
    case 0x0324: c.execute<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0325: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:12 LDA CURRENT_ENTITY_SLOT
    case 0x0326: c.execute<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF031E.asm:12 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xEF0324.
    case 0x0328: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:13 STA @LOCAL05
    case 0x0329: c.execute<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EF031E.asm:14 ASL
    case 0x032B: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:15 TAX
    case 0x032C: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:16 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0x032D: c.execute<0xBD>(0x000E9A, 3); return true;
    // src/unknown/EF/EF031E.asm:17 LDY #.SIZEOF(char_struct)
    case 0x0330: if (c.p & 0x10) c.execute<0xA0>(0x00005F, 2); else c.execute<0xA0>(0x00005F, 3); return true;
    // src/unknown/EF/EF031E.asm:17 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xEF0330.
    case 0x0332: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF031E.asm:18 JSL MULT168
    case 0x0333: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/EF/EF031E.asm:19 CLC
    case 0x0337: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:20 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0x0338: if (c.p & 0x20) c.execute<0x69>(0x0000CE, 2); else c.execute<0x69>(0x0099CE, 3); return true;
    // src/unknown/EF/EF031E.asm:20 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xEF0338.
    case 0x033A: c.execute<0x99>(0x008CA8, 3); return true;
    // src/unknown/EF/EF031E.asm:21 TAY
    case 0x033B: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:22 STY CURRENT_PARTY_MEMBER_TICK
    case 0x033C: c.execute<0x8C>(0x004DC6, 3); return true;
    // src/unknown/EF/EF031E.asm:22 STY CURRENT_PARTY_MEMBER_TICK
    // Overlapping static entry reached from 0xEF033A.
    case 0x033D: c.execute<0xC6>(0x00004D, 2); return true;
    // src/unknown/EF/EF031E.asm:23 LDA a:char_struct::position_index,Y
    case 0x033F: c.execute<0xB9>(0x00003D, 3); return true;
    // src/unknown/EF/EF031E.asm:24 STA @VIRTUAL02
    case 0x0342: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF031E.asm:25 STA @VIRTUAL04
    case 0x0344: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EF031E.asm:26 STA @LOCAL04
    case 0x0346: c.execute<0x85>(0x000016, 2); return true;
    // src/unknown/EF/EF031E.asm:27 LDA @VIRTUAL02
    case 0x0348: c.execute<0xA5>(0x000002, 2); return true;
    // include/macros.asm:568 STA scratch
    case 0x034A: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    case 0x034C: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    case 0x034D: c.execute<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    case 0x034F: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    case 0x0350: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:29 CLC
    case 0x0351: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:30 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0x0352: if (c.p & 0x20) c.execute<0x69>(0x000056, 2); else c.execute<0x69>(0x005156, 3); return true;
    // src/unknown/EF/EF031E.asm:30 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xEF0352.
    case 0x0354: c.execute<0x51>(0x000085, 2); return true;
    // src/unknown/EF/EF031E.asm:31 STA @LOCAL03
    case 0x0355: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:31 STA @LOCAL03
    // Overlapping static entry reached from 0xEF0354.
    case 0x0356: c.execute<0x14>(0x0000BD, 2); return true;
    // src/unknown/EF/EF031E.asm:32 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0x0357: c.execute<0xBD>(0x000E5E, 3); return true;
    // src/unknown/EF/EF031E.asm:32 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    // Overlapping static entry reached from 0xEF0356.
    case 0x0358: c.execute<0x5E>(0x00850E, 3); return true;
    // src/unknown/EF/EF031E.asm:33 STA @LOCAL02
    case 0x035A: c.execute<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:33 STA @LOCAL02
    // Overlapping static entry reached from 0xEF0358.
    case 0x035B: c.execute<0x12>(0x0000B2, 2); return true;
    // src/unknown/EF/EF031E.asm:34 LDA (@LOCAL03) ;player_position_buffer_entry::x_coord
    case 0x035C: c.execute<0xB2>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:34 LDA (@LOCAL03) ;player_position_buffer_entry::x_coord
    // Overlapping static entry reached from 0xEF035B.
    case 0x035D: c.execute<0x14>(0x00009D, 2); return true;
    // src/unknown/EF/EF031E.asm:35 STA ENTITY_ABS_X_TABLE,X
    case 0x035E: c.execute<0x9D>(0x000B8E, 3); return true;
    // src/unknown/EF/EF031E.asm:35 STA ENTITY_ABS_X_TABLE,X
    // Overlapping static entry reached from 0xEF035D.
    case 0x035F: c.execute<0x8E>(0x00A00B, 3); return true;
    // src/unknown/EF/EF031E.asm:36 LDY #player_position_buffer_entry::y_coord
    case 0x0361: if (c.p & 0x10) c.execute<0xA0>(0x000002, 2); else c.execute<0xA0>(0x000002, 3); return true;
    // src/unknown/EF/EF031E.asm:36 LDY #player_position_buffer_entry::y_coord
    // Overlapping static entry reached from 0xEF035F.
    case 0x0362: c.execute<0x02>(0x000000, 2); return true;
    // src/unknown/EF/EF031E.asm:36 LDY #player_position_buffer_entry::y_coord
    // Overlapping static entry reached from 0xEF0361.
    case 0x0363: c.execute<0x00>(0x0000B1, 2); return true;
    // src/unknown/EF/EF031E.asm:37 LDA (@LOCAL03),Y
    case 0x0364: c.execute<0xB1>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:38 STA ENTITY_ABS_Y_TABLE,X
    case 0x0366: c.execute<0x9D>(0x000BCA, 3); return true;
    // src/unknown/EF/EF031E.asm:39 LDY #player_position_buffer_entry::walking_style
    case 0x0369: if (c.p & 0x10) c.execute<0xA0>(0x000006, 2); else c.execute<0xA0>(0x000006, 3); return true;
    // src/unknown/EF/EF031E.asm:39 LDY #player_position_buffer_entry::walking_style
    // Overlapping static entry reached from 0xEF0369.
    case 0x036B: c.execute<0x00>(0x0000B1, 2); return true;
    // src/unknown/EF/EF031E.asm:40 LDA (@LOCAL03),Y
    case 0x036C: c.execute<0xB1>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:41 BEQ @UNKNOWN0
    case 0x036E: c.execute<0xF0>(0x000026, 2); return true;
    // src/unknown/EF/EF031E.asm:42 LDY CURRENT_ENTITY_SLOT
    case 0x0370: c.execute<0xAC>(0x001A42, 3); return true;
    // src/unknown/EF/EF031E.asm:43 TAX
    case 0x0373: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:44 LDA @LOCAL02
    case 0x0374: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:45 JSL UNKNOWN_C07A56
    case 0x0376: c.execute<0x22>(0xC07A56, 4); return true;
    // src/unknown/EF/EF031E.asm:46 LDA #2
    case 0x037A: if (c.p & 0x20) c.execute<0xA9>(0x000002, 2); else c.execute<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EF031E.asm:46 LDA #2
    // Overlapping static entry reached from 0xEF037A.
    case 0x037C: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF031E.asm:47 STA @LOCAL00
    case 0x037D: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EF031E.asm:48 LDY @VIRTUAL02
    case 0x037F: c.execute<0xA4>(0x000002, 2); return true;
    // src/unknown/EF/EF031E.asm:49 LDX #30
    case 0x0381: if (c.p & 0x10) c.execute<0xA2>(0x00001E, 2); else c.execute<0xA2>(0x00001E, 3); return true;
    // src/unknown/EF/EF031E.asm:49 LDX #30
    // Overlapping static entry reached from 0xEF0381.
    case 0x0383: c.execute<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EF031E.asm:50 LDA @LOCAL02
    case 0x0384: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:51 JSL UNKNOWN_C03EC3
    case 0x0386: c.execute<0x22>(0xC03EC3, 4); return true;
    // src/unknown/EF/EF031E.asm:52 AND #$00FF
    case 0x038A: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EF031E.asm:52 AND #$00FF
    // Overlapping static entry reached from 0xEF038A.
    case 0x038C: c.execute<0x00>(0x0000AE, 2); return true;
    // src/unknown/EF/EF031E.asm:53 LDX CURRENT_PARTY_MEMBER_TICK
    case 0x038D: c.execute<0xAE>(0x004DC6, 3); return true;
    // src/unknown/EF/EF031E.asm:54 STA a:char_struct::position_index,X
    case 0x0390: c.execute<0x9D>(0x00003D, 3); return true;
    // src/unknown/EF/EF031E.asm:55 JMP @UNKNOWN14
    case 0x0393: c.execute<0x4C>(0x0004DA, 3); return true;
    // src/unknown/EF/EF031E.asm:57 LDA BUBBLE_MONKEY_MODE
    case 0x0396: c.execute<0xAD>(0x009F33, 3); return true;
    // src/unknown/EF/EF031E.asm:58 BEQ @UNKNOWN3
    case 0x0399: c.execute<0xF0>(0x000018, 2); return true;
    // src/unknown/EF/EF031E.asm:59 CMP #2
    case 0x039B: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EF031E.asm:59 CMP #2
    // Overlapping static entry reached from 0xEF039B.
    case 0x039D: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EF031E.asm:60 BEQ @UNKNOWN3
    case 0x039E: c.execute<0xF0>(0x000013, 2); return true;
    // src/unknown/EF/EF031E.asm:61 CMP #1
    case 0x03A0: if (c.p & 0x20) c.execute<0xC9>(0x000001, 2); else c.execute<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EF031E.asm:61 CMP #1
    // Overlapping static entry reached from 0xEF03A0.
    case 0x03A2: c.execute<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    case 0x03A3: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0x03A5: c.execute<0x4C>(0x000426, 3); return true;
    // src/unknown/EF/EF031E.asm:63 CMP #3
    case 0x03A8: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EF031E.asm:63 CMP #3
    // Overlapping static entry reached from 0xEF03A8.
    case 0x03AA: c.execute<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    case 0x03AB: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0x03AD: c.execute<0x4C>(0x000437, 3); return true;
    // src/unknown/EF/EF031E.asm:65 JMP @UNKNOWN11
    case 0x03B0: c.execute<0x4C>(0x00048E, 3); return true;
    // src/unknown/EF/EF031E.asm:67 LDA #2
    case 0x03B3: if (c.p & 0x20) c.execute<0xA9>(0x000002, 2); else c.execute<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EF031E.asm:67 LDA #2
    // Overlapping static entry reached from 0xEF03B3.
    case 0x03B5: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF031E.asm:68 STA @LOCAL00
    case 0x03B6: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EF031E.asm:69 LDY @VIRTUAL02
    case 0x03B8: c.execute<0xA4>(0x000002, 2); return true;
    // src/unknown/EF/EF031E.asm:70 LDX #12
    case 0x03BA: if (c.p & 0x10) c.execute<0xA2>(0x00000C, 2); else c.execute<0xA2>(0x00000C, 3); return true;
    // src/unknown/EF/EF031E.asm:70 LDX #12
    // Overlapping static entry reached from 0xEF03BA.
    case 0x03BC: c.execute<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EF031E.asm:71 LDA @LOCAL02
    case 0x03BD: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:72 JSL UNKNOWN_C03EC3
    case 0x03BF: c.execute<0x22>(0xC03EC3, 4); return true;
    // src/unknown/EF/EF031E.asm:73 STA @VIRTUAL02
    case 0x03C3: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF031E.asm:74 AND #$00FF
    case 0x03C5: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EF031E.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xEF03C5.
    case 0x03C7: c.execute<0x00>(0x0000AE, 2); return true;
    // src/unknown/EF/EF031E.asm:75 LDX CURRENT_PARTY_MEMBER_TICK
    case 0x03C8: c.execute<0xAE>(0x004DC6, 3); return true;
    // src/unknown/EF/EF031E.asm:76 STA a:char_struct::position_index,X
    case 0x03CB: c.execute<0x9D>(0x00003D, 3); return true;
    // src/unknown/EF/EF031E.asm:77 LDA @LOCAL04
    case 0x03CE: c.execute<0xA5>(0x000016, 2); return true;
    // src/unknown/EF/EF031E.asm:78 STA @VIRTUAL04
    case 0x03D0: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EF031E.asm:79 CMP @VIRTUAL02
    case 0x03D2: c.execute<0xC5>(0x000002, 2); return true;
    // src/unknown/EF/EF031E.asm:80 BEQ @UNKNOWN4
    case 0x03D4: c.execute<0xF0>(0x000007, 2); return true;
    // src/unknown/EF/EF031E.asm:81 LDA @VIRTUAL04
    case 0x03D6: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EF031E.asm:82 INC
    case 0x03D8: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:83 CMP @VIRTUAL02
    case 0x03D9: c.execute<0xC5>(0x000002, 2); return true;
    // src/unknown/EF/EF031E.asm:84 BNE @UNKNOWN6
    case 0x03DB: c.execute<0xD0>(0x00001D, 2); return true;
    // src/unknown/EF/EF031E.asm:86 LDY CURRENT_ENTITY_SLOT
    case 0x03DD: c.execute<0xAC>(0x001A42, 3); return true;
    // src/unknown/EF/EF031E.asm:87 STY @LOCAL01
    case 0x03E0: c.execute<0x84>(0x000010, 2); return true;
    // src/unknown/EF/EF031E.asm:87 STY @LOCAL01
    // Overlapping static entry reached from 0xEF0442.
    case 0x03E1: c.execute<0x10>(0x0000A0, 2); return true;
    // src/unknown/EF/EF031E.asm:88 LDY #player_position_buffer_entry::walking_style
    case 0x03E2: if (c.p & 0x10) c.execute<0xA0>(0x000006, 2); else c.execute<0xA0>(0x000006, 3); return true;
    // src/unknown/EF/EF031E.asm:88 LDY #player_position_buffer_entry::walking_style
    // Overlapping static entry reached from 0xEF03E1.
    case 0x03E3: c.execute<0x06>(0x000000, 2); return true;
    // src/unknown/EF/EF031E.asm:88 LDY #player_position_buffer_entry::walking_style
    // Overlapping static entry reached from 0xEF03E2.
    case 0x03E4: c.execute<0x00>(0x0000B1, 2); return true;
    // src/unknown/EF/EF031E.asm:89 LDA (@LOCAL03),Y
    case 0x03E5: c.execute<0xB1>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:90 TAX
    case 0x03E7: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:91 LDA @LOCAL02
    case 0x03E8: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:92 LDY @LOCAL01
    case 0x03EA: c.execute<0xA4>(0x000010, 2); return true;
    // src/unknown/EF/EF031E.asm:93 JSL UNKNOWN_C07A56
    case 0x03EC: c.execute<0x22>(0xC07A56, 4); return true;
    // src/unknown/EF/EF031E.asm:94 LDA GAME_STATE + game_state::unknown90
    case 0x03F0: c.execute<0xAD>(0x009885, 3); return true;
    // include/macros.asm:772 BNE :+
    case 0x03F3: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0x03F5: c.execute<0x4C>(0x00048E, 3); return true;
    // src/unknown/EF/EF031E.asm:96 BRA @UNKNOWN7
    case 0x03F8: c.execute<0x80>(0x00000C, 2); return true;
    // src/unknown/EF/EF031E.asm:98 LDY CURRENT_ENTITY_SLOT
    case 0x03FA: c.execute<0xAC>(0x001A42, 3); return true;
    // src/unknown/EF/EF031E.asm:99 LDX #14
    case 0x03FD: if (c.p & 0x10) c.execute<0xA2>(0x00000E, 2); else c.execute<0xA2>(0x00000E, 3); return true;
    // src/unknown/EF/EF031E.asm:99 LDX #14
    // Overlapping static entry reached from 0xEF03FD.
    case 0x03FF: c.execute<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EF031E.asm:100 LDA @LOCAL02
    case 0x0400: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:101 JSL UNKNOWN_C07A56
    case 0x0402: c.execute<0x22>(0xC07A56, 4); return true;
    // src/unknown/EF/EF031E.asm:103 LDA @LOCAL05
    case 0x0406: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EF031E.asm:104 ASL
    case 0x0408: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:105 STA @LOCAL04
    case 0x0409: c.execute<0x85>(0x000016, 2); return true;
    // src/unknown/EF/EF031E.asm:106 TAX
    case 0x040B: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:107 LDY #player_position_buffer_entry::direction
    case 0x040C: if (c.p & 0x10) c.execute<0xA0>(0x000008, 2); else c.execute<0xA0>(0x000008, 3); return true;
    // src/unknown/EF/EF031E.asm:107 LDY #player_position_buffer_entry::direction
    // Overlapping static entry reached from 0xEF040C.
    case 0x040E: c.execute<0x00>(0x0000B1, 2); return true;
    // src/unknown/EF/EF031E.asm:108 LDA (@LOCAL03),Y
    case 0x040F: c.execute<0xB1>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:109 STA ENTITY_DIRECTIONS,X
    case 0x0411: c.execute<0x9D>(0x002AF6, 3); return true;
    // src/unknown/EF/EF031E.asm:110 LDA @LOCAL04
    case 0x0414: c.execute<0xA5>(0x000016, 2); return true;
    // src/unknown/EF/EF031E.asm:111 CLC
    case 0x0416: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:112 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0x0417: if (c.p & 0x20) c.execute<0x69>(0x000002, 2); else c.execute<0x69>(0x001002, 3); return true;
    // src/unknown/EF/EF031E.asm:112 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xEF0417.
    case 0x0419: c.execute<0x10>(0x0000AA, 2); return true;
    // src/unknown/EF/EF031E.asm:113 TAX
    case 0x041A: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:114 LDA __BSS_START__,X
    case 0x041B: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:115 AND #$1FFF
    case 0x041E: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x001FFF, 3); return true;
    // src/unknown/EF/EF031E.asm:115 AND #$1FFF
    // Overlapping static entry reached from 0xEF041E.
    case 0x0420: c.execute<0x1F>(0x00009D, 4); return true;
    // src/unknown/EF/EF031E.asm:116 STA __BSS_START__,X
    case 0x0421: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:117 BRA @UNKNOWN11
    case 0x0424: c.execute<0x80>(0x000068, 2); return true;
    // src/unknown/EF/EF031E.asm:119 TXA
    case 0x0426: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:120 CLC
    case 0x0427: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:121 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0x0428: if (c.p & 0x20) c.execute<0x69>(0x000002, 2); else c.execute<0x69>(0x001002, 3); return true;
    // src/unknown/EF/EF031E.asm:121 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xEF0428.
    case 0x042A: c.execute<0x10>(0x0000AA, 2); return true;
    // src/unknown/EF/EF031E.asm:122 TAX
    case 0x042B: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:123 LDA __BSS_START__,X
    case 0x042C: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:124 ORA #$7000
    case 0x042F: if (c.p & 0x20) c.execute<0x09>(0x000000, 2); else c.execute<0x09>(0x007000, 3); return true;
    // src/unknown/EF/EF031E.asm:124 ORA #$7000
    // Overlapping static entry reached from 0xEF042F.
    case 0x0431: c.execute<0x70>(0x00009D, 2); return true;
    // src/unknown/EF/EF031E.asm:125 STA __BSS_START__,X
    case 0x0432: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:125 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEF0431.
    case 0x0433: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EF031E.asm:126 BRA @UNKNOWN11
    case 0x0435: c.execute<0x80>(0x000057, 2); return true;
    // src/unknown/EF/EF031E.asm:128 TXA
    case 0x0437: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:129 CLC
    case 0x0438: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:130 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0x0439: if (c.p & 0x20) c.execute<0x69>(0x000002, 2); else c.execute<0x69>(0x001002, 3); return true;
    // src/unknown/EF/EF031E.asm:130 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xEF0439.
    case 0x043B: c.execute<0x10>(0x0000AA, 2); return true;
    // src/unknown/EF/EF031E.asm:131 TAX
    case 0x043C: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:132 LDA __BSS_START__,X
    case 0x043D: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:133 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN14 | SPRITE_TABLE_10_FLAGS::UNKNOWN13 | SPRITE_TABLE_10_FLAGS::UNKNOWN12
    case 0x0440: if (c.p & 0x20) c.execute<0x09>(0x000000, 2); else c.execute<0x09>(0x007000, 3); return true;
    // src/unknown/EF/EF031E.asm:133 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN14 | SPRITE_TABLE_10_FLAGS::UNKNOWN13 | SPRITE_TABLE_10_FLAGS::UNKNOWN12
    // Overlapping static entry reached from 0xEF0440.
    case 0x0442: c.execute<0x70>(0x00009D, 2); return true;
    // src/unknown/EF/EF031E.asm:134 STA __BSS_START__,X
    case 0x0443: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:134 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEF0442.
    case 0x0444: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EF031E.asm:135 LDX #.LOWORD(BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION_CHANGE_TIME)
    case 0x0446: if (c.p & 0x10) c.execute<0xA2>(0x00003B, 2); else c.execute<0xA2>(0x009F3B, 3); return true;
    // src/unknown/EF/EF031E.asm:135 LDX #.LOWORD(BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION_CHANGE_TIME)
    // Overlapping static entry reached from 0xEF0446.
    case 0x0448: c.execute<0x9F>(0x0000BD, 4); return true;
    // src/unknown/EF/EF031E.asm:136 LDA __BSS_START__,X
    case 0x0449: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:137 DEC
    case 0x044C: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:138 STA __BSS_START__,X
    case 0x044D: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:139 BNE @UNKNOWN11
    case 0x0450: c.execute<0xD0>(0x00003C, 2); return true;
    // src/unknown/EF/EF031E.asm:140 LDY #.LOWORD(BUBBLE_MONKEY_DISTRACTED_DIRECTION_CHANGES_LEFT)
    case 0x0452: if (c.p & 0x10) c.execute<0xA0>(0x00003D, 2); else c.execute<0xA0>(0x009F3D, 3); return true;
    // src/unknown/EF/EF031E.asm:140 LDY #.LOWORD(BUBBLE_MONKEY_DISTRACTED_DIRECTION_CHANGES_LEFT)
    // Overlapping static entry reached from 0xEF0452.
    case 0x0454: c.execute<0x9F>(0x0000B9, 4); return true;
    // src/unknown/EF/EF031E.asm:141 LDA __BSS_START__,Y
    case 0x0455: c.execute<0xB9>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:142 DEC
    case 0x0458: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:143 STA __BSS_START__,Y
    case 0x0459: c.execute<0x99>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:144 BNE @UNKNOWN10
    case 0x045C: c.execute<0xD0>(0x00000C, 2); return true;
    // src/unknown/EF/EF031E.asm:145 LDA #15
    case 0x045E: if (c.p & 0x20) c.execute<0xA9>(0x00000F, 2); else c.execute<0xA9>(0x00000F, 3); return true;
    // src/unknown/EF/EF031E.asm:145 LDA #15
    // Overlapping static entry reached from 0xEF045E.
    case 0x0460: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF031E.asm:146 STA BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0x0461: c.execute<0x8D>(0x009F35, 3); return true;
    // src/unknown/EF/EF031E.asm:147 LDA #.LOWORD(-1)
    case 0x0464: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EF031E.asm:147 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEF0464.
    case 0x0466: c.execute<0xFF>(0x00009D, 4); return true;
    // src/unknown/EF/EF031E.asm:148 STA __BSS_START__,X
    case 0x0467: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:150 JSL RAND
    case 0x046A: c.execute<0x22>(0xC08E9A, 4); return true;
    // src/unknown/EF/EF031E.asm:151 ASL
    case 0x046E: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:152 ASL
    case 0x046F: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:153 AND #$000F
    case 0x0470: if (c.p & 0x20) c.execute<0x29>(0x00000F, 2); else c.execute<0x29>(0x00000F, 3); return true;
    // src/unknown/EF/EF031E.asm:153 AND #$000F
    // Overlapping static entry reached from 0xEF0470.
    case 0x0472: c.execute<0x00>(0x00001A, 2); return true;
    // src/unknown/EF/EF031E.asm:154 INC
    case 0x0473: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:155 INC
    case 0x0474: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:156 INC
    case 0x0475: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:157 INC
    case 0x0476: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:158 STA BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION_CHANGE_TIME
    case 0x0477: c.execute<0x8D>(0x009F3B, 3); return true;
    // src/unknown/EF/EF031E.asm:159 LDA BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION
    case 0x047A: c.execute<0xAD>(0x009F39, 3); return true;
    // src/unknown/EF/EF031E.asm:160 EOR #$0004
    case 0x047D: if (c.p & 0x20) c.execute<0x49>(0x000004, 2); else c.execute<0x49>(0x000004, 3); return true;
    // src/unknown/EF/EF031E.asm:160 EOR #$0004
    // Overlapping static entry reached from 0xEF047D.
    case 0x047F: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF031E.asm:161 STA @LOCAL04
    case 0x0480: c.execute<0x85>(0x000016, 2); return true;
    // src/unknown/EF/EF031E.asm:162 STA BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION
    case 0x0482: c.execute<0x8D>(0x009F39, 3); return true;
    // src/unknown/EF/EF031E.asm:163 LDA @LOCAL05
    case 0x0485: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EF031E.asm:164 ASL
    case 0x0487: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:165 TAX
    case 0x0488: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:166 LDA @LOCAL04
    case 0x0489: c.execute<0xA5>(0x000016, 2); return true;
    // src/unknown/EF/EF031E.asm:167 STA ENTITY_DIRECTIONS,X
    case 0x048B: c.execute<0x9D>(0x002AF6, 3); return true;
    // src/unknown/EF/EF031E.asm:169 LDA @LOCAL05
    case 0x048E: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EF031E.asm:170 ASL
    case 0x0490: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:171 TAX
    case 0x0491: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:172 LDA #4
    case 0x0492: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EF031E.asm:172 LDA #4
    // Overlapping static entry reached from 0xEF0492.
    case 0x0494: c.execute<0x00>(0x00009D, 2); return true;
    // src/unknown/EF/EF031E.asm:173 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0x0495: c.execute<0x9D>(0x000F12, 3); return true;
    // src/unknown/EF/EF031E.asm:174 LDX BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0x0498: c.execute<0xAE>(0x009F35, 3); return true;
    // src/unknown/EF/EF031E.asm:175 DEX
    case 0x049B: c.execute<0xCA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:176 STX BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0x049C: c.execute<0x8E>(0x009F35, 3); return true;
    // src/unknown/EF/EF031E.asm:177 BNE @UNKNOWN13
    case 0x049F: c.execute<0xD0>(0x00002D, 2); return true;
    // src/unknown/EF/EF031E.asm:178 LDA @LOCAL02
    case 0x04A1: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:179 JSR UNKNOWN_EF02C4
    case 0x04A3: c.execute<0x20>(0x0002C4, 3); return true;
    // src/unknown/EF/EF031E.asm:180 LDA BUBBLE_MONKEY_MODE
    case 0x04A6: c.execute<0xAD>(0x009F33, 3); return true;
    // src/unknown/EF/EF031E.asm:181 CMP #3
    case 0x04A9: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EF031E.asm:181 CMP #3
    // Overlapping static entry reached from 0xEF04A9.
    case 0x04AB: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EF031E.asm:182 BNE @UNKNOWN12
    case 0x04AC: c.execute<0xD0>(0x00001A, 2); return true;
    // src/unknown/EF/EF031E.asm:183 LDA #4
    case 0x04AE: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EF031E.asm:183 LDA #4
    // Overlapping static entry reached from 0xEF04AE.
    case 0x04B0: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF031E.asm:184 STA BUBBLE_MONKEY_DISTRACTED_DIRECTION_CHANGES_LEFT
    case 0x04B1: c.execute<0x8D>(0x009F3D, 3); return true;
    // src/unknown/EF/EF031E.asm:185 LDA #6
    case 0x04B4: if (c.p & 0x20) c.execute<0xA9>(0x000006, 2); else c.execute<0xA9>(0x000006, 3); return true;
    // src/unknown/EF/EF031E.asm:185 LDA #6
    // Overlapping static entry reached from 0xEF04B4.
    case 0x04B6: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF031E.asm:186 STA BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION
    case 0x04B7: c.execute<0x8D>(0x009F39, 3); return true;
    // src/unknown/EF/EF031E.asm:187 LDA #15
    case 0x04BA: if (c.p & 0x20) c.execute<0xA9>(0x00000F, 2); else c.execute<0xA9>(0x00000F, 3); return true;
    // src/unknown/EF/EF031E.asm:187 LDA #15
    // Overlapping static entry reached from 0xEF04BA.
    case 0x04BC: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF031E.asm:188 STA BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION_CHANGE_TIME
    case 0x04BD: c.execute<0x8D>(0x009F3B, 3); return true;
    // src/unknown/EF/EF031E.asm:189 LDA #.LOWORD(-1)
    case 0x04C0: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EF031E.asm:189 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEF04C0.
    case 0x04C2: c.execute<0xFF>(0x9F358D, 4); return true;
    // src/unknown/EF/EF031E.asm:190 STA BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0x04C3: c.execute<0x8D>(0x009F35, 3); return true;
    // src/unknown/EF/EF031E.asm:191 BRA @UNKNOWN13
    case 0x04C6: c.execute<0x80>(0x000006, 2); return true;
    // src/unknown/EF/EF031E.asm:193 LDA #60
    case 0x04C8: if (c.p & 0x20) c.execute<0xA9>(0x00003C, 2); else c.execute<0xA9>(0x00003C, 3); return true;
    // src/unknown/EF/EF031E.asm:193 LDA #60
    // Overlapping static entry reached from 0xEF04C8.
    case 0x04CA: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF031E.asm:194 STA BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0x04CB: c.execute<0x8D>(0x009F35, 3); return true;
    // src/unknown/EF/EF031E.asm:196 LDA @LOCAL05
    case 0x04CE: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EF031E.asm:197 ASL
    case 0x04D0: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:198 TAX
    case 0x04D1: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:199 LDY #player_position_buffer_entry::tile_flags
    case 0x04D2: if (c.p & 0x10) c.execute<0xA0>(0x000004, 2); else c.execute<0xA0>(0x000004, 3); return true;
    // src/unknown/EF/EF031E.asm:199 LDY #player_position_buffer_entry::tile_flags
    // Overlapping static entry reached from 0xEF04D2.
    case 0x04D4: c.execute<0x00>(0x0000B1, 2); return true;
    // src/unknown/EF/EF031E.asm:200 LDA (@LOCAL03),Y
    case 0x04D5: c.execute<0xB1>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:201 STA ENTITY_SURFACE_FLAGS,X
    case 0x04D7: c.execute<0x9D>(0x002BAA, 3); return true;
    // include/macros.asm:25 PLD
    case 0x04DA: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x04DB: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x04DC: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x04DE: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x04DF: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x04E0: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF04E0.
    case 0x04E2: c.execute<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x04E3: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF04DC.asm:8 LDA #0
    case 0x04E4: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EF04DC.asm:8 LDA #0
    // Overlapping static entry reached from 0xEF04E4.
    case 0x04E6: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF04DC.asm:9 STA @VIRTUAL04
    case 0x04E7: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EF04DC.asm:10 JSL UNKNOWN_C08726
    case 0x04E9: c.execute<0x22>(0xC08726, 4); return true;
    // src/unknown/EF/EF04DC.asm:11 JSL UNKNOWN_C0927C
    case 0x04ED: c.execute<0x22>(0xC0927C, 4); return true;
    // src/unknown/EF/EF04DC.asm:12 JSL UNKNOWN_C0EBE0
    case 0x04F1: c.execute<0x22>(0xC0EBE0, 4); return true;
    // src/unknown/EF/EF04DC.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0x04F5: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EF04DC.asm:14 LDA #$11
    case 0x04F7: if (c.p & 0x20) c.execute<0xA9>(0x000011, 2); else c.execute<0xA9>(0x008D11, 3); return true;
    // src/unknown/EF/EF04DC.asm:14 LDA #$11
    // Overlapping static entry reached from 0xEF0549.
    case 0x04F8: c.execute<0x11>(0x00008D, 2); return true;
    // src/unknown/EF/EF04DC.asm:15 STA TM_MIRROR
    case 0x04F9: c.execute<0x8D>(0x00001A, 3); return true;
    // src/unknown/EF/EF04DC.asm:15 STA TM_MIRROR
    // Overlapping static entry reached from 0xEF04F7.
    case 0x04FA: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF04DC.asm:15 STA TM_MIRROR
    // Overlapping static entry reached from 0xEF04FA.
    case 0x04FB: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF04DC.asm:16 JSL OAM_CLEAR
    case 0x04FC: c.execute<0x22>(0xC088B1, 4); return true;
    // src/unknown/EF/EF04DC.asm:18 LDA #1
    case 0x0500: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF04DC.asm:18 LDA #1
    // Overlapping static entry reached from 0xEF0500.
    case 0x0502: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF04DC.asm:19 STA TITLE_SCREEN_QUICK_MODE
    case 0x0503: c.execute<0x8D>(0x009F75, 3); return true;
    // src/unknown/EF/EF04DC.asm:20 LDY #0
    case 0x0506: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EF04DC.asm:20 LDY #0
    // Overlapping static entry reached from 0xEF0506.
    case 0x0508: c.execute<0x00>(0x0000BB, 2); return true;
    // src/unknown/EF/EF04DC.asm:21 TYX
    case 0x0509: c.execute<0xBB>(0x000000, 1); return true;
    // src/unknown/EF/EF04DC.asm:25 LDA #EVENT_SCRIPT::TITLE_SCREEN_1
    case 0x050A: if (c.p & 0x20) c.execute<0xA9>(0x000014, 2); else c.execute<0xA9>(0x000314, 3); return true;
    // src/unknown/EF/EF04DC.asm:25 LDA #EVENT_SCRIPT::TITLE_SCREEN_1
    // Overlapping static entry reached from 0xEF050A.
    case 0x050C: c.execute<0x03>(0x000022, 2); return true;
    // src/unknown/EF/EF04DC.asm:27 JSL INIT_ENTITY_WIPE
    case 0x050D: c.execute<0x22>(0xC092F5, 4); return true;
    // src/unknown/EF/EF04DC.asm:27 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xEF050C.
    case 0x050E: c.execute<0xF5>(0x000092, 2); return true;
    // src/unknown/EF/EF04DC.asm:27 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xEF050E.
    case 0x0510: if (c.p & 0x10) c.execute<0xC0>(0x00009C, 2); else c.execute<0xC0>(0x00419C, 3); return true;
    // src/unknown/EF/EF04DC.asm:28 STZ ACTIONSCRIPT_STATE
    case 0x0511: c.execute<0x9C>(0x009641, 3); return true;
    // src/unknown/EF/EF04DC.asm:28 STZ ACTIONSCRIPT_STATE
    // Overlapping static entry reached from 0xEF0510.
    case 0x0512: c.execute<0x41>(0x000096, 2); return true;
    // src/unknown/EF/EF04DC.asm:28 STZ ACTIONSCRIPT_STATE
    // Overlapping static entry reached from 0xEF0510.
    case 0x0513: c.execute<0x96>(0x000022, 2); return true;
    // src/unknown/EF/EF04DC.asm:29 JSL UNKNOWN_C1004E
    case 0x0514: c.execute<0x22>(0xC1004E, 4); return true;
    // src/unknown/EF/EF04DC.asm:29 JSL UNKNOWN_C1004E
    // Overlapping static entry reached from 0xEF0513.
    case 0x0515: c.execute<0x4E>(0x00C100, 3); return true;
    // src/unknown/EF/EF04DC.asm:30 LDX #1
    case 0x0518: if (c.p & 0x10) c.execute<0xA2>(0x000001, 2); else c.execute<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EF04DC.asm:30 LDX #1
    // Overlapping static entry reached from 0xEF0518.
    case 0x051A: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EF04DC.asm:31 LDA #16
    case 0x051B: if (c.p & 0x20) c.execute<0xA9>(0x000010, 2); else c.execute<0xA9>(0x000010, 3); return true;
    // src/unknown/EF/EF04DC.asm:31 LDA #16
    // Overlapping static entry reached from 0xEF051B.
    case 0x051D: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF04DC.asm:32 JSL FADE_IN
    case 0x051E: c.execute<0x22>(0xC0886C, 4); return true;
    // src/unknown/EF/EF04DC.asm:32 JSL FADE_IN
    // Overlapping static entry reached from 0xEF054F.
    case 0x0521: if (c.p & 0x10) c.execute<0xC0>(0x0000A2, 2); else c.execute<0xC0>(0x0000A2, 3); return true;
    // src/unknown/EF/EF04DC.asm:33 LDX #0
    case 0x0522: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/unknown/EF/EF04DC.asm:33 LDX #0
    // Overlapping static entry reached from 0xEF0521.
    case 0x0523: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EF04DC.asm:33 LDX #0
    // Overlapping static entry reached from 0xEF0522.
    case 0x0524: c.execute<0x00>(0x000086, 2); return true;
    // src/unknown/EF/EF04DC.asm:34 STX @LOCAL00
    case 0x0525: c.execute<0x86>(0x00000E, 2); return true;
    // src/unknown/EF/EF04DC.asm:35 BRA @UNKNOWN2
    case 0x0527: c.execute<0x80>(0x000009, 2); return true;
    // src/unknown/EF/EF04DC.asm:37 JSL UNKNOWN_C1004E
    case 0x0529: c.execute<0x22>(0xC1004E, 4); return true;
    // src/unknown/EF/EF04DC.asm:38 LDX @LOCAL00
    case 0x052D: c.execute<0xA6>(0x00000E, 2); return true;
    // src/unknown/EF/EF04DC.asm:39 INX
    case 0x052F: c.execute<0xE8>(0x000000, 1); return true;
    // src/unknown/EF/EF04DC.asm:40 STX @LOCAL00
    case 0x0530: c.execute<0x86>(0x00000E, 2); return true;
    // src/unknown/EF/EF04DC.asm:42 CPX #60
    case 0x0532: if (c.p & 0x10) c.execute<0xE0>(0x00003C, 2); else c.execute<0xE0>(0x00003C, 3); return true;
    // src/unknown/EF/EF04DC.asm:42 CPX #60
    // Overlapping static entry reached from 0xEF0532.
    case 0x0534: c.execute<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EF04DC.asm:43 BCC @UNKNOWN1
    case 0x0535: c.execute<0x90>(0x0000F2, 2); return true;
    // src/unknown/EF/EF04DC.asm:44 LDA #0
    case 0x0537: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EF04DC.asm:44 LDA #0
    // Overlapping static entry reached from 0xEF0537.
    case 0x0539: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF04DC.asm:45 STA @VIRTUAL02
    case 0x053A: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF04DC.asm:46 BRA @UNKNOWN7
    case 0x053C: c.execute<0x80>(0x000027, 2); return true;
    // src/unknown/EF/EF04DC.asm:48 LDA @VIRTUAL04
    case 0x053E: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EF04DC.asm:49 BNE @UNKNOWN6
    case 0x0540: c.execute<0xD0>(0x00001F, 2); return true;
    // src/unknown/EF/EF04DC.asm:50 LDA PAD_PRESS
    case 0x0542: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EF04DC.asm:51 AND #PAD::A_BUTTON
    case 0x0545: if (c.p & 0x20) c.execute<0x29>(0x000080, 2); else c.execute<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EF04DC.asm:51 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xEF0545.
    case 0x0547: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EF04DC.asm:52 BNE @UNKNOWN5
    case 0x0548: c.execute<0xD0>(0x000010, 2); return true;
    // src/unknown/EF/EF04DC.asm:52 BNE @UNKNOWN5
    // Overlapping static entry reached from 0xEF0557.
    case 0x0549: c.execute<0x10>(0x0000AD, 2); return true;
    // src/unknown/EF/EF04DC.asm:53 LDA PAD_PRESS
    case 0x054A: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EF04DC.asm:53 LDA PAD_PRESS
    // Overlapping static entry reached from 0xEF0549.
    case 0x054B: c.execute<0x6D>(0x002900, 3); return true;
    // src/unknown/EF/EF04DC.asm:54 AND #PAD::B_BUTTON
    case 0x054D: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EF04DC.asm:54 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xEF054B.
    case 0x054E: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EF04DC.asm:54 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xEF054D.
    case 0x054F: c.execute<0x80>(0x0000D0, 2); return true;
    // src/unknown/EF/EF04DC.asm:55 BNE @UNKNOWN5
    case 0x0550: c.execute<0xD0>(0x000008, 2); return true;
    // src/unknown/EF/EF04DC.asm:56 LDA PAD_PRESS
    case 0x0552: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EF04DC.asm:57 AND #PAD::START_BUTTON
    case 0x0555: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x001000, 3); return true;
    // src/unknown/EF/EF04DC.asm:57 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xEF0555.
    case 0x0557: c.execute<0x10>(0x0000F0, 2); return true;
    // src/unknown/EF/EF04DC.asm:58 BEQ @UNKNOWN6
    case 0x0558: c.execute<0xF0>(0x000007, 2); return true;
    // src/unknown/EF/EF04DC.asm:58 BEQ @UNKNOWN6
    // Overlapping static entry reached from 0xEF0557.
    case 0x0559: c.execute<0x07>(0x0000A9, 2); return true;
    // src/unknown/EF/EF04DC.asm:60 LDA #1
    case 0x055A: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF04DC.asm:60 LDA #1
    // Overlapping static entry reached from 0xEF0559.
    case 0x055B: c.execute<0x01>(0x000000, 2); return true;
    // src/unknown/EF/EF04DC.asm:60 LDA #1
    // Overlapping static entry reached from 0xEF055A.
    case 0x055C: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF04DC.asm:61 STA @VIRTUAL02
    case 0x055D: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF04DC.asm:62 BRA @UNKNOWN8
    case 0x055F: c.execute<0x80>(0x000011, 2); return true;
    // src/unknown/EF/EF04DC.asm:64 JSL UNKNOWN_C1004E
    case 0x0561: c.execute<0x22>(0xC1004E, 4); return true;
    // src/unknown/EF/EF04DC.asm:66 LDA ACTIONSCRIPT_STATE
    case 0x0565: c.execute<0xAD>(0x009641, 3); return true;
    // src/unknown/EF/EF04DC.asm:67 BEQ @UNKNOWN3
    case 0x0568: c.execute<0xF0>(0x0000D4, 2); return true;
    // src/unknown/EF/EF04DC.asm:68 LDA ACTIONSCRIPT_STATE
    case 0x056A: c.execute<0xAD>(0x009641, 3); return true;
    // src/unknown/EF/EF04DC.asm:69 CMP #2
    case 0x056D: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EF04DC.asm:69 CMP #2
    // Overlapping static entry reached from 0xEF056D.
    case 0x056F: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EF04DC.asm:70 BEQ @UNKNOWN3
    case 0x0570: c.execute<0xF0>(0x0000CC, 2); return true;
    // src/unknown/EF/EF04DC.asm:72 LDY #0
    case 0x0572: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EF04DC.asm:72 LDY #0
    // Overlapping static entry reached from 0xEF0572.
    case 0x0574: c.execute<0x00>(0x0000A2, 2); return true;
    // src/unknown/EF/EF04DC.asm:73 LDX #4
    case 0x0575: if (c.p & 0x10) c.execute<0xA2>(0x000004, 2); else c.execute<0xA2>(0x000004, 3); return true;
    // src/unknown/EF/EF04DC.asm:73 LDX #4
    // Overlapping static entry reached from 0xEF0575.
    case 0x0577: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EF04DC.asm:74 LDA #1
    case 0x0578: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF04DC.asm:74 LDA #1
    // Overlapping static entry reached from 0xEF0578.
    case 0x057A: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF04DC.asm:75 JSL FADE_OUT_WITH_MOSAIC
    case 0x057B: c.execute<0x22>(0xC08814, 4); return true;
    // src/unknown/EF/EF04DC.asm:76 STZ ACTIONSCRIPT_STATE
    case 0x057F: c.execute<0x9C>(0x009641, 3); return true;
    // src/unknown/EF/EF04DC.asm:77 LDA #0
    case 0x0582: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EF04DC.asm:77 LDA #0
    // Overlapping static entry reached from 0xEF0582.
    case 0x0584: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF04DC.asm:78 JSL UNKNOWN_C474A8
    case 0x0585: c.execute<0x22>(0xC474A8, 4); return true;
    // src/unknown/EF/EF04DC.asm:79 JSL UNKNOWN_C0927C
    case 0x0589: c.execute<0x22>(0xC0927C, 4); return true;
    // src/unknown/EF/EF04DC.asm:80 LDA @VIRTUAL02
    case 0x058D: c.execute<0xA5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    case 0x058F: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x0590: c.execute<0x6B>(0x000000, 1); return true;
    // src/system/saves/erase_save_block.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x05A9: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x05AB: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0x05AC: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x05AD: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x05AE: if (c.p & 0x20) c.execute<0x69>(0x0000E4, 2); else c.execute<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF05AE.
    case 0x05B0: c.execute<0xFF>(0xA0685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x05B1: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0x05B2: c.execute<0x68>(0x000000, 1); return true;
    // src/system/saves/erase_save_block.asm:13 LDY #$0500
    case 0x05B3: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000500, 3); return true;
    // src/system/saves/erase_save_block.asm:13 LDY #$0500
    // Overlapping static entry reached from 0xEF05B0.
    case 0x05B4: c.execute<0x00>(0x000005, 2); return true;
    // src/system/saves/erase_save_block.asm:13 LDY #$0500
    // Overlapping static entry reached from 0xEF05B3.
    case 0x05B5: c.execute<0x05>(0x000022, 2); return true;
    // src/system/saves/erase_save_block.asm:14 JSL MULT16
    case 0x05B6: c.execute<0x22>(0xC09032, 4); return true;
    // src/system/saves/erase_save_block.asm:14 JSL MULT16
    // Overlapping static entry reached from 0xEF05B5.
    case 0x05B7: c.execute<0x32>(0x000090, 2); return true;
    // src/system/saves/erase_save_block.asm:14 JSL MULT16
    // Overlapping static entry reached from 0xEF05B7.
    case 0x05B9: if (c.p & 0x10) c.execute<0xC0>(0x000085, 2); else c.execute<0xC0>(0x000A85, 3); return true;
    // include/macros.asm:870 STA dest
    case 0x05BA: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:870 STA dest
    // Overlapping static entry reached from 0xEF05B9.
    case 0x05BB: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:871 STZ dest+2
    case 0x05BC: c.execute<0x64>(0x00000C, 2); return true;
    // src/system/saves/erase_save_block.asm:16 CLC
    case 0x05BE: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    case 0x05BF: c.execute<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    case 0x05C1: if (c.p & 0x20) c.execute<0x69>(0x000000, 2); else c.execute<0x69>(0x006000, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Overlapping static entry reached from 0xEF05C1.
    case 0x05C3: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    case 0x05C4: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:997 LDA var+2
    case 0x05C6: c.execute<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    case 0x05C8: if (c.p & 0x20) c.execute<0x69>(0x000030, 2); else c.execute<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Overlapping static entry reached from 0xEF05C8.
    case 0x05CA: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    case 0x05CB: c.execute<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x05CD: c.execute<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x05CF: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x05D1: c.execute<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x05D3: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x05D5: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x05D7: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x05D9: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x05DB: c.execute<0x85>(0x000010, 2); return true;
    // src/system/saves/erase_save_block.asm:24 LDX #$0500
    case 0x05DD: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000500, 3); return true;
    // src/system/saves/erase_save_block.asm:24 LDX #$0500
    // Overlapping static entry reached from 0xEF05DD.
    case 0x05DF: c.execute<0x05>(0x0000E2, 2); return true;
    // src/system/saves/erase_save_block.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0x05E0: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/saves/erase_save_block.asm:25 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xEF05DF.
    case 0x05E1: c.execute<0x20>(0x0000A9, 3); return true;
    // src/system/saves/erase_save_block.asm:26 LDA #$0000
    case 0x05E2: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/saves/erase_save_block.asm:27 JSL MEMSET24
    case 0x05E4: c.execute<0x22>(0xC08F15, 4); return true;
    // src/system/saves/erase_save_block.asm:27 JSL MEMSET24
    // Overlapping static entry reached from 0xEF05E2.
    case 0x05E5: c.execute<0x15>(0x00008F, 2); return true;
    // src/system/saves/erase_save_block.asm:27 JSL MEMSET24
    // Overlapping static entry reached from 0xEF05E5.
    case 0x05E7: if (c.p & 0x10) c.execute<0xC0>(0x0000A9, 2); else c.execute<0xC0>(0x0091A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0x05E8: if (c.p & 0x20) c.execute<0xA9>(0x000091, 2); else c.execute<0xA9>(0x000591, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEF05E7.
    case 0x05E9: c.execute<0x91>(0x000005, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEF05E8.
    case 0x05EA: c.execute<0x05>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0x05EB: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xEF05EA.
    case 0x05EC: c.execute<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0x05ED: if (c.p & 0x20) c.execute<0xA9>(0x0000EF, 2); else c.execute<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEF05EC.
    case 0x05EE: c.execute<0xEF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEF05ED.
    case 0x05EF: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0x05F0: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x05F2: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x05F4: c.execute<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x05F6: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x05F8: c.execute<0x85>(0x00001A, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x05FA: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x05FC: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x05FE: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0600: c.execute<0x85>(0x000010, 2); return true;
    // src/system/saves/erase_save_block.asm:34 JSL STRLEN
    case 0x0602: c.execute<0x22>(0xC08F22, 4); return true;
    // src/system/saves/erase_save_block.asm:35 STA $16
    case 0x0606: c.execute<0x85>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0608: c.execute<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x060A: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x060C: c.execute<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x060E: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0610: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0612: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0614: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0616: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0618: c.execute<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x061A: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x061C: c.execute<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x061E: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0620: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0622: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0624: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0626: c.execute<0x85>(0x000014, 2); return true;
    // src/system/saves/erase_save_block.asm:44 LDA $16
    case 0x0628: c.execute<0xA5>(0x000016, 2); return true;
    // src/system/saves/erase_save_block.asm:45 JSL MEMCPY24
    case 0x062A: c.execute<0x22>(0xC08EED, 4); return true;
    // src/system/saves/erase_save_block.asm:46 PLD
    case 0x062E: c.execute<0x2B>(0x000000, 1); return true;
    // src/system/saves/erase_save_block.asm:47 RTS
    case 0x062F: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0630: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0632: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0x0633: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0634: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0635: if (c.p & 0x20) c.execute<0x69>(0x0000E8, 2); else c.execute<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF0635.
    case 0x0637: c.execute<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0638: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0x0639: c.execute<0x68>(0x000000, 1); return true;
    // src/system/saves/check_block_signature.asm:11 TAX
    case 0x063A: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/saves/check_block_signature.asm:12 STX @LOCAL02
    case 0x063B: c.execute<0x86>(0x000016, 2); return true;
    // src/system/saves/check_block_signature.asm:13 LDY #.SIZEOF(save_block)
    case 0x063D: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000500, 3); return true;
    // src/system/saves/check_block_signature.asm:13 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xEF063D.
    case 0x063F: c.execute<0x05>(0x00008A, 2); return true;
    // src/system/saves/check_block_signature.asm:14 TXA
    case 0x0640: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/saves/check_block_signature.asm:15 JSL MULT16
    case 0x0641: c.execute<0x22>(0xC09032, 4); return true;
    // include/macros.asm:870 STA dest
    case 0x0645: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0x0647: c.execute<0x64>(0x000008, 2); return true;
    // src/system/saves/check_block_signature.asm:17 CLC
    case 0x0649: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    case 0x064A: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    case 0x064C: if (c.p & 0x20) c.execute<0x69>(0x000000, 2); else c.execute<0x69>(0x006000, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Overlapping static entry reached from 0xEF064C.
    case 0x064E: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    case 0x064F: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    case 0x0651: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    case 0x0653: if (c.p & 0x20) c.execute<0x69>(0x000030, 2); else c.execute<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Overlapping static entry reached from 0xEF0653.
    case 0x0655: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    case 0x0656: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0x0658: if (c.p & 0x20) c.execute<0xA9>(0x000091, 2); else c.execute<0xA9>(0x000591, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEF0658.
    case 0x065A: c.execute<0x05>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0x065B: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xEF065A.
    case 0x065C: c.execute<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0x065D: if (c.p & 0x20) c.execute<0xA9>(0x0000EF, 2); else c.execute<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEF065D.
    case 0x065F: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0x0660: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0662: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0664: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0666: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0668: c.execute<0x85>(0x000014, 2); return true;
    // src/system/saves/check_block_signature.asm:21 JSL STRCMP
    case 0x066A: c.execute<0x22>(0xC08F2F, 4); return true;
    // src/system/saves/check_block_signature.asm:22 CMP #0
    case 0x066E: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/system/saves/check_block_signature.asm:22 CMP #0
    // Overlapping static entry reached from 0xEF066E.
    case 0x0670: c.execute<0x00>(0x0000F0, 2); return true;
    // src/system/saves/check_block_signature.asm:23 BEQ @UNKNOWN0
    case 0x0671: c.execute<0xF0>(0x00000B, 2); return true;
    // src/system/saves/check_block_signature.asm:24 LDX @LOCAL02
    case 0x0673: c.execute<0xA6>(0x000016, 2); return true;
    // src/system/saves/check_block_signature.asm:25 TXA
    case 0x0675: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/saves/check_block_signature.asm:26 JSR ERASE_SAVE_BLOCK
    case 0x0676: c.execute<0x20>(0x0005A9, 3); return true;
    // src/system/saves/check_block_signature.asm:27 LDA #TRUE
    case 0x0679: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/system/saves/check_block_signature.asm:27 LDA #TRUE
    // Overlapping static entry reached from 0xEF0679.
    case 0x067B: c.execute<0x00>(0x000080, 2); return true;
    // src/system/saves/check_block_signature.asm:28 BRA @UNKNOWN1
    case 0x067C: c.execute<0x80>(0x000003, 2); return true;
    // src/system/saves/check_block_signature.asm:30 LDA #FALSE
    case 0x067E: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/system/saves/check_block_signature.asm:30 LDA #FALSE
    // Overlapping static entry reached from 0xEF067E.
    case 0x0680: c.execute<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    case 0x0681: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0x0682: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0683: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0685: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0686: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0687: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF0687.
    case 0x0689: c.execute<0xFF>(0x00A25B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x068A: c.execute<0x5B>(0x000000, 1); return true;
    // src/system/saves/check_all_blocks_signature.asm:7 LDX #0
    case 0x068B: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/system/saves/check_all_blocks_signature.asm:7 LDX #0
    // Overlapping static entry reached from 0xEF068B.
    case 0x068D: c.execute<0x00>(0x000086, 2); return true;
    // src/system/saves/check_all_blocks_signature.asm:8 STX @LOCAL00
    case 0x068E: c.execute<0x86>(0x00000E, 2); return true;
    // src/system/saves/check_all_blocks_signature.asm:9 BRA @UNKNOWN1
    case 0x0690: c.execute<0x80>(0x000009, 2); return true;
    // src/system/saves/check_all_blocks_signature.asm:11 TXA
    case 0x0692: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/saves/check_all_blocks_signature.asm:12 JSR CHECK_BLOCK_SIGNATURE
    case 0x0693: c.execute<0x20>(0x000630, 3); return true;
    // src/system/saves/check_all_blocks_signature.asm:13 LDX @LOCAL00
    case 0x0696: c.execute<0xA6>(0x00000E, 2); return true;
    // src/system/saves/check_all_blocks_signature.asm:14 INX
    case 0x0698: c.execute<0xE8>(0x000000, 1); return true;
    // src/system/saves/check_all_blocks_signature.asm:15 STX @LOCAL00
    case 0x0699: c.execute<0x86>(0x00000E, 2); return true;
    // src/system/saves/check_all_blocks_signature.asm:17 CPX #SAVE_COUNT*SAVE_COPY_COUNT
    case 0x069B: if (c.p & 0x10) c.execute<0xE0>(0x000006, 2); else c.execute<0xE0>(0x000006, 3); return true;
    // src/system/saves/check_all_blocks_signature.asm:17 CPX #SAVE_COUNT*SAVE_COPY_COUNT
    // Overlapping static entry reached from 0xEF069B.
    case 0x069D: c.execute<0x00>(0x000090, 2); return true;
    // src/system/saves/check_all_blocks_signature.asm:18 BCC @UNKNOWN0
    case 0x069E: c.execute<0x90>(0x0000F2, 2); return true;
    // include/macros.asm:25 PLD
    case 0x06A0: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0x06A1: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x06A2: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x06A4: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0x06A5: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x06A6: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x06A7: if (c.p & 0x20) c.execute<0x69>(0x0000E0, 2); else c.execute<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF06A7.
    case 0x06A9: c.execute<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x06AA: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0x06AB: c.execute<0x68>(0x000000, 1); return true;
    // src/system/saves/copy_save_block.asm:14 STA @LOCAL04
    case 0x06AC: c.execute<0x85>(0x00001E, 2); return true;
    // src/system/saves/copy_save_block.asm:14 STA @LOCAL04
    // Overlapping static entry reached from 0xEF06A9.
    case 0x06AD: c.execute<0x1E>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0x06AE: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x006000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEF06AE.
    case 0x06B0: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    case 0x06B1: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0x06B3: if (c.p & 0x20) c.execute<0xA9>(0x000030, 2); else c.execute<0xA9>(0x000030, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEF06B3.
    case 0x06B5: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0x06B6: c.execute<0x85>(0x000008, 2); return true;
    // src/system/saves/copy_save_block.asm:16 LDY #.SIZEOF(save_block)
    case 0x06B8: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000500, 3); return true;
    // src/system/saves/copy_save_block.asm:16 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xEF06B8.
    case 0x06BA: c.execute<0x05>(0x0000A5, 2); return true;
    // src/system/saves/copy_save_block.asm:17 LDA @LOCAL04
    case 0x06BB: c.execute<0xA5>(0x00001E, 2); return true;
    // src/system/saves/copy_save_block.asm:17 LDA @LOCAL04
    // Overlapping static entry reached from 0xEF06BA.
    case 0x06BC: c.execute<0x1E>(0x003222, 3); return true;
    // src/system/saves/copy_save_block.asm:18 JSL MULT16
    case 0x06BD: c.execute<0x22>(0xC09032, 4); return true;
    // src/system/saves/copy_save_block.asm:18 JSL MULT16
    // Overlapping static entry reached from 0xEF06BC.
    case 0x06BF: c.execute<0x90>(0x0000C0, 2); return true;
    // include/macros.asm:870 STA dest
    case 0x06C1: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0x06C3: c.execute<0x64>(0x00000C, 2); return true;
    // src/system/saves/copy_save_block.asm:20 CLC
    case 0x06C5: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    case 0x06C6: c.execute<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:943 ADC val2
    case 0x06C8: c.execute<0x65>(0x000006, 2); return true;
    // include/macros.asm:944 STA dest
    case 0x06CA: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:945 LDA val1+2
    case 0x06CC: c.execute<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:946 ADC val2+2
    case 0x06CE: c.execute<0x65>(0x000008, 2); return true;
    // include/macros.asm:947 STA dest+2
    case 0x06D0: c.execute<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x06D2: c.execute<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x06D4: c.execute<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x06D6: c.execute<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x06D8: c.execute<0x85>(0x00001C, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x06DA: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x06DC: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x06DE: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x06E0: c.execute<0x85>(0x00000C, 2); return true;
    // src/system/saves/copy_save_block.asm:24 LDY #.SIZEOF(save_block)
    case 0x06E2: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000500, 3); return true;
    // src/system/saves/copy_save_block.asm:24 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xEF06E2.
    case 0x06E4: c.execute<0x05>(0x00008A, 2); return true;
    // src/system/saves/copy_save_block.asm:25 TXA
    case 0x06E5: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/saves/copy_save_block.asm:26 JSL MULT16
    case 0x06E6: c.execute<0x22>(0xC09032, 4); return true;
    // include/macros.asm:870 STA dest
    case 0x06EA: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0x06EC: c.execute<0x64>(0x000008, 2); return true;
    // src/system/saves/copy_save_block.asm:28 CLC
    case 0x06EE: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    case 0x06EF: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    case 0x06F1: c.execute<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    case 0x06F3: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    case 0x06F5: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    case 0x06F7: c.execute<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    case 0x06F9: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x06FB: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x06FD: c.execute<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x06FF: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0701: c.execute<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0703: c.execute<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0705: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0707: c.execute<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0709: c.execute<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x070B: c.execute<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x070D: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x070F: c.execute<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0711: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0713: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0715: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0717: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0719: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x071B: c.execute<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x071D: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x071F: c.execute<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0721: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0723: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0725: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0727: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0729: c.execute<0x85>(0x000014, 2); return true;
    // src/system/saves/copy_save_block.asm:41 LDA #.SIZEOF(save_block)
    case 0x072B: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000500, 3); return true;
    // src/system/saves/copy_save_block.asm:41 LDA #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xEF072B.
    case 0x072D: c.execute<0x05>(0x000022, 2); return true;
    // src/system/saves/copy_save_block.asm:42 JSL MEMCPY24
    case 0x072E: c.execute<0x22>(0xC08EED, 4); return true;
    // src/system/saves/copy_save_block.asm:42 JSL MEMCPY24
    // Overlapping static entry reached from 0xEF072D.
    case 0x072F: c.execute<0xED>(0x00C08E, 3); return true;
    // include/macros.asm:25 PLD
    case 0x0732: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0x0733: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0734: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0736: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0x0737: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0738: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0739: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF0739.
    case 0x073B: c.execute<0xFF>(0xA0685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x073C: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0x073D: c.execute<0x68>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum.asm:9 LDY #.SIZEOF(save_block)
    case 0x073E: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000500, 3); return true;
    // src/system/saves/calc_save_block_checksum.asm:9 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xEF073B.
    case 0x073F: c.execute<0x00>(0x000005, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:9 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xEF073E.
    case 0x0740: c.execute<0x05>(0x000022, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:10 JSL MULT16
    case 0x0741: c.execute<0x22>(0xC09032, 4); return true;
    // src/system/saves/calc_save_block_checksum.asm:10 JSL MULT16
    // Overlapping static entry reached from 0xEF0740.
    case 0x0742: c.execute<0x32>(0x000090, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:10 JSL MULT16
    // Overlapping static entry reached from 0xEF0742.
    case 0x0744: if (c.p & 0x10) c.execute<0xC0>(0x000085, 2); else c.execute<0xC0>(0x000685, 3); return true;
    // include/macros.asm:870 STA dest
    case 0x0745: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Overlapping static entry reached from 0xEF0744.
    case 0x0746: c.execute<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0x0747: c.execute<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Overlapping static entry reached from 0xEF0746.
    case 0x0748: c.execute<0x08>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum.asm:12 CLC
    case 0x0749: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    case 0x074A: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    case 0x074C: if (c.p & 0x20) c.execute<0x69>(0x000020, 2); else c.execute<0x69>(0x006020, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Overlapping static entry reached from 0xEF074C.
    case 0x074E: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    case 0x074F: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    case 0x0751: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    case 0x0753: if (c.p & 0x20) c.execute<0x69>(0x000030, 2); else c.execute<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Overlapping static entry reached from 0xEF0753.
    case 0x0755: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    case 0x0756: c.execute<0x85>(0x000008, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:14 LDX #0
    case 0x0758: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/system/saves/calc_save_block_checksum.asm:14 LDX #0
    // Overlapping static entry reached from 0xEF0758.
    case 0x075A: c.execute<0x00>(0x00008A, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:15 TXA
    case 0x075B: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum.asm:16 STA @LOCAL00
    case 0x075C: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:17 BRA @UNKNOWN1
    case 0x075E: c.execute<0x80>(0x000013, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:19 LDA [@VIRTUAL06]
    case 0x0760: c.execute<0xA7>(0x000006, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:20 AND #$00FF
    case 0x0762: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/system/saves/calc_save_block_checksum.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xEF0762.
    case 0x0764: c.execute<0x00>(0x000085, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:21 STA @VIRTUAL02
    case 0x0765: c.execute<0x85>(0x000002, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:22 TXA
    case 0x0767: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum.asm:23 CLC
    case 0x0768: c.execute<0x18>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum.asm:24 ADC @VIRTUAL02
    case 0x0769: c.execute<0x65>(0x000002, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:25 TAX
    case 0x076B: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum.asm:26 INC @VIRTUAL06
    case 0x076C: c.execute<0xE6>(0x000006, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:27 LDA @LOCAL00
    case 0x076E: c.execute<0xA5>(0x00000E, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:28 INC
    case 0x0770: c.execute<0x1A>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum.asm:29 STA @LOCAL00
    case 0x0771: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:31 CMP #.SIZEOF(save_block) - .SIZEOF(save_header)
    case 0x0773: if (c.p & 0x20) c.execute<0xC9>(0x0000E0, 2); else c.execute<0xC9>(0x0004E0, 3); return true;
    // src/system/saves/calc_save_block_checksum.asm:31 CMP #.SIZEOF(save_block) - .SIZEOF(save_header)
    // Overlapping static entry reached from 0xEF0773.
    case 0x0775: c.execute<0x04>(0x000090, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:32 BCC @UNKNOWN0
    case 0x0776: c.execute<0x90>(0x0000E8, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:32 BCC @UNKNOWN0
    // Overlapping static entry reached from 0xEF0775.
    case 0x0777: c.execute<0xE8>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum.asm:33 TXA
    case 0x0778: c.execute<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    case 0x0779: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0x077A: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x077B: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x077D: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0x077E: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x077F: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0780: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF0780.
    case 0x0782: c.execute<0xFF>(0xA0685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0783: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0x0784: c.execute<0x68>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:9 LDY #.SIZEOF(save_block)
    case 0x0785: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000500, 3); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:9 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xEF0782.
    case 0x0786: c.execute<0x00>(0x000005, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:9 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xEF0785.
    case 0x0787: c.execute<0x05>(0x000022, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:10 JSL MULT16
    case 0x0788: c.execute<0x22>(0xC09032, 4); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:10 JSL MULT16
    // Overlapping static entry reached from 0xEF0787.
    case 0x0789: c.execute<0x32>(0x000090, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:10 JSL MULT16
    // Overlapping static entry reached from 0xEF0789.
    case 0x078B: if (c.p & 0x10) c.execute<0xC0>(0x000085, 2); else c.execute<0xC0>(0x000685, 3); return true;
    // include/macros.asm:870 STA dest
    case 0x078C: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Overlapping static entry reached from 0xEF078B.
    case 0x078D: c.execute<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0x078E: c.execute<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Overlapping static entry reached from 0xEF078D.
    case 0x078F: c.execute<0x08>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:12 CLC
    case 0x0790: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    case 0x0791: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    case 0x0793: if (c.p & 0x20) c.execute<0x69>(0x000020, 2); else c.execute<0x69>(0x006020, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Overlapping static entry reached from 0xEF0793.
    case 0x0795: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    case 0x0796: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    case 0x0798: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    case 0x079A: if (c.p & 0x20) c.execute<0x69>(0x000030, 2); else c.execute<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Overlapping static entry reached from 0xEF079A.
    case 0x079C: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    case 0x079D: c.execute<0x85>(0x000008, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:14 LDX #0
    case 0x079F: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:14 LDX #0
    // Overlapping static entry reached from 0xEF079F.
    case 0x07A1: c.execute<0x00>(0x00008A, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:15 TXA
    case 0x07A2: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:16 STA @LOCAL00
    case 0x07A3: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:17 BRA @UNKNOWN1
    case 0x07A5: c.execute<0x80>(0x000011, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:19 LDA [@VIRTUAL06]
    case 0x07A7: c.execute<0xA7>(0x000006, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:20 STA @VIRTUAL02
    case 0x07A9: c.execute<0x85>(0x000002, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:21 TXA
    case 0x07AB: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:22 EOR @VIRTUAL02
    case 0x07AC: c.execute<0x45>(0x000002, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:23 TAX
    case 0x07AE: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:24 INC @VIRTUAL06
    case 0x07AF: c.execute<0xE6>(0x000006, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:25 INC @VIRTUAL06
    case 0x07B1: c.execute<0xE6>(0x000006, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:26 LDA @LOCAL00
    case 0x07B3: c.execute<0xA5>(0x00000E, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:27 INC
    case 0x07B5: c.execute<0x1A>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:28 STA @LOCAL00
    case 0x07B6: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:30 CMP #(.SIZEOF(save_block) - .SIZEOF(save_header)) / 2
    case 0x07B8: if (c.p & 0x20) c.execute<0xC9>(0x000070, 2); else c.execute<0xC9>(0x000270, 3); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:30 CMP #(.SIZEOF(save_block) - .SIZEOF(save_header)) / 2
    // Overlapping static entry reached from 0xEF07B8.
    case 0x07BA: c.execute<0x02>(0x000090, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:31 BCC @UNKNOWN0
    case 0x07BB: c.execute<0x90>(0x0000EA, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:32 TXA
    case 0x07BD: c.execute<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    case 0x07BE: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0x07BF: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x07C0: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x07C2: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0x07C3: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x07C4: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x07C5: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF07C5.
    case 0x07C7: c.execute<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x07C8: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0x07C9: c.execute<0x68>(0x000000, 1); return true;
    // src/system/saves/validate_save_block_checksums.asm:9 TAX
    case 0x07CA: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/saves/validate_save_block_checksums.asm:10 STX @LOCAL00
    case 0x07CB: c.execute<0x86>(0x00000E, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:11 TXA
    case 0x07CD: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/saves/validate_save_block_checksums.asm:12 JSR CALC_SAVE_BLOCK_ADD_CHECKSUM
    case 0x07CE: c.execute<0x20>(0x000734, 3); return true;
    // src/system/saves/validate_save_block_checksums.asm:13 STA @VIRTUAL04
    case 0x07D1: c.execute<0x85>(0x000004, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:14 LDX @LOCAL00
    case 0x07D3: c.execute<0xA6>(0x00000E, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:15 TXA
    case 0x07D5: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/saves/validate_save_block_checksums.asm:16 JSR CALC_SAVE_BLOCK_XOR_CHECKSUM
    case 0x07D6: c.execute<0x20>(0x00077B, 3); return true;
    // src/system/saves/validate_save_block_checksums.asm:17 STA @VIRTUAL02
    case 0x07D9: c.execute<0x85>(0x000002, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:18 LDY #.SIZEOF(save_block)
    case 0x07DB: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000500, 3); return true;
    // src/system/saves/validate_save_block_checksums.asm:18 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xEF07DB.
    case 0x07DD: c.execute<0x05>(0x0000A6, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:19 LDX @LOCAL00
    case 0x07DE: c.execute<0xA6>(0x00000E, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:19 LDX @LOCAL00
    // Overlapping static entry reached from 0xEF07DD.
    case 0x07DF: c.execute<0x0E>(0x00228A, 3); return true;
    // src/system/saves/validate_save_block_checksums.asm:20 TXA
    case 0x07E0: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/saves/validate_save_block_checksums.asm:21 JSL MULT16
    case 0x07E1: c.execute<0x22>(0xC09032, 4); return true;
    // src/system/saves/validate_save_block_checksums.asm:21 JSL MULT16
    // Overlapping static entry reached from 0xEF07DF.
    case 0x07E2: c.execute<0x32>(0x000090, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:21 JSL MULT16
    // Overlapping static entry reached from 0xEF07E2.
    case 0x07E4: if (c.p & 0x10) c.execute<0xC0>(0x000085, 2); else c.execute<0xC0>(0x000A85, 3); return true;
    // include/macros.asm:870 STA dest
    case 0x07E5: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:870 STA dest
    // Overlapping static entry reached from 0xEF07E4.
    case 0x07E6: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:871 STZ dest+2
    case 0x07E7: c.execute<0x64>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x07E9: c.execute<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x07EB: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x07ED: c.execute<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x07EF: c.execute<0x85>(0x000008, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:24 CLC
    case 0x07F1: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    case 0x07F2: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    case 0x07F4: if (c.p & 0x20) c.execute<0x69>(0x00001C, 2); else c.execute<0x69>(0x00601C, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Overlapping static entry reached from 0xEF07F4.
    case 0x07F6: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    case 0x07F7: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    case 0x07F9: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    case 0x07FB: if (c.p & 0x20) c.execute<0x69>(0x000030, 2); else c.execute<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Overlapping static entry reached from 0xEF07FB.
    case 0x07FD: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    case 0x07FE: c.execute<0x85>(0x000008, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:26 CLC
    case 0x0800: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    case 0x0801: c.execute<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    case 0x0803: if (c.p & 0x20) c.execute<0x69>(0x00001E, 2); else c.execute<0x69>(0x00601E, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Overlapping static entry reached from 0xEF0803.
    case 0x0805: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    case 0x0806: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:997 LDA var+2
    case 0x0808: c.execute<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    case 0x080A: if (c.p & 0x20) c.execute<0x69>(0x000030, 2); else c.execute<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Overlapping static entry reached from 0xEF080A.
    case 0x080C: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    case 0x080D: c.execute<0x85>(0x00000C, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:28 LDA [@VIRTUAL06]
    case 0x080F: c.execute<0xA7>(0x000006, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:29 CMP @VIRTUAL04
    case 0x0811: c.execute<0xC5>(0x000004, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:30 BNE @UNKNOWN0
    case 0x0813: c.execute<0xD0>(0x000006, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:31 LDA [@VIRTUAL0A]
    case 0x0815: c.execute<0xA7>(0x00000A, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:32 CMP @VIRTUAL02
    case 0x0817: c.execute<0xC5>(0x000002, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:33 BEQ @UNKNOWN1
    case 0x0819: c.execute<0xF0>(0x000005, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:35 LDA #.LOWORD(-1)
    case 0x081B: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/system/saves/validate_save_block_checksums.asm:35 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEF081B.
    case 0x081D: c.execute<0xFF>(0xA90380, 4); return true;
    // src/system/saves/validate_save_block_checksums.asm:36 BRA @UNKNOWN2
    case 0x081E: c.execute<0x80>(0x000003, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:38 LDA #0
    case 0x0820: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/system/saves/validate_save_block_checksums.asm:38 LDA #0
    // Overlapping static entry reached from 0xEF081D.
    case 0x0821: c.execute<0x00>(0x000000, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:38 LDA #0
    // Overlapping static entry reached from 0xEF0820.
    case 0x0822: c.execute<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    case 0x0823: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0x0824: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0825: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0827: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0x0828: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0829: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x082A: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF082A.
    case 0x082C: c.execute<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x082D: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0x082E: c.execute<0x68>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:9 TAY
    case 0x082F: c.execute<0xA8>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:10 STY @LOCAL01
    case 0x0830: c.execute<0x84>(0x000010, 2); return true;
    // src/system/saves/check_save_corruption.asm:11 TYA
    case 0x0832: c.execute<0x98>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:12 ASL
    case 0x0833: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:13 STA @VIRTUAL02
    case 0x0834: c.execute<0x85>(0x000002, 2); return true;
    // src/system/saves/check_save_corruption.asm:14 JSR VALIDATE_SAVE_BLOCK_CHECKSUMS
    case 0x0836: c.execute<0x20>(0x0007C0, 3); return true;
    // src/system/saves/check_save_corruption.asm:15 CMP #FALSE
    case 0x0839: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/system/saves/check_save_corruption.asm:15 CMP #FALSE
    // Overlapping static entry reached from 0xEF0839.
    case 0x083B: c.execute<0x00>(0x0000F0, 2); return true;
    // src/system/saves/check_save_corruption.asm:16 BEQ @UNKNOWN1
    case 0x083C: c.execute<0xF0>(0x000031, 2); return true;
    // src/system/saves/check_save_corruption.asm:17 LDA @VIRTUAL02
    case 0x083E: c.execute<0xA5>(0x000002, 2); return true;
    // src/system/saves/check_save_corruption.asm:18 JSR ERASE_SAVE_BLOCK
    case 0x0840: c.execute<0x20>(0x0005A9, 3); return true;
    // src/system/saves/check_save_corruption.asm:19 LDX @VIRTUAL02
    case 0x0843: c.execute<0xA6>(0x000002, 2); return true;
    // src/system/saves/check_save_corruption.asm:20 INX
    case 0x0845: c.execute<0xE8>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:21 STX @LOCAL00
    case 0x0846: c.execute<0x86>(0x00000E, 2); return true;
    // src/system/saves/check_save_corruption.asm:22 TXA
    case 0x0848: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:23 JSR VALIDATE_SAVE_BLOCK_CHECKSUMS
    case 0x0849: c.execute<0x20>(0x0007C0, 3); return true;
    // src/system/saves/check_save_corruption.asm:24 CMP #FALSE
    case 0x084C: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/system/saves/check_save_corruption.asm:24 CMP #FALSE
    // Overlapping static entry reached from 0xEF084C.
    case 0x084E: c.execute<0x00>(0x0000F0, 2); return true;
    // src/system/saves/check_save_corruption.asm:25 BEQ @UNKNOWN0
    case 0x084F: c.execute<0xF0>(0x000017, 2); return true;
    // src/system/saves/check_save_corruption.asm:26 LDX @LOCAL00
    case 0x0851: c.execute<0xA6>(0x00000E, 2); return true;
    // src/system/saves/check_save_corruption.asm:27 TXA
    case 0x0853: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:28 JSR ERASE_SAVE_BLOCK
    case 0x0854: c.execute<0x20>(0x0005A9, 3); return true;
    // src/system/saves/check_save_corruption.asm:29 LDY @LOCAL01
    case 0x0857: c.execute<0xA4>(0x000010, 2); return true;
    // src/system/saves/check_save_corruption.asm:30 TYX
    case 0x0859: c.execute<0xBB>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0x085A: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/saves/check_save_corruption.asm:32 LDA f:UNKNOWN_EF05A6,X
    case 0x085C: c.execute<0xBF>(0xEF05A6, 4); return true;
    // src/system/saves/check_save_corruption.asm:33 ORA CORRUPTION_CHECK_RESULTS
    case 0x0860: c.execute<0x0D>(0x009F79, 3); return true;
    // src/system/saves/check_save_corruption.asm:34 STA CORRUPTION_CHECK_RESULTS
    case 0x0863: c.execute<0x8D>(0x009F79, 3); return true;
    // src/system/saves/check_save_corruption.asm:35 BRA @UNKNOWN2
    case 0x0866: c.execute<0x80>(0x000023, 2); return true;
    // src/system/saves/check_save_corruption.asm:37 LDX @LOCAL00
    case 0x0868: c.execute<0xA6>(0x00000E, 2); return true;
    // src/system/saves/check_save_corruption.asm:38 LDA @VIRTUAL02
    case 0x086A: c.execute<0xA5>(0x000002, 2); return true;
    // src/system/saves/check_save_corruption.asm:39 JSR COPY_SAVE_BLOCK
    case 0x086C: c.execute<0x20>(0x0006A2, 3); return true;
    // src/system/saves/check_save_corruption.asm:41 LDY @VIRTUAL02
    case 0x086F: c.execute<0xA4>(0x000002, 2); return true;
    // src/system/saves/check_save_corruption.asm:42 INY
    case 0x0871: c.execute<0xC8>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:43 STY @LOCAL01
    case 0x0872: c.execute<0x84>(0x000010, 2); return true;
    // src/system/saves/check_save_corruption.asm:44 TYA
    case 0x0874: c.execute<0x98>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:45 JSR VALIDATE_SAVE_BLOCK_CHECKSUMS
    case 0x0875: c.execute<0x20>(0x0007C0, 3); return true;
    // src/system/saves/check_save_corruption.asm:47 CMP #FALSE
    case 0x0878: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/system/saves/check_save_corruption.asm:47 CMP #FALSE
    // Overlapping static entry reached from 0xEF0878.
    case 0x087A: c.execute<0x00>(0x0000F0, 2); return true;
    // src/system/saves/check_save_corruption.asm:48 BEQ @UNKNOWN2
    case 0x087B: c.execute<0xF0>(0x00000E, 2); return true;
    // src/system/saves/check_save_corruption.asm:49 LDY @LOCAL01
    case 0x087D: c.execute<0xA4>(0x000010, 2); return true;
    // src/system/saves/check_save_corruption.asm:50 TYA
    case 0x087F: c.execute<0x98>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:51 JSR ERASE_SAVE_BLOCK
    case 0x0880: c.execute<0x20>(0x0005A9, 3); return true;
    // src/system/saves/check_save_corruption.asm:52 LDX @VIRTUAL02
    case 0x0883: c.execute<0xA6>(0x000002, 2); return true;
    // src/system/saves/check_save_corruption.asm:53 LDY @LOCAL01
    case 0x0885: c.execute<0xA4>(0x000010, 2); return true;
    // src/system/saves/check_save_corruption.asm:54 TYA
    case 0x0887: c.execute<0x98>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:55 JSR COPY_SAVE_BLOCK
    case 0x0888: c.execute<0x20>(0x0006A2, 3); return true;
    // src/system/saves/check_save_corruption.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0x088B: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    case 0x088D: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0x088E: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x088F: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0891: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0x0892: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0893: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0894: if (c.p & 0x20) c.execute<0x69>(0x0000DE, 2); else c.execute<0x69>(0x00FFDE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF0894.
    case 0x0896: c.execute<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0897: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0x0898: c.execute<0x68>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:18 TAY
    case 0x0899: c.execute<0xA8>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:19 STY @LOCAL05
    case 0x089A: c.execute<0x84>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x089C: c.execute<0xAD>(0x0000A7, 3); return true;
    // include/macros.asm:837 STA dest
    case 0x089F: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x08A1: c.execute<0xAD>(0x0000A9, 3); return true;
    // include/macros.asm:839 STA dest+2
    case 0x08A4: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x08A6: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x08A8: c.execute<0x8D>(0x0099C9, 3); return true;
    // include/macros.asm:838 LDA src+2
    case 0x08AB: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x08AD: c.execute<0x8D>(0x0099CB, 3); return true;
    // src/system/saves/save_game_block.asm:29 LDY @LOCAL05
    case 0x08B0: c.execute<0xA4>(0x000020, 2); return true;
    // src/system/saves/save_game_block.asm:30 TYA
    case 0x08B2: c.execute<0x98>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:31 LDY #.SIZEOF(save_block)
    case 0x08B3: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000500, 3); return true;
    // src/system/saves/save_game_block.asm:31 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xEF08B3.
    case 0x08B5: c.execute<0x05>(0x000022, 2); return true;
    // src/system/saves/save_game_block.asm:33 JSL MULT16
    case 0x08B6: c.execute<0x22>(0xC09032, 4); return true;
    // src/system/saves/save_game_block.asm:33 JSL MULT16
    // Overlapping static entry reached from 0xEF08B5.
    case 0x08B7: c.execute<0x32>(0x000090, 2); return true;
    // src/system/saves/save_game_block.asm:33 JSL MULT16
    // Overlapping static entry reached from 0xEF08B7.
    case 0x08B9: if (c.p & 0x10) c.execute<0xC0>(0x000085, 2); else c.execute<0xC0>(0x000A85, 3); return true;
    // include/macros.asm:870 STA dest
    case 0x08BA: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:870 STA dest
    // Overlapping static entry reached from 0xEF08B9.
    case 0x08BB: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:871 STZ dest+2
    case 0x08BC: c.execute<0x64>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x08BE: c.execute<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x08C0: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x08C2: c.execute<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x08C4: c.execute<0x85>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:36 CLC
    case 0x08C6: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    case 0x08C7: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    case 0x08C9: if (c.p & 0x20) c.execute<0x69>(0x000020, 2); else c.execute<0x69>(0x006020, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Overlapping static entry reached from 0xEF08C9.
    case 0x08CB: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    case 0x08CC: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    case 0x08CE: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    case 0x08D0: if (c.p & 0x20) c.execute<0x69>(0x000030, 2); else c.execute<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Overlapping static entry reached from 0xEF08D0.
    case 0x08D2: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    case 0x08D3: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x08D5: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x08D7: c.execute<0x85>(0x00001C, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x08D9: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x08DB: c.execute<0x85>(0x00001E, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    case 0x08DD: if (c.p & 0x20) c.execute<0xA9>(0x0000F5, 2); else c.execute<0xA9>(0x0097F5, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Overlapping static entry reached from 0xEF08DD.
    case 0x08DF: c.execute<0x97>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    case 0x08E0: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Overlapping static entry reached from 0xEF08DF.
    case 0x08E1: c.execute<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    case 0x08E2: c.execute<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    case 0x08E3: c.execute<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    case 0x08E5: c.execute<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    case 0x08E6: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    case 0x08E8: c.execute<0x64>(0x000009, 2); return true;
    // src/system/saves/save_game_block.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0x08EA: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x08EC: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x08EE: c.execute<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x08F0: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x08F2: c.execute<0x85>(0x000018, 2); return true;
    // src/system/saves/save_game_block.asm:46 TDC
    case 0x08F4: c.execute<0x7B>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:47 CLC
    case 0x08F5: c.execute<0x18>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:48 ADC #@LOCAL02+2
    case 0x08F6: if (c.p & 0x20) c.execute<0x69>(0x000018, 2); else c.execute<0x69>(0x000018, 3); return true;
    // src/system/saves/save_game_block.asm:48 ADC #@LOCAL02+2
    // Overlapping static entry reached from 0xEF08F6.
    case 0x08F8: c.execute<0x00>(0x0000AA, 2); return true;
    // src/system/saves/save_game_block.asm:49 TAX
    case 0x08F9: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:50 STX @LOCAL03
    case 0x08FA: c.execute<0x86>(0x00001A, 2); return true;
    // src/system/saves/save_game_block.asm:51 LDA #.HIWORD(__BSS_START__)
    case 0x08FC: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/saves/save_game_block.asm:51 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xEF08FC.
    case 0x08FE: c.execute<0x00>(0x00009D, 2); return true;
    // src/system/saves/save_game_block.asm:52 STA __BSS_START__,X
    case 0x08FF: c.execute<0x9D>(0x000000, 3); return true;
    // include/macros.asm:836 LDA src
    case 0x0902: c.execute<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0904: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0906: c.execute<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0908: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x090A: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x090C: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x090E: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0910: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0912: c.execute<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0914: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0916: c.execute<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0918: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x091A: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x091C: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x091E: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0920: c.execute<0x85>(0x000014, 2); return true;
    // src/system/saves/save_game_block.asm:58 LDA #.SIZEOF(game_state)
    case 0x0922: if (c.p & 0x20) c.execute<0xA9>(0x0000D9, 2); else c.execute<0xA9>(0x0001D9, 3); return true;
    // src/system/saves/save_game_block.asm:58 LDA #.SIZEOF(game_state)
    // Overlapping static entry reached from 0xEF0922.
    case 0x0924: c.execute<0x01>(0x000022, 2); return true;
    // src/system/saves/save_game_block.asm:59 JSL MEMCPY24
    case 0x0925: c.execute<0x22>(0xC08EED, 4); return true;
    // src/system/saves/save_game_block.asm:59 JSL MEMCPY24
    // Overlapping static entry reached from 0xEF0924.
    case 0x0926: c.execute<0xED>(0x00C08E, 3); return true;
    // src/system/saves/save_game_block.asm:60 LDA #.SIZEOF(game_state)
    case 0x0929: if (c.p & 0x20) c.execute<0xA9>(0x0000D9, 2); else c.execute<0xA9>(0x0001D9, 3); return true;
    // src/system/saves/save_game_block.asm:60 LDA #.SIZEOF(game_state)
    // Overlapping static entry reached from 0xEF0929.
    case 0x092B: c.execute<0x01>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    case 0x092C: c.execute<0xA6>(0x00001C, 2); return true;
    // include/macros.asm:1037 LDX src
    // Overlapping static entry reached from 0xEF092B.
    case 0x092D: c.execute<0x1C>(0x000686, 3); return true;
    // include/macros.asm:1038 STX dest
    case 0x092E: c.execute<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    case 0x0930: c.execute<0xA6>(0x00001E, 2); return true;
    // include/macros.asm:1040 STX dest+2
    case 0x0932: c.execute<0x86>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:62 CLC
    case 0x0934: c.execute<0x18>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:63 ADC @VIRTUAL06
    case 0x0935: c.execute<0x65>(0x000006, 2); return true;
    // src/system/saves/save_game_block.asm:64 STA @VIRTUAL06
    case 0x0937: c.execute<0x85>(0x000006, 2); return true;
    // src/system/saves/save_game_block.asm:65 STA @LOCAL04
    case 0x0939: c.execute<0x85>(0x00001C, 2); return true;
    // src/system/saves/save_game_block.asm:66 LDA @VIRTUAL06+2
    case 0x093B: c.execute<0xA5>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:67 STA @LOCAL04+2
    case 0x093D: c.execute<0x85>(0x00001E, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    case 0x093F: if (c.p & 0x20) c.execute<0xA9>(0x0000CE, 2); else c.execute<0xA9>(0x0099CE, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Overlapping static entry reached from 0xEF093F.
    case 0x0941: c.execute<0x99>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    case 0x0942: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    case 0x0944: c.execute<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    case 0x0945: c.execute<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    case 0x0947: c.execute<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    case 0x0948: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    case 0x094A: c.execute<0x64>(0x000009, 2); return true;
    // src/system/saves/save_game_block.asm:69 REP #PROC_FLAGS::ACCUM8
    case 0x094C: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x094E: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0950: c.execute<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0952: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0954: c.execute<0x85>(0x000018, 2); return true;
    // src/system/saves/save_game_block.asm:71 LDA #.HIWORD(__BSS_START__)
    case 0x0956: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/saves/save_game_block.asm:71 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xEF0956.
    case 0x0958: c.execute<0x00>(0x0000A6, 2); return true;
    // src/system/saves/save_game_block.asm:75 LDX @LOCAL03
    case 0x0959: c.execute<0xA6>(0x00001A, 2); return true;
    // src/system/saves/save_game_block.asm:76 STA __BSS_START__,X
    case 0x095B: c.execute<0x9D>(0x000000, 3); return true;
    // include/macros.asm:836 LDA src
    case 0x095E: c.execute<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0960: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0962: c.execute<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0964: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0966: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0968: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x096A: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x096C: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x096E: c.execute<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0970: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0972: c.execute<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0974: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0976: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0978: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x097A: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x097C: c.execute<0x85>(0x000014, 2); return true;
    // src/system/saves/save_game_block.asm:82 LDA #.SIZEOF(char_struct) * 6
    case 0x097E: if (c.p & 0x20) c.execute<0xA9>(0x00003A, 2); else c.execute<0xA9>(0x00023A, 3); return true;
    // src/system/saves/save_game_block.asm:82 LDA #.SIZEOF(char_struct) * 6
    // Overlapping static entry reached from 0xEF097E.
    case 0x0980: c.execute<0x02>(0x000022, 2); return true;
    // src/system/saves/save_game_block.asm:83 JSL MEMCPY24
    case 0x0981: c.execute<0x22>(0xC08EED, 4); return true;
    // src/system/saves/save_game_block.asm:84 LDA #.SIZEOF(char_struct) * 6
    case 0x0985: if (c.p & 0x20) c.execute<0xA9>(0x00003A, 2); else c.execute<0xA9>(0x00023A, 3); return true;
    // src/system/saves/save_game_block.asm:84 LDA #.SIZEOF(char_struct) * 6
    // Overlapping static entry reached from 0xEF0985.
    case 0x0987: c.execute<0x02>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    case 0x0988: c.execute<0xA6>(0x00001C, 2); return true;
    // include/macros.asm:1038 STX dest
    case 0x098A: c.execute<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    case 0x098C: c.execute<0xA6>(0x00001E, 2); return true;
    // include/macros.asm:1040 STX dest+2
    case 0x098E: c.execute<0x86>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:86 CLC
    case 0x0990: c.execute<0x18>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:87 ADC @VIRTUAL06
    case 0x0991: c.execute<0x65>(0x000006, 2); return true;
    // src/system/saves/save_game_block.asm:88 STA @VIRTUAL06
    case 0x0993: c.execute<0x85>(0x000006, 2); return true;
    // src/system/saves/save_game_block.asm:89 STA @LOCAL04
    case 0x0995: c.execute<0x85>(0x00001C, 2); return true;
    // src/system/saves/save_game_block.asm:90 LDA @VIRTUAL06+2
    case 0x0997: c.execute<0xA5>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:91 STA @LOCAL04+2
    case 0x0999: c.execute<0x85>(0x00001E, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    case 0x099B: if (c.p & 0x20) c.execute<0xA9>(0x000008, 2); else c.execute<0xA9>(0x009C08, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Overlapping static entry reached from 0xEF099B.
    case 0x099D: c.execute<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    case 0x099E: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    case 0x09A0: c.execute<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    case 0x09A1: c.execute<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    case 0x09A3: c.execute<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    case 0x09A4: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    case 0x09A6: c.execute<0x64>(0x000009, 2); return true;
    // src/system/saves/save_game_block.asm:93 REP #PROC_FLAGS::ACCUM8
    case 0x09A8: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x09AA: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x09AC: c.execute<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x09AE: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x09B0: c.execute<0x85>(0x000018, 2); return true;
    // src/system/saves/save_game_block.asm:95 LDA #.HIWORD(__BSS_START__)
    case 0x09B2: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/saves/save_game_block.asm:95 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xEF09B2.
    case 0x09B4: c.execute<0x00>(0x0000A6, 2); return true;
    // src/system/saves/save_game_block.asm:99 LDX @LOCAL03
    case 0x09B5: c.execute<0xA6>(0x00001A, 2); return true;
    // src/system/saves/save_game_block.asm:100 STA __BSS_START__,X
    case 0x09B7: c.execute<0x9D>(0x000000, 3); return true;
    // include/macros.asm:836 LDA src
    case 0x09BA: c.execute<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x09BC: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x09BE: c.execute<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x09C0: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x09C2: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x09C4: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x09C6: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x09C8: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x09CA: c.execute<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x09CC: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x09CE: c.execute<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x09D0: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x09D2: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x09D4: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x09D6: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x09D8: c.execute<0x85>(0x000014, 2); return true;
    // src/system/saves/save_game_block.asm:106 LDA #.SIZEOF(save_block::event_flags)
    case 0x09DA: if (c.p & 0x20) c.execute<0xA9>(0x000080, 2); else c.execute<0xA9>(0x000080, 3); return true;
    // src/system/saves/save_game_block.asm:106 LDA #.SIZEOF(save_block::event_flags)
    // Overlapping static entry reached from 0xEF09DA.
    case 0x09DC: c.execute<0x00>(0x000022, 2); return true;
    // src/system/saves/save_game_block.asm:107 JSL MEMCPY24
    case 0x09DD: c.execute<0x22>(0xC08EED, 4); return true;
    // include/macros.asm:836 LDA src
    case 0x09E1: c.execute<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x09E3: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x09E5: c.execute<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x09E7: c.execute<0x85>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:109 CLC
    case 0x09E9: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    case 0x09EA: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    case 0x09EC: if (c.p & 0x20) c.execute<0x69>(0x00001C, 2); else c.execute<0x69>(0x00601C, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Overlapping static entry reached from 0xEF09EC.
    case 0x09EE: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    case 0x09EF: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    case 0x09F1: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    case 0x09F3: if (c.p & 0x20) c.execute<0x69>(0x000030, 2); else c.execute<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Overlapping static entry reached from 0xEF09F3.
    case 0x09F5: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    case 0x09F6: c.execute<0x85>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:115 LDY @LOCAL05
    case 0x09F8: c.execute<0xA4>(0x000020, 2); return true;
    // src/system/saves/save_game_block.asm:116 TYA
    case 0x09FA: c.execute<0x98>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:118 JSR CALC_SAVE_BLOCK_ADD_CHECKSUM
    case 0x09FB: c.execute<0x20>(0x000734, 3); return true;
    // src/system/saves/save_game_block.asm:124 TAX
    case 0x09FE: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:125 STX @LOCAL03
    case 0x09FF: c.execute<0x86>(0x00001A, 2); return true;
    // src/system/saves/save_game_block.asm:126 TXA
    case 0x0A01: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:128 STA [@VIRTUAL06]
    case 0x0A02: c.execute<0x87>(0x000006, 2); return true;
    // src/system/saves/save_game_block.asm:133 LDY @LOCAL05
    case 0x0A04: c.execute<0xA4>(0x000020, 2); return true;
    // src/system/saves/save_game_block.asm:134 TYA
    case 0x0A06: c.execute<0x98>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:136 JSR CALC_SAVE_BLOCK_ADD_CHECKSUM
    case 0x0A07: c.execute<0x20>(0x000734, 3); return true;
    // src/system/saves/save_game_block.asm:137 STA @VIRTUAL02
    case 0x0A0A: c.execute<0x85>(0x000002, 2); return true;
    // src/system/saves/save_game_block.asm:142 LDX @LOCAL03
    case 0x0A0C: c.execute<0xA6>(0x00001A, 2); return true;
    // src/system/saves/save_game_block.asm:143 TXA
    case 0x0A0E: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:145 CMP @VIRTUAL02
    case 0x0A0F: c.execute<0xC5>(0x000002, 2); return true;
    // include/macros.asm:778 BEQ :+
    case 0x0A11: c.execute<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    case 0x0A13: c.execute<0x4C>(0x00089C, 3); return true;
    // include/macros.asm:836 LDA src
    case 0x0A16: c.execute<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0A18: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0A1A: c.execute<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0A1C: c.execute<0x85>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:148 CLC
    case 0x0A1E: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    case 0x0A1F: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    case 0x0A21: if (c.p & 0x20) c.execute<0x69>(0x00001E, 2); else c.execute<0x69>(0x00601E, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Overlapping static entry reached from 0xEF0A21.
    case 0x0A23: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    case 0x0A24: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    case 0x0A26: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    case 0x0A28: if (c.p & 0x20) c.execute<0x69>(0x000030, 2); else c.execute<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Overlapping static entry reached from 0xEF0A28.
    case 0x0A2A: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    case 0x0A2B: c.execute<0x85>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:154 LDY @LOCAL05
    case 0x0A2D: c.execute<0xA4>(0x000020, 2); return true;
    // src/system/saves/save_game_block.asm:155 TYA
    case 0x0A2F: c.execute<0x98>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:157 JSR CALC_SAVE_BLOCK_XOR_CHECKSUM
    case 0x0A30: c.execute<0x20>(0x00077B, 3); return true;
    // src/system/saves/save_game_block.asm:163 TAX
    case 0x0A33: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:164 STX @LOCAL03
    case 0x0A34: c.execute<0x86>(0x00001A, 2); return true;
    // src/system/saves/save_game_block.asm:165 TXA
    case 0x0A36: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:167 STA [@VIRTUAL06]
    case 0x0A37: c.execute<0x87>(0x000006, 2); return true;
    // src/system/saves/save_game_block.asm:172 LDY @LOCAL05
    case 0x0A39: c.execute<0xA4>(0x000020, 2); return true;
    // src/system/saves/save_game_block.asm:173 TYA
    case 0x0A3B: c.execute<0x98>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:175 JSR CALC_SAVE_BLOCK_XOR_CHECKSUM
    case 0x0A3C: c.execute<0x20>(0x00077B, 3); return true;
    // src/system/saves/save_game_block.asm:176 STA @VIRTUAL02
    case 0x0A3F: c.execute<0x85>(0x000002, 2); return true;
    // src/system/saves/save_game_block.asm:181 LDX @LOCAL03
    case 0x0A41: c.execute<0xA6>(0x00001A, 2); return true;
    // src/system/saves/save_game_block.asm:182 TXA
    case 0x0A43: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:184 CMP @VIRTUAL02
    case 0x0A44: c.execute<0xC5>(0x000002, 2); return true;
    // include/macros.asm:778 BEQ :+
    case 0x0A46: c.execute<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    case 0x0A48: c.execute<0x4C>(0x00089C, 3); return true;
    // include/macros.asm:25 PLD
    case 0x0A4B: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0x0A4C: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0A4D: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0A4F: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0x0A50: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0A51: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0A52: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF0A52.
    case 0x0A54: c.execute<0xFF>(0x0A685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0A55: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0x0A56: c.execute<0x68>(0x000000, 1); return true;
    // src/system/saves/save_game_slot.asm:8 ASL
    case 0x0A57: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/saves/save_game_slot.asm:9 TAX
    case 0x0A58: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/saves/save_game_slot.asm:10 STX @LOCAL00
    case 0x0A59: c.execute<0x86>(0x00000E, 2); return true;
    // src/system/saves/save_game_slot.asm:11 TXA
    case 0x0A5B: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/saves/save_game_slot.asm:12 JSR SAVE_GAME_BLOCK
    case 0x0A5C: c.execute<0x20>(0x00088F, 3); return true;
    // src/system/saves/save_game_slot.asm:13 LDX @LOCAL00
    case 0x0A5F: c.execute<0xA6>(0x00000E, 2); return true;
    // src/system/saves/save_game_slot.asm:14 TXA
    case 0x0A61: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/saves/save_game_slot.asm:15 INC
    case 0x0A62: c.execute<0x1A>(0x000000, 1); return true;
    // src/system/saves/save_game_slot.asm:16 JSR SAVE_GAME_BLOCK
    case 0x0A63: c.execute<0x20>(0x00088F, 3); return true;
    // include/macros.asm:25 PLD
    case 0x0A66: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x0A67: c.execute<0x6B>(0x000000, 1); return true;
    // src/system/saves/load_game_slot.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0A68: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0A6A: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0x0A6B: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0A6C: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0A6D: if (c.p & 0x20) c.execute<0x69>(0x0000E0, 2); else c.execute<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF0A6D.
    case 0x0A6F: c.execute<0xFF>(0xA0685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0A70: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0x0A71: c.execute<0x68>(0x000000, 1); return true;
    // src/system/saves/load_game_slot.asm:19 LDY #$0A00
    case 0x0A72: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000A00, 3); return true;
    // src/system/saves/load_game_slot.asm:19 LDY #$0A00
    // Overlapping static entry reached from 0xEF0A6F.
    case 0x0A73: c.execute<0x00>(0x00000A, 2); return true;
    // src/system/saves/load_game_slot.asm:19 LDY #$0A00
    // Overlapping static entry reached from 0xEF0A72.
    case 0x0A74: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/saves/load_game_slot.asm:20 JSL MULT16
    case 0x0A75: c.execute<0x22>(0xC09032, 4); return true;
    // include/macros.asm:870 STA dest
    case 0x0A79: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0x0A7B: c.execute<0x64>(0x000008, 2); return true;
    // src/system/saves/load_game_slot.asm:22 CLC
    case 0x0A7D: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    case 0x0A7E: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    case 0x0A80: if (c.p & 0x20) c.execute<0x69>(0x000020, 2); else c.execute<0x69>(0x006020, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Overlapping static entry reached from 0xEF0A80.
    case 0x0A82: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    case 0x0A83: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    case 0x0A85: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    case 0x0A87: if (c.p & 0x20) c.execute<0x69>(0x000030, 2); else c.execute<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Overlapping static entry reached from 0xEF0A87.
    case 0x0A89: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    case 0x0A8A: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0A8C: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0A8E: c.execute<0x85>(0x00001C, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0A90: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0A92: c.execute<0x85>(0x00001E, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    case 0x0A94: if (c.p & 0x20) c.execute<0xA9>(0x0000F5, 2); else c.execute<0xA9>(0x0097F5, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Overlapping static entry reached from 0xEF0A94.
    case 0x0A96: c.execute<0x97>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    case 0x0A97: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Overlapping static entry reached from 0xEF0A96.
    case 0x0A98: c.execute<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    case 0x0A99: c.execute<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    case 0x0A9A: c.execute<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    case 0x0A9C: c.execute<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    case 0x0A9D: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    case 0x0A9F: c.execute<0x64>(0x000009, 2); return true;
    // src/system/saves/load_game_slot.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0x0AA1: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0AA3: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0AA5: c.execute<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0AA7: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0AA9: c.execute<0x85>(0x000018, 2); return true;
    // src/system/saves/load_game_slot.asm:32 TDC
    case 0x0AAB: c.execute<0x7B>(0x000000, 1); return true;
    // src/system/saves/load_game_slot.asm:33 CLC
    case 0x0AAC: c.execute<0x18>(0x000000, 1); return true;
    // src/system/saves/load_game_slot.asm:34 ADC #$0018
    case 0x0AAD: if (c.p & 0x20) c.execute<0x69>(0x000018, 2); else c.execute<0x69>(0x000018, 3); return true;
    // src/system/saves/load_game_slot.asm:34 ADC #$0018
    // Overlapping static entry reached from 0xEF0AAD.
    case 0x0AAF: c.execute<0x00>(0x0000AA, 2); return true;
    // src/system/saves/load_game_slot.asm:35 TAX
    case 0x0AB0: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/saves/load_game_slot.asm:36 STX @UNKNOWN_EB_LOCAL
    case 0x0AB1: c.execute<0x86>(0x00001A, 2); return true;
    // src/system/saves/load_game_slot.asm:37 LDA #$007E
    case 0x0AB3: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/saves/load_game_slot.asm:37 LDA #$007E
    // Overlapping static entry reached from 0xEF0AB3.
    case 0x0AB5: c.execute<0x00>(0x00009D, 2); return true;
    // src/system/saves/load_game_slot.asm:38 STA __BSS_START__,X
    case 0x0AB6: c.execute<0x9D>(0x000000, 3); return true;
    // include/macros.asm:836 LDA src
    case 0x0AB9: c.execute<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0ABB: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0ABD: c.execute<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0ABF: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0AC1: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0AC3: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0AC5: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0AC7: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0AC9: c.execute<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0ACB: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0ACD: c.execute<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0ACF: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0AD1: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0AD3: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0AD5: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0AD7: c.execute<0x85>(0x000014, 2); return true;
    // src/system/saves/load_game_slot.asm:44 LDA #.SIZEOF(game_state)
    case 0x0AD9: if (c.p & 0x20) c.execute<0xA9>(0x0000D9, 2); else c.execute<0xA9>(0x0001D9, 3); return true;
    // src/system/saves/load_game_slot.asm:44 LDA #.SIZEOF(game_state)
    // Overlapping static entry reached from 0xEF0AD9.
    case 0x0ADB: c.execute<0x01>(0x000022, 2); return true;
    // src/system/saves/load_game_slot.asm:45 JSL MEMCPY24
    case 0x0ADC: c.execute<0x22>(0xC08EED, 4); return true;
    // src/system/saves/load_game_slot.asm:45 JSL MEMCPY24
    // Overlapping static entry reached from 0xEF0ADB.
    case 0x0ADD: c.execute<0xED>(0x00C08E, 3); return true;
    // src/system/saves/load_game_slot.asm:46 LDA #.SIZEOF(game_state)
    case 0x0AE0: if (c.p & 0x20) c.execute<0xA9>(0x0000D9, 2); else c.execute<0xA9>(0x0001D9, 3); return true;
    // src/system/saves/load_game_slot.asm:46 LDA #.SIZEOF(game_state)
    // Overlapping static entry reached from 0xEF0AE0.
    case 0x0AE2: c.execute<0x01>(0x000018, 2); return true;
    // src/system/saves/load_game_slot.asm:47 CLC
    case 0x0AE3: c.execute<0x18>(0x000000, 1); return true;
    // src/system/saves/load_game_slot.asm:48 ADC @VIRTUAL06
    case 0x0AE4: c.execute<0x65>(0x000006, 2); return true;
    // src/system/saves/load_game_slot.asm:49 STA @VIRTUAL06
    case 0x0AE6: c.execute<0x85>(0x000006, 2); return true;
    // src/system/saves/load_game_slot.asm:50 STA @LOCAL03
    case 0x0AE8: c.execute<0x85>(0x00001C, 2); return true;
    // src/system/saves/load_game_slot.asm:51 LDA @VIRTUAL06 + 2
    case 0x0AEA: c.execute<0xA5>(0x000008, 2); return true;
    // src/system/saves/load_game_slot.asm:52 STA @LOCAL03 + 2
    case 0x0AEC: c.execute<0x85>(0x00001E, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    case 0x0AEE: if (c.p & 0x20) c.execute<0xA9>(0x0000CE, 2); else c.execute<0xA9>(0x0099CE, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Overlapping static entry reached from 0xEF0AEE.
    case 0x0AF0: c.execute<0x99>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    case 0x0AF1: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    case 0x0AF3: c.execute<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    case 0x0AF4: c.execute<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    case 0x0AF6: c.execute<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    case 0x0AF7: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    case 0x0AF9: c.execute<0x64>(0x000009, 2); return true;
    // src/system/saves/load_game_slot.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0x0AFB: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0AFD: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0AFF: c.execute<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0B01: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0B03: c.execute<0x85>(0x000018, 2); return true;
    // src/system/saves/load_game_slot.asm:56 LDA #$007E
    case 0x0B05: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/saves/load_game_slot.asm:56 LDA #$007E
    // Overlapping static entry reached from 0xEF0B05.
    case 0x0B07: c.execute<0x00>(0x0000A6, 2); return true;
    // src/system/saves/load_game_slot.asm:60 LDX @UNKNOWN_EB_LOCAL
    case 0x0B08: c.execute<0xA6>(0x00001A, 2); return true;
    // src/system/saves/load_game_slot.asm:61 STA __BSS_START__,X
    case 0x0B0A: c.execute<0x9D>(0x000000, 3); return true;
    // include/macros.asm:836 LDA src
    case 0x0B0D: c.execute<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0B0F: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0B11: c.execute<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0B13: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0B15: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0B17: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0B19: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0B1B: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0B1D: c.execute<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0B1F: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0B21: c.execute<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0B23: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0B25: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0B27: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0B29: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0B2B: c.execute<0x85>(0x000014, 2); return true;
    // src/system/saves/load_game_slot.asm:67 LDA #.SIZEOF(char_struct)*6
    case 0x0B2D: if (c.p & 0x20) c.execute<0xA9>(0x00003A, 2); else c.execute<0xA9>(0x00023A, 3); return true;
    // src/system/saves/load_game_slot.asm:67 LDA #.SIZEOF(char_struct)*6
    // Overlapping static entry reached from 0xEF0B2D.
    case 0x0B2F: c.execute<0x02>(0x000022, 2); return true;
    // src/system/saves/load_game_slot.asm:68 JSL MEMCPY24
    case 0x0B30: c.execute<0x22>(0xC08EED, 4); return true;
    // src/system/saves/load_game_slot.asm:69 LDA #.SIZEOF(char_struct)*6
    case 0x0B34: if (c.p & 0x20) c.execute<0xA9>(0x00003A, 2); else c.execute<0xA9>(0x00023A, 3); return true;
    // src/system/saves/load_game_slot.asm:69 LDA #.SIZEOF(char_struct)*6
    // Overlapping static entry reached from 0xEF0B34.
    case 0x0B36: c.execute<0x02>(0x000018, 2); return true;
    // src/system/saves/load_game_slot.asm:70 CLC
    case 0x0B37: c.execute<0x18>(0x000000, 1); return true;
    // src/system/saves/load_game_slot.asm:71 ADC @VIRTUAL06
    case 0x0B38: c.execute<0x65>(0x000006, 2); return true;
    // src/system/saves/load_game_slot.asm:72 STA @VIRTUAL06
    case 0x0B3A: c.execute<0x85>(0x000006, 2); return true;
    // src/system/saves/load_game_slot.asm:73 STA @LOCAL03
    case 0x0B3C: c.execute<0x85>(0x00001C, 2); return true;
    // src/system/saves/load_game_slot.asm:74 LDA @VIRTUAL06 + 2
    case 0x0B3E: c.execute<0xA5>(0x000008, 2); return true;
    // src/system/saves/load_game_slot.asm:75 STA @LOCAL03 + 2
    case 0x0B40: c.execute<0x85>(0x00001E, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    case 0x0B42: if (c.p & 0x20) c.execute<0xA9>(0x000008, 2); else c.execute<0xA9>(0x009C08, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Overlapping static entry reached from 0xEF0B42.
    case 0x0B44: c.execute<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    case 0x0B45: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    case 0x0B47: c.execute<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    case 0x0B48: c.execute<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    case 0x0B4A: c.execute<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    case 0x0B4B: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    case 0x0B4D: c.execute<0x64>(0x000009, 2); return true;
    // src/system/saves/load_game_slot.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0x0B4F: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0B51: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0B53: c.execute<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0B55: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0B57: c.execute<0x85>(0x000018, 2); return true;
    // src/system/saves/load_game_slot.asm:79 LDA #$007E
    case 0x0B59: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/saves/load_game_slot.asm:79 LDA #$007E
    // Overlapping static entry reached from 0xEF0B59.
    case 0x0B5B: c.execute<0x00>(0x0000A6, 2); return true;
    // src/system/saves/load_game_slot.asm:83 LDX @UNKNOWN_EB_LOCAL
    case 0x0B5C: c.execute<0xA6>(0x00001A, 2); return true;
    // src/system/saves/load_game_slot.asm:84 STA __BSS_START__,X
    case 0x0B5E: c.execute<0x9D>(0x000000, 3); return true;
    // include/macros.asm:836 LDA src
    case 0x0B61: c.execute<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0B63: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0B65: c.execute<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0B67: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0B69: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0B6B: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0B6D: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0B6F: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0B71: c.execute<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0B73: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0B75: c.execute<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0B77: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0B79: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0B7B: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0B7D: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0B7F: c.execute<0x85>(0x000014, 2); return true;
    // src/system/saves/load_game_slot.asm:90 LDA #$0080
    case 0x0B81: if (c.p & 0x20) c.execute<0xA9>(0x000080, 2); else c.execute<0xA9>(0x000080, 3); return true;
    // src/system/saves/load_game_slot.asm:90 LDA #$0080
    // Overlapping static entry reached from 0xEF0B81.
    case 0x0B83: c.execute<0x00>(0x000022, 2); return true;
    // src/system/saves/load_game_slot.asm:91 JSL MEMCPY24
    case 0x0B84: c.execute<0x22>(0xC08EED, 4); return true;
    // include/macros.asm:836 LDA src
    case 0x0B88: c.execute<0xAD>(0x0099C9, 3); return true;
    // include/macros.asm:837 STA dest
    case 0x0B8B: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0B8D: c.execute<0xAD>(0x0099CB, 3); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0B90: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0B92: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0B94: c.execute<0x8D>(0x0000A7, 3); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0B97: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0B99: c.execute<0x8D>(0x0000A9, 3); return true;
    // src/system/saves/load_game_slot.asm:94 PLD
    case 0x0B9C: c.execute<0x2B>(0x000000, 1); return true;
    // src/system/saves/load_game_slot.asm:95 RTL
    case 0x0B9D: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0B9E: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0BA0: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0BA1: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0BA2: if (c.p & 0x20) c.execute<0x69>(0x0000EC, 2); else c.execute<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF0BA2.
    case 0x0BA4: c.execute<0xFF>(0x93A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0BA5: c.execute<0x5B>(0x000000, 1); return true;
    // src/system/saves/check_sram_integrity.asm:8 LDA #SRAM_VERSION
    case 0x0BA6: if (c.p & 0x20) c.execute<0xA9>(0x000093, 2); else c.execute<0xA9>(0x000493, 3); return true;
    // src/system/saves/check_sram_integrity.asm:8 LDA #SRAM_VERSION
    // Overlapping static entry reached from 0xEF0BA6.
    case 0x0BA8: c.execute<0x04>(0x00008D, 2); return true;
    // src/system/saves/check_sram_integrity.asm:9 STA SRAM_VERSION_LOADED
    case 0x0BA9: c.execute<0x8D>(0x009F77, 3); return true;
    // src/system/saves/check_sram_integrity.asm:9 STA SRAM_VERSION_LOADED
    // Overlapping static entry reached from 0xEF0BA8.
    case 0x0BAA: c.execute<0x77>(0x00009F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0x0BAC: if (c.p & 0x20) c.execute<0xA9>(0x0000FE, 2); else c.execute<0xA9>(0x007FFE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEF0BAC.
    case 0x0BAE: c.execute<0x7F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    case 0x0BAF: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0x0BB1: if (c.p & 0x20) c.execute<0xA9>(0x000030, 2); else c.execute<0xA9>(0x000030, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEF0BAE.
    case 0x0BB2: c.execute<0x30>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEF0BB1.
    case 0x0BB3: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0x0BB4: c.execute<0x85>(0x000008, 2); return true;
    // src/system/saves/check_sram_integrity.asm:11 LDA [@VIRTUAL06]
    case 0x0BB6: c.execute<0xA7>(0x000006, 2); return true;
    // src/system/saves/check_sram_integrity.asm:12 CMP #SRAM_VERSION
    case 0x0BB8: if (c.p & 0x20) c.execute<0xC9>(0x000093, 2); else c.execute<0xC9>(0x000493, 3); return true;
    // src/system/saves/check_sram_integrity.asm:12 CMP #SRAM_VERSION
    // Overlapping static entry reached from 0xEF0BB8.
    case 0x0BBA: c.execute<0x04>(0x0000F0, 2); return true;
    // src/system/saves/check_sram_integrity.asm:13 BEQ @GOOD_SRAM
    case 0x0BBB: c.execute<0xF0>(0x000015, 2); return true;
    // src/system/saves/check_sram_integrity.asm:13 BEQ @GOOD_SRAM
    // Overlapping static entry reached from 0xEF0BBA.
    case 0x0BBC: c.execute<0x15>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0x0BBD: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x006000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEF0BBC.
    case 0x0BBE: c.execute<0x00>(0x000060, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEF0BBD.
    case 0x0BBF: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    case 0x0BC0: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0x0BC2: if (c.p & 0x20) c.execute<0xA9>(0x000030, 2); else c.execute<0xA9>(0x000030, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEF0BC2.
    case 0x0BC4: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0x0BC5: c.execute<0x85>(0x000010, 2); return true;
    // src/system/saves/check_sram_integrity.asm:15 LDX #$2000
    case 0x0BC7: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x002000, 3); return true;
    // src/system/saves/check_sram_integrity.asm:15 LDX #$2000
    // Overlapping static entry reached from 0xEF0BC7.
    case 0x0BC9: c.execute<0x20>(0x0020E2, 3); return true;
    // src/system/saves/check_sram_integrity.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0x0BCA: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/saves/check_sram_integrity.asm:17 LDA #0
    case 0x0BCC: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/saves/check_sram_integrity.asm:18 JSL MEMSET24
    case 0x0BCE: c.execute<0x22>(0xC08F15, 4); return true;
    // src/system/saves/check_sram_integrity.asm:18 JSL MEMSET24
    // Overlapping static entry reached from 0xEF0BCC.
    case 0x0BCF: c.execute<0x15>(0x00008F, 2); return true;
    // src/system/saves/check_sram_integrity.asm:18 JSL MEMSET24
    // Overlapping static entry reached from 0xEF0BCF.
    case 0x0BD1: if (c.p & 0x10) c.execute<0xC0>(0x000020, 2); else c.execute<0xC0>(0x008320, 3); return true;
    // src/system/saves/check_sram_integrity.asm:20 JSR CHECK_ALL_BLOCKS_SIGNATURE
    case 0x0BD2: c.execute<0x20>(0x000683, 3); return true;
    // src/system/saves/check_sram_integrity.asm:20 JSR CHECK_ALL_BLOCKS_SIGNATURE
    // Overlapping static entry reached from 0xEF0BD1.
    case 0x0BD3: c.execute<0x83>(0x000006, 2); return true;
    // src/system/saves/check_sram_integrity.asm:20 JSR CHECK_ALL_BLOCKS_SIGNATURE
    // Overlapping static entry reached from 0xEF0BD1.
    case 0x0BD4: c.execute<0x06>(0x0000E2, 2); return true;
    // src/system/saves/check_sram_integrity.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0x0BD5: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/saves/check_sram_integrity.asm:21 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xEF0BD4.
    case 0x0BD6: c.execute<0x20>(0x00799C, 3); return true;
    // src/system/saves/check_sram_integrity.asm:22 STZ CORRUPTION_CHECK_RESULTS
    case 0x0BD7: c.execute<0x9C>(0x009F79, 3); return true;
    // src/system/saves/check_sram_integrity.asm:22 STZ CORRUPTION_CHECK_RESULTS
    // Overlapping static entry reached from 0xEF0BD6.
    case 0x0BD9: c.execute<0x9F>(0x0000A2, 4); return true;
    // src/system/saves/check_sram_integrity.asm:23 LDX #0
    case 0x0BDA: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/system/saves/check_sram_integrity.asm:23 LDX #0
    // Overlapping static entry reached from 0xEF0BDA.
    case 0x0BDC: c.execute<0x00>(0x000086, 2); return true;
    // src/system/saves/check_sram_integrity.asm:24 STX @LOCAL01
    case 0x0BDD: c.execute<0x86>(0x000012, 2); return true;
    // src/system/saves/check_sram_integrity.asm:25 BRA @LOOP_ENTRY
    case 0x0BDF: c.execute<0x80>(0x00000B, 2); return true;
    // src/system/saves/check_sram_integrity.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0x0BE1: c.execute<0xC2>(0x000020, 2); return true;
    // src/system/saves/check_sram_integrity.asm:28 TXA
    case 0x0BE3: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/saves/check_sram_integrity.asm:29 JSR CHECK_SAVE_CORRUPTION
    case 0x0BE4: c.execute<0x20>(0x000825, 3); return true;
    // src/system/saves/check_sram_integrity.asm:30 LDX @LOCAL01
    case 0x0BE7: c.execute<0xA6>(0x000012, 2); return true;
    // src/system/saves/check_sram_integrity.asm:31 INX
    case 0x0BE9: c.execute<0xE8>(0x000000, 1); return true;
    // src/system/saves/check_sram_integrity.asm:32 STX @LOCAL01
    case 0x0BEA: c.execute<0x86>(0x000012, 2); return true;
    // src/system/saves/check_sram_integrity.asm:34 CPX #3
    case 0x0BEC: if (c.p & 0x10) c.execute<0xE0>(0x000003, 2); else c.execute<0xE0>(0x000003, 3); return true;
    // src/system/saves/check_sram_integrity.asm:34 CPX #3
    // Overlapping static entry reached from 0xEF0BEC.
    case 0x0BEE: c.execute<0x00>(0x000090, 2); return true;
    // src/system/saves/check_sram_integrity.asm:35 BCC @LOOP_BEGINNING
    case 0x0BEF: c.execute<0x90>(0x0000F0, 2); return true;
    // src/system/saves/check_sram_integrity.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0x0BF1: c.execute<0xC2>(0x000020, 2); return true;
    // src/system/saves/check_sram_integrity.asm:37 LDA SRAM_VERSION_LOADED
    case 0x0BF3: c.execute<0xAD>(0x009F77, 3); return true;
    // src/system/saves/check_sram_integrity.asm:38 STA [@VIRTUAL06]
    case 0x0BF6: c.execute<0x87>(0x000006, 2); return true;
    // include/macros.asm:25 PLD
    case 0x0BF8: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x0BF9: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0BFA: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0BFC: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0x0BFD: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0BFE: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0BFF: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF0BFF.
    case 0x0C01: c.execute<0xFF>(0x0A685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0C02: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0x0C03: c.execute<0x68>(0x000000, 1); return true;
    // src/system/saves/erase_save_slot.asm:8 ASL
    case 0x0C04: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/saves/erase_save_slot.asm:9 TAX
    case 0x0C05: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/saves/erase_save_slot.asm:10 STX @LOCAL00
    case 0x0C06: c.execute<0x86>(0x00000E, 2); return true;
    // src/system/saves/erase_save_slot.asm:11 TXA
    case 0x0C08: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/saves/erase_save_slot.asm:12 JSR ERASE_SAVE_BLOCK
    case 0x0C09: c.execute<0x20>(0x0005A9, 3); return true;
    // src/system/saves/erase_save_slot.asm:13 LDX @LOCAL00
    case 0x0C0C: c.execute<0xA6>(0x00000E, 2); return true;
    // src/system/saves/erase_save_slot.asm:14 TXA
    case 0x0C0E: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/saves/erase_save_slot.asm:15 INC
    case 0x0C0F: c.execute<0x1A>(0x000000, 1); return true;
    // src/system/saves/erase_save_slot.asm:16 JSR ERASE_SAVE_BLOCK
    case 0x0C10: c.execute<0x20>(0x0005A9, 3); return true;
    // include/macros.asm:25 PLD
    case 0x0C13: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x0C14: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0C15: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0C17: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0x0C18: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0C19: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0C1A: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF0C1A.
    case 0x0C1C: c.execute<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0C1D: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0x0C1E: c.execute<0x68>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:10 STA @LOCAL01
    case 0x0C1F: c.execute<0x85>(0x000010, 2); return true;
    // src/system/saves/copy_save_slot.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xEF0C1C.
    case 0x0C20: c.execute<0x10>(0x00008A, 2); return true;
    // src/system/saves/copy_save_slot.asm:11 TXA
    case 0x0C21: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:12 ASL
    case 0x0C22: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:13 TAY
    case 0x0C23: c.execute<0xA8>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:14 STY @LOCAL00
    case 0x0C24: c.execute<0x84>(0x00000E, 2); return true;
    // src/system/saves/copy_save_slot.asm:15 LDA @LOCAL01
    case 0x0C26: c.execute<0xA5>(0x000010, 2); return true;
    // src/system/saves/copy_save_slot.asm:16 ASL
    case 0x0C28: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:17 STA @VIRTUAL02
    case 0x0C29: c.execute<0x85>(0x000002, 2); return true;
    // src/system/saves/copy_save_slot.asm:18 TYX
    case 0x0C2B: c.execute<0xBB>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:19 LDA @VIRTUAL02
    case 0x0C2C: c.execute<0xA5>(0x000002, 2); return true;
    // src/system/saves/copy_save_slot.asm:20 JSR COPY_SAVE_BLOCK
    case 0x0C2E: c.execute<0x20>(0x0006A2, 3); return true;
    // src/system/saves/copy_save_slot.asm:21 LDY @LOCAL00
    case 0x0C31: c.execute<0xA4>(0x00000E, 2); return true;
    // src/system/saves/copy_save_slot.asm:22 TYX
    case 0x0C33: c.execute<0xBB>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:23 INX
    case 0x0C34: c.execute<0xE8>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:24 LDA @VIRTUAL02
    case 0x0C35: c.execute<0xA5>(0x000002, 2); return true;
    // src/system/saves/copy_save_slot.asm:25 INC
    case 0x0C37: c.execute<0x1A>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:26 JSR COPY_SAVE_BLOCK
    case 0x0C38: c.execute<0x20>(0x0006A2, 3); return true;
    // include/macros.asm:25 PLD
    case 0x0C3B: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x0C3C: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0C3D: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0C3F: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0C40: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0C41: if (c.p & 0x20) c.execute<0x69>(0x0000F2, 2); else c.execute<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF0C41.
    case 0x0C43: c.execute<0xFF>(0x03A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0C44: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF0C3D.asm:6 LDA #3
    case 0x0C45: if (c.p & 0x20) c.execute<0xA9>(0x000003, 2); else c.execute<0xA9>(0x000003, 3); return true;
    // src/unknown/EF/EF0C3D.asm:6 LDA #3
    // Overlapping static entry reached from 0xEF0C45.
    case 0x0C47: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF0C3D.asm:7 JSL LOAD_GAME_SLOT
    case 0x0C48: c.execute<0x22>(0xEF0A68, 4); return true;
    // src/unknown/EF/EF0C3D.asm:8 LDA GAME_STATE+game_state::leader_x_coord
    case 0x0C4C: c.execute<0xAD>(0x009877, 3); return true;
    // src/unknown/EF/EF0C3D.asm:9 STA @VIRTUAL04
    case 0x0C4F: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EF0C3D.asm:10 LDA GAME_STATE+game_state::leader_y_coord
    case 0x0C51: c.execute<0xAD>(0x00987B, 3); return true;
    // src/unknown/EF/EF0C3D.asm:11 STA @VIRTUAL02
    case 0x0C54: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF0C3D.asm:12 LDX #1
    case 0x0C56: if (c.p & 0x10) c.execute<0xA2>(0x000001, 2); else c.execute<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EF0C3D.asm:12 LDX #1
    // Overlapping static entry reached from 0xEF0C56.
    case 0x0C58: c.execute<0x00>(0x00008A, 2); return true;
    // src/unknown/EF/EF0C3D.asm:13 TXA
    case 0x0C59: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF0C3D.asm:14 JSL FADE_OUT
    case 0x0C5A: c.execute<0x22>(0xC0887A, 4); return true;
    // src/unknown/EF/EF0C3D.asm:15 LDX @VIRTUAL02
    case 0x0C5E: c.execute<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EF0C3D.asm:16 LDA @VIRTUAL04
    case 0x0C60: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EF0C3D.asm:17 JSL UNKNOWN_C068F4
    case 0x0C62: c.execute<0x22>(0xC068F4, 4); return true;
    // src/unknown/EF/EF0C3D.asm:18 LDX @VIRTUAL02
    case 0x0C66: c.execute<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EF0C3D.asm:19 LDA @VIRTUAL04
    case 0x0C68: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EF0C3D.asm:20 JSL LOAD_MAP_AT_POSITION
    case 0x0C6A: c.execute<0x22>(0xC013F6, 4); return true;
    // src/unknown/EF/EF0C3D.asm:21 LDY GAME_STATE+game_state::leader_direction
    case 0x0C6E: c.execute<0xAC>(0x00987F, 3); return true;
    // src/unknown/EF/EF0C3D.asm:22 LDX @VIRTUAL02
    case 0x0C71: c.execute<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EF0C3D.asm:23 LDA @VIRTUAL04
    case 0x0C73: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EF0C3D.asm:24 JSL UNKNOWN_C03FA9
    case 0x0C75: c.execute<0x22>(0xC03FA9, 4); return true;
    // src/unknown/EF/EF0C3D.asm:25 JSL UNKNOWN_C069AF
    case 0x0C79: c.execute<0x22>(0xC069AF, 4); return true;
    // src/unknown/EF/EF0C3D.asm:26 LDX #1
    case 0x0C7D: if (c.p & 0x10) c.execute<0xA2>(0x000001, 2); else c.execute<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EF0C3D.asm:26 LDX #1
    // Overlapping static entry reached from 0xEF0C7D.
    case 0x0C7F: c.execute<0x00>(0x00008A, 2); return true;
    // src/unknown/EF/EF0C3D.asm:27 TXA
    case 0x0C80: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF0C3D.asm:28 JSL FADE_IN
    case 0x0C81: c.execute<0x22>(0xC0886C, 4); return true;
    // include/macros.asm:25 PLD
    case 0x0C85: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x0C86: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0C87: c.execute<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EF0C87.asm:6 LDA CURRENT_ENTITY_SLOT
    case 0x0C89: c.execute<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF0C87.asm:7 ASL
    case 0x0C8C: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0C87.asm:8 TAX
    case 0x0C8D: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0C87.asm:9 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0x0C8E: c.execute<0xBD>(0x000E5E, 3); return true;
    // src/unknown/EF/EF0C87.asm:10 ASL
    case 0x0C91: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0C87.asm:11 TAX
    case 0x0C92: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0C87.asm:12 LDA DELIVERY_ATTEMPTS,X
    case 0x0C93: c.execute<0xBD>(0x00B511, 3); return true;
    // include/macros.asm:30 RTL
    case 0x0C96: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0C97: c.execute<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EF0C97.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0x0C99: c.execute<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF0C97.asm:6 ASL
    case 0x0C9C: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0C97.asm:7 TAX
    case 0x0C9D: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0C97.asm:8 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0x0C9E: c.execute<0xBD>(0x000E5E, 3); return true;
    // src/unknown/EF/EF0C97.asm:9 ASL
    case 0x0CA1: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0C97.asm:10 TAX
    case 0x0CA2: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0C97.asm:11 STZ DELIVERY_ATTEMPTS,X
    case 0x0CA3: c.execute<0x9E>(0x00B511, 3); return true;
    // include/macros.asm:30 RTL
    case 0x0CA6: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0CA7: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0CA9: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0CAA: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0CAB: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF0CAB.
    case 0x0CAD: c.execute<0xFF>(0x45A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0CAE: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0x0CAF: if (c.p & 0x20) c.execute<0xA9>(0x000045, 2); else c.execute<0xA9>(0x00F645, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEF0CAF.
    case 0x0CB1: c.execute<0xF6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0x0CB2: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xEF0CB1.
    case 0x0CB3: c.execute<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0x0CB4: if (c.p & 0x20) c.execute<0xA9>(0x0000D5, 2); else c.execute<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEF0CB3.
    case 0x0CB5: c.execute<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEF0CB4.
    case 0x0CB6: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0x0CB7: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EF0CA7.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0x0CB9: c.execute<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF0CA7.asm:10 ASL
    case 0x0CBC: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:11 TAX
    case 0x0CBD: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:12 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0x0CBE: c.execute<0xBD>(0x000E5E, 3); return true;
    // src/unknown/EF/EF0CA7.asm:13 STA @LOCAL00
    case 0x0CC1: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:616 STA scratch
    case 0x0CC3: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    case 0x0CC5: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    case 0x0CC6: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    case 0x0CC7: c.execute<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    case 0x0CC9: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    case 0x0CCA: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:15 INC
    case 0x0CCB: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:16 INC
    case 0x0CCC: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:17 INC
    case 0x0CCD: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:18 INC
    case 0x0CCE: c.execute<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    case 0x0CCF: c.execute<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    case 0x0CD1: c.execute<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    case 0x0CD3: c.execute<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    case 0x0CD5: c.execute<0x86>(0x00000C, 2); return true;
    // src/unknown/EF/EF0CA7.asm:20 CLC
    case 0x0CD7: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:21 ADC @VIRTUAL0A
    case 0x0CD8: c.execute<0x65>(0x00000A, 2); return true;
    // src/unknown/EF/EF0CA7.asm:22 STA @VIRTUAL0A
    case 0x0CDA: c.execute<0x85>(0x00000A, 2); return true;
    // src/unknown/EF/EF0CA7.asm:23 LDA [@VIRTUAL0A]
    case 0x0CDC: c.execute<0xA7>(0x00000A, 2); return true;
    // src/unknown/EF/EF0CA7.asm:24 CMP #<-1
    case 0x0CDE: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x0000FF, 3); return true;
    // src/unknown/EF/EF0CA7.asm:24 CMP #<-1
    // Overlapping static entry reached from 0xEF0CDE.
    case 0x0CE0: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EF0CA7.asm:25 BNE @UNKNOWN0
    case 0x0CE1: c.execute<0xD0>(0x000005, 2); return true;
    // src/unknown/EF/EF0CA7.asm:26 LDA #1
    case 0x0CE3: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF0CA7.asm:26 LDA #1
    // Overlapping static entry reached from 0xEF0CE3.
    case 0x0CE5: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EF0CA7.asm:27 BRA @RETURN
    case 0x0CE6: c.execute<0x80>(0x000039, 2); return true;
    // src/unknown/EF/EF0CA7.asm:29 LDY #0
    case 0x0CE8: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EF0CA7.asm:29 LDY #0
    // Overlapping static entry reached from 0xEF0CE8.
    case 0x0CEA: c.execute<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EF0CA7.asm:30 LDA @LOCAL00
    case 0x0CEB: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EF0CA7.asm:31 ASL
    case 0x0CED: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:32 CLC
    case 0x0CEE: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:33 ADC #.LOWORD(DELIVERY_ATTEMPTS)
    case 0x0CEF: if (c.p & 0x20) c.execute<0x69>(0x000011, 2); else c.execute<0x69>(0x00B511, 3); return true;
    // src/unknown/EF/EF0CA7.asm:33 ADC #.LOWORD(DELIVERY_ATTEMPTS)
    // Overlapping static entry reached from 0xEF0CEF.
    case 0x0CF1: c.execute<0xB5>(0x0000AA, 2); return true;
    // src/unknown/EF/EF0CA7.asm:34 TAX
    case 0x0CF2: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:35 LDA __BSS_START__,X
    case 0x0CF3: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF0CA7.asm:36 INC
    case 0x0CF6: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:37 STA __BSS_START__,X
    case 0x0CF7: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF0CA7.asm:38 STA @VIRTUAL02
    case 0x0CFA: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF0CA7.asm:39 LDA CURRENT_ENTITY_SLOT
    case 0x0CFC: c.execute<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF0CA7.asm:40 ASL
    case 0x0CFF: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:41 TAX
    case 0x0D00: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:42 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0x0D01: c.execute<0xBD>(0x000E5E, 3); return true;
    // include/macros.asm:616 STA scratch
    case 0x0D04: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    case 0x0D06: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    case 0x0D07: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    case 0x0D08: c.execute<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    case 0x0D0A: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    case 0x0D0B: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:44 INC
    case 0x0D0C: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:45 INC
    case 0x0D0D: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:46 INC
    case 0x0D0E: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:47 INC
    case 0x0D0F: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:48 CLC
    case 0x0D10: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:49 ADC @VIRTUAL06
    case 0x0D11: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EF0CA7.asm:50 STA @VIRTUAL06
    case 0x0D13: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EF0CA7.asm:51 LDA [@VIRTUAL06]
    case 0x0D15: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/EF/EF0CA7.asm:52 CMP @VIRTUAL02
    case 0x0D17: c.execute<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    case 0x0D19: c.execute<0x90>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    case 0x0D1B: c.execute<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EF0CA7.asm:54 LDY #1
    case 0x0D1D: if (c.p & 0x10) c.execute<0xA0>(0x000001, 2); else c.execute<0xA0>(0x000001, 3); return true;
    // src/unknown/EF/EF0CA7.asm:54 LDY #1
    // Overlapping static entry reached from 0xEF0D1D.
    case 0x0D1F: c.execute<0x00>(0x000098, 2); return true;
    // src/unknown/EF/EF0CA7.asm:56 TYA
    case 0x0D20: c.execute<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    case 0x0D21: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x0D22: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0D23: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0D25: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0D26: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0D27: if (c.p & 0x20) c.execute<0x69>(0x0000F2, 2); else c.execute<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF0D27.
    case 0x0D29: c.execute<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0D2A: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF0D23.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0x0D2B: c.execute<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF0D23.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xEF0D29.
    case 0x0D2D: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D23.asm:8 ASL
    case 0x0D2E: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D23.asm:9 TAX
    case 0x0D2F: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D23.asm:10 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0x0D30: c.execute<0xBD>(0x000E5E, 3); return true;
    // include/macros.asm:616 STA scratch
    case 0x0D33: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    case 0x0D35: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    case 0x0D36: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    case 0x0D37: c.execute<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    case 0x0D39: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    case 0x0D3A: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D23.asm:12 CLC
    case 0x0D3B: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0D23.asm:13 ADC #6
    case 0x0D3C: if (c.p & 0x20) c.execute<0x69>(0x000006, 2); else c.execute<0x69>(0x000006, 3); return true;
    // src/unknown/EF/EF0D23.asm:13 ADC #6
    // Overlapping static entry reached from 0xEF0D3C.
    case 0x0D3E: c.execute<0x00>(0x0000AA, 2); return true;
    // src/unknown/EF/EF0D23.asm:14 TAX
    case 0x0D3F: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D23.asm:15 LDA TIMED_DELIVERY_TABLE,X
    case 0x0D40: c.execute<0xBF>(0xD5F645, 4); return true;
    // include/macros.asm:25 PLD
    case 0x0D44: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x0D45: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0D46: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0D48: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0D49: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0D4A: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF0D4A.
    case 0x0D4C: c.execute<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0D4D: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0x0D4E: c.execute<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF0D46.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xEF0D4C.
    case 0x0D50: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:8 ASL
    case 0x0D51: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:9 TAX
    case 0x0D52: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:10 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0x0D53: c.execute<0xBD>(0x000E5E, 3); return true;
    // src/unknown/EF/EF0D46.asm:11 STA @LOCAL00
    case 0x0D56: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EF0D46.asm:12 ASL
    case 0x0D58: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:13 PHA
    case 0x0D59: c.execute<0x48>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:14 LDA @LOCAL00
    case 0x0D5A: c.execute<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:616 STA scratch
    case 0x0D5C: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    case 0x0D5E: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    case 0x0D5F: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    case 0x0D60: c.execute<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    case 0x0D62: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    case 0x0D63: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:16 CLC
    case 0x0D64: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:17 ADC #8
    case 0x0D65: if (c.p & 0x20) c.execute<0x69>(0x000008, 2); else c.execute<0x69>(0x000008, 3); return true;
    // src/unknown/EF/EF0D46.asm:17 ADC #8
    // Overlapping static entry reached from 0xEF0D65.
    case 0x0D67: c.execute<0x00>(0x0000AA, 2); return true;
    // src/unknown/EF/EF0D46.asm:18 TAX
    case 0x0D68: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:19 LDA TIMED_DELIVERY_TABLE,X
    case 0x0D69: c.execute<0xBF>(0xD5F645, 4); return true;
    // src/unknown/EF/EF0D46.asm:20 PLX
    case 0x0D6D: c.execute<0xFA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:21 STA DELIVERY_TIMERS,X
    case 0x0D6E: c.execute<0x9D>(0x00B525, 3); return true;
    // include/macros.asm:25 PLD
    case 0x0D71: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x0D72: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0D73: c.execute<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EF0D73.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0x0D75: c.execute<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF0D73.asm:6 ASL
    case 0x0D78: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D73.asm:7 TAX
    case 0x0D79: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D73.asm:8 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0x0D7A: c.execute<0xBD>(0x000E5E, 3); return true;
    // src/unknown/EF/EF0D73.asm:9 ASL
    case 0x0D7D: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D73.asm:10 CLC
    case 0x0D7E: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0D73.asm:11 ADC #.LOWORD(DELIVERY_TIMERS)
    case 0x0D7F: if (c.p & 0x20) c.execute<0x69>(0x000025, 2); else c.execute<0x69>(0x00B525, 3); return true;
    // src/unknown/EF/EF0D73.asm:11 ADC #.LOWORD(DELIVERY_TIMERS)
    // Overlapping static entry reached from 0xEF0D7F.
    case 0x0D81: c.execute<0xB5>(0x0000AA, 2); return true;
    // src/unknown/EF/EF0D73.asm:12 TAX
    case 0x0D82: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D73.asm:13 LDA __BSS_START__,X
    case 0x0D83: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF0D73.asm:14 BEQ @UNKNOWN0
    case 0x0D86: c.execute<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EF0D73.asm:15 DEC
    case 0x0D88: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D73.asm:16 STA __BSS_START__,X
    case 0x0D89: c.execute<0x9D>(0x000000, 3); return true;
    // include/macros.asm:30 RTL
    case 0x0D8C: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0D8D: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0D8F: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0D90: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0D91: if (c.p & 0x20) c.execute<0x69>(0x0000EA, 2); else c.execute<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF0D91.
    case 0x0D93: c.execute<0xFF>(0x45A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0D94: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0x0D95: if (c.p & 0x20) c.execute<0xA9>(0x000045, 2); else c.execute<0xA9>(0x00F645, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEF0D95.
    case 0x0D97: c.execute<0xF6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0x0D98: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xEF0D97.
    case 0x0D99: c.execute<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0x0D9A: if (c.p & 0x20) c.execute<0xA9>(0x0000D5, 2); else c.execute<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEF0D99.
    case 0x0D9B: c.execute<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEF0D9A.
    case 0x0D9C: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0x0D9D: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EF0D8D.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0x0D9F: c.execute<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF0D8D.asm:10 ASL
    case 0x0DA2: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D.asm:11 CLC
    case 0x0DA3: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D.asm:12 ADC #.LOWORD(ENTITY_SCRIPT_VAR0_TABLE)
    case 0x0DA4: if (c.p & 0x20) c.execute<0x69>(0x00005E, 2); else c.execute<0x69>(0x000E5E, 3); return true;
    // src/unknown/EF/EF0D8D.asm:12 ADC #.LOWORD(ENTITY_SCRIPT_VAR0_TABLE)
    // Overlapping static entry reached from 0xEF0DA4.
    case 0x0DA6: c.execute<0x0E>(0x00BDAA, 3); return true;
    // src/unknown/EF/EF0D8D.asm:13 TAX
    case 0x0DA7: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D.asm:14 LDA __BSS_START__,X
    case 0x0DA8: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF0D8D.asm:14 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xEF0DA6.
    case 0x0DA9: c.execute<0x00>(0x000000, 2); return true;
    // include/macros.asm:616 STA scratch
    case 0x0DAB: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    case 0x0DAD: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    case 0x0DAE: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    case 0x0DAF: c.execute<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    case 0x0DB1: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    case 0x0DB2: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D.asm:16 CLC
    case 0x0DB3: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D.asm:17 ADC #12
    case 0x0DB4: if (c.p & 0x20) c.execute<0x69>(0x00000C, 2); else c.execute<0x69>(0x00000C, 3); return true;
    // src/unknown/EF/EF0D8D.asm:17 ADC #12
    // Overlapping static entry reached from 0xEF0DB4.
    case 0x0DB6: c.execute<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    case 0x0DB7: c.execute<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    case 0x0DB9: c.execute<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    case 0x0DBB: c.execute<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    case 0x0DBD: c.execute<0x84>(0x00000C, 2); return true;
    // src/unknown/EF/EF0D8D.asm:19 CLC
    case 0x0DBF: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D.asm:20 ADC @VIRTUAL0A
    case 0x0DC0: c.execute<0x65>(0x00000A, 2); return true;
    // src/unknown/EF/EF0D8D.asm:21 STA @VIRTUAL0A
    case 0x0DC2: c.execute<0x85>(0x00000A, 2); return true;
    // src/unknown/EF/EF0D8D.asm:22 LDA [@VIRTUAL0A]
    case 0x0DC4: c.execute<0xA7>(0x00000A, 2); return true;
    // src/unknown/EF/EF0D8D.asm:23 AND #$00FF
    case 0x0DC6: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EF0D8D.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xEF0DC6.
    case 0x0DC8: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF0D8D.asm:24 STA @LOCAL01+2
    case 0x0DC9: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EF0D8D.asm:25 LDA __BSS_START__,X
    case 0x0DCB: c.execute<0xBD>(0x000000, 3); return true;
    // include/macros.asm:616 STA scratch
    case 0x0DCE: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    case 0x0DD0: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    case 0x0DD1: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    case 0x0DD2: c.execute<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    case 0x0DD4: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    case 0x0DD5: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D.asm:27 CLC
    case 0x0DD6: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D.asm:28 ADC #10
    case 0x0DD7: if (c.p & 0x20) c.execute<0x69>(0x00000A, 2); else c.execute<0x69>(0x00000A, 3); return true;
    // src/unknown/EF/EF0D8D.asm:28 ADC #10
    // Overlapping static entry reached from 0xEF0DD7.
    case 0x0DD9: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EF0D8D.asm:29 CLC
    case 0x0DDA: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D.asm:30 ADC @VIRTUAL06
    case 0x0DDB: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EF0D8D.asm:31 STA @VIRTUAL06
    case 0x0DDD: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EF0D8D.asm:32 LDA [@VIRTUAL06]
    case 0x0DDF: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/EF/EF0D8D.asm:33 STA @LOCAL01
    case 0x0DE1: c.execute<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EF0D8D.asm:34 STA @VIRTUAL06
    case 0x0DE3: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EF0D8D.asm:35 LDA @LOCAL01+2
    case 0x0DE5: c.execute<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EF0D8D.asm:36 STA @VIRTUAL06+2
    case 0x0DE7: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0DE9: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0DEB: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0DED: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0DEF: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EF0D8D.asm:38 LDA #8
    case 0x0DF1: if (c.p & 0x20) c.execute<0xA9>(0x000008, 2); else c.execute<0xA9>(0x000008, 3); return true;
    // src/unknown/EF/EF0D8D.asm:38 LDA #8
    // Overlapping static entry reached from 0xEF0DF1.
    case 0x0DF3: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF0D8D.asm:39 JSL UNKNOWN_C064E3
    case 0x0DF4: c.execute<0x22>(0xC064E3, 4); return true;
    // include/macros.asm:25 PLD
    case 0x0DF8: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x0DF9: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0DFA: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0DFC: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0DFD: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0DFE: if (c.p & 0x20) c.execute<0x69>(0x0000EA, 2); else c.execute<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF0DFE.
    case 0x0E00: c.execute<0xFF>(0x45A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0E01: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0x0E02: if (c.p & 0x20) c.execute<0xA9>(0x000045, 2); else c.execute<0xA9>(0x00F645, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEF0E02.
    case 0x0E04: c.execute<0xF6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0x0E05: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xEF0E04.
    case 0x0E06: c.execute<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0x0E07: if (c.p & 0x20) c.execute<0xA9>(0x0000D5, 2); else c.execute<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEF0E06.
    case 0x0E08: c.execute<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEF0E07.
    case 0x0E09: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0x0E0A: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EF0DFA.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0x0E0C: c.execute<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF0DFA.asm:10 ASL
    case 0x0E0F: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA.asm:11 CLC
    case 0x0E10: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA.asm:12 ADC #.LOWORD(ENTITY_SCRIPT_VAR0_TABLE)
    case 0x0E11: if (c.p & 0x20) c.execute<0x69>(0x00005E, 2); else c.execute<0x69>(0x000E5E, 3); return true;
    // src/unknown/EF/EF0DFA.asm:12 ADC #.LOWORD(ENTITY_SCRIPT_VAR0_TABLE)
    // Overlapping static entry reached from 0xEF0E11.
    case 0x0E13: c.execute<0x0E>(0x00BDAA, 3); return true;
    // src/unknown/EF/EF0DFA.asm:13 TAX
    case 0x0E14: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA.asm:14 LDA __BSS_START__,X
    case 0x0E15: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF0DFA.asm:14 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xEF0E13.
    case 0x0E16: c.execute<0x00>(0x000000, 2); return true;
    // include/macros.asm:616 STA scratch
    case 0x0E18: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    case 0x0E1A: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    case 0x0E1B: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    case 0x0E1C: c.execute<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    case 0x0E1E: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    case 0x0E1F: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA.asm:16 CLC
    case 0x0E20: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA.asm:17 ADC #15
    case 0x0E21: if (c.p & 0x20) c.execute<0x69>(0x00000F, 2); else c.execute<0x69>(0x00000F, 3); return true;
    // src/unknown/EF/EF0DFA.asm:17 ADC #15
    // Overlapping static entry reached from 0xEF0E21.
    case 0x0E23: c.execute<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    case 0x0E24: c.execute<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    case 0x0E26: c.execute<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    case 0x0E28: c.execute<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    case 0x0E2A: c.execute<0x84>(0x00000C, 2); return true;
    // src/unknown/EF/EF0DFA.asm:19 CLC
    case 0x0E2C: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA.asm:20 ADC @VIRTUAL0A
    case 0x0E2D: c.execute<0x65>(0x00000A, 2); return true;
    // src/unknown/EF/EF0DFA.asm:21 STA @VIRTUAL0A
    case 0x0E2F: c.execute<0x85>(0x00000A, 2); return true;
    // src/unknown/EF/EF0DFA.asm:22 LDA [@VIRTUAL0A]
    case 0x0E31: c.execute<0xA7>(0x00000A, 2); return true;
    // src/unknown/EF/EF0DFA.asm:23 AND #$00FF
    case 0x0E33: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EF0DFA.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xEF0E33.
    case 0x0E35: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF0DFA.asm:24 STA @LOCAL01+2
    case 0x0E36: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EF0DFA.asm:25 LDA __BSS_START__,X
    case 0x0E38: c.execute<0xBD>(0x000000, 3); return true;
    // include/macros.asm:616 STA scratch
    case 0x0E3B: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    case 0x0E3D: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    case 0x0E3E: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    case 0x0E3F: c.execute<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    case 0x0E41: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    case 0x0E42: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA.asm:27 CLC
    case 0x0E43: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA.asm:28 ADC #13
    case 0x0E44: if (c.p & 0x20) c.execute<0x69>(0x00000D, 2); else c.execute<0x69>(0x00000D, 3); return true;
    // src/unknown/EF/EF0DFA.asm:28 ADC #13
    // Overlapping static entry reached from 0xEF0E44.
    case 0x0E46: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EF0DFA.asm:29 CLC
    case 0x0E47: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA.asm:30 ADC @VIRTUAL06
    case 0x0E48: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EF0DFA.asm:31 STA @VIRTUAL06
    case 0x0E4A: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EF0DFA.asm:32 LDA [@VIRTUAL06]
    case 0x0E4C: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/EF/EF0DFA.asm:33 STA @LOCAL01
    case 0x0E4E: c.execute<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EF0DFA.asm:34 STA @VIRTUAL06
    case 0x0E50: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EF0DFA.asm:35 LDA @LOCAL01+2
    case 0x0E52: c.execute<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EF0DFA.asm:36 STA @VIRTUAL06+2
    case 0x0E54: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0x0E56: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0x0E58: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0x0E5A: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0x0E5C: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EF0DFA.asm:38 LDA #10
    case 0x0E5E: if (c.p & 0x20) c.execute<0xA9>(0x00000A, 2); else c.execute<0xA9>(0x00000A, 3); return true;
    // src/unknown/EF/EF0DFA.asm:38 LDA #10
    // Overlapping static entry reached from 0xEF0E5E.
    case 0x0E60: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF0DFA.asm:39 JSL UNKNOWN_C064E3
    case 0x0E61: c.execute<0x22>(0xC064E3, 4); return true;
    // include/macros.asm:25 PLD
    case 0x0E65: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x0E66: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0E67: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0E69: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0E6A: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0E6B: if (c.p & 0x20) c.execute<0x69>(0x0000F2, 2); else c.execute<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF0E6B.
    case 0x0E6D: c.execute<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0E6E: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF0E67.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0x0E6F: c.execute<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF0E67.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xEF0E6D.
    case 0x0E71: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0E67.asm:8 ASL
    case 0x0E72: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0E67.asm:9 TAX
    case 0x0E73: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0E67.asm:10 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0x0E74: c.execute<0xBD>(0x000E5E, 3); return true;
    // include/macros.asm:616 STA scratch
    case 0x0E77: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    case 0x0E79: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    case 0x0E7A: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    case 0x0E7B: c.execute<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    case 0x0E7D: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    case 0x0E7E: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0E67.asm:12 CLC
    case 0x0E7F: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0E67.asm:13 ADC #timed_delivery::enter_speed
    case 0x0E80: if (c.p & 0x20) c.execute<0x69>(0x000010, 2); else c.execute<0x69>(0x000010, 3); return true;
    // src/unknown/EF/EF0E67.asm:13 ADC #timed_delivery::enter_speed
    // Overlapping static entry reached from 0xEF0E80.
    case 0x0E82: c.execute<0x00>(0x0000AA, 2); return true;
    // src/unknown/EF/EF0E67.asm:14 TAX
    case 0x0E83: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0E67.asm:15 LDA TIMED_DELIVERY_TABLE,X
    case 0x0E84: c.execute<0xBF>(0xD5F645, 4); return true;
    // src/unknown/EF/EF0E67.asm:15 LDA TIMED_DELIVERY_TABLE,X
    // Overlapping static entry reached from 0xEFDC90.
    case 0x0E85: c.execute<0x45>(0x0000F6, 2); return true;
    // src/unknown/EF/EF0E67.asm:15 LDA TIMED_DELIVERY_TABLE,X
    // Overlapping static entry reached from 0xEF0E85.
    case 0x0E87: c.execute<0xD5>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    case 0x0E88: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x0E89: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0E8A: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0E8C: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0E8D: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0E8E: if (c.p & 0x20) c.execute<0x69>(0x0000F2, 2); else c.execute<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF0E8E.
    case 0x0E90: c.execute<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0E91: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF0E8A.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0x0E92: c.execute<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF0E8A.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xEF0E90.
    case 0x0E94: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0E8A.asm:8 ASL
    case 0x0E95: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0E8A.asm:9 TAX
    case 0x0E96: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0E8A.asm:10 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0x0E97: c.execute<0xBD>(0x000E5E, 3); return true;
    // include/macros.asm:616 STA scratch
    case 0x0E9A: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    case 0x0E9C: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    case 0x0E9D: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    case 0x0E9E: c.execute<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    case 0x0EA0: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    case 0x0EA1: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0E8A.asm:12 CLC
    case 0x0EA2: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0E8A.asm:13 ADC #timed_delivery::exit_speed
    case 0x0EA3: if (c.p & 0x20) c.execute<0x69>(0x000012, 2); else c.execute<0x69>(0x000012, 3); return true;
    // src/unknown/EF/EF0E8A.asm:13 ADC #timed_delivery::exit_speed
    // Overlapping static entry reached from 0xEF0EA3.
    case 0x0EA5: c.execute<0x00>(0x0000AA, 2); return true;
    // src/unknown/EF/EF0E8A.asm:14 TAX
    case 0x0EA6: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0E8A.asm:15 LDA TIMED_DELIVERY_TABLE,X
    case 0x0EA7: c.execute<0xBF>(0xD5F645, 4); return true;
    // include/macros.asm:25 PLD
    case 0x0EAB: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x0EAC: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0EAD: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0EAF: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0x0EB0: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0EB1: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0EB2: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF0EB2.
    case 0x0EB4: c.execute<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0EB5: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0x0EB6: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EF0EAD.asm:12 TAX
    case 0x0EB7: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0EAD.asm:13 DEC
    case 0x0EB8: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EF0EAD.asm:14 STA NEW_ENTITY_VAR0
    case 0x0EB9: c.execute<0x8D>(0x000A38, 3); return true;
    // include/macros.asm:616 STA scratch
    case 0x0EBC: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    case 0x0EBE: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    case 0x0EBF: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    case 0x0EC0: c.execute<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    case 0x0EC2: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    case 0x0EC3: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0EAD.asm:16 TAX
    case 0x0EC4: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0EAD.asm:17 LDA TIMED_DELIVERY_TABLE,X
    case 0x0EC5: c.execute<0xBF>(0xD5F645, 4); return true;
    // src/unknown/EF/EF0EAD.asm:21 BNE @UNKNOWN0
    case 0x0EC9: c.execute<0xD0>(0x00000D, 2); return true;
    // src/unknown/EF/EF0EAD.asm:22 JSL RAND
    case 0x0ECB: c.execute<0x22>(0xC08E9A, 4); return true;
    // src/unknown/EF/EF0EAD.asm:23 AND #$0003
    case 0x0ECF: if (c.p & 0x20) c.execute<0x29>(0x000003, 2); else c.execute<0x29>(0x000003, 3); return true;
    // src/unknown/EF/EF0EAD.asm:23 AND #$0003
    // Overlapping static entry reached from 0xEF0ECF.
    case 0x0ED1: c.execute<0x00>(0x00000A, 2); return true;
    // src/unknown/EF/EF0EAD.asm:24 ASL
    case 0x0ED2: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0EAD.asm:25 TAX
    case 0x0ED3: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0EAD.asm:26 LDA FOR_SALE_SIGN_SPRITE_TABLE,X
    case 0x0ED4: c.execute<0xBF>(0xC3FDBD, 4); return true;
    // include/macros.asm:1284 STZ dest
    case 0x0ED8: c.execute<0x64>(0x00000E, 2); return true;
    // include/macros.asm:1284 STZ dest
    case 0x0EDA: c.execute<0x64>(0x000010, 2); return true;
    // src/unknown/EF/EF0EAD.asm:33 LDY #.LOWORD(-1)
    case 0x0EDC: if (c.p & 0x10) c.execute<0xA0>(0x0000FF, 2); else c.execute<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/EF/EF0EAD.asm:33 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xEF0EDC.
    case 0x0EDE: c.execute<0xFF>(0x01F3A2, 4); return true;
    // src/unknown/EF/EF0EAD.asm:34 LDX #EVENT_SCRIPT::EVENT_499
    case 0x0EDF: if (c.p & 0x10) c.execute<0xA2>(0x0000F3, 2); else c.execute<0xA2>(0x0001F3, 3); return true;
    // src/unknown/EF/EF0EAD.asm:34 LDX #EVENT_SCRIPT::EVENT_499
    // Overlapping static entry reached from 0xEF0EDF.
    case 0x0EE1: c.execute<0x01>(0x000022, 2); return true;
    // src/unknown/EF/EF0EAD.asm:38 JSL CREATE_ENTITY
    case 0x0EE2: c.execute<0x22>(0xC01E49, 4); return true;
    // src/unknown/EF/EF0EAD.asm:38 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xEF0EE1.
    case 0x0EE3: if (c.p & 0x20) c.execute<0x49>(0x00001E, 2); else c.execute<0x49>(0x00C01E, 3); return true;
    // src/unknown/EF/EF0EAD.asm:38 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xEF0EE3.
    case 0x0EE5: if (c.p & 0x10) c.execute<0xC0>(0x00002B, 2); else c.execute<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    case 0x0EE6: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x0EE7: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0EE8: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0EEA: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0EEB: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0EEC: if (c.p & 0x20) c.execute<0x69>(0x0000EC, 2); else c.execute<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEF0EEC.
    case 0x0EEE: c.execute<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0EEF: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:12 LDA #0
    case 0x0EF0: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EF0EE8.asm:12 LDA #0
    // Overlapping static entry reached from 0xEF0EF0.
    case 0x0EF2: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF0EE8.asm:13 STA @VIRTUAL02
    case 0x0EF3: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF0EE8.asm:14 BRA @UNKNOWN3
    case 0x0EF5: c.execute<0x80>(0x000060, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0x0EF7: if (c.p & 0x20) c.execute<0xA9>(0x000045, 2); else c.execute<0xA9>(0x00F645, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEF0EF7.
    case 0x0EF9: c.execute<0xF6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0x0EFA: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xEF0EF9.
    case 0x0EFB: c.execute<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0x0EFC: if (c.p & 0x20) c.execute<0xA9>(0x0000D5, 2); else c.execute<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEF0EFB.
    case 0x0EFD: c.execute<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEF0EFC.
    case 0x0EFE: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0x0EFF: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EF0EE8.asm:17 LDA @VIRTUAL02
    case 0x0F01: c.execute<0xA5>(0x000002, 2); return true;
    // include/macros.asm:616 STA scratch
    case 0x0F03: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    case 0x0F05: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    case 0x0F06: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    case 0x0F07: c.execute<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    case 0x0F09: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    case 0x0F0A: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:19 TAX
    case 0x0F0B: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:20 STX @LOCAL03
    case 0x0F0C: c.execute<0x86>(0x000012, 2); return true;
    // src/unknown/EF/EF0EE8.asm:21 TXA
    case 0x0F0E: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:22 INC
    case 0x0F0F: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:23 INC
    case 0x0F10: c.execute<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    case 0x0F11: c.execute<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    case 0x0F13: c.execute<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    case 0x0F15: c.execute<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    case 0x0F17: c.execute<0x86>(0x00000C, 2); return true;
    // src/unknown/EF/EF0EE8.asm:25 CLC
    case 0x0F19: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:26 ADC @VIRTUAL0A
    case 0x0F1A: c.execute<0x65>(0x00000A, 2); return true;
    // src/unknown/EF/EF0EE8.asm:27 STA @VIRTUAL0A
    case 0x0F1C: c.execute<0x85>(0x00000A, 2); return true;
    // src/unknown/EF/EF0EE8.asm:28 LDA [@VIRTUAL0A]
    case 0x0F1E: c.execute<0xA7>(0x00000A, 2); return true;
    // src/unknown/EF/EF0EE8.asm:29 JSL GET_EVENT_FLAG
    case 0x0F20: c.execute<0x22>(0xC21628, 4); return true;
    // src/unknown/EF/EF0EE8.asm:30 CMP #0
    case 0x0F24: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EF0EE8.asm:30 CMP #0
    // Overlapping static entry reached from 0xEF0F24.
    case 0x0F26: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EF0EE8.asm:31 BEQ @UNKNOWN2
    case 0x0F27: c.execute<0xF0>(0x00002C, 2); return true;
    // src/unknown/EF/EF0EE8.asm:32 LDA @VIRTUAL02
    case 0x0F29: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EF0EE8.asm:33 STA NEW_ENTITY_VAR0
    case 0x0F2B: c.execute<0x8D>(0x000A38, 3); return true;
    // src/unknown/EF/EF0EE8.asm:34 LDX @LOCAL03
    case 0x0F2E: c.execute<0xA6>(0x000012, 2); return true;
    // src/unknown/EF/EF0EE8.asm:35 TXA
    case 0x0F30: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:36 CLC
    case 0x0F31: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:37 ADC @VIRTUAL06
    case 0x0F32: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EF0EE8.asm:38 STA @VIRTUAL06
    case 0x0F34: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EF0EE8.asm:39 LDA [@VIRTUAL06]
    case 0x0F36: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/EF/EF0EE8.asm:43 BNE @UNKNOWN1
    case 0x0F38: c.execute<0xD0>(0x00000D, 2); return true;
    // src/unknown/EF/EF0EE8.asm:44 JSL RAND
    case 0x0F3A: c.execute<0x22>(0xC08E9A, 4); return true;
    // src/unknown/EF/EF0EE8.asm:45 AND #$0003
    case 0x0F3E: if (c.p & 0x20) c.execute<0x29>(0x000003, 2); else c.execute<0x29>(0x000003, 3); return true;
    // src/unknown/EF/EF0EE8.asm:45 AND #$0003
    // Overlapping static entry reached from 0xEF0F3E.
    case 0x0F40: c.execute<0x00>(0x00000A, 2); return true;
    // src/unknown/EF/EF0EE8.asm:46 ASL
    case 0x0F41: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:47 TAX
    case 0x0F42: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:48 LDA FOR_SALE_SIGN_SPRITE_TABLE,X
    case 0x0F43: c.execute<0xBF>(0xC3FDBD, 4); return true;
    // include/macros.asm:1284 STZ dest
    case 0x0F47: c.execute<0x64>(0x00000E, 2); return true;
    // include/macros.asm:1284 STZ dest
    case 0x0F49: c.execute<0x64>(0x000010, 2); return true;
    // src/unknown/EF/EF0EE8.asm:55 LDY #.LOWORD(-1)
    case 0x0F4B: if (c.p & 0x10) c.execute<0xA0>(0x0000FF, 2); else c.execute<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/EF/EF0EE8.asm:55 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xEF0F4B.
    case 0x0F4D: c.execute<0xFF>(0x01F4A2, 4); return true;
    // src/unknown/EF/EF0EE8.asm:56 LDX #EVENT_SCRIPT::EVENT_500
    case 0x0F4E: if (c.p & 0x10) c.execute<0xA2>(0x0000F4, 2); else c.execute<0xA2>(0x0001F4, 3); return true;
    // src/unknown/EF/EF0EE8.asm:56 LDX #EVENT_SCRIPT::EVENT_500
    // Overlapping static entry reached from 0xEF0F4E.
    case 0x0F50: c.execute<0x01>(0x000022, 2); return true;
    // src/unknown/EF/EF0EE8.asm:60 JSL CREATE_ENTITY
    case 0x0F51: c.execute<0x22>(0xC01E49, 4); return true;
    // src/unknown/EF/EF0EE8.asm:60 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xEF0F50.
    case 0x0F52: if (c.p & 0x20) c.execute<0x49>(0x00001E, 2); else c.execute<0x49>(0x00C01E, 3); return true;
    // src/unknown/EF/EF0EE8.asm:60 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xEF0F52.
    case 0x0F54: if (c.p & 0x10) c.execute<0xC0>(0x0000E6, 2); else c.execute<0xC0>(0x0002E6, 3); return true;
    // src/unknown/EF/EF0EE8.asm:62 INC @VIRTUAL02
    case 0x0F55: c.execute<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EF0EE8.asm:62 INC @VIRTUAL02
    // Overlapping static entry reached from 0xEF0F54.
    case 0x0F56: c.execute<0x02>(0x0000A5, 2); return true;
    // src/unknown/EF/EF0EE8.asm:64 LDA @VIRTUAL02
    case 0x0F57: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EF0EE8.asm:65 CMP #10
    case 0x0F59: if (c.p & 0x20) c.execute<0xC9>(0x00000A, 2); else c.execute<0xC9>(0x00000A, 3); return true;
    // src/unknown/EF/EF0EE8.asm:65 CMP #10
    // Overlapping static entry reached from 0xEF0F59.
    case 0x0F5B: c.execute<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EF0EE8.asm:66 BCC @UNKNOWN0
    case 0x0F5C: c.execute<0x90>(0x000099, 2); return true;
    // include/macros.asm:25 PLD
    case 0x0F5E: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x0F5F: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0F60: c.execute<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EF0F60.asm:6 LDA FADE_PARAMETERS + fade_parameters::step
    case 0x0F62: c.execute<0xAD>(0x000028, 3); return true;
    // src/unknown/EF/EF0F60.asm:7 AND #$00FF
    case 0x0F65: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EF0F60.asm:7 AND #$00FF
    // Overlapping static entry reached from 0xEF0F65.
    case 0x0F67: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EF0F60.asm:8 BNE @UNKNOWN0
    case 0x0F68: c.execute<0xD0>(0x00000B, 2); return true;
    // src/unknown/EF/EF0F60.asm:9 LDA INIDISP_MIRROR
    case 0x0F6A: c.execute<0xAD>(0x00000D, 3); return true;
    // src/unknown/EF/EF0F60.asm:10 AND #$00FF
    case 0x0F6D: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EF0F60.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xEF0F6D.
    case 0x0F6F: c.execute<0x00>(0x0000C9, 2); return true;
    // src/unknown/EF/EF0F60.asm:11 CMP #15
    case 0x0F70: if (c.p & 0x20) c.execute<0xC9>(0x00000F, 2); else c.execute<0xC9>(0x00000F, 3); return true;
    // src/unknown/EF/EF0F60.asm:11 CMP #15
    // Overlapping static entry reached from 0xEF0F70.
    case 0x0F72: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EF0F60.asm:12 BEQ @UNKNOWN1
    case 0x0F73: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EF0F60.asm:14 LDA #TRUE
    case 0x0F75: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF0F60.asm:14 LDA #TRUE
    // Overlapping static entry reached from 0xEF0F75.
    case 0x0F77: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EF0F60.asm:15 BRA @UNKNOWN9
    case 0x0F78: c.execute<0x80>(0x000060, 2); return true;
    // src/unknown/EF/EF0F60.asm:17 LDA WINDOW_HEAD
    case 0x0F7A: c.execute<0xAD>(0x0088E0, 3); return true;
    // src/unknown/EF/EF0F60.asm:18 CMP #.LOWORD(-1)
    case 0x0F7D: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EF0F60.asm:18 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEF0F7D.
    case 0x0F7F: c.execute<0xFF>(0xA905F0, 4); return true;
    // src/unknown/EF/EF0F60.asm:19 BEQ @UNKNOWN2
    case 0x0F80: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EF0F60.asm:20 LDA #TRUE
    case 0x0F82: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF0F60.asm:20 LDA #TRUE
    // Overlapping static entry reached from 0xEF0F7F.
    case 0x0F83: c.execute<0x01>(0x000000, 2); return true;
    // src/unknown/EF/EF0F60.asm:20 LDA #TRUE
    // Overlapping static entry reached from 0xEF0F82.
    case 0x0F84: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EF0F60.asm:21 BRA @UNKNOWN9
    case 0x0F85: c.execute<0x80>(0x000053, 2); return true;
    // src/unknown/EF/EF0F60.asm:23 LDA ENTITY_FADE_ENTITY
    case 0x0F87: c.execute<0xAD>(0x00B4A8, 3); return true;
    // src/unknown/EF/EF0F60.asm:24 CMP #.LOWORD(-1)
    case 0x0F8A: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EF0F60.asm:24 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEF0F8A.
    case 0x0F8C: c.execute<0xFF>(0xA905F0, 4); return true;
    // src/unknown/EF/EF0F60.asm:25 BEQ @UNKNOWN3
    case 0x0F8D: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EF0F60.asm:26 LDA #TRUE
    case 0x0F8F: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF0F60.asm:26 LDA #TRUE
    // Overlapping static entry reached from 0xEF0F8C.
    case 0x0F90: c.execute<0x01>(0x000000, 2); return true;
    // src/unknown/EF/EF0F60.asm:26 LDA #TRUE
    // Overlapping static entry reached from 0xEF0F8F.
    case 0x0F91: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EF0F60.asm:27 BRA @UNKNOWN9
    case 0x0F92: c.execute<0x80>(0x000046, 2); return true;
    // src/unknown/EF/EF0F60.asm:29 LDA OVERWORLD_STATUS_SUPPRESSION
    case 0x0F94: c.execute<0xAD>(0x005D98, 3); return true;
    // src/unknown/EF/EF0F60.asm:30 BEQ @UNKNOWN4
    case 0x0F97: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EF0F60.asm:31 LDA #TRUE
    case 0x0F99: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF0F60.asm:31 LDA #TRUE
    // Overlapping static entry reached from 0xEF0FA8.
    case 0x0F9A: c.execute<0x01>(0x000000, 2); return true;
    // src/unknown/EF/EF0F60.asm:31 LDA #TRUE
    // Overlapping static entry reached from 0xEF0F99.
    case 0x0F9B: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EF0F60.asm:32 BRA @UNKNOWN9
    case 0x0F9C: c.execute<0x80>(0x00003C, 2); return true;
    // src/unknown/EF/EF0F60.asm:34 LDA GAME_STATE+game_state::current_party_members
    case 0x0F9E: c.execute<0xAD>(0x009889, 3); return true;
    // src/unknown/EF/EF0F60.asm:35 ASL
    case 0x0FA1: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0F60.asm:36 TAX
    case 0x0FA2: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0F60.asm:37 LDA ENTITY_SPRITEMAP_POINTER_HIGH,X
    case 0x0FA3: c.execute<0xBD>(0x00116A, 3); return true;
    // src/unknown/EF/EF0F60.asm:38 AND #$8000
    case 0x0FA6: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EF0F60.asm:38 AND #$8000
    // Overlapping static entry reached from 0xEF0FA6.
    case 0x0FA8: c.execute<0x80>(0x0000F0, 2); return true;
    // src/unknown/EF/EF0F60.asm:39 BEQ @UNKNOWN5
    case 0x0FA9: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EF0F60.asm:40 LDA #TRUE
    case 0x0FAB: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF0F60.asm:40 LDA #TRUE
    // Overlapping static entry reached from 0xEF0FAB.
    case 0x0FAD: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EF0F60.asm:41 BRA @UNKNOWN9
    case 0x0FAE: c.execute<0x80>(0x00002A, 2); return true;
    // src/unknown/EF/EF0F60.asm:43 LDA ENTITY_TICK_CALLBACK_HIGH+46
    case 0x0FB0: c.execute<0xAD>(0x0010E4, 3); return true;
    // src/unknown/EF/EF0F60.asm:44 AND #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0x0FB3: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x00C000, 3); return true;
    // src/unknown/EF/EF0F60.asm:44 AND #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xEF0FB3.
    case 0x0FB5: if (c.p & 0x10) c.execute<0xC0>(0x0000F0, 2); else c.execute<0xC0>(0x0005F0, 3); return true;
    // src/unknown/EF/EF0F60.asm:45 BEQ @UNKNOWN6
    case 0x0FB6: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EF0F60.asm:45 BEQ @UNKNOWN6
    // Overlapping static entry reached from 0xEF0FB5.
    case 0x0FB7: c.execute<0x05>(0x0000A9, 2); return true;
    // src/unknown/EF/EF0F60.asm:46 LDA #0
    case 0x0FB8: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EF0F60.asm:46 LDA #0
    // Overlapping static entry reached from 0xEF0FB7.
    case 0x0FB9: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EF0F60.asm:46 LDA #0
    // Overlapping static entry reached from 0xEF0FB8.
    case 0x0FBA: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EF0F60.asm:47 BRA @UNKNOWN7
    case 0x0FBB: c.execute<0x80>(0x000003, 2); return true;
    // src/unknown/EF/EF0F60.asm:49 LDA PENDING_INTERACTIONS
    case 0x0FBD: c.execute<0xAD>(0x005D9A, 3); return true;
    // src/unknown/EF/EF0F60.asm:51 LDX GAME_STATE+game_state::walking_style
    case 0x0FC0: c.execute<0xAE>(0x009883, 3); return true;
    // src/unknown/EF/EF0F60.asm:52 CPX #WALKING_STYLE::LADDER
    case 0x0FC3: if (c.p & 0x10) c.execute<0xE0>(0x000007, 2); else c.execute<0xE0>(0x000007, 3); return true;
    // src/unknown/EF/EF0F60.asm:52 CPX #WALKING_STYLE::LADDER
    // Overlapping static entry reached from 0xEF0FC3.
    case 0x0FC5: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EF0F60.asm:53 BEQ @UNKNOWN8
    case 0x0FC6: c.execute<0xF0>(0x00000F, 2); return true;
    // src/unknown/EF/EF0F60.asm:54 CPX #WALKING_STYLE::ROPE
    case 0x0FC8: if (c.p & 0x10) c.execute<0xE0>(0x000008, 2); else c.execute<0xE0>(0x000008, 3); return true;
    // src/unknown/EF/EF0F60.asm:54 CPX #WALKING_STYLE::ROPE
    // Overlapping static entry reached from 0xEF0FC8.
    case 0x0FCA: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EF0F60.asm:55 BEQ @UNKNOWN8
    case 0x0FCB: c.execute<0xF0>(0x00000A, 2); return true;
    // src/unknown/EF/EF0F60.asm:56 CPX #WALKING_STYLE::ESCALATOR
    case 0x0FCD: if (c.p & 0x10) c.execute<0xE0>(0x00000C, 2); else c.execute<0xE0>(0x00000C, 3); return true;
    // src/unknown/EF/EF0F60.asm:56 CPX #WALKING_STYLE::ESCALATOR
    // Overlapping static entry reached from 0xEF0FCD.
    case 0x0FCF: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EF0F60.asm:57 BEQ @UNKNOWN8
    case 0x0FD0: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EF0F60.asm:58 CPX #WALKING_STYLE::STAIRS
    case 0x0FD2: if (c.p & 0x10) c.execute<0xE0>(0x00000D, 2); else c.execute<0xE0>(0x00000D, 3); return true;
    // src/unknown/EF/EF0F60.asm:58 CPX #WALKING_STYLE::STAIRS
    // Overlapping static entry reached from 0xEF0FD2.
    case 0x0FD4: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EF0F60.asm:59 BNE @UNKNOWN9
    case 0x0FD5: c.execute<0xD0>(0x000003, 2); return true;
    // src/unknown/EF/EF0F60.asm:61 LDA #TRUE
    case 0x0FD7: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF0F60.asm:61 LDA #TRUE
    // Overlapping static entry reached from 0xEF0FD7.
    case 0x0FD9: c.execute<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    case 0x0FDA: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0FDB: c.execute<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EF0FDB.asm:5 LDA #1
    case 0x0FDD: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF0FDB.asm:5 LDA #1
    // Overlapping static entry reached from 0xEF0FDD.
    case 0x0FDF: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF0FDB.asm:6 STA OVERWORLD_STATUS_SUPPRESSION
    case 0x0FE0: c.execute<0x8D>(0x005D98, 3); return true;
    // src/unknown/EF/EF0FDB.asm:7 STA PENDING_INTERACTIONS
    case 0x0FE3: c.execute<0x8D>(0x005D9A, 3); return true;
    // src/unknown/EF/EF0FDB.asm:8 JSL UNKNOWN_C09F3B_ENTRY2
    case 0x0FE6: c.execute<0x22>(0xC09F43, 4); return true;
    // src/unknown/EF/EF0FDB.asm:9 LDA #MUSIC::DELIVERY
    case 0x0FEA: if (c.p & 0x20) c.execute<0xA9>(0x000059, 2); else c.execute<0xA9>(0x000059, 3); return true;
    // src/unknown/EF/EF0FDB.asm:9 LDA #MUSIC::DELIVERY
    // Overlapping static entry reached from 0xEF0FEA.
    case 0x0FEC: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF0FDB.asm:10 JSL CHANGE_MUSIC
    case 0x0FED: c.execute<0x22>(0xC4FBBD, 4); return true;
    // src/unknown/EF/EF0FDB.asm:11 JSL UNKNOWN_C03CFD
    case 0x0FF1: c.execute<0x22>(0xC03CFD, 4); return true;
    // include/macros.asm:30 RTL
    case 0x0FF5: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0FF6: c.execute<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EF0FF6.asm:5 STZ PENDING_INTERACTIONS
    case 0x0FF8: c.execute<0x9C>(0x005D9A, 3); return true;
    // src/unknown/EF/EF0FF6.asm:6 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    case 0x0FFB: if (c.p & 0x20) c.execute<0xA9>(0x000049, 2); else c.execute<0xA9>(0x000049, 3); return true;
    // src/unknown/EF/EF0FF6.asm:6 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    // Overlapping static entry reached from 0xEF0FFB.
    case 0x0FFD: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF0FF6.asm:7 JSL GET_EVENT_FLAG
    case 0x0FFE: c.execute<0x22>(0xC21628, 4); return true;
    // src/unknown/EF/EF0FF6.asm:8 STA OVERWORLD_STATUS_SUPPRESSION
    case 0x1002: c.execute<0x8D>(0x005D98, 3); return true;
    // src/unknown/EF/EF0FF6.asm:9 LDA GAME_STATE+game_state::walking_style
    case 0x1005: c.execute<0xAD>(0x009883, 3); return true;
    // src/unknown/EF/EF0FF6.asm:10 CMP #WALKING_STYLE::BICYCLE
    case 0x1008: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EF0FF6.asm:10 CMP #WALKING_STYLE::BICYCLE
    // Overlapping static entry reached from 0xEF1008.
    case 0x100A: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EF0FF6.asm:11 BNE @UNKNOWN0
    case 0x100B: c.execute<0xD0>(0x000009, 2); return true;
    // src/unknown/EF/EF0FF6.asm:12 LDA #MUSIC::BICYCLE
    case 0x100D: if (c.p & 0x20) c.execute<0xA9>(0x000052, 2); else c.execute<0xA9>(0x000052, 3); return true;
    // src/unknown/EF/EF0FF6.asm:12 LDA #MUSIC::BICYCLE
    // Overlapping static entry reached from 0xEF100D.
    case 0x100F: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF0FF6.asm:13 JSL CHANGE_MUSIC
    case 0x1010: c.execute<0x22>(0xC4FBBD, 4); return true;
    // src/unknown/EF/EF0FF6.asm:14 BRA @UNKNOWN1
    case 0x1014: c.execute<0x80>(0x000004, 2); return true;
    // src/unknown/EF/EF0FF6.asm:16 JSL UNKNOWN_C06A07
    case 0x1016: c.execute<0x22>(0xC06A07, 4); return true;
    // include/macros.asm:30 RTL
    case 0x101A: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xD56F: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xD571: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xD572: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xD573: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xD574: if (c.p & 0x20) c.execute<0x69>(0x0000EA, 2); else c.execute<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFD574.
    case 0xD576: c.execute<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xD577: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xD578: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:13 STY @LOCAL03
    case 0xD579: c.execute<0x84>(0x000014, 2); return true;
    // src/unknown/EF/EFD56F.asm:13 STY @LOCAL03
    // Overlapping static entry reached from 0xEFD576.
    case 0xD57A: c.execute<0x14>(0x000086, 2); return true;
    // src/unknown/EF/EFD56F.asm:14 STX @VIRTUAL04
    case 0xD57B: c.execute<0x86>(0x000004, 2); return true;
    // src/unknown/EF/EFD56F.asm:14 STX @VIRTUAL04
    // Overlapping static entry reached from 0xEFD57A.
    case 0xD57C: c.execute<0x04>(0x000085, 2); return true;
    // src/unknown/EF/EFD56F.asm:15 STA @VIRTUAL02
    case 0xD57D: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFD56F.asm:15 STA @VIRTUAL02
    // Overlapping static entry reached from 0xEFD57C.
    case 0xD57E: c.execute<0x02>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD56F.asm:16 LDA #04
    case 0xD57F: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EFD56F.asm:16 LDA #04
    // Overlapping static entry reached from 0xEFD57F.
    case 0xD581: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFD56F.asm:17 JSL SBRK
    case 0xD582: c.execute<0x22>(0xC086DE, 4); return true;
    // src/unknown/EF/EFD56F.asm:18 TAX
    case 0xD586: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:19 LDY @LOCAL03
    case 0xD587: c.execute<0xA4>(0x000014, 2); return true;
    // src/unknown/EF/EFD56F.asm:20 TYA
    case 0xD589: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:21 LSR
    case 0xD58A: c.execute<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:22 LSR
    case 0xD58B: c.execute<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:23 LSR
    case 0xD58C: c.execute<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:24 LSR
    case 0xD58D: c.execute<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:25 CMP #10
    case 0xD58E: if (c.p & 0x20) c.execute<0xC9>(0x00000A, 2); else c.execute<0xC9>(0x00000A, 3); return true;
    // src/unknown/EF/EFD56F.asm:25 CMP #10
    // Overlapping static entry reached from 0xEFD58E.
    case 0xD590: c.execute<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EFD56F.asm:26 BCC @UNKNOWN0
    case 0xD591: c.execute<0x90>(0x000004, 2); return true;
    // src/unknown/EF/EFD56F.asm:27 CLC
    case 0xD593: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:28 ADC #7
    case 0xD594: if (c.p & 0x20) c.execute<0x69>(0x000007, 2); else c.execute<0x69>(0x000007, 3); return true;
    // src/unknown/EF/EFD56F.asm:28 ADC #7
    // Overlapping static entry reached from 0xEFD594.
    case 0xD596: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EFD56F.asm:30 CLC
    case 0xD597: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:31 ADC #$2030
    case 0xD598: if (c.p & 0x20) c.execute<0x69>(0x000030, 2); else c.execute<0x69>(0x002030, 3); return true;
    // src/unknown/EF/EFD56F.asm:31 ADC #$2030
    // Overlapping static entry reached from 0xEFD598.
    case 0xD59A: c.execute<0x20>(0x00009D, 3); return true;
    // src/unknown/EF/EFD56F.asm:32 STA __BSS_START__,X
    case 0xD59B: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFD56F.asm:32 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFD59A.
    case 0xD59D: c.execute<0x00>(0x000098, 2); return true;
    // src/unknown/EF/EFD56F.asm:33 TYA
    case 0xD59E: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:34 AND #$000F
    case 0xD59F: if (c.p & 0x20) c.execute<0x29>(0x00000F, 2); else c.execute<0x29>(0x00000F, 3); return true;
    // src/unknown/EF/EFD56F.asm:34 AND #$000F
    // Overlapping static entry reached from 0xEFD59F.
    case 0xD5A1: c.execute<0x00>(0x0000C9, 2); return true;
    // src/unknown/EF/EFD56F.asm:35 CMP #10
    case 0xD5A2: if (c.p & 0x20) c.execute<0xC9>(0x00000A, 2); else c.execute<0xC9>(0x00000A, 3); return true;
    // src/unknown/EF/EFD56F.asm:35 CMP #10
    // Overlapping static entry reached from 0xEFD5A2.
    case 0xD5A4: c.execute<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EFD56F.asm:36 BCC @UNKNOWN1
    case 0xD5A5: c.execute<0x90>(0x000004, 2); return true;
    // src/unknown/EF/EFD56F.asm:37 CLC
    case 0xD5A7: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:38 ADC #7
    case 0xD5A8: if (c.p & 0x20) c.execute<0x69>(0x000007, 2); else c.execute<0x69>(0x000007, 3); return true;
    // src/unknown/EF/EFD56F.asm:38 ADC #7
    // Overlapping static entry reached from 0xEFD5A8.
    case 0xD5AA: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EFD56F.asm:40 CLC
    case 0xD5AB: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:41 ADC #$2030
    case 0xD5AC: if (c.p & 0x20) c.execute<0x69>(0x000030, 2); else c.execute<0x69>(0x002030, 3); return true;
    // src/unknown/EF/EFD56F.asm:41 ADC #$2030
    // Overlapping static entry reached from 0xEFD5AC.
    case 0xD5AE: c.execute<0x20>(0x00029D, 3); return true;
    // src/unknown/EF/EFD56F.asm:42 STA __BSS_START__+2,X
    case 0xD5AF: c.execute<0x9D>(0x000002, 3); return true;
    // src/unknown/EF/EFD56F.asm:42 STA __BSS_START__+2,X
    // Overlapping static entry reached from 0xEFD5AE.
    case 0xD5B1: c.execute<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EFD56F.asm:43 LDA @VIRTUAL04
    case 0xD5B2: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFD56F.asm:44 ASL
    case 0xD5B4: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:45 ASL
    case 0xD5B5: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:46 ASL
    case 0xD5B6: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:47 ASL
    case 0xD5B7: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:48 ASL
    case 0xD5B8: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:49 CLC
    case 0xD5B9: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:50 ADC @VIRTUAL02
    case 0xD5BA: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/EF/EFD56F.asm:51 CLC
    case 0xD5BC: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:52 ADC #VRAM::TEXT_LAYER_TILEMAP
    case 0xD5BD: if (c.p & 0x20) c.execute<0x69>(0x000000, 2); else c.execute<0x69>(0x007C00, 3); return true;
    // src/unknown/EF/EFD56F.asm:52 ADC #VRAM::TEXT_LAYER_TILEMAP
    // Overlapping static entry reached from 0xEFD5BD.
    case 0xD5BF: c.execute<0x7C>(0x001285, 3); return true;
    // src/unknown/EF/EFD56F.asm:53 STA @LOCAL02
    case 0xD5C0: c.execute<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EFD56F.asm:54 LDA #$007E
    case 0xD5C2: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/unknown/EF/EFD56F.asm:54 LDA #$007E
    // Overlapping static entry reached from 0xEFD5C2.
    case 0xD5C4: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFD56F.asm:55 STA @LOCAL00
    case 0xD5C5: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFD56F.asm:56 LDA @LOCAL02
    case 0xD5C7: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EFD56F.asm:57 STA @LOCAL01
    case 0xD5C9: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD56F.asm:58 TXY
    case 0xD5CB: c.execute<0x9B>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:59 LDX #4
    case 0xD5CC: if (c.p & 0x10) c.execute<0xA2>(0x000004, 2); else c.execute<0xA2>(0x000004, 3); return true;
    // src/unknown/EF/EFD56F.asm:59 LDX #4
    // Overlapping static entry reached from 0xEFD5CC.
    case 0xD5CE: c.execute<0x00>(0x0000E2, 2); return true;
    // src/unknown/EF/EFD56F.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xD5CF: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFD56F.asm:61 LDA #0
    case 0xD5D1: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/unknown/EF/EFD56F.asm:62 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xD5D3: c.execute<0x22>(0xC0862E, 4); return true;
    // src/unknown/EF/EFD56F.asm:62 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFD5D1.
    case 0xD5D4: c.execute<0x2E>(0x00C086, 3); return true;
    // include/macros.asm:25 PLD
    case 0xD5D7: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xD5D8: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xD5D9: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xD5DB: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xD5DC: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xD5DD: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xD5DE: if (c.p & 0x20) c.execute<0x69>(0x0000EA, 2); else c.execute<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFD5DE.
    case 0xD5E0: c.execute<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xD5E1: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xD5E2: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9.asm:9 STA @VIRTUAL02
    case 0xD5E3: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFD5D9.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xEFD5E0.
    case 0xD5E4: c.execute<0x02>(0x0000A0, 2); return true;
    // src/unknown/EF/EFD5D9.asm:10 LDY #0
    case 0xD5E5: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFD5D9.asm:10 LDY #0
    // Overlapping static entry reached from 0xEFD5E5.
    case 0xD5E7: c.execute<0x00>(0x0000A2, 2); return true;
    // src/unknown/EF/EFD5D9.asm:11 LDX #1
    case 0xD5E8: if (c.p & 0x10) c.execute<0xA2>(0x000001, 2); else c.execute<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EFD5D9.asm:11 LDX #1
    // Overlapping static entry reached from 0xEFD5E8.
    case 0xD5EA: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9.asm:12 LDA #4
    case 0xD5EB: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EFD5D9.asm:12 LDA #4
    // Overlapping static entry reached from 0xEFD5EB.
    case 0xD5ED: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFD5D9.asm:13 JSL FADE_OUT_WITH_MOSAIC
    case 0xD5EE: c.execute<0x22>(0xC08814, 4); return true;
    // src/unknown/EF/EFD5D9.asm:14 JSL UNKNOWN_C0927C
    case 0xD5F2: c.execute<0x22>(0xC0927C, 4); return true;
    // src/unknown/EF/EFD5D9.asm:15 JSR UNKNOWN_EFDA05
    case 0xD5F6: c.execute<0x20>(0x00DA05, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xD5F9: if (c.p & 0x20) c.execute<0xA9>(0x00001B, 2); else c.execute<0xA9>(0x00D51B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFD5F9.
    case 0xD5FB: c.execute<0xD5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xD5FC: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xEFD5FB.
    case 0xD5FD: c.execute<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xD5FE: if (c.p & 0x20) c.execute<0xA9>(0x0000EF, 2); else c.execute<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFD5FD.
    case 0xD5FF: c.execute<0xEF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFD5FE.
    case 0xD600: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xD601: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD603: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD605: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD607: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD609: c.execute<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD60B: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD60D: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD60F: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD611: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD5D9.asm:19 LDX #5
    case 0xD613: if (c.p & 0x10) c.execute<0xA2>(0x000005, 2); else c.execute<0xA2>(0x000005, 3); return true;
    // src/unknown/EF/EFD5D9.asm:19 LDX #5
    // Overlapping static entry reached from 0xEFD613.
    case 0xD615: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9.asm:20 LDA #10
    case 0xD616: if (c.p & 0x20) c.execute<0xA9>(0x00000A, 2); else c.execute<0xA9>(0x00000A, 3); return true;
    // src/unknown/EF/EFD5D9.asm:20 LDA #10
    // Overlapping static entry reached from 0xEFD616.
    case 0xD618: c.execute<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD5D9.asm:21 JSR UNKNOWN_EFDABD
    case 0xD619: c.execute<0x20>(0x00DABD, 3); return true;
    // src/unknown/EF/EFD5D9.asm:22 LDA #14
    case 0xD61C: if (c.p & 0x20) c.execute<0xA9>(0x00000E, 2); else c.execute<0xA9>(0x00000E, 3); return true;
    // src/unknown/EF/EFD5D9.asm:22 LDA #14
    // Overlapping static entry reached from 0xEFD61C.
    case 0xD61E: c.execute<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    case 0xD61F: c.execute<0xA6>(0x000012, 2); return true;
    // include/macros.asm:1038 STX dest
    case 0xD621: c.execute<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    case 0xD623: c.execute<0xA6>(0x000014, 2); return true;
    // include/macros.asm:1040 STX dest+2
    case 0xD625: c.execute<0x86>(0x000008, 2); return true;
    // src/unknown/EF/EFD5D9.asm:24 CLC
    case 0xD627: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9.asm:25 ADC @VIRTUAL06
    case 0xD628: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EFD5D9.asm:26 STA @VIRTUAL06
    case 0xD62A: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EFD5D9.asm:27 STA @LOCAL00
    case 0xD62C: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFD5D9.asm:28 LDA @VIRTUAL06+2
    case 0xD62E: c.execute<0xA5>(0x000008, 2); return true;
    // src/unknown/EF/EFD5D9.asm:29 STA @LOCAL00+2
    case 0xD630: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD5D9.asm:30 LDX #10
    case 0xD632: if (c.p & 0x10) c.execute<0xA2>(0x00000A, 2); else c.execute<0xA2>(0x00000A, 3); return true;
    // src/unknown/EF/EFD5D9.asm:30 LDX #10
    // Overlapping static entry reached from 0xEFD632.
    case 0xD634: c.execute<0x00>(0x00008A, 2); return true;
    // src/unknown/EF/EFD5D9.asm:31 TXA
    case 0xD635: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9.asm:32 JSR UNKNOWN_EFDABD
    case 0xD636: c.execute<0x20>(0x00DABD, 3); return true;
    // src/unknown/EF/EFD5D9.asm:33 LDA #28
    case 0xD639: if (c.p & 0x20) c.execute<0xA9>(0x00001C, 2); else c.execute<0xA9>(0x00001C, 3); return true;
    // src/unknown/EF/EFD5D9.asm:33 LDA #28
    // Overlapping static entry reached from 0xEFD639.
    case 0xD63B: c.execute<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    case 0xD63C: c.execute<0xA6>(0x000012, 2); return true;
    // include/macros.asm:1038 STX dest
    case 0xD63E: c.execute<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    case 0xD640: c.execute<0xA6>(0x000014, 2); return true;
    // include/macros.asm:1040 STX dest+2
    case 0xD642: c.execute<0x86>(0x000008, 2); return true;
    // src/unknown/EF/EFD5D9.asm:35 CLC
    case 0xD644: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9.asm:36 ADC @VIRTUAL06
    case 0xD645: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EFD5D9.asm:37 STA @VIRTUAL06
    case 0xD647: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EFD5D9.asm:38 STA @LOCAL00
    case 0xD649: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFD5D9.asm:39 LDA @VIRTUAL06+2
    case 0xD64B: c.execute<0xA5>(0x000008, 2); return true;
    // src/unknown/EF/EFD5D9.asm:40 STA @LOCAL00+2
    case 0xD64D: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD5D9.asm:41 LDX #12
    case 0xD64F: if (c.p & 0x10) c.execute<0xA2>(0x00000C, 2); else c.execute<0xA2>(0x00000C, 3); return true;
    // src/unknown/EF/EFD5D9.asm:41 LDX #12
    // Overlapping static entry reached from 0xEFD64F.
    case 0xD651: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9.asm:42 LDA #10
    case 0xD652: if (c.p & 0x20) c.execute<0xA9>(0x00000A, 2); else c.execute<0xA9>(0x00000A, 3); return true;
    // src/unknown/EF/EFD5D9.asm:42 LDA #10
    // Overlapping static entry reached from 0xEFD652.
    case 0xD654: c.execute<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD5D9.asm:43 JSR UNKNOWN_EFDABD
    case 0xD655: c.execute<0x20>(0x00DABD, 3); return true;
    // src/unknown/EF/EFD5D9.asm:44 LDA #42
    case 0xD658: if (c.p & 0x20) c.execute<0xA9>(0x00002A, 2); else c.execute<0xA9>(0x00002A, 3); return true;
    // src/unknown/EF/EFD5D9.asm:44 LDA #42
    // Overlapping static entry reached from 0xEFD658.
    case 0xD65A: c.execute<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    case 0xD65B: c.execute<0xA6>(0x000012, 2); return true;
    // include/macros.asm:1038 STX dest
    case 0xD65D: c.execute<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    case 0xD65F: c.execute<0xA6>(0x000014, 2); return true;
    // include/macros.asm:1040 STX dest+2
    case 0xD661: c.execute<0x86>(0x000008, 2); return true;
    // src/unknown/EF/EFD5D9.asm:46 CLC
    case 0xD663: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9.asm:47 ADC @VIRTUAL06
    case 0xD664: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EFD5D9.asm:48 STA @VIRTUAL06
    case 0xD666: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EFD5D9.asm:49 STA @LOCAL00
    case 0xD668: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFD5D9.asm:50 LDA @VIRTUAL06+2
    case 0xD66A: c.execute<0xA5>(0x000008, 2); return true;
    // src/unknown/EF/EFD5D9.asm:51 STA @LOCAL00+2
    case 0xD66C: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD5D9.asm:52 LDX #14
    case 0xD66E: if (c.p & 0x10) c.execute<0xA2>(0x00000E, 2); else c.execute<0xA2>(0x00000E, 3); return true;
    // src/unknown/EF/EFD5D9.asm:52 LDX #14
    // Overlapping static entry reached from 0xEFD66E.
    case 0xD670: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9.asm:53 LDA #10
    case 0xD671: if (c.p & 0x20) c.execute<0xA9>(0x00000A, 2); else c.execute<0xA9>(0x00000A, 3); return true;
    // src/unknown/EF/EFD5D9.asm:53 LDA #10
    // Overlapping static entry reached from 0xEFD671.
    case 0xD673: c.execute<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD5D9.asm:54 JSR UNKNOWN_EFDABD
    case 0xD674: c.execute<0x20>(0x00DABD, 3); return true;
    // src/unknown/EF/EFD5D9.asm:55 LDA #56
    case 0xD677: if (c.p & 0x20) c.execute<0xA9>(0x000038, 2); else c.execute<0xA9>(0x000038, 3); return true;
    // src/unknown/EF/EFD5D9.asm:55 LDA #56
    // Overlapping static entry reached from 0xEFD677.
    case 0xD679: c.execute<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    case 0xD67A: c.execute<0xA6>(0x000012, 2); return true;
    // include/macros.asm:1038 STX dest
    case 0xD67C: c.execute<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    case 0xD67E: c.execute<0xA6>(0x000014, 2); return true;
    // include/macros.asm:1040 STX dest+2
    case 0xD680: c.execute<0x86>(0x000008, 2); return true;
    // src/unknown/EF/EFD5D9.asm:57 CLC
    case 0xD682: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9.asm:58 ADC @VIRTUAL06
    case 0xD683: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EFD5D9.asm:59 STA @VIRTUAL06
    case 0xD685: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EFD5D9.asm:60 STA @LOCAL00
    case 0xD687: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFD5D9.asm:61 LDA @VIRTUAL06+2
    case 0xD689: c.execute<0xA5>(0x000008, 2); return true;
    // src/unknown/EF/EFD5D9.asm:62 STA @LOCAL00+2
    case 0xD68B: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD5D9.asm:63 LDX #20
    case 0xD68D: if (c.p & 0x10) c.execute<0xA2>(0x000014, 2); else c.execute<0xA2>(0x000014, 3); return true;
    // src/unknown/EF/EFD5D9.asm:63 LDX #20
    // Overlapping static entry reached from 0xEFD68D.
    case 0xD68F: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9.asm:64 LDA #9
    case 0xD690: if (c.p & 0x20) c.execute<0xA9>(0x000009, 2); else c.execute<0xA9>(0x000009, 3); return true;
    // src/unknown/EF/EFD5D9.asm:64 LDA #9
    // Overlapping static entry reached from 0xEFD690.
    case 0xD692: c.execute<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD5D9.asm:65 JSR UNKNOWN_EFDABD
    case 0xD693: c.execute<0x20>(0x00DABD, 3); return true;
    // src/unknown/EF/EFD5D9.asm:66 LDA #70
    case 0xD696: if (c.p & 0x20) c.execute<0xA9>(0x000046, 2); else c.execute<0xA9>(0x000046, 3); return true;
    // src/unknown/EF/EFD5D9.asm:66 LDA #70
    // Overlapping static entry reached from 0xEFD696.
    case 0xD698: c.execute<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    case 0xD699: c.execute<0xA6>(0x000012, 2); return true;
    // include/macros.asm:1038 STX dest
    case 0xD69B: c.execute<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    case 0xD69D: c.execute<0xA6>(0x000014, 2); return true;
    // include/macros.asm:1040 STX dest+2
    case 0xD69F: c.execute<0x86>(0x000008, 2); return true;
    // src/unknown/EF/EFD5D9.asm:68 CLC
    case 0xD6A1: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9.asm:69 ADC @VIRTUAL06
    case 0xD6A2: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EFD5D9.asm:70 STA @VIRTUAL06
    case 0xD6A4: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EFD5D9.asm:71 STA @LOCAL00
    case 0xD6A6: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFD5D9.asm:72 LDA @VIRTUAL06+2
    case 0xD6A8: c.execute<0xA5>(0x000008, 2); return true;
    // src/unknown/EF/EFD5D9.asm:73 STA @LOCAL00+2
    case 0xD6AA: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD5D9.asm:74 LDX #22
    case 0xD6AC: if (c.p & 0x10) c.execute<0xA2>(0x000016, 2); else c.execute<0xA2>(0x000016, 3); return true;
    // src/unknown/EF/EFD5D9.asm:74 LDX #22
    // Overlapping static entry reached from 0xEFD6AC.
    case 0xD6AE: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9.asm:75 LDA #10
    case 0xD6AF: if (c.p & 0x20) c.execute<0xA9>(0x00000A, 2); else c.execute<0xA9>(0x00000A, 3); return true;
    // src/unknown/EF/EFD5D9.asm:75 LDA #10
    // Overlapping static entry reached from 0xEFD6AF.
    case 0xD6B1: c.execute<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD5D9.asm:76 JSR UNKNOWN_EFDABD
    case 0xD6B2: c.execute<0x20>(0x00DABD, 3); return true;
    // src/unknown/EF/EFD5D9.asm:77 LDA @VIRTUAL02
    case 0xD6B5: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFD5D9.asm:78 ASL
    case 0xD6B7: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9.asm:79 TAX
    case 0xD6B8: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9.asm:80 LDA #64
    case 0xD6B9: if (c.p & 0x20) c.execute<0xA9>(0x000040, 2); else c.execute<0xA9>(0x000040, 3); return true;
    // src/unknown/EF/EFD5D9.asm:80 LDA #64
    // Overlapping static entry reached from 0xEFD6B9.
    case 0xD6BB: c.execute<0x00>(0x00009D, 2); return true;
    // src/unknown/EF/EFD5D9.asm:81 STA ENTITY_ABS_X_TABLE,X
    case 0xD6BC: c.execute<0x9D>(0x000B8E, 3); return true;
    // src/unknown/EF/EFD5D9.asm:82 LDA #80
    case 0xD6BF: if (c.p & 0x20) c.execute<0xA9>(0x000050, 2); else c.execute<0xA9>(0x000050, 3); return true;
    // src/unknown/EF/EFD5D9.asm:82 LDA #80
    // Overlapping static entry reached from 0xEFD6BF.
    case 0xD6C1: c.execute<0x00>(0x00009D, 2); return true;
    // src/unknown/EF/EFD5D9.asm:83 STA ENTITY_ABS_Y_TABLE,X
    case 0xD6C2: c.execute<0x9D>(0x000BCA, 3); return true;
    // src/unknown/EF/EFD5D9.asm:84 LDY #0
    case 0xD6C5: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFD5D9.asm:84 LDY #0
    // Overlapping static entry reached from 0xEFD6C5.
    case 0xD6C7: c.execute<0x00>(0x0000A2, 2); return true;
    // src/unknown/EF/EFD5D9.asm:85 LDX #1
    case 0xD6C8: if (c.p & 0x10) c.execute<0xA2>(0x000001, 2); else c.execute<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EFD5D9.asm:85 LDX #1
    // Overlapping static entry reached from 0xEFD6C8.
    case 0xD6CA: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9.asm:86 LDA #4
    case 0xD6CB: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EFD5D9.asm:86 LDA #4
    // Overlapping static entry reached from 0xEFD6CB.
    case 0xD6CD: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFD5D9.asm:87 JSL FADE_IN_WITH_MOSAIC
    case 0xD6CE: c.execute<0x22>(0xC087CE, 4); return true;
    // include/macros.asm:25 PLD
    case 0xD6D2: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xD6D3: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xD6D4: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xD6D6: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xD6D7: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xD6D8: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xD6D9: if (c.p & 0x20) c.execute<0x69>(0x0000F2, 2); else c.execute<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFD6D9.
    case 0xD6DB: c.execute<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xD6DC: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xD6DD: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:7 STA @VIRTUAL04
    case 0xD6DE: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFD6D4.asm:7 STA @VIRTUAL04
    // Overlapping static entry reached from 0xEFD6DB.
    case 0xD6DF: c.execute<0x04>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:8 LDA #0
    case 0xD6E0: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFD6D4.asm:8 LDA #0
    // Overlapping static entry reached from 0xEFD6DF.
    case 0xD6E1: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EFD6D4.asm:8 LDA #0
    // Overlapping static entry reached from 0xEFD6E0.
    case 0xD6E2: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFD6D4.asm:9 STA @VIRTUAL02
    case 0xD6E3: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:10 LDX CURRENT_MUSIC_TRACK
    case 0xD6E5: c.execute<0xAE>(0x00B53B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:11 STX DEBUG_SOUND_MENU_INITIAL_BGM
    case 0xD6E8: c.execute<0x8E>(0x00B545, 3); return true;
    // src/unknown/EF/EFD6D4.asm:12 STX DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xD6EB: c.execute<0x8E>(0x00B54B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:13 LDA #2
    case 0xD6EE: if (c.p & 0x20) c.execute<0xA9>(0x000002, 2); else c.execute<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EFD6D4.asm:13 LDA #2
    // Overlapping static entry reached from 0xEFD6EE.
    case 0xD6F0: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:14 STA DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xD6F1: c.execute<0x8D>(0x00B54F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:15 LDA @VIRTUAL04
    case 0xD6F4: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFD6D4.asm:16 JSR UNKNOWN_EFD5D9
    case 0xD6F6: c.execute<0x20>(0x00D5D9, 3); return true;
    // src/unknown/EF/EFD6D4.asm:18 JSL UPDATE_SCREEN
    case 0xD6F9: c.execute<0x22>(0xC08B26, 4); return true;
    // src/unknown/EF/EFD6D4.asm:19 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xD6FD: c.execute<0x22>(0xC08756, 4); return true;
    // src/unknown/EF/EFD6D4.asm:20 LDA PAD_PRESS
    case 0xD701: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:21 AND #PAD::Y_BUTTON
    case 0xD704: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x004000, 3); return true;
    // src/unknown/EF/EFD6D4.asm:21 AND #PAD::Y_BUTTON
    // Overlapping static entry reached from 0xEFD704.
    case 0xD706: c.execute<0x40>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:22 BEQ @UNKNOWN1
    case 0xD707: c.execute<0xF0>(0x000008, 2); return true;
    // src/unknown/EF/EFD6D4.asm:23 JSR UNKNOWN_EFE175
    case 0xD709: c.execute<0x20>(0x00E175, 3); return true;
    // src/unknown/EF/EFD6D4.asm:24 LDA @VIRTUAL04
    case 0xD70C: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFD6D4.asm:25 JSR UNKNOWN_EFD5D9
    case 0xD70E: c.execute<0x20>(0x00D5D9, 3); return true;
    // src/unknown/EF/EFD6D4.asm:27 JSL OAM_CLEAR
    case 0xD711: c.execute<0x22>(0xC088B1, 4); return true;
    // src/unknown/EF/EFD6D4.asm:27 JSL OAM_CLEAR
    // Overlapping static entry reached from 0xEFD742.
    case 0xD714: if (c.p & 0x10) c.execute<0xC0>(0x000022, 2); else c.execute<0xC0>(0x006622, 3); return true;
    // src/unknown/EF/EFD6D4.asm:28 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xD715: c.execute<0x22>(0xC09466, 4); return true;
    // src/unknown/EF/EFD6D4.asm:28 JSL RUN_ACTIONSCRIPT_FRAME
    // Overlapping static entry reached from 0xEFD714.
    case 0xD716: c.execute<0x66>(0x000094, 2); return true;
    // src/unknown/EF/EFD6D4.asm:28 JSL RUN_ACTIONSCRIPT_FRAME
    // Overlapping static entry reached from 0xEFD714.
    case 0xD717: c.execute<0x94>(0x0000C0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:28 JSL RUN_ACTIONSCRIPT_FRAME
    // Overlapping static entry reached from 0xEFD716.
    case 0xD718: if (c.p & 0x10) c.execute<0xC0>(0x0000AC, 2); else c.execute<0xC0>(0x004BAC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:29 LDY DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xD719: c.execute<0xAC>(0x00B54B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:29 LDY DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFD718.
    case 0xD71A: c.execute<0x4B>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:29 LDY DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFD718.
    case 0xD71B: c.execute<0xB5>(0x0000A2, 2); return true;
    // src/unknown/EF/EFD6D4.asm:30 LDX #10
    case 0xD71C: if (c.p & 0x10) c.execute<0xA2>(0x00000A, 2); else c.execute<0xA2>(0x00000A, 3); return true;
    // src/unknown/EF/EFD6D4.asm:30 LDX #10
    // Overlapping static entry reached from 0xEFD71B.
    case 0xD71D: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:30 LDX #10
    // Overlapping static entry reached from 0xEFD71C.
    case 0xD71E: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:31 LDA #18
    case 0xD71F: if (c.p & 0x20) c.execute<0xA9>(0x000012, 2); else c.execute<0xA9>(0x000012, 3); return true;
    // src/unknown/EF/EFD6D4.asm:31 LDA #18
    // Overlapping static entry reached from 0xEFD71F.
    case 0xD721: c.execute<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD6D4.asm:32 JSR UNKNOWN_EFD56F
    case 0xD722: c.execute<0x20>(0x00D56F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:33 LDY DEBUG_SOUND_MENU_SELECTED_SE
    case 0xD725: c.execute<0xAC>(0x00B54D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:34 LDX #12
    case 0xD728: if (c.p & 0x10) c.execute<0xA2>(0x00000C, 2); else c.execute<0xA2>(0x00000C, 3); return true;
    // src/unknown/EF/EFD6D4.asm:34 LDX #12
    // Overlapping static entry reached from 0xEFD728.
    case 0xD72A: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:35 LDA #18
    case 0xD72B: if (c.p & 0x20) c.execute<0xA9>(0x000012, 2); else c.execute<0xA9>(0x000012, 3); return true;
    // src/unknown/EF/EFD6D4.asm:35 LDA #18
    // Overlapping static entry reached from 0xEFD72B.
    case 0xD72D: c.execute<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD6D4.asm:36 JSR UNKNOWN_EFD56F
    case 0xD72E: c.execute<0x20>(0x00D56F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:37 LDY DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xD731: c.execute<0xAC>(0x00B54F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:38 LDX #14
    case 0xD734: if (c.p & 0x10) c.execute<0xA2>(0x00000E, 2); else c.execute<0xA2>(0x00000E, 3); return true;
    // src/unknown/EF/EFD6D4.asm:38 LDX #14
    // Overlapping static entry reached from 0xEFD734.
    case 0xD736: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:39 LDA #18
    case 0xD737: if (c.p & 0x20) c.execute<0xA9>(0x000012, 2); else c.execute<0xA9>(0x000012, 3); return true;
    // src/unknown/EF/EFD6D4.asm:39 LDA #18
    // Overlapping static entry reached from 0xEFD737.
    case 0xD739: c.execute<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD6D4.asm:40 JSR UNKNOWN_EFD56F
    case 0xD73A: c.execute<0x20>(0x00D56F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:41 LDA PAD_PRESS
    case 0xD73D: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:42 CMP #PAD::SELECT_BUTTON | PAD::START_BUTTON
    case 0xD740: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x003000, 3); return true;
    // src/unknown/EF/EFD6D4.asm:42 CMP #PAD::SELECT_BUTTON | PAD::START_BUTTON
    // Overlapping static entry reached from 0xEFD740.
    case 0xD742: c.execute<0x30>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    case 0xD743: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:772 BNE :+
    // Overlapping static entry reached from 0xEFD742.
    case 0xD744: c.execute<0x03>(0x00004C, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xD745: c.execute<0x4C>(0x00D8B3, 3); return true;
    // include/macros.asm:773 JMP dest
    // Overlapping static entry reached from 0xEFD744.
    case 0xD746: c.execute<0xB3>(0x0000D8, 2); return true;
    // src/unknown/EF/EFD6D4.asm:44 LDA PAD_HELD
    case 0xD748: c.execute<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:45 AND #PAD::UP
    case 0xD74B: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000800, 3); return true;
    // src/unknown/EF/EFD6D4.asm:45 AND #PAD::UP
    // Overlapping static entry reached from 0xEFD74B.
    case 0xD74D: c.execute<0x08>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:46 BEQ @UNKNOWN3
    case 0xD74E: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EFD6D4.asm:47 LDA @VIRTUAL02
    case 0xD750: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:48 DEC
    case 0xD752: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:49 STA @VIRTUAL02
    case 0xD753: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:51 LDA PAD_HELD
    case 0xD755: c.execute<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:52 AND #PAD::DOWN
    case 0xD758: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000400, 3); return true;
    // src/unknown/EF/EFD6D4.asm:52 AND #PAD::DOWN
    // Overlapping static entry reached from 0xEFD758.
    case 0xD75A: c.execute<0x04>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:53 BEQ @UNKNOWN4
    case 0xD75B: c.execute<0xF0>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:53 BEQ @UNKNOWN4
    // Overlapping static entry reached from 0xEFD75A.
    case 0xD75C: c.execute<0x02>(0x0000E6, 2); return true;
    // src/unknown/EF/EFD6D4.asm:54 INC @VIRTUAL02
    case 0xD75D: c.execute<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:56 LDA @VIRTUAL02
    case 0xD75F: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:57 CMP #.LOWORD(-1)
    case 0xD761: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFD6D4.asm:57 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD790.
    case 0xD762: c.execute<0xFF>(0x05D0FF, 4); return true;
    // src/unknown/EF/EFD6D4.asm:57 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD761.
    case 0xD763: c.execute<0xFF>(0xA905D0, 4); return true;
    // src/unknown/EF/EFD6D4.asm:58 BNE @UNKNOWN5
    case 0xD764: c.execute<0xD0>(0x000005, 2); return true;
    // src/unknown/EF/EFD6D4.asm:59 LDA #2
    case 0xD766: if (c.p & 0x20) c.execute<0xA9>(0x000002, 2); else c.execute<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EFD6D4.asm:59 LDA #2
    // Overlapping static entry reached from 0xEFD763.
    case 0xD767: c.execute<0x02>(0x000000, 2); return true;
    // src/unknown/EF/EFD6D4.asm:59 LDA #2
    // Overlapping static entry reached from 0xEFD766.
    case 0xD768: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFD6D4.asm:60 STA @VIRTUAL02
    case 0xD769: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:62 LDA @VIRTUAL02
    case 0xD76B: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:63 CMP #3
    case 0xD76D: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFD6D4.asm:63 CMP #3
    // Overlapping static entry reached from 0xEFD76D.
    case 0xD76F: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:64 BNE @UNKNOWN6
    case 0xD770: c.execute<0xD0>(0x000005, 2); return true;
    // src/unknown/EF/EFD6D4.asm:65 LDA #0
    case 0xD772: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFD6D4.asm:65 LDA #0
    // Overlapping static entry reached from 0xEFD772.
    case 0xD774: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFD6D4.asm:66 STA @VIRTUAL02
    case 0xD775: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:68 LDA PAD_PRESS
    case 0xD777: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:69 AND #PAD::L_BUTTON
    case 0xD77A: if (c.p & 0x20) c.execute<0x29>(0x000020, 2); else c.execute<0x29>(0x000020, 3); return true;
    // src/unknown/EF/EFD6D4.asm:69 AND #PAD::L_BUTTON
    // Overlapping static entry reached from 0xEFD77A.
    case 0xD77C: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:70 BEQ @UNKNOWN7
    case 0xD77D: c.execute<0xF0>(0x00000C, 2); return true;
    // src/unknown/EF/EFD6D4.asm:71 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xD77F: c.execute<0xAD>(0x00B54B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:72 STA DEBUG_SOUND_MENU_INITIAL_BGM
    case 0xD782: c.execute<0x8D>(0x00B545, 3); return true;
    // src/unknown/EF/EFD6D4.asm:73 LDA #46
    case 0xD785: if (c.p & 0x20) c.execute<0xA9>(0x00002E, 2); else c.execute<0xA9>(0x00002E, 3); return true;
    // src/unknown/EF/EFD6D4.asm:73 LDA #46
    // Overlapping static entry reached from 0xEFD785.
    case 0xD787: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:74 STA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xD788: c.execute<0x8D>(0x00B54B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:76 LDA PAD_PRESS
    case 0xD78B: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:77 AND #PAD::B_BUTTON
    case 0xD78E: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EFD6D4.asm:77 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xEFD78E.
    case 0xD790: c.execute<0x80>(0x0000D0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:78 BNE @UNKNOWN8
    case 0xD791: c.execute<0xD0>(0x000008, 2); return true;
    // src/unknown/EF/EFD6D4.asm:79 LDA PAD_PRESS
    case 0xD793: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:80 AND #PAD::R_BUTTON
    case 0xD796: if (c.p & 0x20) c.execute<0x29>(0x000010, 2); else c.execute<0x29>(0x000010, 3); return true;
    // src/unknown/EF/EFD6D4.asm:80 AND #PAD::R_BUTTON
    // Overlapping static entry reached from 0xEFD796.
    case 0xD798: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:81 BEQ @UNKNOWN9
    case 0xD799: c.execute<0xF0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:83 LDA DEBUG_SOUND_MENU_INITIAL_BGM
    case 0xD79B: c.execute<0xAD>(0x00B545, 3); return true;
    // src/unknown/EF/EFD6D4.asm:84 STA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xD79E: c.execute<0x8D>(0x00B54B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:86 LDA @VIRTUAL02
    case 0xD7A1: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:87 BEQ @UNKNOWN11
    case 0xD7A3: c.execute<0xF0>(0x000010, 2); return true;
    // src/unknown/EF/EFD6D4.asm:88 CMP #1
    case 0xD7A5: if (c.p & 0x20) c.execute<0xC9>(0x000001, 2); else c.execute<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFD6D4.asm:88 CMP #1
    // Overlapping static entry reached from 0xEFD7A5.
    case 0xD7A7: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:89 BEQ @UNKNOWN17
    case 0xD7A8: c.execute<0xF0>(0x000061, 2); return true;
    // src/unknown/EF/EFD6D4.asm:90 CMP #2
    case 0xD7AA: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFD6D4.asm:90 CMP #2
    // Overlapping static entry reached from 0xEFD7AA.
    case 0xD7AC: c.execute<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    case 0xD7AD: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xD7AF: c.execute<0x4C>(0x00D84E, 3); return true;
    // src/unknown/EF/EFD6D4.asm:92 JMP @UNKNOWN27
    case 0xD7B2: c.execute<0x4C>(0x00D88F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:94 LDA PAD_HELD
    case 0xD7B5: c.execute<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:95 AND #PAD::LEFT
    case 0xD7B8: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000200, 3); return true;
    // src/unknown/EF/EFD6D4.asm:95 AND #PAD::LEFT
    // Overlapping static entry reached from 0xEFD7B8.
    case 0xD7BA: c.execute<0x02>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:96 BEQ @UNKNOWN12
    case 0xD7BB: c.execute<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFD6D4.asm:97 DEC DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xD7BD: c.execute<0xCE>(0x00B54B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:99 LDA PAD_HELD
    case 0xD7C0: c.execute<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:100 AND #PAD::RIGHT
    case 0xD7C3: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000100, 3); return true;
    // src/unknown/EF/EFD6D4.asm:100 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xEFD7C3.
    case 0xD7C5: c.execute<0x01>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:101 BEQ @UNKNOWN13
    case 0xD7C6: c.execute<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFD6D4.asm:101 BEQ @UNKNOWN13
    // Overlapping static entry reached from 0xEFD7C5.
    case 0xD7C7: c.execute<0x03>(0x0000EE, 2); return true;
    // src/unknown/EF/EFD6D4.asm:102 INC DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xD7C8: c.execute<0xEE>(0x00B54B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:102 INC DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFD7C7.
    case 0xD7C9: c.execute<0x4B>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:102 INC DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFD7C9.
    case 0xD7CA: c.execute<0xB5>(0x0000AD, 2); return true;
    // src/unknown/EF/EFD6D4.asm:104 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xD7CB: c.execute<0xAD>(0x00B54B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:104 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFD7CA.
    case 0xD7CC: c.execute<0x4B>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:104 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFD7CC.
    case 0xD7CD: c.execute<0xB5>(0x0000C9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:105 CMP #.LOWORD(-1)
    case 0xD7CE: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFD6D4.asm:105 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD7CD.
    case 0xD7CF: c.execute<0xFF>(0x06D0FF, 4); return true;
    // src/unknown/EF/EFD6D4.asm:105 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD7CE.
    case 0xD7D0: c.execute<0xFF>(0xA906D0, 4); return true;
    // src/unknown/EF/EFD6D4.asm:106 BNE @UNKNOWN14
    case 0xD7D1: c.execute<0xD0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:107 LDA #191
    case 0xD7D3: if (c.p & 0x20) c.execute<0xA9>(0x0000BF, 2); else c.execute<0xA9>(0x0000BF, 3); return true;
    // src/unknown/EF/EFD6D4.asm:107 LDA #191
    // Overlapping static entry reached from 0xEFD7D0.
    case 0xD7D4: c.execute<0xBF>(0x4B8D00, 4); return true;
    // src/unknown/EF/EFD6D4.asm:107 LDA #191
    // Overlapping static entry reached from 0xEFD7D3.
    case 0xD7D5: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:108 STA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xD7D6: c.execute<0x8D>(0x00B54B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:108 STA DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFD7D4.
    case 0xD7D8: c.execute<0xB5>(0x0000AD, 2); return true;
    // src/unknown/EF/EFD6D4.asm:110 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xD7D9: c.execute<0xAD>(0x00B54B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:110 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFD7D8.
    case 0xD7DA: c.execute<0x4B>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:110 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFD7DA.
    case 0xD7DB: c.execute<0xB5>(0x0000C9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:111 CMP #192
    case 0xD7DC: if (c.p & 0x20) c.execute<0xC9>(0x0000C0, 2); else c.execute<0xC9>(0x0000C0, 3); return true;
    // src/unknown/EF/EFD6D4.asm:111 CMP #192
    // Overlapping static entry reached from 0xEFD7DB.
    case 0xD7DD: if (c.p & 0x10) c.execute<0xC0>(0x000000, 2); else c.execute<0xC0>(0x00D000, 3); return true;
    // src/unknown/EF/EFD6D4.asm:111 CMP #192
    // Overlapping static entry reached from 0xEFD7DC.
    case 0xD7DE: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:112 BNE @UNKNOWN15
    case 0xD7DF: c.execute<0xD0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:112 BNE @UNKNOWN15
    // Overlapping static entry reached from 0xEFD7DD.
    case 0xD7E0: c.execute<0x06>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:113 LDA #1
    case 0xD7E1: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFD6D4.asm:113 LDA #1
    // Overlapping static entry reached from 0xEFD7E0.
    case 0xD7E2: c.execute<0x01>(0x000000, 2); return true;
    // src/unknown/EF/EFD6D4.asm:113 LDA #1
    // Overlapping static entry reached from 0xEFD7E1.
    case 0xD7E3: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:114 STA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xD7E4: c.execute<0x8D>(0x00B54B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:116 LDA PAD_PRESS
    case 0xD7E7: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:117 AND #PAD::A_BUTTON
    case 0xD7EA: if (c.p & 0x20) c.execute<0x29>(0x000080, 2); else c.execute<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EFD6D4.asm:117 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xEFD7EA.
    case 0xD7EC: c.execute<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    case 0xD7ED: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xD7EF: c.execute<0x4C>(0x00D88F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:119 JSL STOP_MUSIC
    case 0xD7F2: c.execute<0x22>(0xC0ABC6, 4); return true;
    // src/unknown/EF/EFD6D4.asm:120 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xD7F6: c.execute<0x22>(0xC08756, 4); return true;
    // src/unknown/EF/EFD6D4.asm:121 LDA CURRENT_MUSIC_TRACK
    case 0xD7FA: c.execute<0xAD>(0x00B53B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:122 JSL UNKNOWN_C0AC20
    case 0xD7FD: c.execute<0x22>(0xC0AC20, 4); return true;
    // src/unknown/EF/EFD6D4.asm:123 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xD801: c.execute<0xAD>(0x00B54B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:124 JSL CHANGE_MUSIC
    case 0xD804: c.execute<0x22>(0xC4FBBD, 4); return true;
    // src/unknown/EF/EFD6D4.asm:125 JMP @UNKNOWN27
    case 0xD808: c.execute<0x4C>(0x00D88F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:127 LDA PAD_HELD
    case 0xD80B: c.execute<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:128 AND #PAD::LEFT
    case 0xD80E: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000200, 3); return true;
    // src/unknown/EF/EFD6D4.asm:128 AND #PAD::LEFT
    // Overlapping static entry reached from 0xEFD80E.
    case 0xD810: c.execute<0x02>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:129 BEQ @UNKNOWN18
    case 0xD811: c.execute<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFD6D4.asm:130 DEC DEBUG_SOUND_MENU_SELECTED_SE
    case 0xD813: c.execute<0xCE>(0x00B54D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:132 LDA PAD_HELD
    case 0xD816: c.execute<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:133 AND #PAD::RIGHT
    case 0xD819: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000100, 3); return true;
    // src/unknown/EF/EFD6D4.asm:133 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xEFD819.
    case 0xD81B: c.execute<0x01>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:134 BEQ @UNKNOWN19
    case 0xD81C: c.execute<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFD6D4.asm:134 BEQ @UNKNOWN19
    // Overlapping static entry reached from 0xEFD81B.
    case 0xD81D: c.execute<0x03>(0x0000EE, 2); return true;
    // src/unknown/EF/EFD6D4.asm:135 INC DEBUG_SOUND_MENU_SELECTED_SE
    case 0xD81E: c.execute<0xEE>(0x00B54D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:135 INC DEBUG_SOUND_MENU_SELECTED_SE
    // Overlapping static entry reached from 0xEFD81D.
    case 0xD81F: c.execute<0x4D>(0x00ADB5, 3); return true;
    // src/unknown/EF/EFD6D4.asm:137 LDA DEBUG_SOUND_MENU_SELECTED_SE
    case 0xD821: c.execute<0xAD>(0x00B54D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:137 LDA DEBUG_SOUND_MENU_SELECTED_SE
    // Overlapping static entry reached from 0xEFD81F.
    case 0xD822: c.execute<0x4D>(0x00C9B5, 3); return true;
    // src/unknown/EF/EFD6D4.asm:138 CMP #.LOWORD(-1)
    case 0xD824: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFD6D4.asm:138 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD822.
    case 0xD825: c.execute<0xFF>(0x06D0FF, 4); return true;
    // src/unknown/EF/EFD6D4.asm:138 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD824.
    case 0xD826: c.execute<0xFF>(0xA906D0, 4); return true;
    // src/unknown/EF/EFD6D4.asm:139 BNE @UNKNOWN20
    case 0xD827: c.execute<0xD0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:140 LDA #127
    case 0xD829: if (c.p & 0x20) c.execute<0xA9>(0x00007F, 2); else c.execute<0xA9>(0x00007F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:140 LDA #127
    // Overlapping static entry reached from 0xEFD826.
    case 0xD82A: c.execute<0x7F>(0x4D8D00, 4); return true;
    // src/unknown/EF/EFD6D4.asm:140 LDA #127
    // Overlapping static entry reached from 0xEFD829.
    case 0xD82B: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:141 STA DEBUG_SOUND_MENU_SELECTED_SE
    case 0xD82C: c.execute<0x8D>(0x00B54D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:141 STA DEBUG_SOUND_MENU_SELECTED_SE
    // Overlapping static entry reached from 0xEFD82A.
    case 0xD82E: c.execute<0xB5>(0x0000AD, 2); return true;
    // src/unknown/EF/EFD6D4.asm:143 LDA DEBUG_SOUND_MENU_SELECTED_SE
    case 0xD82F: c.execute<0xAD>(0x00B54D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:143 LDA DEBUG_SOUND_MENU_SELECTED_SE
    // Overlapping static entry reached from 0xEFD82E.
    case 0xD830: c.execute<0x4D>(0x00C9B5, 3); return true;
    // src/unknown/EF/EFD6D4.asm:144 CMP #128
    case 0xD832: if (c.p & 0x20) c.execute<0xC9>(0x000080, 2); else c.execute<0xC9>(0x000080, 3); return true;
    // src/unknown/EF/EFD6D4.asm:144 CMP #128
    // Overlapping static entry reached from 0xEFD830.
    case 0xD833: c.execute<0x80>(0x000000, 2); return true;
    // src/unknown/EF/EFD6D4.asm:144 CMP #128
    // Overlapping static entry reached from 0xEFD832.
    case 0xD834: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:145 BNE @UNKNOWN21
    case 0xD835: c.execute<0xD0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:146 LDA #1
    case 0xD837: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFD6D4.asm:146 LDA #1
    // Overlapping static entry reached from 0xEFD837.
    case 0xD839: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:147 STA DEBUG_SOUND_MENU_SELECTED_SE
    case 0xD83A: c.execute<0x8D>(0x00B54D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:149 LDA PAD_PRESS
    case 0xD83D: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:150 AND #PAD::A_BUTTON
    case 0xD840: if (c.p & 0x20) c.execute<0x29>(0x000080, 2); else c.execute<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EFD6D4.asm:150 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xEFD840.
    case 0xD842: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:151 BEQ @UNKNOWN27
    case 0xD843: c.execute<0xF0>(0x00004A, 2); return true;
    // src/unknown/EF/EFD6D4.asm:152 LDA DEBUG_SOUND_MENU_SELECTED_SE
    case 0xD845: c.execute<0xAD>(0x00B54D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:153 JSL PLAY_SOUND
    case 0xD848: c.execute<0x22>(0xC0ABE0, 4); return true;
    // src/unknown/EF/EFD6D4.asm:154 BRA @UNKNOWN27
    case 0xD84C: c.execute<0x80>(0x000041, 2); return true;
    // src/unknown/EF/EFD6D4.asm:156 LDA PAD_HELD
    case 0xD84E: c.execute<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:157 AND #PAD::LEFT
    case 0xD851: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000200, 3); return true;
    // src/unknown/EF/EFD6D4.asm:157 AND #PAD::LEFT
    // Overlapping static entry reached from 0xEFD851.
    case 0xD853: c.execute<0x02>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:158 BEQ @UNKNOWN23
    case 0xD854: c.execute<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFD6D4.asm:159 DEC DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xD856: c.execute<0xCE>(0x00B54F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:161 LDA PAD_HELD
    case 0xD859: c.execute<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:162 AND #PAD::RIGHT
    case 0xD85C: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000100, 3); return true;
    // src/unknown/EF/EFD6D4.asm:162 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xEFD85C.
    case 0xD85E: c.execute<0x01>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:163 BEQ @UNKNOWN24
    case 0xD85F: c.execute<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFD6D4.asm:163 BEQ @UNKNOWN24
    // Overlapping static entry reached from 0xEFD85E.
    case 0xD860: c.execute<0x03>(0x0000EE, 2); return true;
    // src/unknown/EF/EFD6D4.asm:164 INC DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xD861: c.execute<0xEE>(0x00B54F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:164 INC DEBUG_SOUND_MENU_SELECTED_EFFECT
    // Overlapping static entry reached from 0xEFD860.
    case 0xD862: c.execute<0x4F>(0x4FADB5, 4); return true;
    // src/unknown/EF/EFD6D4.asm:166 LDA DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xD864: c.execute<0xAD>(0x00B54F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:166 LDA DEBUG_SOUND_MENU_SELECTED_EFFECT
    // Overlapping static entry reached from 0xEFD862.
    case 0xD866: c.execute<0xB5>(0x0000C9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:167 CMP #.LOWORD(-1)
    case 0xD867: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFD6D4.asm:167 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD866.
    case 0xD868: c.execute<0xFF>(0x06D0FF, 4); return true;
    // src/unknown/EF/EFD6D4.asm:167 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD867.
    case 0xD869: c.execute<0xFF>(0xA906D0, 4); return true;
    // src/unknown/EF/EFD6D4.asm:168 BNE @UNKNOWN25
    case 0xD86A: c.execute<0xD0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:169 LDA #32
    case 0xD86C: if (c.p & 0x20) c.execute<0xA9>(0x000020, 2); else c.execute<0xA9>(0x000020, 3); return true;
    // src/unknown/EF/EFD6D4.asm:169 LDA #32
    // Overlapping static entry reached from 0xEFD869.
    case 0xD86D: c.execute<0x20>(0x008D00, 3); return true;
    // src/unknown/EF/EFD6D4.asm:169 LDA #32
    // Overlapping static entry reached from 0xEFD86C.
    case 0xD86E: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:170 STA DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xD86F: c.execute<0x8D>(0x00B54F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:170 STA DEBUG_SOUND_MENU_SELECTED_EFFECT
    // Overlapping static entry reached from 0xEFD86D.
    case 0xD870: c.execute<0x4F>(0x4FADB5, 4); return true;
    // src/unknown/EF/EFD6D4.asm:172 LDA DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xD872: c.execute<0xAD>(0x00B54F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:172 LDA DEBUG_SOUND_MENU_SELECTED_EFFECT
    // Overlapping static entry reached from 0xEFD870.
    case 0xD874: c.execute<0xB5>(0x0000C9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:173 CMP #33
    case 0xD875: if (c.p & 0x20) c.execute<0xC9>(0x000021, 2); else c.execute<0xC9>(0x000021, 3); return true;
    // src/unknown/EF/EFD6D4.asm:173 CMP #33
    // Overlapping static entry reached from 0xEFD874.
    case 0xD876: c.execute<0x21>(0x000000, 2); return true;
    // src/unknown/EF/EFD6D4.asm:173 CMP #33
    // Overlapping static entry reached from 0xEFD875.
    case 0xD877: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:174 BNE @UNKNOWN26
    case 0xD878: c.execute<0xD0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:175 LDA #1
    case 0xD87A: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFD6D4.asm:175 LDA #1
    // Overlapping static entry reached from 0xEFD87A.
    case 0xD87C: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:176 STA DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xD87D: c.execute<0x8D>(0x00B54F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:178 LDA PAD_PRESS
    case 0xD880: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:179 AND #PAD::A_BUTTON
    case 0xD883: if (c.p & 0x20) c.execute<0x29>(0x000080, 2); else c.execute<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EFD6D4.asm:179 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xEFD883.
    case 0xD885: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:180 BEQ @UNKNOWN27
    case 0xD886: c.execute<0xF0>(0x000007, 2); return true;
    // src/unknown/EF/EFD6D4.asm:181 LDA DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xD888: c.execute<0xAD>(0x00B54F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:182 JSL UNKNOWN_C0AC0C
    case 0xD88B: c.execute<0x22>(0xC0AC0C, 4); return true;
    // src/unknown/EF/EFD6D4.asm:184 LDA PAD_PRESS
    case 0xD88F: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:185 AND #PAD::X_BUTTON
    case 0xD892: if (c.p & 0x20) c.execute<0x29>(0x000040, 2); else c.execute<0x29>(0x000040, 3); return true;
    // src/unknown/EF/EFD6D4.asm:185 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xEFD892.
    case 0xD894: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:186 BEQ @UNKNOWN28
    case 0xD895: c.execute<0xF0>(0x000008, 2); return true;
    // src/unknown/EF/EFD6D4.asm:187 JSL STOP_MUSIC
    case 0xD897: c.execute<0x22>(0xC0ABC6, 4); return true;
    // src/unknown/EF/EFD6D4.asm:188 JSL PLAY_SOUND_UNKNOWN0
    case 0xD89B: c.execute<0x22>(0xC0AC01, 4); return true;
    // src/unknown/EF/EFD6D4.asm:190 LDA @VIRTUAL04
    case 0xD89F: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFD6D4.asm:191 ASL
    case 0xD8A1: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:192 TAX
    case 0xD8A2: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:193 LDA @VIRTUAL02
    case 0xD8A3: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:194 ASL
    case 0xD8A5: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:195 ASL
    case 0xD8A6: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:196 ASL
    case 0xD8A7: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:197 ASL
    case 0xD8A8: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:198 CLC
    case 0xD8A9: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:199 ADC #84
    case 0xD8AA: if (c.p & 0x20) c.execute<0x69>(0x000054, 2); else c.execute<0x69>(0x000054, 3); return true;
    // src/unknown/EF/EFD6D4.asm:199 ADC #84
    // Overlapping static entry reached from 0xEFD8AA.
    case 0xD8AC: c.execute<0x00>(0x00009D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:200 STA ENTITY_ABS_Y_TABLE,X
    case 0xD8AD: c.execute<0x9D>(0x000BCA, 3); return true;
    // src/unknown/EF/EFD6D4.asm:201 JMP @UNKNOWN0
    case 0xD8B0: c.execute<0x4C>(0x00D6F9, 3); return true;
    // include/macros.asm:25 PLD
    case 0xD8B3: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xD8B4: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xD95E: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xD960: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xD961: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xD962: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFD962.
    case 0xD964: c.execute<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xD965: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xD966: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFD966.
    case 0xD968: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xD969: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xD96B: if (c.p & 0x20) c.execute<0xA9>(0x00007F, 2); else c.execute<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFD96B.
    case 0xD96D: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xD96E: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EFD95E.asm:8 JSL UNKNOWN_C200D9
    case 0xD970: c.execute<0x22>(0xC200D9, 4); return true;
    // src/unknown/EF/EFD95E.asm:9 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xD974: c.execute<0x22>(0xC08756, 4); return true;
    // src/unknown/EF/EFD95E.asm:10 LDA DEBUG_MODE_NUMBER
    case 0xD978: c.execute<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFD95E.asm:11 CMP #1
    case 0xD97B: if (c.p & 0x20) c.execute<0xC9>(0x000001, 2); else c.execute<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFD95E.asm:11 CMP #1
    // Overlapping static entry reached from 0xEFD97B.
    case 0xD97D: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFD95E.asm:12 BNE @UNKNOWN0
    case 0xD97E: c.execute<0xD0>(0x000011, 2); return true;
    // src/unknown/EF/EFD95E.asm:13 JSL LOAD_WINDOW_GFX
    case 0xD980: c.execute<0x22>(0xC47C3F, 4); return true;
    // src/unknown/EF/EFD95E.asm:17 LDA #1
    case 0xD984: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFD95E.asm:17 LDA #1
    // Overlapping static entry reached from 0xEFD984.
    case 0xD986: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFD95E.asm:18 JSL UNKNOWN_C44963
    case 0xD987: c.execute<0x22>(0xC44963, 4); return true;
    // src/unknown/EF/EFD95E.asm:20 JSL UNKNOWN_C47F87
    case 0xD98B: c.execute<0x22>(0xC47F87, 4); return true;
    // src/unknown/EF/EFD95E.asm:21 BRA @UNKNOWN2
    case 0xD98F: c.execute<0x80>(0x000057, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xD991: if (c.p & 0x20) c.execute<0xA9>(0x00005F, 2); else c.execute<0xA9>(0x00EB5F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFD991.
    case 0xD993: c.execute<0xEB>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    case 0xD994: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xD996: if (c.p & 0x20) c.execute<0xA9>(0x0000EF, 2); else c.execute<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFD996.
    case 0xD998: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xD999: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    case 0xD99B: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x006100, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Overlapping static entry reached from 0xEFD99B.
    case 0xD99D: c.execute<0x61>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    case 0xD99E: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x001000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Overlapping static entry reached from 0xEFD99D.
    case 0xD99F: c.execute<0x00>(0x000010, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Overlapping static entry reached from 0xEFD99E.
    case 0xD9A0: c.execute<0x10>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    case 0xD9A1: c.execute<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xEFD9A0.
    case 0xD9A2: c.execute<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    case 0xD9A3: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    case 0xD9A5: c.execute<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFD9A3.
    case 0xD9A6: c.execute<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFD9A6.
    case 0xD9A8: if (c.p & 0x10) c.execute<0xC0>(0x0000A9, 2); else c.execute<0xC0>(0x0000A9, 3); return true;
    // src/unknown/EF/EFD95E.asm:24 LDA #0
    case 0xD9A9: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFD95E.asm:24 LDA #0
    // Overlapping static entry reached from 0xEFD9A8.
    case 0xD9AA: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EFD95E.asm:24 LDA #0
    // Overlapping static entry reached from 0xEFD9A9.
    case 0xD9AB: c.execute<0x00>(0x000087, 2); return true;
    // src/unknown/EF/EFD95E.asm:25 STA [@VIRTUAL06]
    case 0xD9AC: c.execute<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD9AE: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD9B0: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD9B2: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD9B4: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    case 0xD9B6: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x007C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Overlapping static entry reached from 0xEFD9B6.
    case 0xD9B8: c.execute<0x7C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    case 0xD9B9: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Overlapping static entry reached from 0xEFD9B9.
    case 0xD9BB: c.execute<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    case 0xD9BC: c.execute<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    case 0xD9BE: if (c.p & 0x20) c.execute<0xA9>(0x000003, 2); else c.execute<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    case 0xD9C0: c.execute<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFD9BE.
    case 0xD9C1: c.execute<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFD9C1.
    case 0xD9C3: if (c.p & 0x10) c.execute<0xC0>(0x0000AD, 2); else c.execute<0xC0>(0x0059AD, 3); return true;
    // src/unknown/EF/EFD95E.asm:27 LDA DEBUG_MODE_NUMBER
    case 0xD9C4: c.execute<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFD95E.asm:27 LDA DEBUG_MODE_NUMBER
    // Overlapping static entry reached from 0xEFD9C3.
    case 0xD9C5: c.execute<0x59>(0x00C9B5, 3); return true;
    // src/unknown/EF/EFD95E.asm:27 LDA DEBUG_MODE_NUMBER
    // Overlapping static entry reached from 0xEFD9C3.
    case 0xD9C6: c.execute<0xB5>(0x0000C9, 2); return true;
    // src/unknown/EF/EFD95E.asm:28 CMP #3
    case 0xD9C7: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFD95E.asm:28 CMP #3
    // Overlapping static entry reached from 0xEFD9C6.
    case 0xD9C8: c.execute<0x03>(0x000000, 2); return true;
    // src/unknown/EF/EFD95E.asm:28 CMP #3
    // Overlapping static entry reached from 0xEFD9C7.
    case 0xD9C9: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD95E.asm:29 BEQ @UNKNOWN1
    case 0xD9CA: c.execute<0xF0>(0x000008, 2); return true;
    // src/unknown/EF/EFD95E.asm:30 LDA #.LOWORD(-1)
    case 0xD9CC: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFD95E.asm:30 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD9CC.
    case 0xD9CE: c.execute<0xFF>(0x02048D, 4); return true;
    // src/unknown/EF/EFD95E.asm:31 STA PALETTES+4
    case 0xD9CF: c.execute<0x8D>(0x000204, 3); return true;
    // src/unknown/EF/EFD95E.asm:32 BRA @UNKNOWN2
    case 0xD9D2: c.execute<0x80>(0x000014, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xD9D4: if (c.p & 0x20) c.execute<0xA9>(0x00009F, 2); else c.execute<0xA9>(0x00EF9F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFD9D4.
    case 0xD9D6: c.execute<0xEF>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    case 0xD9D7: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xD9D9: if (c.p & 0x20) c.execute<0xA9>(0x0000EF, 2); else c.execute<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFD9D6.
    case 0xD9DA: c.execute<0xEF>(0x108500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFD9D9.
    case 0xD9DB: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xD9DC: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD95E.asm:35 LDX #BPP2PALETTE_SIZE * 3
    case 0xD9DE: if (c.p & 0x10) c.execute<0xA2>(0x000018, 2); else c.execute<0xA2>(0x000018, 3); return true;
    // src/unknown/EF/EFD95E.asm:35 LDX #BPP2PALETTE_SIZE * 3
    // Overlapping static entry reached from 0xEFD9DE.
    case 0xD9E0: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD95E.asm:36 LDA #.LOWORD(PALETTES)
    case 0xD9E1: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000200, 3); return true;
    // src/unknown/EF/EFD95E.asm:36 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xEFD9E1.
    case 0xD9E3: c.execute<0x02>(0x000022, 2); return true;
    // src/unknown/EF/EFD95E.asm:37 JSL MEMCPY16
    case 0xD9E4: c.execute<0x22>(0xC08ED2, 4); return true;
    // src/unknown/EF/EFD95E.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xD9E8: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFD95E.asm:40 LDA #PALETTE_UPLOAD::FULL
    case 0xD9EA: if (c.p & 0x20) c.execute<0xA9>(0x000018, 2); else c.execute<0xA9>(0x008D18, 3); return true;
    // src/unknown/EF/EFD95E.asm:41 STA PALETTE_UPLOAD_MODE
    case 0xD9EC: c.execute<0x8D>(0x000030, 3); return true;
    // src/unknown/EF/EFD95E.asm:41 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xEFD9EA.
    case 0xD9ED: c.execute<0x30>(0x000000, 2); return true;
    // src/unknown/EF/EFD95E.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xD9EF: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    case 0xD9F1: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xD9F2: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xD9F3: c.execute<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EFD9F3.asm:5 LDA DEBUG_MODE_NUMBER
    case 0xD9F5: c.execute<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFD9F3.asm:6 BEQ @UNKNOWN0
    case 0xD9F8: c.execute<0xF0>(0x000006, 2); return true;
    // src/unknown/EF/EFD9F3.asm:7 JSL UNKNOWN_EFD95E
    case 0xD9FA: c.execute<0x22>(0xEFD95E, 4); return true;
    // src/unknown/EF/EFD9F3.asm:8 BRA @UNKNOWN1
    case 0xD9FE: c.execute<0x80>(0x000004, 2); return true;
    // src/unknown/EF/EFD9F3.asm:10 JSL UNKNOWN_C47F87
    case 0xDA00: c.execute<0x22>(0xC47F87, 4); return true;
    // include/macros.asm:30 RTL
    case 0xDA04: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xDA05: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xDA07: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xDA08: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xDA09: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFDA09.
    case 0xDA0B: c.execute<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xDA0C: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xDA0D: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFDA0D.
    case 0xDA0F: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xDA10: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xDA12: if (c.p & 0x20) c.execute<0xA9>(0x00007F, 2); else c.execute<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFDA12.
    case 0xDA14: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xDA15: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EFDA05.asm:8 JSL UNKNOWN_C08726
    case 0xDA17: c.execute<0x22>(0xC08726, 4); return true;
    // src/unknown/EF/EFDA05.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xDA1B: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFDA05.asm:10 LDA #$17
    case 0xDA1D: if (c.p & 0x20) c.execute<0xA9>(0x000017, 2); else c.execute<0xA9>(0x008D17, 3); return true;
    // src/unknown/EF/EFDA05.asm:11 STA TM_MIRROR
    case 0xDA1F: c.execute<0x8D>(0x00001A, 3); return true;
    // src/unknown/EF/EFDA05.asm:11 STA TM_MIRROR
    // Overlapping static entry reached from 0xEFDA1D.
    case 0xDA20: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:11 STA TM_MIRROR
    // Overlapping static entry reached from 0xEFDA20.
    case 0xDA21: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFDA05.asm:12 LDA #$2F
    case 0xDA22: if (c.p & 0x20) c.execute<0xA9>(0x00002F, 2); else c.execute<0xA9>(0x008D2F, 3); return true;
    // src/unknown/EF/EFDA05.asm:13 STA SPRITEMAP_BANK
    case 0xDA24: c.execute<0x8D>(0x00000B, 3); return true;
    // src/unknown/EF/EFDA05.asm:13 STA SPRITEMAP_BANK
    // Overlapping static entry reached from 0xEFDA22.
    case 0xDA25: c.execute<0x0B>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:13 STA SPRITEMAP_BANK
    // Overlapping static entry reached from 0xEFDA25.
    case 0xDA26: c.execute<0x00>(0x0000C2, 2); return true;
    // src/unknown/EF/EFDA05.asm:14 REP #PROC_FLAGS::ACCUM8
    case 0xDA27: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFDA05.asm:15 STZ UNREAD_7EB55D
    case 0xDA29: c.execute<0x9C>(0x00B55D, 3); return true;
    // src/unknown/EF/EFDA05.asm:16 STZ DEBUG_MENU_BUTTONS_PRESSED
    case 0xDA2C: c.execute<0x9C>(0x00B557, 3); return true;
    // src/unknown/EF/EFDA05.asm:17 STZ DEBUG_MENU_CURSOR_POSITION
    case 0xDA2F: c.execute<0x9C>(0x00B555, 3); return true;
    // src/unknown/EF/EFDA05.asm:18 STZ UNREAD_7EB551
    case 0xDA32: c.execute<0x9C>(0x00B551, 3); return true;
    // src/unknown/EF/EFDA05.asm:19 STZ VIEW_ATTRIBUTE_MODE
    case 0xDA35: c.execute<0x9C>(0x00B55F, 3); return true;
    // src/unknown/EF/EFDA05.asm:20 LDA #9
    case 0xDA38: if (c.p & 0x20) c.execute<0xA9>(0x000009, 2); else c.execute<0xA9>(0x000009, 3); return true;
    // src/unknown/EF/EFDA05.asm:20 LDA #9
    // Overlapping static entry reached from 0xEFDA38.
    case 0xDA3A: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:21 JSL UNKNOWN_C08D79
    case 0xDA3B: c.execute<0x22>(0xC08D79, 4); return true;
    // src/unknown/EF/EFDA05.asm:22 LDY #VRAM::OVERWORLD_LAYER_1_TILES
    case 0xDA3F: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFDA05.asm:22 LDY #VRAM::OVERWORLD_LAYER_1_TILES
    // Overlapping static entry reached from 0xEFDA3F.
    case 0xDA41: c.execute<0x00>(0x0000A2, 2); return true;
    // src/unknown/EF/EFDA05.asm:23 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP
    case 0xDA42: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x003800, 3); return true;
    // src/unknown/EF/EFDA05.asm:23 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP
    // Overlapping static entry reached from 0xEFDA42.
    case 0xDA44: c.execute<0x38>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:24 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xDA45: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFDA05.asm:24 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xEFDA45.
    case 0xDA47: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:25 JSL SET_BG1_VRAM_LOCATION
    case 0xDA48: c.execute<0x22>(0xC08D9E, 4); return true;
    // src/unknown/EF/EFDA05.asm:26 LDY #VRAM::OVERWORLD_LAYER_2_TILES
    case 0xDA4C: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x002000, 3); return true;
    // src/unknown/EF/EFDA05.asm:26 LDY #VRAM::OVERWORLD_LAYER_2_TILES
    // Overlapping static entry reached from 0xEFDA4C.
    case 0xDA4E: c.execute<0x20>(0x0000A2, 3); return true;
    // src/unknown/EF/EFDA05.asm:27 LDX #VRAM::OVERWORLD_LAYER_2_TILEMAP
    case 0xDA4F: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x005800, 3); return true;
    // src/unknown/EF/EFDA05.asm:27 LDX #VRAM::OVERWORLD_LAYER_2_TILEMAP
    // Overlapping static entry reached from 0xEFDA4F.
    case 0xDA51: c.execute<0x58>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:28 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xDA52: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFDA05.asm:28 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xEFDA52.
    case 0xDA54: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:29 JSL SET_BG2_VRAM_LOCATION
    case 0xDA55: c.execute<0x22>(0xC08DDE, 4); return true;
    // src/unknown/EF/EFDA05.asm:30 LDY #VRAM::TEXT_LAYER_TILES
    case 0xDA59: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x006000, 3); return true;
    // src/unknown/EF/EFDA05.asm:30 LDY #VRAM::TEXT_LAYER_TILES
    // Overlapping static entry reached from 0xEFDA59.
    case 0xDA5B: c.execute<0x60>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:31 LDX #VRAM::TEXT_LAYER_TILEMAP
    case 0xDA5C: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x007C00, 3); return true;
    // src/unknown/EF/EFDA05.asm:31 LDX #VRAM::TEXT_LAYER_TILEMAP
    // Overlapping static entry reached from 0xEFDA5C.
    case 0xDA5E: c.execute<0x7C>(0x0000A9, 3); return true;
    // src/unknown/EF/EFDA05.asm:32 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xDA5F: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFDA05.asm:32 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xEFDA5F.
    case 0xDA61: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:33 JSL SET_BG3_VRAM_LOCATION
    case 0xDA62: c.execute<0x22>(0xC08E1C, 4); return true;
    // src/unknown/EF/EFDA05.asm:34 LDA #$02
    case 0xDA66: if (c.p & 0x20) c.execute<0xA9>(0x000002, 2); else c.execute<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EFDA05.asm:34 LDA #$02
    // Overlapping static entry reached from 0xEFDA66.
    case 0xDA68: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:35 JSL SET_OAM_SIZE
    case 0xDA69: c.execute<0x22>(0xC08D92, 4); return true;
    // src/unknown/EF/EFDA05.asm:36 LDA #0
    case 0xDA6D: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFDA05.asm:36 LDA #0
    // Overlapping static entry reached from 0xEFDA6D.
    case 0xDA6F: c.execute<0x00>(0x000087, 2); return true;
    // src/unknown/EF/EFDA05.asm:37 STA [@VIRTUAL06]
    case 0xDA70: c.execute<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xDA72: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xDA74: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xDA76: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xDA78: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFDA05.asm:39 LDY #0
    case 0xDA7A: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFDA05.asm:39 LDY #0
    // Overlapping static entry reached from 0xEFDA7A.
    case 0xDA7C: c.execute<0x00>(0x0000BB, 2); return true;
    // src/unknown/EF/EFDA05.asm:40 TYX
    case 0xDA7D: c.execute<0xBB>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xDA7E: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFDA05.asm:42 LDA #3
    case 0xDA80: if (c.p & 0x20) c.execute<0xA9>(0x000003, 2); else c.execute<0xA9>(0x002203, 3); return true;
    // src/unknown/EF/EFDA05.asm:43 JSL PREPARE_VRAM_COPY
    case 0xDA82: c.execute<0x22>(0xC08616, 4); return true;
    // src/unknown/EF/EFDA05.asm:43 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFDA80.
    case 0xDA83: c.execute<0x16>(0x000086, 2); return true;
    // src/unknown/EF/EFDA05.asm:43 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFDA83.
    case 0xDA85: if (c.p & 0x10) c.execute<0xC0>(0x0000A9, 2); else c.execute<0xC0>(0x00BBA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xDA86: if (c.p & 0x20) c.execute<0xA9>(0x0000BB, 2); else c.execute<0xA9>(0x00F1BB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFDA85.
    case 0xDA87: c.execute<0xBB>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFDA86.
    case 0xDA88: c.execute<0xF1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xDA89: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xEFDA88.
    case 0xDA8A: c.execute<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xDA8B: if (c.p & 0x20) c.execute<0xA9>(0x0000EF, 2); else c.execute<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFDA8B.
    case 0xDA8D: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xDA8E: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFDA05.asm:46 LDX #BPP4PALETTE_SIZE * 16
    case 0xDA90: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000200, 3); return true;
    // src/unknown/EF/EFDA05.asm:46 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xEFDA90.
    case 0xDA92: c.execute<0x02>(0x0000A9, 2); return true;
    // src/unknown/EF/EFDA05.asm:47 LDA #.LOWORD(PALETTES)
    case 0xDA93: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000200, 3); return true;
    // src/unknown/EF/EFDA05.asm:47 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xEFDA93.
    case 0xDA95: c.execute<0x02>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:48 JSL MEMCPY16
    case 0xDA96: c.execute<0x22>(0xC08ED2, 4); return true;
    // src/unknown/EF/EFDA05.asm:49 JSL UNKNOWN_EFD95E
    case 0xDA9A: c.execute<0x22>(0xEFD95E, 4); return true;
    // src/unknown/EF/EFDA05.asm:50 STZ ENTITY_ALLOCATION_MIN_SLOT
    case 0xDA9E: c.execute<0x9C>(0x000A4C, 3); return true;
    // src/unknown/EF/EFDA05.asm:51 LDA #1
    case 0xDAA1: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFDA05.asm:51 LDA #1
    // Overlapping static entry reached from 0xEFDAA1.
    case 0xDAA3: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFDA05.asm:52 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xDAA4: c.execute<0x8D>(0x000A4E, 3); return true;
    // src/unknown/EF/EFDA05.asm:53 LDY #52
    case 0xDAA7: if (c.p & 0x10) c.execute<0xA0>(0x000034, 2); else c.execute<0xA0>(0x000034, 3); return true;
    // src/unknown/EF/EFDA05.asm:53 LDY #52
    // Overlapping static entry reached from 0xEFDAA7.
    case 0xDAA9: c.execute<0x00>(0x0000BB, 2); return true;
    // src/unknown/EF/EFDA05.asm:54 TYX
    case 0xDAAA: c.execute<0xBB>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:55 LDA #EVENT_SCRIPT::EVENT_000
    case 0xDAAB: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFDA05.asm:55 LDA #EVENT_SCRIPT::EVENT_000
    // Overlapping static entry reached from 0xEFDAAB.
    case 0xDAAD: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:56 JSL INIT_ENTITY_WIPE
    case 0xDAAE: c.execute<0x22>(0xC092F5, 4); return true;
    // src/unknown/EF/EFDA05.asm:57 STA DEBUG_CURSOR_ENTITY
    case 0xDAB2: c.execute<0x8D>(0x00B553, 3); return true;
    // src/unknown/EF/EFDA05.asm:58 STZ NPC_SPAWNS_ENABLED
    case 0xDAB5: c.execute<0x9C>(0x004A58, 3); return true;
    // src/unknown/EF/EFDA05.asm:59 STZ ENEMY_SPAWNS_ENABLED
    case 0xDAB8: c.execute<0x9C>(0x004A5A, 3); return true;
    // include/macros.asm:25 PLD
    case 0xDABB: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xDABC: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xDABD: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xDABF: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xDAC0: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xDAC1: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xDAC2: if (c.p & 0x20) c.execute<0x69>(0x0000EA, 2); else c.execute<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFDAC2.
    case 0xDAC4: c.execute<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xDAC5: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xDAC6: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:13 STX @LOCAL03
    case 0xDAC7: c.execute<0x86>(0x000014, 2); return true;
    // src/unknown/EF/EFDABD.asm:13 STX @LOCAL03
    // Overlapping static entry reached from 0xEFDAC4.
    case 0xDAC8: c.execute<0x14>(0x000085, 2); return true;
    // src/unknown/EF/EFDABD.asm:14 STA @VIRTUAL04
    case 0xDAC9: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFDABD.asm:14 STA @VIRTUAL04
    // Overlapping static entry reached from 0xEFDAC8.
    case 0xDACA: c.execute<0x04>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xDACB: c.execute<0xA5>(0x000024, 2); return true;
    // include/macros.asm:836 LDA src
    // Overlapping static entry reached from 0xEFDACA.
    case 0xDACC: c.execute<0x24>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xDACD: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Overlapping static entry reached from 0xEFDACC.
    case 0xDACE: c.execute<0x06>(0x0000A5, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xDACF: c.execute<0xA5>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Overlapping static entry reached from 0xEFDACE.
    case 0xDAD0: c.execute<0x26>(0x000085, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xDAD1: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Overlapping static entry reached from 0xEFDAD0.
    case 0xDAD2: c.execute<0x08>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:16 LDA #0
    case 0xDAD3: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFDABD.asm:16 LDA #0
    // Overlapping static entry reached from 0xEFDAD3.
    case 0xDAD5: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFDABD.asm:17 STA @VIRTUAL02
    case 0xDAD6: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFDABD.asm:18 LDA #64
    case 0xDAD8: if (c.p & 0x20) c.execute<0xA9>(0x000040, 2); else c.execute<0xA9>(0x000040, 3); return true;
    // src/unknown/EF/EFDABD.asm:18 LDA #64
    // Overlapping static entry reached from 0xEFDAD8.
    case 0xDADA: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDABD.asm:19 JSL SBRK
    case 0xDADB: c.execute<0x22>(0xC086DE, 4); return true;
    // src/unknown/EF/EFDABD.asm:20 TAY
    case 0xDADF: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:21 TYX
    case 0xDAE0: c.execute<0xBB>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:22 BRA @UNKNOWN1
    case 0xDAE1: c.execute<0x80>(0x000012, 2); return true;
    // src/unknown/EF/EFDABD.asm:24 AND #$00FF
    case 0xDAE3: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFDABD.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xEFDAE3.
    case 0xDAE5: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EFDABD.asm:25 CLC
    case 0xDAE6: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:26 ADC #$2000
    case 0xDAE7: if (c.p & 0x20) c.execute<0x69>(0x000000, 2); else c.execute<0x69>(0x002000, 3); return true;
    // src/unknown/EF/EFDABD.asm:26 ADC #$2000
    // Overlapping static entry reached from 0xEFDAE7.
    case 0xDAE9: c.execute<0x20>(0x00009D, 3); return true;
    // src/unknown/EF/EFDABD.asm:27 STA __BSS_START__,X
    case 0xDAEA: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFDABD.asm:27 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFDAE9.
    case 0xDAEC: c.execute<0x00>(0x0000E6, 2); return true;
    // src/unknown/EF/EFDABD.asm:28 INC @VIRTUAL06
    case 0xDAED: c.execute<0xE6>(0x000006, 2); return true;
    // src/unknown/EF/EFDABD.asm:29 INX
    case 0xDAEF: c.execute<0xE8>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:30 INX
    case 0xDAF0: c.execute<0xE8>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:31 INC @VIRTUAL02
    case 0xDAF1: c.execute<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EFDABD.asm:32 INC @VIRTUAL02
    case 0xDAF3: c.execute<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EFDABD.asm:34 LDA [@VIRTUAL06]
    case 0xDAF5: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/EF/EFDABD.asm:35 AND #$00FF
    case 0xDAF7: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFDABD.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xEFDAF7.
    case 0xDAF9: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFDABD.asm:36 BNE @UNKNOWN0
    case 0xDAFA: c.execute<0xD0>(0x0000E7, 2); return true;
    // src/unknown/EF/EFDABD.asm:37 LDA @LOCAL03
    case 0xDAFC: c.execute<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EFDABD.asm:38 ASL
    case 0xDAFE: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:39 ASL
    case 0xDAFF: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:40 ASL
    case 0xDB00: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:41 ASL
    case 0xDB01: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:42 ASL
    case 0xDB02: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:43 CLC
    case 0xDB03: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:44 ADC @VIRTUAL04
    case 0xDB04: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/EF/EFDABD.asm:45 CLC
    case 0xDB06: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:46 ADC #$7C00
    case 0xDB07: if (c.p & 0x20) c.execute<0x69>(0x000000, 2); else c.execute<0x69>(0x007C00, 3); return true;
    // src/unknown/EF/EFDABD.asm:46 ADC #$7C00
    // Overlapping static entry reached from 0xEFDB07.
    case 0xDB09: c.execute<0x7C>(0x001285, 3); return true;
    // src/unknown/EF/EFDABD.asm:47 STA @LOCAL02
    case 0xDB0A: c.execute<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EFDABD.asm:48 LDA #^STACK_START
    case 0xDB0C: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/unknown/EF/EFDABD.asm:48 LDA #^STACK_START
    // Overlapping static entry reached from 0xEFDB0C.
    case 0xDB0E: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFDABD.asm:49 STA @LOCAL00
    case 0xDB0F: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFDABD.asm:50 LDA @LOCAL02
    case 0xDB11: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EFDABD.asm:51 STA @LOCAL01
    case 0xDB13: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFDABD.asm:52 LDX @VIRTUAL02
    case 0xDB15: c.execute<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFDABD.asm:53 SEP #PROC_FLAGS::ACCUM8
    case 0xDB17: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFDABD.asm:54 LDA #0
    case 0xDB19: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/unknown/EF/EFDABD.asm:55 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xDB1B: c.execute<0x22>(0xC0862E, 4); return true;
    // src/unknown/EF/EFDABD.asm:55 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDB19.
    case 0xDB1C: c.execute<0x2E>(0x00C086, 3); return true;
    // include/macros.asm:25 PLD
    case 0xDB1F: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xDB20: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xDB21: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xDB23: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xDB24: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xDB25: if (c.p & 0x20) c.execute<0x69>(0x0000EC, 2); else c.execute<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFDB25.
    case 0xDB27: c.execute<0xFF>(0xB5A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xDB28: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xDB29: if (c.p & 0x20) c.execute<0xA9>(0x0000B5, 2); else c.execute<0xA9>(0x00D8B5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFDB29.
    case 0xDB2B: c.execute<0xD8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    case 0xDB2C: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xDB2E: if (c.p & 0x20) c.execute<0xA9>(0x0000EF, 2); else c.execute<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFDB2E.
    case 0xDB30: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xDB31: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_menu_options.asm:9 LDX #0
    case 0xDB33: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/system/debug/display_menu_options.asm:9 LDX #0
    // Overlapping static entry reached from 0xEFDB33.
    case 0xDB35: c.execute<0x00>(0x00008A, 2); return true;
    // src/system/debug/display_menu_options.asm:10 TXA
    case 0xDB36: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/debug/display_menu_options.asm:11 JSR UNKNOWN_EFDABD
    case 0xDB37: c.execute<0x20>(0x00DABD, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xDB3A: if (c.p & 0x20) c.execute<0xA9>(0x0000D6, 2); else c.execute<0xA9>(0x00D8D6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFDB3A.
    case 0xDB3C: c.execute<0xD8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    case 0xDB3D: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xDB3F: if (c.p & 0x20) c.execute<0xA9>(0x0000EF, 2); else c.execute<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFDB3F.
    case 0xDB41: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xDB42: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_menu_options.asm:13 LDX #3
    case 0xDB44: if (c.p & 0x10) c.execute<0xA2>(0x000003, 2); else c.execute<0xA2>(0x000003, 3); return true;
    // src/system/debug/display_menu_options.asm:13 LDX #3
    // Overlapping static entry reached from 0xEFDB44.
    case 0xDB46: c.execute<0x00>(0x0000A9, 2); return true;
    // src/system/debug/display_menu_options.asm:14 LDA #11
    case 0xDB47: if (c.p & 0x20) c.execute<0xA9>(0x00000B, 2); else c.execute<0xA9>(0x00000B, 3); return true;
    // src/system/debug/display_menu_options.asm:14 LDA #11
    // Overlapping static entry reached from 0xEFDB47.
    case 0xDB49: c.execute<0x00>(0x000020, 2); return true;
    // src/system/debug/display_menu_options.asm:15 JSR UNKNOWN_EFDABD
    case 0xDB4A: c.execute<0x20>(0x00DABD, 3); return true;
    // src/system/debug/display_menu_options.asm:16 LDA #6
    case 0xDB4D: if (c.p & 0x20) c.execute<0xA9>(0x000006, 2); else c.execute<0xA9>(0x000006, 3); return true;
    // src/system/debug/display_menu_options.asm:16 LDA #6
    // Overlapping static entry reached from 0xEFDB4D.
    case 0xDB4F: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_menu_options.asm:17 STA @VIRTUAL02
    case 0xDB50: c.execute<0x85>(0x000002, 2); return true;
    // src/system/debug/display_menu_options.asm:18 LDY #0
    case 0xDB52: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/system/debug/display_menu_options.asm:18 LDY #0
    // Overlapping static entry reached from 0xEFDB52.
    case 0xDB54: c.execute<0x00>(0x000084, 2); return true;
    // src/system/debug/display_menu_options.asm:19 STY @LOCAL01
    case 0xDB55: c.execute<0x84>(0x000012, 2); return true;
    // src/system/debug/display_menu_options.asm:20 BRA @UNKNOWN1
    case 0xDB57: c.execute<0x80>(0x000035, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xDB59: if (c.p & 0x20) c.execute<0xA9>(0x0000D6, 2); else c.execute<0xA9>(0x00D8D6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFDB59.
    case 0xDB5B: c.execute<0xD8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    case 0xDB5C: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xDB5E: if (c.p & 0x20) c.execute<0xA9>(0x0000EF, 2); else c.execute<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFDB5E.
    case 0xDB60: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xDB61: c.execute<0x85>(0x000008, 2); return true;
    // src/system/debug/display_menu_options.asm:23 TYA
    case 0xDB63: c.execute<0x98>(0x000000, 1); return true;
    // include/macros.asm:594 STA scratch
    case 0xDB64: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    case 0xDB66: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    case 0xDB67: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    case 0xDB68: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    case 0xDB69: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    case 0xDB6A: c.execute<0x65>(0x000004, 2); return true;
    // src/system/debug/display_menu_options.asm:25 CLC
    case 0xDB6C: c.execute<0x18>(0x000000, 1); return true;
    // src/system/debug/display_menu_options.asm:26 ADC #17
    case 0xDB6D: if (c.p & 0x20) c.execute<0x69>(0x000011, 2); else c.execute<0x69>(0x000011, 3); return true;
    // src/system/debug/display_menu_options.asm:26 ADC #17
    // Overlapping static entry reached from 0xEFDB6D.
    case 0xDB6F: c.execute<0x00>(0x000018, 2); return true;
    // src/system/debug/display_menu_options.asm:27 CLC
    case 0xDB70: c.execute<0x18>(0x000000, 1); return true;
    // src/system/debug/display_menu_options.asm:28 ADC @VIRTUAL06
    case 0xDB71: c.execute<0x65>(0x000006, 2); return true;
    // src/system/debug/display_menu_options.asm:29 STA @VIRTUAL06
    case 0xDB73: c.execute<0x85>(0x000006, 2); return true;
    // src/system/debug/display_menu_options.asm:30 STA @LOCAL00
    case 0xDB75: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_menu_options.asm:31 LDA @VIRTUAL06+2
    case 0xDB77: c.execute<0xA5>(0x000008, 2); return true;
    // src/system/debug/display_menu_options.asm:32 STA @LOCAL00+2
    case 0xDB79: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_menu_options.asm:33 LDX @VIRTUAL02
    case 0xDB7B: c.execute<0xA6>(0x000002, 2); return true;
    // src/system/debug/display_menu_options.asm:34 LDA #8
    case 0xDB7D: if (c.p & 0x20) c.execute<0xA9>(0x000008, 2); else c.execute<0xA9>(0x000008, 3); return true;
    // src/system/debug/display_menu_options.asm:34 LDA #8
    // Overlapping static entry reached from 0xEFDB7D.
    case 0xDB7F: c.execute<0x00>(0x000020, 2); return true;
    // src/system/debug/display_menu_options.asm:35 JSR UNKNOWN_EFDABD
    case 0xDB80: c.execute<0x20>(0x00DABD, 3); return true;
    // src/system/debug/display_menu_options.asm:36 INC @VIRTUAL02
    case 0xDB83: c.execute<0xE6>(0x000002, 2); return true;
    // src/system/debug/display_menu_options.asm:37 INC @VIRTUAL02
    case 0xDB85: c.execute<0xE6>(0x000002, 2); return true;
    // src/system/debug/display_menu_options.asm:38 INC @VIRTUAL02
    case 0xDB87: c.execute<0xE6>(0x000002, 2); return true;
    // src/system/debug/display_menu_options.asm:39 LDY @LOCAL01
    case 0xDB89: c.execute<0xA4>(0x000012, 2); return true;
    // src/system/debug/display_menu_options.asm:40 INY
    case 0xDB8B: c.execute<0xC8>(0x000000, 1); return true;
    // src/system/debug/display_menu_options.asm:41 STY @LOCAL01
    case 0xDB8C: c.execute<0x84>(0x000012, 2); return true;
    // src/system/debug/display_menu_options.asm:43 CPY #7
    case 0xDB8E: if (c.p & 0x10) c.execute<0xC0>(0x000007, 2); else c.execute<0xC0>(0x000007, 3); return true;
    // src/system/debug/display_menu_options.asm:43 CPY #7
    // Overlapping static entry reached from 0xEFDB8E.
    case 0xDB90: c.execute<0x00>(0x000090, 2); return true;
    // src/system/debug/display_menu_options.asm:44 BCC @UNKNOWN0
    case 0xDB91: c.execute<0x90>(0x0000C6, 2); return true;
    // include/macros.asm:25 PLD
    case 0xDB93: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xDB94: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xDB95: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xDB97: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xDB98: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xDB99: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xDB9A: if (c.p & 0x20) c.execute<0x69>(0x0000EC, 2); else c.execute<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFDB9A.
    case 0xDB9C: c.execute<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xDB9D: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xDB9E: c.execute<0x68>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:11 TAY
    case 0xDB9F: c.execute<0xA8>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:12 STY @LOCAL02
    case 0xDBA0: c.execute<0x84>(0x000012, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:13 LDA #8
    case 0xDBA2: if (c.p & 0x20) c.execute<0xA9>(0x000008, 2); else c.execute<0xA9>(0x000008, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:13 LDA #8
    // Overlapping static entry reached from 0xEFDBA2.
    case 0xDBA4: c.execute<0x00>(0x000022, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:14 JSL SBRK
    case 0xDBA5: c.execute<0x22>(0xC086DE, 4); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:15 STA @VIRTUAL02
    case 0xDBA9: c.execute<0x85>(0x000002, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:16 LDX #3
    case 0xDBAB: if (c.p & 0x10) c.execute<0xA2>(0x000003, 2); else c.execute<0xA2>(0x000003, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:16 LDX #3
    // Overlapping static entry reached from 0xEFDBAB.
    case 0xDBAD: c.execute<0x00>(0x000086, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:17 STX @LOCAL01
    case 0xDBAE: c.execute<0x86>(0x000010, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:18 BRA @UNKNOWN3
    case 0xDBB0: c.execute<0x80>(0x000035, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:20 LDY @LOCAL02
    case 0xDBB2: c.execute<0xA4>(0x000012, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:21 TYA
    case 0xDBB4: c.execute<0x98>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:22 AND #$000F
    case 0xDBB5: if (c.p & 0x20) c.execute<0x29>(0x00000F, 2); else c.execute<0x29>(0x00000F, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:22 AND #$000F
    // Overlapping static entry reached from 0xEFDBB5.
    case 0xDBB7: c.execute<0x00>(0x0000C9, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:23 CMP #10
    case 0xDBB8: if (c.p & 0x20) c.execute<0xC9>(0x00000A, 2); else c.execute<0xC9>(0x00000A, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:23 CMP #10
    // Overlapping static entry reached from 0xEFDBB8.
    case 0xDBBA: c.execute<0x00>(0x000090, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:24 BCC @UNKNOWN1
    case 0xDBBB: c.execute<0x90>(0x000008, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:25 CLC
    case 0xDBBD: c.execute<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:26 ADC #7
    case 0xDBBE: if (c.p & 0x20) c.execute<0x69>(0x000007, 2); else c.execute<0x69>(0x000007, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:26 ADC #7
    // Overlapping static entry reached from 0xEFDBBE.
    case 0xDBC0: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:27 STA @LOCAL00
    case 0xDBC1: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:28 BRA @UNKNOWN2
    case 0xDBC3: c.execute<0x80>(0x000002, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:30 STA @LOCAL00
    case 0xDBC5: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:32 TXA
    case 0xDBC7: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:33 ASL
    case 0xDBC8: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:34 STA @VIRTUAL04
    case 0xDBC9: c.execute<0x85>(0x000004, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:35 LDA @VIRTUAL02
    case 0xDBCB: c.execute<0xA5>(0x000002, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:36 CLC
    case 0xDBCD: c.execute<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:37 ADC @VIRTUAL04
    case 0xDBCE: c.execute<0x65>(0x000004, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:38 TAX
    case 0xDBD0: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:39 LDA @LOCAL00
    case 0xDBD1: c.execute<0xA5>(0x00000E, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:40 CLC
    case 0xDBD3: c.execute<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:41 ADC #$2030 ;0 tile, priority
    case 0xDBD4: if (c.p & 0x20) c.execute<0x69>(0x000030, 2); else c.execute<0x69>(0x002030, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:41 ADC #$2030 ;0 tile, priority
    // Overlapping static entry reached from 0xEFDBD4.
    case 0xDBD6: c.execute<0x20>(0x00009D, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:42 STA __BSS_START__,X
    case 0xDBD7: c.execute<0x9D>(0x000000, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:42 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFDBD6.
    case 0xDBD9: c.execute<0x00>(0x000098, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:43 TYA
    case 0xDBDA: c.execute<0x98>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:44 LSR
    case 0xDBDB: c.execute<0x4A>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:45 LSR
    case 0xDBDC: c.execute<0x4A>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:46 LSR
    case 0xDBDD: c.execute<0x4A>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:47 LSR
    case 0xDBDE: c.execute<0x4A>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:48 TAY
    case 0xDBDF: c.execute<0xA8>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:49 STY @LOCAL02
    case 0xDBE0: c.execute<0x84>(0x000012, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:50 LDX @LOCAL01
    case 0xDBE2: c.execute<0xA6>(0x000010, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:51 DEX
    case 0xDBE4: c.execute<0xCA>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:52 STX @LOCAL01
    case 0xDBE5: c.execute<0x86>(0x000010, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:54 CPX #.LOWORD(-1)
    case 0xDBE7: if (c.p & 0x10) c.execute<0xE0>(0x0000FF, 2); else c.execute<0xE0>(0x00FFFF, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:54 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFDBE7.
    case 0xDBE9: c.execute<0xFF>(0xA5C6D0, 4); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:55 BNE @UNKNOWN0
    case 0xDBEA: c.execute<0xD0>(0x0000C6, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:56 LDA @VIRTUAL02
    case 0xDBEC: c.execute<0xA5>(0x000002, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:56 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xEFDBE9.
    case 0xDBED: c.execute<0x02>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    case 0xDBEE: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xDBEF: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xDBF0: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xDBF2: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xDBF3: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xDBF4: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xDBF5: if (c.p & 0x20) c.execute<0x69>(0x0000E8, 2); else c.execute<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFDBF5.
    case 0xDBF7: c.execute<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xDBF8: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xDBF9: c.execute<0x68>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:13 STA @VIRTUAL04
    case 0xDBFA: c.execute<0x85>(0x000004, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:13 STA @VIRTUAL04
    // Overlapping static entry reached from 0xEFDBF7.
    case 0xDBFB: c.execute<0x04>(0x000085, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:14 STA @LOCAL04
    case 0xDBFC: c.execute<0x85>(0x000016, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:14 STA @LOCAL04
    // Overlapping static entry reached from 0xEFDBFB.
    case 0xDBFD: c.execute<0x16>(0x0000A0, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:15 LDY #1
    case 0xDBFE: if (c.p & 0x10) c.execute<0xA0>(0x000001, 2); else c.execute<0xA0>(0x000001, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:15 LDY #1
    // Overlapping static entry reached from 0xEFDBFD.
    case 0xDBFF: c.execute<0x01>(0x000000, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:15 LDY #1
    // Overlapping static entry reached from 0xEFDBFE.
    case 0xDC00: c.execute<0x00>(0x000084, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:16 STY @LOCAL03
    case 0xDC01: c.execute<0x84>(0x000014, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:17 LDA #8
    case 0xDC03: if (c.p & 0x20) c.execute<0xA9>(0x000008, 2); else c.execute<0xA9>(0x000008, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:17 LDA #8
    // Overlapping static entry reached from 0xEFDC03.
    case 0xDC05: c.execute<0x00>(0x000022, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:18 JSL SBRK
    case 0xDC06: c.execute<0x22>(0xC086DE, 4); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:19 STA @VIRTUAL02
    case 0xDC0A: c.execute<0x85>(0x000002, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:20 STA @LOCAL02
    case 0xDC0C: c.execute<0x85>(0x000012, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:21 LDX #3
    case 0xDC0E: if (c.p & 0x10) c.execute<0xA2>(0x000003, 2); else c.execute<0xA2>(0x000003, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:21 LDX #3
    // Overlapping static entry reached from 0xEFDC0E.
    case 0xDC10: c.execute<0x00>(0x000086, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:22 STX @LOCAL01
    case 0xDC11: c.execute<0x86>(0x000010, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:23 BRA @UNKNOWN3
    case 0xDC13: c.execute<0x80>(0x000049, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:25 LDY @LOCAL03
    case 0xDC15: c.execute<0xA4>(0x000014, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:26 LDA @LOCAL04
    case 0xDC17: c.execute<0xA5>(0x000016, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:27 STA @VIRTUAL04
    case 0xDC19: c.execute<0x85>(0x000004, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:28 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xDC1B: c.execute<0x22>(0xC0915B, 4); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:29 LDY #10
    case 0xDC1F: if (c.p & 0x10) c.execute<0xA0>(0x00000A, 2); else c.execute<0xA0>(0x00000A, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:29 LDY #10
    // Overlapping static entry reached from 0xEFDC1F.
    case 0xDC21: c.execute<0x00>(0x000022, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:30 JSL MODULUS16
    case 0xDC22: c.execute<0x22>(0xC09231, 4); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:31 CMP #10
    case 0xDC26: if (c.p & 0x20) c.execute<0xC9>(0x00000A, 2); else c.execute<0xC9>(0x00000A, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:31 CMP #10
    // Overlapping static entry reached from 0xEFDC26.
    case 0xDC28: c.execute<0x00>(0x000090, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:32 BCC @UNKNOWN1
    case 0xDC29: c.execute<0x90>(0x000008, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:33 CLC
    case 0xDC2B: c.execute<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:34 ADC #7
    case 0xDC2C: if (c.p & 0x20) c.execute<0x69>(0x000007, 2); else c.execute<0x69>(0x000007, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:34 ADC #7
    // Overlapping static entry reached from 0xEFDC2C.
    case 0xDC2E: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:35 STA @LOCAL00
    case 0xDC2F: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:36 BRA @UNKNOWN2
    case 0xDC31: c.execute<0x80>(0x000002, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:38 STA @LOCAL00
    case 0xDC33: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:40 TXA
    case 0xDC35: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:41 ASL
    case 0xDC36: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:42 PHA
    case 0xDC37: c.execute<0x48>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:43 LDA @LOCAL02
    case 0xDC38: c.execute<0xA5>(0x000012, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:44 STA @VIRTUAL02
    case 0xDC3A: c.execute<0x85>(0x000002, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:45 PLY
    case 0xDC3C: c.execute<0x7A>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:46 STY @VIRTUAL02
    case 0xDC3D: c.execute<0x84>(0x000002, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:47 CLC
    case 0xDC3F: c.execute<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:48 ADC @VIRTUAL02
    case 0xDC40: c.execute<0x65>(0x000002, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:49 TAX
    case 0xDC42: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:50 LDA @LOCAL00
    case 0xDC43: c.execute<0xA5>(0x00000E, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:51 CLC
    case 0xDC45: c.execute<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:52 ADC #$2030 ;0 tile, priority
    case 0xDC46: if (c.p & 0x20) c.execute<0x69>(0x000030, 2); else c.execute<0x69>(0x002030, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:52 ADC #$2030 ;0 tile, priority
    // Overlapping static entry reached from 0xEFDC46.
    case 0xDC48: c.execute<0x20>(0x00009D, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:53 STA __BSS_START__,X
    case 0xDC49: c.execute<0x9D>(0x000000, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:53 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFDC48.
    case 0xDC4B: c.execute<0x00>(0x0000A4, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:54 LDY @LOCAL03
    case 0xDC4C: c.execute<0xA4>(0x000014, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:55 TYA
    case 0xDC4E: c.execute<0x98>(0x000000, 1); return true;
    // include/macros.asm:555 STA scratch
    case 0xDC4F: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    case 0xDC51: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    case 0xDC52: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    case 0xDC53: c.execute<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    case 0xDC55: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:57 TAY
    case 0xDC56: c.execute<0xA8>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:58 STY @LOCAL03
    case 0xDC57: c.execute<0x84>(0x000014, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:59 LDX @LOCAL01
    case 0xDC59: c.execute<0xA6>(0x000010, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:60 DEX
    case 0xDC5B: c.execute<0xCA>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:61 STX @LOCAL01
    case 0xDC5C: c.execute<0x86>(0x000010, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:63 CPX #.LOWORD(-1)
    case 0xDC5E: if (c.p & 0x10) c.execute<0xE0>(0x0000FF, 2); else c.execute<0xE0>(0x00FFFF, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:63 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFDC5E.
    case 0xDC60: c.execute<0xFF>(0xA5B2D0, 4); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:64 BNE @UNKNOWN0
    case 0xDC61: c.execute<0xD0>(0x0000B2, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:65 LDA @LOCAL02
    case 0xDC63: c.execute<0xA5>(0x000012, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:65 LDA @LOCAL02
    // Overlapping static entry reached from 0xEFDC60.
    case 0xDC64: c.execute<0x12>(0x000085, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:66 STA @VIRTUAL02
    case 0xDC65: c.execute<0x85>(0x000002, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:66 STA @VIRTUAL02
    // Overlapping static entry reached from 0xEFDC64.
    case 0xDC66: c.execute<0x02>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    case 0xDC67: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xDC68: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xDC69: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xDC6B: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xDC6C: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xDC6D: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xDC6E: if (c.p & 0x20) c.execute<0x69>(0x0000EC, 2); else c.execute<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFDC6E.
    case 0xDC70: c.execute<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xDC71: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xDC72: c.execute<0x68>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:10 TAY
    case 0xDC73: c.execute<0xA8>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:11 STY @LOCAL02
    case 0xDC74: c.execute<0x84>(0x000012, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:12 LDA #16
    case 0xDC76: if (c.p & 0x20) c.execute<0xA9>(0x000010, 2); else c.execute<0xA9>(0x000010, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:12 LDA #16
    // Overlapping static entry reached from 0xEFDC76.
    case 0xDC78: c.execute<0x00>(0x000022, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:13 JSL SBRK
    case 0xDC79: c.execute<0x22>(0xC086DE, 4); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:14 STA @VIRTUAL02
    case 0xDC7D: c.execute<0x85>(0x000002, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:15 LDX #0
    case 0xDC7F: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:15 LDX #0
    // Overlapping static entry reached from 0xEFDC7F.
    case 0xDC81: c.execute<0x00>(0x000086, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:16 STX @LOCAL01
    case 0xDC82: c.execute<0x86>(0x000010, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:17 BRA @UNKNOWN3
    case 0xDC84: c.execute<0x80>(0x00002D, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:19 LDY @LOCAL02
    case 0xDC86: c.execute<0xA4>(0x000012, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:20 TYA
    case 0xDC88: c.execute<0x98>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:21 AND #$0080
    case 0xDC89: if (c.p & 0x20) c.execute<0x29>(0x000080, 2); else c.execute<0x29>(0x000080, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:21 AND #$0080
    // Overlapping static entry reached from 0xEFDC89.
    case 0xDC8B: c.execute<0x00>(0x0000F0, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:22 BEQ @UNKNOWN1
    case 0xDC8C: c.execute<0xF0>(0x000007, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:23 LDA #$2031 ;1 tile, priority
    case 0xDC8E: if (c.p & 0x20) c.execute<0xA9>(0x000031, 2); else c.execute<0xA9>(0x002031, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:23 LDA #$2031 ;1 tile, priority
    // Overlapping static entry reached from 0xEFDC8E.
    case 0xDC90: c.execute<0x20>(0x000E85, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:24 STA @LOCAL00
    case 0xDC91: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:25 BRA @UNKNOWN2
    case 0xDC93: c.execute<0x80>(0x000005, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:27 LDA #$2030 ;0 tile, priority
    case 0xDC95: if (c.p & 0x20) c.execute<0xA9>(0x000030, 2); else c.execute<0xA9>(0x002030, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:27 LDA #$2030 ;0 tile, priority
    // Overlapping static entry reached from 0xEFDC95.
    case 0xDC97: c.execute<0x20>(0x000E85, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:28 STA @LOCAL00
    case 0xDC98: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:30 TXA
    case 0xDC9A: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:31 ASL
    case 0xDC9B: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:32 STA @VIRTUAL04
    case 0xDC9C: c.execute<0x85>(0x000004, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:33 LDA @VIRTUAL02
    case 0xDC9E: c.execute<0xA5>(0x000002, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:34 CLC
    case 0xDCA0: c.execute<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:35 ADC @VIRTUAL04
    case 0xDCA1: c.execute<0x65>(0x000004, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:36 TAX
    case 0xDCA3: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:37 LDA @LOCAL00
    case 0xDCA4: c.execute<0xA5>(0x00000E, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:38 STA __BSS_START__,X
    case 0xDCA6: c.execute<0x9D>(0x000000, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:39 TYA
    case 0xDCA9: c.execute<0x98>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:40 ASL
    case 0xDCAA: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:41 TAY
    case 0xDCAB: c.execute<0xA8>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:42 STY @LOCAL02
    case 0xDCAC: c.execute<0x84>(0x000012, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:43 LDX @LOCAL01
    case 0xDCAE: c.execute<0xA6>(0x000010, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:44 INX
    case 0xDCB0: c.execute<0xE8>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:45 STX @LOCAL01
    case 0xDCB1: c.execute<0x86>(0x000010, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:47 CPX #8
    case 0xDCB3: if (c.p & 0x10) c.execute<0xE0>(0x000008, 2); else c.execute<0xE0>(0x000008, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:47 CPX #8
    // Overlapping static entry reached from 0xEFDCB3.
    case 0xDCB5: c.execute<0x00>(0x000090, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:48 BCC @UNKNOWN0
    case 0xDCB6: c.execute<0x90>(0x0000CE, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:49 LDA @VIRTUAL02
    case 0xDCB8: c.execute<0xA5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    case 0xDCBA: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xDCBB: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xDCBC: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xDCBE: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xDCBF: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xDCC0: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFDCC0.
    case 0xDCC2: c.execute<0xFF>(0x77A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xDCC3: c.execute<0x5B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:8 LDA #.LOWORD(GAME_STATE)+game_state::leader_x_coord
    case 0xDCC4: if (c.p & 0x20) c.execute<0xA9>(0x000077, 2); else c.execute<0xA9>(0x009877, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:8 LDA #.LOWORD(GAME_STATE)+game_state::leader_x_coord
    // Overlapping static entry reached from 0xEFDCC4.
    case 0xDCC6: c.execute<0x98>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:9 STA @VIRTUAL04
    case 0xDCC7: c.execute<0x85>(0x000004, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:10 LDX @VIRTUAL04
    case 0xDCC9: c.execute<0xA6>(0x000004, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:11 LDA __BSS_START__,X
    case 0xDCCB: c.execute<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:12 XBA
    case 0xDCCE: c.execute<0xEB>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:13 AND #$00FF
    case 0xDCCF: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xEFDCCF.
    case 0xDCD1: c.execute<0x00>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:14 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xDCD2: c.execute<0x20>(0x00DB95, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:15 TAX
    case 0xDCD5: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:16 LDA #^__BSS_START__
    case 0xDCD6: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:16 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDCD6.
    case 0xDCD8: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:17 STA @LOCAL00
    case 0xDCD9: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:18 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 26
    case 0xDCDB: if (c.p & 0x20) c.execute<0xA9>(0x000044, 2); else c.execute<0xA9>(0x007F44, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:18 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 26
    // Overlapping static entry reached from 0xEFDCDB.
    case 0xDCDD: c.execute<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:19 STA @LOCAL01
    case 0xDCDE: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:20 TXY
    case 0xDCE0: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:21 LDX #8
    case 0xDCE1: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:21 LDX #8
    // Overlapping static entry reached from 0xEFDCE1.
    case 0xDCE3: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xDCE4: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:23 LDA #0
    case 0xDCE6: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:24 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xDCE8: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:24 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDCE6.
    case 0xDCE9: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:26 LDA #.LOWORD(GAME_STATE)+game_state::leader_y_coord
    case 0xDCEC: if (c.p & 0x20) c.execute<0xA9>(0x00007B, 2); else c.execute<0xA9>(0x00987B, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:26 LDA #.LOWORD(GAME_STATE)+game_state::leader_y_coord
    // Overlapping static entry reached from 0xEFDCEC.
    case 0xDCEE: c.execute<0x98>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:27 STA @VIRTUAL02
    case 0xDCEF: c.execute<0x85>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:28 LDX @VIRTUAL02
    case 0xDCF1: c.execute<0xA6>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:29 LDA __BSS_START__,X
    case 0xDCF3: c.execute<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:30 XBA
    case 0xDCF6: c.execute<0xEB>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:31 AND #$00FF
    case 0xDCF7: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xEFDCF7.
    case 0xDCF9: c.execute<0x00>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:32 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xDCFA: c.execute<0x20>(0x00DB95, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:34 TAX
    case 0xDCFD: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:35 LDA #^__BSS_START__
    case 0xDCFE: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:35 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDCFE.
    case 0xDD00: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:36 STA @LOCAL00
    case 0xDD01: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:37 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 26
    case 0xDD03: if (c.p & 0x20) c.execute<0xA9>(0x00004A, 2); else c.execute<0xA9>(0x007F4A, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:37 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 26
    // Overlapping static entry reached from 0xEFDD03.
    case 0xDD05: c.execute<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:38 STA @LOCAL01
    case 0xDD06: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:39 TXY
    case 0xDD08: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:40 LDX #8
    case 0xDD09: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:40 LDX #8
    // Overlapping static entry reached from 0xEFDD09.
    case 0xDD0B: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xDD0C: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:42 LDA #0
    case 0xDD0E: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:43 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xDD10: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:43 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDD0E.
    case 0xDD11: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:44 LDX @VIRTUAL04
    case 0xDD14: c.execute<0xA6>(0x000004, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:45 LDA __BSS_START__,X
    case 0xDD16: c.execute<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:46 LSR
    case 0xDD19: c.execute<0x4A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:47 LSR
    case 0xDD1A: c.execute<0x4A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:48 LSR
    case 0xDD1B: c.execute<0x4A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:49 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xDD1C: c.execute<0x20>(0x00DB95, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:51 TAX
    case 0xDD1F: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:52 LDA #^__BSS_START__
    case 0xDD20: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:52 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDD20.
    case 0xDD22: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:53 STA @LOCAL00
    case 0xDD23: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:54 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 25
    case 0xDD25: if (c.p & 0x20) c.execute<0xA9>(0x000024, 2); else c.execute<0xA9>(0x007F24, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:54 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 25
    // Overlapping static entry reached from 0xEFDD25.
    case 0xDD27: c.execute<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:55 STA @LOCAL01
    case 0xDD28: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:56 TXY
    case 0xDD2A: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:57 LDX #8
    case 0xDD2B: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:57 LDX #8
    // Overlapping static entry reached from 0xEFDD2B.
    case 0xDD2D: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xDD2E: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:59 LDA #0
    case 0xDD30: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:60 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xDD32: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:60 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDD30.
    case 0xDD33: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:61 LDX @VIRTUAL02
    case 0xDD36: c.execute<0xA6>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:62 LDA __BSS_START__,X
    case 0xDD38: c.execute<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:63 LSR
    case 0xDD3B: c.execute<0x4A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:64 LSR
    case 0xDD3C: c.execute<0x4A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:65 LSR
    case 0xDD3D: c.execute<0x4A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:66 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xDD3E: c.execute<0x20>(0x00DB95, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:68 TAX
    case 0xDD41: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:69 LDA #^__BSS_START__
    case 0xDD42: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:69 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDD42.
    case 0xDD44: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:70 STA @LOCAL00
    case 0xDD45: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:71 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 25
    case 0xDD47: if (c.p & 0x20) c.execute<0xA9>(0x00002A, 2); else c.execute<0xA9>(0x007F2A, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:71 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 25
    // Overlapping static entry reached from 0xEFDD47.
    case 0xDD49: c.execute<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:72 STA @LOCAL01
    case 0xDD4A: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:73 TXY
    case 0xDD4C: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:74 LDX #8
    case 0xDD4D: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:74 LDX #8
    // Overlapping static entry reached from 0xEFDD4D.
    case 0xDD4F: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xDD50: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:76 LDA #0
    case 0xDD52: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:77 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xDD54: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:77 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDD52.
    case 0xDD55: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:78 LDX @VIRTUAL04
    case 0xDD58: c.execute<0xA6>(0x000004, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:79 LDA __BSS_START__,X
    case 0xDD5A: c.execute<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:80 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xDD5D: c.execute<0x20>(0x00DB95, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:82 TAX
    case 0xDD60: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:83 LDA #^__BSS_START__
    case 0xDD61: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:83 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDD61.
    case 0xDD63: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:84 STA @LOCAL00
    case 0xDD64: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:85 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 24
    case 0xDD66: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x007F04, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:85 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 24
    // Overlapping static entry reached from 0xEFDD66.
    case 0xDD68: c.execute<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:86 STA @LOCAL01
    case 0xDD69: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:87 TXY
    case 0xDD6B: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:88 LDX #8
    case 0xDD6C: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:88 LDX #8
    // Overlapping static entry reached from 0xEFDD6C.
    case 0xDD6E: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:89 SEP #PROC_FLAGS::ACCUM8
    case 0xDD6F: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:90 LDA #0
    case 0xDD71: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:91 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xDD73: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:91 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDD71.
    case 0xDD74: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:92 LDX @VIRTUAL02
    case 0xDD77: c.execute<0xA6>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:93 LDA __BSS_START__,X
    case 0xDD79: c.execute<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:94 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xDD7C: c.execute<0x20>(0x00DB95, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:96 TAX
    case 0xDD7F: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:97 LDA #^__BSS_START__
    case 0xDD80: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:97 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDD80.
    case 0xDD82: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:98 STA @LOCAL00
    case 0xDD83: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:99 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 24
    case 0xDD85: if (c.p & 0x20) c.execute<0xA9>(0x00000A, 2); else c.execute<0xA9>(0x007F0A, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:99 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 24
    // Overlapping static entry reached from 0xEFDD85.
    case 0xDD87: c.execute<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:100 STA @LOCAL01
    case 0xDD88: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:101 TXY
    case 0xDD8A: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:102 LDX #8
    case 0xDD8B: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:102 LDX #8
    // Overlapping static entry reached from 0xEFDD8B.
    case 0xDD8D: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:103 SEP #PROC_FLAGS::ACCUM8
    case 0xDD8E: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:104 LDA #0
    case 0xDD90: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:105 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xDD92: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:105 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDD90.
    case 0xDD93: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:107 LDX @VIRTUAL04
    case 0xDD96: c.execute<0xA6>(0x000004, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:108 LDA __BSS_START__,X
    case 0xDD98: c.execute<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:109 XBA
    case 0xDD9B: c.execute<0xEB>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:110 AND #$00FF
    case 0xDD9C: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:110 AND #$00FF
    // Overlapping static entry reached from 0xEFDD9C.
    case 0xDD9E: c.execute<0x00>(0x000048, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:111 PHA
    case 0xDD9F: c.execute<0x48>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:112 LDY #MAP_WIDTH_TILES
    case 0xDDA0: if (c.p & 0x10) c.execute<0xA0>(0x000080, 2); else c.execute<0xA0>(0x000080, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:112 LDY #MAP_WIDTH_TILES
    // Overlapping static entry reached from 0xEFDDA0.
    case 0xDDA2: c.execute<0x00>(0x0000A6, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:113 LDX @VIRTUAL02
    case 0xDDA3: c.execute<0xA6>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:114 LDA __BSS_START__,X
    case 0xDDA5: c.execute<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:115 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xDDA8: c.execute<0x22>(0xC0915B, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:116 ASL
    case 0xDDAC: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:117 ASL
    case 0xDDAD: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:118 ASL
    case 0xDDAE: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:119 ASL
    case 0xDDAF: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:120 ASL
    case 0xDDB0: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:121 PLY
    case 0xDDB1: c.execute<0x7A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:122 STY @VIRTUAL02
    case 0xDDB2: c.execute<0x84>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:123 CLC
    case 0xDDB4: c.execute<0x18>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:124 ADC @VIRTUAL02
    case 0xDDB5: c.execute<0x65>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:125 TAX
    case 0xDDB7: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:126 LDA MAP_DATA_PER_SECTOR_MUSIC,X
    case 0xDDB8: c.execute<0xBF>(0xDCD637, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:127 AND #$00FF
    case 0xDDBC: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:127 AND #$00FF
    // Overlapping static entry reached from 0xEFDDBC.
    case 0xDDBE: c.execute<0x00>(0x0000AA, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:128 TAX
    case 0xDDBF: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:129 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xDDC0: c.execute<0x20>(0x00DB95, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:130 TAX
    case 0xDDC3: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:131 LDA #^__BSS_START__
    case 0xDDC4: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:131 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDDC4.
    case 0xDDC6: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:132 STA @LOCAL00
    case 0xDDC7: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:133 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 2, 2
    case 0xDDC9: if (c.p & 0x20) c.execute<0xA9>(0x000042, 2); else c.execute<0xA9>(0x007C42, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:133 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 2, 2
    // Overlapping static entry reached from 0xEFDDC9.
    case 0xDDCB: c.execute<0x7C>(0x001085, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:134 STA @LOCAL01
    case 0xDDCC: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:135 TXY
    case 0xDDCE: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:136 INY
    case 0xDDCF: c.execute<0xC8>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:137 INY
    case 0xDDD0: c.execute<0xC8>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:138 INY
    case 0xDDD1: c.execute<0xC8>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:139 INY
    case 0xDDD2: c.execute<0xC8>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:140 LDX #4
    case 0xDDD3: if (c.p & 0x10) c.execute<0xA2>(0x000004, 2); else c.execute<0xA2>(0x000004, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:140 LDX #4
    // Overlapping static entry reached from 0xEFDDD3.
    case 0xDDD5: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:141 SEP #PROC_FLAGS::ACCUM8
    case 0xDDD6: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:142 LDA #0
    case 0xDDD8: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:143 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xDDDA: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:143 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDDD8.
    case 0xDDDB: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:144 LDA CURRENT_SECTOR_ATTRIBUTES
    case 0xDDDE: c.execute<0xAD>(0x00438E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:145 JSR INTEGER_TO_BINARY_DEBUG_TILES
    case 0xDDE1: c.execute<0x20>(0x00DC69, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:147 TAX
    case 0xDDE4: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:148 LDA #^__BSS_START__
    case 0xDDE5: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:148 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDDE5.
    case 0xDDE7: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:149 STA @LOCAL00
    case 0xDDE8: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:150 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 2, 3
    case 0xDDEA: if (c.p & 0x20) c.execute<0xA9>(0x000062, 2); else c.execute<0xA9>(0x007C62, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:150 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 2, 3
    // Overlapping static entry reached from 0xEFDDEA.
    case 0xDDEC: c.execute<0x7C>(0x001085, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:151 STA @LOCAL01
    case 0xDDED: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:152 TXY
    case 0xDDEF: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:153 LDX #16
    case 0xDDF0: if (c.p & 0x10) c.execute<0xA2>(0x000010, 2); else c.execute<0xA2>(0x000010, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:153 LDX #16
    // Overlapping static entry reached from 0xEFDDF0.
    case 0xDDF2: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:154 SEP #PROC_FLAGS::ACCUM8
    case 0xDDF3: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:155 LDA #0
    case 0xDDF5: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:156 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xDDF7: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:156 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDDF5.
    case 0xDDF8: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:157 LDA GAME_STATE+game_state::trodden_tile_type
    case 0xDDFB: c.execute<0xAD>(0x009881, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:158 JSR INTEGER_TO_BINARY_DEBUG_TILES
    case 0xDDFE: c.execute<0x20>(0x00DC69, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:160 TAX
    case 0xDE01: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:161 LDA #^__BSS_START__
    case 0xDE02: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:161 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDE02.
    case 0xDE04: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:162 STA @LOCAL00
    case 0xDE05: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:163 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 2, 4
    case 0xDE07: if (c.p & 0x20) c.execute<0xA9>(0x000082, 2); else c.execute<0xA9>(0x007C82, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:163 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 2, 4
    // Overlapping static entry reached from 0xEFDE07.
    case 0xDE09: c.execute<0x7C>(0x001085, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:164 STA @LOCAL01
    case 0xDE0A: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:165 TXY
    case 0xDE0C: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:166 LDX #16
    case 0xDE0D: if (c.p & 0x10) c.execute<0xA2>(0x000010, 2); else c.execute<0xA2>(0x000010, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:166 LDX #16
    // Overlapping static entry reached from 0xEFDE0D.
    case 0xDE0F: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:167 SEP #PROC_FLAGS::ACCUM8
    case 0xDE10: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:168 LDA #0
    case 0xDE12: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:169 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xDE14: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:169 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDE12.
    case 0xDE15: c.execute<0x2E>(0x00C086, 3); return true;
    // include/macros.asm:25 PLD
    case 0xDE18: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xDE19: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xDE1A: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xDE1C: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xDE1D: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xDE1E: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFDE1E.
    case 0xDE20: c.execute<0xFF>(0x40A05B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xDE21: c.execute<0x5B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:8 LDY #64
    case 0xDE22: if (c.p & 0x10) c.execute<0xA0>(0x000040, 2); else c.execute<0xA0>(0x000040, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:8 LDY #64
    // Overlapping static entry reached from 0xEFDE22.
    case 0xDE24: c.execute<0x00>(0x0000AD, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:9 LDA GAME_STATE+game_state::leader_x_coord
    case 0xDE25: c.execute<0xAD>(0x009877, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:10 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xDE28: c.execute<0x22>(0xC0915B, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:11 STA @VIRTUAL04
    case 0xDE2C: c.execute<0x85>(0x000004, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:12 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xDE2E: c.execute<0x20>(0x00DB95, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:14 TAX
    case 0xDE31: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:15 LDA #^__BSS_START__
    case 0xDE32: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:15 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDE32.
    case 0xDE34: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:16 STA @LOCAL00
    case 0xDE35: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:17 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 25
    case 0xDE37: if (c.p & 0x20) c.execute<0xA9>(0x000024, 2); else c.execute<0xA9>(0x007F24, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:17 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 25
    // Overlapping static entry reached from 0xEFDE37.
    case 0xDE39: c.execute<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:18 STA @LOCAL01
    case 0xDE3A: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:19 TXY
    case 0xDE3C: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:20 LDX #8
    case 0xDE3D: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:20 LDX #8
    // Overlapping static entry reached from 0xEFDE3D.
    case 0xDE3F: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xDE40: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:22 LDA #0
    case 0xDE42: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:23 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xDE44: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:23 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDE42.
    case 0xDE45: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:24 LDY #64
    case 0xDE48: if (c.p & 0x10) c.execute<0xA0>(0x000040, 2); else c.execute<0xA0>(0x000040, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:24 LDY #64
    // Overlapping static entry reached from 0xEFDE48.
    case 0xDE4A: c.execute<0x00>(0x0000AD, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:25 LDA GAME_STATE+game_state::leader_y_coord
    case 0xDE4B: c.execute<0xAD>(0x00987B, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:26 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xDE4E: c.execute<0x22>(0xC0915B, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:27 STA @VIRTUAL02
    case 0xDE52: c.execute<0x85>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:28 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xDE54: c.execute<0x20>(0x00DB95, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:30 TAX
    case 0xDE57: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:31 LDA #^__BSS_START__
    case 0xDE58: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:31 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDE58.
    case 0xDE5A: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:32 STA @LOCAL00
    case 0xDE5B: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:33 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 25
    case 0xDE5D: if (c.p & 0x20) c.execute<0xA9>(0x00002A, 2); else c.execute<0xA9>(0x007F2A, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:33 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 25
    // Overlapping static entry reached from 0xEFDE5D.
    case 0xDE5F: c.execute<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:34 STA @LOCAL01
    case 0xDE60: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:35 TXY
    case 0xDE62: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:36 LDX #8
    case 0xDE63: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:36 LDX #8
    // Overlapping static entry reached from 0xEFDE63.
    case 0xDE65: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xDE66: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:38 LDA #0
    case 0xDE68: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:39 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xDE6A: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:39 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDE68.
    case 0xDE6B: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:40 LDX @VIRTUAL02
    case 0xDE6E: c.execute<0xA6>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:41 LDA @VIRTUAL04
    case 0xDE70: c.execute<0xA5>(0x000004, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:42 JSL UNKNOWN_C0263D
    case 0xDE72: c.execute<0x22>(0xC0263D, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:43 JSR INTEGER_TO_DECIMAL_DEBUG_TILES
    case 0xDE76: c.execute<0x20>(0x00DBF0, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:45 TAX
    case 0xDE79: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:46 LDA #^__BSS_START__
    case 0xDE7A: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:46 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDE7A.
    case 0xDE7C: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:47 STA @LOCAL00
    case 0xDE7D: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:48 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 21, 25
    case 0xDE7F: if (c.p & 0x20) c.execute<0xA9>(0x000035, 2); else c.execute<0xA9>(0x007F35, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:48 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 21, 25
    // Overlapping static entry reached from 0xEFDE7F.
    case 0xDE81: c.execute<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:49 STA @LOCAL01
    case 0xDE82: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:50 TXY
    case 0xDE84: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:51 LDX #8
    case 0xDE85: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:51 LDX #8
    // Overlapping static entry reached from 0xEFDE85.
    case 0xDE87: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xDE88: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:53 LDA #0
    case 0xDE8A: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:54 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xDE8C: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:54 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDE8A.
    case 0xDE8D: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:55 LDA ENEMY_SPAWN_TOO_MANY_ENEMIES_FAILURE_COUNT
    case 0xDE90: c.execute<0xAD>(0x004A68, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:56 JSR INTEGER_TO_DECIMAL_DEBUG_TILES
    case 0xDE93: c.execute<0x20>(0x00DBF0, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:58 TAX
    case 0xDE96: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:59 LDA #^__BSS_START__
    case 0xDE97: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:59 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDE97.
    case 0xDE99: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:60 STA @LOCAL00
    case 0xDE9A: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:61 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 26, 25
    case 0xDE9C: if (c.p & 0x20) c.execute<0xA9>(0x00003A, 2); else c.execute<0xA9>(0x007F3A, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:61 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 26, 25
    // Overlapping static entry reached from 0xEFDE9C.
    case 0xDE9E: c.execute<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:62 STA @LOCAL01
    case 0xDE9F: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:63 TXY
    case 0xDEA1: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:64 LDX #8
    case 0xDEA2: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:64 LDX #8
    // Overlapping static entry reached from 0xEFDEA2.
    case 0xDEA4: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xDEA5: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:66 LDA #0
    case 0xDEA7: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:67 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xDEA9: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:67 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDEA7.
    case 0xDEAA: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:69 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xDEAD: c.execute<0xAD>(0x005D60, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:70 BEQ @UNKNOWN2
    case 0xDEB0: c.execute<0xF0>(0x000057, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:71 LDA #0
    case 0xDEB2: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:71 LDA #0
    // Overlapping static entry reached from 0xEFDEB2.
    case 0xDEB4: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:72 STA @VIRTUAL02
    case 0xDEB5: c.execute<0x85>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:73 BRA @UNKNOWN1
    case 0xDEB7: c.execute<0x80>(0x00002C, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:75 LDA @VIRTUAL02
    case 0xDEB9: c.execute<0xA5>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:76 ASL
    case 0xDEBB: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:77 TAX
    case 0xDEBC: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:78 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xDEBD: c.execute<0xBD>(0x009F8C, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:79 JSR INTEGER_TO_DECIMAL_DEBUG_TILES
    case 0xDEC0: c.execute<0x20>(0x00DBF0, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:81 TAX
    case 0xDEC3: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:82 LDA #^__BSS_START__
    case 0xDEC4: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:82 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDEC4.
    case 0xDEC6: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:83 STA @LOCAL00
    case 0xDEC7: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:84 LDA @VIRTUAL02
    case 0xDEC9: c.execute<0xA5>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:85 STA @VIRTUAL04
    case 0xDECB: c.execute<0x85>(0x000004, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:86 ASL
    case 0xDECD: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:87 ASL
    case 0xDECE: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:88 ADC @VIRTUAL04
    case 0xDECF: c.execute<0x65>(0x000004, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:89 CLC
    case 0xDED1: c.execute<0x18>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:90 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 6, 26
    case 0xDED2: if (c.p & 0x20) c.execute<0x69>(0x000046, 2); else c.execute<0x69>(0x007F46, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:90 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 6, 26
    // Overlapping static entry reached from 0xEFDED2.
    case 0xDED4: c.execute<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:91 STA @LOCAL01
    case 0xDED5: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:92 TXY
    case 0xDED7: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:93 LDX #8
    case 0xDED8: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:93 LDX #8
    // Overlapping static entry reached from 0xEFDED8.
    case 0xDEDA: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:94 SEP #PROC_FLAGS::ACCUM8
    case 0xDEDB: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:95 LDA #0
    case 0xDEDD: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:96 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xDEDF: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:96 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDEDD.
    case 0xDEE0: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:98 INC @VIRTUAL02
    case 0xDEE3: c.execute<0xE6>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:100 LDA @VIRTUAL02
    case 0xDEE5: c.execute<0xA5>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:101 CMP #5
    case 0xDEE7: if (c.p & 0x20) c.execute<0xC9>(0x000005, 2); else c.execute<0xC9>(0x000005, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:101 CMP #5
    // Overlapping static entry reached from 0xEFDEE7.
    case 0xDEE9: c.execute<0x00>(0x0000D0, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:102 BNE @UNKNOWN0
    case 0xDEEA: c.execute<0xD0>(0x0000CD, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:103 LDA CURRENT_BATTLE_GROUP
    case 0xDEEC: c.execute<0xAD>(0x004A8C, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:104 JSR INTEGER_TO_DECIMAL_DEBUG_TILES
    case 0xDEEF: c.execute<0x20>(0x00DBF0, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:106 TAX
    case 0xDEF2: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:107 LDA #^__BSS_START__
    case 0xDEF3: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:107 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDEF3.
    case 0xDEF5: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:108 STA @LOCAL00
    case 0xDEF6: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:109 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 1, 26
    case 0xDEF8: if (c.p & 0x20) c.execute<0xA9>(0x000041, 2); else c.execute<0xA9>(0x007F41, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:109 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 1, 26
    // Overlapping static entry reached from 0xEFDEF8.
    case 0xDEFA: c.execute<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:110 STA @LOCAL01
    case 0xDEFB: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:111 TXY
    case 0xDEFD: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:112 LDX #8
    case 0xDEFE: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:112 LDX #8
    // Overlapping static entry reached from 0xEFDEFE.
    case 0xDF00: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:113 SEP #PROC_FLAGS::ACCUM8
    case 0xDF01: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:114 LDA #0
    case 0xDF03: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:115 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xDF05: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:115 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDF03.
    case 0xDF06: c.execute<0x2E>(0x00C086, 3); return true;
    // include/macros.asm:25 PLD
    case 0xDF09: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xDF0A: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xDF0B: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xDF0D: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xDF0E: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xDF0F: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xDF10: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFDF10.
    case 0xDF12: c.execute<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xDF13: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xDF14: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFDF0B.asm:10 STY @VIRTUAL02
    case 0xDF15: c.execute<0x84>(0x000002, 2); return true;
    // src/unknown/EF/EFDF0B.asm:10 STY @VIRTUAL02
    // Overlapping static entry reached from 0xEFDF12.
    case 0xDF16: c.execute<0x02>(0x00009B, 2); return true;
    // src/unknown/EF/EFDF0B.asm:11 TXY
    case 0xDF17: c.execute<0x9B>(0x000000, 1); return true;
    // src/unknown/EF/EFDF0B.asm:12 STA @LOCAL00
    case 0xDF18: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:13 LDX #0
    case 0xDF1A: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/unknown/EF/EFDF0B.asm:13 LDX #0
    // Overlapping static entry reached from 0xEFDF1A.
    case 0xDF1C: c.execute<0x00>(0x0000AD, 2); return true;
    // src/unknown/EF/EFDF0B.asm:14 LDA VIEW_ATTRIBUTE_MODE
    case 0xDF1D: c.execute<0xAD>(0x00B55F, 3); return true;
    // src/unknown/EF/EFDF0B.asm:15 AND #$00FF
    case 0xDF20: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFDF0B.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xEFDF20.
    case 0xDF22: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:16 BEQ @UNKNOWN1
    case 0xDF23: c.execute<0xF0>(0x000010, 2); return true;
    // src/unknown/EF/EFDF0B.asm:17 CMP #1
    case 0xDF25: if (c.p & 0x20) c.execute<0xC9>(0x000001, 2); else c.execute<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFDF0B.asm:17 CMP #1
    // Overlapping static entry reached from 0xEFDF25.
    case 0xDF27: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:18 BEQ @UNKNOWN5
    case 0xDF28: c.execute<0xF0>(0x00003C, 2); return true;
    // src/unknown/EF/EFDF0B.asm:19 CMP #2
    case 0xDF2A: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFDF0B.asm:19 CMP #2
    // Overlapping static entry reached from 0xEFDF2A.
    case 0xDF2C: c.execute<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    case 0xDF2D: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xDF2F: c.execute<0x4C>(0x00DFB7, 3); return true;
    // src/unknown/EF/EFDF0B.asm:21 JMP @UNKNOWN11
    case 0xDF32: c.execute<0x4C>(0x00DFC1, 3); return true;
    // src/unknown/EF/EFDF0B.asm:23 LDA @LOCAL00
    case 0xDF35: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:24 AND #$0002
    case 0xDF37: if (c.p & 0x20) c.execute<0x29>(0x000002, 2); else c.execute<0x29>(0x000002, 3); return true;
    // src/unknown/EF/EFDF0B.asm:24 AND #$0002
    // Overlapping static entry reached from 0xEFDF37.
    case 0xDF39: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:25 BEQ @UNKNOWN2
    case 0xDF3A: c.execute<0xF0>(0x000006, 2); return true;
    // src/unknown/EF/EFDF0B.asm:26 LDX #$2061
    case 0xDF3C: if (c.p & 0x10) c.execute<0xA2>(0x000061, 2); else c.execute<0xA2>(0x002061, 3); return true;
    // src/unknown/EF/EFDF0B.asm:26 LDX #$2061
    // Overlapping static entry reached from 0xEFDF3C.
    case 0xDF3E: c.execute<0x20>(0x00C14C, 3); return true;
    // src/unknown/EF/EFDF0B.asm:27 JMP @UNKNOWN11
    case 0xDF3F: c.execute<0x4C>(0x00DFC1, 3); return true;
    // src/unknown/EF/EFDF0B.asm:27 JMP @UNKNOWN11
    // Overlapping static entry reached from 0xEFDF3E.
    case 0xDF41: c.execute<0xDF>(0x290EA5, 4); return true;
    // src/unknown/EF/EFDF0B.asm:29 LDA @LOCAL00
    case 0xDF42: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:30 AND #$0001
    case 0xDF44: if (c.p & 0x20) c.execute<0x29>(0x000001, 2); else c.execute<0x29>(0x000001, 3); return true;
    // src/unknown/EF/EFDF0B.asm:30 AND #$0001
    // Overlapping static entry reached from 0xEFDF41.
    case 0xDF45: c.execute<0x01>(0x000000, 2); return true;
    // src/unknown/EF/EFDF0B.asm:30 AND #$0001
    // Overlapping static entry reached from 0xEFDF44.
    case 0xDF46: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:31 BEQ @UNKNOWN3
    case 0xDF47: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EFDF0B.asm:32 LDX #$2062
    case 0xDF49: if (c.p & 0x10) c.execute<0xA2>(0x000062, 2); else c.execute<0xA2>(0x002062, 3); return true;
    // src/unknown/EF/EFDF0B.asm:32 LDX #$2062
    // Overlapping static entry reached from 0xEFDF49.
    case 0xDF4B: c.execute<0x20>(0x007380, 3); return true;
    // src/unknown/EF/EFDF0B.asm:33 BRA @UNKNOWN11
    case 0xDF4C: c.execute<0x80>(0x000073, 2); return true;
    // src/unknown/EF/EFDF0B.asm:35 LDA @LOCAL00
    case 0xDF4E: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:36 AND #$0080
    case 0xDF50: if (c.p & 0x20) c.execute<0x29>(0x000080, 2); else c.execute<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EFDF0B.asm:36 AND #$0080
    // Overlapping static entry reached from 0xEFDF50.
    case 0xDF52: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:37 BEQ @UNKNOWN4
    case 0xDF53: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EFDF0B.asm:38 LDX #$2063
    case 0xDF55: if (c.p & 0x10) c.execute<0xA2>(0x000063, 2); else c.execute<0xA2>(0x002063, 3); return true;
    // src/unknown/EF/EFDF0B.asm:38 LDX #$2063
    // Overlapping static entry reached from 0xEFDF55.
    case 0xDF57: c.execute<0x20>(0x006780, 3); return true;
    // src/unknown/EF/EFDF0B.asm:39 BRA @UNKNOWN11
    case 0xDF58: c.execute<0x80>(0x000067, 2); return true;
    // src/unknown/EF/EFDF0B.asm:41 LDA @LOCAL00
    case 0xDF5A: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:42 AND #$0040
    case 0xDF5C: if (c.p & 0x20) c.execute<0x29>(0x000040, 2); else c.execute<0x29>(0x000040, 3); return true;
    // src/unknown/EF/EFDF0B.asm:42 AND #$0040
    // Overlapping static entry reached from 0xEFDF5C.
    case 0xDF5E: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:43 BEQ @UNKNOWN11
    case 0xDF5F: c.execute<0xF0>(0x000060, 2); return true;
    // src/unknown/EF/EFDF0B.asm:44 LDX #$2063
    case 0xDF61: if (c.p & 0x10) c.execute<0xA2>(0x000063, 2); else c.execute<0xA2>(0x002063, 3); return true;
    // src/unknown/EF/EFDF0B.asm:44 LDX #$2063
    // Overlapping static entry reached from 0xEFDF61.
    case 0xDF63: c.execute<0x20>(0x005B80, 3); return true;
    // src/unknown/EF/EFDF0B.asm:45 BRA @UNKNOWN11
    case 0xDF64: c.execute<0x80>(0x00005B, 2); return true;
    // src/unknown/EF/EFDF0B.asm:47 LDA @LOCAL00
    case 0xDF66: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:48 AND #$0010
    case 0xDF68: if (c.p & 0x20) c.execute<0x29>(0x000010, 2); else c.execute<0x29>(0x000010, 3); return true;
    // src/unknown/EF/EFDF0B.asm:48 AND #$0010
    // Overlapping static entry reached from 0xEFDF68.
    case 0xDF6A: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:49 BEQ @UNKNOWN11
    case 0xDF6B: c.execute<0xF0>(0x000054, 2); return true;
    // src/unknown/EF/EFDF0B.asm:50 LDX @VIRTUAL02
    case 0xDF6D: c.execute<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFDF0B.asm:51 TYA
    case 0xDF6F: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/EF/EFDF0B.asm:52 JSL UNKNOWN_C07477
    case 0xDF70: c.execute<0x22>(0xC07477, 4); return true;
    // src/unknown/EF/EFDF0B.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xDF74: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFDF0B.asm:54 AND #$00FF
    case 0xDF76: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFDF0B.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xEFDF76.
    case 0xDF78: c.execute<0x00>(0x0000C9, 2); return true;
    // src/unknown/EF/EFDF0B.asm:55 CMP #2
    case 0xDF79: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFDF0B.asm:55 CMP #2
    // Overlapping static entry reached from 0xEFDF79.
    case 0xDF7B: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:56 BEQ @UNKNOWN6
    case 0xDF7C: c.execute<0xF0>(0x000025, 2); return true;
    // src/unknown/EF/EFDF0B.asm:57 CMP #1
    case 0xDF7E: if (c.p & 0x20) c.execute<0xC9>(0x000001, 2); else c.execute<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFDF0B.asm:57 CMP #1
    // Overlapping static entry reached from 0xEFDF7E.
    case 0xDF80: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:58 BEQ @UNKNOWN7
    case 0xDF81: c.execute<0xF0>(0x000025, 2); return true;
    // src/unknown/EF/EFDF0B.asm:59 CMP #3
    case 0xDF83: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFDF0B.asm:59 CMP #3
    // Overlapping static entry reached from 0xEFDF83.
    case 0xDF85: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:60 BEQ @UNKNOWN7
    case 0xDF86: c.execute<0xF0>(0x000020, 2); return true;
    // src/unknown/EF/EFDF0B.asm:61 CMP #4
    case 0xDF88: if (c.p & 0x20) c.execute<0xC9>(0x000004, 2); else c.execute<0xC9>(0x000004, 3); return true;
    // src/unknown/EF/EFDF0B.asm:61 CMP #4
    // Overlapping static entry reached from 0xEFDF88.
    case 0xDF8A: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:62 BEQ @UNKNOWN7
    case 0xDF8B: c.execute<0xF0>(0x00001B, 2); return true;
    // src/unknown/EF/EFDF0B.asm:63 CMP #5
    case 0xDF8D: if (c.p & 0x20) c.execute<0xC9>(0x000005, 2); else c.execute<0xC9>(0x000005, 3); return true;
    // src/unknown/EF/EFDF0B.asm:63 CMP #5
    // Overlapping static entry reached from 0xEFDF8D.
    case 0xDF8F: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:64 BEQ @UNKNOWN8
    case 0xDF90: c.execute<0xF0>(0x00001B, 2); return true;
    // src/unknown/EF/EFDF0B.asm:65 CMP #0
    case 0xDF92: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFDF0B.asm:65 CMP #0
    // Overlapping static entry reached from 0xEFDF92.
    case 0xDF94: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:66 BEQ @UNKNOWN8
    case 0xDF95: c.execute<0xF0>(0x000016, 2); return true;
    // src/unknown/EF/EFDF0B.asm:67 CMP #6
    case 0xDF97: if (c.p & 0x20) c.execute<0xC9>(0x000006, 2); else c.execute<0xC9>(0x000006, 3); return true;
    // src/unknown/EF/EFDF0B.asm:67 CMP #6
    // Overlapping static entry reached from 0xEFDF97.
    case 0xDF99: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:68 BEQ @UNKNOWN8
    case 0xDF9A: c.execute<0xF0>(0x000011, 2); return true;
    // src/unknown/EF/EFDF0B.asm:69 CMP #7
    case 0xDF9C: if (c.p & 0x20) c.execute<0xC9>(0x000007, 2); else c.execute<0xC9>(0x000007, 3); return true;
    // src/unknown/EF/EFDF0B.asm:69 CMP #7
    // Overlapping static entry reached from 0xEFDF9C.
    case 0xDF9E: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:70 BEQ @UNKNOWN8
    case 0xDF9F: c.execute<0xF0>(0x00000C, 2); return true;
    // src/unknown/EF/EFDF0B.asm:71 BRA @UNKNOWN9
    case 0xDFA1: c.execute<0x80>(0x00000F, 2); return true;
    // src/unknown/EF/EFDF0B.asm:73 LDX #$2461
    case 0xDFA3: if (c.p & 0x10) c.execute<0xA2>(0x000061, 2); else c.execute<0xA2>(0x002461, 3); return true;
    // src/unknown/EF/EFDF0B.asm:73 LDX #$2461
    // Overlapping static entry reached from 0xEFDFA3.
    case 0xDFA5: c.execute<0x24>(0x000080, 2); return true;
    // src/unknown/EF/EFDF0B.asm:74 BRA @UNKNOWN11
    case 0xDFA6: c.execute<0x80>(0x000019, 2); return true;
    // src/unknown/EF/EFDF0B.asm:74 BRA @UNKNOWN11
    // Overlapping static entry reached from 0xEFDFA5.
    case 0xDFA7: c.execute<0x19>(0x0062A2, 3); return true;
    // src/unknown/EF/EFDF0B.asm:76 LDX #$2462
    case 0xDFA8: if (c.p & 0x10) c.execute<0xA2>(0x000062, 2); else c.execute<0xA2>(0x002462, 3); return true;
    // src/unknown/EF/EFDF0B.asm:76 LDX #$2462
    // Overlapping static entry reached from 0xEFDFA8.
    case 0xDFAA: c.execute<0x24>(0x000080, 2); return true;
    // src/unknown/EF/EFDF0B.asm:77 BRA @UNKNOWN11
    case 0xDFAB: c.execute<0x80>(0x000014, 2); return true;
    // src/unknown/EF/EFDF0B.asm:77 BRA @UNKNOWN11
    // Overlapping static entry reached from 0xEFDFAA.
    case 0xDFAC: c.execute<0x14>(0x0000A2, 2); return true;
    // src/unknown/EF/EFDF0B.asm:79 LDX #$2463
    case 0xDFAD: if (c.p & 0x10) c.execute<0xA2>(0x000063, 2); else c.execute<0xA2>(0x002463, 3); return true;
    // src/unknown/EF/EFDF0B.asm:79 LDX #$2463
    // Overlapping static entry reached from 0xEFDFAC.
    case 0xDFAE: c.execute<0x63>(0x000024, 2); return true;
    // src/unknown/EF/EFDF0B.asm:79 LDX #$2463
    // Overlapping static entry reached from 0xEFDFAD.
    case 0xDFAF: c.execute<0x24>(0x000080, 2); return true;
    // src/unknown/EF/EFDF0B.asm:80 BRA @UNKNOWN11
    case 0xDFB0: c.execute<0x80>(0x00000F, 2); return true;
    // src/unknown/EF/EFDF0B.asm:80 BRA @UNKNOWN11
    // Overlapping static entry reached from 0xEFDFAF.
    case 0xDFB1: c.execute<0x0F>(0x2058A2, 4); return true;
    // src/unknown/EF/EFDF0B.asm:82 LDX #$2058
    case 0xDFB2: if (c.p & 0x10) c.execute<0xA2>(0x000058, 2); else c.execute<0xA2>(0x002058, 3); return true;
    // src/unknown/EF/EFDF0B.asm:82 LDX #$2058
    // Overlapping static entry reached from 0xEFE001.
    case 0xDFB3: c.execute<0x58>(0x000000, 1); return true;
    // src/unknown/EF/EFDF0B.asm:82 LDX #$2058
    // Overlapping static entry reached from 0xEFDFB2.
    case 0xDFB4: c.execute<0x20>(0x000A80, 3); return true;
    // src/unknown/EF/EFDF0B.asm:83 BRA @UNKNOWN11
    case 0xDFB5: c.execute<0x80>(0x00000A, 2); return true;
    // src/unknown/EF/EFDF0B.asm:85 LDA @LOCAL00
    case 0xDFB7: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:86 AND #$0020
    case 0xDFB9: if (c.p & 0x20) c.execute<0x29>(0x000020, 2); else c.execute<0x29>(0x000020, 3); return true;
    // src/unknown/EF/EFDF0B.asm:86 AND #$0020
    // Overlapping static entry reached from 0xEFDFB9.
    case 0xDFBB: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:87 BEQ @UNKNOWN11
    case 0xDFBC: c.execute<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFDF0B.asm:88 LDX #$2261
    case 0xDFBE: if (c.p & 0x10) c.execute<0xA2>(0x000061, 2); else c.execute<0xA2>(0x002261, 3); return true;
    // src/unknown/EF/EFDF0B.asm:88 LDX #$2261
    // Overlapping static entry reached from 0xEFDFBE.
    case 0xDFC0: c.execute<0x22>(0x602B8A, 4); return true;
    // src/unknown/EF/EFDF0B.asm:90 TXA
    case 0xDFC1: c.execute<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    case 0xDFC2: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xDFC3: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xDFC4: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xDFC6: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xDFC7: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xDFC8: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xDFC9: if (c.p & 0x20) c.execute<0x69>(0x0000E4, 2); else c.execute<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFDFC9.
    case 0xDFCB: c.execute<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xDFCC: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xDFCD: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:14 STX @LOCAL05
    case 0xDFCE: c.execute<0x86>(0x00001A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:14 STX @LOCAL05
    // Overlapping static entry reached from 0xEFDFCB.
    case 0xDFCF: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:15 STA @VIRTUAL02
    case 0xDFD0: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:16 STA @LOCAL04
    case 0xDFD2: c.execute<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFDFC4.asm:17 LDA DEBUG_MODE_NUMBER
    case 0xDFD4: c.execute<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFDFC4.asm:18 CMP #3
    case 0xDFD7: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFDFC4.asm:18 CMP #3
    // Overlapping static entry reached from 0xEFDFD7.
    case 0xDFD9: c.execute<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    case 0xDFDA: c.execute<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    case 0xDFDC: c.execute<0x4C>(0x00E07A, 3); return true;
    // src/unknown/EF/EFDFC4.asm:20 LDA #64
    case 0xDFDF: if (c.p & 0x20) c.execute<0xA9>(0x000040, 2); else c.execute<0xA9>(0x000040, 3); return true;
    // src/unknown/EF/EFDFC4.asm:20 LDA #64
    // Overlapping static entry reached from 0xEFDFDF.
    case 0xDFE1: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDFC4.asm:21 JSL SBRK
    case 0xDFE2: c.execute<0x22>(0xC086DE, 4); return true;
    // src/unknown/EF/EFDFC4.asm:22 STA @LOCAL03
    case 0xDFE6: c.execute<0x85>(0x000016, 2); return true;
    // src/unknown/EF/EFDFC4.asm:23 LDA @LOCAL05
    case 0xDFE8: c.execute<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:24 CMP #$8000
    case 0xDFEA: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x008000, 3); return true;
    // src/unknown/EF/EFDFC4.asm:24 CMP #$8000
    // Overlapping static entry reached from 0xEFDFEA.
    case 0xDFEC: c.execute<0x80>(0x0000B0, 2); return true;
    // src/unknown/EF/EFDFC4.asm:25 BCS @UNKNOWN4
    case 0xDFED: c.execute<0xB0>(0x00005B, 2); return true;
    // src/unknown/EF/EFDFC4.asm:26 LDA @VIRTUAL02
    case 0xDFEF: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:27 AND #$001F
    case 0xDFF1: if (c.p & 0x20) c.execute<0x29>(0x00001F, 2); else c.execute<0x29>(0x00001F, 3); return true;
    // src/unknown/EF/EFDFC4.asm:27 AND #$001F
    // Overlapping static entry reached from 0xEFDFF1.
    case 0xDFF3: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFDFC4.asm:28 STA @LOCAL02
    case 0xDFF4: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFDFC4.asm:29 LDA #0
    case 0xDFF6: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFDFC4.asm:29 LDA #0
    // Overlapping static entry reached from 0xEFDFF6.
    case 0xDFF8: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFDFC4.asm:30 STA @VIRTUAL04
    case 0xDFF9: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFDFC4.asm:31 BRA @UNKNOWN3
    case 0xDFFB: c.execute<0x80>(0x000046, 2); return true;
    // src/unknown/EF/EFDFC4.asm:33 LDA @VIRTUAL02
    case 0xDFFD: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:34 CMP #$8000
    case 0xDFFF: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x008000, 3); return true;
    // src/unknown/EF/EFDFC4.asm:34 CMP #$8000
    // Overlapping static entry reached from 0xEFDFFF.
    case 0xE001: c.execute<0x80>(0x0000B0, 2); return true;
    // src/unknown/EF/EFDFC4.asm:35 BCS @UNKNOWN2
    case 0xE002: c.execute<0xB0>(0x00002F, 2); return true;
    // src/unknown/EF/EFDFC4.asm:36 LDA @VIRTUAL02
    case 0xE004: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:37 AND #$003F
    case 0xE006: if (c.p & 0x20) c.execute<0x29>(0x00003F, 2); else c.execute<0x29>(0x00003F, 3); return true;
    // src/unknown/EF/EFDFC4.asm:37 AND #$003F
    // Overlapping static entry reached from 0xEFE006.
    case 0xE008: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFDFC4.asm:38 STA @VIRTUAL02
    case 0xE009: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:39 LDA @LOCAL05
    case 0xE00B: c.execute<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:40 AND #$003F
    case 0xE00D: if (c.p & 0x20) c.execute<0x29>(0x00003F, 2); else c.execute<0x29>(0x00003F, 3); return true;
    // src/unknown/EF/EFDFC4.asm:40 AND #$003F
    // Overlapping static entry reached from 0xEFE00D.
    case 0xE00F: c.execute<0x00>(0x00000A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:41 ASL
    case 0xE010: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:42 ASL
    case 0xE011: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:43 ASL
    case 0xE012: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:44 ASL
    case 0xE013: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:45 ASL
    case 0xE014: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:46 ASL
    case 0xE015: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:47 CLC
    case 0xE016: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:48 ADC @VIRTUAL02
    case 0xE017: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:49 TAX
    case 0xE019: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:50 LDA LOADED_COLLISION_TILES,X
    case 0xE01A: c.execute<0xBD>(0x00E000, 3); return true;
    // src/unknown/EF/EFDFC4.asm:51 AND #$00FF
    case 0xE01D: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFDFC4.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xEFE01D.
    case 0xE01F: c.execute<0x00>(0x0000A4, 2); return true;
    // src/unknown/EF/EFDFC4.asm:52 LDY @LOCAL05
    case 0xE020: c.execute<0xA4>(0x00001A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:53 LDX @LOCAL04
    case 0xE022: c.execute<0xA6>(0x000018, 2); return true;
    // src/unknown/EF/EFDFC4.asm:54 STX @VIRTUAL02
    case 0xE024: c.execute<0x86>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:55 JSR UNKNOWN_EFDF0B
    case 0xE026: c.execute<0x20>(0x00DF0B, 3); return true;
    // src/unknown/EF/EFDFC4.asm:56 STA @LOCAL01
    case 0xE029: c.execute<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EFDFC4.asm:57 LDA @LOCAL02
    case 0xE02B: c.execute<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EFDFC4.asm:58 ASL
    case 0xE02D: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:59 TAY
    case 0xE02E: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:60 LDA @LOCAL01
    case 0xE02F: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EFDFC4.asm:61 STA (@LOCAL03),Y
    case 0xE031: c.execute<0x91>(0x000016, 2); return true;
    // src/unknown/EF/EFDFC4.asm:63 LDA @LOCAL02
    case 0xE033: c.execute<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EFDFC4.asm:64 INC
    case 0xE035: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:65 AND #$001F
    case 0xE036: if (c.p & 0x20) c.execute<0x29>(0x00001F, 2); else c.execute<0x29>(0x00001F, 3); return true;
    // src/unknown/EF/EFDFC4.asm:65 AND #$001F
    // Overlapping static entry reached from 0xEFE036.
    case 0xE038: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFDFC4.asm:66 STA @LOCAL02
    case 0xE039: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFDFC4.asm:67 INC @VIRTUAL02
    case 0xE03B: c.execute<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:68 LDA @VIRTUAL02
    case 0xE03D: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:69 STA @LOCAL04
    case 0xE03F: c.execute<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFDFC4.asm:70 INC @VIRTUAL04
    case 0xE041: c.execute<0xE6>(0x000004, 2); return true;
    // src/unknown/EF/EFDFC4.asm:72 LDA @VIRTUAL04
    case 0xE043: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFDFC4.asm:73 CMP #32
    case 0xE045: if (c.p & 0x20) c.execute<0xC9>(0x000020, 2); else c.execute<0xC9>(0x000020, 3); return true;
    // src/unknown/EF/EFDFC4.asm:73 CMP #32
    // Overlapping static entry reached from 0xEFE045.
    case 0xE047: c.execute<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EFDFC4.asm:74 BCC @UNKNOWN1
    case 0xE048: c.execute<0x90>(0x0000B3, 2); return true;
    // src/unknown/EF/EFDFC4.asm:76 LDA @LOCAL03
    case 0xE04A: c.execute<0xA5>(0x000016, 2); return true;
    // include/macros.asm:908 STA dest
    case 0xE04C: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    case 0xE04E: c.execute<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    case 0xE04F: c.execute<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    case 0xE051: c.execute<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    case 0xE052: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    case 0xE054: c.execute<0x64>(0x000009, 2); return true;
    // src/unknown/EF/EFDFC4.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xE056: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE058: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE05A: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE05C: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE05E: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFDFC4.asm:80 LDA @LOCAL05
    case 0xE060: c.execute<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:81 AND #$001F
    case 0xE062: if (c.p & 0x20) c.execute<0x29>(0x00001F, 2); else c.execute<0x29>(0x00001F, 3); return true;
    // src/unknown/EF/EFDFC4.asm:81 AND #$001F
    // Overlapping static entry reached from 0xEFE062.
    case 0xE064: c.execute<0x00>(0x00000A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:82 ASL
    case 0xE065: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:83 ASL
    case 0xE066: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:84 ASL
    case 0xE067: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:85 ASL
    case 0xE068: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:86 ASL
    case 0xE069: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:87 CLC
    case 0xE06A: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:88 ADC #VRAM::TEXT_LAYER_TILEMAP
    case 0xE06B: if (c.p & 0x20) c.execute<0x69>(0x000000, 2); else c.execute<0x69>(0x007C00, 3); return true;
    // src/unknown/EF/EFDFC4.asm:88 ADC #VRAM::TEXT_LAYER_TILEMAP
    // Overlapping static entry reached from 0xEFE06B.
    case 0xE06D: c.execute<0x7C>(0x00A2A8, 3); return true;
    // src/unknown/EF/EFDFC4.asm:89 TAY
    case 0xE06E: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:90 LDX #64
    case 0xE06F: if (c.p & 0x10) c.execute<0xA2>(0x000040, 2); else c.execute<0xA2>(0x000040, 3); return true;
    // src/unknown/EF/EFDFC4.asm:90 LDX #64
    // Overlapping static entry reached from 0xEFE06F.
    case 0xE071: c.execute<0x00>(0x0000E2, 2); return true;
    // src/unknown/EF/EFDFC4.asm:91 SEP #PROC_FLAGS::ACCUM8
    case 0xE072: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFDFC4.asm:92 LDA #0
    case 0xE074: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/unknown/EF/EFDFC4.asm:93 JSL PREPARE_VRAM_COPY
    case 0xE076: c.execute<0x22>(0xC08616, 4); return true;
    // src/unknown/EF/EFDFC4.asm:93 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFE074.
    case 0xE077: c.execute<0x16>(0x000086, 2); return true;
    // src/unknown/EF/EFDFC4.asm:93 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFE077.
    case 0xE079: if (c.p & 0x10) c.execute<0xC0>(0x00002B, 2); else c.execute<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    case 0xE07A: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xE07B: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE07C: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE07E: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xE07F: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE080: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE081: if (c.p & 0x20) c.execute<0x69>(0x0000E4, 2); else c.execute<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFE081.
    case 0xE083: c.execute<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE084: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xE085: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:14 STX @VIRTUAL02
    case 0xE086: c.execute<0x86>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:14 STX @VIRTUAL02
    // Overlapping static entry reached from 0xEFE083.
    case 0xE087: c.execute<0x02>(0x000086, 2); return true;
    // src/unknown/EF/EFE07C.asm:15 STX @LOCAL05
    case 0xE088: c.execute<0x86>(0x00001A, 2); return true;
    // src/unknown/EF/EFE07C.asm:16 STA @LOCAL04
    case 0xE08A: c.execute<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFE07C.asm:17 LDA DEBUG_MODE_NUMBER
    case 0xE08C: c.execute<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE07C.asm:18 CMP #3
    case 0xE08F: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFE07C.asm:18 CMP #3
    // Overlapping static entry reached from 0xEFE08F.
    case 0xE091: c.execute<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    case 0xE092: c.execute<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    case 0xE094: c.execute<0x4C>(0x00E131, 3); return true;
    // src/unknown/EF/EFE07C.asm:20 LDA #64
    case 0xE097: if (c.p & 0x20) c.execute<0xA9>(0x000040, 2); else c.execute<0xA9>(0x000040, 3); return true;
    // src/unknown/EF/EFE07C.asm:20 LDA #64
    // Overlapping static entry reached from 0xEFE097.
    case 0xE099: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE07C.asm:21 JSL SBRK
    case 0xE09A: c.execute<0x22>(0xC086DE, 4); return true;
    // src/unknown/EF/EFE07C.asm:22 STA @LOCAL03
    case 0xE09E: c.execute<0x85>(0x000016, 2); return true;
    // src/unknown/EF/EFE07C.asm:23 LDA @LOCAL04
    case 0xE0A0: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE07C.asm:24 CMP #$8000
    case 0xE0A2: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x008000, 3); return true;
    // src/unknown/EF/EFE07C.asm:24 CMP #$8000
    // Overlapping static entry reached from 0xEFE0A2.
    case 0xE0A4: c.execute<0x80>(0x0000B0, 2); return true;
    // src/unknown/EF/EFE07C.asm:25 BCS @UNKNOWN4
    case 0xE0A5: c.execute<0xB0>(0x00005F, 2); return true;
    // src/unknown/EF/EFE07C.asm:26 LDA @VIRTUAL02
    case 0xE0A7: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:27 AND #$001F
    case 0xE0A9: if (c.p & 0x20) c.execute<0x29>(0x00001F, 2); else c.execute<0x29>(0x00001F, 3); return true;
    // src/unknown/EF/EFE07C.asm:27 AND #$001F
    // Overlapping static entry reached from 0xEFE0A9.
    case 0xE0AB: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE07C.asm:28 STA @LOCAL02
    case 0xE0AC: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE07C.asm:29 LDA #0
    case 0xE0AE: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE07C.asm:29 LDA #0
    // Overlapping static entry reached from 0xEFE0AE.
    case 0xE0B0: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE07C.asm:30 STA @VIRTUAL04
    case 0xE0B1: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFE07C.asm:31 BRA @UNKNOWN3
    case 0xE0B3: c.execute<0x80>(0x00004A, 2); return true;
    // src/unknown/EF/EFE07C.asm:33 LDA @VIRTUAL02
    case 0xE0B5: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:34 CMP #$8000
    case 0xE0B7: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x008000, 3); return true;
    // src/unknown/EF/EFE07C.asm:34 CMP #$8000
    // Overlapping static entry reached from 0xEFE0B7.
    case 0xE0B9: c.execute<0x80>(0x0000B0, 2); return true;
    // src/unknown/EF/EFE07C.asm:35 BCS @UNKNOWN2
    case 0xE0BA: c.execute<0xB0>(0x000033, 2); return true;
    // src/unknown/EF/EFE07C.asm:36 LDA @LOCAL04
    case 0xE0BC: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE07C.asm:37 AND #$003F
    case 0xE0BE: if (c.p & 0x20) c.execute<0x29>(0x00003F, 2); else c.execute<0x29>(0x00003F, 3); return true;
    // src/unknown/EF/EFE07C.asm:37 AND #$003F
    // Overlapping static entry reached from 0xEFE0BE.
    case 0xE0C0: c.execute<0x00>(0x000048, 2); return true;
    // src/unknown/EF/EFE07C.asm:38 PHA
    case 0xE0C1: c.execute<0x48>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:39 LDA @VIRTUAL02
    case 0xE0C2: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:40 AND #$003F
    case 0xE0C4: if (c.p & 0x20) c.execute<0x29>(0x00003F, 2); else c.execute<0x29>(0x00003F, 3); return true;
    // src/unknown/EF/EFE07C.asm:40 AND #$003F
    // Overlapping static entry reached from 0xEFE0C4.
    case 0xE0C6: c.execute<0x00>(0x00000A, 2); return true;
    // src/unknown/EF/EFE07C.asm:41 ASL
    case 0xE0C7: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:42 ASL
    case 0xE0C8: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:43 ASL
    case 0xE0C9: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:44 ASL
    case 0xE0CA: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:45 ASL
    case 0xE0CB: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:46 ASL
    case 0xE0CC: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:47 PLY
    case 0xE0CD: c.execute<0x7A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:48 STY @VIRTUAL02
    case 0xE0CE: c.execute<0x84>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:49 CLC
    case 0xE0D0: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:50 ADC @VIRTUAL02
    case 0xE0D1: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:51 TAX
    case 0xE0D3: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:52 LDA LOADED_COLLISION_TILES,X
    case 0xE0D4: c.execute<0xBD>(0x00E000, 3); return true;
    // src/unknown/EF/EFE07C.asm:53 AND #$00FF
    case 0xE0D7: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFE07C.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xEFE0D7.
    case 0xE0D9: c.execute<0x00>(0x0000A6, 2); return true;
    // src/unknown/EF/EFE07C.asm:54 LDX @LOCAL05
    case 0xE0DA: c.execute<0xA6>(0x00001A, 2); return true;
    // src/unknown/EF/EFE07C.asm:55 STX @VIRTUAL02
    case 0xE0DC: c.execute<0x86>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:56 LDY @VIRTUAL02
    case 0xE0DE: c.execute<0xA4>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:57 LDX @LOCAL04
    case 0xE0E0: c.execute<0xA6>(0x000018, 2); return true;
    // src/unknown/EF/EFE07C.asm:57 LDX @LOCAL04
    // Overlapping static entry reached from 0xEFE15A.
    case 0xE0E1: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:58 JSR UNKNOWN_EFDF0B
    case 0xE0E2: c.execute<0x20>(0x00DF0B, 3); return true;
    // src/unknown/EF/EFE07C.asm:59 STA @LOCAL01
    case 0xE0E5: c.execute<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EFE07C.asm:60 LDA @LOCAL02
    case 0xE0E7: c.execute<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EFE07C.asm:61 ASL
    case 0xE0E9: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:62 TAY
    case 0xE0EA: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:63 LDA @LOCAL01
    case 0xE0EB: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EFE07C.asm:64 STA (@LOCAL03),Y
    case 0xE0ED: c.execute<0x91>(0x000016, 2); return true;
    // src/unknown/EF/EFE07C.asm:66 LDA @LOCAL02
    case 0xE0EF: c.execute<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EFE07C.asm:67 INC
    case 0xE0F1: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:68 AND #$001F
    case 0xE0F2: if (c.p & 0x20) c.execute<0x29>(0x00001F, 2); else c.execute<0x29>(0x00001F, 3); return true;
    // src/unknown/EF/EFE07C.asm:68 AND #$001F
    // Overlapping static entry reached from 0xEFE0F2.
    case 0xE0F4: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE07C.asm:69 STA @LOCAL02
    case 0xE0F5: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE07C.asm:70 INC @VIRTUAL02
    case 0xE0F7: c.execute<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:71 LDA @VIRTUAL02
    case 0xE0F9: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:72 STA @LOCAL05
    case 0xE0FB: c.execute<0x85>(0x00001A, 2); return true;
    // src/unknown/EF/EFE07C.asm:73 INC @VIRTUAL04
    case 0xE0FD: c.execute<0xE6>(0x000004, 2); return true;
    // src/unknown/EF/EFE07C.asm:75 LDA @VIRTUAL04
    case 0xE0FF: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFE07C.asm:76 CMP #32
    case 0xE101: if (c.p & 0x20) c.execute<0xC9>(0x000020, 2); else c.execute<0xC9>(0x000020, 3); return true;
    // src/unknown/EF/EFE07C.asm:76 CMP #32
    // Overlapping static entry reached from 0xEFE101.
    case 0xE103: c.execute<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EFE07C.asm:77 BCC @UNKNOWN1
    case 0xE104: c.execute<0x90>(0x0000AF, 2); return true;
    // src/unknown/EF/EFE07C.asm:79 LDA @LOCAL03
    case 0xE106: c.execute<0xA5>(0x000016, 2); return true;
    // include/macros.asm:908 STA dest
    case 0xE108: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    case 0xE10A: c.execute<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    case 0xE10B: c.execute<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    case 0xE10D: c.execute<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    case 0xE10E: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    case 0xE110: c.execute<0x64>(0x000009, 2); return true;
    // src/unknown/EF/EFE07C.asm:81 REP #PROC_FLAGS::ACCUM8
    case 0xE112: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE114: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE116: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE118: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE11A: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE07C.asm:83 LDA @LOCAL04
    case 0xE11C: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE07C.asm:84 AND #$001F
    case 0xE11E: if (c.p & 0x20) c.execute<0x29>(0x00001F, 2); else c.execute<0x29>(0x00001F, 3); return true;
    // src/unknown/EF/EFE07C.asm:84 AND #$001F
    // Overlapping static entry reached from 0xEFE11E.
    case 0xE120: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EFE07C.asm:85 CLC
    case 0xE121: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:86 ADC #VRAM::TEXT_LAYER_TILEMAP
    case 0xE122: if (c.p & 0x20) c.execute<0x69>(0x000000, 2); else c.execute<0x69>(0x007C00, 3); return true;
    // src/unknown/EF/EFE07C.asm:86 ADC #VRAM::TEXT_LAYER_TILEMAP
    // Overlapping static entry reached from 0xEFE122.
    case 0xE124: c.execute<0x7C>(0x00A2A8, 3); return true;
    // src/unknown/EF/EFE07C.asm:87 TAY
    case 0xE125: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:88 LDX #64
    case 0xE126: if (c.p & 0x10) c.execute<0xA2>(0x000040, 2); else c.execute<0xA2>(0x000040, 3); return true;
    // src/unknown/EF/EFE07C.asm:88 LDX #64
    // Overlapping static entry reached from 0xEFE126.
    case 0xE128: c.execute<0x00>(0x0000E2, 2); return true;
    // src/unknown/EF/EFE07C.asm:89 SEP #PROC_FLAGS::ACCUM8
    case 0xE129: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFE07C.asm:90 LDA #27
    case 0xE12B: if (c.p & 0x20) c.execute<0xA9>(0x00001B, 2); else c.execute<0xA9>(0x00221B, 3); return true;
    // src/unknown/EF/EFE07C.asm:91 JSL PREPARE_VRAM_COPY
    case 0xE12D: c.execute<0x22>(0xC08616, 4); return true;
    // src/unknown/EF/EFE07C.asm:91 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFE12B.
    case 0xE12E: c.execute<0x16>(0x000086, 2); return true;
    // src/unknown/EF/EFE07C.asm:91 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFE12E.
    case 0xE130: if (c.p & 0x10) c.execute<0xC0>(0x00002B, 2); else c.execute<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    case 0xE131: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xE132: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE133: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE135: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xE136: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE137: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE138: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFE138.
    case 0xE13A: c.execute<0xFF>(0x4A685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE13B: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xE13C: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:9 LSR
    case 0xE13D: c.execute<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:10 LSR
    case 0xE13E: c.execute<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:11 LSR
    case 0xE13F: c.execute<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:12 SEC
    case 0xE140: c.execute<0x38>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:13 SBC #16
    case 0xE141: if (c.p & 0x20) c.execute<0xE9>(0x000010, 2); else c.execute<0xE9>(0x000010, 3); return true;
    // src/unknown/EF/EFE133.asm:13 SBC #16
    // Overlapping static entry reached from 0xEFE141.
    case 0xE143: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE133.asm:14 STA @VIRTUAL04
    case 0xE144: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFE133.asm:15 TXA
    case 0xE146: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:16 LSR
    case 0xE147: c.execute<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:17 LSR
    case 0xE148: c.execute<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:18 LSR
    case 0xE149: c.execute<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:19 SEC
    case 0xE14A: c.execute<0x38>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:20 SBC #14
    case 0xE14B: if (c.p & 0x20) c.execute<0xE9>(0x00000E, 2); else c.execute<0xE9>(0x00000E, 3); return true;
    // src/unknown/EF/EFE133.asm:20 SBC #14
    // Overlapping static entry reached from 0xEFE14B.
    case 0xE14D: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE133.asm:21 STA @VIRTUAL02
    case 0xE14E: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFE133.asm:22 STA @LOCAL01
    case 0xE150: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE133.asm:23 LDY #.LOWORD(-1)
    case 0xE152: if (c.p & 0x10) c.execute<0xA0>(0x0000FF, 2); else c.execute<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE133.asm:23 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFE152.
    case 0xE154: c.execute<0xFF>(0x800E84, 4); return true;
    // src/unknown/EF/EFE133.asm:24 STY @LOCAL00
    case 0xE155: c.execute<0x84>(0x00000E, 2); return true;
    // src/unknown/EF/EFE133.asm:25 BRA @UNKNOWN1
    case 0xE157: c.execute<0x80>(0x000015, 2); return true;
    // src/unknown/EF/EFE133.asm:25 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xEFE154.
    case 0xE158: c.execute<0x15>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE133.asm:27 LDA @LOCAL01
    case 0xE159: c.execute<0xA5>(0x000010, 2); return true;
    // src/unknown/EF/EFE133.asm:27 LDA @LOCAL01
    // Overlapping static entry reached from 0xEFE158.
    case 0xE15A: c.execute<0x10>(0x000085, 2); return true;
    // src/unknown/EF/EFE133.asm:28 STA @VIRTUAL02
    case 0xE15B: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFE133.asm:28 STA @VIRTUAL02
    // Overlapping static entry reached from 0xEFE15A.
    case 0xE15C: c.execute<0x02>(0x000084, 2); return true;
    // src/unknown/EF/EFE133.asm:29 STY @VIRTUAL02
    case 0xE15D: c.execute<0x84>(0x000002, 2); return true;
    // src/unknown/EF/EFE133.asm:30 CLC
    case 0xE15F: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:31 ADC @VIRTUAL02
    case 0xE160: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/EF/EFE133.asm:32 TAX
    case 0xE162: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:33 LDA @VIRTUAL04
    case 0xE163: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFE133.asm:34 JSL UNKNOWN_EFDFC4
    case 0xE165: c.execute<0x22>(0xEFDFC4, 4); return true;
    // src/unknown/EF/EFE133.asm:35 LDY @LOCAL00
    case 0xE169: c.execute<0xA4>(0x00000E, 2); return true;
    // src/unknown/EF/EFE133.asm:36 INY
    case 0xE16B: c.execute<0xC8>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:37 STY @LOCAL00
    case 0xE16C: c.execute<0x84>(0x00000E, 2); return true;
    // src/unknown/EF/EFE133.asm:39 CPY #31
    case 0xE16E: if (c.p & 0x10) c.execute<0xC0>(0x00001F, 2); else c.execute<0xC0>(0x00001F, 3); return true;
    // src/unknown/EF/EFE133.asm:39 CPY #31
    // Overlapping static entry reached from 0xEFE16E.
    case 0xE170: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE133.asm:40 BNE @UNKNOWN0
    case 0xE171: c.execute<0xD0>(0x0000E6, 2); return true;
    // include/macros.asm:25 PLD
    case 0xE173: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xE174: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE175: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE177: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE178: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE179: if (c.p & 0x20) c.execute<0x69>(0x0000E2, 2); else c.execute<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFE179.
    case 0xE17B: c.execute<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE17C: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xE17D: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFE17D.
    case 0xE17F: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xE180: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xE182: if (c.p & 0x20) c.execute<0xA9>(0x00007F, 2); else c.execute<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFE182.
    case 0xE184: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xE185: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EFE175.asm:15 LDA #0
    case 0xE187: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:15 LDA #0
    // Overlapping static entry reached from 0xEFE187.
    case 0xE189: c.execute<0x00>(0x000087, 2); return true;
    // src/unknown/EF/EFE175.asm:16 STA [@VIRTUAL06]
    case 0xE18A: c.execute<0x87>(0x000006, 2); return true;
    // src/unknown/EF/EFE175.asm:17 LDA DEBUG_START_POSITION_X
    case 0xE18C: c.execute<0xAD>(0x00B561, 3); return true;
    // src/unknown/EF/EFE175.asm:18 STA @VIRTUAL04
    case 0xE18F: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:19 LDA DEBUG_START_POSITION_Y
    case 0xE191: c.execute<0xAD>(0x00B563, 3); return true;
    // src/unknown/EF/EFE175.asm:20 STA @VIRTUAL02
    case 0xE194: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFE175.asm:21 JSL UNKNOWN_C08726
    case 0xE196: c.execute<0x22>(0xC08726, 4); return true;
    // src/unknown/EF/EFE175.asm:22 JSL UNKNOWN_C0927C
    case 0xE19A: c.execute<0x22>(0xC0927C, 4); return true;
    // src/unknown/EF/EFE175.asm:23 JSL UNKNOWN_C01A86
    case 0xE19E: c.execute<0x22>(0xC01A86, 4); return true;
    // src/unknown/EF/EFE175.asm:24 LDX #0
    case 0xE1A2: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:24 LDX #0
    // Overlapping static entry reached from 0xEFE1A2.
    case 0xE1A4: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFE175.asm:25 LDA #$8000
    case 0xE1A5: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x008000, 3); return true;
    // src/unknown/EF/EFE175.asm:25 LDA #$8000
    // Overlapping static entry reached from 0xEFE1A5.
    case 0xE1A7: c.execute<0x80>(0x000022, 2); return true;
    // src/unknown/EF/EFE175.asm:26 JSL ALLOC_SPRITE_MEM
    case 0xE1A8: c.execute<0x22>(0xC01C11, 4); return true;
    // src/unknown/EF/EFE175.asm:27 JSL INITIALIZE_MISC_OBJECT_DATA
    case 0xE1AC: c.execute<0x22>(0xC01A69, 4); return true;
    // src/unknown/EF/EFE175.asm:28 LDA DEBUG_VIEW_CHARACTER_SPRITE
    case 0xE1B0: c.execute<0xAD>(0x00B565, 3); return true;
    // src/unknown/EF/EFE175.asm:29 STA @LOCAL07
    case 0xE1B3: c.execute<0x85>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:30 LDA #23
    case 0xE1B5: if (c.p & 0x20) c.execute<0xA9>(0x000017, 2); else c.execute<0xA9>(0x000017, 3); return true;
    // src/unknown/EF/EFE175.asm:30 LDA #23
    // Overlapping static entry reached from 0xEFE1B5.
    case 0xE1B7: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFE175.asm:31 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xE1B8: c.execute<0x8D>(0x000A4C, 3); return true;
    // src/unknown/EF/EFE175.asm:32 LDA #24
    case 0xE1BB: if (c.p & 0x20) c.execute<0xA9>(0x000018, 2); else c.execute<0xA9>(0x000018, 3); return true;
    // src/unknown/EF/EFE175.asm:32 LDA #24
    // Overlapping static entry reached from 0xEFE1BB.
    case 0xE1BD: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFE175.asm:33 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xE1BE: c.execute<0x8D>(0x000A4E, 3); return true;
    // src/unknown/EF/EFE175.asm:34 LDA #3
    case 0xE1C1: if (c.p & 0x20) c.execute<0xA9>(0x000003, 2); else c.execute<0xA9>(0x000003, 3); return true;
    // src/unknown/EF/EFE175.asm:34 LDA #3
    // Overlapping static entry reached from 0xEFE1C1.
    case 0xE1C3: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFE175.asm:35 STA NEW_ENTITY_PRIORITY
    case 0xE1C4: c.execute<0x8D>(0x000A4A, 3); return true;
    // src/unknown/EF/EFE175.asm:36 LDA @VIRTUAL04
    case 0xE1C7: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:37 STA GAME_STATE+game_state::leader_x_coord
    case 0xE1C9: c.execute<0x8D>(0x009877, 3); return true;
    // src/unknown/EF/EFE175.asm:37 STA GAME_STATE+game_state::leader_x_coord
    // Overlapping static entry reached from 0xEFE1A7.
    case 0xE1CB: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:38 LDA @VIRTUAL02
    case 0xE1CC: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE175.asm:39 STA GAME_STATE+game_state::leader_y_coord
    case 0xE1CE: c.execute<0x8D>(0x00987B, 3); return true;
    // src/unknown/EF/EFE175.asm:40 LDY #0
    case 0xE1D1: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:40 LDY #0
    // Overlapping static entry reached from 0xEFE1D1.
    case 0xE1D3: c.execute<0x00>(0x0000BB, 2); return true;
    // src/unknown/EF/EFE175.asm:41 TYX
    case 0xE1D4: c.execute<0xBB>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:42 LDA #EVENT_SCRIPT::EVENT_001
    case 0xE1D5: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFE175.asm:42 LDA #EVENT_SCRIPT::EVENT_001
    // Overlapping static entry reached from 0xEFE1D5.
    case 0xE1D7: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175.asm:43 JSL INIT_ENTITY
    case 0xE1D8: c.execute<0x22>(0xC09321, 4); return true;
    // src/unknown/EF/EFE175.asm:44 JSL UNKNOWN_C02D29
    case 0xE1DC: c.execute<0x22>(0xC02D29, 4); return true;
    // src/unknown/EF/EFE175.asm:45 LDX #0
    case 0xE1E0: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:45 LDX #0
    // Overlapping static entry reached from 0xEFE1E0.
    case 0xE1E2: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EFE175.asm:46 BRA @UNKNOWN1
    case 0xE1E3: c.execute<0x80>(0x000006, 2); return true;
    // src/unknown/EF/EFE175.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xE1E5: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFE175.asm:49 STZ GAME_STATE + game_state::party_members,X
    case 0xE1E7: c.execute<0x9E>(0x00986F, 3); return true;
    // src/unknown/EF/EFE175.asm:50 INX
    case 0xE1EA: c.execute<0xE8>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:52 CPX #6
    case 0xE1EB: if (c.p & 0x10) c.execute<0xE0>(0x000006, 2); else c.execute<0xE0>(0x000006, 3); return true;
    // src/unknown/EF/EFE175.asm:52 CPX #6
    // Overlapping static entry reached from 0xEFE1EB.
    case 0xE1ED: c.execute<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EFE175.asm:53 BCC @UNKNOWN0
    case 0xE1EE: c.execute<0x90>(0x0000F5, 2); return true;
    // src/unknown/EF/EFE175.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0xE1F0: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFE175.asm:55 LDA #CHARACTER_PAULA
    case 0xE1F2: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFE175.asm:55 LDA #CHARACTER_PAULA
    // Overlapping static entry reached from 0xEFE1F2.
    case 0xE1F4: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175.asm:56 JSL ADD_CHAR_TO_PARTY
    case 0xE1F5: c.execute<0x22>(0xC228F8, 4); return true;
    // src/unknown/EF/EFE175.asm:57 LDA DEBUG_MODE_NUMBER
    case 0xE1F9: c.execute<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE175.asm:58 CMP #5
    case 0xE1FC: if (c.p & 0x20) c.execute<0xC9>(0x000005, 2); else c.execute<0xC9>(0x000005, 3); return true;
    // src/unknown/EF/EFE175.asm:58 CMP #5
    // Overlapping static entry reached from 0xEFE1FC.
    case 0xE1FE: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175.asm:59 BEQ @UNKNOWN2
    case 0xE1FF: c.execute<0xF0>(0x000016, 2); return true;
    // src/unknown/EF/EFE175.asm:60 LDA DEBUG_MODE_NUMBER
    case 0xE201: c.execute<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE175.asm:60 LDA DEBUG_MODE_NUMBER
    // Overlapping static entry reached from 0xEFE264.
    case 0xE203: c.execute<0xB5>(0x0000C9, 2); return true;
    // src/unknown/EF/EFE175.asm:61 CMP #3
    case 0xE204: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFE175.asm:61 CMP #3
    // Overlapping static entry reached from 0xEFE203.
    case 0xE205: c.execute<0x03>(0x000000, 2); return true;
    // src/unknown/EF/EFE175.asm:61 CMP #3
    // Overlapping static entry reached from 0xEFE204.
    case 0xE206: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175.asm:62 BEQ @UNKNOWN2
    case 0xE207: c.execute<0xF0>(0x00000E, 2); return true;
    // src/unknown/EF/EFE175.asm:63 LDA #CHARACTER_JEFF
    case 0xE209: if (c.p & 0x20) c.execute<0xA9>(0x000002, 2); else c.execute<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EFE175.asm:63 LDA #CHARACTER_JEFF
    // Overlapping static entry reached from 0xEFE209.
    case 0xE20B: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175.asm:64 JSL ADD_CHAR_TO_PARTY
    case 0xE20C: c.execute<0x22>(0xC228F8, 4); return true;
    // src/unknown/EF/EFE175.asm:65 LDA #CHARACTER_POO
    case 0xE210: if (c.p & 0x20) c.execute<0xA9>(0x000003, 2); else c.execute<0xA9>(0x000003, 3); return true;
    // src/unknown/EF/EFE175.asm:65 LDA #CHARACTER_POO
    // Overlapping static entry reached from 0xEFE210.
    case 0xE212: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175.asm:66 JSL ADD_CHAR_TO_PARTY
    case 0xE213: c.execute<0x22>(0xC228F8, 4); return true;
    // src/unknown/EF/EFE175.asm:68 LDA #<-1
    case 0xE217: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x0000FF, 3); return true;
    // src/unknown/EF/EFE175.asm:68 LDA #<-1
    // Overlapping static entry reached from 0xEFE217.
    case 0xE219: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175.asm:69 JSL UNKNOWN_C46631
    case 0xE21A: c.execute<0x22>(0xC46631, 4); return true;
    // src/unknown/EF/EFE175.asm:70 LDX #128
    case 0xE21E: if (c.p & 0x10) c.execute<0xA2>(0x000080, 2); else c.execute<0xA2>(0x000080, 3); return true;
    // src/unknown/EF/EFE175.asm:70 LDX #128
    // Overlapping static entry reached from 0xEFE21E.
    case 0xE220: c.execute<0x00>(0x00008E, 2); return true;
    // src/unknown/EF/EFE175.asm:71 STX ENTITY_SCREEN_X_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xE221: c.execute<0x8E>(0x000B46, 3); return true;
    // src/unknown/EF/EFE175.asm:72 LDX #112
    case 0xE224: if (c.p & 0x10) c.execute<0xA2>(0x000070, 2); else c.execute<0xA2>(0x000070, 3); return true;
    // src/unknown/EF/EFE175.asm:72 LDX #112
    // Overlapping static entry reached from 0xEFE224.
    case 0xE226: c.execute<0x00>(0x00008E, 2); return true;
    // src/unknown/EF/EFE175.asm:73 STX ENTITY_SCREEN_Y_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xE227: c.execute<0x8E>(0x000B82, 3); return true;
    // src/unknown/EF/EFE175.asm:74 LDA DEBUG_MODE_NUMBER
    case 0xE22A: c.execute<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE175.asm:75 CMP #2
    case 0xE22D: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFE175.asm:75 CMP #2
    // Overlapping static entry reached from 0xEFE22D.
    case 0xE22F: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175.asm:76 BNE @UNKNOWN3
    case 0xE230: c.execute<0xD0>(0x000036, 2); return true;
    // src/unknown/EF/EFE175.asm:77 LDA #32
    case 0xE232: if (c.p & 0x20) c.execute<0xA9>(0x000020, 2); else c.execute<0xA9>(0x000020, 3); return true;
    // src/unknown/EF/EFE175.asm:77 LDA #32
    // Overlapping static entry reached from 0xEFE232.
    case 0xE234: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE175.asm:78 STA @LOCAL00
    case 0xE235: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE175.asm:79 STA @LOCAL01
    case 0xE237: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE175.asm:80 LDY #.LOWORD(-1)
    case 0xE239: if (c.p & 0x10) c.execute<0xA0>(0x0000FF, 2); else c.execute<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175.asm:80 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFE239.
    case 0xE23B: c.execute<0xFF>(0x0004A2, 4); return true;
    // src/unknown/EF/EFE175.asm:81 LDX #EVENT_SCRIPT::EVENT_004
    case 0xE23C: if (c.p & 0x10) c.execute<0xA2>(0x000004, 2); else c.execute<0xA2>(0x000004, 3); return true;
    // src/unknown/EF/EFE175.asm:81 LDX #EVENT_SCRIPT::EVENT_004
    // Overlapping static entry reached from 0xEFE23C.
    case 0xE23E: c.execute<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE175.asm:82 LDA @LOCAL07
    case 0xE23F: c.execute<0xA5>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:83 JSL CREATE_ENTITY
    case 0xE241: c.execute<0x22>(0xC01E49, 4); return true;
    // src/unknown/EF/EFE175.asm:84 STA @LOCAL06
    case 0xE245: c.execute<0x85>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175.asm:85 ASL
    case 0xE247: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:86 STA @LOCAL05
    case 0xE248: c.execute<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFE175.asm:87 CLC
    case 0xE24A: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:88 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xE24B: if (c.p & 0x20) c.execute<0x69>(0x0000B6, 2); else c.execute<0x69>(0x0010B6, 3); return true;
    // src/unknown/EF/EFE175.asm:88 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xEFE24B.
    case 0xE24D: c.execute<0x10>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175.asm:89 TAX
    case 0xE24E: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:90 LDA __BSS_START__,X
    case 0xE24F: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:91 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xE252: if (c.p & 0x20) c.execute<0x09>(0x000000, 2); else c.execute<0x09>(0x00C000, 3); return true;
    // src/unknown/EF/EFE175.asm:91 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xEFE252.
    case 0xE254: if (c.p & 0x10) c.execute<0xC0>(0x00009D, 2); else c.execute<0xC0>(0x00009D, 3); return true;
    // src/unknown/EF/EFE175.asm:92 STA __BSS_START__,X
    case 0xE255: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:92 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFE254.
    case 0xE256: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EFE175.asm:92 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFE254.
    case 0xE257: c.execute<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE175.asm:93 LDA @LOCAL05
    case 0xE258: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE175.asm:94 CLC
    case 0xE25A: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:95 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xE25B: if (c.p & 0x20) c.execute<0x69>(0x00006A, 2); else c.execute<0x69>(0x00116A, 3); return true;
    // src/unknown/EF/EFE175.asm:95 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xEFE25B.
    case 0xE25D: c.execute<0x11>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175.asm:96 TAX
    case 0xE25E: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:97 LDA __BSS_START__,X
    case 0xE25F: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:98 ORA #$8000
    case 0xE262: if (c.p & 0x20) c.execute<0x09>(0x000000, 2); else c.execute<0x09>(0x008000, 3); return true;
    // src/unknown/EF/EFE175.asm:98 ORA #$8000
    // Overlapping static entry reached from 0xEFE262.
    case 0xE264: c.execute<0x80>(0x00009D, 2); return true;
    // src/unknown/EF/EFE175.asm:99 STA __BSS_START__,X
    case 0xE265: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:101 SEP #PROC_FLAGS::ACCUM8
    case 0xE268: c.execute<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1284 STZ dest
    case 0xE26A: c.execute<0x64>(0x00000E, 2); return true;
    // src/unknown/EF/EFE175.asm:103 LDX #BPP4PALETTE_SIZE * 16
    case 0xE26C: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000200, 3); return true;
    // src/unknown/EF/EFE175.asm:103 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xEFE26C.
    case 0xE26E: c.execute<0x02>(0x0000C2, 2); return true;
    // src/unknown/EF/EFE175.asm:104 REP #PROC_FLAGS::ACCUM8
    case 0xE26F: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFE175.asm:105 LDA #.LOWORD(PALETTES)
    case 0xE271: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000200, 3); return true;
    // src/unknown/EF/EFE175.asm:105 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xEFE271.
    case 0xE273: c.execute<0x02>(0x000022, 2); return true;
    // src/unknown/EF/EFE175.asm:106 JSL MEMSET16
    case 0xE274: c.execute<0x22>(0xC08EFC, 4); return true;
    // src/unknown/EF/EFE175.asm:107 JSL OVERWORLD_INITIALIZE
    case 0xE278: c.execute<0x22>(0xC0004B, 4); return true;
    // src/unknown/EF/EFE175.asm:108 LDX @VIRTUAL02
    case 0xE27C: c.execute<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFE175.asm:109 LDA @VIRTUAL04
    case 0xE27E: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:110 JSL LOAD_MAP_AT_POSITION
    case 0xE280: c.execute<0x22>(0xC013F6, 4); return true;
    // src/unknown/EF/EFE175.asm:111 LDY #4
    case 0xE284: if (c.p & 0x10) c.execute<0xA0>(0x000004, 2); else c.execute<0xA0>(0x000004, 3); return true;
    // src/unknown/EF/EFE175.asm:111 LDY #4
    // Overlapping static entry reached from 0xEFE284.
    case 0xE286: c.execute<0x00>(0x0000A6, 2); return true;
    // src/unknown/EF/EFE175.asm:112 LDX @VIRTUAL02
    case 0xE287: c.execute<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFE175.asm:113 LDA @VIRTUAL04
    case 0xE289: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:114 JSL UNKNOWN_C03FA9
    case 0xE28B: c.execute<0x22>(0xC03FA9, 4); return true;
    // src/unknown/EF/EFE175.asm:115 JSL UNKNOWN_EFD95E
    case 0xE28F: c.execute<0x22>(0xEFD95E, 4); return true;
    // src/unknown/EF/EFE175.asm:116 LDA DEBUG_MODE_NUMBER
    case 0xE293: c.execute<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE175.asm:117 CMP #3
    case 0xE296: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFE175.asm:117 CMP #3
    // Overlapping static entry reached from 0xEFE296.
    case 0xE298: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175.asm:118 BNE @UNKNOWN4
    case 0xE299: c.execute<0xD0>(0x000020, 2); return true;
    // src/unknown/EF/EFE175.asm:119 SEP #PROC_FLAGS::ACCUM8
    case 0xE29B: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFE175.asm:120 LDA #$13
    case 0xE29D: if (c.p & 0x20) c.execute<0xA9>(0x000013, 2); else c.execute<0xA9>(0x008D13, 3); return true;
    // src/unknown/EF/EFE175.asm:121 STA TM_MIRROR
    case 0xE29F: c.execute<0x8D>(0x00001A, 3); return true;
    // src/unknown/EF/EFE175.asm:121 STA TM_MIRROR
    // Overlapping static entry reached from 0xEFE29D.
    case 0xE2A0: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:121 STA TM_MIRROR
    // Overlapping static entry reached from 0xEFE2A0.
    case 0xE2A1: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFE175.asm:122 LDA #$04
    case 0xE2A2: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x008D04, 3); return true;
    // src/unknown/EF/EFE175.asm:123 STA TD_MIRROR
    case 0xE2A4: c.execute<0x8D>(0x00001B, 3); return true;
    // src/unknown/EF/EFE175.asm:123 STA TD_MIRROR
    // Overlapping static entry reached from 0xEFE2A2.
    case 0xE2A5: c.execute<0x1B>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:123 STA TD_MIRROR
    // Overlapping static entry reached from 0xEFE2A5.
    case 0xE2A6: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFE175.asm:124 LDA #$02
    case 0xE2A7: if (c.p & 0x20) c.execute<0xA9>(0x000002, 2); else c.execute<0xA9>(0x008F02, 3); return true;
    // src/unknown/EF/EFE175.asm:125 STA f:CGWSEL
    case 0xE2A9: c.execute<0x8F>(0x002130, 4); return true;
    // src/unknown/EF/EFE175.asm:125 STA f:CGWSEL
    // Overlapping static entry reached from 0xEFE2A7.
    case 0xE2AA: c.execute<0x30>(0x000021, 2); return true;
    // src/unknown/EF/EFE175.asm:125 STA f:CGWSEL
    // Overlapping static entry reached from 0xEFE2AA.
    case 0xE2AC: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFE175.asm:126 LDA #$47
    case 0xE2AD: if (c.p & 0x20) c.execute<0xA9>(0x000047, 2); else c.execute<0xA9>(0x008F47, 3); return true;
    // src/unknown/EF/EFE175.asm:127 STA f:CGADSUB
    case 0xE2AF: c.execute<0x8F>(0x002131, 4); return true;
    // src/unknown/EF/EFE175.asm:127 STA f:CGADSUB
    // Overlapping static entry reached from 0xEFE2AD.
    case 0xE2B0: c.execute<0x31>(0x000021, 2); return true;
    // src/unknown/EF/EFE175.asm:127 STA f:CGADSUB
    // Overlapping static entry reached from 0xEFE2B0.
    case 0xE2B2: c.execute<0x00>(0x0000C2, 2); return true;
    // src/unknown/EF/EFE175.asm:128 REP #PROC_FLAGS::ACCUM8
    case 0xE2B3: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFE175.asm:129 LDA #3
    case 0xE2B5: if (c.p & 0x20) c.execute<0xA9>(0x000003, 2); else c.execute<0xA9>(0x000003, 3); return true;
    // src/unknown/EF/EFE175.asm:129 LDA #3
    // Overlapping static entry reached from 0xEFE2B5.
    case 0xE2B7: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFE175.asm:130 STA DEBUG_MODE_NUMBER
    case 0xE2B8: c.execute<0x8D>(0x00B559, 3); return true;
    // src/unknown/EF/EFE175.asm:132 LDA DEBUG_MODE_NUMBER
    case 0xE2BB: c.execute<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE175.asm:133 CMP #5
    case 0xE2BE: if (c.p & 0x20) c.execute<0xC9>(0x000005, 2); else c.execute<0xC9>(0x000005, 3); return true;
    // src/unknown/EF/EFE175.asm:133 CMP #5
    // Overlapping static entry reached from 0xEFE2BE.
    case 0xE2C0: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175.asm:134 BNE @UNKNOWN5
    case 0xE2C1: c.execute<0xD0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:135 JSL UNKNOWN_EFEAC8
    case 0xE2C3: c.execute<0x22>(0xEFEAC8, 4); return true;
    // src/unknown/EF/EFE175.asm:137 LDA #.LOWORD(PROCESS_OVERWORLD_TASKS)
    case 0xE2C7: if (c.p & 0x20) c.execute<0xA9>(0x00004E, 2); else c.execute<0xA9>(0x00DC4E, 3); return true;
    // src/unknown/EF/EFE175.asm:137 LDA #.LOWORD(PROCESS_OVERWORLD_TASKS)
    // Overlapping static entry reached from 0xEFE2C7.
    case 0xE2C9: c.execute<0xDC>(0x001C22, 3); return true;
    // src/unknown/EF/EFE175.asm:138 JSL SET_IRQ_CALLBACK
    case 0xE2CA: c.execute<0x22>(0xC0851C, 4); return true;
    // src/unknown/EF/EFE175.asm:138 JSL SET_IRQ_CALLBACK
    // Overlapping static entry reached from 0xEFE2AA.
    case 0xE2CD: if (c.p & 0x10) c.execute<0xC0>(0x000022, 2); else c.execute<0xC0>(0x004422, 3); return true;
    // src/unknown/EF/EFE175.asm:139 JSL UNKNOWN_C08744
    case 0xE2CE: c.execute<0x22>(0xC08744, 4); return true;
    // src/unknown/EF/EFE175.asm:139 JSL UNKNOWN_C08744
    // Overlapping static entry reached from 0xEFE2CD.
    case 0xE2CF: c.execute<0x44>(0x00C087, 3); return true;
    // src/unknown/EF/EFE175.asm:139 JSL UNKNOWN_C08744
    // Overlapping static entry reached from 0xEFE2CD.
    case 0xE2D0: c.execute<0x87>(0x0000C0, 2); return true;
    // src/unknown/EF/EFE175.asm:140 LDX #1
    case 0xE2D2: if (c.p & 0x10) c.execute<0xA2>(0x000001, 2); else c.execute<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EFE175.asm:140 LDX #1
    // Overlapping static entry reached from 0xEFE2D2.
    case 0xE2D4: c.execute<0x00>(0x00008A, 2); return true;
    // src/unknown/EF/EFE175.asm:141 TXA
    case 0xE2D5: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:142 JSL FADE_IN
    case 0xE2D6: c.execute<0x22>(0xC0886C, 4); return true;
    // src/unknown/EF/EFE175.asm:144 JSL OAM_CLEAR
    case 0xE2DA: c.execute<0x22>(0xC088B1, 4); return true;
    // src/unknown/EF/EFE175.asm:145 LDA DEBUG_MODE_NUMBER
    case 0xE2DE: c.execute<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE175.asm:146 CMP #2
    case 0xE2E1: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFE175.asm:146 CMP #2
    // Overlapping static entry reached from 0xEFE2E1.
    case 0xE2E3: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175.asm:147 BEQ @UNKNOWN7
    case 0xE2E4: c.execute<0xF0>(0x000007, 2); return true;
    // src/unknown/EF/EFE175.asm:148 CMP #5
    case 0xE2E6: if (c.p & 0x20) c.execute<0xC9>(0x000005, 2); else c.execute<0xC9>(0x000005, 3); return true;
    // src/unknown/EF/EFE175.asm:148 CMP #5
    // Overlapping static entry reached from 0xEFE2E6.
    case 0xE2E8: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175.asm:149 BEQ @UNKNOWN8
    case 0xE2E9: c.execute<0xF0>(0x000007, 2); return true;
    // src/unknown/EF/EFE175.asm:150 BRA @UNKNOWN9
    case 0xE2EB: c.execute<0x80>(0x000008, 2); return true;
    // src/unknown/EF/EFE175.asm:152 JSR DISPLAY_VIEW_CHARACTER_DEBUG_OVERLAY
    case 0xE2ED: c.execute<0x20>(0x00DE1A, 3); return true;
    // src/unknown/EF/EFE175.asm:153 BRA @UNKNOWN9
    case 0xE2F0: c.execute<0x80>(0x000003, 2); return true;
    // src/unknown/EF/EFE175.asm:155 JSR DISPLAY_CHECK_POSITION_DEBUG_OVERLAY
    case 0xE2F2: c.execute<0x20>(0x00DCBC, 3); return true;
    // src/unknown/EF/EFE175.asm:157 LDA PAD_PRESS
    case 0xE2F5: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFE175.asm:158 AND #PAD::A_BUTTON
    case 0xE2F8: if (c.p & 0x20) c.execute<0x29>(0x000080, 2); else c.execute<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EFE175.asm:158 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xEFE2F8.
    case 0xE2FA: c.execute<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    case 0xE2FB: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xE2FD: c.execute<0x4C>(0x00E387, 3); return true;
    // src/unknown/EF/EFE175.asm:160 STZ BATTLE_SWIRL_COUNTDOWN
    case 0xE300: c.execute<0x9C>(0x005D60, 3); return true;
    // src/unknown/EF/EFE175.asm:161 LDA PAD_STATE
    case 0xE303: c.execute<0xAD>(0x000065, 3); return true;
    // src/unknown/EF/EFE175.asm:162 AND #PAD::X_BUTTON
    case 0xE306: if (c.p & 0x20) c.execute<0x29>(0x000040, 2); else c.execute<0x29>(0x000040, 3); return true;
    // src/unknown/EF/EFE175.asm:162 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xEFE306.
    case 0xE308: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175.asm:163 BEQ @UNKNOWN11
    case 0xE309: c.execute<0xF0>(0x000006, 2); return true;
    // src/unknown/EF/EFE175.asm:164 LDA #.LOWORD(-1)
    case 0xE30B: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175.asm:164 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFE30B.
    case 0xE30D: c.execute<0xFF>(0xB5758D, 4); return true;
    // src/unknown/EF/EFE175.asm:165 STA DEBUG_ENEMIES_ENABLED_FLAG
    case 0xE30E: c.execute<0x8D>(0x00B575, 3); return true;
    // src/unknown/EF/EFE175.asm:167 LDA #.LOWORD(-1)
    case 0xE311: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175.asm:167 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFE311.
    case 0xE313: c.execute<0xFF>(0x43708D, 4); return true;
    // src/unknown/EF/EFE175.asm:168 STA LOADED_MAP_PALETTE
    case 0xE314: c.execute<0x8D>(0x004370, 3); return true;
    // src/unknown/EF/EFE175.asm:169 STA LOADED_MAP_TILE_COMBO
    case 0xE317: c.execute<0x8D>(0x00436E, 3); return true;
    // src/unknown/EF/EFE175.asm:170 LDA SCREEN_X_PIXELS
    case 0xE31A: c.execute<0xAD>(0x004380, 3); return true;
    // src/unknown/EF/EFE175.asm:171 AND #$FFF8
    case 0xE31D: if (c.p & 0x20) c.execute<0x29>(0x0000F8, 2); else c.execute<0x29>(0x00FFF8, 3); return true;
    // src/unknown/EF/EFE175.asm:171 AND #$FFF8
    // Overlapping static entry reached from 0xEFE31D.
    case 0xE31F: c.execute<0xFF>(0x43808D, 4); return true;
    // src/unknown/EF/EFE175.asm:172 STA SCREEN_X_PIXELS
    case 0xE320: c.execute<0x8D>(0x004380, 3); return true;
    // src/unknown/EF/EFE175.asm:173 LDA SCREEN_Y_PIXELS
    case 0xE323: c.execute<0xAD>(0x004382, 3); return true;
    // src/unknown/EF/EFE175.asm:174 AND #$FFF8
    case 0xE326: if (c.p & 0x20) c.execute<0x29>(0x0000F8, 2); else c.execute<0x29>(0x00FFF8, 3); return true;
    // src/unknown/EF/EFE175.asm:174 AND #$FFF8
    // Overlapping static entry reached from 0xEFE326.
    case 0xE328: c.execute<0xFF>(0x43828D, 4); return true;
    // src/unknown/EF/EFE175.asm:175 STA SCREEN_Y_PIXELS
    case 0xE329: c.execute<0x8D>(0x004382, 3); return true;
    // src/unknown/EF/EFE175.asm:176 JSL UNKNOWN_C08726
    case 0xE32C: c.execute<0x22>(0xC08726, 4); return true;
    // src/unknown/EF/EFE175.asm:177 LDA #.LOWORD(GAME_STATE)+game_state::leader_x_coord
    case 0xE330: if (c.p & 0x20) c.execute<0xA9>(0x000077, 2); else c.execute<0xA9>(0x009877, 3); return true;
    // src/unknown/EF/EFE175.asm:177 LDA #.LOWORD(GAME_STATE)+game_state::leader_x_coord
    // Overlapping static entry reached from 0xEFE330.
    case 0xE332: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:178 STA @VIRTUAL04
    case 0xE333: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:179 LDA #.LOWORD(GAME_STATE)+game_state::leader_y_coord
    case 0xE335: if (c.p & 0x20) c.execute<0xA9>(0x00007B, 2); else c.execute<0xA9>(0x00987B, 3); return true;
    // src/unknown/EF/EFE175.asm:179 LDA #.LOWORD(GAME_STATE)+game_state::leader_y_coord
    // Overlapping static entry reached from 0xEFE335.
    case 0xE337: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:180 STA @VIRTUAL02
    case 0xE338: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFE175.asm:181 LDX @VIRTUAL02
    case 0xE33A: c.execute<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFE175.asm:182 LDA __BSS_START__,X
    case 0xE33C: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:183 TAX
    case 0xE33F: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:184 STX @LOCAL04
    case 0xE340: c.execute<0x86>(0x000016, 2); return true;
    // src/unknown/EF/EFE175.asm:185 LDX @VIRTUAL04
    case 0xE342: c.execute<0xA6>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:186 LDA __BSS_START__,X
    case 0xE344: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:187 LDX @LOCAL04
    case 0xE347: c.execute<0xA6>(0x000016, 2); return true;
    // src/unknown/EF/EFE175.asm:188 JSL LOAD_MAP_AT_POSITION
    case 0xE349: c.execute<0x22>(0xC013F6, 4); return true;
    // src/unknown/EF/EFE175.asm:189 LDY GAME_STATE+game_state::leader_direction
    case 0xE34D: c.execute<0xAC>(0x00987F, 3); return true;
    // src/unknown/EF/EFE175.asm:190 LDX @VIRTUAL02
    case 0xE350: c.execute<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFE175.asm:191 LDA __BSS_START__,X
    case 0xE352: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:192 TAX
    case 0xE355: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:193 STX @LOCAL04
    case 0xE356: c.execute<0x86>(0x000016, 2); return true;
    // src/unknown/EF/EFE175.asm:194 LDX @VIRTUAL04
    case 0xE358: c.execute<0xA6>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:195 LDA __BSS_START__,X
    case 0xE35A: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:196 LDX @LOCAL04
    case 0xE35D: c.execute<0xA6>(0x000016, 2); return true;
    // src/unknown/EF/EFE175.asm:197 JSL UNKNOWN_C03FA9
    case 0xE35F: c.execute<0x22>(0xC03FA9, 4); return true;
    // src/unknown/EF/EFE175.asm:198 JSL UNKNOWN_EFD95E
    case 0xE363: c.execute<0x22>(0xEFD95E, 4); return true;
    // src/unknown/EF/EFE175.asm:199 STZ DEBUG_ENEMIES_ENABLED_FLAG
    case 0xE367: c.execute<0x9C>(0x00B575, 3); return true;
    // src/unknown/EF/EFE175.asm:200 LDA DEBUG_MODE_NUMBER
    case 0xE36A: c.execute<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE175.asm:201 CMP #5
    case 0xE36D: if (c.p & 0x20) c.execute<0xC9>(0x000005, 2); else c.execute<0xC9>(0x000005, 3); return true;
    // src/unknown/EF/EFE175.asm:201 CMP #5
    // Overlapping static entry reached from 0xEFE36D.
    case 0xE36F: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175.asm:202 BNE @UNKNOWN12
    case 0xE370: c.execute<0xD0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:203 JSL UNKNOWN_EFEAC8
    case 0xE372: c.execute<0x22>(0xEFEAC8, 4); return true;
    // src/unknown/EF/EFE175.asm:205 JSL UNKNOWN_C08744
    case 0xE376: c.execute<0x22>(0xC08744, 4); return true;
    // src/unknown/EF/EFE175.asm:206 LDY #0
    case 0xE37A: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:206 LDY #0
    // Overlapping static entry reached from 0xEFE37A.
    case 0xE37C: c.execute<0x00>(0x0000A2, 2); return true;
    // src/unknown/EF/EFE175.asm:207 LDX #1
    case 0xE37D: if (c.p & 0x10) c.execute<0xA2>(0x000001, 2); else c.execute<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EFE175.asm:207 LDX #1
    // Overlapping static entry reached from 0xEFE37D.
    case 0xE37F: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFE175.asm:208 LDA #4
    case 0xE380: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EFE175.asm:208 LDA #4
    // Overlapping static entry reached from 0xEFE380.
    case 0xE382: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175.asm:209 JSL FADE_IN_WITH_MOSAIC
    case 0xE383: c.execute<0x22>(0xC087CE, 4); return true;
    // src/unknown/EF/EFE175.asm:211 LDA DEBUG_MODE_NUMBER
    case 0xE387: c.execute<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE175.asm:212 CMP #2
    case 0xE38A: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFE175.asm:212 CMP #2
    // Overlapping static entry reached from 0xEFE38A.
    case 0xE38C: c.execute<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    case 0xE38D: c.execute<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    case 0xE38F: c.execute<0x4C>(0x00E4C2, 3); return true;
    // src/unknown/EF/EFE175.asm:214 LDY @LOCAL07
    case 0xE392: c.execute<0xA4>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:215 LDA PAD_HELD + 2
    case 0xE394: c.execute<0xAD>(0x00006B, 3); return true;
    // src/unknown/EF/EFE175.asm:216 STA @LOCAL03
    case 0xE397: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE175.asm:217 AND #PAD::UP
    case 0xE399: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000800, 3); return true;
    // src/unknown/EF/EFE175.asm:217 AND #PAD::UP
    // Overlapping static entry reached from 0xEFE399.
    case 0xE39B: c.execute<0x08>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:218 BEQ @UNKNOWN16
    case 0xE39C: c.execute<0xF0>(0x00000F, 2); return true;
    // src/unknown/EF/EFE175.asm:219 LDA @LOCAL07
    case 0xE39E: c.execute<0xA5>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:220 CMP #333
    case 0xE3A0: if (c.p & 0x20) c.execute<0xC9>(0x00004D, 2); else c.execute<0xC9>(0x00014D, 3); return true;
    // src/unknown/EF/EFE175.asm:220 CMP #333
    // Overlapping static entry reached from 0xEFE3A0.
    case 0xE3A2: c.execute<0x01>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175.asm:221 BEQ @UNKNOWN15
    case 0xE3A3: c.execute<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:221 BEQ @UNKNOWN15
    // Overlapping static entry reached from 0xEFE3A2.
    case 0xE3A4: c.execute<0x04>(0x0000E6, 2); return true;
    // src/unknown/EF/EFE175.asm:222 INC @LOCAL07
    case 0xE3A5: c.execute<0xE6>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:222 INC @LOCAL07
    // Overlapping static entry reached from 0xEFE3A4.
    case 0xE3A6: c.execute<0x1C>(0x001880, 3); return true;
    // src/unknown/EF/EFE175.asm:223 BRA @UNKNOWN18
    case 0xE3A7: c.execute<0x80>(0x000018, 2); return true;
    // src/unknown/EF/EFE175.asm:223 BRA @UNKNOWN18
    // Overlapping static entry reached from 0xEFE3FC.
    case 0xE3A8: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:225 STZ @LOCAL07
    case 0xE3A9: c.execute<0x64>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:226 BRA @UNKNOWN18
    case 0xE3AB: c.execute<0x80>(0x000014, 2); return true;
    // src/unknown/EF/EFE175.asm:228 LDA @LOCAL03
    case 0xE3AD: c.execute<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EFE175.asm:229 AND #PAD::DOWN
    case 0xE3AF: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000400, 3); return true;
    // src/unknown/EF/EFE175.asm:229 AND #PAD::DOWN
    // Overlapping static entry reached from 0xEFE3AF.
    case 0xE3B1: c.execute<0x04>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175.asm:230 BEQ @UNKNOWN18
    case 0xE3B2: c.execute<0xF0>(0x00000D, 2); return true;
    // src/unknown/EF/EFE175.asm:230 BEQ @UNKNOWN18
    // Overlapping static entry reached from 0xEFE3B1.
    case 0xE3B3: c.execute<0x0D>(0x001CA5, 3); return true;
    // src/unknown/EF/EFE175.asm:231 LDA @LOCAL07
    case 0xE3B4: c.execute<0xA5>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:232 BEQ @UNKNOWN17
    case 0xE3B6: c.execute<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:233 DEC @LOCAL07
    case 0xE3B8: c.execute<0xC6>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:234 BRA @UNKNOWN18
    case 0xE3BA: c.execute<0x80>(0x000005, 2); return true;
    // src/unknown/EF/EFE175.asm:236 LDA #324
    case 0xE3BC: if (c.p & 0x20) c.execute<0xA9>(0x000044, 2); else c.execute<0xA9>(0x000144, 3); return true;
    // src/unknown/EF/EFE175.asm:236 LDA #324
    // Overlapping static entry reached from 0xEFE3BC.
    case 0xE3BE: c.execute<0x01>(0x000085, 2); return true;
    // src/unknown/EF/EFE175.asm:237 STA @LOCAL07
    case 0xE3BF: c.execute<0x85>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:237 STA @LOCAL07
    // Overlapping static entry reached from 0xEFE3BE.
    case 0xE3C0: c.execute<0x1C>(0x006FAD, 3); return true;
    // src/unknown/EF/EFE175.asm:239 LDA PAD_PRESS + 2
    case 0xE3C1: c.execute<0xAD>(0x00006F, 3); return true;
    // src/unknown/EF/EFE175.asm:239 LDA PAD_PRESS + 2
    // Overlapping static entry reached from 0xEFE3C0.
    case 0xE3C3: c.execute<0x00>(0x000029, 2); return true;
    // src/unknown/EF/EFE175.asm:240 AND #PAD::X_BUTTON
    case 0xE3C4: if (c.p & 0x20) c.execute<0x29>(0x000040, 2); else c.execute<0x29>(0x000040, 3); return true;
    // src/unknown/EF/EFE175.asm:240 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xEFE3C4.
    case 0xE3C6: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175.asm:241 BEQ @UNKNOWN19
    case 0xE3C7: c.execute<0xF0>(0x000023, 2); return true;
    // src/unknown/EF/EFE175.asm:242 LDA @LOCAL06
    case 0xE3C9: c.execute<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175.asm:243 ASL
    case 0xE3CB: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:244 STA @LOCAL05
    case 0xE3CC: c.execute<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFE175.asm:245 CLC
    case 0xE3CE: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:246 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xE3CF: if (c.p & 0x20) c.execute<0x69>(0x0000B6, 2); else c.execute<0x69>(0x0010B6, 3); return true;
    // src/unknown/EF/EFE175.asm:246 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xEFE3CF.
    case 0xE3D1: c.execute<0x10>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175.asm:247 TAX
    case 0xE3D2: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:248 LDA __BSS_START__,X
    case 0xE3D3: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:249 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xE3D6: if (c.p & 0x20) c.execute<0x09>(0x000000, 2); else c.execute<0x09>(0x00C000, 3); return true;
    // src/unknown/EF/EFE175.asm:249 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xEFE3D6.
    case 0xE3D8: if (c.p & 0x10) c.execute<0xC0>(0x00009D, 2); else c.execute<0xC0>(0x00009D, 3); return true;
    // src/unknown/EF/EFE175.asm:250 STA __BSS_START__,X
    case 0xE3D9: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:250 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFE3D8.
    case 0xE3DA: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EFE175.asm:250 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFE3D8.
    case 0xE3DB: c.execute<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE175.asm:251 LDA @LOCAL05
    case 0xE3DC: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE175.asm:252 CLC
    case 0xE3DE: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:253 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xE3DF: if (c.p & 0x20) c.execute<0x69>(0x00006A, 2); else c.execute<0x69>(0x00116A, 3); return true;
    // src/unknown/EF/EFE175.asm:253 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xEFE3DF.
    case 0xE3E1: c.execute<0x11>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175.asm:254 TAX
    case 0xE3E2: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:255 LDA __BSS_START__,X
    case 0xE3E3: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:256 ORA #$8000
    case 0xE3E6: if (c.p & 0x20) c.execute<0x09>(0x000000, 2); else c.execute<0x09>(0x008000, 3); return true;
    // src/unknown/EF/EFE175.asm:256 ORA #$8000
    // Overlapping static entry reached from 0xEFE3E6.
    case 0xE3E8: c.execute<0x80>(0x00009D, 2); return true;
    // src/unknown/EF/EFE175.asm:257 STA __BSS_START__,X
    case 0xE3E9: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:259 LDA PAD_PRESS + 2
    case 0xE3EC: c.execute<0xAD>(0x00006F, 3); return true;
    // src/unknown/EF/EFE175.asm:260 AND #PAD::Y_BUTTON
    case 0xE3EF: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x004000, 3); return true;
    // src/unknown/EF/EFE175.asm:260 AND #PAD::Y_BUTTON
    // Overlapping static entry reached from 0xEFE3EF.
    case 0xE3F1: c.execute<0x40>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:261 BEQ @UNKNOWN20
    case 0xE3F2: c.execute<0xF0>(0x000023, 2); return true;
    // src/unknown/EF/EFE175.asm:262 LDA @LOCAL06
    case 0xE3F4: c.execute<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175.asm:263 ASL
    case 0xE3F6: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:264 STA @LOCAL05
    case 0xE3F7: c.execute<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFE175.asm:265 CLC
    case 0xE3F9: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:266 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xE3FA: if (c.p & 0x20) c.execute<0x69>(0x0000B6, 2); else c.execute<0x69>(0x0010B6, 3); return true;
    // src/unknown/EF/EFE175.asm:266 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xEFE3FA.
    case 0xE3FC: c.execute<0x10>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175.asm:267 TAX
    case 0xE3FD: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:268 LDA __BSS_START__,X
    case 0xE3FE: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:269 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xE401: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x003FFF, 3); return true;
    // src/unknown/EF/EFE175.asm:269 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xEFE401.
    case 0xE403: c.execute<0x3F>(0x00009D, 4); return true;
    // src/unknown/EF/EFE175.asm:270 STA __BSS_START__,X
    case 0xE404: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:271 LDA @LOCAL05
    case 0xE407: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE175.asm:272 CLC
    case 0xE409: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:273 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xE40A: if (c.p & 0x20) c.execute<0x69>(0x00006A, 2); else c.execute<0x69>(0x00116A, 3); return true;
    // src/unknown/EF/EFE175.asm:273 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xEFE40A.
    case 0xE40C: c.execute<0x11>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175.asm:274 TAX
    case 0xE40D: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:275 LDA __BSS_START__,X
    case 0xE40E: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:276 AND #$7FFF
    case 0xE411: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x007FFF, 3); return true;
    // src/unknown/EF/EFE175.asm:276 AND #$7FFF
    // Overlapping static entry reached from 0xEFE411.
    case 0xE413: c.execute<0x7F>(0x00009D, 4); return true;
    // src/unknown/EF/EFE175.asm:277 STA __BSS_START__,X
    case 0xE414: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:279 CPY @LOCAL07
    case 0xE417: c.execute<0xC4>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:280 BEQ @UNKNOWN21
    case 0xE419: c.execute<0xF0>(0x00001D, 2); return true;
    // src/unknown/EF/EFE175.asm:281 LDA @LOCAL06
    case 0xE41B: c.execute<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175.asm:282 JSL UNKNOWN_C02140
    case 0xE41D: c.execute<0x22>(0xC02140, 4); return true;
    // src/unknown/EF/EFE175.asm:283 LDA #32
    case 0xE421: if (c.p & 0x20) c.execute<0xA9>(0x000020, 2); else c.execute<0xA9>(0x000020, 3); return true;
    // src/unknown/EF/EFE175.asm:283 LDA #32
    // Overlapping static entry reached from 0xEFE421.
    case 0xE423: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE175.asm:284 STA @LOCAL00
    case 0xE424: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE175.asm:285 STA @LOCAL01
    case 0xE426: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE175.asm:286 LDY @LOCAL06
    case 0xE428: c.execute<0xA4>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175.asm:287 LDX #EVENT_SCRIPT::EVENT_004
    case 0xE42A: if (c.p & 0x10) c.execute<0xA2>(0x000004, 2); else c.execute<0xA2>(0x000004, 3); return true;
    // src/unknown/EF/EFE175.asm:287 LDX #EVENT_SCRIPT::EVENT_004
    // Overlapping static entry reached from 0xEFE42A.
    case 0xE42C: c.execute<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE175.asm:288 LDA @LOCAL07
    case 0xE42D: c.execute<0xA5>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:289 JSL CREATE_ENTITY
    case 0xE42F: c.execute<0x22>(0xC01E49, 4); return true;
    // src/unknown/EF/EFE175.asm:290 ASL
    case 0xE433: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:291 TAX
    case 0xE434: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:292 STZ ENTITY_NPC_IDS,X
    case 0xE435: c.execute<0x9E>(0x002C9A, 3); return true;
    // src/unknown/EF/EFE175.asm:294 LDA PAD_PRESS + 2
    case 0xE438: c.execute<0xAD>(0x00006F, 3); return true;
    // src/unknown/EF/EFE175.asm:295 AND #PAD::A_BUTTON
    case 0xE43B: if (c.p & 0x20) c.execute<0x29>(0x000080, 2); else c.execute<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EFE175.asm:295 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xEFE43B.
    case 0xE43D: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175.asm:296 BEQ @UNKNOWN22
    case 0xE43E: c.execute<0xF0>(0x000034, 2); return true;
    // src/unknown/EF/EFE175.asm:297 LDA @LOCAL06
    case 0xE440: c.execute<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175.asm:298 ASL
    case 0xE442: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:299 TAX
    case 0xE443: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:300 LDA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xE444: c.execute<0xBD>(0x0010B6, 3); return true;
    // src/unknown/EF/EFE175.asm:301 AND #OBJECT_TICK_DISABLED
    case 0xE447: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EFE175.asm:301 AND #OBJECT_TICK_DISABLED
    // Overlapping static entry reached from 0xEFE447.
    case 0xE449: c.execute<0x80>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175.asm:302 BNE @UNKNOWN22
    case 0xE44A: c.execute<0xD0>(0x000028, 2); return true;
    // src/unknown/EF/EFE175.asm:303 LDA BG1_X_POS
    case 0xE44C: c.execute<0xAD>(0x000031, 3); return true;
    // src/unknown/EF/EFE175.asm:304 CLC
    case 0xE44F: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:305 ADC #32
    case 0xE450: if (c.p & 0x20) c.execute<0x69>(0x000020, 2); else c.execute<0x69>(0x000020, 3); return true;
    // src/unknown/EF/EFE175.asm:305 ADC #32
    // Overlapping static entry reached from 0xEFE450.
    case 0xE452: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE175.asm:306 STA @LOCAL05
    case 0xE453: c.execute<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFE175.asm:307 LDA BG1_Y_POS
    case 0xE455: c.execute<0xAD>(0x000033, 3); return true;
    // src/unknown/EF/EFE175.asm:308 CLC
    case 0xE458: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:309 ADC #32
    case 0xE459: if (c.p & 0x20) c.execute<0x69>(0x000020, 2); else c.execute<0x69>(0x000020, 3); return true;
    // src/unknown/EF/EFE175.asm:309 ADC #32
    // Overlapping static entry reached from 0xEFE459.
    case 0xE45B: c.execute<0x00>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175.asm:310 TAX
    case 0xE45C: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:311 LDA @LOCAL05
    case 0xE45D: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE175.asm:312 STA @LOCAL00
    case 0xE45F: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE175.asm:313 STX @LOCAL01
    case 0xE461: c.execute<0x86>(0x000010, 2); return true;
    // src/unknown/EF/EFE175.asm:314 LDY #.LOWORD(-1)
    case 0xE463: if (c.p & 0x10) c.execute<0xA0>(0x0000FF, 2); else c.execute<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175.asm:314 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFE463.
    case 0xE465: c.execute<0xFF>(0x0006A2, 4); return true;
    // src/unknown/EF/EFE175.asm:315 LDX #EVENT_SCRIPT::EVENT_006
    case 0xE466: if (c.p & 0x10) c.execute<0xA2>(0x000006, 2); else c.execute<0xA2>(0x000006, 3); return true;
    // src/unknown/EF/EFE175.asm:315 LDX #EVENT_SCRIPT::EVENT_006
    // Overlapping static entry reached from 0xEFE466.
    case 0xE468: c.execute<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE175.asm:316 LDA @LOCAL07
    case 0xE469: c.execute<0xA5>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:317 JSL CREATE_ENTITY
    case 0xE46B: c.execute<0x22>(0xC01E49, 4); return true;
    // src/unknown/EF/EFE175.asm:318 ASL
    case 0xE46F: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:319 TAX
    case 0xE470: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:320 STZ ENTITY_NPC_IDS,X
    case 0xE471: c.execute<0x9E>(0x002C9A, 3); return true;
    // src/unknown/EF/EFE175.asm:322 LDA PAD_PRESS + 2
    case 0xE474: c.execute<0xAD>(0x00006F, 3); return true;
    // src/unknown/EF/EFE175.asm:323 AND #PAD::B_BUTTON
    case 0xE477: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EFE175.asm:323 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xEFE477.
    case 0xE479: c.execute<0x80>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175.asm:324 BEQ @UNKNOWN26
    case 0xE47A: c.execute<0xF0>(0x000046, 2); return true;
    // src/unknown/EF/EFE175.asm:325 LDY BG1_X_POS
    case 0xE47C: c.execute<0xAC>(0x000031, 3); return true;
    // src/unknown/EF/EFE175.asm:326 LDA BG1_Y_POS
    case 0xE47F: c.execute<0xAD>(0x000033, 3); return true;
    // src/unknown/EF/EFE175.asm:327 STA @LOCAL02
    case 0xE482: c.execute<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EFE175.asm:328 LDA #0
    case 0xE484: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:328 LDA #0
    // Overlapping static entry reached from 0xEFE484.
    case 0xE486: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE175.asm:329 STA @VIRTUAL02
    case 0xE487: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFE175.asm:330 BRA @UNKNOWN25
    case 0xE489: c.execute<0x80>(0x000011, 2); return true;
    // src/unknown/EF/EFE175.asm:332 LDA @VIRTUAL02
    case 0xE48B: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE175.asm:333 ASL
    case 0xE48D: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:334 TAX
    case 0xE48E: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:335 LDA ENTITY_SCRIPT_TABLE,X
    case 0xE48F: c.execute<0xBD>(0x000A62, 3); return true;
    // src/unknown/EF/EFE175.asm:336 CMP #.LOWORD(-1)
    case 0xE492: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175.asm:336 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFE492.
    case 0xE494: c.execute<0xFF>(0x9E03F0, 4); return true;
    // src/unknown/EF/EFE175.asm:337 BEQ @UNKNOWN24
    case 0xE495: c.execute<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFE175.asm:337 BEQ @UNKNOWN24
    // Overlapping static entry reached from 0xEFE4CB.
    case 0xE496: c.execute<0x03>(0x00009E, 2); return true;
    // src/unknown/EF/EFE175.asm:338 STZ ENTITY_PATHFINDING_STATES,X
    case 0xE497: c.execute<0x9E>(0x002C5E, 3); return true;
    // src/unknown/EF/EFE175.asm:338 STZ ENTITY_PATHFINDING_STATES,X
    // Overlapping static entry reached from 0xEFE494.
    case 0xE498: c.execute<0x5E>(0x00E62C, 3); return true;
    // src/unknown/EF/EFE175.asm:340 INC @VIRTUAL02
    case 0xE49A: c.execute<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EFE175.asm:340 INC @VIRTUAL02
    // Overlapping static entry reached from 0xEFE498.
    case 0xE49B: c.execute<0x02>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE175.asm:342 LDA @VIRTUAL02
    case 0xE49C: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE175.asm:343 CMP #MAX_ENTITIES
    case 0xE49E: if (c.p & 0x20) c.execute<0xC9>(0x00001E, 2); else c.execute<0xC9>(0x00001E, 3); return true;
    // src/unknown/EF/EFE175.asm:343 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xEFE49E.
    case 0xE4A0: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175.asm:344 BNE @UNKNOWN23
    case 0xE4A1: c.execute<0xD0>(0x0000E8, 2); return true;
    // src/unknown/EF/EFE175.asm:345 STY @LOCAL00
    case 0xE4A3: c.execute<0x84>(0x00000E, 2); return true;
    // src/unknown/EF/EFE175.asm:346 LDA @LOCAL02
    case 0xE4A5: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EFE175.asm:347 STA @LOCAL01
    case 0xE4A7: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE175.asm:348 LDY #.LOWORD(-1)
    case 0xE4A9: if (c.p & 0x10) c.execute<0xA0>(0x0000FF, 2); else c.execute<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175.asm:348 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFE4A9.
    case 0xE4AB: c.execute<0xFF>(0x01F3A2, 4); return true;
    // src/unknown/EF/EFE175.asm:349 LDX #EVENT_SCRIPT::EVENT_499
    case 0xE4AC: if (c.p & 0x10) c.execute<0xA2>(0x0000F3, 2); else c.execute<0xA2>(0x0001F3, 3); return true;
    // src/unknown/EF/EFE175.asm:349 LDX #EVENT_SCRIPT::EVENT_499
    // Overlapping static entry reached from 0xEFE4AC.
    case 0xE4AE: c.execute<0x01>(0x0000A9, 2); return true;
    // src/unknown/EF/EFE175.asm:350 LDA #OVERWORLD_SPRITE::GIRL_IN_STRIPED_APRON
    case 0xE4AF: if (c.p & 0x20) c.execute<0xA9>(0x00008A, 2); else c.execute<0xA9>(0x00008A, 3); return true;
    // src/unknown/EF/EFE175.asm:350 LDA #OVERWORLD_SPRITE::GIRL_IN_STRIPED_APRON
    // Overlapping static entry reached from 0xEFE4AE.
    case 0xE4B0: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:350 LDA #OVERWORLD_SPRITE::GIRL_IN_STRIPED_APRON
    // Overlapping static entry reached from 0xEFE4AF.
    case 0xE4B1: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175.asm:351 JSL CREATE_ENTITY
    case 0xE4B2: c.execute<0x22>(0xC01E49, 4); return true;
    // src/unknown/EF/EFE175.asm:352 ASL
    case 0xE4B6: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:353 TAX
    case 0xE4B7: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:354 LDA #.LOWORD(-1)
    case 0xE4B8: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175.asm:354 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFE4B8.
    case 0xE4BA: c.execute<0xFF>(0x2C5E9D, 4); return true;
    // src/unknown/EF/EFE175.asm:355 STA ENTITY_PATHFINDING_STATES,X
    case 0xE4BB: c.execute<0x9D>(0x002C5E, 3); return true;
    // src/unknown/EF/EFE175.asm:356 JSL UNKNOWN_C0BD96
    case 0xE4BE: c.execute<0x22>(0xC0BD96, 4); return true;
    // src/unknown/EF/EFE175.asm:358 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xE4C2: c.execute<0x22>(0xC09466, 4); return true;
    // src/unknown/EF/EFE175.asm:359 LDA PAD_STATE
    case 0xE4C6: c.execute<0xAD>(0x000065, 3); return true;
    // src/unknown/EF/EFE175.asm:360 AND #PAD::START_BUTTON | PAD::SELECT_BUTTON
    case 0xE4C9: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x003000, 3); return true;
    // src/unknown/EF/EFE175.asm:360 AND #PAD::START_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xEFE4C9.
    case 0xE4CB: c.execute<0x30>(0x0000C9, 2); return true;
    // src/unknown/EF/EFE175.asm:361 CMP #PAD::START_BUTTON | PAD::SELECT_BUTTON
    case 0xE4CC: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x003000, 3); return true;
    // src/unknown/EF/EFE175.asm:361 CMP #PAD::START_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xEFE4CB.
    case 0xE4CD: c.execute<0x00>(0x000030, 2); return true;
    // src/unknown/EF/EFE175.asm:361 CMP #PAD::START_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xEFE4CC.
    case 0xE4CE: c.execute<0x30>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175.asm:362 BNE @UNKNOWN27
    case 0xE4CF: c.execute<0xD0>(0x000013, 2); return true;
    // src/unknown/EF/EFE175.asm:362 BNE @UNKNOWN27
    // Overlapping static entry reached from 0xEFE4CE.
    case 0xE4D0: c.execute<0x13>(0x0000AD, 2); return true;
    // src/unknown/EF/EFE175.asm:363 LDA ENTITY_ABS_X_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xE4D1: c.execute<0xAD>(0x000BBE, 3); return true;
    // src/unknown/EF/EFE175.asm:363 LDA ENTITY_ABS_X_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    // Overlapping static entry reached from 0xEFE4D0.
    case 0xE4D2: c.execute<0xBE>(0x008D0B, 3); return true;
    // src/unknown/EF/EFE175.asm:364 STA DEBUG_START_POSITION_X
    case 0xE4D4: c.execute<0x8D>(0x00B561, 3); return true;
    // src/unknown/EF/EFE175.asm:364 STA DEBUG_START_POSITION_X
    // Overlapping static entry reached from 0xEFE4D2.
    case 0xE4D5: c.execute<0x61>(0x0000B5, 2); return true;
    // src/unknown/EF/EFE175.asm:365 LDA ENTITY_ABS_Y_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xE4D7: c.execute<0xAD>(0x000BFA, 3); return true;
    // src/unknown/EF/EFE175.asm:366 STA DEBUG_START_POSITION_Y
    case 0xE4DA: c.execute<0x8D>(0x00B563, 3); return true;
    // src/unknown/EF/EFE175.asm:367 LDA @LOCAL07
    case 0xE4DD: c.execute<0xA5>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:368 STA DEBUG_VIEW_CHARACTER_SPRITE
    case 0xE4DF: c.execute<0x8D>(0x00B565, 3); return true;
    // src/unknown/EF/EFE175.asm:369 BRA @UNKNOWN33
    case 0xE4E2: c.execute<0x80>(0x000070, 2); return true;
    // src/unknown/EF/EFE175.asm:371 LDA PAD_PRESS
    case 0xE4E4: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFE175.asm:372 AND #PAD::Y_BUTTON
    case 0xE4E7: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x004000, 3); return true;
    // src/unknown/EF/EFE175.asm:372 AND #PAD::Y_BUTTON
    // Overlapping static entry reached from 0xEFE4E7.
    case 0xE4E9: c.execute<0x40>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:373 BEQ @UNKNOWN28
    case 0xE4EA: c.execute<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:374 JSL DEBUG_Y_BUTTON_MENU
    case 0xE4EC: c.execute<0x22>(0xC12E63, 4); return true;
    // src/unknown/EF/EFE175.asm:376 LDA DEBUG_MODE_NUMBER
    case 0xE4F0: c.execute<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE175.asm:377 CMP #3
    case 0xE4F3: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFE175.asm:377 CMP #3
    // Overlapping static entry reached from 0xEFE4F3.
    case 0xE4F5: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175.asm:378 BNE @UNKNOWN30
    case 0xE4F6: c.execute<0xD0>(0x00002C, 2); return true;
    // src/unknown/EF/EFE175.asm:379 LDA BG1_X_POS
    case 0xE4F8: c.execute<0xAD>(0x000031, 3); return true;
    // src/unknown/EF/EFE175.asm:380 STA BG3_X_POS
    case 0xE4FB: c.execute<0x8D>(0x000039, 3); return true;
    // src/unknown/EF/EFE175.asm:381 LDA BG1_Y_POS
    case 0xE4FE: c.execute<0xAD>(0x000033, 3); return true;
    // src/unknown/EF/EFE175.asm:382 STA BG3_Y_POS
    case 0xE501: c.execute<0x8D>(0x00003B, 3); return true;
    // src/unknown/EF/EFE175.asm:383 LDA PAD_PRESS
    case 0xE504: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFE175.asm:384 AND #PAD::SELECT_BUTTON
    case 0xE507: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x002000, 3); return true;
    // src/unknown/EF/EFE175.asm:384 AND #PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xEFE507.
    case 0xE509: c.execute<0x20>(0x0018F0, 3); return true;
    // src/unknown/EF/EFE175.asm:385 BEQ @UNKNOWN30
    case 0xE50A: c.execute<0xF0>(0x000018, 2); return true;
    // src/unknown/EF/EFE175.asm:386 LDX VIEW_ATTRIBUTE_MODE
    case 0xE50C: c.execute<0xAE>(0x00B55F, 3); return true;
    // src/unknown/EF/EFE175.asm:387 INX
    case 0xE50F: c.execute<0xE8>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:388 STX VIEW_ATTRIBUTE_MODE
    case 0xE510: c.execute<0x8E>(0x00B55F, 3); return true;
    // src/unknown/EF/EFE175.asm:389 CPX #4
    case 0xE513: if (c.p & 0x10) c.execute<0xE0>(0x000004, 2); else c.execute<0xE0>(0x000004, 3); return true;
    // src/unknown/EF/EFE175.asm:389 CPX #4
    // Overlapping static entry reached from 0xEFE513.
    case 0xE515: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175.asm:390 BNE @UNKNOWN29
    case 0xE516: c.execute<0xD0>(0x000003, 2); return true;
    // src/unknown/EF/EFE175.asm:391 STZ VIEW_ATTRIBUTE_MODE
    case 0xE518: c.execute<0x9C>(0x00B55F, 3); return true;
    // src/unknown/EF/EFE175.asm:393 LDX GAME_STATE+game_state::leader_y_coord
    case 0xE51B: c.execute<0xAE>(0x00987B, 3); return true;
    // src/unknown/EF/EFE175.asm:394 LDA GAME_STATE+game_state::leader_x_coord
    case 0xE51E: c.execute<0xAD>(0x009877, 3); return true;
    // src/unknown/EF/EFE175.asm:395 JSR UNKNOWN_EFE133
    case 0xE521: c.execute<0x20>(0x00E133, 3); return true;
    // src/unknown/EF/EFE175.asm:395 JSR UNKNOWN_EFE133
    // Overlapping static entry reached from 0xEFE531.
    case 0xE523: c.execute<0xE1>(0x0000AD, 2); return true;
    // src/unknown/EF/EFE175.asm:397 LDA DEBUG_MODE_NUMBER
    case 0xE524: c.execute<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE175.asm:397 LDA DEBUG_MODE_NUMBER
    // Overlapping static entry reached from 0xEFE523.
    case 0xE525: c.execute<0x59>(0x00C9B5, 3); return true;
    // src/unknown/EF/EFE175.asm:398 CMP #1
    case 0xE527: if (c.p & 0x20) c.execute<0xC9>(0x000001, 2); else c.execute<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFE175.asm:398 CMP #1
    // Overlapping static entry reached from 0xEFE525.
    case 0xE528: c.execute<0x01>(0x000000, 2); return true;
    // src/unknown/EF/EFE175.asm:398 CMP #1
    // Overlapping static entry reached from 0xEFE527.
    case 0xE529: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175.asm:399 BNE @UNKNOWN31
    case 0xE52A: c.execute<0xD0>(0x00000C, 2); return true;
    // src/unknown/EF/EFE175.asm:400 LDA PAD_PRESS
    case 0xE52C: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFE175.asm:401 AND #PAD::B_BUTTON
    case 0xE52F: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EFE175.asm:401 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xEFE52F.
    case 0xE531: c.execute<0x80>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175.asm:402 BEQ @UNKNOWN31
    case 0xE532: c.execute<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:403 JSL OPEN_MENU_BUTTON
    case 0xE534: c.execute<0x22>(0xC134A7, 4); return true;
    // src/unknown/EF/EFE175.asm:405 LDA CURRENT_QUEUED_INTERACTION
    case 0xE538: c.execute<0xAD>(0x005E02, 3); return true;
    // src/unknown/EF/EFE175.asm:406 SEC
    case 0xE53B: c.execute<0x38>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:407 SBC NEXT_QUEUED_INTERACTION
    case 0xE53C: c.execute<0xED>(0x005E04, 3); return true;
    // src/unknown/EF/EFE175.asm:408 BEQ @UNKNOWN32
    case 0xE53F: c.execute<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:409 JSL PROCESS_QUEUED_INTERACTIONS
    case 0xE541: c.execute<0x22>(0xC075DD, 4); return true;
    // src/unknown/EF/EFE175.asm:411 JSL UPDATE_SCREEN
    case 0xE545: c.execute<0x22>(0xC08B26, 4); return true;
    // src/unknown/EF/EFE175.asm:412 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xE549: c.execute<0x22>(0xC08756, 4); return true;
    // src/unknown/EF/EFE175.asm:413 JSL INIT_BATTLE_OVERWORLD
    case 0xE54D: c.execute<0x22>(0xC0B731, 4); return true;
    // src/unknown/EF/EFE175.asm:413 JSL INIT_BATTLE_OVERWORLD
    // Overlapping static entry reached from 0xEFE5A0.
    case 0xE54F: c.execute<0xB7>(0x0000C0, 2); return true;
    // src/unknown/EF/EFE175.asm:414 JMP @UNKNOWN6
    case 0xE551: c.execute<0x4C>(0x00E2DA, 3); return true;
    // include/macros.asm:25 PLD
    case 0xE554: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xE555: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE556: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE558: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE559: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE55A: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFE55A.
    case 0xE55C: c.execute<0xFF>(0xB7A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE55D: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xE55E: if (c.p & 0x20) c.execute<0xA9>(0x0000B7, 2); else c.execute<0xA9>(0x00EFB7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFE55E.
    case 0xE560: c.execute<0xEF>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    case 0xE561: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xE563: if (c.p & 0x20) c.execute<0xA9>(0x0000EF, 2); else c.execute<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFE560.
    case 0xE564: c.execute<0xEF>(0x108500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFE563.
    case 0xE565: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xE566: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    case 0xE568: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x004000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Overlapping static entry reached from 0xEFE568.
    case 0xE56A: c.execute<0x40>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    case 0xE56B: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000200, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Overlapping static entry reached from 0xEFE56B.
    case 0xE56D: c.execute<0x02>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    case 0xE56E: c.execute<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    case 0xE570: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    case 0xE572: c.execute<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFE570.
    case 0xE573: c.execute<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFE573.
    case 0xE575: if (c.p & 0x10) c.execute<0xC0>(0x00002B, 2); else c.execute<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    case 0xE576: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xE577: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE578: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE57A: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE57B: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE57C: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFE57C.
    case 0xE57E: c.execute<0xFF>(0x69AD5B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE57F: c.execute<0x5B>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:7 LDA PAD_HELD
    case 0xE580: c.execute<0xAD>(0x000069, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:7 LDA PAD_HELD
    // Overlapping static entry reached from 0xEFE57E.
    case 0xE582: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:8 STA @LOCAL00
    case 0xE583: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:9 AND #PAD::UP
    case 0xE585: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000800, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:9 AND #PAD::UP
    // Overlapping static entry reached from 0xEFE585.
    case 0xE587: c.execute<0x08>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:10 BEQ @UNKNOWN1
    case 0xE588: c.execute<0xF0>(0x000010, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:11 LDA DEBUG_MENU_CURSOR_POSITION
    case 0xE58A: c.execute<0xAD>(0x00B555, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:12 BEQ @UNKNOWN0
    case 0xE58D: c.execute<0xF0>(0x000005, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:13 DEC DEBUG_MENU_CURSOR_POSITION
    case 0xE58F: c.execute<0xCE>(0x00B555, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:14 BRA @UNKNOWN1
    case 0xE592: c.execute<0x80>(0x000006, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:16 LDA #6
    case 0xE594: if (c.p & 0x20) c.execute<0xA9>(0x000006, 2); else c.execute<0xA9>(0x000006, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:16 LDA #6
    // Overlapping static entry reached from 0xEFE594.
    case 0xE596: c.execute<0x00>(0x00008D, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:17 STA DEBUG_MENU_CURSOR_POSITION
    case 0xE597: c.execute<0x8D>(0x00B555, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:19 LDA @LOCAL00
    case 0xE59A: c.execute<0xA5>(0x00000E, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:20 AND #PAD::DOWN
    case 0xE59C: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000400, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:20 AND #PAD::DOWN
    // Overlapping static entry reached from 0xEFE59C.
    case 0xE59E: c.execute<0x04>(0x0000F0, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:21 BEQ @UNKNOWN3
    case 0xE59F: c.execute<0xF0>(0x000010, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:21 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xEFE59E.
    case 0xE5A0: c.execute<0x10>(0x0000AD, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:22 LDA DEBUG_MENU_CURSOR_POSITION
    case 0xE5A1: c.execute<0xAD>(0x00B555, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:22 LDA DEBUG_MENU_CURSOR_POSITION
    // Overlapping static entry reached from 0xEFE5A0.
    case 0xE5A2: c.execute<0x55>(0x0000B5, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:23 CMP #6
    case 0xE5A4: if (c.p & 0x20) c.execute<0xC9>(0x000006, 2); else c.execute<0xC9>(0x000006, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:23 CMP #6
    // Overlapping static entry reached from 0xEFE5A4.
    case 0xE5A6: c.execute<0x00>(0x0000F0, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:24 BEQ @UNKNOWN2
    case 0xE5A7: c.execute<0xF0>(0x000005, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:25 INC DEBUG_MENU_CURSOR_POSITION
    case 0xE5A9: c.execute<0xEE>(0x00B555, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:26 BRA @UNKNOWN3
    case 0xE5AC: c.execute<0x80>(0x000003, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:28 STZ DEBUG_MENU_CURSOR_POSITION
    case 0xE5AE: c.execute<0x9C>(0x00B555, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:30 LDA DEBUG_CURSOR_ENTITY
    case 0xE5B1: c.execute<0xAD>(0x00B553, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:31 ASL
    case 0xE5B4: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:32 TAX
    case 0xE5B5: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:33 LDA DEBUG_MENU_CURSOR_POSITION
    case 0xE5B6: c.execute<0xAD>(0x00B555, 3); return true;
    // include/macros.asm:623 STA scratch
    case 0xE5B9: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    case 0xE5BB: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    case 0xE5BC: c.execute<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    case 0xE5BE: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    case 0xE5BF: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    case 0xE5C0: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:35 CLC
    case 0xE5C1: c.execute<0x18>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:36 ADC #26 * 2
    case 0xE5C2: if (c.p & 0x20) c.execute<0x69>(0x000034, 2); else c.execute<0x69>(0x000034, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:36 ADC #26 * 2
    // Overlapping static entry reached from 0xEFE5C2.
    case 0xE5C4: c.execute<0x00>(0x00009D, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:37 STA ENTITY_ABS_Y_TABLE,X
    case 0xE5C5: c.execute<0x9D>(0x000BCA, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:38 LDA PAD_PRESS
    case 0xE5C8: c.execute<0xAD>(0x00006D, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:39 AND #PAD::B_BUTTON | PAD::START_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    case 0xE5CB: if (c.p & 0x20) c.execute<0x29>(0x0000A0, 2); else c.execute<0x29>(0x0090A0, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:39 AND #PAD::B_BUTTON | PAD::START_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xEFE5CB.
    case 0xE5CD: c.execute<0x90>(0x00008D, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:40 STA DEBUG_MENU_BUTTONS_PRESSED
    case 0xE5CE: c.execute<0x8D>(0x00B557, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:40 STA DEBUG_MENU_BUTTONS_PRESSED
    // Overlapping static entry reached from 0xEFE5CD.
    case 0xE5CF: c.execute<0x57>(0x0000B5, 2); return true;
    // include/macros.asm:25 PLD
    case 0xE5D1: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xE5D2: c.execute<0x60>(0x000000, 1); return true;
    // src/system/debug/process_command_selection.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE5D3: c.execute<0xC2>(0x000031, 2); return true;
    // src/system/debug/process_command_selection.asm:4 LDA DEBUG_MENU_BUTTONS_PRESSED
    case 0xE5D5: c.execute<0xAD>(0x00B557, 3); return true;
    // include/macros.asm:772 BNE :+
    case 0xE5D8: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xE5DA: c.execute<0x4C>(0x00E688, 3); return true;
    // src/system/debug/process_command_selection.asm:6 LDA DEBUG_MENU_CURSOR_POSITION
    case 0xE5DD: c.execute<0xAD>(0x00B555, 3); return true;
    // src/system/debug/process_command_selection.asm:7 BEQ @UNKNOWN1
    case 0xE5E0: c.execute<0xF0>(0x000020, 2); return true;
    // src/system/debug/process_command_selection.asm:8 CMP #$0001
    case 0xE5E2: if (c.p & 0x20) c.execute<0xC9>(0x000001, 2); else c.execute<0xC9>(0x000001, 3); return true;
    // src/system/debug/process_command_selection.asm:8 CMP #$0001
    // Overlapping static entry reached from 0xEFE5E2.
    case 0xE5E4: c.execute<0x00>(0x0000F0, 2); return true;
    // src/system/debug/process_command_selection.asm:9 BEQ @UNKNOWN2
    case 0xE5E5: c.execute<0xF0>(0x00002E, 2); return true;
    // src/system/debug/process_command_selection.asm:10 CMP #$0002
    case 0xE5E7: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/system/debug/process_command_selection.asm:10 CMP #$0002
    // Overlapping static entry reached from 0xEFE5E7.
    case 0xE5E9: c.execute<0x00>(0x0000F0, 2); return true;
    // src/system/debug/process_command_selection.asm:11 BEQ @UNKNOWN3
    case 0xE5EA: c.execute<0xF0>(0x00003A, 2); return true;
    // src/system/debug/process_command_selection.asm:12 CMP #$0003
    case 0xE5EC: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/system/debug/process_command_selection.asm:12 CMP #$0003
    // Overlapping static entry reached from 0xEFE5EC.
    case 0xE5EE: c.execute<0x00>(0x0000F0, 2); return true;
    // src/system/debug/process_command_selection.asm:13 BEQ @UNKNOWN4
    case 0xE5EF: c.execute<0xF0>(0x00004C, 2); return true;
    // src/system/debug/process_command_selection.asm:14 CMP #$0004
    case 0xE5F1: if (c.p & 0x20) c.execute<0xC9>(0x000004, 2); else c.execute<0xC9>(0x000004, 3); return true;
    // src/system/debug/process_command_selection.asm:14 CMP #$0004
    // Overlapping static entry reached from 0xEFE5F1.
    case 0xE5F3: c.execute<0x00>(0x0000F0, 2); return true;
    // src/system/debug/process_command_selection.asm:15 BEQ @UNKNOWN5
    case 0xE5F4: c.execute<0xF0>(0x000052, 2); return true;
    // src/system/debug/process_command_selection.asm:16 CMP #$0005
    case 0xE5F6: if (c.p & 0x20) c.execute<0xC9>(0x000005, 2); else c.execute<0xC9>(0x000005, 3); return true;
    // src/system/debug/process_command_selection.asm:16 CMP #$0005
    // Overlapping static entry reached from 0xEFE5F6.
    case 0xE5F8: c.execute<0x00>(0x0000F0, 2); return true;
    // src/system/debug/process_command_selection.asm:17 BEQ @UNKNOWN6
    case 0xE5F9: c.execute<0xF0>(0x000059, 2); return true;
    // src/system/debug/process_command_selection.asm:18 CMP #$0006
    case 0xE5FB: if (c.p & 0x20) c.execute<0xC9>(0x000006, 2); else c.execute<0xC9>(0x000006, 3); return true;
    // src/system/debug/process_command_selection.asm:18 CMP #$0006
    // Overlapping static entry reached from 0xEFE5FB.
    case 0xE5FD: c.execute<0x00>(0x0000F0, 2); return true;
    // src/system/debug/process_command_selection.asm:19 BEQ @UNKNOWN7
    case 0xE5FE: c.execute<0xF0>(0x00005F, 2); return true;
    // src/system/debug/process_command_selection.asm:20 BRA @UNKNOWN8
    case 0xE600: c.execute<0x80>(0x00006A, 2); return true;
    // src/system/debug/process_command_selection.asm:22 LDY #$0000
    case 0xE602: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/system/debug/process_command_selection.asm:22 LDY #$0000
    // Overlapping static entry reached from 0xEFE602.
    case 0xE604: c.execute<0x00>(0x0000A2, 2); return true;
    // src/system/debug/process_command_selection.asm:23 LDX #$0001
    case 0xE605: if (c.p & 0x10) c.execute<0xA2>(0x000001, 2); else c.execute<0xA2>(0x000001, 3); return true;
    // src/system/debug/process_command_selection.asm:23 LDX #$0001
    // Overlapping static entry reached from 0xEFE605.
    case 0xE607: c.execute<0x00>(0x0000A9, 2); return true;
    // src/system/debug/process_command_selection.asm:24 LDA #$0004
    case 0xE608: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/system/debug/process_command_selection.asm:24 LDA #$0004
    // Overlapping static entry reached from 0xEFE608.
    case 0xE60A: c.execute<0x00>(0x000022, 2); return true;
    // src/system/debug/process_command_selection.asm:25 JSL FADE_OUT_WITH_MOSAIC
    case 0xE60B: c.execute<0x22>(0xC08814, 4); return true;
    // src/system/debug/process_command_selection.asm:26 JSL MAIN_LOOP
    case 0xE60F: c.execute<0x22>(0xC0B7D8, 4); return true;
    // src/system/debug/process_command_selection.asm:27 BRA @UNKNOWN8
    case 0xE613: c.execute<0x80>(0x000057, 2); return true;
    // src/system/debug/process_command_selection.asm:29 LDA #$0001
    case 0xE615: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/system/debug/process_command_selection.asm:29 LDA #$0001
    // Overlapping static entry reached from 0xEFE615.
    case 0xE617: c.execute<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:30 STA DEBUG_MODE_NUMBER
    case 0xE618: c.execute<0x8D>(0x00B559, 3); return true;
    // src/system/debug/process_command_selection.asm:31 LDA #$FFFF
    case 0xE61B: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/system/debug/process_command_selection.asm:31 LDA #$FFFF
    // Overlapping static entry reached from 0xEFE61B.
    case 0xE61D: c.execute<0xFF>(0x4A588D, 4); return true;
    // src/system/debug/process_command_selection.asm:32 STA NPC_SPAWNS_ENABLED
    case 0xE61E: c.execute<0x8D>(0x004A58, 3); return true;
    // src/system/debug/process_command_selection.asm:33 JSR UNKNOWN_EFE175
    case 0xE621: c.execute<0x20>(0x00E175, 3); return true;
    // src/system/debug/process_command_selection.asm:34 BRA @UNKNOWN8
    case 0xE624: c.execute<0x80>(0x000046, 2); return true;
    // src/system/debug/process_command_selection.asm:36 LDA #$0002
    case 0xE626: if (c.p & 0x20) c.execute<0xA9>(0x000002, 2); else c.execute<0xA9>(0x000002, 3); return true;
    // src/system/debug/process_command_selection.asm:36 LDA #$0002
    // Overlapping static entry reached from 0xEFE626.
    case 0xE628: c.execute<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:37 STA DEBUG_MODE_NUMBER
    case 0xE629: c.execute<0x8D>(0x00B559, 3); return true;
    // src/system/debug/process_command_selection.asm:38 LDA #$000A
    case 0xE62C: if (c.p & 0x20) c.execute<0xA9>(0x00000A, 2); else c.execute<0xA9>(0x00000A, 3); return true;
    // src/system/debug/process_command_selection.asm:38 LDA #$000A
    // Overlapping static entry reached from 0xEFE62C.
    case 0xE62E: c.execute<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:39 STA OVERWORLD_ENEMY_MAXIMUM
    case 0xE62F: c.execute<0x8D>(0x004A5E, 3); return true;
    // src/system/debug/process_command_selection.asm:40 LDA #$FFFF
    case 0xE632: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/system/debug/process_command_selection.asm:40 LDA #$FFFF
    // Overlapping static entry reached from 0xEFE632.
    case 0xE634: c.execute<0xFF>(0x4A5A8D, 4); return true;
    // src/system/debug/process_command_selection.asm:41 STA ENEMY_SPAWNS_ENABLED
    case 0xE635: c.execute<0x8D>(0x004A5A, 3); return true;
    // src/system/debug/process_command_selection.asm:42 JSR UNKNOWN_EFE175
    case 0xE638: c.execute<0x20>(0x00E175, 3); return true;
    // src/system/debug/process_command_selection.asm:43 BRA @UNKNOWN8
    case 0xE63B: c.execute<0x80>(0x00002F, 2); return true;
    // src/system/debug/process_command_selection.asm:45 LDA #$0003
    case 0xE63D: if (c.p & 0x20) c.execute<0xA9>(0x000003, 2); else c.execute<0xA9>(0x000003, 3); return true;
    // src/system/debug/process_command_selection.asm:45 LDA #$0003
    // Overlapping static entry reached from 0xEFE63D.
    case 0xE63F: c.execute<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:46 STA DEBUG_MODE_NUMBER
    case 0xE640: c.execute<0x8D>(0x00B559, 3); return true;
    // src/system/debug/process_command_selection.asm:47 JSR UNKNOWN_EFE175
    case 0xE643: c.execute<0x20>(0x00E175, 3); return true;
    // src/system/debug/process_command_selection.asm:48 BRA @UNKNOWN8
    case 0xE646: c.execute<0x80>(0x000024, 2); return true;
    // src/system/debug/process_command_selection.asm:50 LDA #$0004
    case 0xE648: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/system/debug/process_command_selection.asm:50 LDA #$0004
    // Overlapping static entry reached from 0xEFE648.
    case 0xE64A: c.execute<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:51 STA DEBUG_MODE_NUMBER
    case 0xE64B: c.execute<0x8D>(0x00B559, 3); return true;
    // src/system/debug/process_command_selection.asm:52 JSL BATTLE_ROUTINE
    case 0xE64E: c.execute<0x22>(0xC24821, 4); return true;
    // src/system/debug/process_command_selection.asm:53 BRA @UNKNOWN8
    case 0xE652: c.execute<0x80>(0x000018, 2); return true;
    // src/system/debug/process_command_selection.asm:55 LDA #$0005
    case 0xE654: if (c.p & 0x20) c.execute<0xA9>(0x000005, 2); else c.execute<0xA9>(0x000005, 3); return true;
    // src/system/debug/process_command_selection.asm:55 LDA #$0005
    // Overlapping static entry reached from 0xEFE654.
    case 0xE656: c.execute<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:56 STA DEBUG_MODE_NUMBER
    case 0xE657: c.execute<0x8D>(0x00B559, 3); return true;
    // src/system/debug/process_command_selection.asm:57 JSR UNKNOWN_EFE175
    case 0xE65A: c.execute<0x20>(0x00E175, 3); return true;
    // src/system/debug/process_command_selection.asm:58 BRA @UNKNOWN8
    case 0xE65D: c.execute<0x80>(0x00000D, 2); return true;
    // src/system/debug/process_command_selection.asm:60 LDA #$0006
    case 0xE65F: if (c.p & 0x20) c.execute<0xA9>(0x000006, 2); else c.execute<0xA9>(0x000006, 3); return true;
    // src/system/debug/process_command_selection.asm:60 LDA #$0006
    // Overlapping static entry reached from 0xEFE65F.
    case 0xE661: c.execute<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:61 STA DEBUG_MODE_NUMBER
    case 0xE662: c.execute<0x8D>(0x00B559, 3); return true;
    // src/system/debug/process_command_selection.asm:62 LDA DEBUG_CURSOR_ENTITY
    case 0xE665: c.execute<0xAD>(0x00B553, 3); return true;
    // src/system/debug/process_command_selection.asm:63 JSL UNKNOWN_EFD6D4
    case 0xE668: c.execute<0x22>(0xEFD6D4, 4); return true;
    // src/system/debug/process_command_selection.asm:65 JSL UNKNOWN_EFEB2A
    case 0xE66C: c.execute<0x22>(0xEFEB2A, 4); return true;
    // src/system/debug/process_command_selection.asm:66 STZ DEBUG_MENU_BUTTONS_PRESSED
    case 0xE670: c.execute<0x9C>(0x00B557, 3); return true;
    // src/system/debug/process_command_selection.asm:67 STZ DEBUG_MODE_NUMBER
    case 0xE673: c.execute<0x9C>(0x00B559, 3); return true;
    // src/system/debug/process_command_selection.asm:68 JSL UNKNOWN_C0927C
    case 0xE676: c.execute<0x22>(0xC0927C, 4); return true;
    // src/system/debug/process_command_selection.asm:69 JSR UNKNOWN_EFDA05
    case 0xE67A: c.execute<0x20>(0x00DA05, 3); return true;
    // src/system/debug/process_command_selection.asm:70 JSR DEBUG_DISPLAY_MENU_OPTIONS
    case 0xE67D: c.execute<0x20>(0x00DB21, 3); return true;
    // src/system/debug/process_command_selection.asm:71 LDX #$0001
    case 0xE680: if (c.p & 0x10) c.execute<0xA2>(0x000001, 2); else c.execute<0xA2>(0x000001, 3); return true;
    // src/system/debug/process_command_selection.asm:71 LDX #$0001
    // Overlapping static entry reached from 0xEFE680.
    case 0xE682: c.execute<0x00>(0x00008A, 2); return true;
    // src/system/debug/process_command_selection.asm:72 TXA
    case 0xE683: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/debug/process_command_selection.asm:73 JSL FADE_IN
    case 0xE684: c.execute<0x22>(0xC0886C, 4); return true;
    // src/system/debug/process_command_selection.asm:75 RTS
    case 0xE688: c.execute<0x60>(0x000000, 1); return true;
    // src/system/debug/load_menu.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE689: c.execute<0xC2>(0x000031, 2); return true;
    // src/system/debug/load_menu.asm:4 LDA #$0080
    case 0xE68B: if (c.p & 0x20) c.execute<0xA9>(0x000080, 2); else c.execute<0xA9>(0x000080, 3); return true;
    // src/system/debug/load_menu.asm:4 LDA #$0080
    // Overlapping static entry reached from 0xEFE68B.
    case 0xE68D: c.execute<0x00>(0x00008D, 2); return true;
    // src/system/debug/load_menu.asm:5 STA DEBUG_START_POSITION_X
    case 0xE68E: c.execute<0x8D>(0x00B561, 3); return true;
    // src/system/debug/load_menu.asm:6 LDA #$0070
    case 0xE691: if (c.p & 0x20) c.execute<0xA9>(0x000070, 2); else c.execute<0xA9>(0x000070, 3); return true;
    // src/system/debug/load_menu.asm:6 LDA #$0070
    // Overlapping static entry reached from 0xEFE691.
    case 0xE693: c.execute<0x00>(0x00008D, 2); return true;
    // src/system/debug/load_menu.asm:7 STA DEBUG_START_POSITION_Y
    case 0xE694: c.execute<0x8D>(0x00B563, 3); return true;
    // src/system/debug/load_menu.asm:8 LDA #$0094
    case 0xE697: if (c.p & 0x20) c.execute<0xA9>(0x000094, 2); else c.execute<0xA9>(0x000094, 3); return true;
    // src/system/debug/load_menu.asm:8 LDA #$0094
    // Overlapping static entry reached from 0xEFE697.
    case 0xE699: c.execute<0x00>(0x00008D, 2); return true;
    // src/system/debug/load_menu.asm:9 STA DEBUG_VIEW_CHARACTER_SPRITE
    case 0xE69A: c.execute<0x8D>(0x00B565, 3); return true;
    // src/system/debug/load_menu.asm:10 LDA #$FFFF
    case 0xE69D: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/system/debug/load_menu.asm:10 LDA #$FFFF
    // Overlapping static entry reached from 0xEFE69D.
    case 0xE69F: c.execute<0xFF>(0x9E548D, 4); return true;
    // src/system/debug/load_menu.asm:11 STA DAD_PHONE_TIMER
    case 0xE6A0: c.execute<0x8D>(0x009E54, 3); return true;
    // src/system/debug/load_menu.asm:12 JSL UNKNOWN_C0927C
    case 0xE6A3: c.execute<0x22>(0xC0927C, 4); return true;
    // src/system/debug/load_menu.asm:13 JSR UNKNOWN_EFDA05
    case 0xE6A7: c.execute<0x20>(0x00DA05, 3); return true;
    // src/system/debug/load_menu.asm:14 JSR DEBUG_DISPLAY_MENU_OPTIONS
    case 0xE6AA: c.execute<0x20>(0x00DB21, 3); return true;
    // src/system/debug/load_menu.asm:15 LDX #$0001
    case 0xE6AD: if (c.p & 0x10) c.execute<0xA2>(0x000001, 2); else c.execute<0xA2>(0x000001, 3); return true;
    // src/system/debug/load_menu.asm:15 LDX #$0001
    // Overlapping static entry reached from 0xEFE6AD.
    case 0xE6AF: c.execute<0x00>(0x0000A9, 2); return true;
    // src/system/debug/load_menu.asm:16 LDA #$0004
    case 0xE6B0: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/system/debug/load_menu.asm:16 LDA #$0004
    // Overlapping static entry reached from 0xEFE6B0.
    case 0xE6B2: c.execute<0x00>(0x000022, 2); return true;
    // src/system/debug/load_menu.asm:17 JSL FADE_IN
    case 0xE6B3: c.execute<0x22>(0xC0886C, 4); return true;
    // src/system/debug/load_menu.asm:19 JSL OAM_CLEAR
    case 0xE6B7: c.execute<0x22>(0xC088B1, 4); return true;
    // src/system/debug/load_menu.asm:20 JSR DEBUG_HANDLE_CURSOR_MOVEMENT
    case 0xE6BB: c.execute<0x20>(0x00E578, 3); return true;
    // src/system/debug/load_menu.asm:21 JSR DEBUG_PROCESS_COMMAND_SELECTION
    case 0xE6BE: c.execute<0x20>(0x00E5D3, 3); return true;
    // src/system/debug/load_menu.asm:22 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xE6C1: c.execute<0x22>(0xC09466, 4); return true;
    // src/system/debug/load_menu.asm:23 JSL UPDATE_SCREEN
    case 0xE6C5: c.execute<0x22>(0xC08B26, 4); return true;
    // src/system/debug/load_menu.asm:24 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xE6C9: c.execute<0x22>(0xC08756, 4); return true;
    // src/system/debug/load_menu.asm:25 BRA @UNKNOWN0
    case 0xE6CD: c.execute<0x80>(0x0000E8, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE6CF: c.execute<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EFE6CF.asm:6 LDA DEBUG_MODE_NUMBER
    case 0xE6D1: c.execute<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE6CF.asm:7 CMP #1
    case 0xE6D4: if (c.p & 0x20) c.execute<0xC9>(0x000001, 2); else c.execute<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFE6CF.asm:7 CMP #1
    // Overlapping static entry reached from 0xEFE6D4.
    case 0xE6D6: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE6CF.asm:8 BNE @UNKNOWN1
    case 0xE6D7: c.execute<0xD0>(0x000005, 2); return true;
    // src/unknown/EF/EFE6CF.asm:9 LDA #0
    case 0xE6D9: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE6CF.asm:9 LDA #0
    // Overlapping static entry reached from 0xEFE6D9.
    case 0xE6DB: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EFE6CF.asm:10 BRA @UNKNOWN2
    case 0xE6DC: c.execute<0x80>(0x000003, 2); return true;
    // src/unknown/EF/EFE6CF.asm:12 LDA #.LOWORD(-1)
    case 0xE6DE: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE6CF.asm:12 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFE6DE.
    case 0xE6E0: c.execute<0xFF>(0x31C26B, 4); return true;
    // include/macros.asm:30 RTL
    case 0xE6E1: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE6E2: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE6E4: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xE6E5: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE6E6: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE6E7: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFE6E7.
    case 0xE6E9: c.execute<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE6EA: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xE6EB: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFE6E2.asm:9 STA @LOCAL00
    case 0xE6EC: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE6E2.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xEFE6E9.
    case 0xE6ED: c.execute<0x0E>(0x0059AD, 3); return true;
    // src/unknown/EF/EFE6E2.asm:10 LDA DEBUG_MODE_NUMBER
    case 0xE6EE: c.execute<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE6E2.asm:10 LDA DEBUG_MODE_NUMBER
    // Overlapping static entry reached from 0xEFE6ED.
    case 0xE6F0: c.execute<0xB5>(0x0000C9, 2); return true;
    // src/unknown/EF/EFE6E2.asm:11 CMP #1
    case 0xE6F1: if (c.p & 0x20) c.execute<0xC9>(0x000001, 2); else c.execute<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFE6E2.asm:11 CMP #1
    // Overlapping static entry reached from 0xEFE6F0.
    case 0xE6F2: c.execute<0x01>(0x000000, 2); return true;
    // src/unknown/EF/EFE6E2.asm:11 CMP #1
    // Overlapping static entry reached from 0xEFE6F1.
    case 0xE6F3: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE6E2.asm:12 BNE @UNKNOWN0
    case 0xE6F4: c.execute<0xD0>(0x00000E, 2); return true;
    // src/unknown/EF/EFE6E2.asm:13 LDA @LOCAL00
    case 0xE6F6: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFE6E2.asm:14 CMP #10
    case 0xE6F8: if (c.p & 0x20) c.execute<0xC9>(0x00000A, 2); else c.execute<0xC9>(0x00000A, 3); return true;
    // src/unknown/EF/EFE6E2.asm:14 CMP #10
    // Overlapping static entry reached from 0xEFE6F8.
    case 0xE6FA: c.execute<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    case 0xE6FB: c.execute<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    case 0xE6FD: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EFE6E2.asm:16 LDA #10
    case 0xE6FF: if (c.p & 0x20) c.execute<0xA9>(0x00000A, 2); else c.execute<0xA9>(0x00000A, 3); return true;
    // src/unknown/EF/EFE6E2.asm:16 LDA #10
    // Overlapping static entry reached from 0xEFE6FF.
    case 0xE701: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE6E2.asm:17 STA @LOCAL00
    case 0xE702: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE6E2.asm:19 LDA @LOCAL00
    case 0xE704: c.execute<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:25 PLD
    case 0xE706: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xE707: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE708: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE70A: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE70B: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE70C: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFE70C.
    case 0xE70E: c.execute<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE70F: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EFE708.asm:8 LDA #0
    case 0xE710: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE708.asm:8 LDA #0
    // Overlapping static entry reached from 0xEFE710.
    case 0xE712: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE708.asm:9 STA @LOCAL00
    case 0xE713: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE708.asm:10 LDA DEBUG_MODE_NUMBER
    case 0xE715: c.execute<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE708.asm:11 CMP #2
    case 0xE718: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFE708.asm:11 CMP #2
    // Overlapping static entry reached from 0xEFE718.
    case 0xE71A: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE708.asm:12 BNE @UNKNOWN2
    case 0xE71B: c.execute<0xD0>(0x000018, 2); return true;
    // src/unknown/EF/EFE708.asm:13 BRA @UNKNOWN1
    case 0xE71D: c.execute<0x80>(0x000004, 2); return true;
    // src/unknown/EF/EFE708.asm:15 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xE71F: c.execute<0x22>(0xC08756, 4); return true;
    // src/unknown/EF/EFE708.asm:17 LDA PAD_STATE
    case 0xE723: c.execute<0xAD>(0x000065, 3); return true;
    // src/unknown/EF/EFE708.asm:18 AND #PAD::B_BUTTON
    case 0xE726: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EFE708.asm:18 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xEFE726.
    case 0xE728: c.execute<0x80>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE708.asm:19 BEQ @UNKNOWN0
    case 0xE729: c.execute<0xF0>(0x0000F4, 2); return true;
    // src/unknown/EF/EFE708.asm:20 STZ BATTLE_MODE
    case 0xE72B: c.execute<0x9C>(0x004DC2, 3); return true;
    // src/unknown/EF/EFE708.asm:21 LDA #.LOWORD(-1)
    case 0xE72E: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE708.asm:21 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFE72E.
    case 0xE730: c.execute<0xFF>(0x800E85, 4); return true;
    // src/unknown/EF/EFE708.asm:22 STA @LOCAL00
    case 0xE731: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE708.asm:23 BRA @UNKNOWN3
    case 0xE733: c.execute<0x80>(0x00000D, 2); return true;
    // src/unknown/EF/EFE708.asm:23 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xEFE730.
    case 0xE734: c.execute<0x0D>(0x0065AD, 3); return true;
    // src/unknown/EF/EFE708.asm:25 LDA PAD_STATE
    case 0xE735: c.execute<0xAD>(0x000065, 3); return true;
    // src/unknown/EF/EFE708.asm:25 LDA PAD_STATE
    // Overlapping static entry reached from 0xEFE734.
    case 0xE737: c.execute<0x00>(0x000029, 2); return true;
    // src/unknown/EF/EFE708.asm:26 AND #PAD::Y_BUTTON
    case 0xE738: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x004000, 3); return true;
    // src/unknown/EF/EFE708.asm:26 AND #PAD::Y_BUTTON
    // Overlapping static entry reached from 0xEFE738.
    case 0xE73A: c.execute<0x40>(0x000000, 1); return true;
    // src/unknown/EF/EFE708.asm:27 BEQ @UNKNOWN3
    case 0xE73B: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EFE708.asm:28 LDA #.LOWORD(-1)
    case 0xE73D: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE708.asm:28 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFE73D.
    case 0xE73F: c.execute<0xFF>(0xA50E85, 4); return true;
    // src/unknown/EF/EFE708.asm:29 STA @LOCAL00
    case 0xE740: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE708.asm:31 LDA @LOCAL00
    case 0xE742: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFE708.asm:31 LDA @LOCAL00
    // Overlapping static entry reached from 0xEFE73F.
    case 0xE743: c.execute<0x0E>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    case 0xE744: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xE745: c.execute<0x6B>(0x000000, 1); return true;
    // src/system/debug/check_view_character_mode.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE746: c.execute<0xC2>(0x000031, 2); return true;
    // src/system/debug/check_view_character_mode.asm:4 LDA DEBUG_MODE_NUMBER
    case 0xE748: c.execute<0xAD>(0x00B559, 3); return true;
    // src/system/debug/check_view_character_mode.asm:5 CMP #$0002
    case 0xE74B: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/system/debug/check_view_character_mode.asm:5 CMP #$0002
    // Overlapping static entry reached from 0xEFE74B.
    case 0xE74D: c.execute<0x00>(0x0000D0, 2); return true;
    // src/system/debug/check_view_character_mode.asm:6 BNE @UNKNOWN0
    case 0xE74E: c.execute<0xD0>(0x000005, 2); return true;
    // src/system/debug/check_view_character_mode.asm:7 LDA #$0000
    case 0xE750: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/system/debug/check_view_character_mode.asm:7 LDA #$0000
    // Overlapping static entry reached from 0xEFE750.
    case 0xE752: c.execute<0x00>(0x000080, 2); return true;
    // src/system/debug/check_view_character_mode.asm:8 BRA @UNKNOWN1
    case 0xE753: c.execute<0x80>(0x000003, 2); return true;
    // src/system/debug/check_view_character_mode.asm:10 LDA #$0001
    case 0xE755: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/system/debug/check_view_character_mode.asm:10 LDA #$0001
    // Overlapping static entry reached from 0xEFE755.
    case 0xE757: c.execute<0x00>(0x00006B, 2); return true;
    // src/system/debug/check_view_character_mode.asm:12 RTL
    case 0xE758: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE759: c.execute<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EFE759.asm:6 LDA DEBUG_MODE_NUMBER
    case 0xE75B: c.execute<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE759.asm:7 CMP #2
    case 0xE75E: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFE759.asm:7 CMP #2
    // Overlapping static entry reached from 0xEFE75E.
    case 0xE760: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE759.asm:8 BNE @UNKNOWN0
    case 0xE761: c.execute<0xD0>(0x00000A, 2); return true;
    // src/unknown/EF/EFE759.asm:9 LDA DEBUG_ENEMIES_ENABLED_FLAG
    case 0xE763: c.execute<0xAD>(0x00B575, 3); return true;
    // src/unknown/EF/EFE759.asm:10 BEQ @UNKNOWN0
    case 0xE766: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EFE759.asm:11 LDA #.LOWORD(-1)
    case 0xE768: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE759.asm:11 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFE768.
    case 0xE76A: c.execute<0xFF>(0xA90380, 4); return true;
    // src/unknown/EF/EFE759.asm:12 BRA @UNKNOWN1
    case 0xE76B: c.execute<0x80>(0x000003, 2); return true;
    // src/unknown/EF/EFE759.asm:14 LDA #0
    case 0xE76D: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE759.asm:14 LDA #0
    // Overlapping static entry reached from 0xEFE76A.
    case 0xE76E: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EFE759.asm:14 LDA #0
    // Overlapping static entry reached from 0xEFE76D.
    case 0xE76F: c.execute<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    case 0xE770: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE771: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE773: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE774: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE775: if (c.p & 0x20) c.execute<0x69>(0x0000EA, 2); else c.execute<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFE775.
    case 0xE777: c.execute<0xFF>(0x91225B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE778: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EFE771.asm:8 JSL TEST_SRAM_SIZE
    case 0xE779: c.execute<0x22>(0xC08391, 4); return true;
    // src/unknown/EF/EFE771.asm:8 JSL TEST_SRAM_SIZE
    // Overlapping static entry reached from 0xEFE777.
    case 0xE77B: c.execute<0x83>(0x0000C0, 2); return true;
    // src/unknown/EF/EFE771.asm:9 CMP #0
    case 0xE77D: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFE771.asm:9 CMP #0
    // Overlapping static entry reached from 0xEFE77D.
    case 0xE77F: c.execute<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    case 0xE780: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xE782: c.execute<0x4C>(0x00E871, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xE785: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x006000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFE785.
    case 0xE787: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    case 0xE788: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xE78A: if (c.p & 0x20) c.execute<0xA9>(0x000031, 2); else c.execute<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFE78A.
    case 0xE78C: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xE78D: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xE78F: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFE78F.
    case 0xE791: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xE792: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xE794: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFE794.
    case 0xE796: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xE797: c.execute<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE799: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE79B: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE79D: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE79F: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE771.asm:14 LDA #.LOWORD(GAME_STATE)
    case 0xE7A1: if (c.p & 0x20) c.execute<0xA9>(0x0000F5, 2); else c.execute<0xA9>(0x0097F5, 3); return true;
    // src/unknown/EF/EFE771.asm:14 LDA #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xEFE7A1.
    case 0xE7A3: c.execute<0x97>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    case 0xE7A4: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Overlapping static entry reached from 0xEFE7A3.
    case 0xE7A5: c.execute<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xE7A6: c.execute<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Overlapping static entry reached from 0xEFE7A5.
    case 0xE7A7: c.execute<0x08>(0x000000, 1); return true;
    // src/unknown/EF/EFE771.asm:16 CLC
    case 0xE7A8: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    case 0xE7A9: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    case 0xE7AB: c.execute<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    case 0xE7AD: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    case 0xE7AF: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    case 0xE7B1: c.execute<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    case 0xE7B3: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE7B5: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE7B7: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE7B9: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE7BB: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE771.asm:19 LDA #.SIZEOF(game_state)
    case 0xE7BD: if (c.p & 0x20) c.execute<0xA9>(0x0000D9, 2); else c.execute<0xA9>(0x0001D9, 3); return true;
    // src/unknown/EF/EFE771.asm:19 LDA #.SIZEOF(game_state)
    // Overlapping static entry reached from 0xEFE7BD.
    case 0xE7BF: c.execute<0x01>(0x000022, 2); return true;
    // src/unknown/EF/EFE771.asm:20 JSL MEMCPY24
    case 0xE7C0: c.execute<0x22>(0xC08EED, 4); return true;
    // src/unknown/EF/EFE771.asm:20 JSL MEMCPY24
    // Overlapping static entry reached from 0xEFE7BF.
    case 0xE7C1: c.execute<0xED>(0x00C08E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xE7C4: if (c.p & 0x20) c.execute<0xA9>(0x0000D9, 2); else c.execute<0xA9>(0x0061D9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFE7C4.
    case 0xE7C6: c.execute<0x61>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xE7C7: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xEFE7C6.
    case 0xE7C8: c.execute<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xE7C9: if (c.p & 0x20) c.execute<0xA9>(0x000031, 2); else c.execute<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFE7C8.
    case 0xE7CA: c.execute<0x31>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFE7C9.
    case 0xE7CB: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xE7CC: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE7CE: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE7D0: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE7D2: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE7D4: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE771.asm:23 LDA #.LOWORD(PARTY_CHARACTERS)
    case 0xE7D6: if (c.p & 0x20) c.execute<0xA9>(0x0000CE, 2); else c.execute<0xA9>(0x0099CE, 3); return true;
    // src/unknown/EF/EFE771.asm:23 LDA #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xEFE7D6.
    case 0xE7D8: c.execute<0x99>(0x000685, 3); return true;
    // include/macros.asm:870 STA dest
    case 0xE7D9: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xE7DB: c.execute<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE771.asm:25 CLC
    case 0xE7DD: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    case 0xE7DE: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    case 0xE7E0: c.execute<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    case 0xE7E2: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    case 0xE7E4: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    case 0xE7E6: c.execute<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    case 0xE7E8: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE7EA: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE7EC: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE7EE: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE7F0: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE771.asm:28 LDA #.SIZEOF(char_struct) * (TOTAL_PARTY_COUNT)
    case 0xE7F2: if (c.p & 0x20) c.execute<0xA9>(0x00003A, 2); else c.execute<0xA9>(0x00023A, 3); return true;
    // src/unknown/EF/EFE771.asm:28 LDA #.SIZEOF(char_struct) * (TOTAL_PARTY_COUNT)
    // Overlapping static entry reached from 0xEFE7F2.
    case 0xE7F4: c.execute<0x02>(0x000022, 2); return true;
    // src/unknown/EF/EFE771.asm:29 JSL MEMCPY24
    case 0xE7F5: c.execute<0x22>(0xC08EED, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xE7F9: if (c.p & 0x20) c.execute<0xA9>(0x000013, 2); else c.execute<0xA9>(0x006413, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFE7F9.
    case 0xE7FB: c.execute<0x64>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xE7FC: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xEFE7FB.
    case 0xE7FD: c.execute<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xE7FE: if (c.p & 0x20) c.execute<0xA9>(0x000031, 2); else c.execute<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFE7FD.
    case 0xE7FF: c.execute<0x31>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFE7FE.
    case 0xE800: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xE801: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE803: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE805: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE807: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE809: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE771.asm:32 LDA #.LOWORD(EVENT_FLAGS)
    case 0xE80B: if (c.p & 0x20) c.execute<0xA9>(0x000008, 2); else c.execute<0xA9>(0x009C08, 3); return true;
    // src/unknown/EF/EFE771.asm:32 LDA #.LOWORD(EVENT_FLAGS)
    // Overlapping static entry reached from 0xEFE80B.
    case 0xE80D: c.execute<0x9C>(0x000685, 3); return true;
    // include/macros.asm:870 STA dest
    case 0xE80E: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xE810: c.execute<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE771.asm:34 CLC
    case 0xE812: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    case 0xE813: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    case 0xE815: c.execute<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    case 0xE817: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    case 0xE819: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    case 0xE81B: c.execute<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    case 0xE81D: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE81F: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE821: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE823: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE825: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE771.asm:37 LDA #.SIZEOF(save_block::event_flags)
    case 0xE827: if (c.p & 0x20) c.execute<0xA9>(0x000080, 2); else c.execute<0xA9>(0x000080, 3); return true;
    // src/unknown/EF/EFE771.asm:37 LDA #.SIZEOF(save_block::event_flags)
    // Overlapping static entry reached from 0xEFE827.
    case 0xE829: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE771.asm:38 JSL MEMCPY24
    case 0xE82A: c.execute<0x22>(0xC08EED, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xE82E: if (c.p & 0x20) c.execute<0xA9>(0x000093, 2); else c.execute<0xA9>(0x006493, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFE82E.
    case 0xE830: c.execute<0x64>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xE831: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xEFE830.
    case 0xE832: c.execute<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xE833: if (c.p & 0x20) c.execute<0xA9>(0x000031, 2); else c.execute<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFE832.
    case 0xE834: c.execute<0x31>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFE833.
    case 0xE835: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xE836: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE838: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE83A: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE83C: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE83E: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE771.asm:41 LDA #.LOWORD(TIMER)
    case 0xE840: if (c.p & 0x20) c.execute<0xA9>(0x0000A7, 2); else c.execute<0xA9>(0x0000A7, 3); return true;
    // src/unknown/EF/EFE771.asm:41 LDA #.LOWORD(TIMER)
    // Overlapping static entry reached from 0xEFE840.
    case 0xE842: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    case 0xE843: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xE845: c.execute<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE771.asm:43 CLC
    case 0xE847: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    case 0xE848: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    case 0xE84A: c.execute<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    case 0xE84C: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    case 0xE84E: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    case 0xE850: c.execute<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    case 0xE852: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE854: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE856: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE858: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE85A: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE771.asm:46 LDA #4
    case 0xE85C: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EFE771.asm:46 LDA #4
    // Overlapping static entry reached from 0xEFE85C.
    case 0xE85E: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE771.asm:47 JSL MEMCPY24
    case 0xE85F: c.execute<0x22>(0xC08EED, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xE863: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x006000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFE863.
    case 0xE865: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    case 0xE866: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xE868: if (c.p & 0x20) c.execute<0xA9>(0x000032, 2); else c.execute<0xA9>(0x000032, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFE868.
    case 0xE86A: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xE86B: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE771.asm:49 JSL UNKNOWN_C083C1
    case 0xE86D: c.execute<0x22>(0xC083C1, 4); return true;
    // include/macros.asm:25 PLD
    case 0xE871: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xE872: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE873: c.execute<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EFE873.asm:6 JSL TEST_SRAM_SIZE
    case 0xE875: c.execute<0x22>(0xC08391, 4); return true;
    // src/unknown/EF/EFE873.asm:7 CMP #0
    case 0xE879: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFE873.asm:7 CMP #0
    // Overlapping static entry reached from 0xEFE879.
    case 0xE87B: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE873.asm:8 BEQ @GOOD_SRAM_SIZE
    case 0xE87C: c.execute<0xF0>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE87E: c.execute<0xAD>(0x00B56D, 3); return true;
    // include/macros.asm:837 STA dest
    case 0xE881: c.execute<0x8D>(0x000024, 3); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE884: c.execute<0xAD>(0x00B56F, 3); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE887: c.execute<0x8D>(0x000026, 3); return true;
    // src/unknown/EF/EFE873.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xE88A: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFE873.asm:11 LDA FRAME_COUNTER_BACKUP
    case 0xE88C: c.execute<0xAD>(0x00B571, 3); return true;
    // src/unknown/EF/EFE873.asm:12 STA FRAME_COUNTER
    case 0xE88F: c.execute<0x8D>(0x000002, 3); return true;
    // src/unknown/EF/EFE873.asm:14 REP #PROC_FLAGS::ACCUM8
    case 0xE892: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:30 RTL
    case 0xE894: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE895: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE897: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xE898: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE899: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE89A: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFE89A.
    case 0xE89C: c.execute<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE89D: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xE89E: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFE895.asm:8 TAX
    case 0xE89F: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE895.asm:9 STX @LOCAL00
    case 0xE8A0: c.execute<0x86>(0x00000E, 2); return true;
    // src/unknown/EF/EFE895.asm:10 JSL TEST_SRAM_SIZE
    case 0xE8A2: c.execute<0x22>(0xC08391, 4); return true;
    // src/unknown/EF/EFE895.asm:11 CMP #0
    case 0xE8A6: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFE895.asm:11 CMP #0
    // Overlapping static entry reached from 0xEFE8A6.
    case 0xE8A8: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE895.asm:12 BEQ @GOOD_SRAM_SIZE
    case 0xE8A9: c.execute<0xF0>(0x00001A, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE8AB: c.execute<0xAD>(0x000024, 3); return true;
    // include/macros.asm:837 STA dest
    case 0xE8AE: c.execute<0x8D>(0x00B56D, 3); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE8B1: c.execute<0xAD>(0x000026, 3); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE8B4: c.execute<0x8D>(0x00B56F, 3); return true;
    // src/unknown/EF/EFE895.asm:14 LDA FRAME_COUNTER
    case 0xE8B7: c.execute<0xAD>(0x000002, 3); return true;
    // src/unknown/EF/EFE895.asm:15 AND #$00FF
    case 0xE8BA: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFE895.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xEFE8BA.
    case 0xE8BC: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFE895.asm:16 STA FRAME_COUNTER_BACKUP
    case 0xE8BD: c.execute<0x8D>(0x00B571, 3); return true;
    // src/unknown/EF/EFE895.asm:17 LDX @LOCAL00
    case 0xE8C0: c.execute<0xA6>(0x00000E, 2); return true;
    // src/unknown/EF/EFE895.asm:18 STX REPLAY_TRANSITION_STYLE
    case 0xE8C2: c.execute<0x8E>(0x00B573, 3); return true;
    // include/macros.asm:25 PLD
    case 0xE8C5: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xE8C6: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE8C7: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE8C9: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE8CA: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE8CB: if (c.p & 0x20) c.execute<0x69>(0x0000E6, 2); else c.execute<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFE8CB.
    case 0xE8CD: c.execute<0xFF>(0x91225B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE8CE: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EFE8C7.asm:9 JSL TEST_SRAM_SIZE
    case 0xE8CF: c.execute<0x22>(0xC08391, 4); return true;
    // src/unknown/EF/EFE8C7.asm:9 JSL TEST_SRAM_SIZE
    // Overlapping static entry reached from 0xEFE8CD.
    case 0xE8D1: c.execute<0x83>(0x0000C0, 2); return true;
    // src/unknown/EF/EFE8C7.asm:10 CMP #0
    case 0xE8D3: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFE8C7.asm:10 CMP #0
    // Overlapping static entry reached from 0xEFE8D3.
    case 0xE8D5: c.execute<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    case 0xE8D6: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xE8D8: c.execute<0x4C>(0x00EA21, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xE8DB: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x006000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFE8DB.
    case 0xE8DD: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    case 0xE8DE: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xE8E0: if (c.p & 0x20) c.execute<0xA9>(0x000031, 2); else c.execute<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFE8E0.
    case 0xE8E2: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xE8E3: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE8E5: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE8E7: c.execute<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE8E9: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE8EB: c.execute<0x85>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xE8ED: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFE8ED.
    case 0xE8EF: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xE8F0: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xE8F2: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFE8F2.
    case 0xE8F4: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xE8F5: c.execute<0x85>(0x00000C, 2); return true;
    // src/unknown/EF/EFE8C7.asm:15 LDA #.LOWORD(GAME_STATE)
    case 0xE8F7: if (c.p & 0x20) c.execute<0xA9>(0x0000F5, 2); else c.execute<0xA9>(0x0097F5, 3); return true;
    // src/unknown/EF/EFE8C7.asm:15 LDA #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xEFE8F7.
    case 0xE8F9: c.execute<0x97>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    case 0xE8FA: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Overlapping static entry reached from 0xEFE8F9.
    case 0xE8FB: c.execute<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xE8FC: c.execute<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Overlapping static entry reached from 0xEFE8FB.
    case 0xE8FD: c.execute<0x08>(0x000000, 1); return true;
    // src/unknown/EF/EFE8C7.asm:17 CLC
    case 0xE8FE: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    case 0xE8FF: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    case 0xE901: c.execute<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    case 0xE903: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    case 0xE905: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    case 0xE907: c.execute<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    case 0xE909: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE90B: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE90D: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE90F: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE911: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE913: c.execute<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE915: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE917: c.execute<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE919: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE91B: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE91D: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE91F: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE921: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE8C7.asm:22 LDA #.SIZEOF(game_state)
    case 0xE923: if (c.p & 0x20) c.execute<0xA9>(0x0000D9, 2); else c.execute<0xA9>(0x0001D9, 3); return true;
    // src/unknown/EF/EFE8C7.asm:22 LDA #.SIZEOF(game_state)
    // Overlapping static entry reached from 0xEFE923.
    case 0xE925: c.execute<0x01>(0x000022, 2); return true;
    // src/unknown/EF/EFE8C7.asm:23 JSL MEMCPY24
    case 0xE926: c.execute<0x22>(0xC08EED, 4); return true;
    // src/unknown/EF/EFE8C7.asm:23 JSL MEMCPY24
    // Overlapping static entry reached from 0xEFE925.
    case 0xE927: c.execute<0xED>(0x00C08E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xE92A: if (c.p & 0x20) c.execute<0xA9>(0x0000D9, 2); else c.execute<0xA9>(0x0061D9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFE92A.
    case 0xE92C: c.execute<0x61>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xE92D: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xEFE92C.
    case 0xE92E: c.execute<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xE92F: if (c.p & 0x20) c.execute<0xA9>(0x000031, 2); else c.execute<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFE92E.
    case 0xE930: c.execute<0x31>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFE92F.
    case 0xE931: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xE932: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE934: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE936: c.execute<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE938: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE93A: c.execute<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFE8C7.asm:26 LDA #.LOWORD(PARTY_CHARACTERS)
    case 0xE93C: if (c.p & 0x20) c.execute<0xA9>(0x0000CE, 2); else c.execute<0xA9>(0x0099CE, 3); return true;
    // src/unknown/EF/EFE8C7.asm:26 LDA #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xEFE93C.
    case 0xE93E: c.execute<0x99>(0x000685, 3); return true;
    // include/macros.asm:870 STA dest
    case 0xE93F: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xE941: c.execute<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE8C7.asm:28 CLC
    case 0xE943: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    case 0xE944: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    case 0xE946: c.execute<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    case 0xE948: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    case 0xE94A: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    case 0xE94C: c.execute<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    case 0xE94E: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE950: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE952: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE954: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE956: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE958: c.execute<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE95A: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE95C: c.execute<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE95E: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE960: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE962: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE964: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE966: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE8C7.asm:33 LDA #.SIZEOF(char_struct)*6
    case 0xE968: if (c.p & 0x20) c.execute<0xA9>(0x00003A, 2); else c.execute<0xA9>(0x00023A, 3); return true;
    // src/unknown/EF/EFE8C7.asm:33 LDA #.SIZEOF(char_struct)*6
    // Overlapping static entry reached from 0xEFE968.
    case 0xE96A: c.execute<0x02>(0x000022, 2); return true;
    // src/unknown/EF/EFE8C7.asm:34 JSL MEMCPY24
    case 0xE96B: c.execute<0x22>(0xC08EED, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xE96F: if (c.p & 0x20) c.execute<0xA9>(0x000013, 2); else c.execute<0xA9>(0x006413, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFE96F.
    case 0xE971: c.execute<0x64>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xE972: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xEFE971.
    case 0xE973: c.execute<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xE974: if (c.p & 0x20) c.execute<0xA9>(0x000031, 2); else c.execute<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFE973.
    case 0xE975: c.execute<0x31>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFE974.
    case 0xE976: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xE977: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE979: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE97B: c.execute<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE97D: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE97F: c.execute<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFE8C7.asm:37 LDA #.LOWORD(EVENT_FLAGS)
    case 0xE981: if (c.p & 0x20) c.execute<0xA9>(0x000008, 2); else c.execute<0xA9>(0x009C08, 3); return true;
    // src/unknown/EF/EFE8C7.asm:37 LDA #.LOWORD(EVENT_FLAGS)
    // Overlapping static entry reached from 0xEFE981.
    case 0xE983: c.execute<0x9C>(0x000685, 3); return true;
    // include/macros.asm:870 STA dest
    case 0xE984: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xE986: c.execute<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE8C7.asm:39 CLC
    case 0xE988: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    case 0xE989: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    case 0xE98B: c.execute<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    case 0xE98D: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    case 0xE98F: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    case 0xE991: c.execute<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    case 0xE993: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE995: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE997: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE999: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE99B: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE99D: c.execute<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE99F: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE9A1: c.execute<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE9A3: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE9A5: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE9A7: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE9A9: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE9AB: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE8C7.asm:44 LDA #.SIZEOF(save_block::event_flags)
    case 0xE9AD: if (c.p & 0x20) c.execute<0xA9>(0x000080, 2); else c.execute<0xA9>(0x000080, 3); return true;
    // src/unknown/EF/EFE8C7.asm:44 LDA #.SIZEOF(save_block::event_flags)
    // Overlapping static entry reached from 0xEFE9AD.
    case 0xE9AF: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE8C7.asm:45 JSL MEMCPY24
    case 0xE9B0: c.execute<0x22>(0xC08EED, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xE9B4: if (c.p & 0x20) c.execute<0xA9>(0x000093, 2); else c.execute<0xA9>(0x006493, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFE9B4.
    case 0xE9B6: c.execute<0x64>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xE9B7: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xEFE9B6.
    case 0xE9B8: c.execute<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xE9B9: if (c.p & 0x20) c.execute<0xA9>(0x000031, 2); else c.execute<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFE9B8.
    case 0xE9BA: c.execute<0x31>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFE9B9.
    case 0xE9BB: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xE9BC: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE9BE: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE9C0: c.execute<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE9C2: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE9C4: c.execute<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFE8C7.asm:48 LDA #167
    case 0xE9C6: if (c.p & 0x20) c.execute<0xA9>(0x0000A7, 2); else c.execute<0xA9>(0x0000A7, 3); return true;
    // src/unknown/EF/EFE8C7.asm:48 LDA #167
    // Overlapping static entry reached from 0xEFE9C6.
    case 0xE9C8: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    case 0xE9C9: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xE9CB: c.execute<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE8C7.asm:50 CLC
    case 0xE9CD: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    case 0xE9CE: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    case 0xE9D0: c.execute<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    case 0xE9D2: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    case 0xE9D4: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    case 0xE9D6: c.execute<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    case 0xE9D8: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE9DA: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE9DC: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE9DE: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE9E0: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE9E2: c.execute<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE9E4: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE9E6: c.execute<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE9E8: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE9EA: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE9EC: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE9EE: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE9F0: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE8C7.asm:55 LDA #4
    case 0xE9F2: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EFE8C7.asm:55 LDA #4
    // Overlapping static entry reached from 0xEFE9F2.
    case 0xE9F4: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE8C7.asm:56 JSL MEMCPY24
    case 0xE9F5: c.execute<0x22>(0xC08EED, 4); return true;
    // src/unknown/EF/EFE8C7.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xE9F9: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFE8C7.asm:58 LDA FRAME_COUNTER_BACKUP
    case 0xE9FB: c.execute<0xAD>(0x00B571, 3); return true;
    // src/unknown/EF/EFE8C7.asm:59 STA FRAME_COUNTER
    case 0xE9FE: c.execute<0x8D>(0x000002, 3); return true;
    // src/unknown/EF/EFE8C7.asm:60 REP #PROC_FLAGS::ACCUM8
    case 0xEA01: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xEA03: c.execute<0xAD>(0x00B56D, 3); return true;
    // include/macros.asm:837 STA dest
    case 0xEA06: c.execute<0x8D>(0x000024, 3); return true;
    // include/macros.asm:838 LDA src+2
    case 0xEA09: c.execute<0xAD>(0x00B56F, 3); return true;
    // include/macros.asm:839 STA dest+2
    case 0xEA0C: c.execute<0x8D>(0x000026, 3); return true;
    // src/unknown/EF/EFE8C7.asm:62 JSL UNKNOWN_C083B8
    case 0xEA0F: c.execute<0x22>(0xC083B8, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xEA13: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x006000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFEA13.
    case 0xEA15: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    case 0xEA16: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xEA18: if (c.p & 0x20) c.execute<0xA9>(0x000032, 2); else c.execute<0xA9>(0x000032, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFEA18.
    case 0xEA1A: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xEA1B: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE8C7.asm:64 JSL UNKNOWN_C083E3
    case 0xEA1D: c.execute<0x22>(0xC083E3, 4); return true;
    // include/macros.asm:25 PLD
    case 0xEA21: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xEA22: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEA23: c.execute<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EFEA23.asm:5 JSL TEST_SRAM_SIZE
    case 0xEA25: c.execute<0x22>(0xC08391, 4); return true;
    // src/unknown/EF/EFEA23.asm:6 CMP #0
    case 0xEA29: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFEA23.asm:6 CMP #0
    // Overlapping static entry reached from 0xEFEA29.
    case 0xEA2B: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFEA23.asm:7 BEQ @RETURN ;insufficient SRAM
    case 0xEA2C: c.execute<0xF0>(0x00001B, 2); return true;
    // src/unknown/EF/EFEA23.asm:8 LDA REPLAY_MODE_ACTIVE
    case 0xEA2E: c.execute<0xAD>(0x00B567, 3); return true;
    // src/unknown/EF/EFEA23.asm:9 BEQ @UNKNOWN0
    case 0xEA31: c.execute<0xF0>(0x000012, 2); return true;
    // src/unknown/EF/EFEA23.asm:10 JSL LOAD_REPLAY_SAVE_SLOT
    case 0xEA33: c.execute<0x22>(0xEFE8C7, 4); return true;
    // src/unknown/EF/EFEA23.asm:11 LDA GAME_STATE+game_state::leader_x_coord
    case 0xEA37: c.execute<0xAD>(0x009877, 3); return true;
    // src/unknown/EF/EFEA23.asm:12 STA UNUSED_7EB569
    case 0xEA3A: c.execute<0x8D>(0x00B569, 3); return true;
    // src/unknown/EF/EFEA23.asm:13 LDA GAME_STATE+game_state::leader_y_coord
    case 0xEA3D: c.execute<0xAD>(0x00987B, 3); return true;
    // src/unknown/EF/EFEA23.asm:14 STA UNUSED_7EB56B
    case 0xEA40: c.execute<0x8D>(0x00B56B, 3); return true;
    // src/unknown/EF/EFEA23.asm:15 BRA @RETURN
    case 0xEA43: c.execute<0x80>(0x000004, 2); return true;
    // src/unknown/EF/EFEA23.asm:17 JSL SAVE_REPLAY_SAVE_SLOT
    case 0xEA45: c.execute<0x22>(0xEFE771, 4); return true;
    // include/macros.asm:30 RTL
    case 0xEA49: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEA4A: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xEA4C: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xEA4D: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xEA4E: if (c.p & 0x20) c.execute<0x69>(0x0000F2, 2); else c.execute<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFEA4E.
    case 0xEA50: c.execute<0xFF>(0x91225B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xEA51: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EFEA4A.asm:6 JSL TEST_SRAM_SIZE
    case 0xEA52: c.execute<0x22>(0xC08391, 4); return true;
    // src/unknown/EF/EFEA4A.asm:6 JSL TEST_SRAM_SIZE
    // Overlapping static entry reached from 0xEFEA50.
    case 0xEA54: c.execute<0x83>(0x0000C0, 2); return true;
    // src/unknown/EF/EFEA4A.asm:7 CMP #0
    case 0xEA56: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFEA4A.asm:7 CMP #0
    // Overlapping static entry reached from 0xEFEA56.
    case 0xEA58: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFEA4A.asm:8 BEQ @INSUFFICIENT_SRAM
    case 0xEA59: c.execute<0xF0>(0x000041, 2); return true;
    // src/unknown/EF/EFEA4A.asm:9 LDA #1
    case 0xEA5B: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFEA4A.asm:9 LDA #1
    // Overlapping static entry reached from 0xEFEA5B.
    case 0xEA5D: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFEA4A.asm:10 STA REPLAY_MODE_ACTIVE
    case 0xEA5E: c.execute<0x8D>(0x00B567, 3); return true;
    // src/unknown/EF/EFEA4A.asm:11 JSL LOAD_REPLAY_SAVE_SLOT
    case 0xEA61: c.execute<0x22>(0xEFE8C7, 4); return true;
    // src/unknown/EF/EFEA4A.asm:12 LDA GAME_STATE + game_state::leader_x_coord
    case 0xEA65: c.execute<0xAD>(0x009877, 3); return true;
    // src/unknown/EF/EFEA4A.asm:13 STA @VIRTUAL04
    case 0xEA68: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFEA4A.asm:14 LDA GAME_STATE + game_state::leader_y_coord
    case 0xEA6A: c.execute<0xAD>(0x00987B, 3); return true;
    // src/unknown/EF/EFEA4A.asm:15 STA @VIRTUAL02
    case 0xEA6D: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFEA4A.asm:16 LDX #1
    case 0xEA6F: if (c.p & 0x10) c.execute<0xA2>(0x000001, 2); else c.execute<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EFEA4A.asm:16 LDX #1
    // Overlapping static entry reached from 0xEFEA6F.
    case 0xEA71: c.execute<0x00>(0x00008A, 2); return true;
    // src/unknown/EF/EFEA4A.asm:17 TXA
    case 0xEA72: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EFEA4A.asm:18 JSL FADE_OUT
    case 0xEA73: c.execute<0x22>(0xC0887A, 4); return true;
    // src/unknown/EF/EFEA4A.asm:19 LDX @VIRTUAL02
    case 0xEA77: c.execute<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFEA4A.asm:20 LDA @VIRTUAL04
    case 0xEA79: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFEA4A.asm:21 JSL LOAD_MAP_AT_POSITION
    case 0xEA7B: c.execute<0x22>(0xC013F6, 4); return true;
    // src/unknown/EF/EFEA4A.asm:22 LDY #0
    case 0xEA7F: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFEA4A.asm:22 LDY #0
    // Overlapping static entry reached from 0xEFEA7F.
    case 0xEA81: c.execute<0x00>(0x0000A6, 2); return true;
    // src/unknown/EF/EFEA4A.asm:23 LDX @VIRTUAL02
    case 0xEA82: c.execute<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFEA4A.asm:24 LDA @VIRTUAL04
    case 0xEA84: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFEA4A.asm:25 JSL UNKNOWN_C03FA9
    case 0xEA86: c.execute<0x22>(0xC03FA9, 4); return true;
    // src/unknown/EF/EFEA4A.asm:26 JSL UNKNOWN_C09451
    case 0xEA8A: c.execute<0x22>(0xC09451, 4); return true;
    // src/unknown/EF/EFEA4A.asm:27 LDX #0
    case 0xEA8E: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/unknown/EF/EFEA4A.asm:27 LDX #0
    // Overlapping static entry reached from 0xEFEA8E.
    case 0xEA90: c.execute<0x00>(0x0000AD, 2); return true;
    // src/unknown/EF/EFEA4A.asm:28 LDA REPLAY_TRANSITION_STYLE
    case 0xEA91: c.execute<0xAD>(0x00B573, 3); return true;
    // src/unknown/EF/EFEA4A.asm:29 JSL SCREEN_TRANSITION
    case 0xEA94: c.execute<0x22>(0xC06662, 4); return true;
    // src/unknown/EF/EFEA4A.asm:30 JSL UNKNOWN_C0943C
    case 0xEA98: c.execute<0x22>(0xC0943C, 4); return true;
    // include/macros.asm:25 PLD
    case 0xEA9C: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xEA9D: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEA9E: c.execute<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EFEA9E.asm:5 STZ REPLAY_MODE_ACTIVE
    case 0xEAA0: c.execute<0x9C>(0x00B567, 3); return true;
    // include/macros.asm:30 RTL
    case 0xEAA3: c.execute<0x6B>(0x000000, 1); return true;
    // src/unknown/EF/EFEAA4.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xEAA4: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFEAA4.asm:4 LDA INIDISP_MIRROR
    case 0xEAA6: c.execute<0xAD>(0x00000D, 3); return true;
    // src/unknown/EF/EFEAA4.asm:5 PHA
    case 0xEAA9: c.execute<0x48>(0x000000, 1); return true;
    // src/unknown/EF/EFEAA4.asm:6 LDA #$0080
    case 0xEAAA: if (c.p & 0x20) c.execute<0xA9>(0x000080, 2); else c.execute<0xA9>(0x008D80, 3); return true;
    // src/unknown/EF/EFEAA4.asm:7 STA INIDISP_MIRROR
    case 0xEAAC: c.execute<0x8D>(0x00000D, 3); return true;
    // src/unknown/EF/EFEAA4.asm:7 STA INIDISP_MIRROR
    // Overlapping static entry reached from 0xEFEAAA.
    case 0xEAAD: c.execute<0x0D>(0x008F00, 3); return true;
    // src/unknown/EF/EFEAA4.asm:8 STA f:INIDISP
    case 0xEAAF: c.execute<0x8F>(0x002100, 4); return true;
    // src/unknown/EF/EFEAA4.asm:8 STA f:INIDISP
    // Overlapping static entry reached from 0xEFEAAD.
    case 0xEAB0: c.execute<0x00>(0x000021, 2); return true;
    // src/unknown/EF/EFEAA4.asm:9 LDX #$0000
    case 0xEAB3: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/unknown/EF/EFEAA4.asm:9 LDX #$0000
    // Overlapping static entry reached from 0xEFEAB3.
    case 0xEAB5: c.execute<0x00>(0x0000BF, 2); return true;
    // src/unknown/EF/EFEAA4.asm:11 LDA BUFFER,X
    case 0xEAB6: c.execute<0xBF>(0x7F0000, 4); return true;
    // src/unknown/EF/EFEAA4.asm:12 INX
    case 0xEABA: c.execute<0xE8>(0x000000, 1); return true;
    // src/unknown/EF/EFEAA4.asm:13 BNE @UNKNOWN0
    case 0xEABB: c.execute<0xD0>(0x0000F9, 2); return true;
    // src/unknown/EF/EFEAA4.asm:14 PLA
    case 0xEABD: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFEAA4.asm:15 STA INIDISP_MIRROR
    case 0xEABE: c.execute<0x8D>(0x00000D, 3); return true;
    // src/unknown/EF/EFEAA4.asm:16 STA f:INIDISP
    case 0xEAC1: c.execute<0x8F>(0x002100, 4); return true;
    // src/unknown/EF/EFEAA4.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xEAC5: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFEAA4.asm:18 RTL
    case 0xEAC7: c.execute<0x6B>(0x000000, 1); return true;
    // src/unknown/EF/EFEAC8.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xEAC8: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFEAC8.asm:4 LDA #$0020
    case 0xEACA: if (c.p & 0x20) c.execute<0xA9>(0x000020, 2); else c.execute<0xA9>(0x008F20, 3); return true;
    // src/unknown/EF/EFEAC8.asm:5 STA f:WOBJSEL
    case 0xEACC: c.execute<0x8F>(0x002125, 4); return true;
    // src/unknown/EF/EFEAC8.asm:5 STA f:WOBJSEL
    // Overlapping static entry reached from 0xEFEACA.
    case 0xEACD: c.execute<0x25>(0x000021, 2); return true;
    // src/unknown/EF/EFEAC8.asm:5 STA f:WOBJSEL
    // Overlapping static entry reached from 0xEFEACD.
    case 0xEACF: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFEAC8.asm:6 LDA #$0018
    case 0xEAD0: if (c.p & 0x20) c.execute<0xA9>(0x000018, 2); else c.execute<0xA9>(0x008F18, 3); return true;
    // src/unknown/EF/EFEAC8.asm:7 STA f:WH0
    case 0xEAD2: c.execute<0x8F>(0x002126, 4); return true;
    // src/unknown/EF/EFEAC8.asm:7 STA f:WH0
    // Overlapping static entry reached from 0xEFEAD0.
    case 0xEAD3: c.execute<0x26>(0x000021, 2); return true;
    // src/unknown/EF/EFEAC8.asm:7 STA f:WH0
    // Overlapping static entry reached from 0xEFEAD3.
    case 0xEAD5: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFEAC8.asm:8 LDA #$0078
    case 0xEAD6: if (c.p & 0x20) c.execute<0xA9>(0x000078, 2); else c.execute<0xA9>(0x008F78, 3); return true;
    // src/unknown/EF/EFEAC8.asm:9 STA f:WH1
    case 0xEAD8: c.execute<0x8F>(0x002127, 4); return true;
    // src/unknown/EF/EFEAC8.asm:9 STA f:WH1
    // Overlapping static entry reached from 0xEFEAD6.
    case 0xEAD9: c.execute<0x27>(0x000021, 2); return true;
    // src/unknown/EF/EFEAC8.asm:9 STA f:WH1
    // Overlapping static entry reached from 0xEFEAD9.
    case 0xEADB: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFEAC8.asm:10 LDA #$0013
    case 0xEADC: if (c.p & 0x20) c.execute<0xA9>(0x000013, 2); else c.execute<0xA9>(0x008F13, 3); return true;
    // src/unknown/EF/EFEAC8.asm:11 STA f:TMW
    case 0xEADE: c.execute<0x8F>(0x00212E, 4); return true;
    // src/unknown/EF/EFEAC8.asm:11 STA f:TMW
    // Overlapping static entry reached from 0xEFEADC.
    case 0xEADF: c.execute<0x2E>(0x000021, 3); return true;
    // src/unknown/EF/EFEAC8.asm:12 LDA #$0010
    case 0xEAE2: if (c.p & 0x20) c.execute<0xA9>(0x000010, 2); else c.execute<0xA9>(0x008F10, 3); return true;
    // src/unknown/EF/EFEAC8.asm:13 STA f:CGWSEL
    case 0xEAE4: c.execute<0x8F>(0x002130, 4); return true;
    // src/unknown/EF/EFEAC8.asm:13 STA f:CGWSEL
    // Overlapping static entry reached from 0xEFEAE2.
    case 0xEAE5: c.execute<0x30>(0x000021, 2); return true;
    // src/unknown/EF/EFEAC8.asm:13 STA f:CGWSEL
    // Overlapping static entry reached from 0xEFEAE5.
    case 0xEAE7: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFEAC8.asm:14 LDA #$0093
    case 0xEAE8: if (c.p & 0x20) c.execute<0xA9>(0x000093, 2); else c.execute<0xA9>(0x008F93, 3); return true;
    // src/unknown/EF/EFEAC8.asm:15 STA f:CGADSUB
    case 0xEAEA: c.execute<0x8F>(0x002131, 4); return true;
    // src/unknown/EF/EFEAC8.asm:15 STA f:CGADSUB
    // Overlapping static entry reached from 0xEFEAE8.
    case 0xEAEB: c.execute<0x31>(0x000021, 2); return true;
    // src/unknown/EF/EFEAC8.asm:15 STA f:CGADSUB
    // Overlapping static entry reached from 0xEFEAEB.
    case 0xEAED: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFEAC8.asm:16 LDA #$00EF
    case 0xEAEE: if (c.p & 0x20) c.execute<0xA9>(0x0000EF, 2); else c.execute<0xA9>(0x008FEF, 3); return true;
    // src/unknown/EF/EFEAC8.asm:17 STA f:$2132
    case 0xEAF0: c.execute<0x8F>(0x002132, 4); return true;
    // src/unknown/EF/EFEAC8.asm:17 STA f:$2132
    // Overlapping static entry reached from 0xEFEAEE.
    case 0xEAF1: c.execute<0x32>(0x000021, 2); return true;
    // src/unknown/EF/EFEAC8.asm:17 STA f:$2132
    // Overlapping static entry reached from 0xEFEAF1.
    case 0xEAF3: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFEAC8.asm:18 LDA #$0001
    case 0xEAF4: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x008F01, 3); return true;
    // src/unknown/EF/EFEAC8.asm:19 STA f:DMAP4
    case 0xEAF6: c.execute<0x8F>(0x004340, 4); return true;
    // src/unknown/EF/EFEAC8.asm:19 STA f:DMAP4
    // Overlapping static entry reached from 0xEFEAF4.
    case 0xEAF7: c.execute<0x40>(0x000000, 1); return true;
    // src/unknown/EF/EFEAC8.asm:20 LDA #$0026
    case 0xEAFA: if (c.p & 0x20) c.execute<0xA9>(0x000026, 2); else c.execute<0xA9>(0x008F26, 3); return true;
    // src/unknown/EF/EFEAC8.asm:21 STA f:BBAD4
    case 0xEAFC: c.execute<0x8F>(0x004341, 4); return true;
    // src/unknown/EF/EFEAC8.asm:21 STA f:BBAD4
    // Overlapping static entry reached from 0xEFEAFA.
    case 0xEAFD: c.execute<0x41>(0x000043, 2); return true;
    // src/unknown/EF/EFEAC8.asm:21 STA f:BBAD4
    // Overlapping static entry reached from 0xEFEAFD.
    case 0xEAFF: c.execute<0x00>(0x0000C2, 2); return true;
    // src/unknown/EF/EFEAC8.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xEB00: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFEAC8.asm:23 LDA #$EB1D
    case 0xEB02: if (c.p & 0x20) c.execute<0xA9>(0x00001D, 2); else c.execute<0xA9>(0x00EB1D, 3); return true;
    // src/unknown/EF/EFEAC8.asm:23 LDA #$EB1D
    // Overlapping static entry reached from 0xEFEB02.
    case 0xEB04: c.execute<0xEB>(0x000000, 1); return true;
    // src/unknown/EF/EFEAC8.asm:24 STA f:A1T4L
    case 0xEB05: c.execute<0x8F>(0x004342, 4); return true;
    // src/unknown/EF/EFEAC8.asm:24 STA f:A1T4L
    // Overlapping static entry reached from 0xEFEAE5.
    case 0xEB08: c.execute<0x00>(0x0000E2, 2); return true;
    // src/unknown/EF/EFEAC8.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xEB09: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFEAC8.asm:26 LDA #$00EF
    case 0xEB0B: if (c.p & 0x20) c.execute<0xA9>(0x0000EF, 2); else c.execute<0xA9>(0x008FEF, 3); return true;
    // src/unknown/EF/EFEAC8.asm:27 STA f:A1B4
    case 0xEB0D: c.execute<0x8F>(0x004344, 4); return true;
    // src/unknown/EF/EFEAC8.asm:27 STA f:A1B4
    // Overlapping static entry reached from 0xEFEB0B.
    case 0xEB0E: c.execute<0x44>(0x000043, 3); return true;
    // src/unknown/EF/EFEAC8.asm:28 STA f:$4347
    case 0xEB11: c.execute<0x8F>(0x004347, 4); return true;
    // src/unknown/EF/EFEAC8.asm:29 LDA #$0010
    case 0xEB15: if (c.p & 0x20) c.execute<0xA9>(0x000010, 2); else c.execute<0xA9>(0x000C10, 3); return true;
    // src/unknown/EF/EFEAC8.asm:30 TSB HDMAEN_MIRROR
    case 0xEB17: c.execute<0x0C>(0x00001F, 3); return true;
    // src/unknown/EF/EFEAC8.asm:30 TSB HDMAEN_MIRROR
    // Overlapping static entry reached from 0xEFEB15.
    case 0xEB18: c.execute<0x1F>(0x20C200, 4); return true;
    // src/unknown/EF/EFEAC8.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xEB1A: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFEAC8.asm:32 RTL
    case 0xEB1C: c.execute<0x6B>(0x000000, 1); return true;
    // src/unknown/EF/EFEB2A.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xEB2A: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFEB2A.asm:4 STZ HDMAEN_MIRROR
    case 0xEB2C: c.execute<0x9C>(0x00001F, 3); return true;
    // src/unknown/EF/EFEB2A.asm:5 LDA #$0080
    case 0xEB2F: if (c.p & 0x20) c.execute<0xA9>(0x000080, 2); else c.execute<0xA9>(0x008F80, 3); return true;
    // src/unknown/EF/EFEB2A.asm:6 STA f:WH0
    case 0xEB31: c.execute<0x8F>(0x002126, 4); return true;
    // src/unknown/EF/EFEB2A.asm:6 STA f:WH0
    // Overlapping static entry reached from 0xEFEB2F.
    case 0xEB32: c.execute<0x26>(0x000021, 2); return true;
    // src/unknown/EF/EFEB2A.asm:6 STA f:WH0
    // Overlapping static entry reached from 0xEFEB32.
    case 0xEB34: c.execute<0x00>(0x00003A, 2); return true;
    // src/unknown/EF/EFEB2A.asm:7 DEC
    case 0xEB35: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EFEB2A.asm:8 STA f:WH1
    case 0xEB36: c.execute<0x8F>(0x002127, 4); return true;
    // src/unknown/EF/EFEB2A.asm:9 REP #PROC_FLAGS::ACCUM8
    case 0xEB3A: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFEB2A.asm:10 RTL
    case 0xEB3C: c.execute<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}
} // namespace eb
