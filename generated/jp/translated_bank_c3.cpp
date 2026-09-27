// Generated from ca65 instruction spans. Do not edit.
#include "eb/cpu.hpp"
#include <cstdint>

namespace eb::jp {
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
    case 0x0106: c.execute<0xFF>(0x9D225B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0107: c.execute<0x5B>(0x000000, 1); return true;
    // src/system/display_antipiracy_screen.asm:8 JSL UNKNOWN_C40B51
    case 0x0108: c.execute<0x22>(0xC40A9D, 4); return true;
    // src/system/display_antipiracy_screen.asm:8 JSL UNKNOWN_C40B51
    // Overlapping static entry reached from 0xC30106.
    case 0x010A: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/display_antipiracy_screen.asm:8 JSL UNKNOWN_C40B51
    // Overlapping static entry reached from 0xC3010A.
    case 0x010B: c.execute<0xC4>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0x010C: if (c.p & 0x20) c.execute<0xA9>(0x000036, 2); else c.execute<0xA9>(0x00F336, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3010B.
    case 0x010D: c.execute<0x36>(0x0000F3, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3010C.
    case 0x010E: c.execute<0xF3>(0x000085, 2); return true;
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
    case 0x0120: c.execute<0x22>(0xC419EA, 4); return true;
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
    case 0x0138: c.execute<0x22>(0xC419EA, 4); return true;
    // src/system/display_antipiracy_screen.asm:15 JSL UNKNOWN_C40B75
    case 0x013C: c.execute<0x22>(0xC40AC1, 4); return true;
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
    case 0x0148: c.execute<0xFF>(0x9D225B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0149: c.execute<0x5B>(0x000000, 1); return true;
    // src/system/display_faulty_gamepak_screen.asm:8 JSL UNKNOWN_C40B51
    case 0x014A: c.execute<0x22>(0xC40A9D, 4); return true;
    // src/system/display_faulty_gamepak_screen.asm:8 JSL UNKNOWN_C40B51
    // Overlapping static entry reached from 0xC30148.
    case 0x014C: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/display_faulty_gamepak_screen.asm:8 JSL UNKNOWN_C40B51
    // Overlapping static entry reached from 0xC3014C.
    case 0x014D: c.execute<0xC4>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0x014E: if (c.p & 0x20) c.execute<0xA9>(0x0000D4, 2); else c.execute<0xA9>(0x00FAD4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3014D.
    case 0x014F: c.execute<0xD4>(0x0000FA, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3014E.
    case 0x0150: c.execute<0xFA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    case 0x0151: c.execute<0x85>(0x00000E, 2); return true;
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
    case 0x0162: c.execute<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0x0166: if (c.p & 0x20) c.execute<0xA9>(0x0000D6, 2); else c.execute<0xA9>(0x00F8D6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC30166.
    case 0x0168: c.execute<0xF8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    case 0x0169: c.execute<0x85>(0x00000E, 2); return true;
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
    case 0x017A: c.execute<0x22>(0xC419EA, 4); return true;
    // src/system/display_faulty_gamepak_screen.asm:15 JSL UNKNOWN_C40B75
    case 0x017E: c.execute<0x22>(0xC40AC1, 4); return true;
    // include/macros.asm:25 PLD
    case 0x0182: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x0183: c.execute<0x6B>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE537: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE539: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xE53A: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE53B: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE53C: if (c.p & 0x20) c.execute<0x69>(0x0000F2, 2); else c.execute<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3E53C.
    case 0xE53E: c.execute<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE53F: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xE540: c.execute<0x68>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:8 TXY
    case 0xE541: c.execute<0x9B>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:9 TAX
    case 0xE542: c.execute<0xAA>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:10 TYA
    case 0xE543: c.execute<0x98>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:11 DEC
    case 0xE544: c.execute<0x3A>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:12 STA @VIRTUAL02
    case 0xE545: c.execute<0x85>(0x000002, 2); return true;
    // src/misc/get_character_item.asm:13 TXA
    case 0xE547: c.execute<0x8A>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:14 DEC
    case 0xE548: c.execute<0x3A>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:15 LDY #.SIZEOF(char_struct)
    case 0xE549: if (c.p & 0x10) c.execute<0xA0>(0x00005E, 2); else c.execute<0xA0>(0x00005E, 3); return true;
    // src/misc/get_character_item.asm:15 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E549.
    case 0xE54B: c.execute<0x00>(0x000022, 2); return true;
    // src/misc/get_character_item.asm:16 JSL MULT168
    case 0xE54C: c.execute<0x22>(0xC08FDB, 4); return true;
    // src/misc/get_character_item.asm:17 CLC
    case 0xE550: c.execute<0x18>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:18 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xE551: if (c.p & 0x20) c.execute<0x69>(0x0000A1, 2); else c.execute<0x69>(0x009CA1, 3); return true;
    // src/misc/get_character_item.asm:18 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC3E551.
    case 0xE553: c.execute<0x9C>(0x006518, 3); return true;
    // src/misc/get_character_item.asm:19 CLC
    case 0xE554: c.execute<0x18>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:20 ADC @VIRTUAL02
    case 0xE555: c.execute<0x65>(0x000002, 2); return true;
    // src/misc/get_character_item.asm:20 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC3E553.
    case 0xE556: c.execute<0x02>(0x0000AA, 2); return true;
    // src/misc/get_character_item.asm:21 TAX
    case 0xE557: c.execute<0xAA>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:22 LDA __BSS_START__,X
    case 0xE558: c.execute<0xBD>(0x000000, 3); return true;
    // src/misc/get_character_item.asm:23 AND #$00FF
    case 0xE55B: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/misc/get_character_item.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC3E55B.
    case 0xE55D: c.execute<0x00>(0x00002B, 2); return true;
    // src/misc/get_character_item.asm:24 PLD
    case 0xE55E: c.execute<0x2B>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:25 RTL
    case 0xE55F: c.execute<0x6B>(0x000000, 1); return true;
    // src/misc/check_item_equipped.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE560: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE562: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xE563: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE564: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE565: if (c.p & 0x20) c.execute<0x69>(0x0000F2, 2); else c.execute<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3E565.
    case 0xE567: c.execute<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE568: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xE569: c.execute<0x68>(0x000000, 1); return true;
    // src/misc/check_item_equipped.asm:8 STX @VIRTUAL02
    case 0xE56A: c.execute<0x86>(0x000002, 2); return true;
    // src/misc/check_item_equipped.asm:8 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC3E567.
    case 0xE56B: c.execute<0x02>(0x0000AA, 2); return true;
    // src/misc/check_item_equipped.asm:9 TAX
    case 0xE56C: c.execute<0xAA>(0x000000, 1); return true;
    // src/misc/check_item_equipped.asm:10 DEC
    case 0xE56D: c.execute<0x3A>(0x000000, 1); return true;
    // src/misc/check_item_equipped.asm:11 LDY #.SIZEOF(char_struct)
    case 0xE56E: if (c.p & 0x10) c.execute<0xA0>(0x00005E, 2); else c.execute<0xA0>(0x00005E, 3); return true;
    // src/misc/check_item_equipped.asm:11 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E56E.
    case 0xE570: c.execute<0x00>(0x000022, 2); return true;
    // src/misc/check_item_equipped.asm:12 JSL MULT168
    case 0xE571: c.execute<0x22>(0xC08FDB, 4); return true;
    // src/misc/check_item_equipped.asm:13 TAX
    case 0xE575: c.execute<0xAA>(0x000000, 1); return true;
    // src/misc/check_item_equipped.asm:14 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xE576: c.execute<0xBD>(0x009CAF, 3); return true;
    // src/misc/check_item_equipped.asm:15 AND #$00FF
    case 0xE579: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/misc/check_item_equipped.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC3E579.
    case 0xE57B: c.execute<0x00>(0x0000C5, 2); return true;
    // src/misc/check_item_equipped.asm:16 CMP @VIRTUAL02
    case 0xE57C: c.execute<0xC5>(0x000002, 2); return true;
    // src/misc/check_item_equipped.asm:17 BNE @UNKNOWN0
    case 0xE57E: c.execute<0xD0>(0x000005, 2); return true;
    // src/misc/check_item_equipped.asm:18 LDA #$0001
    case 0xE580: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/misc/check_item_equipped.asm:18 LDA #$0001
    // Overlapping static entry reached from 0xC3E580.
    case 0xE582: c.execute<0x00>(0x000080, 2); return true;
    // src/misc/check_item_equipped.asm:19 BRA @UNKNOWN4
    case 0xE583: c.execute<0x80>(0x000030, 2); return true;
    // src/misc/check_item_equipped.asm:21 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xE585: c.execute<0xBD>(0x009CB0, 3); return true;
    // src/misc/check_item_equipped.asm:22 AND #$00FF
    case 0xE588: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/misc/check_item_equipped.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC3E588.
    case 0xE58A: c.execute<0x00>(0x0000C5, 2); return true;
    // src/misc/check_item_equipped.asm:23 CMP @VIRTUAL02
    case 0xE58B: c.execute<0xC5>(0x000002, 2); return true;
    // src/misc/check_item_equipped.asm:24 BNE @UNKNOWN1
    case 0xE58D: c.execute<0xD0>(0x000005, 2); return true;
    // src/misc/check_item_equipped.asm:25 LDA #$0001
    case 0xE58F: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/misc/check_item_equipped.asm:25 LDA #$0001
    // Overlapping static entry reached from 0xC3E58F.
    case 0xE591: c.execute<0x00>(0x000080, 2); return true;
    // src/misc/check_item_equipped.asm:26 BRA @UNKNOWN4
    case 0xE592: c.execute<0x80>(0x000021, 2); return true;
    // src/misc/check_item_equipped.asm:28 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xE594: c.execute<0xBD>(0x009CB1, 3); return true;
    // src/misc/check_item_equipped.asm:29 AND #$00FF
    case 0xE597: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/misc/check_item_equipped.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC3E597.
    case 0xE599: c.execute<0x00>(0x0000C5, 2); return true;
    // src/misc/check_item_equipped.asm:30 CMP @VIRTUAL02
    case 0xE59A: c.execute<0xC5>(0x000002, 2); return true;
    // src/misc/check_item_equipped.asm:31 BNE @UNKNOWN2
    case 0xE59C: c.execute<0xD0>(0x000005, 2); return true;
    // src/misc/check_item_equipped.asm:32 LDA #$0001
    case 0xE59E: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/misc/check_item_equipped.asm:32 LDA #$0001
    // Overlapping static entry reached from 0xC3E59E.
    case 0xE5A0: c.execute<0x00>(0x000080, 2); return true;
    // src/misc/check_item_equipped.asm:33 BRA @UNKNOWN4
    case 0xE5A1: c.execute<0x80>(0x000012, 2); return true;
    // src/misc/check_item_equipped.asm:35 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xE5A3: c.execute<0xBD>(0x009CB2, 3); return true;
    // src/misc/check_item_equipped.asm:36 AND #$00FF
    case 0xE5A6: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/misc/check_item_equipped.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC3E5A6.
    case 0xE5A8: c.execute<0x00>(0x0000C5, 2); return true;
    // src/misc/check_item_equipped.asm:37 CMP @VIRTUAL02
    case 0xE5A9: c.execute<0xC5>(0x000002, 2); return true;
    // src/misc/check_item_equipped.asm:38 BNE @UNKNOWN3
    case 0xE5AB: c.execute<0xD0>(0x000005, 2); return true;
    // src/misc/check_item_equipped.asm:39 LDA #$0001
    case 0xE5AD: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/misc/check_item_equipped.asm:39 LDA #$0001
    // Overlapping static entry reached from 0xC3E5AD.
    case 0xE5AF: c.execute<0x00>(0x000080, 2); return true;
    // src/misc/check_item_equipped.asm:40 BRA @UNKNOWN4
    case 0xE5B0: c.execute<0x80>(0x000003, 2); return true;
    // src/misc/check_item_equipped.asm:42 LDA #$0000
    case 0xE5B2: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/misc/check_item_equipped.asm:42 LDA #$0000
    // Overlapping static entry reached from 0xC3E5B2.
    case 0xE5B4: c.execute<0x00>(0x00002B, 2); return true;
    // src/misc/check_item_equipped.asm:44 PLD
    case 0xE5B5: c.execute<0x2B>(0x000000, 1); return true;
    // src/misc/check_item_equipped.asm:45 RTL
    case 0xE5B6: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE5B7: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE5B9: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xE5BA: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE5BB: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE5BC: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3E5BC.
    case 0xE5BE: c.execute<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE5BF: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xE5C0: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:10 STX @VIRTUAL02
    case 0xE5C1: c.execute<0x86>(0x000002, 2); return true;
    // src/unknown/C3/C3E9F7.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC3E5BE.
    case 0xE5C2: c.execute<0x02>(0x0000AA, 2); return true;
    // src/unknown/C3/C3E9F7.asm:11 TAX
    case 0xE5C3: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:12 TXY
    case 0xE5C4: c.execute<0x9B>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:13 DEY
    case 0xE5C5: c.execute<0x88>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:14 STY @LOCAL00
    case 0xE5C6: c.execute<0x84>(0x00000E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:15 TYA
    case 0xE5C8: c.execute<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    case 0xE5C9: if (c.p & 0x10) c.execute<0xA0>(0x00005E, 2); else c.execute<0xA0>(0x00005E, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Overlapping static entry reached from 0xC3E5C9.
    case 0xE5CB: c.execute<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    case 0xE5CC: c.execute<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3E9F7.asm:17 TAX
    case 0xE5D0: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:18 LDA PARTY_CHARACTERS + char_struct::equipment + EQUIPMENT_SLOT::WEAPON,X
    case 0xE5D1: c.execute<0xBD>(0x009CAF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:19 AND #$00FF
    case 0xE5D4: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC3E5D4.
    case 0xE5D6: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3E9F7.asm:20 BEQ @UNKNOWN0
    case 0xE5D7: c.execute<0xF0>(0x00001F, 2); return true;
    // src/unknown/C3/C3E9F7.asm:21 AND #$00FF
    case 0xE5D9: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC3E5D9.
    case 0xE5DB: c.execute<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3E9F7.asm:22 DEC
    case 0xE5DC: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:23 STA @VIRTUAL04
    case 0xE5DD: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:24 TXA
    case 0xE5DF: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:25 CLC
    case 0xE5E0: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:26 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xE5E1: if (c.p & 0x20) c.execute<0x69>(0x0000A1, 2); else c.execute<0x69>(0x009CA1, 3); return true;
    // src/unknown/C3/C3E9F7.asm:26 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC3E5E1.
    case 0xE5E3: c.execute<0x9C>(0x006518, 3); return true;
    // src/unknown/C3/C3E9F7.asm:27 CLC
    case 0xE5E4: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:28 ADC @VIRTUAL04
    case 0xE5E5: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:28 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC3E5E3.
    case 0xE5E6: c.execute<0x04>(0x0000AA, 2); return true;
    // src/unknown/C3/C3E9F7.asm:29 TAX
    case 0xE5E7: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:30 LDA __BSS_START__,X
    case 0xE5E8: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3E9F7.asm:31 AND #$00FF
    case 0xE5EB: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC3E5EB.
    case 0xE5ED: c.execute<0x00>(0x0000C5, 2); return true;
    // src/unknown/C3/C3E9F7.asm:32 CMP @VIRTUAL02
    case 0xE5EE: c.execute<0xC5>(0x000002, 2); return true;
    // src/unknown/C3/C3E9F7.asm:33 BNE @UNKNOWN0
    case 0xE5F0: c.execute<0xD0>(0x000006, 2); return true;
    // src/unknown/C3/C3E9F7.asm:34 LDA #1
    case 0xE5F2: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3E9F7.asm:34 LDA #1
    // Overlapping static entry reached from 0xC3E5F2.
    case 0xE5F4: c.execute<0x00>(0x00004C, 2); return true;
    // src/unknown/C3/C3E9F7.asm:35 JMP @UNKNOWN4
    case 0xE5F5: c.execute<0x4C>(0x00E68E, 3); return true;
    // src/unknown/C3/C3E9F7.asm:37 LDY @LOCAL00
    case 0xE5F8: c.execute<0xA4>(0x00000E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:38 TYA
    case 0xE5FA: c.execute<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    case 0xE5FB: if (c.p & 0x10) c.execute<0xA0>(0x00005E, 2); else c.execute<0xA0>(0x00005E, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Overlapping static entry reached from 0xC3E5FB.
    case 0xE5FD: c.execute<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    case 0xE5FE: c.execute<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3E9F7.asm:40 TAX
    case 0xE602: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:41 LDA PARTY_CHARACTERS + char_struct::equipment + EQUIPMENT_SLOT::BODY,X
    case 0xE603: c.execute<0xBD>(0x009CB0, 3); return true;
    // src/unknown/C3/C3E9F7.asm:42 AND #$00FF
    case 0xE606: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC3E606.
    case 0xE608: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3E9F7.asm:43 BEQ @UNKNOWN1
    case 0xE609: c.execute<0xF0>(0x00001E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:44 AND #$00FF
    case 0xE60B: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC3E60B.
    case 0xE60D: c.execute<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3E9F7.asm:45 DEC
    case 0xE60E: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:46 STA @VIRTUAL04
    case 0xE60F: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:47 TXA
    case 0xE611: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:48 CLC
    case 0xE612: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:49 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xE613: if (c.p & 0x20) c.execute<0x69>(0x0000A1, 2); else c.execute<0x69>(0x009CA1, 3); return true;
    // src/unknown/C3/C3E9F7.asm:49 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC3E613.
    case 0xE615: c.execute<0x9C>(0x006518, 3); return true;
    // src/unknown/C3/C3E9F7.asm:50 CLC
    case 0xE616: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:51 ADC @VIRTUAL04
    case 0xE617: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:51 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC3E615.
    case 0xE618: c.execute<0x04>(0x0000AA, 2); return true;
    // src/unknown/C3/C3E9F7.asm:52 TAX
    case 0xE619: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:53 LDA __BSS_START__,X
    case 0xE61A: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3E9F7.asm:54 AND #$00FF
    case 0xE61D: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC3E61D.
    case 0xE61F: c.execute<0x00>(0x0000C5, 2); return true;
    // src/unknown/C3/C3E9F7.asm:55 CMP @VIRTUAL02
    case 0xE620: c.execute<0xC5>(0x000002, 2); return true;
    // src/unknown/C3/C3E9F7.asm:56 BNE @UNKNOWN1
    case 0xE622: c.execute<0xD0>(0x000005, 2); return true;
    // src/unknown/C3/C3E9F7.asm:57 LDA #1
    case 0xE624: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3E9F7.asm:57 LDA #1
    // Overlapping static entry reached from 0xC3E624.
    case 0xE626: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3E9F7.asm:58 BRA @UNKNOWN4
    case 0xE627: c.execute<0x80>(0x000065, 2); return true;
    // src/unknown/C3/C3E9F7.asm:60 LDY @LOCAL00
    case 0xE629: c.execute<0xA4>(0x00000E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:61 TYA
    case 0xE62B: c.execute<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    case 0xE62C: if (c.p & 0x10) c.execute<0xA0>(0x00005E, 2); else c.execute<0xA0>(0x00005E, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Overlapping static entry reached from 0xC3E62C.
    case 0xE62E: c.execute<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    case 0xE62F: c.execute<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3E9F7.asm:63 TAX
    case 0xE633: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:64 LDA PARTY_CHARACTERS + char_struct::equipment + EQUIPMENT_SLOT::ARMS,X
    case 0xE634: c.execute<0xBD>(0x009CB1, 3); return true;
    // src/unknown/C3/C3E9F7.asm:65 AND #$00FF
    case 0xE637: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:65 AND #$00FF
    // Overlapping static entry reached from 0xC3E637.
    case 0xE639: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3E9F7.asm:66 BEQ @UNKNOWN2
    case 0xE63A: c.execute<0xF0>(0x00001E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:67 AND #$00FF
    case 0xE63C: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC3E63C.
    case 0xE63E: c.execute<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3E9F7.asm:68 DEC
    case 0xE63F: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:69 STA @VIRTUAL04
    case 0xE640: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:70 TXA
    case 0xE642: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:71 CLC
    case 0xE643: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:72 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xE644: if (c.p & 0x20) c.execute<0x69>(0x0000A1, 2); else c.execute<0x69>(0x009CA1, 3); return true;
    // src/unknown/C3/C3E9F7.asm:72 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC3E644.
    case 0xE646: c.execute<0x9C>(0x006518, 3); return true;
    // src/unknown/C3/C3E9F7.asm:73 CLC
    case 0xE647: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:74 ADC @VIRTUAL04
    case 0xE648: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:74 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC3E646.
    case 0xE649: c.execute<0x04>(0x0000AA, 2); return true;
    // src/unknown/C3/C3E9F7.asm:75 TAX
    case 0xE64A: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:76 LDA __BSS_START__,X
    case 0xE64B: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3E9F7.asm:77 AND #$00FF
    case 0xE64E: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:77 AND #$00FF
    // Overlapping static entry reached from 0xC3E64E.
    case 0xE650: c.execute<0x00>(0x0000C5, 2); return true;
    // src/unknown/C3/C3E9F7.asm:78 CMP @VIRTUAL02
    case 0xE651: c.execute<0xC5>(0x000002, 2); return true;
    // src/unknown/C3/C3E9F7.asm:79 BNE @UNKNOWN2
    case 0xE653: c.execute<0xD0>(0x000005, 2); return true;
    // src/unknown/C3/C3E9F7.asm:80 LDA #1
    case 0xE655: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3E9F7.asm:80 LDA #1
    // Overlapping static entry reached from 0xC3E655.
    case 0xE657: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3E9F7.asm:81 BRA @UNKNOWN4
    case 0xE658: c.execute<0x80>(0x000034, 2); return true;
    // src/unknown/C3/C3E9F7.asm:83 LDY @LOCAL00
    case 0xE65A: c.execute<0xA4>(0x00000E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:84 TYA
    case 0xE65C: c.execute<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    case 0xE65D: if (c.p & 0x10) c.execute<0xA0>(0x00005E, 2); else c.execute<0xA0>(0x00005E, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Overlapping static entry reached from 0xC3E65D.
    case 0xE65F: c.execute<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    case 0xE660: c.execute<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3E9F7.asm:86 TAX
    case 0xE664: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:87 LDA PARTY_CHARACTERS + char_struct::equipment + EQUIPMENT_SLOT::OTHER,X
    case 0xE665: c.execute<0xBD>(0x009CB2, 3); return true;
    // src/unknown/C3/C3E9F7.asm:88 AND #$00FF
    case 0xE668: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:88 AND #$00FF
    // Overlapping static entry reached from 0xC3E668.
    case 0xE66A: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3E9F7.asm:89 BEQ @UNKNOWN3
    case 0xE66B: c.execute<0xF0>(0x00001E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:90 AND #$00FF
    case 0xE66D: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:90 AND #$00FF
    // Overlapping static entry reached from 0xC3E66D.
    case 0xE66F: c.execute<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3E9F7.asm:91 DEC
    case 0xE670: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:92 STA @VIRTUAL04
    case 0xE671: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:93 TXA
    case 0xE673: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:94 CLC
    case 0xE674: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:95 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xE675: if (c.p & 0x20) c.execute<0x69>(0x0000A1, 2); else c.execute<0x69>(0x009CA1, 3); return true;
    // src/unknown/C3/C3E9F7.asm:95 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC3E675.
    case 0xE677: c.execute<0x9C>(0x006518, 3); return true;
    // src/unknown/C3/C3E9F7.asm:96 CLC
    case 0xE678: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:97 ADC @VIRTUAL04
    case 0xE679: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:97 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC3E677.
    case 0xE67A: c.execute<0x04>(0x0000AA, 2); return true;
    // src/unknown/C3/C3E9F7.asm:98 TAX
    case 0xE67B: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:99 LDA __BSS_START__,X
    case 0xE67C: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3E9F7.asm:100 AND #$00FF
    case 0xE67F: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:100 AND #$00FF
    // Overlapping static entry reached from 0xC3E67F.
    case 0xE681: c.execute<0x00>(0x0000C5, 2); return true;
    // src/unknown/C3/C3E9F7.asm:101 CMP @VIRTUAL02
    case 0xE682: c.execute<0xC5>(0x000002, 2); return true;
    // src/unknown/C3/C3E9F7.asm:102 BNE @UNKNOWN3
    case 0xE684: c.execute<0xD0>(0x000005, 2); return true;
    // src/unknown/C3/C3E9F7.asm:103 LDA #1
    case 0xE686: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3E9F7.asm:103 LDA #1
    // Overlapping static entry reached from 0xC3E686.
    case 0xE688: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3E9F7.asm:104 BRA @UNKNOWN4
    case 0xE689: c.execute<0x80>(0x000003, 2); return true;
    // src/unknown/C3/C3E9F7.asm:106 LDA #0
    case 0xE68B: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3E9F7.asm:106 LDA #0
    // Overlapping static entry reached from 0xC3E68B.
    case 0xE68D: c.execute<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    case 0xE68E: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xE68F: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE690: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE692: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xE693: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE694: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE695: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3E695.
    case 0xE697: c.execute<0xFF>(0xE2685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE698: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xE699: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3EAD0.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xE69A: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EAD0.asm:8 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC3E697.
    case 0xE69B: c.execute<0x20>(0x000085, 3); return true;
    // src/unknown/C3/C3EAD0.asm:9 STA @VIRTUAL00
    case 0xE69C: c.execute<0x85>(0x000000, 2); return true;
    // src/unknown/C3/C3EAD0.asm:10 LDX #0
    case 0xE69E: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/unknown/C3/C3EAD0.asm:10 LDX #0
    // Overlapping static entry reached from 0xC3E69E.
    case 0xE6A0: c.execute<0x00>(0x000086, 2); return true;
    // src/unknown/C3/C3EAD0.asm:11 STX @LOCAL00
    case 0xE6A1: c.execute<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3EAD0.asm:12 BRA @UNKNOWN2
    case 0xE6A3: c.execute<0x80>(0x000022, 2); return true;
    // src/unknown/C3/C3EAD0.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xE6A5: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EAD0.asm:15 CMP @VIRTUAL00
    case 0xE6A7: c.execute<0xC5>(0x000000, 2); return true;
    // src/unknown/C3/C3EAD0.asm:16 BNE @UNKNOWN1
    case 0xE6A9: c.execute<0xD0>(0x000017, 2); return true;
    // src/unknown/C3/C3EAD0.asm:17 LDX @LOCAL00
    case 0xE6AB: c.execute<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3EAD0.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xE6AD: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3EAD0.asm:19 TXA
    case 0xE6AF: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EAD0.asm:20 JSL IS_VALID_ITEM_TRANSFORMATION
    case 0xE6B0: c.execute<0x22>(0xC46518, 4); return true;
    // src/unknown/C3/C3EAD0.asm:21 CMP #0
    case 0xE6B4: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/unknown/C3/C3EAD0.asm:21 CMP #0
    // Overlapping static entry reached from 0xC3E6B4.
    case 0xE6B6: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3EAD0.asm:22 BNE @UNKNOWN3
    case 0xE6B7: c.execute<0xD0>(0x000021, 2); return true;
    // src/unknown/C3/C3EAD0.asm:23 LDX @LOCAL00
    case 0xE6B9: c.execute<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3EAD0.asm:24 TXA
    case 0xE6BB: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EAD0.asm:25 JSL INITIALIZE_ITEM_TRANSFORMATION
    case 0xE6BC: c.execute<0x22>(0xC46535, 4); return true;
    // src/unknown/C3/C3EAD0.asm:26 BRA @UNKNOWN3
    case 0xE6C0: c.execute<0x80>(0x000018, 2); return true;
    // src/unknown/C3/C3EAD0.asm:28 LDX @LOCAL00
    case 0xE6C2: c.execute<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3EAD0.asm:29 INX
    case 0xE6C4: c.execute<0xE8>(0x000000, 1); return true;
    // src/unknown/C3/C3EAD0.asm:30 STX @LOCAL00
    case 0xE6C5: c.execute<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3EAD0.asm:32 REP #PROC_FLAGS::ACCUM8
    case 0xE6C7: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3EAD0.asm:33 TXA
    case 0xE6C9: c.execute<0x8A>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    case 0xE6CA: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    case 0xE6CC: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    case 0xE6CD: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    case 0xE6CE: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3EAD0.asm:35 TAX
    case 0xE6D0: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EAD0.asm:36 LDA f:TIMED_ITEM_TRANSFORMATION_TABLE + timed_item_transformation::item,X
    case 0xE6D1: c.execute<0xBF>(0xD5F41B, 4); return true;
    // src/unknown/C3/C3EAD0.asm:37 AND #$00FF
    case 0xE6D5: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EAD0.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC3E6D5.
    case 0xE6D7: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3EAD0.asm:38 BNE @UNKNOWN0
    case 0xE6D8: c.execute<0xD0>(0x0000CB, 2); return true;
    // include/macros.asm:25 PLD
    case 0xE6DA: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xE6DB: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE6DC: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE6DE: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xE6DF: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE6E0: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE6E1: if (c.p & 0x20) c.execute<0x69>(0x0000EA, 2); else c.execute<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3E6E1.
    case 0xE6E3: c.execute<0xFF>(0xE2685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE6E4: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xE6E5: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xE6E6: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EB1C.asm:11 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC3E6E3.
    case 0xE6E7: c.execute<0x20>(0x000085, 3); return true;
    // src/unknown/C3/C3EB1C.asm:12 STA @VIRTUAL00
    case 0xE6E8: c.execute<0x85>(0x000000, 2); return true;
    // src/unknown/C3/C3EB1C.asm:13 LDY #0
    case 0xE6EA: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/unknown/C3/C3EB1C.asm:13 LDY #0
    // Overlapping static entry reached from 0xC3E6EA.
    case 0xE6EC: c.execute<0x00>(0x000084, 2); return true;
    // src/unknown/C3/C3EB1C.asm:14 STY @LOCAL03
    case 0xE6ED: c.execute<0x84>(0x000014, 2); return true;
    // src/unknown/C3/C3EB1C.asm:15 BRA @UNKNOWN1
    case 0xE6EF: c.execute<0x80>(0x000003, 2); return true;
    // src/unknown/C3/C3EB1C.asm:17 INY
    case 0xE6F1: c.execute<0xC8>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:18 STY @LOCAL03
    case 0xE6F2: c.execute<0x84>(0x000014, 2); return true;
    // src/unknown/C3/C3EB1C.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xE6F4: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3EB1C.asm:21 TYA
    case 0xE6F6: c.execute<0x98>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    case 0xE6F7: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    case 0xE6F9: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    case 0xE6FA: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    case 0xE6FB: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3EB1C.asm:23 TAX
    case 0xE6FD: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:24 LDA f:TIMED_ITEM_TRANSFORMATION_TABLE,X
    case 0xE6FE: c.execute<0xBF>(0xD5F41B, 4); return true;
    // src/unknown/C3/C3EB1C.asm:25 AND #$00FF
    case 0xE702: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EB1C.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC3E702.
    case 0xE704: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3EB1C.asm:26 BEQ @UNKNOWN2
    case 0xE705: c.execute<0xF0>(0x000006, 2); return true;
    // src/unknown/C3/C3EB1C.asm:27 SEP #PROC_FLAGS::ACCUM8
    case 0xE707: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EB1C.asm:28 CMP @VIRTUAL00
    case 0xE709: c.execute<0xC5>(0x000000, 2); return true;
    // src/unknown/C3/C3EB1C.asm:29 BNE @UNKNOWN0
    case 0xE70B: c.execute<0xD0>(0x0000E4, 2); return true;
    // src/unknown/C3/C3EB1C.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xE70D: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3EB1C.asm:32 TYA
    case 0xE70F: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:33 JSL UNKNOWN_C48F98
    case 0xE710: c.execute<0x22>(0xC465E2, 4); return true;
    // src/unknown/C3/C3EB1C.asm:34 LDX #0
    case 0xE714: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/unknown/C3/C3EB1C.asm:34 LDX #0
    // Overlapping static entry reached from 0xC3E714.
    case 0xE716: c.execute<0x00>(0x000086, 2); return true;
    // src/unknown/C3/C3EB1C.asm:35 STX @LOCAL02
    case 0xE717: c.execute<0x86>(0x000012, 2); return true;
    // src/unknown/C3/C3EB1C.asm:36 BRA @UNKNOWN10
    case 0xE719: c.execute<0x80>(0x000066, 2); return true;
    // src/unknown/C3/C3EB1C.asm:39 TXA
    case 0xE71B: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:40 CLC
    case 0xE71C: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:41 ADC #.LOWORD(GAME_STATE)
    case 0xE71D: if (c.p & 0x20) c.execute<0x69>(0x0000A9, 2); else c.execute<0x69>(0x009AA9, 3); return true;
    // src/unknown/C3/C3EB1C.asm:41 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC3E71D.
    case 0xE71F: c.execute<0x9A>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:42 TAX
    case 0xE720: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:43 LDA a:game_state::party_members,X
    case 0xE721: c.execute<0xBD>(0x000077, 3); return true;
    // src/unknown/C3/C3EB1C.asm:47 AND #$00FF
    case 0xE724: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EB1C.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC3E724.
    case 0xE726: c.execute<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3EB1C.asm:48 DEC
    case 0xE727: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:49 LDY #.SIZEOF(char_struct)
    case 0xE728: if (c.p & 0x10) c.execute<0xA0>(0x00005E, 2); else c.execute<0xA0>(0x00005E, 3); return true;
    // src/unknown/C3/C3EB1C.asm:49 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E728.
    case 0xE72A: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EB1C.asm:50 JSL MULT168
    case 0xE72B: c.execute<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3EB1C.asm:51 CLC
    case 0xE72F: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:52 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xE730: if (c.p & 0x20) c.execute<0x69>(0x00007F, 2); else c.execute<0x69>(0x009C7F, 3); return true;
    // src/unknown/C3/C3EB1C.asm:52 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC3E730.
    case 0xE732: c.execute<0x9C>(0x000485, 3); return true;
    // src/unknown/C3/C3EB1C.asm:53 STA @VIRTUAL04
    case 0xE733: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3EB1C.asm:54 LDA #0
    case 0xE735: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3EB1C.asm:54 LDA #0
    // Overlapping static entry reached from 0xC3E735.
    case 0xE737: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3EB1C.asm:55 STA @VIRTUAL02
    case 0xE738: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:56 STA @LOCAL01
    case 0xE73A: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3EB1C.asm:57 BRA @UNKNOWN6
    case 0xE73C: c.execute<0x80>(0x000020, 2); return true;
    // src/unknown/C3/C3EB1C.asm:59 LDA @VIRTUAL00
    case 0xE73E: c.execute<0xA5>(0x000000, 2); return true;
    // src/unknown/C3/C3EB1C.asm:60 AND #$00FF
    case 0xE740: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EB1C.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC3E740.
    case 0xE742: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3EB1C.asm:61 STA @VIRTUAL02
    case 0xE743: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:62 LDA @LOCAL00
    case 0xE745: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3EB1C.asm:63 CMP @VIRTUAL02
    case 0xE747: c.execute<0xC5>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:64 BNE @UNKNOWN5
    case 0xE749: c.execute<0xD0>(0x000009, 2); return true;
    // src/unknown/C3/C3EB1C.asm:65 LDY @LOCAL03
    case 0xE74B: c.execute<0xA4>(0x000014, 2); return true;
    // src/unknown/C3/C3EB1C.asm:66 TYA
    case 0xE74D: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:67 JSL INITIALIZE_ITEM_TRANSFORMATION
    case 0xE74E: c.execute<0x22>(0xC46535, 4); return true;
    // src/unknown/C3/C3EB1C.asm:68 BRA @UNKNOWN11
    case 0xE752: c.execute<0x80>(0x00003A, 2); return true;
    // src/unknown/C3/C3EB1C.asm:70 LDA @LOCAL01
    case 0xE754: c.execute<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3EB1C.asm:71 STA @VIRTUAL02
    case 0xE756: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:72 INC @VIRTUAL02
    case 0xE758: c.execute<0xE6>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:73 LDA @VIRTUAL02
    case 0xE75A: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:74 STA @LOCAL01
    case 0xE75C: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3EB1C.asm:76 LDA #.SIZEOF(char_struct::items)
    case 0xE75E: if (c.p & 0x20) c.execute<0xA9>(0x00000E, 2); else c.execute<0xA9>(0x00000E, 3); return true;
    // src/unknown/C3/C3EB1C.asm:76 LDA #.SIZEOF(char_struct::items)
    // Overlapping static entry reached from 0xC3E75E.
    case 0xE760: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/C3/C3EB1C.asm:77 CLC
    case 0xE761: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:78 SBC @VIRTUAL02
    case 0xE762: c.execute<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    case 0xE764: c.execute<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    case 0xE766: c.execute<0x10>(0x000014, 2); return true;
    // include/macros.asm:809 BRA :++
    case 0xE768: c.execute<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    case 0xE76A: c.execute<0x30>(0x000010, 2); return true;
    // src/unknown/C3/C3EB1C.asm:80 LDA @VIRTUAL04
    case 0xE76C: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/C3/C3EB1C.asm:81 CLC
    case 0xE76E: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:82 ADC @VIRTUAL02
    case 0xE76F: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:83 TAX
    case 0xE771: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:84 LDA a:char_struct::items,X
    case 0xE772: c.execute<0xBD>(0x000022, 3); return true;
    // src/unknown/C3/C3EB1C.asm:85 AND #$00FF
    case 0xE775: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EB1C.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC3E775.
    case 0xE777: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3EB1C.asm:86 STA @LOCAL00
    case 0xE778: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3EB1C.asm:87 BNE @UNKNOWN4
    case 0xE77A: c.execute<0xD0>(0x0000C2, 2); return true;
    // src/unknown/C3/C3EB1C.asm:89 LDX @LOCAL02
    case 0xE77C: c.execute<0xA6>(0x000012, 2); return true;
    // src/unknown/C3/C3EB1C.asm:90 INX
    case 0xE77E: c.execute<0xE8>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:91 STX @LOCAL02
    case 0xE77F: c.execute<0x86>(0x000012, 2); return true;
    // src/unknown/C3/C3EB1C.asm:93 LDA GAME_STATE + game_state::player_controlled_party_count
    case 0xE781: c.execute<0xAD>(0x009B55, 3); return true;
    // src/unknown/C3/C3EB1C.asm:94 AND #$00FF
    case 0xE784: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EB1C.asm:94 AND #$00FF
    // Overlapping static entry reached from 0xC3E784.
    case 0xE786: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3EB1C.asm:95 STA @VIRTUAL02
    case 0xE787: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:96 TXA
    case 0xE789: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:97 CMP @VIRTUAL02
    case 0xE78A: c.execute<0xC5>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:98 BCC @UNKNOWN3
    case 0xE78C: c.execute<0x90>(0x00008D, 2); return true;
    // include/macros.asm:25 PLD
    case 0xE78E: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xE78F: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE790: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE792: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE793: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE794: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3E794.
    case 0xE796: c.execute<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE797: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/C3/C3EBCA.asm:7 LDY #0
    case 0xE798: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/unknown/C3/C3EBCA.asm:7 LDY #0
    // Overlapping static entry reached from 0xC3E798.
    case 0xE79A: c.execute<0x00>(0x000084, 2); return true;
    // src/unknown/C3/C3EBCA.asm:8 STY @LOCAL00
    case 0xE79B: c.execute<0x84>(0x00000E, 2); return true;
    // src/unknown/C3/C3EBCA.asm:9 BRA @UNKNOWN3
    case 0xE79D: c.execute<0x80>(0x000027, 2); return true;
    // src/unknown/C3/C3EBCA.asm:11 AND #$00FF
    case 0xE79F: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EBCA.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC3E79F.
    case 0xE7A1: c.execute<0x00>(0x0000AA, 2); return true;
    // src/unknown/C3/C3EBCA.asm:12 TAX
    case 0xE7A2: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EBCA.asm:13 LDA #$00FF
    case 0xE7A3: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EBCA.asm:13 LDA #$00FF
    // Overlapping static entry reached from 0xC3E7A3.
    case 0xE7A5: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EBCA.asm:14 JSL FIND_ITEM_IN_INVENTORY2
    case 0xE7A6: c.execute<0x22>(0xC43479, 4); return true;
    // src/unknown/C3/C3EBCA.asm:15 CMP #0
    case 0xE7AA: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/unknown/C3/C3EBCA.asm:15 CMP #0
    // Overlapping static entry reached from 0xC3E7AA.
    case 0xE7AC: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3EBCA.asm:16 BEQ @UNKNOWN1
    case 0xE7AD: c.execute<0xF0>(0x00000A, 2); return true;
    // src/unknown/C3/C3EBCA.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xE7AF: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EBCA.asm:18 LDA [@VIRTUAL06]
    case 0xE7B1: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3EBCA.asm:19 JSL UNKNOWN_C3EAD0
    case 0xE7B3: c.execute<0x22>(0xC3E690, 4); return true;
    // src/unknown/C3/C3EBCA.asm:20 BRA @UNKNOWN2
    case 0xE7B7: c.execute<0x80>(0x000008, 2); return true;
    // src/unknown/C3/C3EBCA.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xE7B9: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EBCA.asm:23 LDA [@VIRTUAL06]
    case 0xE7BB: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3EBCA.asm:24 JSL UNKNOWN_C3EB1C
    case 0xE7BD: c.execute<0x22>(0xC3E6DC, 4); return true;
    // src/unknown/C3/C3EBCA.asm:27 LDY @LOCAL00
    case 0xE7C1: c.execute<0xA4>(0x00000E, 2); return true;
    // src/unknown/C3/C3EBCA.asm:28 INY
    case 0xE7C3: c.execute<0xC8>(0x000000, 1); return true;
    // src/unknown/C3/C3EBCA.asm:29 STY @LOCAL00
    case 0xE7C4: c.execute<0x84>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xE7C6: if (c.p & 0x20) c.execute<0xA9>(0x00001B, 2); else c.execute<0xA9>(0x00F41B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3E7C6.
    case 0xE7C8: c.execute<0xF4>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    case 0xE7C9: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xE7CB: if (c.p & 0x20) c.execute<0xA9>(0x0000D5, 2); else c.execute<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3E7CB.
    case 0xE7CD: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xE7CE: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3EBCA.asm:32 TYA
    case 0xE7D0: c.execute<0x98>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    case 0xE7D1: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    case 0xE7D3: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    case 0xE7D4: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    case 0xE7D5: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3EBCA.asm:34 CLC
    case 0xE7D7: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EBCA.asm:35 ADC @VIRTUAL06
    case 0xE7D8: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3EBCA.asm:36 STA @VIRTUAL06
    case 0xE7DA: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3EBCA.asm:37 LDA [@VIRTUAL06]
    case 0xE7DC: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3EBCA.asm:38 AND #$00FF
    case 0xE7DE: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EBCA.asm:38 AND #$00FF
    // Overlapping static entry reached from 0xC3E7DE.
    case 0xE7E0: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3EBCA.asm:39 BNE @UNKNOWN0
    case 0xE7E1: c.execute<0xD0>(0x0000BC, 2); return true;
    // include/macros.asm:25 PLD
    case 0xE7E3: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xE7E4: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE7E5: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE7E7: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xE7E8: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE7E9: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE7EA: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3E7EA.
    case 0xE7EC: c.execute<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE7ED: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xE7EE: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:9 STX @VIRTUAL02
    case 0xE7EF: c.execute<0x86>(0x000002, 2); return true;
    // src/unknown/C3/C3EC1F.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC3E7EC.
    case 0xE7F0: c.execute<0x02>(0x0000AA, 2); return true;
    // src/unknown/C3/C3EC1F.asm:10 TAX
    case 0xE7F1: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:11 BEQ @UNKNOWN1
    case 0xE7F2: c.execute<0xF0>(0x00005B, 2); return true;
    // src/unknown/C3/C3EC1F.asm:12 TXA
    case 0xE7F4: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:13 DEC
    case 0xE7F5: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:14 STA @LOCAL00
    case 0xE7F6: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3EC1F.asm:15 CPY #0
    case 0xE7F8: if (c.p & 0x10) c.execute<0xC0>(0x000000, 2); else c.execute<0xC0>(0x000000, 3); return true;
    // src/unknown/C3/C3EC1F.asm:15 CPY #0
    // Overlapping static entry reached from 0xC3E7F8.
    case 0xE7FA: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3EC1F.asm:16 BNE @UNKNOWN0
    case 0xE7FB: c.execute<0xD0>(0x00002D, 2); return true;
    // include/macros.asm:865 LDA src
    case 0xE7FD: c.execute<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    case 0xE7FF: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xE801: c.execute<0x64>(0x00000C, 2); return true;
    // src/unknown/C3/C3EC1F.asm:18 LDA @LOCAL00
    case 0xE803: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3EC1F.asm:19 LDY #.SIZEOF(char_struct)
    case 0xE805: if (c.p & 0x10) c.execute<0xA0>(0x00005E, 2); else c.execute<0xA0>(0x00005E, 3); return true;
    // src/unknown/C3/C3EC1F.asm:19 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E805.
    case 0xE807: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EC1F.asm:20 JSL MULT168
    case 0xE808: c.execute<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3EC1F.asm:21 TAX
    case 0xE80C: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:22 LDA PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xE80D: c.execute<0xBD>(0x009C88, 3); return true;
    // include/macros.asm:870 STA dest
    case 0xE810: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xE812: c.execute<0x64>(0x000008, 2); return true;
    // src/unknown/C3/C3EC1F.asm:24 JSL MULT32
    case 0xE814: c.execute<0x22>(0xC09068, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    case 0xE818: if (c.p & 0x20) c.execute<0xA9>(0x000064, 2); else c.execute<0xA9>(0x000064, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Overlapping static entry reached from 0xC3E818.
    case 0xE81A: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    case 0xE81B: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    case 0xE81D: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Overlapping static entry reached from 0xC3E81D.
    case 0xE81F: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    case 0xE820: c.execute<0x85>(0x00000C, 2); return true;
    // src/unknown/C3/C3EC1F.asm:26 JSL DIVISION32
    case 0xE822: c.execute<0x22>(0xC090E1, 4); return true;
    // src/unknown/C3/C3EC1F.asm:27 LDA @VIRTUAL06
    case 0xE826: c.execute<0xA5>(0x000006, 2); return true;
    // src/unknown/C3/C3EC1F.asm:28 STA @VIRTUAL02
    case 0xE828: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EC1F.asm:30 LDA @LOCAL00
    case 0xE82A: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3EC1F.asm:31 LDY #.SIZEOF(char_struct)
    case 0xE82C: if (c.p & 0x10) c.execute<0xA0>(0x00005E, 2); else c.execute<0xA0>(0x00005E, 3); return true;
    // src/unknown/C3/C3EC1F.asm:31 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E82C.
    case 0xE82E: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EC1F.asm:32 JSL MULT168
    case 0xE82F: c.execute<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3EC1F.asm:33 TAY
    case 0xE833: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:34 CLC
    case 0xE834: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:35 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp_target
    case 0xE835: if (c.p & 0x20) c.execute<0x69>(0x0000C5, 2); else c.execute<0x69>(0x009CC5, 3); return true;
    // src/unknown/C3/C3EC1F.asm:35 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp_target
    // Overlapping static entry reached from 0xC3E835.
    case 0xE837: c.execute<0x9C>(0x00BDAA, 3); return true;
    // src/unknown/C3/C3EC1F.asm:36 TAX
    case 0xE838: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:37 LDA __BSS_START__,X
    case 0xE839: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3EC1F.asm:37 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC3E837.
    case 0xE83A: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/C3/C3EC1F.asm:38 SEC
    case 0xE83C: c.execute<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:39 SBC @VIRTUAL02
    case 0xE83D: c.execute<0xE5>(0x000002, 2); return true;
    // src/unknown/C3/C3EC1F.asm:40 STA __BSS_START__,X
    case 0xE83F: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/C3/C3EC1F.asm:41 CMP PARTY_CHARACTERS+char_struct::max_hp,Y
    case 0xE842: c.execute<0xD9>(0x009C88, 3); return true;
    // include/macros.asm:761 BCC dest
    case 0xE845: c.execute<0x90>(0x000008, 2); return true;
    // include/macros.asm:762 BEQ dest
    case 0xE847: c.execute<0xF0>(0x000006, 2); return true;
    // src/unknown/C3/C3EC1F.asm:43 LDA #0
    case 0xE849: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3EC1F.asm:43 LDA #0
    // Overlapping static entry reached from 0xC3E849.
    case 0xE84B: c.execute<0x00>(0x00009D, 2); return true;
    // src/unknown/C3/C3EC1F.asm:44 STA __BSS_START__,X
    case 0xE84C: c.execute<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    case 0xE84F: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xE850: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE851: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE853: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xE854: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE855: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE856: if (c.p & 0x20) c.execute<0x69>(0x0000EC, 2); else c.execute<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3E856.
    case 0xE858: c.execute<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE859: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xE85A: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:11 STX @VIRTUAL02
    case 0xE85B: c.execute<0x86>(0x000002, 2); return true;
    // src/unknown/C3/C3EC8B.asm:11 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC3E858.
    case 0xE85C: c.execute<0x02>(0x0000AA, 2); return true;
    // src/unknown/C3/C3EC8B.asm:12 TAX
    case 0xE85D: c.execute<0xAA>(0x000000, 1); return true;
    // include/macros.asm:772 BNE :+
    case 0xE85E: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xE860: c.execute<0x4C>(0x00E8F0, 3); return true;
    // src/unknown/C3/C3EC8B.asm:14 TXA
    case 0xE863: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:15 DEC
    case 0xE864: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:16 STA @VIRTUAL04
    case 0xE865: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3EC8B.asm:17 CPY #0
    case 0xE867: if (c.p & 0x10) c.execute<0xC0>(0x000000, 2); else c.execute<0xC0>(0x000000, 3); return true;
    // src/unknown/C3/C3EC8B.asm:17 CPY #0
    // Overlapping static entry reached from 0xC3E867.
    case 0xE869: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3EC8B.asm:18 BNE @UNKNOWN1
    case 0xE86A: c.execute<0xD0>(0x00002D, 2); return true;
    // include/macros.asm:865 LDA src
    case 0xE86C: c.execute<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    case 0xE86E: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xE870: c.execute<0x64>(0x00000C, 2); return true;
    // src/unknown/C3/C3EC8B.asm:20 LDA @VIRTUAL04
    case 0xE872: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/C3/C3EC8B.asm:21 LDY #.SIZEOF(char_struct)
    case 0xE874: if (c.p & 0x10) c.execute<0xA0>(0x00005E, 2); else c.execute<0xA0>(0x00005E, 3); return true;
    // src/unknown/C3/C3EC8B.asm:21 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E874.
    case 0xE876: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EC8B.asm:22 JSL MULT168
    case 0xE877: c.execute<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3EC8B.asm:23 TAX
    case 0xE87B: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:24 LDA PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xE87C: c.execute<0xBD>(0x009C88, 3); return true;
    // include/macros.asm:870 STA dest
    case 0xE87F: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xE881: c.execute<0x64>(0x000008, 2); return true;
    // src/unknown/C3/C3EC8B.asm:26 JSL MULT32
    case 0xE883: c.execute<0x22>(0xC09068, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    case 0xE887: if (c.p & 0x20) c.execute<0xA9>(0x000064, 2); else c.execute<0xA9>(0x000064, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Overlapping static entry reached from 0xC3E887.
    case 0xE889: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    case 0xE88A: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    case 0xE88C: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Overlapping static entry reached from 0xC3E88C.
    case 0xE88E: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    case 0xE88F: c.execute<0x85>(0x00000C, 2); return true;
    // src/unknown/C3/C3EC8B.asm:28 JSL DIVISION32
    case 0xE891: c.execute<0x22>(0xC090E1, 4); return true;
    // src/unknown/C3/C3EC8B.asm:29 LDA @VIRTUAL06
    case 0xE895: c.execute<0xA5>(0x000006, 2); return true;
    // src/unknown/C3/C3EC8B.asm:30 STA @VIRTUAL02
    case 0xE897: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EC8B.asm:32 LDA @VIRTUAL04
    case 0xE899: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/C3/C3EC8B.asm:33 LDY #.SIZEOF(char_struct)
    case 0xE89B: if (c.p & 0x10) c.execute<0xA0>(0x00005E, 2); else c.execute<0xA0>(0x00005E, 3); return true;
    // src/unknown/C3/C3EC8B.asm:33 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E89B.
    case 0xE89D: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EC8B.asm:34 JSL MULT168
    case 0xE89E: c.execute<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3EC8B.asm:35 STA @LOCAL02
    case 0xE8A2: c.execute<0x85>(0x000012, 2); return true;
    // src/unknown/C3/C3EC8B.asm:36 CLC
    case 0xE8A4: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:37 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp_target
    case 0xE8A5: if (c.p & 0x20) c.execute<0x69>(0x0000C5, 2); else c.execute<0x69>(0x009CC5, 3); return true;
    // src/unknown/C3/C3EC8B.asm:37 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp_target
    // Overlapping static entry reached from 0xC3E8A5.
    case 0xE8A7: c.execute<0x9C>(0x00BDAA, 3); return true;
    // src/unknown/C3/C3EC8B.asm:38 TAX
    case 0xE8A8: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:39 LDA __BSS_START__,X
    case 0xE8A9: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3EC8B.asm:39 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC3E8A7.
    case 0xE8AA: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/C3/C3EC8B.asm:40 CLC
    case 0xE8AC: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:41 ADC @VIRTUAL02
    case 0xE8AD: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/C3/C3EC8B.asm:42 STA __BSS_START__,X
    case 0xE8AF: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/C3/C3EC8B.asm:43 LDA @LOCAL02
    case 0xE8B2: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/C3/C3EC8B.asm:44 CLC
    case 0xE8B4: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:45 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp
    case 0xE8B5: if (c.p & 0x20) c.execute<0x69>(0x0000C3, 2); else c.execute<0x69>(0x009CC3, 3); return true;
    // src/unknown/C3/C3EC8B.asm:45 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp
    // Overlapping static entry reached from 0xC3E8B5.
    case 0xE8B7: c.execute<0x9C>(0x00BDAA, 3); return true;
    // src/unknown/C3/C3EC8B.asm:46 TAX
    case 0xE8B8: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:47 LDA __BSS_START__,X
    case 0xE8B9: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3EC8B.asm:47 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC3E8B7.
    case 0xE8BA: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/C3/C3EC8B.asm:48 BNE @UNKNOWN2
    case 0xE8BC: c.execute<0xD0>(0x000006, 2); return true;
    // src/unknown/C3/C3EC8B.asm:49 LDA #1
    case 0xE8BE: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3EC8B.asm:49 LDA #1
    // Overlapping static entry reached from 0xC3E8BE.
    case 0xE8C0: c.execute<0x00>(0x00009D, 2); return true;
    // src/unknown/C3/C3EC8B.asm:50 STA __BSS_START__,X
    case 0xE8C1: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/C3/C3EC8B.asm:52 LDA @VIRTUAL04
    case 0xE8C4: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/C3/C3EC8B.asm:53 LDY #.SIZEOF(char_struct)
    case 0xE8C6: if (c.p & 0x10) c.execute<0xA0>(0x00005E, 2); else c.execute<0xA0>(0x00005E, 3); return true;
    // src/unknown/C3/C3EC8B.asm:53 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E8C6.
    case 0xE8C8: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EC8B.asm:54 JSL MULT168
    case 0xE8C9: c.execute<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3EC8B.asm:55 STA @LOCAL01
    case 0xE8CD: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3EC8B.asm:56 CLC
    case 0xE8CF: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:57 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp_target
    case 0xE8D0: if (c.p & 0x20) c.execute<0x69>(0x0000C5, 2); else c.execute<0x69>(0x009CC5, 3); return true;
    // src/unknown/C3/C3EC8B.asm:57 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp_target
    // Overlapping static entry reached from 0xC3E8D0.
    case 0xE8D2: c.execute<0x9C>(0x0086AA, 3); return true;
    // src/unknown/C3/C3EC8B.asm:58 TAX
    case 0xE8D3: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:59 STX @LOCAL00
    case 0xE8D4: c.execute<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3EC8B.asm:59 STX @LOCAL00
    // Overlapping static entry reached from 0xC3E8D2.
    case 0xE8D5: c.execute<0x0E>(0x0010A5, 3); return true;
    // src/unknown/C3/C3EC8B.asm:60 LDA @LOCAL01
    case 0xE8D6: c.execute<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3EC8B.asm:61 TAX
    case 0xE8D8: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:62 LDA PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xE8D9: c.execute<0xBD>(0x009C88, 3); return true;
    // src/unknown/C3/C3EC8B.asm:63 STA @LOCAL02
    case 0xE8DC: c.execute<0x85>(0x000012, 2); return true;
    // src/unknown/C3/C3EC8B.asm:64 STA @VIRTUAL02
    case 0xE8DE: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EC8B.asm:65 LDX @LOCAL00
    case 0xE8E0: c.execute<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3EC8B.asm:66 LDA __BSS_START__,X
    case 0xE8E2: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3EC8B.asm:67 CMP @VIRTUAL02
    case 0xE8E5: c.execute<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    case 0xE8E7: c.execute<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    case 0xE8E9: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/C3/C3EC8B.asm:69 LDA @LOCAL02
    case 0xE8EB: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/C3/C3EC8B.asm:70 STA __BSS_START__,X
    case 0xE8ED: c.execute<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    case 0xE8F0: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xE8F1: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE8F2: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE8F4: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xE8F5: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE8F6: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE8F7: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3E8F7.
    case 0xE8F9: c.execute<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE8FA: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xE8FB: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:9 STX @VIRTUAL02
    case 0xE8FC: c.execute<0x86>(0x000002, 2); return true;
    // src/unknown/C3/C3ED2C.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC3E8F9.
    case 0xE8FD: c.execute<0x02>(0x0000AA, 2); return true;
    // src/unknown/C3/C3ED2C.asm:10 TAX
    case 0xE8FE: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:11 BEQ @UNKNOWN1
    case 0xE8FF: c.execute<0xF0>(0x00005B, 2); return true;
    // src/unknown/C3/C3ED2C.asm:12 TXA
    case 0xE901: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:13 DEC
    case 0xE902: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:14 STA @LOCAL00
    case 0xE903: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3ED2C.asm:15 CPY #0
    case 0xE905: if (c.p & 0x10) c.execute<0xC0>(0x000000, 2); else c.execute<0xC0>(0x000000, 3); return true;
    // src/unknown/C3/C3ED2C.asm:15 CPY #0
    // Overlapping static entry reached from 0xC3E905.
    case 0xE907: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3ED2C.asm:16 BNE @UNKNOWN0
    case 0xE908: c.execute<0xD0>(0x00002D, 2); return true;
    // include/macros.asm:865 LDA src
    case 0xE90A: c.execute<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    case 0xE90C: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xE90E: c.execute<0x64>(0x00000C, 2); return true;
    // src/unknown/C3/C3ED2C.asm:18 LDA @LOCAL00
    case 0xE910: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3ED2C.asm:19 LDY #.SIZEOF(char_struct)
    case 0xE912: if (c.p & 0x10) c.execute<0xA0>(0x00005E, 2); else c.execute<0xA0>(0x00005E, 3); return true;
    // src/unknown/C3/C3ED2C.asm:19 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E912.
    case 0xE914: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3ED2C.asm:20 JSL MULT168
    case 0xE915: c.execute<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3ED2C.asm:21 TAX
    case 0xE919: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:22 LDA PARTY_CHARACTERS+char_struct::max_pp,X
    case 0xE91A: c.execute<0xBD>(0x009C8A, 3); return true;
    // include/macros.asm:870 STA dest
    case 0xE91D: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xE91F: c.execute<0x64>(0x000008, 2); return true;
    // src/unknown/C3/C3ED2C.asm:24 JSL MULT32
    case 0xE921: c.execute<0x22>(0xC09068, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    case 0xE925: if (c.p & 0x20) c.execute<0xA9>(0x000064, 2); else c.execute<0xA9>(0x000064, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Overlapping static entry reached from 0xC3E925.
    case 0xE927: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    case 0xE928: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    case 0xE92A: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Overlapping static entry reached from 0xC3E92A.
    case 0xE92C: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    case 0xE92D: c.execute<0x85>(0x00000C, 2); return true;
    // src/unknown/C3/C3ED2C.asm:26 JSL DIVISION32
    case 0xE92F: c.execute<0x22>(0xC090E1, 4); return true;
    // src/unknown/C3/C3ED2C.asm:27 LDA @VIRTUAL06
    case 0xE933: c.execute<0xA5>(0x000006, 2); return true;
    // src/unknown/C3/C3ED2C.asm:28 STA @VIRTUAL02
    case 0xE935: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3ED2C.asm:30 LDA @LOCAL00
    case 0xE937: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3ED2C.asm:31 LDY #.SIZEOF(char_struct)
    case 0xE939: if (c.p & 0x10) c.execute<0xA0>(0x00005E, 2); else c.execute<0xA0>(0x00005E, 3); return true;
    // src/unknown/C3/C3ED2C.asm:31 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E939.
    case 0xE93B: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3ED2C.asm:32 JSL MULT168
    case 0xE93C: c.execute<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3ED2C.asm:33 TAY
    case 0xE940: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:34 CLC
    case 0xE941: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:35 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_pp_target
    case 0xE942: if (c.p & 0x20) c.execute<0x69>(0x0000CB, 2); else c.execute<0x69>(0x009CCB, 3); return true;
    // src/unknown/C3/C3ED2C.asm:35 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_pp_target
    // Overlapping static entry reached from 0xC3E942.
    case 0xE944: c.execute<0x9C>(0x00BDAA, 3); return true;
    // src/unknown/C3/C3ED2C.asm:36 TAX
    case 0xE945: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:37 LDA __BSS_START__,X
    case 0xE946: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3ED2C.asm:37 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC3E944.
    case 0xE947: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/C3/C3ED2C.asm:38 SEC
    case 0xE949: c.execute<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:39 SBC @VIRTUAL02
    case 0xE94A: c.execute<0xE5>(0x000002, 2); return true;
    // src/unknown/C3/C3ED2C.asm:40 STA __BSS_START__,X
    case 0xE94C: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/C3/C3ED2C.asm:41 CMP PARTY_CHARACTERS+char_struct::max_pp,Y
    case 0xE94F: c.execute<0xD9>(0x009C8A, 3); return true;
    // include/macros.asm:761 BCC dest
    case 0xE952: c.execute<0x90>(0x000008, 2); return true;
    // include/macros.asm:762 BEQ dest
    case 0xE954: c.execute<0xF0>(0x000006, 2); return true;
    // src/unknown/C3/C3ED2C.asm:43 LDA #0
    case 0xE956: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3ED2C.asm:43 LDA #0
    // Overlapping static entry reached from 0xC3E956.
    case 0xE958: c.execute<0x00>(0x00009D, 2); return true;
    // src/unknown/C3/C3ED2C.asm:44 STA __BSS_START__,X
    case 0xE959: c.execute<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    case 0xE95C: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xE95D: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE95E: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE960: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xE961: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE962: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE963: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3E963.
    case 0xE965: c.execute<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE966: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xE967: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:10 STX @VIRTUAL02
    case 0xE968: c.execute<0x86>(0x000002, 2); return true;
    // src/unknown/C3/C3ED98.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC3E965.
    case 0xE969: c.execute<0x02>(0x0000AA, 2); return true;
    // src/unknown/C3/C3ED98.asm:11 TAX
    case 0xE96A: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:12 BEQ @UNKNOWN1
    case 0xE96B: c.execute<0xF0>(0x00006B, 2); return true;
    // src/unknown/C3/C3ED98.asm:13 TXA
    case 0xE96D: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:14 DEC
    case 0xE96E: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:15 STA @LOCAL01
    case 0xE96F: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:16 CPY #0
    case 0xE971: if (c.p & 0x10) c.execute<0xC0>(0x000000, 2); else c.execute<0xC0>(0x000000, 3); return true;
    // src/unknown/C3/C3ED98.asm:16 CPY #0
    // Overlapping static entry reached from 0xC3E971.
    case 0xE973: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3ED98.asm:17 BNE @UNKNOWN0
    case 0xE974: c.execute<0xD0>(0x00002D, 2); return true;
    // include/macros.asm:865 LDA src
    case 0xE976: c.execute<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    case 0xE978: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xE97A: c.execute<0x64>(0x00000C, 2); return true;
    // src/unknown/C3/C3ED98.asm:19 LDA @LOCAL01
    case 0xE97C: c.execute<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:20 LDY #.SIZEOF(char_struct)
    case 0xE97E: if (c.p & 0x10) c.execute<0xA0>(0x00005E, 2); else c.execute<0xA0>(0x00005E, 3); return true;
    // src/unknown/C3/C3ED98.asm:20 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E97E.
    case 0xE980: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3ED98.asm:21 JSL MULT168
    case 0xE981: c.execute<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3ED98.asm:22 TAX
    case 0xE985: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:23 LDA PARTY_CHARACTERS+char_struct::max_pp,X
    case 0xE986: c.execute<0xBD>(0x009C8A, 3); return true;
    // include/macros.asm:870 STA dest
    case 0xE989: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xE98B: c.execute<0x64>(0x000008, 2); return true;
    // src/unknown/C3/C3ED98.asm:25 JSL MULT32
    case 0xE98D: c.execute<0x22>(0xC09068, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    case 0xE991: if (c.p & 0x20) c.execute<0xA9>(0x000064, 2); else c.execute<0xA9>(0x000064, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Overlapping static entry reached from 0xC3E991.
    case 0xE993: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    case 0xE994: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    case 0xE996: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Overlapping static entry reached from 0xC3E996.
    case 0xE998: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    case 0xE999: c.execute<0x85>(0x00000C, 2); return true;
    // src/unknown/C3/C3ED98.asm:27 JSL DIVISION32
    case 0xE99B: c.execute<0x22>(0xC090E1, 4); return true;
    // src/unknown/C3/C3ED98.asm:28 LDA @VIRTUAL06
    case 0xE99F: c.execute<0xA5>(0x000006, 2); return true;
    // src/unknown/C3/C3ED98.asm:29 STA @VIRTUAL02
    case 0xE9A1: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3ED98.asm:31 LDA @LOCAL01
    case 0xE9A3: c.execute<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:32 LDY #.SIZEOF(char_struct)
    case 0xE9A5: if (c.p & 0x10) c.execute<0xA0>(0x00005E, 2); else c.execute<0xA0>(0x00005E, 3); return true;
    // src/unknown/C3/C3ED98.asm:32 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E9A5.
    case 0xE9A7: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3ED98.asm:33 JSL MULT168
    case 0xE9A8: c.execute<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3ED98.asm:34 STA @LOCAL01
    case 0xE9AC: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:35 CLC
    case 0xE9AE: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:36 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_pp_target
    case 0xE9AF: if (c.p & 0x20) c.execute<0x69>(0x0000CB, 2); else c.execute<0x69>(0x009CCB, 3); return true;
    // src/unknown/C3/C3ED98.asm:36 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_pp_target
    // Overlapping static entry reached from 0xC3E9AF.
    case 0xE9B1: c.execute<0x9C>(0x00B9A8, 3); return true;
    // src/unknown/C3/C3ED98.asm:37 TAY
    case 0xE9B2: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:38 LDA __BSS_START__,Y
    case 0xE9B3: c.execute<0xB9>(0x000000, 3); return true;
    // src/unknown/C3/C3ED98.asm:38 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC3E9B1.
    case 0xE9B4: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/C3/C3ED98.asm:39 CLC
    case 0xE9B6: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:40 ADC @VIRTUAL02
    case 0xE9B7: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/C3/C3ED98.asm:41 TAX
    case 0xE9B9: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:42 STX @LOCAL00
    case 0xE9BA: c.execute<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3ED98.asm:43 TXA
    case 0xE9BC: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:44 STA __BSS_START__,Y
    case 0xE9BD: c.execute<0x99>(0x000000, 3); return true;
    // src/unknown/C3/C3ED98.asm:45 LDA @LOCAL01
    case 0xE9C0: c.execute<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:46 TAX
    case 0xE9C2: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:47 LDA PARTY_CHARACTERS+char_struct::max_pp,X
    case 0xE9C3: c.execute<0xBD>(0x009C8A, 3); return true;
    // src/unknown/C3/C3ED98.asm:48 STA @LOCAL01
    case 0xE9C6: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:49 STA @VIRTUAL02
    case 0xE9C8: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3ED98.asm:50 LDX @LOCAL00
    case 0xE9CA: c.execute<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3ED98.asm:51 TXA
    case 0xE9CC: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:52 CMP @VIRTUAL02
    case 0xE9CD: c.execute<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    case 0xE9CF: c.execute<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    case 0xE9D1: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/C3/C3ED98.asm:54 LDA @LOCAL01
    case 0xE9D3: c.execute<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:55 STA __BSS_START__,Y
    case 0xE9D5: c.execute<0x99>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    case 0xE9D8: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xE9D9: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE9DA: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE9DC: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xE9DD: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE9DE: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE9DF: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3E9DF.
    case 0xE9E1: c.execute<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE9E2: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xE9E3: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:10 TXY
    case 0xE9E4: c.execute<0x9B>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:11 TAX
    case 0xE9E5: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:12 STX @LOCAL00
    case 0xE9E6: c.execute<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3EE14.asm:13 TYA
    case 0xE9E8: c.execute<0x98>(0x000000, 1); return true;
    // include/macros.asm:623 STA scratch
    case 0xE9E9: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    case 0xE9EB: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    case 0xE9EC: c.execute<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    case 0xE9EE: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    case 0xE9EF: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    case 0xE9F0: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:15 CLC
    case 0xE9F1: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:16 ADC #item::flags
    case 0xE9F2: if (c.p & 0x20) c.execute<0x69>(0x00000D, 2); else c.execute<0x69>(0x00000D, 3); return true;
    // src/unknown/C3/C3EE14.asm:16 ADC #item::flags
    // Overlapping static entry reached from 0xC3E9F2.
    case 0xE9F4: c.execute<0x00>(0x0000AA, 2); return true;
    // src/unknown/C3/C3EE14.asm:17 TAX
    case 0xE9F5: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xE9F6: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EE14.asm:19 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xE9F8: c.execute<0xBF>(0xD57000, 4); return true;
    // src/unknown/C3/C3EE14.asm:20 LDX @LOCAL00
    case 0xE9FC: c.execute<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3EE14.asm:21 DEX
    case 0xE9FE: c.execute<0xCA>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:22 AND f:ITEM_USABLE_FLAGS,X
    case 0xE9FF: c.execute<0x3F>(0xC436A9, 4); return true;
    // src/unknown/C3/C3EE14.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xEA03: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3EE14.asm:24 AND #$00FF
    case 0xEA05: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EE14.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC3EA05.
    case 0xEA07: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3EE14.asm:25 BEQ @UNKNOWN0
    case 0xEA08: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/C3/C3EE14.asm:26 LDA #TRUE
    case 0xEA0A: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3EE14.asm:26 LDA #TRUE
    // Overlapping static entry reached from 0xC3EA0A.
    case 0xEA0C: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3EE14.asm:27 BRA @UNKNOWN1
    case 0xEA0D: c.execute<0x80>(0x000003, 2); return true;
    // src/unknown/C3/C3EE14.asm:29 LDA #FALSE
    case 0xEA0F: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3EE14.asm:29 LDA #FALSE
    // Overlapping static entry reached from 0xC3EA0F.
    case 0xEA11: c.execute<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    case 0xEA12: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xEA13: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEA14: c.execute<0xC2>(0x000031, 2); return true;
    // src/unknown/C3/C3EE4D.asm:5 JSL UPDATE_PARTY
    case 0xEA16: c.execute<0x22>(0xC036C7, 4); return true;
    // src/unknown/C3/C3EE4D.asm:6 JSL UNKNOWN_C07B52
    case 0xEA1A: c.execute<0x22>(0xC07DA2, 4); return true;
    // src/unknown/C3/C3EE4D.asm:7 JSL UNKNOWN_C1004E
    case 0xEA1E: c.execute<0x22>(0xC100C4, 4); return true;
    // src/unknown/C3/C3EE4D.asm:8 JSL UNKNOWN_C0943C
    case 0xEA22: c.execute<0x22>(0xC0941B, 4); return true;
    // src/unknown/C3/C3EE4D.asm:9 LDA ENTITY_FADE_ENTITY
    case 0xEA26: c.execute<0xAD>(0x00B67C, 3); return true;
    // src/unknown/C3/C3EE4D.asm:10 CMP #.LOWORD(-1)
    case 0xEA29: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3EE4D.asm:10 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3EA29.
    case 0xEA2B: c.execute<0xFF>(0xAD12F0, 4); return true;
    // src/unknown/C3/C3EE4D.asm:11 BEQ @UNKNOWN0
    case 0xEA2C: c.execute<0xF0>(0x000012, 2); return true;
    // src/unknown/C3/C3EE4D.asm:12 LDA ENTITY_FADE_ENTITY
    case 0xEA2E: c.execute<0xAD>(0x00B67C, 3); return true;
    // src/unknown/C3/C3EE4D.asm:12 LDA ENTITY_FADE_ENTITY
    // Overlapping static entry reached from 0xC3EA2B.
    case 0xEA2F: c.execute<0x7C>(0x000AB6, 3); return true;
    // src/unknown/C3/C3EE4D.asm:13 ASL
    case 0xEA31: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE4D.asm:14 CLC
    case 0xEA32: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE4D.asm:15 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xEA33: if (c.p & 0x20) c.execute<0x69>(0x0000AC, 2); else c.execute<0x69>(0x0010AC, 3); return true;
    // src/unknown/C3/C3EE4D.asm:15 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC3EA33.
    case 0xEA35: c.execute<0x10>(0x0000AA, 2); return true;
    // src/unknown/C3/C3EE4D.asm:16 TAX
    case 0xEA36: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EE4D.asm:17 LDA __BSS_START__,X
    case 0xEA37: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3EE4D.asm:18 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xEA3A: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x003FFF, 3); return true;
    // src/unknown/C3/C3EE4D.asm:18 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xC3EA3A.
    case 0xEA3C: c.execute<0x3F>(0x00009D, 4); return true;
    // src/unknown/C3/C3EE4D.asm:19 STA __BSS_START__,X
    case 0xEA3D: c.execute<0x9D>(0x000000, 3); return true;
    // include/macros.asm:30 RTL
    case 0xEA40: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEA41: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xEA43: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xEA44: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xEA45: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xEA46: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3EA46.
    case 0xEA48: c.execute<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xEA49: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xEA4A: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:9 STA @LOCAL00
    case 0xEA4B: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3EE7A.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC3EA48.
    case 0xEA4C: c.execute<0x0E>(0x0005A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xEA4D: if (c.p & 0x20) c.execute<0xA9>(0x000005, 2); else c.execute<0xA9>(0x003305, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3EA4D.
    case 0xEA4F: c.execute<0x33>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xEA50: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xC3EA4F.
    case 0xEA51: c.execute<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xEA52: if (c.p & 0x20) c.execute<0xA9>(0x0000C4, 2); else c.execute<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3EA51.
    case 0xEA53: c.execute<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3EA52.
    case 0xEA54: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xEA55: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3EE7A.asm:11 LDA @LOCAL00
    case 0xEA57: c.execute<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:522 STA scratch
    case 0xEA59: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    case 0xEA5B: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    case 0xEA5C: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3EE7A.asm:13 TAX
    case 0xEA5E: c.execute<0xAA>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    case 0xEA5F: c.execute<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    case 0xEA61: c.execute<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    case 0xEA63: c.execute<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    case 0xEA65: c.execute<0x84>(0x00000C, 2); return true;
    // src/unknown/C3/C3EE7A.asm:15 CLC
    case 0xEA67: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:16 ADC @VIRTUAL0A
    case 0xEA68: c.execute<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3EE7A.asm:17 STA @VIRTUAL0A
    case 0xEA6A: c.execute<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3EE7A.asm:18 LDA [@VIRTUAL0A]
    case 0xEA6C: c.execute<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3EE7A.asm:19 AND #$00FF
    case 0xEA6E: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EE7A.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC3EA6E.
    case 0xEA70: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3EE7A.asm:20 STA @LOCAL00
    case 0xEA71: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3EE7A.asm:21 AND #$0080
    case 0xEA73: if (c.p & 0x20) c.execute<0x29>(0x000080, 2); else c.execute<0x29>(0x000080, 3); return true;
    // src/unknown/C3/C3EE7A.asm:21 AND #$0080
    // Overlapping static entry reached from 0xC3EA73.
    case 0xEA75: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3EE7A.asm:22 BEQ @UNKNOWN3
    case 0xEA76: c.execute<0xF0>(0x000053, 2); return true;
    // src/unknown/C3/C3EE7A.asm:23 LDA @LOCAL00
    case 0xEA78: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3EE7A.asm:24 AND #$007F
    case 0xEA7A: if (c.p & 0x20) c.execute<0x29>(0x00007F, 2); else c.execute<0x29>(0x00007F, 3); return true;
    // src/unknown/C3/C3EE7A.asm:24 AND #$007F
    // Overlapping static entry reached from 0xC3EA7A.
    case 0xEA7C: c.execute<0x00>(0x0000C9, 2); return true;
    // src/unknown/C3/C3EE7A.asm:25 CMP #1
    case 0xEA7D: if (c.p & 0x20) c.execute<0xC9>(0x000001, 2); else c.execute<0xC9>(0x000001, 3); return true;
    // src/unknown/C3/C3EE7A.asm:25 CMP #1
    // Overlapping static entry reached from 0xC3EA7D.
    case 0xEA7F: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3EE7A.asm:26 BEQ @UNKNOWN0
    case 0xEA80: c.execute<0xF0>(0x000007, 2); return true;
    // src/unknown/C3/C3EE7A.asm:27 CMP #2
    case 0xEA82: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/unknown/C3/C3EE7A.asm:27 CMP #2
    // Overlapping static entry reached from 0xC3EA82.
    case 0xEA84: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3EE7A.asm:28 BEQ @UNKNOWN1
    case 0xEA85: c.execute<0xF0>(0x00001B, 2); return true;
    // src/unknown/C3/C3EE7A.asm:29 BRA @UNKNOWN2
    case 0xEA87: c.execute<0x80>(0x00002C, 2); return true;
    // src/unknown/C3/C3EE7A.asm:31 TXA
    case 0xEA89: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:32 INC
    case 0xEA8A: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:33 CLC
    case 0xEA8B: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:34 ADC @VIRTUAL06
    case 0xEA8C: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:35 STA @VIRTUAL06
    case 0xEA8E: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:36 LDA [@VIRTUAL06]
    case 0xEA90: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:37 TAX
    case 0xEA92: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xEA93: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EE7A.asm:39 LDA __BSS_START__,X
    case 0xEA95: c.execute<0xBD>(0x000000, 3); return true;
    // include/macros.asm:858 STA dest
    case 0xEA98: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    case 0xEA9A: c.execute<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    case 0xEA9C: c.execute<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    case 0xEA9E: c.execute<0x64>(0x000009, 2); return true;
    // src/unknown/C3/C3EE7A.asm:41 BRA @UNKNOWN4
    case 0xEAA0: c.execute<0x80>(0x00003C, 2); return true;
    // src/unknown/C3/C3EE7A.asm:43 TXA
    case 0xEAA2: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:44 INC
    case 0xEAA3: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:45 CLC
    case 0xEAA4: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:46 ADC @VIRTUAL06
    case 0xEAA5: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:47 STA @VIRTUAL06
    case 0xEAA7: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:48 LDA [@VIRTUAL06]
    case 0xEAA9: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:49 TAX
    case 0xEAAB: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:50 LDA __BSS_START__,X
    case 0xEAAC: c.execute<0xBD>(0x000000, 3); return true;
    // include/macros.asm:870 STA dest
    case 0xEAAF: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xEAB1: c.execute<0x64>(0x000008, 2); return true;
    // src/unknown/C3/C3EE7A.asm:52 BRA @UNKNOWN4
    case 0xEAB3: c.execute<0x80>(0x000029, 2); return true;
    // src/unknown/C3/C3EE7A.asm:54 TXA
    case 0xEAB5: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:55 INC
    case 0xEAB6: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:56 CLC
    case 0xEAB7: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:57 ADC @VIRTUAL06
    case 0xEAB8: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:58 STA @VIRTUAL06
    case 0xEABA: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:59 LDA [@VIRTUAL06]
    case 0xEABC: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:60 TAY
    case 0xEABE: c.execute<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    case 0xEABF: c.execute<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    case 0xEAC2: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    case 0xEAC4: c.execute<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    case 0xEAC7: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3EE7A.asm:62 BRA @UNKNOWN4
    case 0xEAC9: c.execute<0x80>(0x000013, 2); return true;
    // src/unknown/C3/C3EE7A.asm:64 TXA
    case 0xEACB: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:65 INC
    case 0xEACC: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:66 CLC
    case 0xEACD: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:67 ADC @VIRTUAL06
    case 0xEACE: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:68 STA @VIRTUAL06
    case 0xEAD0: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:69 LDA [@VIRTUAL06]
    case 0xEAD2: c.execute<0xA7>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    case 0xEAD4: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    case 0xEAD6: c.execute<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    case 0xEAD7: c.execute<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    case 0xEAD9: c.execute<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    case 0xEADA: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    case 0xEADC: c.execute<0x64>(0x000009, 2); return true;
    // src/unknown/C3/C3EE7A.asm:72 REP #PROC_FLAGS::ACCUM8
    case 0xEADE: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xEAE0: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xEAE2: c.execute<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xEAE4: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xEAE6: c.execute<0x85>(0x000018, 2); return true;
    // include/macros.asm:25 PLD
    case 0xEAE8: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xEAE9: c.execute<0x6B>(0x000000, 1); return true;
    // src/misc/null/C3EF23.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEAEA: c.execute<0xC2>(0x000031, 2); return true;
    // src/misc/null/C3EF23.asm:4 RTL
    case 0xEAEC: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xECFD: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xECFF: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xED00: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xED01: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xED02: if (c.p & 0x20) c.execute<0x69>(0x0000EA, 2); else c.execute<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3ED02.
    case 0xED04: c.execute<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xED05: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xED06: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:14 STA @LOCAL03
    case 0xED07: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/C3/C3F1EC.asm:14 STA @LOCAL03
    // Overlapping static entry reached from 0xC3ED04.
    case 0xED08: c.execute<0x14>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F1EC.asm:15 LDA #3
    case 0xED09: if (c.p & 0x20) c.execute<0xA9>(0x000003, 2); else c.execute<0xA9>(0x000003, 3); return true;
    // src/unknown/C3/C3F1EC.asm:15 LDA #3
    // Overlapping static entry reached from 0xC3ED08.
    case 0xED0A: c.execute<0x03>(0x000000, 2); return true;
    // src/unknown/C3/C3F1EC.asm:15 LDA #3
    // Overlapping static entry reached from 0xC3ED09.
    case 0xED0B: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F1EC.asm:16 JSL UNKNOWN_C2239D
    case 0xED0C: c.execute<0x22>(0xC2223B, 4); return true;
    // src/unknown/C3/C3F1EC.asm:17 CMP #0
    case 0xED10: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/unknown/C3/C3F1EC.asm:17 CMP #0
    // Overlapping static entry reached from 0xC3ED10.
    case 0xED12: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3F1EC.asm:18 BNE @UNKNOWN0
    case 0xED13: c.execute<0xD0>(0x000006, 2); return true;
    // src/unknown/C3/C3F1EC.asm:19 LDA #0
    case 0xED15: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3F1EC.asm:19 LDA #0
    // Overlapping static entry reached from 0xC3ED15.
    case 0xED17: c.execute<0x00>(0x00004C, 2); return true;
    // src/unknown/C3/C3F1EC.asm:20 JMP @UNKNOWN6
    case 0xED18: c.execute<0x4C>(0x00EDC9, 3); return true;
    // src/unknown/C3/C3F1EC.asm:22 LDA #0
    case 0xED1B: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3F1EC.asm:22 LDA #0
    // Overlapping static entry reached from 0xC3ED1B.
    case 0xED1D: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F1EC.asm:23 STA @VIRTUAL02
    case 0xED1E: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F1EC.asm:24 JMP @UNKNOWN4
    case 0xED20: c.execute<0x4C>(0x00EDA1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xED23: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x007000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3ED23.
    case 0xED25: c.execute<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xED26: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xC3ED25.
    case 0xED27: c.execute<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xED28: if (c.p & 0x20) c.execute<0xA9>(0x0000D5, 2); else c.execute<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3ED27.
    case 0xED29: c.execute<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3ED28.
    case 0xED2A: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xED2B: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F1EC.asm:27 TYA
    case 0xED2D: c.execute<0x98>(0x000000, 1); return true;
    // include/macros.asm:623 STA scratch
    case 0xED2E: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    case 0xED30: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    case 0xED31: c.execute<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    case 0xED33: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    case 0xED34: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    case 0xED35: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:29 TAX
    case 0xED36: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:30 STX @LOCAL02
    case 0xED37: c.execute<0x86>(0x000012, 2); return true;
    // src/unknown/C3/C3F1EC.asm:31 TXA
    case 0xED39: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:32 CLC
    case 0xED3A: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:33 ADC #item::type
    case 0xED3B: if (c.p & 0x20) c.execute<0x69>(0x00000A, 2); else c.execute<0x69>(0x00000A, 3); return true;
    // src/unknown/C3/C3F1EC.asm:33 ADC #item::type
    // Overlapping static entry reached from 0xC3ED3B.
    case 0xED3D: c.execute<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    case 0xED3E: c.execute<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    case 0xED40: c.execute<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    case 0xED42: c.execute<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    case 0xED44: c.execute<0x84>(0x00000C, 2); return true;
    // src/unknown/C3/C3F1EC.asm:35 CLC
    case 0xED46: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:36 ADC @VIRTUAL0A
    case 0xED47: c.execute<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3F1EC.asm:37 STA @VIRTUAL0A
    case 0xED49: c.execute<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3F1EC.asm:38 LDA [@VIRTUAL0A]
    case 0xED4B: c.execute<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3F1EC.asm:39 AND #$00FF
    case 0xED4D: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F1EC.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC3ED4D.
    case 0xED4F: c.execute<0x00>(0x0000C9, 2); return true;
    // src/unknown/C3/C3F1EC.asm:40 CMP #8
    case 0xED50: if (c.p & 0x20) c.execute<0xC9>(0x000008, 2); else c.execute<0xC9>(0x000008, 3); return true;
    // src/unknown/C3/C3F1EC.asm:40 CMP #8
    // Overlapping static entry reached from 0xC3ED50.
    case 0xED52: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3F1EC.asm:41 BNE @UNKNOWN3
    case 0xED53: c.execute<0xD0>(0x000048, 2); return true;
    // src/unknown/C3/C3F1EC.asm:42 TXA
    case 0xED55: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:43 CLC
    case 0xED56: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:44 ADC #item::params + item_parameters::epi
    case 0xED57: if (c.p & 0x20) c.execute<0x69>(0x000011, 2); else c.execute<0x69>(0x000011, 3); return true;
    // src/unknown/C3/C3F1EC.asm:44 ADC #item::params + item_parameters::epi
    // Overlapping static entry reached from 0xC3ED57.
    case 0xED59: c.execute<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    case 0xED5A: c.execute<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    case 0xED5C: c.execute<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    case 0xED5E: c.execute<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    case 0xED60: c.execute<0x86>(0x00000C, 2); return true;
    // src/unknown/C3/C3F1EC.asm:46 CLC
    case 0xED62: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:47 ADC @VIRTUAL0A
    case 0xED63: c.execute<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3F1EC.asm:48 STA @VIRTUAL0A
    case 0xED65: c.execute<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3F1EC.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xED67: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3F1EC.asm:50 LDA [@VIRTUAL0A]
    case 0xED69: c.execute<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3F1EC.asm:51 CMP PARTY_CHARACTERS+(.SIZEOF(char_struct) * ITEM_FIXING_CHARACTER) + char_struct::iq
    case 0xED6B: c.execute<0xCD>(0x009D55, 3); return true;
    // include/macros.asm:766 BEQ :+
    case 0xED6E: c.execute<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    case 0xED70: c.execute<0xB0>(0x00002B, 2); return true;
    // src/unknown/C3/C3F1EC.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xED72: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3F1EC.asm:54 LDA #99
    case 0xED74: if (c.p & 0x20) c.execute<0xA9>(0x000063, 2); else c.execute<0xA9>(0x000063, 3); return true;
    // src/unknown/C3/C3F1EC.asm:54 LDA #99
    // Overlapping static entry reached from 0xC3ED74.
    case 0xED76: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F1EC.asm:55 JSL RAND_MOD
    case 0xED77: c.execute<0x22>(0xC43CC9, 4); return true;
    // src/unknown/C3/C3F1EC.asm:56 CMP @LOCAL03
    case 0xED7B: c.execute<0xC5>(0x000014, 2); return true;
    // src/unknown/C3/C3F1EC.asm:57 BCS @UNKNOWN3
    case 0xED7D: c.execute<0xB0>(0x00001E, 2); return true;
    // src/unknown/C3/C3F1EC.asm:58 LDX @LOCAL02
    case 0xED7F: c.execute<0xA6>(0x000012, 2); return true;
    // src/unknown/C3/C3F1EC.asm:59 TXA
    case 0xED81: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:60 CLC
    case 0xED82: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:61 ADC #item::params + item_parameters::ep
    case 0xED83: if (c.p & 0x20) c.execute<0x69>(0x000012, 2); else c.execute<0x69>(0x000012, 3); return true;
    // src/unknown/C3/C3F1EC.asm:61 ADC #item::params + item_parameters::ep
    // Overlapping static entry reached from 0xC3ED83.
    case 0xED85: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/C3/C3F1EC.asm:62 CLC
    case 0xED86: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:63 ADC @VIRTUAL06
    case 0xED87: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3F1EC.asm:64 STA @VIRTUAL06
    case 0xED89: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3F1EC.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xED8B: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3F1EC.asm:66 LDA [@VIRTUAL06]
    case 0xED8D: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3F1EC.asm:68 LDX @LOCAL00
    case 0xED8F: c.execute<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3F1EC.asm:69 STX @VIRTUAL04
    case 0xED91: c.execute<0x86>(0x000004, 2); return true;
    // src/unknown/C3/C3F1EC.asm:73 STA __BSS_START__,X
    case 0xED93: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/C3/C3F1EC.asm:74 LDY @LOCAL01
    case 0xED96: c.execute<0xA4>(0x000010, 2); return true;
    // src/unknown/C3/C3F1EC.asm:75 REP #PROC_FLAGS::ACCUM8
    case 0xED98: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3F1EC.asm:76 TYA
    case 0xED9A: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:77 BRA @UNKNOWN6
    case 0xED9B: c.execute<0x80>(0x00002C, 2); return true;
    // src/unknown/C3/C3F1EC.asm:79 REP #PROC_FLAGS::ACCUM8
    case 0xED9D: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3F1EC.asm:80 INC @VIRTUAL02
    case 0xED9F: c.execute<0xE6>(0x000002, 2); return true;
    // src/unknown/C3/C3F1EC.asm:82 LDA @VIRTUAL02
    case 0xEDA1: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F1EC.asm:83 CMP #.SIZEOF(char_struct::items)
    case 0xEDA3: if (c.p & 0x20) c.execute<0xC9>(0x00000E, 2); else c.execute<0xC9>(0x00000E, 3); return true;
    // src/unknown/C3/C3F1EC.asm:83 CMP #.SIZEOF(char_struct::items)
    // Overlapping static entry reached from 0xC3EDA3.
    case 0xEDA5: c.execute<0x00>(0x0000B0, 2); return true;
    // src/unknown/C3/C3F1EC.asm:84 BCS @UNKNOWN5
    case 0xEDA6: c.execute<0xB0>(0x00001E, 2); return true;
    // src/unknown/C3/C3F1EC.asm:85 LDA @VIRTUAL02
    case 0xEDA8: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F1EC.asm:86 CLC
    case 0xEDAA: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:88 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xEDAB: if (c.p & 0x20) c.execute<0x69>(0x00007F, 2); else c.execute<0x69>(0x009C7F, 3); return true;
    // src/unknown/C3/C3F1EC.asm:88 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC3EDAB.
    case 0xEDAD: c.execute<0x9C>(0x006918, 3); return true;
    // src/unknown/C3/C3F1EC.asm:89 CLC
    case 0xEDAE: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:90 ADC #(.SIZEOF(char_struct) * ITEM_FIXING_CHARACTER) + char_struct::items
    case 0xEDAF: if (c.p & 0x20) c.execute<0x69>(0x0000DE, 2); else c.execute<0x69>(0x0000DE, 3); return true;
    // src/unknown/C3/C3F1EC.asm:90 ADC #(.SIZEOF(char_struct) * ITEM_FIXING_CHARACTER) + char_struct::items
    // Overlapping static entry reached from 0xC3EDAD.
    case 0xEDB0: c.execute<0xDE>(0x008500, 3); return true;
    // src/unknown/C3/C3F1EC.asm:90 ADC #(.SIZEOF(char_struct) * ITEM_FIXING_CHARACTER) + char_struct::items
    // Overlapping static entry reached from 0xC3EDAF.
    case 0xEDB1: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F1EC.asm:94 STA @VIRTUAL04
    case 0xEDB2: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F1EC.asm:94 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC3EDB0.
    case 0xEDB3: c.execute<0x04>(0x000085, 2); return true;
    // src/unknown/C3/C3F1EC.asm:96 STA @LOCAL00
    case 0xEDB4: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3F1EC.asm:96 STA @LOCAL00
    // Overlapping static entry reached from 0xC3EDB3.
    case 0xEDB5: c.execute<0x0E>(0x0004A6, 3); return true;
    // src/unknown/C3/C3F1EC.asm:98 LDX @VIRTUAL04
    case 0xEDB6: c.execute<0xA6>(0x000004, 2); return true;
    // src/unknown/C3/C3F1EC.asm:99 LDA __BSS_START__,X
    case 0xEDB8: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3F1EC.asm:100 AND #$00FF
    case 0xEDBB: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F1EC.asm:100 AND #$00FF
    // Overlapping static entry reached from 0xC3EDBB.
    case 0xEDBD: c.execute<0x00>(0x0000A8, 2); return true;
    // src/unknown/C3/C3F1EC.asm:101 TAY
    case 0xEDBE: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:102 STY @LOCAL01
    case 0xEDBF: c.execute<0x84>(0x000010, 2); return true;
    // include/macros.asm:778 BEQ :+
    case 0xEDC1: c.execute<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    case 0xEDC3: c.execute<0x4C>(0x00ED23, 3); return true;
    // src/unknown/C3/C3F1EC.asm:105 LDA #0
    case 0xEDC6: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3F1EC.asm:105 LDA #0
    // Overlapping static entry reached from 0xC3EDC6.
    case 0xEDC8: c.execute<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    case 0xEDC9: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xEDCA: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEDCF: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Overlapping static entry reached from 0xC3EE21.
    case 0xEDD0: c.execute<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    case 0xEDD1: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xEDD2: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xEDD3: if (c.p & 0x20) c.execute<0x69>(0x0000F2, 2); else c.execute<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3EDD3.
    case 0xEDD5: c.execute<0xFF>(0x359C5B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xEDD6: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:6 STZ BUBBLE_MONKEY_MODE
    case 0xEDD7: c.execute<0x9C>(0x00A135, 3); return true;
    // src/unknown/EF/EF027D.asm:6 STZ BUBBLE_MONKEY_MODE
    // Overlapping static entry reached from 0xC3EDD5.
    case 0xEDD9: c.execute<0xA1>(0x0000A9, 2); return true;
    // src/unknown/EF/EF027D.asm:7 LDA #30
    case 0xEDDA: if (c.p & 0x20) c.execute<0xA9>(0x00001E, 2); else c.execute<0xA9>(0x00001E, 3); return true;
    // src/unknown/EF/EF027D.asm:7 LDA #30
    // Overlapping static entry reached from 0xC3EDD9.
    case 0xEDDB: c.execute<0x1E>(0x008D00, 3); return true;
    // src/unknown/EF/EF027D.asm:7 LDA #30
    // Overlapping static entry reached from 0xC3EDDA.
    case 0xEDDC: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF027D.asm:8 STA BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0xEDDD: c.execute<0x8D>(0x00A137, 3); return true;
    // src/unknown/EF/EF027D.asm:8 STA BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    // Overlapping static entry reached from 0xC3EDDB.
    case 0xEDDE: c.execute<0x37>(0x0000A1, 2); return true;
    // src/unknown/EF/EF027D.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xEDE0: c.execute<0xAD>(0x001A38, 3); return true;
    // src/unknown/EF/EF027D.asm:10 ASL
    case 0xEDE3: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:11 TAX
    case 0xEDE4: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:12 LDA #4
    case 0xEDE5: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EF027D.asm:12 LDA #4
    // Overlapping static entry reached from 0xC3EDE5.
    case 0xEDE7: c.execute<0x00>(0x00009D, 2); return true;
    // src/unknown/EF/EF027D.asm:13 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xEDE8: c.execute<0x9D>(0x000F08, 3); return true;
    // src/unknown/EF/EF027D.asm:14 LDA CURRENT_ENTITY_SLOT
    case 0xEDEB: c.execute<0xAD>(0x001A38, 3); return true;
    // src/unknown/EF/EF027D.asm:15 ASL
    case 0xEDEE: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:16 TAX
    case 0xEDEF: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:17 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xEDF0: c.execute<0xBD>(0x000E90, 3); return true;
    // src/unknown/EF/EF027D.asm:18 ASL
    case 0xEDF3: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:19 TAX
    case 0xEDF4: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:20 LDA CHOSEN_FOUR_PTRS,X
    case 0xEDF5: c.execute<0xBD>(0x00514E, 3); return true;
    // src/unknown/EF/EF027D.asm:21 TAX
    case 0xEDF8: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:22 LDA a:char_struct::position_index,X
    case 0xEDF9: c.execute<0xBD>(0x00003C, 3); return true;
    // include/macros.asm:568 STA scratch
    case 0xEDFC: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    case 0xEDFE: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    case 0xEDFF: c.execute<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    case 0xEE01: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    case 0xEE02: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:24 CLC
    case 0xEE03: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:25 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xEE04: if (c.p & 0x20) c.execute<0x69>(0x0000DC, 2); else c.execute<0x69>(0x0054DC, 3); return true;
    // src/unknown/EF/EF027D.asm:25 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC3EE04.
    case 0xEE06: c.execute<0x54>(0x00ADAA, 3); return true;
    // src/unknown/EF/EF027D.asm:26 TAX
    case 0xEE07: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:27 LDA GAME_STATE+game_state::leader_x_coord
    case 0xEE08: c.execute<0xAD>(0x009B28, 3); return true;
    // src/unknown/EF/EF027D.asm:27 LDA GAME_STATE+game_state::leader_x_coord
    // Overlapping static entry reached from 0xC3EE06.
    case 0xEE09: c.execute<0x28>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:27 LDA GAME_STATE+game_state::leader_x_coord
    // Overlapping static entry reached from 0xC3EE09.
    case 0xEE0A: c.execute<0x9B>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:28 STA a:player_position_buffer_entry::x_coord,X
    case 0xEE0B: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF027D.asm:29 LDA GAME_STATE+game_state::leader_y_coord
    case 0xEE0E: c.execute<0xAD>(0x009B2C, 3); return true;
    // src/unknown/EF/EF027D.asm:30 STA a:player_position_buffer_entry::y_coord,X
    case 0xEE11: c.execute<0x9D>(0x000002, 3); return true;
    // include/macros.asm:25 PLD
    case 0xEE14: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xEE15: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEE16: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xEE18: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xEE19: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xEE1A: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xEE1B: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3EE1B.
    case 0xEE1D: c.execute<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xEE1E: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xEE1F: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:9 STA @LOCAL01
    case 0xEE20: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EF02C4.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC3EE1D.
    case 0xEE21: c.execute<0x10>(0x0000AD, 2); return true;
    // src/unknown/EF/EF02C4.asm:10 LDA BUBBLE_MONKEY_MODE
    case 0xEE22: c.execute<0xAD>(0x00A135, 3); return true;
    // src/unknown/EF/EF02C4.asm:10 LDA BUBBLE_MONKEY_MODE
    // Overlapping static entry reached from 0xC3EE21.
    case 0xEE23: c.execute<0x35>(0x0000A1, 2); return true;
    // src/unknown/EF/EF02C4.asm:11 CMP #3
    case 0xEE25: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EF02C4.asm:11 CMP #3
    // Overlapping static entry reached from 0xC3EE25.
    case 0xEE27: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EF02C4.asm:12 BEQ @UNKNOWN0
    case 0xEE28: c.execute<0xF0>(0x000008, 2); return true;
    // src/unknown/EF/EF02C4.asm:13 LDA BUBBLE_MONKEY_MODE
    case 0xEE2A: c.execute<0xAD>(0x00A135, 3); return true;
    // src/unknown/EF/EF02C4.asm:14 CMP #1
    case 0xEE2D: if (c.p & 0x20) c.execute<0xC9>(0x000001, 2); else c.execute<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EF02C4.asm:14 CMP #1
    // Overlapping static entry reached from 0xC3EE2D.
    case 0xEE2F: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EF02C4.asm:15 BNE @UNKNOWN1
    case 0xEE30: c.execute<0xD0>(0x000008, 2); return true;
    // src/unknown/EF/EF02C4.asm:17 LDA #2
    case 0xEE32: if (c.p & 0x20) c.execute<0xA9>(0x000002, 2); else c.execute<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EF02C4.asm:17 LDA #2
    // Overlapping static entry reached from 0xC3EE32.
    case 0xEE34: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF02C4.asm:18 STA BUBBLE_MONKEY_MODE
    case 0xEE35: c.execute<0x8D>(0x00A135, 3); return true;
    // src/unknown/EF/EF02C4.asm:19 BRA @UNKNOWN3
    case 0xEE38: c.execute<0x80>(0x000022, 2); return true;
    // src/unknown/EF/EF02C4.asm:21 LDA @LOCAL01
    case 0xEE3A: c.execute<0xA5>(0x000010, 2); return true;
    // src/unknown/EF/EF02C4.asm:22 JSL UNKNOWN_C03E9D
    case 0xEE3C: c.execute<0x22>(0xC0411A, 4); return true;
    // src/unknown/EF/EF02C4.asm:23 CMP #40
    case 0xEE40: if (c.p & 0x20) c.execute<0xC9>(0x000028, 2); else c.execute<0xC9>(0x000028, 3); return true;
    // src/unknown/EF/EF02C4.asm:23 CMP #40
    // Overlapping static entry reached from 0xC3EE40.
    case 0xEE42: c.execute<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    case 0xEE43: c.execute<0x90>(0x00000A, 2); return true;
    // include/macros.asm:762 BEQ dest
    case 0xEE45: c.execute<0xF0>(0x000008, 2); return true;
    // src/unknown/EF/EF02C4.asm:25 LDA #2
    case 0xEE47: if (c.p & 0x20) c.execute<0xA9>(0x000002, 2); else c.execute<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EF02C4.asm:25 LDA #2
    // Overlapping static entry reached from 0xC3EE47.
    case 0xEE49: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF02C4.asm:26 STA BUBBLE_MONKEY_MODE
    case 0xEE4A: c.execute<0x8D>(0x00A135, 3); return true;
    // src/unknown/EF/EF02C4.asm:27 BRA @UNKNOWN3
    case 0xEE4D: c.execute<0x80>(0x00000D, 2); return true;
    // src/unknown/EF/EF02C4.asm:29 JSL RAND
    case 0xEE4F: c.execute<0x22>(0xC08E8B, 4); return true;
    // src/unknown/EF/EF02C4.asm:30 AND #$0003
    case 0xEE53: if (c.p & 0x20) c.execute<0x29>(0x000003, 2); else c.execute<0x29>(0x000003, 3); return true;
    // src/unknown/EF/EF02C4.asm:30 AND #$0003
    // Overlapping static entry reached from 0xC3EE53.
    case 0xEE55: c.execute<0x00>(0x0000AA, 2); return true;
    // src/unknown/EF/EF02C4.asm:31 TAX
    case 0xEE56: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:32 STX @LOCAL00
    case 0xEE57: c.execute<0x86>(0x00000E, 2); return true;
    // src/unknown/EF/EF02C4.asm:33 STX BUBBLE_MONKEY_MODE
    case 0xEE59: c.execute<0x8E>(0x00A135, 3); return true;
    // src/unknown/EF/EF02C4.asm:35 LDX @LOCAL00
    case 0xEE5C: c.execute<0xA6>(0x00000E, 2); return true;
    // src/unknown/EF/EF02C4.asm:36 TXA
    case 0xEE5E: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:37 AND #$0003
    case 0xEE5F: if (c.p & 0x20) c.execute<0x29>(0x000003, 2); else c.execute<0x29>(0x000003, 3); return true;
    // src/unknown/EF/EF02C4.asm:37 AND #$0003
    // Overlapping static entry reached from 0xC3EE5F.
    case 0xEE61: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:522 STA scratch
    case 0xEE62: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    case 0xEE64: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    case 0xEE65: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/EF/EF02C4.asm:39 INC
    case 0xEE67: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:40 INC
    case 0xEE68: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:41 INC
    case 0xEE69: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:42 INC
    case 0xEE6A: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:43 STA BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0xEE6B: c.execute<0x8D>(0x00A137, 3); return true;
    // include/macros.asm:25 PLD
    case 0xEE6E: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xEE6F: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEE70: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xEE72: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xEE73: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xEE74: if (c.p & 0x20) c.execute<0x69>(0x0000E6, 2); else c.execute<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3EE74.
    case 0xEE76: c.execute<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xEE77: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:12 LDA CURRENT_ENTITY_SLOT
    case 0xEE78: c.execute<0xAD>(0x001A38, 3); return true;
    // src/unknown/EF/EF031E.asm:12 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC3EE76.
    case 0xEE7A: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:13 STA @LOCAL05
    case 0xEE7B: c.execute<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EF031E.asm:14 ASL
    case 0xEE7D: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:15 TAX
    case 0xEE7E: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:16 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xEE7F: c.execute<0xBD>(0x000E90, 3); return true;
    // src/unknown/EF/EF031E.asm:17 LDY #.SIZEOF(char_struct)
    case 0xEE82: if (c.p & 0x10) c.execute<0xA0>(0x00005E, 2); else c.execute<0xA0>(0x00005E, 3); return true;
    // src/unknown/EF/EF031E.asm:17 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3EE82.
    case 0xEE84: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF031E.asm:18 JSL MULT168
    case 0xEE85: c.execute<0x22>(0xC08FDB, 4); return true;
    // src/unknown/EF/EF031E.asm:19 CLC
    case 0xEE89: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:20 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xEE8A: if (c.p & 0x20) c.execute<0x69>(0x00007F, 2); else c.execute<0x69>(0x009C7F, 3); return true;
    // src/unknown/EF/EF031E.asm:20 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC3EE8A.
    case 0xEE8C: c.execute<0x9C>(0x008CA8, 3); return true;
    // src/unknown/EF/EF031E.asm:21 TAY
    case 0xEE8D: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:22 STY CURRENT_PARTY_MEMBER_TICK
    case 0xEE8E: c.execute<0x8C>(0x00514C, 3); return true;
    // src/unknown/EF/EF031E.asm:22 STY CURRENT_PARTY_MEMBER_TICK
    // Overlapping static entry reached from 0xC3EE8C.
    case 0xEE8F: c.execute<0x4C>(0x00B951, 3); return true;
    // src/unknown/EF/EF031E.asm:23 LDA a:char_struct::position_index,Y
    case 0xEE91: c.execute<0xB9>(0x00003C, 3); return true;
    // src/unknown/EF/EF031E.asm:24 STA @VIRTUAL02
    case 0xEE94: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF031E.asm:25 STA @VIRTUAL04
    case 0xEE96: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EF031E.asm:26 STA @LOCAL04
    case 0xEE98: c.execute<0x85>(0x000016, 2); return true;
    // src/unknown/EF/EF031E.asm:27 LDA @VIRTUAL02
    case 0xEE9A: c.execute<0xA5>(0x000002, 2); return true;
    // include/macros.asm:568 STA scratch
    case 0xEE9C: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    case 0xEE9E: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    case 0xEE9F: c.execute<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    case 0xEEA1: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    case 0xEEA2: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:29 CLC
    case 0xEEA3: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:30 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xEEA4: if (c.p & 0x20) c.execute<0x69>(0x0000DC, 2); else c.execute<0x69>(0x0054DC, 3); return true;
    // src/unknown/EF/EF031E.asm:30 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC3EEA4.
    case 0xEEA6: c.execute<0x54>(0x001485, 3); return true;
    // src/unknown/EF/EF031E.asm:31 STA @LOCAL03
    case 0xEEA7: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:32 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xEEA9: c.execute<0xBD>(0x000E54, 3); return true;
    // src/unknown/EF/EF031E.asm:33 STA @LOCAL02
    case 0xEEAC: c.execute<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:34 LDA (@LOCAL03) ;player_position_buffer_entry::x_coord
    case 0xEEAE: c.execute<0xB2>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:35 STA ENTITY_ABS_X_TABLE,X
    case 0xEEB0: c.execute<0x9D>(0x000B84, 3); return true;
    // src/unknown/EF/EF031E.asm:36 LDY #player_position_buffer_entry::y_coord
    case 0xEEB3: if (c.p & 0x10) c.execute<0xA0>(0x000002, 2); else c.execute<0xA0>(0x000002, 3); return true;
    // src/unknown/EF/EF031E.asm:36 LDY #player_position_buffer_entry::y_coord
    // Overlapping static entry reached from 0xC3EEB3.
    case 0xEEB5: c.execute<0x00>(0x0000B1, 2); return true;
    // src/unknown/EF/EF031E.asm:37 LDA (@LOCAL03),Y
    case 0xEEB6: c.execute<0xB1>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:38 STA ENTITY_ABS_Y_TABLE,X
    case 0xEEB8: c.execute<0x9D>(0x000BC0, 3); return true;
    // src/unknown/EF/EF031E.asm:39 LDY #player_position_buffer_entry::walking_style
    case 0xEEBB: if (c.p & 0x10) c.execute<0xA0>(0x000006, 2); else c.execute<0xA0>(0x000006, 3); return true;
    // src/unknown/EF/EF031E.asm:39 LDY #player_position_buffer_entry::walking_style
    // Overlapping static entry reached from 0xC3EEBB.
    case 0xEEBD: c.execute<0x00>(0x0000B1, 2); return true;
    // src/unknown/EF/EF031E.asm:40 LDA (@LOCAL03),Y
    case 0xEEBE: c.execute<0xB1>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:41 BEQ @UNKNOWN0
    case 0xEEC0: c.execute<0xF0>(0x000026, 2); return true;
    // src/unknown/EF/EF031E.asm:42 LDY CURRENT_ENTITY_SLOT
    case 0xEEC2: c.execute<0xAC>(0x001A38, 3); return true;
    // src/unknown/EF/EF031E.asm:43 TAX
    case 0xEEC5: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:44 LDA @LOCAL02
    case 0xEEC6: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:45 JSL UNKNOWN_C07A56
    case 0xEEC8: c.execute<0x22>(0xC07CA6, 4); return true;
    // src/unknown/EF/EF031E.asm:46 LDA #2
    case 0xEECC: if (c.p & 0x20) c.execute<0xA9>(0x000002, 2); else c.execute<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EF031E.asm:46 LDA #2
    // Overlapping static entry reached from 0xC3EECC.
    case 0xEECE: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF031E.asm:47 STA @LOCAL00
    case 0xEECF: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EF031E.asm:48 LDY @VIRTUAL02
    case 0xEED1: c.execute<0xA4>(0x000002, 2); return true;
    // src/unknown/EF/EF031E.asm:49 LDX #30
    case 0xEED3: if (c.p & 0x10) c.execute<0xA2>(0x00001E, 2); else c.execute<0xA2>(0x00001E, 3); return true;
    // src/unknown/EF/EF031E.asm:49 LDX #30
    // Overlapping static entry reached from 0xC3EED3.
    case 0xEED5: c.execute<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EF031E.asm:50 LDA @LOCAL02
    case 0xEED6: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:51 JSL UNKNOWN_C03EC3
    case 0xEED8: c.execute<0x22>(0xC04140, 4); return true;
    // src/unknown/EF/EF031E.asm:52 AND #$00FF
    case 0xEEDC: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EF031E.asm:52 AND #$00FF
    // Overlapping static entry reached from 0xC3EEDC.
    case 0xEEDE: c.execute<0x00>(0x0000AE, 2); return true;
    // src/unknown/EF/EF031E.asm:53 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xEEDF: c.execute<0xAE>(0x00514C, 3); return true;
    // src/unknown/EF/EF031E.asm:54 STA a:char_struct::position_index,X
    case 0xEEE2: c.execute<0x9D>(0x00003C, 3); return true;
    // src/unknown/EF/EF031E.asm:55 JMP @UNKNOWN14
    case 0xEEE5: c.execute<0x4C>(0x00F02C, 3); return true;
    // src/unknown/EF/EF031E.asm:57 LDA BUBBLE_MONKEY_MODE
    case 0xEEE8: c.execute<0xAD>(0x00A135, 3); return true;
    // src/unknown/EF/EF031E.asm:58 BEQ @UNKNOWN3
    case 0xEEEB: c.execute<0xF0>(0x000018, 2); return true;
    // src/unknown/EF/EF031E.asm:59 CMP #2
    case 0xEEED: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EF031E.asm:59 CMP #2
    // Overlapping static entry reached from 0xC3EEED.
    case 0xEEEF: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EF031E.asm:60 BEQ @UNKNOWN3
    case 0xEEF0: c.execute<0xF0>(0x000013, 2); return true;
    // src/unknown/EF/EF031E.asm:61 CMP #1
    case 0xEEF2: if (c.p & 0x20) c.execute<0xC9>(0x000001, 2); else c.execute<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EF031E.asm:61 CMP #1
    // Overlapping static entry reached from 0xC3EEF2.
    case 0xEEF4: c.execute<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    case 0xEEF5: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xEEF7: c.execute<0x4C>(0x00EF78, 3); return true;
    // src/unknown/EF/EF031E.asm:63 CMP #3
    case 0xEEFA: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EF031E.asm:63 CMP #3
    // Overlapping static entry reached from 0xC3EEFA.
    case 0xEEFC: c.execute<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    case 0xEEFD: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xEEFF: c.execute<0x4C>(0x00EF89, 3); return true;
    // src/unknown/EF/EF031E.asm:65 JMP @UNKNOWN11
    case 0xEF02: c.execute<0x4C>(0x00EFE0, 3); return true;
    // src/unknown/EF/EF031E.asm:67 LDA #2
    case 0xEF05: if (c.p & 0x20) c.execute<0xA9>(0x000002, 2); else c.execute<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EF031E.asm:67 LDA #2
    // Overlapping static entry reached from 0xC3EF05.
    case 0xEF07: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF031E.asm:68 STA @LOCAL00
    case 0xEF08: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EF031E.asm:69 LDY @VIRTUAL02
    case 0xEF0A: c.execute<0xA4>(0x000002, 2); return true;
    // src/unknown/EF/EF031E.asm:70 LDX #12
    case 0xEF0C: if (c.p & 0x10) c.execute<0xA2>(0x00000C, 2); else c.execute<0xA2>(0x00000C, 3); return true;
    // src/unknown/EF/EF031E.asm:70 LDX #12
    // Overlapping static entry reached from 0xC3EF0C.
    case 0xEF0E: c.execute<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EF031E.asm:71 LDA @LOCAL02
    case 0xEF0F: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:72 JSL UNKNOWN_C03EC3
    case 0xEF11: c.execute<0x22>(0xC04140, 4); return true;
    // src/unknown/EF/EF031E.asm:73 STA @VIRTUAL02
    case 0xEF15: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF031E.asm:74 AND #$00FF
    case 0xEF17: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EF031E.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC3EF17.
    case 0xEF19: c.execute<0x00>(0x0000AE, 2); return true;
    // src/unknown/EF/EF031E.asm:75 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xEF1A: c.execute<0xAE>(0x00514C, 3); return true;
    // src/unknown/EF/EF031E.asm:76 STA a:char_struct::position_index,X
    case 0xEF1D: c.execute<0x9D>(0x00003C, 3); return true;
    // src/unknown/EF/EF031E.asm:77 LDA @LOCAL04
    case 0xEF20: c.execute<0xA5>(0x000016, 2); return true;
    // src/unknown/EF/EF031E.asm:78 STA @VIRTUAL04
    case 0xEF22: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EF031E.asm:79 CMP @VIRTUAL02
    case 0xEF24: c.execute<0xC5>(0x000002, 2); return true;
    // src/unknown/EF/EF031E.asm:80 BEQ @UNKNOWN4
    case 0xEF26: c.execute<0xF0>(0x000007, 2); return true;
    // src/unknown/EF/EF031E.asm:81 LDA @VIRTUAL04
    case 0xEF28: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EF031E.asm:82 INC
    case 0xEF2A: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:83 CMP @VIRTUAL02
    case 0xEF2B: c.execute<0xC5>(0x000002, 2); return true;
    // src/unknown/EF/EF031E.asm:84 BNE @UNKNOWN6
    case 0xEF2D: c.execute<0xD0>(0x00001D, 2); return true;
    // src/unknown/EF/EF031E.asm:86 LDY CURRENT_ENTITY_SLOT
    case 0xEF2F: c.execute<0xAC>(0x001A38, 3); return true;
    // src/unknown/EF/EF031E.asm:87 STY @LOCAL01
    case 0xEF32: c.execute<0x84>(0x000010, 2); return true;
    // src/unknown/EF/EF031E.asm:87 STY @LOCAL01
    // Overlapping static entry reached from 0xC3EF94.
    case 0xEF33: c.execute<0x10>(0x0000A0, 2); return true;
    // src/unknown/EF/EF031E.asm:88 LDY #player_position_buffer_entry::walking_style
    case 0xEF34: if (c.p & 0x10) c.execute<0xA0>(0x000006, 2); else c.execute<0xA0>(0x000006, 3); return true;
    // src/unknown/EF/EF031E.asm:88 LDY #player_position_buffer_entry::walking_style
    // Overlapping static entry reached from 0xC3EF33.
    case 0xEF35: c.execute<0x06>(0x000000, 2); return true;
    // src/unknown/EF/EF031E.asm:88 LDY #player_position_buffer_entry::walking_style
    // Overlapping static entry reached from 0xC3EF34.
    case 0xEF36: c.execute<0x00>(0x0000B1, 2); return true;
    // src/unknown/EF/EF031E.asm:89 LDA (@LOCAL03),Y
    case 0xEF37: c.execute<0xB1>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:90 TAX
    case 0xEF39: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:91 LDA @LOCAL02
    case 0xEF3A: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:92 LDY @LOCAL01
    case 0xEF3C: c.execute<0xA4>(0x000010, 2); return true;
    // src/unknown/EF/EF031E.asm:93 JSL UNKNOWN_C07A56
    case 0xEF3E: c.execute<0x22>(0xC07CA6, 4); return true;
    // src/unknown/EF/EF031E.asm:94 LDA GAME_STATE + game_state::unknown90
    case 0xEF42: c.execute<0xAD>(0x009B36, 3); return true;
    // include/macros.asm:772 BNE :+
    case 0xEF45: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xEF47: c.execute<0x4C>(0x00EFE0, 3); return true;
    // src/unknown/EF/EF031E.asm:96 BRA @UNKNOWN7
    case 0xEF4A: c.execute<0x80>(0x00000C, 2); return true;
    // src/unknown/EF/EF031E.asm:98 LDY CURRENT_ENTITY_SLOT
    case 0xEF4C: c.execute<0xAC>(0x001A38, 3); return true;
    // src/unknown/EF/EF031E.asm:99 LDX #14
    case 0xEF4F: if (c.p & 0x10) c.execute<0xA2>(0x00000E, 2); else c.execute<0xA2>(0x00000E, 3); return true;
    // src/unknown/EF/EF031E.asm:99 LDX #14
    // Overlapping static entry reached from 0xC3EF4F.
    case 0xEF51: c.execute<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EF031E.asm:100 LDA @LOCAL02
    case 0xEF52: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:101 JSL UNKNOWN_C07A56
    case 0xEF54: c.execute<0x22>(0xC07CA6, 4); return true;
    // src/unknown/EF/EF031E.asm:103 LDA @LOCAL05
    case 0xEF58: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EF031E.asm:104 ASL
    case 0xEF5A: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:105 STA @LOCAL04
    case 0xEF5B: c.execute<0x85>(0x000016, 2); return true;
    // src/unknown/EF/EF031E.asm:106 TAX
    case 0xEF5D: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:107 LDY #player_position_buffer_entry::direction
    case 0xEF5E: if (c.p & 0x10) c.execute<0xA0>(0x000008, 2); else c.execute<0xA0>(0x000008, 3); return true;
    // src/unknown/EF/EF031E.asm:107 LDY #player_position_buffer_entry::direction
    // Overlapping static entry reached from 0xC3EF5E.
    case 0xEF60: c.execute<0x00>(0x0000B1, 2); return true;
    // src/unknown/EF/EF031E.asm:108 LDA (@LOCAL03),Y
    case 0xEF61: c.execute<0xB1>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:109 STA ENTITY_DIRECTIONS,X
    case 0xEF63: c.execute<0x9D>(0x002EF4, 3); return true;
    // src/unknown/EF/EF031E.asm:110 LDA @LOCAL04
    case 0xEF66: c.execute<0xA5>(0x000016, 2); return true;
    // src/unknown/EF/EF031E.asm:111 CLC
    case 0xEF68: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:112 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xEF69: if (c.p & 0x20) c.execute<0x69>(0x0000F8, 2); else c.execute<0x69>(0x000FF8, 3); return true;
    // src/unknown/EF/EF031E.asm:112 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC3EF69.
    case 0xEF6B: c.execute<0x0F>(0x00BDAA, 4); return true;
    // src/unknown/EF/EF031E.asm:113 TAX
    case 0xEF6C: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:114 LDA __BSS_START__,X
    case 0xEF6D: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:114 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC3EF6B.
    case 0xEF6F: c.execute<0x00>(0x000029, 2); return true;
    // src/unknown/EF/EF031E.asm:115 AND #$1FFF
    case 0xEF70: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x001FFF, 3); return true;
    // src/unknown/EF/EF031E.asm:115 AND #$1FFF
    // Overlapping static entry reached from 0xC3EF70.
    case 0xEF72: c.execute<0x1F>(0x00009D, 4); return true;
    // src/unknown/EF/EF031E.asm:116 STA __BSS_START__,X
    case 0xEF73: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:117 BRA @UNKNOWN11
    case 0xEF76: c.execute<0x80>(0x000068, 2); return true;
    // src/unknown/EF/EF031E.asm:119 TXA
    case 0xEF78: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:120 CLC
    case 0xEF79: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:121 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xEF7A: if (c.p & 0x20) c.execute<0x69>(0x0000F8, 2); else c.execute<0x69>(0x000FF8, 3); return true;
    // src/unknown/EF/EF031E.asm:121 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC3EF7A.
    case 0xEF7C: c.execute<0x0F>(0x00BDAA, 4); return true;
    // src/unknown/EF/EF031E.asm:122 TAX
    case 0xEF7D: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:123 LDA __BSS_START__,X
    case 0xEF7E: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:123 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC3EF7C.
    case 0xEF80: c.execute<0x00>(0x000009, 2); return true;
    // src/unknown/EF/EF031E.asm:124 ORA #$7000
    case 0xEF81: if (c.p & 0x20) c.execute<0x09>(0x000000, 2); else c.execute<0x09>(0x007000, 3); return true;
    // src/unknown/EF/EF031E.asm:124 ORA #$7000
    // Overlapping static entry reached from 0xC3EF81.
    case 0xEF83: c.execute<0x70>(0x00009D, 2); return true;
    // src/unknown/EF/EF031E.asm:125 STA __BSS_START__,X
    case 0xEF84: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:125 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC3EF83.
    case 0xEF85: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EF031E.asm:126 BRA @UNKNOWN11
    case 0xEF87: c.execute<0x80>(0x000057, 2); return true;
    // src/unknown/EF/EF031E.asm:128 TXA
    case 0xEF89: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:129 CLC
    case 0xEF8A: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:130 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xEF8B: if (c.p & 0x20) c.execute<0x69>(0x0000F8, 2); else c.execute<0x69>(0x000FF8, 3); return true;
    // src/unknown/EF/EF031E.asm:130 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC3EF8B.
    case 0xEF8D: c.execute<0x0F>(0x00BDAA, 4); return true;
    // src/unknown/EF/EF031E.asm:131 TAX
    case 0xEF8E: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:132 LDA __BSS_START__,X
    case 0xEF8F: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:132 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC3EF8D.
    case 0xEF91: c.execute<0x00>(0x000009, 2); return true;
    // src/unknown/EF/EF031E.asm:133 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN14 | SPRITE_TABLE_10_FLAGS::UNKNOWN13 | SPRITE_TABLE_10_FLAGS::UNKNOWN12
    case 0xEF92: if (c.p & 0x20) c.execute<0x09>(0x000000, 2); else c.execute<0x09>(0x007000, 3); return true;
    // src/unknown/EF/EF031E.asm:133 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN14 | SPRITE_TABLE_10_FLAGS::UNKNOWN13 | SPRITE_TABLE_10_FLAGS::UNKNOWN12
    // Overlapping static entry reached from 0xC3EF92.
    case 0xEF94: c.execute<0x70>(0x00009D, 2); return true;
    // src/unknown/EF/EF031E.asm:134 STA __BSS_START__,X
    case 0xEF95: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:134 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC3EF94.
    case 0xEF96: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EF031E.asm:135 LDX #.LOWORD(BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION_CHANGE_TIME)
    case 0xEF98: if (c.p & 0x10) c.execute<0xA2>(0x00003D, 2); else c.execute<0xA2>(0x00A13D, 3); return true;
    // src/unknown/EF/EF031E.asm:135 LDX #.LOWORD(BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION_CHANGE_TIME)
    // Overlapping static entry reached from 0xC3EF98.
    case 0xEF9A: c.execute<0xA1>(0x0000BD, 2); return true;
    // src/unknown/EF/EF031E.asm:136 LDA __BSS_START__,X
    case 0xEF9B: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:136 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC3EF9A.
    case 0xEF9C: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EF031E.asm:137 DEC
    case 0xEF9E: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:138 STA __BSS_START__,X
    case 0xEF9F: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:139 BNE @UNKNOWN11
    case 0xEFA2: c.execute<0xD0>(0x00003C, 2); return true;
    // src/unknown/EF/EF031E.asm:140 LDY #.LOWORD(BUBBLE_MONKEY_DISTRACTED_DIRECTION_CHANGES_LEFT)
    case 0xEFA4: if (c.p & 0x10) c.execute<0xA0>(0x00003F, 2); else c.execute<0xA0>(0x00A13F, 3); return true;
    // src/unknown/EF/EF031E.asm:140 LDY #.LOWORD(BUBBLE_MONKEY_DISTRACTED_DIRECTION_CHANGES_LEFT)
    // Overlapping static entry reached from 0xC3EFA4.
    case 0xEFA6: c.execute<0xA1>(0x0000B9, 2); return true;
    // src/unknown/EF/EF031E.asm:141 LDA __BSS_START__,Y
    case 0xEFA7: c.execute<0xB9>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:141 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC3EFA6.
    case 0xEFA8: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EF031E.asm:142 DEC
    case 0xEFAA: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:143 STA __BSS_START__,Y
    case 0xEFAB: c.execute<0x99>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:144 BNE @UNKNOWN10
    case 0xEFAE: c.execute<0xD0>(0x00000C, 2); return true;
    // src/unknown/EF/EF031E.asm:145 LDA #15
    case 0xEFB0: if (c.p & 0x20) c.execute<0xA9>(0x00000F, 2); else c.execute<0xA9>(0x00000F, 3); return true;
    // src/unknown/EF/EF031E.asm:145 LDA #15
    // Overlapping static entry reached from 0xC3EFB0.
    case 0xEFB2: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF031E.asm:146 STA BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0xEFB3: c.execute<0x8D>(0x00A137, 3); return true;
    // src/unknown/EF/EF031E.asm:147 LDA #.LOWORD(-1)
    case 0xEFB6: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EF031E.asm:147 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3EFB6.
    case 0xEFB8: c.execute<0xFF>(0x00009D, 4); return true;
    // src/unknown/EF/EF031E.asm:148 STA __BSS_START__,X
    case 0xEFB9: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:150 JSL RAND
    case 0xEFBC: c.execute<0x22>(0xC08E8B, 4); return true;
    // src/unknown/EF/EF031E.asm:151 ASL
    case 0xEFC0: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:152 ASL
    case 0xEFC1: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:153 AND #$000F
    case 0xEFC2: if (c.p & 0x20) c.execute<0x29>(0x00000F, 2); else c.execute<0x29>(0x00000F, 3); return true;
    // src/unknown/EF/EF031E.asm:153 AND #$000F
    // Overlapping static entry reached from 0xC3EFC2.
    case 0xEFC4: c.execute<0x00>(0x00001A, 2); return true;
    // src/unknown/EF/EF031E.asm:154 INC
    case 0xEFC5: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:155 INC
    case 0xEFC6: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:156 INC
    case 0xEFC7: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:157 INC
    case 0xEFC8: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:158 STA BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION_CHANGE_TIME
    case 0xEFC9: c.execute<0x8D>(0x00A13D, 3); return true;
    // src/unknown/EF/EF031E.asm:159 LDA BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION
    case 0xEFCC: c.execute<0xAD>(0x00A13B, 3); return true;
    // src/unknown/EF/EF031E.asm:160 EOR #$0004
    case 0xEFCF: if (c.p & 0x20) c.execute<0x49>(0x000004, 2); else c.execute<0x49>(0x000004, 3); return true;
    // src/unknown/EF/EF031E.asm:160 EOR #$0004
    // Overlapping static entry reached from 0xC3EFCF.
    case 0xEFD1: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF031E.asm:161 STA @LOCAL04
    case 0xEFD2: c.execute<0x85>(0x000016, 2); return true;
    // src/unknown/EF/EF031E.asm:162 STA BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION
    case 0xEFD4: c.execute<0x8D>(0x00A13B, 3); return true;
    // src/unknown/EF/EF031E.asm:163 LDA @LOCAL05
    case 0xEFD7: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EF031E.asm:164 ASL
    case 0xEFD9: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:165 TAX
    case 0xEFDA: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:166 LDA @LOCAL04
    case 0xEFDB: c.execute<0xA5>(0x000016, 2); return true;
    // src/unknown/EF/EF031E.asm:167 STA ENTITY_DIRECTIONS,X
    case 0xEFDD: c.execute<0x9D>(0x002EF4, 3); return true;
    // src/unknown/EF/EF031E.asm:169 LDA @LOCAL05
    case 0xEFE0: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EF031E.asm:170 ASL
    case 0xEFE2: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:171 TAX
    case 0xEFE3: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:172 LDA #4
    case 0xEFE4: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EF031E.asm:172 LDA #4
    // Overlapping static entry reached from 0xC3EFE4.
    case 0xEFE6: c.execute<0x00>(0x00009D, 2); return true;
    // src/unknown/EF/EF031E.asm:173 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xEFE7: c.execute<0x9D>(0x000F08, 3); return true;
    // src/unknown/EF/EF031E.asm:174 LDX BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0xEFEA: c.execute<0xAE>(0x00A137, 3); return true;
    // src/unknown/EF/EF031E.asm:175 DEX
    case 0xEFED: c.execute<0xCA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:176 STX BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0xEFEE: c.execute<0x8E>(0x00A137, 3); return true;
    // src/unknown/EF/EF031E.asm:177 BNE @UNKNOWN13
    case 0xEFF1: c.execute<0xD0>(0x00002D, 2); return true;
    // src/unknown/EF/EF031E.asm:178 LDA @LOCAL02
    case 0xEFF3: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:179 JSR UNKNOWN_EF02C4
    case 0xEFF5: c.execute<0x20>(0x00EE16, 3); return true;
    // src/unknown/EF/EF031E.asm:180 LDA BUBBLE_MONKEY_MODE
    case 0xEFF8: c.execute<0xAD>(0x00A135, 3); return true;
    // src/unknown/EF/EF031E.asm:181 CMP #3
    case 0xEFFB: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EF031E.asm:181 CMP #3
    // Overlapping static entry reached from 0xC3EFFB.
    case 0xEFFD: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EF031E.asm:182 BNE @UNKNOWN12
    case 0xEFFE: c.execute<0xD0>(0x00001A, 2); return true;
    // src/unknown/EF/EF031E.asm:183 LDA #4
    case 0xF000: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EF031E.asm:183 LDA #4
    // Overlapping static entry reached from 0xC3F000.
    case 0xF002: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF031E.asm:184 STA BUBBLE_MONKEY_DISTRACTED_DIRECTION_CHANGES_LEFT
    case 0xF003: c.execute<0x8D>(0x00A13F, 3); return true;
    // src/unknown/EF/EF031E.asm:185 LDA #6
    case 0xF006: if (c.p & 0x20) c.execute<0xA9>(0x000006, 2); else c.execute<0xA9>(0x000006, 3); return true;
    // src/unknown/EF/EF031E.asm:185 LDA #6
    // Overlapping static entry reached from 0xC3F006.
    case 0xF008: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF031E.asm:186 STA BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION
    case 0xF009: c.execute<0x8D>(0x00A13B, 3); return true;
    // src/unknown/EF/EF031E.asm:187 LDA #15
    case 0xF00C: if (c.p & 0x20) c.execute<0xA9>(0x00000F, 2); else c.execute<0xA9>(0x00000F, 3); return true;
    // src/unknown/EF/EF031E.asm:187 LDA #15
    // Overlapping static entry reached from 0xC3F00C.
    case 0xF00E: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF031E.asm:188 STA BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION_CHANGE_TIME
    case 0xF00F: c.execute<0x8D>(0x00A13D, 3); return true;
    // src/unknown/EF/EF031E.asm:189 LDA #.LOWORD(-1)
    case 0xF012: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EF031E.asm:189 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3F012.
    case 0xF014: c.execute<0xFF>(0xA1378D, 4); return true;
    // src/unknown/EF/EF031E.asm:190 STA BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0xF015: c.execute<0x8D>(0x00A137, 3); return true;
    // src/unknown/EF/EF031E.asm:191 BRA @UNKNOWN13
    case 0xF018: c.execute<0x80>(0x000006, 2); return true;
    // src/unknown/EF/EF031E.asm:193 LDA #60
    case 0xF01A: if (c.p & 0x20) c.execute<0xA9>(0x00003C, 2); else c.execute<0xA9>(0x00003C, 3); return true;
    // src/unknown/EF/EF031E.asm:193 LDA #60
    // Overlapping static entry reached from 0xC3F01A.
    case 0xF01C: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF031E.asm:194 STA BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0xF01D: c.execute<0x8D>(0x00A137, 3); return true;
    // src/unknown/EF/EF031E.asm:196 LDA @LOCAL05
    case 0xF020: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EF031E.asm:197 ASL
    case 0xF022: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:198 TAX
    case 0xF023: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:199 LDY #player_position_buffer_entry::tile_flags
    case 0xF024: if (c.p & 0x10) c.execute<0xA0>(0x000004, 2); else c.execute<0xA0>(0x000004, 3); return true;
    // src/unknown/EF/EF031E.asm:199 LDY #player_position_buffer_entry::tile_flags
    // Overlapping static entry reached from 0xC3F024.
    case 0xF026: c.execute<0x00>(0x0000B1, 2); return true;
    // src/unknown/EF/EF031E.asm:200 LDA (@LOCAL03),Y
    case 0xF027: c.execute<0xB1>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:201 STA ENTITY_SURFACE_FLAGS,X
    case 0xF029: c.execute<0x9D>(0x002FA8, 3); return true;
    // include/macros.asm:25 PLD
    case 0xF02C: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xF02D: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xF13E: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xF140: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xF141: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xF142: if (c.p & 0x20) c.execute<0x69>(0x0000E8, 2); else c.execute<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3F142.
    case 0xF144: c.execute<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xF145: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:10 LDA #0
    case 0xF146: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3F5F9.asm:10 LDA #0
    // Overlapping static entry reached from 0xC3F146.
    case 0xF148: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F5F9.asm:11 STA @VIRTUAL04
    case 0xF149: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F5F9.asm:12 LDA TILEMAP_UPDATE_TILE_COUNT
    case 0xF14B: c.execute<0xAD>(0x00A180, 3); return true;
    // src/unknown/C3/C3F5F9.asm:13 ASL
    case 0xF14E: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:14 STA @LOCAL03
    case 0xF14F: c.execute<0x85>(0x000016, 2); return true;
    // src/unknown/C3/C3F5F9.asm:15 LDA #0
    case 0xF151: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3F5F9.asm:15 LDA #0
    // Overlapping static entry reached from 0xC3F151.
    case 0xF153: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F5F9.asm:16 STA @VIRTUAL02
    case 0xF154: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:17 STA @LOCAL02
    case 0xF156: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/C3/C3F5F9.asm:18 BRA @UNKNOWN2
    case 0xF158: c.execute<0x80>(0x00005F, 2); return true;
    // src/unknown/C3/C3F5F9.asm:20 LDA TILEMAP_UPDATE_TILE_X
    case 0xF15A: c.execute<0xAD>(0x00A17C, 3); return true;
    // src/unknown/C3/C3F5F9.asm:21 AND #$001F
    case 0xF15D: if (c.p & 0x20) c.execute<0x29>(0x00001F, 2); else c.execute<0x29>(0x00001F, 3); return true;
    // src/unknown/C3/C3F5F9.asm:21 AND #$001F
    // Overlapping static entry reached from 0xC3F15D.
    case 0xF15F: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F5F9.asm:22 STA @VIRTUAL02
    case 0xF160: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:23 LDA TILEMAP_UPDATE_TILE_Y
    case 0xF162: c.execute<0xAD>(0x00A17E, 3); return true;
    // src/unknown/C3/C3F5F9.asm:24 ASL
    case 0xF165: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:25 ASL
    case 0xF166: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:26 ASL
    case 0xF167: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:27 ASL
    case 0xF168: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:28 ASL
    case 0xF169: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:29 CLC
    case 0xF16A: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:30 ADC TILEMAP_UPDATE_BASE_ADDRESS
    case 0xF16B: c.execute<0x6D>(0x00A186, 3); return true;
    // src/unknown/C3/C3F5F9.asm:31 CLC
    case 0xF16E: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:32 ADC @VIRTUAL02
    case 0xF16F: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:33 STA @LOCAL01
    case 0xF171: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xF173: c.execute<0xAD>(0x00A188, 3); return true;
    // include/macros.asm:837 STA dest
    case 0xF176: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xF178: c.execute<0xAD>(0x00A18A, 3); return true;
    // include/macros.asm:839 STA dest+2
    case 0xF17B: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F5F9.asm:35 LDA @VIRTUAL04
    case 0xF17D: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/C3/C3F5F9.asm:36 ASL
    case 0xF17F: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:37 CLC
    case 0xF180: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:38 ADC @VIRTUAL06
    case 0xF181: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3F5F9.asm:39 STA @VIRTUAL06
    case 0xF183: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3F5F9.asm:40 STA @LOCAL00
    case 0xF185: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3F5F9.asm:41 LDA @VIRTUAL06+2
    case 0xF187: c.execute<0xA5>(0x000008, 2); return true;
    // src/unknown/C3/C3F5F9.asm:42 STA @LOCAL00+2
    case 0xF189: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3F5F9.asm:43 LDA @LOCAL01
    case 0xF18B: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/C3/C3F5F9.asm:44 TAY
    case 0xF18D: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:45 LDX @LOCAL03
    case 0xF18E: c.execute<0xA6>(0x000016, 2); return true;
    // src/unknown/C3/C3F5F9.asm:46 SEP #PROC_FLAGS::ACCUM8
    case 0xF190: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3F5F9.asm:47 LDA #0
    case 0xF192: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/unknown/C3/C3F5F9.asm:48 JSL PREPARE_VRAM_COPY
    case 0xF194: c.execute<0x22>(0xC08616, 4); return true;
    // src/unknown/C3/C3F5F9.asm:48 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC3F192.
    case 0xF195: c.execute<0x16>(0x000086, 2); return true;
    // src/unknown/C3/C3F5F9.asm:48 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC3F195.
    case 0xF197: if (c.p & 0x10) c.execute<0xC0>(0x0000A5, 2); else c.execute<0xC0>(0x0004A5, 3); return true;
    // src/unknown/C3/C3F5F9.asm:49 LDA @VIRTUAL04
    case 0xF198: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/C3/C3F5F9.asm:49 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC3F197.
    case 0xF199: c.execute<0x04>(0x000018, 2); return true;
    // src/unknown/C3/C3F5F9.asm:50 CLC
    case 0xF19A: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:51 ADC TILEMAP_UPDATE_TILE_WIDTH
    case 0xF19B: c.execute<0x6D>(0x00A184, 3); return true;
    // src/unknown/C3/C3F5F9.asm:52 STA @VIRTUAL04
    case 0xF19E: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F5F9.asm:53 LDX TILEMAP_UPDATE_TILE_Y
    case 0xF1A0: c.execute<0xAE>(0x00A17E, 3); return true;
    // src/unknown/C3/C3F5F9.asm:54 INX
    case 0xF1A3: c.execute<0xE8>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:55 STX TILEMAP_UPDATE_TILE_Y
    case 0xF1A4: c.execute<0x8E>(0x00A17E, 3); return true;
    // src/unknown/C3/C3F5F9.asm:56 CPX #32
    case 0xF1A7: if (c.p & 0x10) c.execute<0xE0>(0x000020, 2); else c.execute<0xE0>(0x000020, 3); return true;
    // src/unknown/C3/C3F5F9.asm:56 CPX #32
    // Overlapping static entry reached from 0xC3F1A7.
    case 0xF1A9: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3F5F9.asm:57 BNE @UNKNOWN1
    case 0xF1AA: c.execute<0xD0>(0x000003, 2); return true;
    // src/unknown/C3/C3F5F9.asm:58 STZ TILEMAP_UPDATE_TILE_Y
    case 0xF1AC: c.execute<0x9C>(0x00A17E, 3); return true;
    // src/unknown/C3/C3F5F9.asm:60 LDA @LOCAL02
    case 0xF1AF: c.execute<0xA5>(0x000014, 2); return true;
    // src/unknown/C3/C3F5F9.asm:61 STA @VIRTUAL02
    case 0xF1B1: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:62 INC @VIRTUAL02
    case 0xF1B3: c.execute<0xE6>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:63 LDA @VIRTUAL02
    case 0xF1B5: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:64 STA @LOCAL02
    case 0xF1B7: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/C3/C3F5F9.asm:66 LDA @VIRTUAL02
    case 0xF1B9: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:67 CMP TILEMAP_UPDATE_TILE_HEIGHT
    case 0xF1BB: c.execute<0xCD>(0x00A182, 3); return true;
    // src/unknown/C3/C3F5F9.asm:68 BCC @UNKNOWN0
    case 0xF1BE: c.execute<0x90>(0x00009A, 2); return true;
    // include/macros.asm:25 PLD
    case 0xF1C0: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xF1C1: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xF1C2: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xF1C4: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xF1C5: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xF1C6: if (c.p & 0x20) c.execute<0x69>(0x0000EC, 2); else c.execute<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3F1C6.
    case 0xF1C8: c.execute<0xFF>(0x82AD5B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xF1C9: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:8 LDA TILEMAP_UPDATE_TILE_HEIGHT
    case 0xF1CA: c.execute<0xAD>(0x00A182, 3); return true;
    // src/unknown/C3/C3F67D.asm:8 LDA TILEMAP_UPDATE_TILE_HEIGHT
    // Overlapping static entry reached from 0xC3F1C8.
    case 0xF1CC: c.execute<0xA1>(0x00000A, 2); return true;
    // src/unknown/C3/C3F67D.asm:9 ASL
    case 0xF1CD: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:10 STA @VIRTUAL04
    case 0xF1CE: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F67D.asm:11 LDA #0
    case 0xF1D0: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3F67D.asm:11 LDA #0
    // Overlapping static entry reached from 0xC3F1D0.
    case 0xF1D2: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F67D.asm:12 STA @VIRTUAL02
    case 0xF1D3: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F67D.asm:13 BRA @UNKNOWN3
    case 0xF1D5: c.execute<0x80>(0x00006A, 2); return true;
    // src/unknown/C3/C3F67D.asm:15 LDA TILEMAP_UPDATE_TILE_Y
    case 0xF1D7: c.execute<0xAD>(0x00A17E, 3); return true;
    // include/macros.asm:656 ASL
    case 0xF1DA: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    case 0xF1DB: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    case 0xF1DC: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    case 0xF1DD: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    case 0xF1DE: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:17 CLC
    case 0xF1DF: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:18 ADC TILEMAP_UPDATE_BASE_ADDRESS
    case 0xF1E0: c.execute<0x6D>(0x00A186, 3); return true;
    // src/unknown/C3/C3F67D.asm:19 CLC
    case 0xF1E3: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:20 ADC TILEMAP_UPDATE_TILE_X
    case 0xF1E4: c.execute<0x6D>(0x00A17C, 3); return true;
    // src/unknown/C3/C3F67D.asm:21 STA @LOCAL01
    case 0xF1E7: c.execute<0x85>(0x000012, 2); return true;
    // src/unknown/C3/C3F67D.asm:22 INC TILEMAP_UPDATE_TILE_X
    case 0xF1E9: c.execute<0xEE>(0x00A17C, 3); return true;
    // include/macros.asm:836 LDA src
    case 0xF1EC: c.execute<0xAD>(0x00A188, 3); return true;
    // include/macros.asm:837 STA dest
    case 0xF1EF: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xF1F1: c.execute<0xAD>(0x00A18A, 3); return true;
    // include/macros.asm:839 STA dest+2
    case 0xF1F4: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xF1F6: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xF1F8: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xF1FA: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xF1FC: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3F67D.asm:25 LDA @LOCAL01
    case 0xF1FE: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/C3/C3F67D.asm:26 TAY
    case 0xF200: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:27 LDX @VIRTUAL04
    case 0xF201: c.execute<0xA6>(0x000004, 2); return true;
    // src/unknown/C3/C3F67D.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xF203: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3F67D.asm:29 LDA #0
    case 0xF205: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/unknown/C3/C3F67D.asm:30 JSL PREPARE_VRAM_COPY
    case 0xF207: c.execute<0x22>(0xC08616, 4); return true;
    // src/unknown/C3/C3F67D.asm:30 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC3F205.
    case 0xF208: c.execute<0x16>(0x000086, 2); return true;
    // src/unknown/C3/C3F67D.asm:30 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC3F208.
    case 0xF20A: if (c.p & 0x10) c.execute<0xC0>(0x0000AD, 2); else c.execute<0xC0>(0x0088AD, 3); return true;
    // include/macros.asm:836 LDA src
    case 0xF20B: c.execute<0xAD>(0x00A188, 3); return true;
    // include/macros.asm:836 LDA src
    // Overlapping static entry reached from 0xC3F20A.
    case 0xF20C: c.execute<0x88>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Overlapping static entry reached from 0xC3F20A.
    case 0xF20D: c.execute<0xA1>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xF20E: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Overlapping static entry reached from 0xC3F20D.
    case 0xF20F: c.execute<0x06>(0x0000AD, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xF210: c.execute<0xAD>(0x00A18A, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Overlapping static entry reached from 0xC3F20F.
    case 0xF211: c.execute<0x8A>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Overlapping static entry reached from 0xC3F211.
    case 0xF212: c.execute<0xA1>(0x000085, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xF213: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Overlapping static entry reached from 0xC3F212.
    case 0xF214: c.execute<0x08>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:33 LDA TILEMAP_UPDATE_TILE_WIDTH
    case 0xF215: c.execute<0xAD>(0x00A184, 3); return true;
    // src/unknown/C3/C3F67D.asm:34 ASL
    case 0xF218: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:35 CLC
    case 0xF219: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:36 ADC @VIRTUAL06
    case 0xF21A: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3F67D.asm:37 STA @VIRTUAL06
    case 0xF21C: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3F67D.asm:38 STA TILEMAP_UPDATE_REMAINING_TILES
    case 0xF21E: c.execute<0x8D>(0x00A188, 3); return true;
    // src/unknown/C3/C3F67D.asm:39 LDA @VIRTUAL06+2
    case 0xF221: c.execute<0xA5>(0x000008, 2); return true;
    // src/unknown/C3/C3F67D.asm:40 STA TILEMAP_UPDATE_REMAINING_TILES+2
    case 0xF223: c.execute<0x8D>(0x00A18A, 3); return true;
    // src/unknown/C3/C3F67D.asm:41 LDA TILEMAP_UPDATE_TILE_X
    case 0xF226: c.execute<0xAD>(0x00A17C, 3); return true;
    // src/unknown/C3/C3F67D.asm:42 CMP #32
    case 0xF229: if (c.p & 0x20) c.execute<0xC9>(0x000020, 2); else c.execute<0xC9>(0x000020, 3); return true;
    // src/unknown/C3/C3F67D.asm:42 CMP #32
    // Overlapping static entry reached from 0xC3F229.
    case 0xF22B: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3F67D.asm:43 BEQ @UNKNOWN1
    case 0xF22C: c.execute<0xF0>(0x000008, 2); return true;
    // src/unknown/C3/C3F67D.asm:44 LDA TILEMAP_UPDATE_TILE_X
    case 0xF22E: c.execute<0xAD>(0x00A17C, 3); return true;
    // src/unknown/C3/C3F67D.asm:45 CMP #64
    case 0xF231: if (c.p & 0x20) c.execute<0xC9>(0x000040, 2); else c.execute<0xC9>(0x000040, 3); return true;
    // src/unknown/C3/C3F67D.asm:45 CMP #64
    // Overlapping static entry reached from 0xC3F231.
    case 0xF233: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3F67D.asm:46 BNE @UNKNOWN2
    case 0xF234: c.execute<0xD0>(0x000009, 2); return true;
    // src/unknown/C3/C3F67D.asm:48 LDA TILEMAP_UPDATE_BASE_ADDRESS
    case 0xF236: c.execute<0xAD>(0x00A186, 3); return true;
    // src/unknown/C3/C3F67D.asm:49 EOR #$0400
    case 0xF239: if (c.p & 0x20) c.execute<0x49>(0x000000, 2); else c.execute<0x49>(0x000400, 3); return true;
    // src/unknown/C3/C3F67D.asm:49 EOR #$0400
    // Overlapping static entry reached from 0xC3F239.
    case 0xF23B: c.execute<0x04>(0x00008D, 2); return true;
    // src/unknown/C3/C3F67D.asm:50 STA TILEMAP_UPDATE_BASE_ADDRESS
    case 0xF23C: c.execute<0x8D>(0x00A186, 3); return true;
    // src/unknown/C3/C3F67D.asm:50 STA TILEMAP_UPDATE_BASE_ADDRESS
    // Overlapping static entry reached from 0xC3F23B.
    case 0xF23D: c.execute<0x86>(0x0000A1, 2); return true;
    // src/unknown/C3/C3F67D.asm:52 INC @VIRTUAL02
    case 0xF23F: c.execute<0xE6>(0x000002, 2); return true;
    // src/unknown/C3/C3F67D.asm:54 LDA @VIRTUAL02
    case 0xF241: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F67D.asm:55 CMP TILEMAP_UPDATE_TILE_COUNT
    case 0xF243: c.execute<0xCD>(0x00A180, 3); return true;
    // src/unknown/C3/C3F67D.asm:56 BCC @UNKNOWN0
    case 0xF246: c.execute<0x90>(0x00008F, 2); return true;
    // include/macros.asm:25 PLD
    case 0xF248: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xF249: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xF24A: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xF24C: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xF24D: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xF24E: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xF24F: if (c.p & 0x20) c.execute<0x69>(0x0000E6, 2); else c.execute<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3F24F.
    case 0xF251: c.execute<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xF252: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xF253: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:13 STA @LOCAL04
    case 0xF254: c.execute<0x85>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:13 STA @LOCAL04
    // Overlapping static entry reached from 0xC3F251.
    case 0xF255: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    case 0xF256: c.execute<0xA5>(0x000028, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xF258: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xF25A: c.execute<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xF25C: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xF25E: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xF260: c.execute<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xF262: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xF264: c.execute<0x85>(0x000016, 2); return true;
    // src/unknown/C3/C3F705.asm:16 INC @VIRTUAL06
    case 0xF266: c.execute<0xE6>(0x000006, 2); return true;
    // src/unknown/C3/C3F705.asm:17 INC @VIRTUAL06
    case 0xF268: c.execute<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xF26A: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xF26C: c.execute<0x8D>(0x00A188, 3); return true;
    // include/macros.asm:838 LDA src+2
    case 0xF26F: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xF271: c.execute<0x8D>(0x00A18A, 3); return true;
    // src/unknown/C3/C3F705.asm:19 LDA @LOCAL04
    case 0xF274: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:20 AND #$003F
    case 0xF276: if (c.p & 0x20) c.execute<0x29>(0x00003F, 2); else c.execute<0x29>(0x00003F, 3); return true;
    // src/unknown/C3/C3F705.asm:20 AND #$003F
    // Overlapping static entry reached from 0xC3F276.
    case 0xF278: c.execute<0x00>(0x0000A8, 2); return true;
    // src/unknown/C3/C3F705.asm:21 TAY
    case 0xF279: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:22 STY @LOCAL02
    case 0xF27A: c.execute<0x84>(0x000012, 2); return true;
    // src/unknown/C3/C3F705.asm:23 STY TILEMAP_UPDATE_TILE_X
    case 0xF27C: c.execute<0x8C>(0x00A17C, 3); return true;
    // src/unknown/C3/C3F705.asm:24 TXA
    case 0xF27F: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:25 AND #$001F
    case 0xF280: if (c.p & 0x20) c.execute<0x29>(0x00001F, 2); else c.execute<0x29>(0x00001F, 3); return true;
    // src/unknown/C3/C3F705.asm:25 AND #$001F
    // Overlapping static entry reached from 0xC3F280.
    case 0xF282: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F705.asm:26 STA @VIRTUAL02
    case 0xF283: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F705.asm:27 STA @LOCAL01
    case 0xF285: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3F705.asm:28 LDA @VIRTUAL02
    case 0xF287: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F705.asm:29 STA TILEMAP_UPDATE_TILE_Y
    case 0xF289: c.execute<0x8D>(0x00A17E, 3); return true;
    // src/unknown/C3/C3F705.asm:30 TYA
    case 0xF28C: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:31 AND #$001F
    case 0xF28D: if (c.p & 0x20) c.execute<0x29>(0x00001F, 2); else c.execute<0x29>(0x00001F, 3); return true;
    // src/unknown/C3/C3F705.asm:31 AND #$001F
    // Overlapping static entry reached from 0xC3F28D.
    case 0xF28F: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3F705.asm:32 BEQ @UNKNOWN0
    case 0xF290: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/C3/C3F705.asm:32 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC3F2EE.
    case 0xF291: c.execute<0x05>(0x0000A2, 2); return true;
    // src/unknown/C3/C3F705.asm:33 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE
    case 0xF292: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x003C00, 3); return true;
    // src/unknown/C3/C3F705.asm:33 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE
    // Overlapping static entry reached from 0xC3F291.
    case 0xF293: c.execute<0x00>(0x00003C, 2); return true;
    // src/unknown/C3/C3F705.asm:33 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE
    // Overlapping static entry reached from 0xC3F292.
    case 0xF294: c.execute<0x3C>(0x000380, 3); return true;
    // src/unknown/C3/C3F705.asm:34 BRA @UNKNOWN1
    case 0xF295: c.execute<0x80>(0x000003, 2); return true;
    // src/unknown/C3/C3F705.asm:36 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP
    case 0xF297: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x003800, 3); return true;
    // src/unknown/C3/C3F705.asm:36 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP
    // Overlapping static entry reached from 0xC3F297.
    case 0xF299: c.execute<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:38 STX TILEMAP_UPDATE_BASE_ADDRESS
    case 0xF29A: c.execute<0x8E>(0x00A186, 3); return true;
    // include/macros.asm:836 LDA src
    case 0xF29D: c.execute<0xA5>(0x000014, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xF29F: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xF2A1: c.execute<0xA5>(0x000016, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xF2A3: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F705.asm:40 LDA [@VIRTUAL06]
    case 0xF2A5: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3F705.asm:41 XBA
    case 0xF2A7: c.execute<0xEB>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:42 AND #$00FF
    case 0xF2A8: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F705.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC3F2A8.
    case 0xF2AA: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F705.asm:43 STA @LOCAL04
    case 0xF2AB: c.execute<0x85>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:44 TAX
    case 0xF2AD: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:45 STX @LOCAL00
    case 0xF2AE: c.execute<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3F705.asm:46 STX TILEMAP_UPDATE_TILE_COUNT
    case 0xF2B0: c.execute<0x8E>(0x00A180, 3); return true;
    // src/unknown/C3/C3F705.asm:47 LDA [@VIRTUAL06]
    case 0xF2B3: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3F705.asm:48 AND #$00FF
    case 0xF2B5: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F705.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC3F2B5.
    case 0xF2B7: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F705.asm:49 STA @VIRTUAL04
    case 0xF2B8: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F705.asm:50 STA TILEMAP_UPDATE_TILE_HEIGHT
    case 0xF2BA: c.execute<0x8D>(0x00A182, 3); return true;
    // src/unknown/C3/C3F705.asm:51 LDA @LOCAL04
    case 0xF2BD: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:52 STA @VIRTUAL02
    case 0xF2BF: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F705.asm:53 TYA
    case 0xF2C1: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:54 CLC
    case 0xF2C2: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:55 ADC @VIRTUAL02
    case 0xF2C3: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/C3/C3F705.asm:56 AND #$FFE0
    case 0xF2C5: if (c.p & 0x20) c.execute<0x29>(0x0000E0, 2); else c.execute<0x29>(0x00FFE0, 3); return true;
    // src/unknown/C3/C3F705.asm:56 AND #$FFE0
    // Overlapping static entry reached from 0xC3F2C5.
    case 0xF2C7: c.execute<0xFF>(0x980485, 4); return true;
    // src/unknown/C3/C3F705.asm:57 STA @VIRTUAL04
    case 0xF2C8: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F705.asm:58 TYA
    case 0xF2CA: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:59 AND #$FFE0
    case 0xF2CB: if (c.p & 0x20) c.execute<0x29>(0x0000E0, 2); else c.execute<0x29>(0x00FFE0, 3); return true;
    // src/unknown/C3/C3F705.asm:59 AND #$FFE0
    // Overlapping static entry reached from 0xC3F2CB.
    case 0xF2CD: c.execute<0xFF>(0xD004C5, 4); return true;
    // src/unknown/C3/C3F705.asm:60 CMP @VIRTUAL04
    case 0xF2CE: c.execute<0xC5>(0x000004, 2); return true;
    // src/unknown/C3/C3F705.asm:61 BNE @UNKNOWN2
    case 0xF2D0: c.execute<0xD0>(0x00000A, 2); return true;
    // src/unknown/C3/C3F705.asm:61 BNE @UNKNOWN2
    // Overlapping static entry reached from 0xC3F2CD.
    case 0xF2D1: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:62 LDA @LOCAL04
    case 0xF2D2: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:63 STA TILEMAP_UPDATE_TILE_WIDTH
    case 0xF2D4: c.execute<0x8D>(0x00A184, 3); return true;
    // src/unknown/C3/C3F705.asm:64 JSR UNKNOWN_C3F5F9
    case 0xF2D7: c.execute<0x20>(0x00F13E, 3); return true;
    // src/unknown/C3/C3F705.asm:65 BRA @UNKNOWN3
    case 0xF2DA: c.execute<0x80>(0x000062, 2); return true;
    // src/unknown/C3/C3F705.asm:67 LDA @LOCAL04
    case 0xF2DC: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:68 STA @VIRTUAL04
    case 0xF2DE: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F705.asm:69 LDY @LOCAL02
    case 0xF2E0: c.execute<0xA4>(0x000012, 2); return true;
    // src/unknown/C3/C3F705.asm:70 TYA
    case 0xF2E2: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:71 CLC
    case 0xF2E3: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:72 ADC @VIRTUAL04
    case 0xF2E4: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3F705.asm:73 AND #$FFE0
    case 0xF2E6: if (c.p & 0x20) c.execute<0x29>(0x0000E0, 2); else c.execute<0x29>(0x00FFE0, 3); return true;
    // src/unknown/C3/C3F705.asm:73 AND #$FFE0
    // Overlapping static entry reached from 0xC3F2E6.
    case 0xF2E8: c.execute<0xFF>(0x7CED38, 4); return true;
    // src/unknown/C3/C3F705.asm:74 SEC
    case 0xF2E9: c.execute<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:75 SBC TILEMAP_UPDATE_TILE_X
    case 0xF2EA: c.execute<0xED>(0x00A17C, 3); return true;
    // src/unknown/C3/C3F705.asm:75 SBC TILEMAP_UPDATE_TILE_X
    // Overlapping static entry reached from 0xC3F2E8.
    case 0xF2EC: c.execute<0xA1>(0x00008D, 2); return true;
    // src/unknown/C3/C3F705.asm:76 STA TILEMAP_UPDATE_TILE_COUNT
    case 0xF2ED: c.execute<0x8D>(0x00A180, 3); return true;
    // src/unknown/C3/C3F705.asm:76 STA TILEMAP_UPDATE_TILE_COUNT
    // Overlapping static entry reached from 0xC3F2EC.
    case 0xF2EE: c.execute<0x80>(0x0000A1, 2); return true;
    // src/unknown/C3/C3F705.asm:77 LDA @LOCAL04
    case 0xF2F0: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:78 STA TILEMAP_UPDATE_TILE_WIDTH
    case 0xF2F2: c.execute<0x8D>(0x00A184, 3); return true;
    // src/unknown/C3/C3F705.asm:79 JSR UNKNOWN_C3F5F9
    case 0xF2F5: c.execute<0x20>(0x00F13E, 3); return true;
    // src/unknown/C3/C3F705.asm:80 LDA TILEMAP_UPDATE_BASE_ADDRESS
    case 0xF2F8: c.execute<0xAD>(0x00A186, 3); return true;
    // src/unknown/C3/C3F705.asm:81 EOR #$0400
    case 0xF2FB: if (c.p & 0x20) c.execute<0x49>(0x000000, 2); else c.execute<0x49>(0x000400, 3); return true;
    // src/unknown/C3/C3F705.asm:81 EOR #$0400
    // Overlapping static entry reached from 0xC3F2FB.
    case 0xF2FD: c.execute<0x04>(0x00008D, 2); return true;
    // src/unknown/C3/C3F705.asm:82 STA TILEMAP_UPDATE_BASE_ADDRESS
    case 0xF2FE: c.execute<0x8D>(0x00A186, 3); return true;
    // src/unknown/C3/C3F705.asm:82 STA TILEMAP_UPDATE_BASE_ADDRESS
    // Overlapping static entry reached from 0xC3F2FD.
    case 0xF2FF: c.execute<0x86>(0x0000A1, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xF301: c.execute<0xAD>(0x00A188, 3); return true;
    // include/macros.asm:837 STA dest
    case 0xF304: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xF306: c.execute<0xAD>(0x00A18A, 3); return true;
    // include/macros.asm:839 STA dest+2
    case 0xF309: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F705.asm:84 LDA TILEMAP_UPDATE_TILE_COUNT
    case 0xF30B: c.execute<0xAD>(0x00A180, 3); return true;
    // src/unknown/C3/C3F705.asm:85 ASL
    case 0xF30E: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:86 CLC
    case 0xF30F: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:87 ADC @VIRTUAL06
    case 0xF310: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3F705.asm:88 STA @VIRTUAL06
    case 0xF312: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3F705.asm:89 STA TILEMAP_UPDATE_REMAINING_TILES
    case 0xF314: c.execute<0x8D>(0x00A188, 3); return true;
    // src/unknown/C3/C3F705.asm:90 LDA @VIRTUAL06+2
    case 0xF317: c.execute<0xA5>(0x000008, 2); return true;
    // src/unknown/C3/C3F705.asm:91 STA TILEMAP_UPDATE_REMAINING_TILES+2
    case 0xF319: c.execute<0x8D>(0x00A18A, 3); return true;
    // src/unknown/C3/C3F705.asm:92 STZ TILEMAP_UPDATE_TILE_X
    case 0xF31C: c.execute<0x9C>(0x00A17C, 3); return true;
    // src/unknown/C3/C3F705.asm:93 LDA @LOCAL01
    case 0xF31F: c.execute<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3F705.asm:94 STA @VIRTUAL02
    case 0xF321: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F705.asm:95 STA TILEMAP_UPDATE_TILE_Y
    case 0xF323: c.execute<0x8D>(0x00A17E, 3); return true;
    // src/unknown/C3/C3F705.asm:96 LDA @LOCAL04
    case 0xF326: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:97 SEC
    case 0xF328: c.execute<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:98 SBC TILEMAP_UPDATE_TILE_COUNT
    case 0xF329: c.execute<0xED>(0x00A180, 3); return true;
    // src/unknown/C3/C3F705.asm:99 STA @LOCAL04
    case 0xF32C: c.execute<0x85>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:100 CMP #32
    case 0xF32E: if (c.p & 0x20) c.execute<0xC9>(0x000020, 2); else c.execute<0xC9>(0x000020, 3); return true;
    // src/unknown/C3/C3F705.asm:100 CMP #32
    // Overlapping static entry reached from 0xC3F32E.
    case 0xF330: c.execute<0x00>(0x0000B0, 2); return true;
    // src/unknown/C3/C3F705.asm:101 BCS @UNKNOWN2
    case 0xF331: c.execute<0xB0>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F705.asm:102 STA TILEMAP_UPDATE_TILE_COUNT
    case 0xF333: c.execute<0x8D>(0x00A180, 3); return true;
    // src/unknown/C3/C3F705.asm:103 LDX @LOCAL00
    case 0xF336: c.execute<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3F705.asm:104 STX TILEMAP_UPDATE_TILE_WIDTH
    case 0xF338: c.execute<0x8E>(0x00A184, 3); return true;
    // src/unknown/C3/C3F705.asm:105 JSR UNKNOWN_C3F5F9
    case 0xF33B: c.execute<0x20>(0x00F13E, 3); return true;
    // include/macros.asm:25 PLD
    case 0xF33E: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xF33F: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xF340: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xF342: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xF343: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xF344: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3F344.
    case 0xF346: c.execute<0xFF>(0x68A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xF347: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xF348: if (c.p & 0x20) c.execute<0xA9>(0x000068, 2); else c.execute<0xA9>(0x00D468, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3F348.
    case 0xF34A: c.execute<0xD4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xF34B: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xC3F34A.
    case 0xF34C: c.execute<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xF34D: if (c.p & 0x20) c.execute<0xA9>(0x0000EF, 2); else c.execute<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3F34D.
    case 0xF34F: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xF350: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3F7FB.asm:9 LDX #31
    case 0xF352: if (c.p & 0x10) c.execute<0xA2>(0x00001F, 2); else c.execute<0xA2>(0x00001F, 3); return true;
    // src/unknown/C3/C3F7FB.asm:9 LDX #31
    // Overlapping static entry reached from 0xC3F352.
    case 0xF354: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F7FB.asm:10 LDA #926
    case 0xF355: if (c.p & 0x20) c.execute<0xA9>(0x00009E, 2); else c.execute<0xA9>(0x00039E, 3); return true;
    // src/unknown/C3/C3F7FB.asm:10 LDA #926
    // Overlapping static entry reached from 0xC3F355.
    case 0xF357: c.execute<0x03>(0x000022, 2); return true;
    // src/unknown/C3/C3F7FB.asm:11 JSL UNKNOWN_C3F705
    case 0xF358: c.execute<0x22>(0xC3F24A, 4); return true;
    // src/unknown/C3/C3F7FB.asm:11 JSL UNKNOWN_C3F705
    // Overlapping static entry reached from 0xC3F357.
    case 0xF359: c.execute<0x4A>(0x000000, 1); return true;
    // src/unknown/C3/C3F7FB.asm:11 JSL UNKNOWN_C3F705
    // Overlapping static entry reached from 0xC3F359.
    case 0xF35A: c.execute<0xF2>(0x0000C3, 2); return true;
    // include/macros.asm:25 PLD
    case 0xF35C: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xF35D: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xF4C6: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xF4C8: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xF4C9: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xF4CA: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xF4CB: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3F4CB.
    case 0xF4CD: c.execute<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xF4CE: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xF4CF: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:9 STA @VIRTUAL02
    case 0xF4D0: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC3F4CD.
    case 0xF4D1: c.execute<0x02>(0x0000C9, 2); return true;
    // src/unknown/C3/C3F981.asm:10 CMP #35
    case 0xF4D2: if (c.p & 0x20) c.execute<0xC9>(0x000023, 2); else c.execute<0xC9>(0x000023, 3); return true;
    // src/unknown/C3/C3F981.asm:10 CMP #35
    // Overlapping static entry reached from 0xC3F4D2.
    case 0xF4D4: c.execute<0x00>(0x0000B0, 2); return true;
    // src/unknown/C3/C3F981.asm:11 BCS @UNKNOWN0
    case 0xF4D5: c.execute<0xB0>(0x000009, 2); return true;
    // src/unknown/C3/C3F981.asm:12 LDA @VIRTUAL02
    case 0xF4D7: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:13 JSL SHOW_PSI_ANIMATION
    case 0xF4D9: c.execute<0x22>(0xC2E06B, 4); return true;
    // src/unknown/C3/C3F981.asm:14 JMP @UNKNOWN8
    case 0xF4DD: c.execute<0x4C>(0x00F60C, 3); return true;
    // src/unknown/C3/C3F981.asm:16 LDA @VIRTUAL02
    case 0xF4E0: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:17 CMP #46
    case 0xF4E2: if (c.p & 0x20) c.execute<0xC9>(0x00002E, 2); else c.execute<0xC9>(0x00002E, 3); return true;
    // src/unknown/C3/C3F981.asm:17 CMP #46
    // Overlapping static entry reached from 0xC3F4E2.
    case 0xF4E4: c.execute<0x00>(0x0000B0, 2); return true;
    // src/unknown/C3/C3F981.asm:18 BCS @UNKNOWN1
    case 0xF4E5: c.execute<0xB0>(0x00006D, 2); return true;
    // src/unknown/C3/C3F981.asm:19 JSL UNKNOWN_C2DE0F
    case 0xF4E7: c.execute<0x22>(0xC2DD84, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xF4EB: if (c.p & 0x20) c.execute<0xA9>(0x000096, 2); else c.execute<0xA9>(0x00F496, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3F4EB.
    case 0xF4ED: c.execute<0xF4>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    case 0xF4EE: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xF4F0: if (c.p & 0x20) c.execute<0xA9>(0x0000C3, 2); else c.execute<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3F4F0.
    case 0xF4F2: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xF4F3: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F981.asm:21 LDA @VIRTUAL02
    case 0xF4F5: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:22 SEC
    case 0xF4F7: c.execute<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:23 SBC #35
    case 0xF4F8: if (c.p & 0x20) c.execute<0xE9>(0x000023, 2); else c.execute<0xE9>(0x000023, 3); return true;
    // src/unknown/C3/C3F981.asm:23 SBC #35
    // Overlapping static entry reached from 0xC3F4F8.
    case 0xF4FA: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:522 STA scratch
    case 0xF4FB: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    case 0xF4FD: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    case 0xF4FE: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3F981.asm:25 STA @LOCAL01
    case 0xF500: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3F981.asm:26 INC
    case 0xF502: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:27 INC
    case 0xF503: c.execute<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    case 0xF504: c.execute<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    case 0xF506: c.execute<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    case 0xF508: c.execute<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    case 0xF50A: c.execute<0x86>(0x00000C, 2); return true;
    // src/unknown/C3/C3F981.asm:29 CLC
    case 0xF50C: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:30 ADC @VIRTUAL0A
    case 0xF50D: c.execute<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:31 STA @VIRTUAL0A
    case 0xF50F: c.execute<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:32 LDA [@VIRTUAL0A]
    case 0xF511: c.execute<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:33 AND #$00FF
    case 0xF513: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F981.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC3F513.
    case 0xF515: c.execute<0x00>(0x0000A8, 2); return true;
    // src/unknown/C3/C3F981.asm:34 TAY
    case 0xF516: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:35 LDA @LOCAL01
    case 0xF517: c.execute<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3F981.asm:36 INC
    case 0xF519: c.execute<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    case 0xF51A: c.execute<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    case 0xF51C: c.execute<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    case 0xF51E: c.execute<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    case 0xF520: c.execute<0x86>(0x00000C, 2); return true;
    // src/unknown/C3/C3F981.asm:38 CLC
    case 0xF522: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:39 ADC @VIRTUAL0A
    case 0xF523: c.execute<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:40 STA @VIRTUAL0A
    case 0xF525: c.execute<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:41 LDA [@VIRTUAL0A]
    case 0xF527: c.execute<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:42 AND #$00FF
    case 0xF529: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F981.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC3F529.
    case 0xF52B: c.execute<0x00>(0x0000AA, 2); return true;
    // src/unknown/C3/C3F981.asm:43 TAX
    case 0xF52C: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:44 LDA @LOCAL01
    case 0xF52D: c.execute<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3F981.asm:45 CLC
    case 0xF52F: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:46 ADC @VIRTUAL06
    case 0xF530: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3F981.asm:47 STA @VIRTUAL06
    case 0xF532: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3F981.asm:48 LDA [@VIRTUAL06]
    case 0xF534: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3F981.asm:49 AND #$00FF
    case 0xF536: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F981.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC3F536.
    case 0xF538: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:50 JSL SET_COLDATA
    case 0xF539: c.execute<0x22>(0xC0AFF9, 4); return true;
    // src/unknown/C3/C3F981.asm:51 LDX #$3F
    case 0xF53D: if (c.p & 0x10) c.execute<0xA2>(0x00003F, 2); else c.execute<0xA2>(0x00003F, 3); return true;
    // src/unknown/C3/C3F981.asm:51 LDX #$3F
    // Overlapping static entry reached from 0xC3F53D.
    case 0xF53F: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F981.asm:52 LDA #$10
    case 0xF540: if (c.p & 0x20) c.execute<0xA9>(0x000010, 2); else c.execute<0xA9>(0x000010, 3); return true;
    // src/unknown/C3/C3F981.asm:52 LDA #$10
    // Overlapping static entry reached from 0xC3F540.
    case 0xF542: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:53 JSL SET_COLOUR_ADDSUB_MODE
    case 0xF543: c.execute<0x22>(0xC0B018, 4); return true;
    // src/unknown/C3/C3F981.asm:54 LDX #7
    case 0xF547: if (c.p & 0x10) c.execute<0xA2>(0x000007, 2); else c.execute<0xA2>(0x000007, 3); return true;
    // src/unknown/C3/C3F981.asm:54 LDX #7
    // Overlapping static entry reached from 0xC3F547.
    case 0xF549: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F981.asm:55 LDA #5
    case 0xF54A: if (c.p & 0x20) c.execute<0xA9>(0x000005, 2); else c.execute<0xA9>(0x000005, 3); return true;
    // src/unknown/C3/C3F981.asm:55 LDA #5
    // Overlapping static entry reached from 0xC3F54A.
    case 0xF54C: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:56 JSL UNKNOWN_C4A67E
    case 0xF54D: c.execute<0x22>(0xC47AE7, 4); return true;
    // src/unknown/C3/C3F981.asm:57 JMP @UNKNOWN8
    case 0xF551: c.execute<0x4C>(0x00F60C, 3); return true;
    // src/unknown/C3/C3F981.asm:59 LDA @VIRTUAL02
    case 0xF554: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:60 CMP #49
    case 0xF556: if (c.p & 0x20) c.execute<0xC9>(0x000031, 2); else c.execute<0xC9>(0x000031, 3); return true;
    // src/unknown/C3/C3F981.asm:60 CMP #49
    // Overlapping static entry reached from 0xC3F556.
    case 0xF558: c.execute<0x00>(0x0000B0, 2); return true;
    // src/unknown/C3/C3F981.asm:61 BCS @UNKNOWN5
    case 0xF559: c.execute<0xB0>(0x00002A, 2); return true;
    // src/unknown/C3/C3F981.asm:62 LDA @VIRTUAL02
    case 0xF55B: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:63 INC
    case 0xF55D: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:64 CMP #47
    case 0xF55E: if (c.p & 0x20) c.execute<0xC9>(0x00002F, 2); else c.execute<0xC9>(0x00002F, 3); return true;
    // src/unknown/C3/C3F981.asm:64 CMP #47
    // Overlapping static entry reached from 0xC3F55E.
    case 0xF560: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3F981.asm:65 BEQ @UNKNOWN3
    case 0xF561: c.execute<0xF0>(0x000010, 2); return true;
    // src/unknown/C3/C3F981.asm:66 CMP #48
    case 0xF563: if (c.p & 0x20) c.execute<0xC9>(0x000030, 2); else c.execute<0xC9>(0x000030, 3); return true;
    // src/unknown/C3/C3F981.asm:66 CMP #48
    // Overlapping static entry reached from 0xC3F563.
    case 0xF565: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3F981.asm:67 BEQ @UNKNOWN4
    case 0xF566: c.execute<0xF0>(0x000014, 2); return true;
    // src/unknown/C3/C3F981.asm:68 CMP #49
    case 0xF568: if (c.p & 0x20) c.execute<0xC9>(0x000031, 2); else c.execute<0xC9>(0x000031, 3); return true;
    // src/unknown/C3/C3F981.asm:68 CMP #49
    // Overlapping static entry reached from 0xC3F568.
    case 0xF56A: c.execute<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    case 0xF56B: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xF56D: c.execute<0x4C>(0x00F60C, 3); return true;
    // src/unknown/C3/C3F981.asm:70 JMP @UNKNOWN8
    case 0xF570: c.execute<0x4C>(0x00F60C, 3); return true;
    // src/unknown/C3/C3F981.asm:72 LDA #144
    case 0xF573: if (c.p & 0x20) c.execute<0xA9>(0x000090, 2); else c.execute<0xA9>(0x000090, 3); return true;
    // src/unknown/C3/C3F981.asm:72 LDA #144
    // Overlapping static entry reached from 0xC3F573.
    case 0xF575: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/C3/C3F981.asm:73 STA WOBBLE_DURATION
    case 0xF576: c.execute<0x8D>(0x00AF67, 3); return true;
    // src/unknown/C3/C3F981.asm:74 JMP @UNKNOWN8
    case 0xF579: c.execute<0x4C>(0x00F60C, 3); return true;
    // src/unknown/C3/C3F981.asm:76 LDA #300
    case 0xF57C: if (c.p & 0x20) c.execute<0xA9>(0x00002C, 2); else c.execute<0xA9>(0x00012C, 3); return true;
    // src/unknown/C3/C3F981.asm:76 LDA #300
    // Overlapping static entry reached from 0xC3F57C.
    case 0xF57E: c.execute<0x01>(0x00008D, 2); return true;
    // src/unknown/C3/C3F981.asm:77 STA SHAKE_DURATION
    case 0xF57F: c.execute<0x8D>(0x00AF69, 3); return true;
    // src/unknown/C3/C3F981.asm:77 STA SHAKE_DURATION
    // Overlapping static entry reached from 0xC3F57E.
    case 0xF580: if (c.p & 0x20) c.execute<0x69>(0x0000AF, 2); else c.execute<0x69>(0x004CAF, 3); return true;
    // src/unknown/C3/C3F981.asm:78 JMP @UNKNOWN8
    case 0xF582: c.execute<0x4C>(0x00F60C, 3); return true;
    // src/unknown/C3/C3F981.asm:78 JMP @UNKNOWN8
    // Overlapping static entry reached from 0xC3F580.
    case 0xF583: c.execute<0x0C>(0x00A5F6, 3); return true;
    // src/unknown/C3/C3F981.asm:80 LDA @VIRTUAL02
    case 0xF585: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:80 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC3F583.
    case 0xF586: c.execute<0x02>(0x0000C9, 2); return true;
    // src/unknown/C3/C3F981.asm:81 CMP #54
    case 0xF587: if (c.p & 0x20) c.execute<0xC9>(0x000036, 2); else c.execute<0xC9>(0x000036, 3); return true;
    // src/unknown/C3/C3F981.asm:81 CMP #54
    // Overlapping static entry reached from 0xC3F587.
    case 0xF589: c.execute<0x00>(0x000090, 2); return true;
    // src/unknown/C3/C3F981.asm:82 BCC @UNKNOWN6
    case 0xF58A: c.execute<0x90>(0x000003, 2); return true;
    // src/unknown/C3/C3F981.asm:83 JMP @UNKNOWN8
    case 0xF58C: c.execute<0x4C>(0x00F60C, 3); return true;
    // src/unknown/C3/C3F981.asm:85 JSL UNKNOWN_C2DE0F
    case 0xF58F: c.execute<0x22>(0xC2DD84, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xF593: if (c.p & 0x20) c.execute<0xA9>(0x0000B7, 2); else c.execute<0xA9>(0x00F4B7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3F593.
    case 0xF595: c.execute<0xF4>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    case 0xF596: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xF598: if (c.p & 0x20) c.execute<0xA9>(0x0000C3, 2); else c.execute<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3F598.
    case 0xF59A: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xF59B: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F981.asm:87 LDA @VIRTUAL02
    case 0xF59D: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:88 SEC
    case 0xF59F: c.execute<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:89 SBC #49
    case 0xF5A0: if (c.p & 0x20) c.execute<0xE9>(0x000031, 2); else c.execute<0xE9>(0x000031, 3); return true;
    // src/unknown/C3/C3F981.asm:89 SBC #49
    // Overlapping static entry reached from 0xC3F5A0.
    case 0xF5A2: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F981.asm:90 STA @VIRTUAL04
    case 0xF5A3: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F981.asm:91 ASL
    case 0xF5A5: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:92 ADC @VIRTUAL04
    case 0xF5A6: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3F981.asm:93 STA @LOCAL00
    case 0xF5A8: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3F981.asm:94 INC
    case 0xF5AA: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:95 INC
    case 0xF5AB: c.execute<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    case 0xF5AC: c.execute<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    case 0xF5AE: c.execute<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    case 0xF5B0: c.execute<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    case 0xF5B2: c.execute<0x86>(0x00000C, 2); return true;
    // src/unknown/C3/C3F981.asm:97 CLC
    case 0xF5B4: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:98 ADC @VIRTUAL0A
    case 0xF5B5: c.execute<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:99 STA @VIRTUAL0A
    case 0xF5B7: c.execute<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:100 LDA [@VIRTUAL0A]
    case 0xF5B9: c.execute<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:101 AND #$00FF
    case 0xF5BB: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F981.asm:101 AND #$00FF
    // Overlapping static entry reached from 0xC3F5BB.
    case 0xF5BD: c.execute<0x00>(0x0000A8, 2); return true;
    // src/unknown/C3/C3F981.asm:102 TAY
    case 0xF5BE: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:103 LDA @LOCAL00
    case 0xF5BF: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3F981.asm:104 INC
    case 0xF5C1: c.execute<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    case 0xF5C2: c.execute<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    case 0xF5C4: c.execute<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    case 0xF5C6: c.execute<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    case 0xF5C8: c.execute<0x86>(0x00000C, 2); return true;
    // src/unknown/C3/C3F981.asm:106 CLC
    case 0xF5CA: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:107 ADC @VIRTUAL0A
    case 0xF5CB: c.execute<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:108 STA @VIRTUAL0A
    case 0xF5CD: c.execute<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:109 LDA [@VIRTUAL0A]
    case 0xF5CF: c.execute<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:110 AND #$00FF
    case 0xF5D1: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F981.asm:110 AND #$00FF
    // Overlapping static entry reached from 0xC3F5D1.
    case 0xF5D3: c.execute<0x00>(0x0000AA, 2); return true;
    // src/unknown/C3/C3F981.asm:111 TAX
    case 0xF5D4: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:112 LDA @LOCAL00
    case 0xF5D5: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3F981.asm:113 CLC
    case 0xF5D7: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:114 ADC @VIRTUAL06
    case 0xF5D8: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3F981.asm:115 STA @VIRTUAL06
    case 0xF5DA: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3F981.asm:116 LDA [@VIRTUAL06]
    case 0xF5DC: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3F981.asm:117 AND #$00FF
    case 0xF5DE: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F981.asm:117 AND #$00FF
    // Overlapping static entry reached from 0xC3F5DE.
    case 0xF5E0: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:118 JSL SET_COLDATA
    case 0xF5E1: c.execute<0x22>(0xC0AFF9, 4); return true;
    // src/unknown/C3/C3F981.asm:119 LDX #$3F
    case 0xF5E5: if (c.p & 0x10) c.execute<0xA2>(0x00003F, 2); else c.execute<0xA2>(0x00003F, 3); return true;
    // src/unknown/C3/C3F981.asm:119 LDX #$3F
    // Overlapping static entry reached from 0xC3F5E5.
    case 0xF5E7: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F981.asm:120 LDA #$10
    case 0xF5E8: if (c.p & 0x20) c.execute<0xA9>(0x000010, 2); else c.execute<0xA9>(0x000010, 3); return true;
    // src/unknown/C3/C3F981.asm:120 LDA #$10
    // Overlapping static entry reached from 0xC3F5E8.
    case 0xF5EA: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:121 JSL SET_COLOUR_ADDSUB_MODE
    case 0xF5EB: c.execute<0x22>(0xC0B018, 4); return true;
    // src/unknown/C3/C3F981.asm:122 LDA @VIRTUAL02
    case 0xF5EF: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:123 CMP #53
    case 0xF5F1: if (c.p & 0x20) c.execute<0xC9>(0x000035, 2); else c.execute<0xC9>(0x000035, 3); return true;
    // src/unknown/C3/C3F981.asm:123 CMP #53
    // Overlapping static entry reached from 0xC3F5F1.
    case 0xF5F3: c.execute<0x00>(0x0000B0, 2); return true;
    // src/unknown/C3/C3F981.asm:124 BCS @UNKNOWN7
    case 0xF5F4: c.execute<0xB0>(0x00000C, 2); return true;
    // src/unknown/C3/C3F981.asm:125 LDX #5
    case 0xF5F6: if (c.p & 0x10) c.execute<0xA2>(0x000005, 2); else c.execute<0xA2>(0x000005, 3); return true;
    // src/unknown/C3/C3F981.asm:125 LDX #5
    // Overlapping static entry reached from 0xC3F5F6.
    case 0xF5F8: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F981.asm:126 LDA #4
    case 0xF5F9: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/unknown/C3/C3F981.asm:126 LDA #4
    // Overlapping static entry reached from 0xC3F5F9.
    case 0xF5FB: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:127 JSL UNKNOWN_C4A67E
    case 0xF5FC: c.execute<0x22>(0xC47AE7, 4); return true;
    // src/unknown/C3/C3F981.asm:128 BRA @UNKNOWN8
    case 0xF600: c.execute<0x80>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:130 LDX #4
    case 0xF602: if (c.p & 0x10) c.execute<0xA2>(0x000004, 2); else c.execute<0xA2>(0x000004, 3); return true;
    // src/unknown/C3/C3F981.asm:130 LDX #4
    // Overlapping static entry reached from 0xC3F602.
    case 0xF604: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F981.asm:131 LDA #2
    case 0xF605: if (c.p & 0x20) c.execute<0xA9>(0x000002, 2); else c.execute<0xA9>(0x000002, 3); return true;
    // src/unknown/C3/C3F981.asm:131 LDA #2
    // Overlapping static entry reached from 0xC3F605.
    case 0xF607: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:132 JSL UNKNOWN_C4A67E
    case 0xF608: c.execute<0x22>(0xC47AE7, 4); return true;
    // include/macros.asm:25 PLD
    case 0xF60C: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xF60D: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xF60E: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xF610: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xF611: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xF612: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xF613: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3F613.
    case 0xF615: c.execute<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xF616: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xF617: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3FAC9.asm:10 TXY
    case 0xF618: c.execute<0x9B>(0x000000, 1); return true;
    // src/unknown/C3/C3FAC9.asm:11 TAX
    case 0xF619: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3FAC9.asm:12 STX @LOCAL00
    case 0xF61A: c.execute<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3FAC9.asm:13 LDX CURRENT_TARGET
    case 0xF61C: c.execute<0xAE>(0x00AB74, 3); return true;
    // src/unknown/C3/C3FAC9.asm:14 LDA a:battler::npc_id,X
    case 0xF61F: c.execute<0xBD>(0x00000F, 3); return true;
    // src/unknown/C3/C3FAC9.asm:15 AND #$00FF
    case 0xF622: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3FAC9.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC3F622.
    case 0xF624: c.execute<0x00>(0x0000C9, 2); return true;
    // src/unknown/C3/C3FAC9.asm:16 CMP #ENEMY::TINY_LIL_GHOST
    case 0xF625: if (c.p & 0x20) c.execute<0xC9>(0x0000D5, 2); else c.execute<0xC9>(0x0000D5, 3); return true;
    // src/unknown/C3/C3FAC9.asm:16 CMP #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC3F625.
    case 0xF627: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3FAC9.asm:17 BNE @UNKNOWN0
    case 0xF628: c.execute<0xD0>(0x000005, 2); return true;
    // src/unknown/C3/C3FAC9.asm:18 LDA #TRUE
    case 0xF62A: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3FAC9.asm:18 LDA #TRUE
    // Overlapping static entry reached from 0xC3F62A.
    case 0xF62C: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3FAC9.asm:19 BRA @UNKNOWN2
    case 0xF62D: c.execute<0x80>(0x00001D, 2); return true;
    // src/unknown/C3/C3FAC9.asm:21 LDX CURRENT_TARGET
    case 0xF62F: c.execute<0xAE>(0x00AB74, 3); return true;
    // src/unknown/C3/C3FAC9.asm:22 LDA a:battler::ally_or_enemy,X
    case 0xF632: c.execute<0xBD>(0x00000E, 3); return true;
    // src/unknown/C3/C3FAC9.asm:23 AND #$00FF
    case 0xF635: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3FAC9.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC3F635.
    case 0xF637: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3FAC9.asm:24 BNE @UNKNOWN1
    case 0xF638: c.execute<0xD0>(0x00000B, 2); return true;
    // src/unknown/C3/C3FAC9.asm:25 LDX @LOCAL00
    case 0xF63A: c.execute<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3FAC9.asm:26 TXA
    case 0xF63C: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3FAC9.asm:27 JSR UNKNOWN_C3F981
    case 0xF63D: c.execute<0x20>(0x00F4C6, 3); return true;
    // src/unknown/C3/C3FAC9.asm:28 LDA #FALSE
    case 0xF640: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3FAC9.asm:28 LDA #FALSE
    // Overlapping static entry reached from 0xC3F640.
    case 0xF642: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3FAC9.asm:29 BRA @UNKNOWN2
    case 0xF643: c.execute<0x80>(0x000007, 2); return true;
    // src/unknown/C3/C3FAC9.asm:31 TYA
    case 0xF645: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3FAC9.asm:32 JSR UNKNOWN_C3F981
    case 0xF646: c.execute<0x20>(0x00F4C6, 3); return true;
    // src/unknown/C3/C3FAC9.asm:33 LDA #TRUE
    case 0xF649: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3FAC9.asm:33 LDA #TRUE
    // Overlapping static entry reached from 0xC3F649.
    case 0xF64B: c.execute<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    case 0xF64C: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xF64D: c.execute<0x6B>(0x000000, 1); return true;
    // src/unknown/C3/C3FB09.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xF64E: c.execute<0xC2>(0x000031, 2); return true;
    // src/unknown/C3/C3FB09.asm:4 LDX CURRENT_ATTACKER
    case 0xF650: c.execute<0xAE>(0x00AB72, 3); return true;
    // src/unknown/C3/C3FB09.asm:5 LDA __BSS_START__+14,X
    case 0xF653: c.execute<0xBD>(0x00000E, 3); return true;
    // src/unknown/C3/C3FB09.asm:6 AND #$00FF
    case 0xF656: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3FB09.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC3F656.
    case 0xF658: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3FB09.asm:7 BNE @UNKNOWN0
    case 0xF659: c.execute<0xD0>(0x000005, 2); return true;
    // src/unknown/C3/C3FB09.asm:8 LDA #$0000
    case 0xF65B: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3FB09.asm:8 LDA #$0000
    // Overlapping static entry reached from 0xC3F65B.
    case 0xF65D: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3FB09.asm:9 BRA @UNKNOWN1
    case 0xF65E: c.execute<0x80>(0x000003, 2); return true;
    // src/unknown/C3/C3FB09.asm:11 LDA #$0001
    case 0xF660: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3FB09.asm:11 LDA #$0001
    // Overlapping static entry reached from 0xC3F660.
    case 0xF662: c.execute<0x00>(0x00006B, 2); return true;
    // src/unknown/C3/C3FB09.asm:13 RTL
    case 0xF663: c.execute<0x6B>(0x000000, 1); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xF8F3: c.execute<0xC2>(0x000020, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:4 LDX #$0033
    case 0xF8F5: if (c.p & 0x10) c.execute<0xA2>(0x000033, 2); else c.execute<0xA2>(0x000033, 3); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:4 LDX #$0033
    // Overlapping static entry reached from 0xC3F8F5.
    case 0xF8F7: c.execute<0x00>(0x0000A9, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:5 LDA #$0000
    case 0xF8F8: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:5 LDA #$0000
    // Overlapping static entry reached from 0xC3F8F8.
    case 0xF8FA: c.execute<0x00>(0x000018, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:7 CLC
    case 0xF8FB: c.execute<0x18>(0x000000, 1); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:8 ADC f:CHECK_HARDWARE,X
    case 0xF8FC: c.execute<0x7F>(0xC0A0FB, 4); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:9 DEX
    case 0xF900: c.execute<0xCA>(0x000000, 1); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:10 BPL @UNKNOWN0
    case 0xF901: c.execute<0x10>(0x0000F8, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:11 SEC
    case 0xF903: c.execute<0x38>(0x000000, 1); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:12 SBC f:ANTIPIRACY_CHECKSUM_2
    case 0xF904: c.execute<0xEF>(0xC3F920, 4); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:13 BEQ @UNKNOWN3
    case 0xF908: c.execute<0xF0>(0x000015, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xF90A: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:16 LDX #$0000
    case 0xF90C: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x006000, 3); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:17 RTS
    case 0xF90E: c.execute<0x60>(0x000000, 1); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:18 LDA #$0000
    case 0xF90F: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x009F00, 3); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:20 STA f:SRAM,X
    case 0xF911: c.execute<0x9F>(0x300000, 4); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:20 STA f:SRAM,X
    // Overlapping static entry reached from 0xC3F90F.
    case 0xF912: c.execute<0x00>(0x000000, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:21 INX
    case 0xF915: c.execute<0xE8>(0x000000, 1); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:22 BPL @UNKNOWN1
    case 0xF916: c.execute<0x10>(0x0000F9, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:23 LDA #$0034
    case 0xF918: if (c.p & 0x20) c.execute<0xA9>(0x000034, 2); else c.execute<0xA9>(0x008D34, 3); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:24 STA DMA_QUEUE_INDEX
    case 0xF91A: c.execute<0x8D>(0x000000, 3); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:24 STA DMA_QUEUE_INDEX
    // Overlapping static entry reached from 0xC3F918.
    case 0xF91B: c.execute<0x00>(0x000000, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:26 BRA @UNKNOWN2
    case 0xF91D: c.execute<0x80>(0x0000FE, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:28 RTL
    case 0xF91F: c.execute<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}
} // namespace eb
