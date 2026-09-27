// Generated from ca65 instruction spans. Do not edit.
#include "eb/cpu.hpp"
#include <cstdint>

namespace eb::jp {
bool translated_bank_ef(Cpu& c, std::uint16_t offset) {
    switch (offset) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xBE82: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xBE84: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xBE85: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xBE86: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xBE87: if (c.p & 0x20) c.execute<0x69>(0x0000EA, 2); else c.execute<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFBE87.
    case 0xBE89: c.execute<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xBE8A: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xBE8B: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:13 STY @LOCAL03
    case 0xBE8C: c.execute<0x84>(0x000014, 2); return true;
    // src/unknown/EF/EFD56F.asm:13 STY @LOCAL03
    // Overlapping static entry reached from 0xEFBE89.
    case 0xBE8D: c.execute<0x14>(0x000086, 2); return true;
    // src/unknown/EF/EFD56F.asm:14 STX @VIRTUAL04
    case 0xBE8E: c.execute<0x86>(0x000004, 2); return true;
    // src/unknown/EF/EFD56F.asm:14 STX @VIRTUAL04
    // Overlapping static entry reached from 0xEFBE8D.
    case 0xBE8F: c.execute<0x04>(0x000085, 2); return true;
    // src/unknown/EF/EFD56F.asm:15 STA @VIRTUAL02
    case 0xBE90: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFD56F.asm:15 STA @VIRTUAL02
    // Overlapping static entry reached from 0xEFBE8F.
    case 0xBE91: c.execute<0x02>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD56F.asm:16 LDA #04
    case 0xBE92: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EFD56F.asm:16 LDA #04
    // Overlapping static entry reached from 0xEFBE92.
    case 0xBE94: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFD56F.asm:17 JSL SBRK
    case 0xBE95: c.execute<0x22>(0xC086D7, 4); return true;
    // src/unknown/EF/EFD56F.asm:18 TAX
    case 0xBE99: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:19 LDY @LOCAL03
    case 0xBE9A: c.execute<0xA4>(0x000014, 2); return true;
    // src/unknown/EF/EFD56F.asm:20 TYA
    case 0xBE9C: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:21 LSR
    case 0xBE9D: c.execute<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:22 LSR
    case 0xBE9E: c.execute<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:23 LSR
    case 0xBE9F: c.execute<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:24 LSR
    case 0xBEA0: c.execute<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:25 CMP #10
    case 0xBEA1: if (c.p & 0x20) c.execute<0xC9>(0x00000A, 2); else c.execute<0xC9>(0x00000A, 3); return true;
    // src/unknown/EF/EFD56F.asm:25 CMP #10
    // Overlapping static entry reached from 0xEFBEA1.
    case 0xBEA3: c.execute<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EFD56F.asm:26 BCC @UNKNOWN0
    case 0xBEA4: c.execute<0x90>(0x000004, 2); return true;
    // src/unknown/EF/EFD56F.asm:27 CLC
    case 0xBEA6: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:28 ADC #7
    case 0xBEA7: if (c.p & 0x20) c.execute<0x69>(0x000007, 2); else c.execute<0x69>(0x000007, 3); return true;
    // src/unknown/EF/EFD56F.asm:28 ADC #7
    // Overlapping static entry reached from 0xEFBEA7.
    case 0xBEA9: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EFD56F.asm:30 CLC
    case 0xBEAA: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:31 ADC #$2030
    case 0xBEAB: if (c.p & 0x20) c.execute<0x69>(0x000030, 2); else c.execute<0x69>(0x002030, 3); return true;
    // src/unknown/EF/EFD56F.asm:31 ADC #$2030
    // Overlapping static entry reached from 0xEFBEAB.
    case 0xBEAD: c.execute<0x20>(0x00009D, 3); return true;
    // src/unknown/EF/EFD56F.asm:32 STA __BSS_START__,X
    case 0xBEAE: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFD56F.asm:32 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFBEAD.
    case 0xBEB0: c.execute<0x00>(0x000098, 2); return true;
    // src/unknown/EF/EFD56F.asm:33 TYA
    case 0xBEB1: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:34 AND #$000F
    case 0xBEB2: if (c.p & 0x20) c.execute<0x29>(0x00000F, 2); else c.execute<0x29>(0x00000F, 3); return true;
    // src/unknown/EF/EFD56F.asm:34 AND #$000F
    // Overlapping static entry reached from 0xEFBEB2.
    case 0xBEB4: c.execute<0x00>(0x0000C9, 2); return true;
    // src/unknown/EF/EFD56F.asm:35 CMP #10
    case 0xBEB5: if (c.p & 0x20) c.execute<0xC9>(0x00000A, 2); else c.execute<0xC9>(0x00000A, 3); return true;
    // src/unknown/EF/EFD56F.asm:35 CMP #10
    // Overlapping static entry reached from 0xEFBEB5.
    case 0xBEB7: c.execute<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EFD56F.asm:36 BCC @UNKNOWN1
    case 0xBEB8: c.execute<0x90>(0x000004, 2); return true;
    // src/unknown/EF/EFD56F.asm:37 CLC
    case 0xBEBA: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:38 ADC #7
    case 0xBEBB: if (c.p & 0x20) c.execute<0x69>(0x000007, 2); else c.execute<0x69>(0x000007, 3); return true;
    // src/unknown/EF/EFD56F.asm:38 ADC #7
    // Overlapping static entry reached from 0xEFBEBB.
    case 0xBEBD: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EFD56F.asm:40 CLC
    case 0xBEBE: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:41 ADC #$2030
    case 0xBEBF: if (c.p & 0x20) c.execute<0x69>(0x000030, 2); else c.execute<0x69>(0x002030, 3); return true;
    // src/unknown/EF/EFD56F.asm:41 ADC #$2030
    // Overlapping static entry reached from 0xEFBEBF.
    case 0xBEC1: c.execute<0x20>(0x00029D, 3); return true;
    // src/unknown/EF/EFD56F.asm:42 STA __BSS_START__+2,X
    case 0xBEC2: c.execute<0x9D>(0x000002, 3); return true;
    // src/unknown/EF/EFD56F.asm:42 STA __BSS_START__+2,X
    // Overlapping static entry reached from 0xEFBEC1.
    case 0xBEC4: c.execute<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EFD56F.asm:43 LDA @VIRTUAL04
    case 0xBEC5: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFD56F.asm:44 ASL
    case 0xBEC7: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:45 ASL
    case 0xBEC8: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:46 ASL
    case 0xBEC9: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:47 ASL
    case 0xBECA: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:48 ASL
    case 0xBECB: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:49 CLC
    case 0xBECC: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:50 ADC @VIRTUAL02
    case 0xBECD: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/EF/EFD56F.asm:51 CLC
    case 0xBECF: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:52 ADC #VRAM::TEXT_LAYER_TILEMAP
    case 0xBED0: if (c.p & 0x20) c.execute<0x69>(0x000000, 2); else c.execute<0x69>(0x007C00, 3); return true;
    // src/unknown/EF/EFD56F.asm:52 ADC #VRAM::TEXT_LAYER_TILEMAP
    // Overlapping static entry reached from 0xEFBED0.
    case 0xBED2: c.execute<0x7C>(0x001285, 3); return true;
    // src/unknown/EF/EFD56F.asm:53 STA @LOCAL02
    case 0xBED3: c.execute<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EFD56F.asm:54 LDA #$007E
    case 0xBED5: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/unknown/EF/EFD56F.asm:54 LDA #$007E
    // Overlapping static entry reached from 0xEFBED5.
    case 0xBED7: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFD56F.asm:55 STA @LOCAL00
    case 0xBED8: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFD56F.asm:56 LDA @LOCAL02
    case 0xBEDA: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EFD56F.asm:57 STA @LOCAL01
    case 0xBEDC: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD56F.asm:58 TXY
    case 0xBEDE: c.execute<0x9B>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:59 LDX #4
    case 0xBEDF: if (c.p & 0x10) c.execute<0xA2>(0x000004, 2); else c.execute<0xA2>(0x000004, 3); return true;
    // src/unknown/EF/EFD56F.asm:59 LDX #4
    // Overlapping static entry reached from 0xEFBEDF.
    case 0xBEE1: c.execute<0x00>(0x0000E2, 2); return true;
    // src/unknown/EF/EFD56F.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xBEE2: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFD56F.asm:61 LDA #0
    case 0xBEE4: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/unknown/EF/EFD56F.asm:62 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xBEE6: c.execute<0x22>(0xC0862E, 4); return true;
    // src/unknown/EF/EFD56F.asm:62 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFBEE4.
    case 0xBEE7: c.execute<0x2E>(0x00C086, 3); return true;
    // include/macros.asm:25 PLD
    case 0xBEEA: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xBEEB: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xBEEC: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xBEEE: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xBEEF: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xBEF0: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xBEF1: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFBEF1.
    case 0xBEF3: c.execute<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xBEF4: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xBEF5: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9-jp.asm:8 STA @VIRTUAL02
    case 0xBEF6: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:8 STA @VIRTUAL02
    // Overlapping static entry reached from 0xEFBEF3.
    case 0xBEF7: c.execute<0x02>(0x0000A0, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:9 LDY #0
    case 0xBEF8: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:9 LDY #0
    // Overlapping static entry reached from 0xEFBEF8.
    case 0xBEFA: c.execute<0x00>(0x0000A2, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:10 LDX #1
    case 0xBEFB: if (c.p & 0x10) c.execute<0xA2>(0x000001, 2); else c.execute<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:10 LDX #1
    // Overlapping static entry reached from 0xEFBEFB.
    case 0xBEFD: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:11 LDA #4
    case 0xBEFE: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:11 LDA #4
    // Overlapping static entry reached from 0xEFBEFE.
    case 0xBF00: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:12 JSL FADE_OUT_WITH_MOSAIC
    case 0xBF01: c.execute<0x22>(0xC0880A, 4); return true;
    // src/unknown/EF/EFD5D9-jp.asm:13 JSL UNKNOWN_C0927C
    case 0xBF05: c.execute<0x22>(0xC0925E, 4); return true;
    // src/unknown/EF/EFD5D9-jp.asm:14 JSR UNKNOWN_EFDA05
    case 0xBF09: c.execute<0x20>(0x00C31F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xBF0C: if (c.p & 0x20) c.execute<0xA9>(0x00002E, 2); else c.execute<0xA9>(0x00BE2E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFBF0C.
    case 0xBF0E: c.execute<0xBE>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    case 0xBF0F: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xBF11: if (c.p & 0x20) c.execute<0xA9>(0x0000EF, 2); else c.execute<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFBF11.
    case 0xBF13: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xBF14: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xBF16: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xBF18: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xBF1A: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xBF1C: c.execute<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xBF1E: c.execute<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xBF20: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xBF22: c.execute<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xBF24: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:18 LDX #5
    case 0xBF26: if (c.p & 0x10) c.execute<0xA2>(0x000005, 2); else c.execute<0xA2>(0x000005, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:18 LDX #5
    // Overlapping static entry reached from 0xEFBF26.
    case 0xBF28: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:19 LDA #10
    case 0xBF29: if (c.p & 0x20) c.execute<0xA9>(0x00000A, 2); else c.execute<0xA9>(0x00000A, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:19 LDA #10
    // Overlapping static entry reached from 0xEFBF29.
    case 0xBF2B: c.execute<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:20 JSR UNKNOWN_EFDABD
    case 0xBF2C: c.execute<0x20>(0x00C3D7, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:21 LDA #14
    case 0xBF2F: if (c.p & 0x20) c.execute<0xA9>(0x00000E, 2); else c.execute<0xA9>(0x00000E, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:21 LDA #14
    // Overlapping static entry reached from 0xEFBF2F.
    case 0xBF31: c.execute<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    case 0xBF32: c.execute<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    case 0xBF34: c.execute<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    case 0xBF36: c.execute<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    case 0xBF38: c.execute<0x86>(0x00000C, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:23 CLC
    case 0xBF3A: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9-jp.asm:24 ADC @VIRTUAL0A
    case 0xBF3B: c.execute<0x65>(0x00000A, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:25 STA @VIRTUAL0A
    case 0xBF3D: c.execute<0x85>(0x00000A, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:26 STA @LOCAL00
    case 0xBF3F: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:27 LDA @VIRTUAL0A+2
    case 0xBF41: c.execute<0xA5>(0x00000C, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:28 STA @LOCAL00+2
    case 0xBF43: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:29 LDX #10
    case 0xBF45: if (c.p & 0x10) c.execute<0xA2>(0x00000A, 2); else c.execute<0xA2>(0x00000A, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:29 LDX #10
    // Overlapping static entry reached from 0xEFBF45.
    case 0xBF47: c.execute<0x00>(0x00008A, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:30 TXA
    case 0xBF48: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9-jp.asm:31 JSR UNKNOWN_EFDABD
    case 0xBF49: c.execute<0x20>(0x00C3D7, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:32 LDA #28
    case 0xBF4C: if (c.p & 0x20) c.execute<0xA9>(0x00001C, 2); else c.execute<0xA9>(0x00001C, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:32 LDA #28
    // Overlapping static entry reached from 0xEFBF4C.
    case 0xBF4E: c.execute<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    case 0xBF4F: c.execute<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    case 0xBF51: c.execute<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    case 0xBF53: c.execute<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    case 0xBF55: c.execute<0x86>(0x00000C, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:34 CLC
    case 0xBF57: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9-jp.asm:35 ADC @VIRTUAL0A
    case 0xBF58: c.execute<0x65>(0x00000A, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:36 STA @VIRTUAL0A
    case 0xBF5A: c.execute<0x85>(0x00000A, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:37 STA @LOCAL00
    case 0xBF5C: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:38 LDA @VIRTUAL0A+2
    case 0xBF5E: c.execute<0xA5>(0x00000C, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:39 STA @LOCAL00+2
    case 0xBF60: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:40 LDX #12
    case 0xBF62: if (c.p & 0x10) c.execute<0xA2>(0x00000C, 2); else c.execute<0xA2>(0x00000C, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:40 LDX #12
    // Overlapping static entry reached from 0xEFBF62.
    case 0xBF64: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:41 LDA #10
    case 0xBF65: if (c.p & 0x20) c.execute<0xA9>(0x00000A, 2); else c.execute<0xA9>(0x00000A, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:41 LDA #10
    // Overlapping static entry reached from 0xEFBF65.
    case 0xBF67: c.execute<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:42 JSR UNKNOWN_EFDABD
    case 0xBF68: c.execute<0x20>(0x00C3D7, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:43 LDA #42
    case 0xBF6B: if (c.p & 0x20) c.execute<0xA9>(0x00002A, 2); else c.execute<0xA9>(0x00002A, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:43 LDA #42
    // Overlapping static entry reached from 0xEFBF6B.
    case 0xBF6D: c.execute<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    case 0xBF6E: c.execute<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    case 0xBF70: c.execute<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    case 0xBF72: c.execute<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    case 0xBF74: c.execute<0x86>(0x00000C, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:45 CLC
    case 0xBF76: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9-jp.asm:46 ADC @VIRTUAL0A
    case 0xBF77: c.execute<0x65>(0x00000A, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:47 STA @VIRTUAL0A
    case 0xBF79: c.execute<0x85>(0x00000A, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:48 STA @LOCAL00
    case 0xBF7B: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:49 LDA @VIRTUAL0A+2
    case 0xBF7D: c.execute<0xA5>(0x00000C, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:50 STA @LOCAL00+2
    case 0xBF7F: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:51 LDX #14
    case 0xBF81: if (c.p & 0x10) c.execute<0xA2>(0x00000E, 2); else c.execute<0xA2>(0x00000E, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:51 LDX #14
    // Overlapping static entry reached from 0xEFBF81.
    case 0xBF83: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:52 LDA #10
    case 0xBF84: if (c.p & 0x20) c.execute<0xA9>(0x00000A, 2); else c.execute<0xA9>(0x00000A, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:52 LDA #10
    // Overlapping static entry reached from 0xEFBF84.
    case 0xBF86: c.execute<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:53 JSR UNKNOWN_EFDABD
    case 0xBF87: c.execute<0x20>(0x00C3D7, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:54 LDA #56
    case 0xBF8A: if (c.p & 0x20) c.execute<0xA9>(0x000038, 2); else c.execute<0xA9>(0x000038, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:54 LDA #56
    // Overlapping static entry reached from 0xEFBF8A.
    case 0xBF8C: c.execute<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    case 0xBF8D: c.execute<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    case 0xBF8F: c.execute<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    case 0xBF91: c.execute<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    case 0xBF93: c.execute<0x86>(0x00000C, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:56 CLC
    case 0xBF95: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9-jp.asm:57 ADC @VIRTUAL0A
    case 0xBF96: c.execute<0x65>(0x00000A, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:58 STA @VIRTUAL0A
    case 0xBF98: c.execute<0x85>(0x00000A, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:59 STA @LOCAL00
    case 0xBF9A: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:60 LDA @VIRTUAL0A+2
    case 0xBF9C: c.execute<0xA5>(0x00000C, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:61 STA @LOCAL00+2
    case 0xBF9E: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:62 LDX #20
    case 0xBFA0: if (c.p & 0x10) c.execute<0xA2>(0x000014, 2); else c.execute<0xA2>(0x000014, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:62 LDX #20
    // Overlapping static entry reached from 0xEFBFA0.
    case 0xBFA2: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:63 LDA #9
    case 0xBFA3: if (c.p & 0x20) c.execute<0xA9>(0x000009, 2); else c.execute<0xA9>(0x000009, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:63 LDA #9
    // Overlapping static entry reached from 0xEFBFA3.
    case 0xBFA5: c.execute<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:64 JSR UNKNOWN_EFDABD
    case 0xBFA6: c.execute<0x20>(0x00C3D7, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:65 LDA #70
    case 0xBFA9: if (c.p & 0x20) c.execute<0xA9>(0x000046, 2); else c.execute<0xA9>(0x000046, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:65 LDA #70
    // Overlapping static entry reached from 0xEFBFA9.
    case 0xBFAB: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:66 CLC
    case 0xBFAC: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9-jp.asm:67 ADC @VIRTUAL06
    case 0xBFAD: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:68 STA @VIRTUAL06
    case 0xBFAF: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:69 STA @LOCAL00
    case 0xBFB1: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:70 LDA @VIRTUAL06+2
    case 0xBFB3: c.execute<0xA5>(0x000008, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:71 STA @LOCAL00+2
    case 0xBFB5: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:72 LDX #22
    case 0xBFB7: if (c.p & 0x10) c.execute<0xA2>(0x000016, 2); else c.execute<0xA2>(0x000016, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:72 LDX #22
    // Overlapping static entry reached from 0xEFBFB7.
    case 0xBFB9: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:73 LDA #10
    case 0xBFBA: if (c.p & 0x20) c.execute<0xA9>(0x00000A, 2); else c.execute<0xA9>(0x00000A, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:73 LDA #10
    // Overlapping static entry reached from 0xEFBFBA.
    case 0xBFBC: c.execute<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:74 JSR UNKNOWN_EFDABD
    case 0xBFBD: c.execute<0x20>(0x00C3D7, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:75 LDA @VIRTUAL02
    case 0xBFC0: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:76 ASL
    case 0xBFC2: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9-jp.asm:77 TAX
    case 0xBFC3: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9-jp.asm:78 LDA #64
    case 0xBFC4: if (c.p & 0x20) c.execute<0xA9>(0x000040, 2); else c.execute<0xA9>(0x000040, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:78 LDA #64
    // Overlapping static entry reached from 0xEFBFC4.
    case 0xBFC6: c.execute<0x00>(0x00009D, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:79 STA ENTITY_ABS_X_TABLE,X
    case 0xBFC7: c.execute<0x9D>(0x000B84, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:80 LDA #80
    case 0xBFCA: if (c.p & 0x20) c.execute<0xA9>(0x000050, 2); else c.execute<0xA9>(0x000050, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:80 LDA #80
    // Overlapping static entry reached from 0xEFBFCA.
    case 0xBFCC: c.execute<0x00>(0x00009D, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:81 STA ENTITY_ABS_Y_TABLE,X
    case 0xBFCD: c.execute<0x9D>(0x000BC0, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:82 LDY #0
    case 0xBFD0: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:82 LDY #0
    // Overlapping static entry reached from 0xEFBFD0.
    case 0xBFD2: c.execute<0x00>(0x0000A2, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:83 LDX #1
    case 0xBFD3: if (c.p & 0x10) c.execute<0xA2>(0x000001, 2); else c.execute<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:83 LDX #1
    // Overlapping static entry reached from 0xEFBFD3.
    case 0xBFD5: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:84 LDA #4
    case 0xBFD6: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:84 LDA #4
    // Overlapping static entry reached from 0xEFBFD6.
    case 0xBFD8: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:85 JSL FADE_IN_WITH_MOSAIC
    case 0xBFD9: c.execute<0x22>(0xC087C4, 4); return true;
    // include/macros.asm:25 PLD
    case 0xBFDD: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xBFDE: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xBFDF: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xBFE1: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xBFE2: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xBFE3: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xBFE4: if (c.p & 0x20) c.execute<0x69>(0x0000F2, 2); else c.execute<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFBFE4.
    case 0xBFE6: c.execute<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xBFE7: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xBFE8: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:7 STA @VIRTUAL04
    case 0xBFE9: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFD6D4.asm:7 STA @VIRTUAL04
    // Overlapping static entry reached from 0xEFBFE6.
    case 0xBFEA: c.execute<0x04>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:8 LDA #0
    case 0xBFEB: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFD6D4.asm:8 LDA #0
    // Overlapping static entry reached from 0xEFBFEA.
    case 0xBFEC: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EFD6D4.asm:8 LDA #0
    // Overlapping static entry reached from 0xEFBFEB.
    case 0xBFED: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFD6D4.asm:9 STA @VIRTUAL02
    case 0xBFEE: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:10 LDX CURRENT_MUSIC_TRACK
    case 0xBFF0: c.execute<0xAE>(0x00B6EC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:11 STX DEBUG_SOUND_MENU_INITIAL_BGM
    case 0xBFF3: c.execute<0x8E>(0x00B6F6, 3); return true;
    // src/unknown/EF/EFD6D4.asm:12 STX DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xBFF6: c.execute<0x8E>(0x00B6FC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:13 LDA #2
    case 0xBFF9: if (c.p & 0x20) c.execute<0xA9>(0x000002, 2); else c.execute<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EFD6D4.asm:13 LDA #2
    // Overlapping static entry reached from 0xEFBFF9.
    case 0xBFFB: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:14 STA DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xBFFC: c.execute<0x8D>(0x00B700, 3); return true;
    // src/unknown/EF/EFD6D4.asm:15 LDA @VIRTUAL04
    case 0xBFFF: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFD6D4.asm:16 JSR UNKNOWN_EFD5D9
    case 0xC001: c.execute<0x20>(0x00BEEC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:18 JSL UPDATE_SCREEN
    case 0xC004: c.execute<0x22>(0xC08B17, 4); return true;
    // src/unknown/EF/EFD6D4.asm:19 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC008: c.execute<0x22>(0xC0874C, 4); return true;
    // src/unknown/EF/EFD6D4.asm:20 LDA PAD_PRESS
    case 0xC00C: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:21 AND #PAD::Y_BUTTON
    case 0xC00F: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x004000, 3); return true;
    // src/unknown/EF/EFD6D4.asm:21 AND #PAD::Y_BUTTON
    // Overlapping static entry reached from 0xEFC00F.
    case 0xC011: c.execute<0x40>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:22 BEQ @UNKNOWN1
    case 0xC012: c.execute<0xF0>(0x000008, 2); return true;
    // src/unknown/EF/EFD6D4.asm:23 JSR UNKNOWN_EFE175
    case 0xC014: c.execute<0x20>(0x00CA8F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:24 LDA @VIRTUAL04
    case 0xC017: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFD6D4.asm:25 JSR UNKNOWN_EFD5D9
    case 0xC019: c.execute<0x20>(0x00BEEC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:27 JSL OAM_CLEAR
    case 0xC01C: c.execute<0x22>(0xC088A3, 4); return true;
    // src/unknown/EF/EFD6D4.asm:27 JSL OAM_CLEAR
    // Overlapping static entry reached from 0xEFC04D.
    case 0xC01F: if (c.p & 0x10) c.execute<0xC0>(0x000022, 2); else c.execute<0xC0>(0x004522, 3); return true;
    // src/unknown/EF/EFD6D4.asm:28 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC020: c.execute<0x22>(0xC09445, 4); return true;
    // src/unknown/EF/EFD6D4.asm:28 JSL RUN_ACTIONSCRIPT_FRAME
    // Overlapping static entry reached from 0xEFC01F.
    case 0xC021: c.execute<0x45>(0x000094, 2); return true;
    // src/unknown/EF/EFD6D4.asm:28 JSL RUN_ACTIONSCRIPT_FRAME
    // Overlapping static entry reached from 0xEFC01F.
    case 0xC022: c.execute<0x94>(0x0000C0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:28 JSL RUN_ACTIONSCRIPT_FRAME
    // Overlapping static entry reached from 0xEFC021.
    case 0xC023: if (c.p & 0x10) c.execute<0xC0>(0x0000AC, 2); else c.execute<0xC0>(0x00FCAC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:29 LDY DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xC024: c.execute<0xAC>(0x00B6FC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:29 LDY DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFC023.
    case 0xC025: c.execute<0xFC>(0x00A2B6, 3); return true;
    // src/unknown/EF/EFD6D4.asm:29 LDY DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFC023.
    case 0xC026: c.execute<0xB6>(0x0000A2, 2); return true;
    // src/unknown/EF/EFD6D4.asm:30 LDX #10
    case 0xC027: if (c.p & 0x10) c.execute<0xA2>(0x00000A, 2); else c.execute<0xA2>(0x00000A, 3); return true;
    // src/unknown/EF/EFD6D4.asm:30 LDX #10
    // Overlapping static entry reached from 0xEFC026.
    case 0xC028: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:30 LDX #10
    // Overlapping static entry reached from 0xEFC027.
    case 0xC029: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:31 LDA #18
    case 0xC02A: if (c.p & 0x20) c.execute<0xA9>(0x000012, 2); else c.execute<0xA9>(0x000012, 3); return true;
    // src/unknown/EF/EFD6D4.asm:31 LDA #18
    // Overlapping static entry reached from 0xEFC02A.
    case 0xC02C: c.execute<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD6D4.asm:32 JSR UNKNOWN_EFD56F
    case 0xC02D: c.execute<0x20>(0x00BE82, 3); return true;
    // src/unknown/EF/EFD6D4.asm:33 LDY DEBUG_SOUND_MENU_SELECTED_SE
    case 0xC030: c.execute<0xAC>(0x00B6FE, 3); return true;
    // src/unknown/EF/EFD6D4.asm:34 LDX #12
    case 0xC033: if (c.p & 0x10) c.execute<0xA2>(0x00000C, 2); else c.execute<0xA2>(0x00000C, 3); return true;
    // src/unknown/EF/EFD6D4.asm:34 LDX #12
    // Overlapping static entry reached from 0xEFC033.
    case 0xC035: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:35 LDA #18
    case 0xC036: if (c.p & 0x20) c.execute<0xA9>(0x000012, 2); else c.execute<0xA9>(0x000012, 3); return true;
    // src/unknown/EF/EFD6D4.asm:35 LDA #18
    // Overlapping static entry reached from 0xEFC036.
    case 0xC038: c.execute<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD6D4.asm:36 JSR UNKNOWN_EFD56F
    case 0xC039: c.execute<0x20>(0x00BE82, 3); return true;
    // src/unknown/EF/EFD6D4.asm:37 LDY DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xC03C: c.execute<0xAC>(0x00B700, 3); return true;
    // src/unknown/EF/EFD6D4.asm:38 LDX #14
    case 0xC03F: if (c.p & 0x10) c.execute<0xA2>(0x00000E, 2); else c.execute<0xA2>(0x00000E, 3); return true;
    // src/unknown/EF/EFD6D4.asm:38 LDX #14
    // Overlapping static entry reached from 0xEFC03F.
    case 0xC041: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:39 LDA #18
    case 0xC042: if (c.p & 0x20) c.execute<0xA9>(0x000012, 2); else c.execute<0xA9>(0x000012, 3); return true;
    // src/unknown/EF/EFD6D4.asm:39 LDA #18
    // Overlapping static entry reached from 0xEFC042.
    case 0xC044: c.execute<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD6D4.asm:40 JSR UNKNOWN_EFD56F
    case 0xC045: c.execute<0x20>(0x00BE82, 3); return true;
    // src/unknown/EF/EFD6D4.asm:41 LDA PAD_PRESS
    case 0xC048: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:42 CMP #PAD::SELECT_BUTTON | PAD::START_BUTTON
    case 0xC04B: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x003000, 3); return true;
    // src/unknown/EF/EFD6D4.asm:42 CMP #PAD::SELECT_BUTTON | PAD::START_BUTTON
    // Overlapping static entry reached from 0xEFC04B.
    case 0xC04D: c.execute<0x30>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    case 0xC04E: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:772 BNE :+
    // Overlapping static entry reached from 0xEFC04D.
    case 0xC04F: c.execute<0x03>(0x00004C, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xC050: c.execute<0x4C>(0x00C1BE, 3); return true;
    // include/macros.asm:773 JMP dest
    // Overlapping static entry reached from 0xEFC04F.
    case 0xC051: c.execute<0xBE>(0x00ADC1, 3); return true;
    // src/unknown/EF/EFD6D4.asm:44 LDA PAD_HELD
    case 0xC053: c.execute<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:44 LDA PAD_HELD
    // Overlapping static entry reached from 0xEFC051.
    case 0xC054: if (c.p & 0x20) c.execute<0x69>(0x000000, 2); else c.execute<0x69>(0x002900, 3); return true;
    // src/unknown/EF/EFD6D4.asm:45 AND #PAD::UP
    case 0xC056: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000800, 3); return true;
    // src/unknown/EF/EFD6D4.asm:45 AND #PAD::UP
    // Overlapping static entry reached from 0xEFC054.
    case 0xC057: c.execute<0x00>(0x000008, 2); return true;
    // src/unknown/EF/EFD6D4.asm:45 AND #PAD::UP
    // Overlapping static entry reached from 0xEFC056.
    case 0xC058: c.execute<0x08>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:46 BEQ @UNKNOWN3
    case 0xC059: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EFD6D4.asm:47 LDA @VIRTUAL02
    case 0xC05B: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:48 DEC
    case 0xC05D: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:49 STA @VIRTUAL02
    case 0xC05E: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:51 LDA PAD_HELD
    case 0xC060: c.execute<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:52 AND #PAD::DOWN
    case 0xC063: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000400, 3); return true;
    // src/unknown/EF/EFD6D4.asm:52 AND #PAD::DOWN
    // Overlapping static entry reached from 0xEFC063.
    case 0xC065: c.execute<0x04>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:53 BEQ @UNKNOWN4
    case 0xC066: c.execute<0xF0>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:53 BEQ @UNKNOWN4
    // Overlapping static entry reached from 0xEFC065.
    case 0xC067: c.execute<0x02>(0x0000E6, 2); return true;
    // src/unknown/EF/EFD6D4.asm:54 INC @VIRTUAL02
    case 0xC068: c.execute<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:56 LDA @VIRTUAL02
    case 0xC06A: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:57 CMP #.LOWORD(-1)
    case 0xC06C: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFD6D4.asm:57 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFC09B.
    case 0xC06D: c.execute<0xFF>(0x05D0FF, 4); return true;
    // src/unknown/EF/EFD6D4.asm:57 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFC06C.
    case 0xC06E: c.execute<0xFF>(0xA905D0, 4); return true;
    // src/unknown/EF/EFD6D4.asm:58 BNE @UNKNOWN5
    case 0xC06F: c.execute<0xD0>(0x000005, 2); return true;
    // src/unknown/EF/EFD6D4.asm:59 LDA #2
    case 0xC071: if (c.p & 0x20) c.execute<0xA9>(0x000002, 2); else c.execute<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EFD6D4.asm:59 LDA #2
    // Overlapping static entry reached from 0xEFC06E.
    case 0xC072: c.execute<0x02>(0x000000, 2); return true;
    // src/unknown/EF/EFD6D4.asm:59 LDA #2
    // Overlapping static entry reached from 0xEFC071.
    case 0xC073: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFD6D4.asm:60 STA @VIRTUAL02
    case 0xC074: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:62 LDA @VIRTUAL02
    case 0xC076: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:63 CMP #3
    case 0xC078: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFD6D4.asm:63 CMP #3
    // Overlapping static entry reached from 0xEFC078.
    case 0xC07A: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:64 BNE @UNKNOWN6
    case 0xC07B: c.execute<0xD0>(0x000005, 2); return true;
    // src/unknown/EF/EFD6D4.asm:65 LDA #0
    case 0xC07D: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFD6D4.asm:65 LDA #0
    // Overlapping static entry reached from 0xEFC07D.
    case 0xC07F: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFD6D4.asm:66 STA @VIRTUAL02
    case 0xC080: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:68 LDA PAD_PRESS
    case 0xC082: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:69 AND #PAD::L_BUTTON
    case 0xC085: if (c.p & 0x20) c.execute<0x29>(0x000020, 2); else c.execute<0x29>(0x000020, 3); return true;
    // src/unknown/EF/EFD6D4.asm:69 AND #PAD::L_BUTTON
    // Overlapping static entry reached from 0xEFC085.
    case 0xC087: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:70 BEQ @UNKNOWN7
    case 0xC088: c.execute<0xF0>(0x00000C, 2); return true;
    // src/unknown/EF/EFD6D4.asm:71 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xC08A: c.execute<0xAD>(0x00B6FC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:72 STA DEBUG_SOUND_MENU_INITIAL_BGM
    case 0xC08D: c.execute<0x8D>(0x00B6F6, 3); return true;
    // src/unknown/EF/EFD6D4.asm:73 LDA #46
    case 0xC090: if (c.p & 0x20) c.execute<0xA9>(0x00002E, 2); else c.execute<0xA9>(0x00002E, 3); return true;
    // src/unknown/EF/EFD6D4.asm:73 LDA #46
    // Overlapping static entry reached from 0xEFC090.
    case 0xC092: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:74 STA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xC093: c.execute<0x8D>(0x00B6FC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:76 LDA PAD_PRESS
    case 0xC096: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:77 AND #PAD::B_BUTTON
    case 0xC099: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EFD6D4.asm:77 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xEFC099.
    case 0xC09B: c.execute<0x80>(0x0000D0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:78 BNE @UNKNOWN8
    case 0xC09C: c.execute<0xD0>(0x000008, 2); return true;
    // src/unknown/EF/EFD6D4.asm:79 LDA PAD_PRESS
    case 0xC09E: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:80 AND #PAD::R_BUTTON
    case 0xC0A1: if (c.p & 0x20) c.execute<0x29>(0x000010, 2); else c.execute<0x29>(0x000010, 3); return true;
    // src/unknown/EF/EFD6D4.asm:80 AND #PAD::R_BUTTON
    // Overlapping static entry reached from 0xEFC0A1.
    case 0xC0A3: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:81 BEQ @UNKNOWN9
    case 0xC0A4: c.execute<0xF0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:83 LDA DEBUG_SOUND_MENU_INITIAL_BGM
    case 0xC0A6: c.execute<0xAD>(0x00B6F6, 3); return true;
    // src/unknown/EF/EFD6D4.asm:84 STA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xC0A9: c.execute<0x8D>(0x00B6FC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:86 LDA @VIRTUAL02
    case 0xC0AC: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:87 BEQ @UNKNOWN11
    case 0xC0AE: c.execute<0xF0>(0x000010, 2); return true;
    // src/unknown/EF/EFD6D4.asm:88 CMP #1
    case 0xC0B0: if (c.p & 0x20) c.execute<0xC9>(0x000001, 2); else c.execute<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFD6D4.asm:88 CMP #1
    // Overlapping static entry reached from 0xEFC0B0.
    case 0xC0B2: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:89 BEQ @UNKNOWN17
    case 0xC0B3: c.execute<0xF0>(0x000061, 2); return true;
    // src/unknown/EF/EFD6D4.asm:90 CMP #2
    case 0xC0B5: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFD6D4.asm:90 CMP #2
    // Overlapping static entry reached from 0xEFC0B5.
    case 0xC0B7: c.execute<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    case 0xC0B8: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xC0BA: c.execute<0x4C>(0x00C159, 3); return true;
    // src/unknown/EF/EFD6D4.asm:92 JMP @UNKNOWN27
    case 0xC0BD: c.execute<0x4C>(0x00C19A, 3); return true;
    // src/unknown/EF/EFD6D4.asm:94 LDA PAD_HELD
    case 0xC0C0: c.execute<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:95 AND #PAD::LEFT
    case 0xC0C3: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000200, 3); return true;
    // src/unknown/EF/EFD6D4.asm:95 AND #PAD::LEFT
    // Overlapping static entry reached from 0xEFC0C3.
    case 0xC0C5: c.execute<0x02>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:96 BEQ @UNKNOWN12
    case 0xC0C6: c.execute<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFD6D4.asm:97 DEC DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xC0C8: c.execute<0xCE>(0x00B6FC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:99 LDA PAD_HELD
    case 0xC0CB: c.execute<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:100 AND #PAD::RIGHT
    case 0xC0CE: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000100, 3); return true;
    // src/unknown/EF/EFD6D4.asm:100 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xEFC0CE.
    case 0xC0D0: c.execute<0x01>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:101 BEQ @UNKNOWN13
    case 0xC0D1: c.execute<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFD6D4.asm:101 BEQ @UNKNOWN13
    // Overlapping static entry reached from 0xEFC0D0.
    case 0xC0D2: c.execute<0x03>(0x0000EE, 2); return true;
    // src/unknown/EF/EFD6D4.asm:102 INC DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xC0D3: c.execute<0xEE>(0x00B6FC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:102 INC DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFC0D2.
    case 0xC0D4: c.execute<0xFC>(0x00ADB6, 3); return true;
    // src/unknown/EF/EFD6D4.asm:104 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xC0D6: c.execute<0xAD>(0x00B6FC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:104 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFC0D4.
    case 0xC0D7: c.execute<0xFC>(0x00C9B6, 3); return true;
    // src/unknown/EF/EFD6D4.asm:105 CMP #.LOWORD(-1)
    case 0xC0D9: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFD6D4.asm:105 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFC0D7.
    case 0xC0DA: c.execute<0xFF>(0x06D0FF, 4); return true;
    // src/unknown/EF/EFD6D4.asm:105 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFC0D9.
    case 0xC0DB: c.execute<0xFF>(0xA906D0, 4); return true;
    // src/unknown/EF/EFD6D4.asm:106 BNE @UNKNOWN14
    case 0xC0DC: c.execute<0xD0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:107 LDA #191
    case 0xC0DE: if (c.p & 0x20) c.execute<0xA9>(0x0000BF, 2); else c.execute<0xA9>(0x0000BF, 3); return true;
    // src/unknown/EF/EFD6D4.asm:107 LDA #191
    // Overlapping static entry reached from 0xEFC0DB.
    case 0xC0DF: c.execute<0xBF>(0xFC8D00, 4); return true;
    // src/unknown/EF/EFD6D4.asm:107 LDA #191
    // Overlapping static entry reached from 0xEFC0DE.
    case 0xC0E0: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:108 STA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xC0E1: c.execute<0x8D>(0x00B6FC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:108 STA DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFC0DF.
    case 0xC0E3: c.execute<0xB6>(0x0000AD, 2); return true;
    // src/unknown/EF/EFD6D4.asm:110 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xC0E4: c.execute<0xAD>(0x00B6FC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:110 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFC0E3.
    case 0xC0E5: c.execute<0xFC>(0x00C9B6, 3); return true;
    // src/unknown/EF/EFD6D4.asm:111 CMP #192
    case 0xC0E7: if (c.p & 0x20) c.execute<0xC9>(0x0000C0, 2); else c.execute<0xC9>(0x0000C0, 3); return true;
    // src/unknown/EF/EFD6D4.asm:111 CMP #192
    // Overlapping static entry reached from 0xEFC0E5.
    case 0xC0E8: if (c.p & 0x10) c.execute<0xC0>(0x000000, 2); else c.execute<0xC0>(0x00D000, 3); return true;
    // src/unknown/EF/EFD6D4.asm:111 CMP #192
    // Overlapping static entry reached from 0xEFC0E7.
    case 0xC0E9: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:112 BNE @UNKNOWN15
    case 0xC0EA: c.execute<0xD0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:112 BNE @UNKNOWN15
    // Overlapping static entry reached from 0xEFC0E8.
    case 0xC0EB: c.execute<0x06>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:113 LDA #1
    case 0xC0EC: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFD6D4.asm:113 LDA #1
    // Overlapping static entry reached from 0xEFC0EB.
    case 0xC0ED: c.execute<0x01>(0x000000, 2); return true;
    // src/unknown/EF/EFD6D4.asm:113 LDA #1
    // Overlapping static entry reached from 0xEFC0EC.
    case 0xC0EE: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:114 STA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xC0EF: c.execute<0x8D>(0x00B6FC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:116 LDA PAD_PRESS
    case 0xC0F2: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:117 AND #PAD::A_BUTTON
    case 0xC0F5: if (c.p & 0x20) c.execute<0x29>(0x000080, 2); else c.execute<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EFD6D4.asm:117 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xEFC0F5.
    case 0xC0F7: c.execute<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    case 0xC0F8: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xC0FA: c.execute<0x4C>(0x00C19A, 3); return true;
    // src/unknown/EF/EFD6D4.asm:119 JSL STOP_MUSIC
    case 0xC0FD: c.execute<0x22>(0xC0ABA5, 4); return true;
    // src/unknown/EF/EFD6D4.asm:120 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC101: c.execute<0x22>(0xC0874C, 4); return true;
    // src/unknown/EF/EFD6D4.asm:121 LDA CURRENT_MUSIC_TRACK
    case 0xC105: c.execute<0xAD>(0x00B6EC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:122 JSL UNKNOWN_C0AC20
    case 0xC108: c.execute<0x22>(0xC0ABFF, 4); return true;
    // src/unknown/EF/EFD6D4.asm:123 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xC10C: c.execute<0xAD>(0x00B6FC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:124 JSL CHANGE_MUSIC
    case 0xC10F: c.execute<0x22>(0xC4CF5C, 4); return true;
    // src/unknown/EF/EFD6D4.asm:125 JMP @UNKNOWN27
    case 0xC113: c.execute<0x4C>(0x00C19A, 3); return true;
    // src/unknown/EF/EFD6D4.asm:127 LDA PAD_HELD
    case 0xC116: c.execute<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:128 AND #PAD::LEFT
    case 0xC119: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000200, 3); return true;
    // src/unknown/EF/EFD6D4.asm:128 AND #PAD::LEFT
    // Overlapping static entry reached from 0xEFC119.
    case 0xC11B: c.execute<0x02>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:129 BEQ @UNKNOWN18
    case 0xC11C: c.execute<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFD6D4.asm:130 DEC DEBUG_SOUND_MENU_SELECTED_SE
    case 0xC11E: c.execute<0xCE>(0x00B6FE, 3); return true;
    // src/unknown/EF/EFD6D4.asm:132 LDA PAD_HELD
    case 0xC121: c.execute<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:133 AND #PAD::RIGHT
    case 0xC124: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000100, 3); return true;
    // src/unknown/EF/EFD6D4.asm:133 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xEFC124.
    case 0xC126: c.execute<0x01>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:134 BEQ @UNKNOWN19
    case 0xC127: c.execute<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFD6D4.asm:134 BEQ @UNKNOWN19
    // Overlapping static entry reached from 0xEFC126.
    case 0xC128: c.execute<0x03>(0x0000EE, 2); return true;
    // src/unknown/EF/EFD6D4.asm:135 INC DEBUG_SOUND_MENU_SELECTED_SE
    case 0xC129: c.execute<0xEE>(0x00B6FE, 3); return true;
    // src/unknown/EF/EFD6D4.asm:135 INC DEBUG_SOUND_MENU_SELECTED_SE
    // Overlapping static entry reached from 0xEFC128.
    case 0xC12A: c.execute<0xFE>(0x00ADB6, 3); return true;
    // src/unknown/EF/EFD6D4.asm:137 LDA DEBUG_SOUND_MENU_SELECTED_SE
    case 0xC12C: c.execute<0xAD>(0x00B6FE, 3); return true;
    // src/unknown/EF/EFD6D4.asm:137 LDA DEBUG_SOUND_MENU_SELECTED_SE
    // Overlapping static entry reached from 0xEFC12A.
    case 0xC12D: c.execute<0xFE>(0x00C9B6, 3); return true;
    // src/unknown/EF/EFD6D4.asm:138 CMP #.LOWORD(-1)
    case 0xC12F: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFD6D4.asm:138 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFC12D.
    case 0xC130: c.execute<0xFF>(0x06D0FF, 4); return true;
    // src/unknown/EF/EFD6D4.asm:138 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFC12F.
    case 0xC131: c.execute<0xFF>(0xA906D0, 4); return true;
    // src/unknown/EF/EFD6D4.asm:139 BNE @UNKNOWN20
    case 0xC132: c.execute<0xD0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:140 LDA #127
    case 0xC134: if (c.p & 0x20) c.execute<0xA9>(0x00007F, 2); else c.execute<0xA9>(0x00007F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:140 LDA #127
    // Overlapping static entry reached from 0xEFC131.
    case 0xC135: c.execute<0x7F>(0xFE8D00, 4); return true;
    // src/unknown/EF/EFD6D4.asm:140 LDA #127
    // Overlapping static entry reached from 0xEFC134.
    case 0xC136: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:141 STA DEBUG_SOUND_MENU_SELECTED_SE
    case 0xC137: c.execute<0x8D>(0x00B6FE, 3); return true;
    // src/unknown/EF/EFD6D4.asm:141 STA DEBUG_SOUND_MENU_SELECTED_SE
    // Overlapping static entry reached from 0xEFC135.
    case 0xC139: c.execute<0xB6>(0x0000AD, 2); return true;
    // src/unknown/EF/EFD6D4.asm:143 LDA DEBUG_SOUND_MENU_SELECTED_SE
    case 0xC13A: c.execute<0xAD>(0x00B6FE, 3); return true;
    // src/unknown/EF/EFD6D4.asm:143 LDA DEBUG_SOUND_MENU_SELECTED_SE
    // Overlapping static entry reached from 0xEFC139.
    case 0xC13B: c.execute<0xFE>(0x00C9B6, 3); return true;
    // src/unknown/EF/EFD6D4.asm:144 CMP #128
    case 0xC13D: if (c.p & 0x20) c.execute<0xC9>(0x000080, 2); else c.execute<0xC9>(0x000080, 3); return true;
    // src/unknown/EF/EFD6D4.asm:144 CMP #128
    // Overlapping static entry reached from 0xEFC13B.
    case 0xC13E: c.execute<0x80>(0x000000, 2); return true;
    // src/unknown/EF/EFD6D4.asm:144 CMP #128
    // Overlapping static entry reached from 0xEFC13D.
    case 0xC13F: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:145 BNE @UNKNOWN21
    case 0xC140: c.execute<0xD0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:146 LDA #1
    case 0xC142: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFD6D4.asm:146 LDA #1
    // Overlapping static entry reached from 0xEFC142.
    case 0xC144: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:147 STA DEBUG_SOUND_MENU_SELECTED_SE
    case 0xC145: c.execute<0x8D>(0x00B6FE, 3); return true;
    // src/unknown/EF/EFD6D4.asm:149 LDA PAD_PRESS
    case 0xC148: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:150 AND #PAD::A_BUTTON
    case 0xC14B: if (c.p & 0x20) c.execute<0x29>(0x000080, 2); else c.execute<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EFD6D4.asm:150 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xEFC14B.
    case 0xC14D: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:151 BEQ @UNKNOWN27
    case 0xC14E: c.execute<0xF0>(0x00004A, 2); return true;
    // src/unknown/EF/EFD6D4.asm:152 LDA DEBUG_SOUND_MENU_SELECTED_SE
    case 0xC150: c.execute<0xAD>(0x00B6FE, 3); return true;
    // src/unknown/EF/EFD6D4.asm:153 JSL PLAY_SOUND
    case 0xC153: c.execute<0x22>(0xC0ABBF, 4); return true;
    // src/unknown/EF/EFD6D4.asm:154 BRA @UNKNOWN27
    case 0xC157: c.execute<0x80>(0x000041, 2); return true;
    // src/unknown/EF/EFD6D4.asm:156 LDA PAD_HELD
    case 0xC159: c.execute<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:157 AND #PAD::LEFT
    case 0xC15C: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000200, 3); return true;
    // src/unknown/EF/EFD6D4.asm:157 AND #PAD::LEFT
    // Overlapping static entry reached from 0xEFC15C.
    case 0xC15E: c.execute<0x02>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:158 BEQ @UNKNOWN23
    case 0xC15F: c.execute<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFD6D4.asm:159 DEC DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xC161: c.execute<0xCE>(0x00B700, 3); return true;
    // src/unknown/EF/EFD6D4.asm:161 LDA PAD_HELD
    case 0xC164: c.execute<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:162 AND #PAD::RIGHT
    case 0xC167: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000100, 3); return true;
    // src/unknown/EF/EFD6D4.asm:162 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xEFC167.
    case 0xC169: c.execute<0x01>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:163 BEQ @UNKNOWN24
    case 0xC16A: c.execute<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFD6D4.asm:163 BEQ @UNKNOWN24
    // Overlapping static entry reached from 0xEFC169.
    case 0xC16B: c.execute<0x03>(0x0000EE, 2); return true;
    // src/unknown/EF/EFD6D4.asm:164 INC DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xC16C: c.execute<0xEE>(0x00B700, 3); return true;
    // src/unknown/EF/EFD6D4.asm:164 INC DEBUG_SOUND_MENU_SELECTED_EFFECT
    // Overlapping static entry reached from 0xEFC16B.
    case 0xC16D: c.execute<0x00>(0x0000B7, 2); return true;
    // src/unknown/EF/EFD6D4.asm:166 LDA DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xC16F: c.execute<0xAD>(0x00B700, 3); return true;
    // src/unknown/EF/EFD6D4.asm:167 CMP #.LOWORD(-1)
    case 0xC172: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFD6D4.asm:167 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFC172.
    case 0xC174: c.execute<0xFF>(0xA906D0, 4); return true;
    // src/unknown/EF/EFD6D4.asm:168 BNE @UNKNOWN25
    case 0xC175: c.execute<0xD0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:169 LDA #32
    case 0xC177: if (c.p & 0x20) c.execute<0xA9>(0x000020, 2); else c.execute<0xA9>(0x000020, 3); return true;
    // src/unknown/EF/EFD6D4.asm:169 LDA #32
    // Overlapping static entry reached from 0xEFC174.
    case 0xC178: c.execute<0x20>(0x008D00, 3); return true;
    // src/unknown/EF/EFD6D4.asm:169 LDA #32
    // Overlapping static entry reached from 0xEFC177.
    case 0xC179: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:170 STA DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xC17A: c.execute<0x8D>(0x00B700, 3); return true;
    // src/unknown/EF/EFD6D4.asm:170 STA DEBUG_SOUND_MENU_SELECTED_EFFECT
    // Overlapping static entry reached from 0xEFC178.
    case 0xC17B: c.execute<0x00>(0x0000B7, 2); return true;
    // src/unknown/EF/EFD6D4.asm:172 LDA DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xC17D: c.execute<0xAD>(0x00B700, 3); return true;
    // src/unknown/EF/EFD6D4.asm:173 CMP #33
    case 0xC180: if (c.p & 0x20) c.execute<0xC9>(0x000021, 2); else c.execute<0xC9>(0x000021, 3); return true;
    // src/unknown/EF/EFD6D4.asm:173 CMP #33
    // Overlapping static entry reached from 0xEFC180.
    case 0xC182: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:174 BNE @UNKNOWN26
    case 0xC183: c.execute<0xD0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:175 LDA #1
    case 0xC185: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFD6D4.asm:175 LDA #1
    // Overlapping static entry reached from 0xEFC185.
    case 0xC187: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:176 STA DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xC188: c.execute<0x8D>(0x00B700, 3); return true;
    // src/unknown/EF/EFD6D4.asm:178 LDA PAD_PRESS
    case 0xC18B: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:179 AND #PAD::A_BUTTON
    case 0xC18E: if (c.p & 0x20) c.execute<0x29>(0x000080, 2); else c.execute<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EFD6D4.asm:179 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xEFC18E.
    case 0xC190: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:180 BEQ @UNKNOWN27
    case 0xC191: c.execute<0xF0>(0x000007, 2); return true;
    // src/unknown/EF/EFD6D4.asm:181 LDA DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xC193: c.execute<0xAD>(0x00B700, 3); return true;
    // src/unknown/EF/EFD6D4.asm:182 JSL UNKNOWN_C0AC0C
    case 0xC196: c.execute<0x22>(0xC0ABEB, 4); return true;
    // src/unknown/EF/EFD6D4.asm:184 LDA PAD_PRESS
    case 0xC19A: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:185 AND #PAD::X_BUTTON
    case 0xC19D: if (c.p & 0x20) c.execute<0x29>(0x000040, 2); else c.execute<0x29>(0x000040, 3); return true;
    // src/unknown/EF/EFD6D4.asm:185 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xEFC19D.
    case 0xC19F: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:186 BEQ @UNKNOWN28
    case 0xC1A0: c.execute<0xF0>(0x000008, 2); return true;
    // src/unknown/EF/EFD6D4.asm:187 JSL STOP_MUSIC
    case 0xC1A2: c.execute<0x22>(0xC0ABA5, 4); return true;
    // src/unknown/EF/EFD6D4.asm:188 JSL PLAY_SOUND_UNKNOWN0
    case 0xC1A6: c.execute<0x22>(0xC0ABE0, 4); return true;
    // src/unknown/EF/EFD6D4.asm:190 LDA @VIRTUAL04
    case 0xC1AA: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFD6D4.asm:191 ASL
    case 0xC1AC: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:192 TAX
    case 0xC1AD: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:193 LDA @VIRTUAL02
    case 0xC1AE: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:194 ASL
    case 0xC1B0: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:195 ASL
    case 0xC1B1: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:196 ASL
    case 0xC1B2: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:197 ASL
    case 0xC1B3: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:198 CLC
    case 0xC1B4: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:199 ADC #84
    case 0xC1B5: if (c.p & 0x20) c.execute<0x69>(0x000054, 2); else c.execute<0x69>(0x000054, 3); return true;
    // src/unknown/EF/EFD6D4.asm:199 ADC #84
    // Overlapping static entry reached from 0xEFC1B5.
    case 0xC1B7: c.execute<0x00>(0x00009D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:200 STA ENTITY_ABS_Y_TABLE,X
    case 0xC1B8: c.execute<0x9D>(0x000BC0, 3); return true;
    // src/unknown/EF/EFD6D4.asm:201 JMP @UNKNOWN0
    case 0xC1BB: c.execute<0x4C>(0x00C004, 3); return true;
    // include/macros.asm:25 PLD
    case 0xC1BE: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xC1BF: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC269: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xC26B: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xC26C: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xC26D: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFC26D.
    case 0xC26F: c.execute<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xC270: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xC271: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFC271.
    case 0xC273: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xC274: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xC276: if (c.p & 0x20) c.execute<0xA9>(0x00007F, 2); else c.execute<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFC276.
    case 0xC278: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xC279: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EFD95E.asm:8 JSL UNKNOWN_C200D9
    case 0xC27B: c.execute<0x22>(0xC200D9, 4); return true;
    // src/unknown/EF/EFD95E.asm:9 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC27F: c.execute<0x22>(0xC0874C, 4); return true;
    // src/unknown/EF/EFD95E.asm:10 LDA DEBUG_MODE_NUMBER
    case 0xC283: c.execute<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFD95E.asm:11 CMP #1
    case 0xC286: if (c.p & 0x20) c.execute<0xC9>(0x000001, 2); else c.execute<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFD95E.asm:11 CMP #1
    // Overlapping static entry reached from 0xEFC286.
    case 0xC288: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFD95E.asm:12 BNE @UNKNOWN0
    case 0xC289: c.execute<0xD0>(0x000020, 2); return true;
    // src/unknown/EF/EFD95E.asm:13 JSL LOAD_WINDOW_GFX
    case 0xC28B: c.execute<0x22>(0xC459AB, 4); return true;
    // include/macros.asm:836 LDA src
    case 0xC28F: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xC291: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xC293: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xC295: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    case 0xC297: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x006000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Overlapping static entry reached from 0xEFC297.
    case 0xC299: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    case 0xC29A: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x003800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Overlapping static entry reached from 0xEFC29A.
    case 0xC29C: c.execute<0x38>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    case 0xC29D: c.execute<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xEFC2BA.
    case 0xC29E: c.execute<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    case 0xC29F: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    case 0xC2A1: c.execute<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFC29F.
    case 0xC2A2: c.execute<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFC2A2.
    case 0xC2A4: if (c.p & 0x10) c.execute<0xC0>(0x000022, 2); else c.execute<0xC0>(0x001A22, 3); return true;
    // src/unknown/EF/EFD95E.asm:20 JSL UNKNOWN_C47F87
    case 0xC2A5: c.execute<0x22>(0xC45C1A, 4); return true;
    // src/unknown/EF/EFD95E.asm:20 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xEFC2A4.
    case 0xC2A6: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EFD95E.asm:20 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xEFC2A4.
    case 0xC2A7: c.execute<0x5C>(0x5780C4, 4); return true;
    // src/unknown/EF/EFD95E.asm:21 BRA @UNKNOWN2
    case 0xC2A9: c.execute<0x80>(0x000057, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xC2AB: if (c.p & 0x20) c.execute<0xA9>(0x00008A, 2); else c.execute<0xA9>(0x00D48A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFC2AB.
    case 0xC2AD: c.execute<0xD4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xC2AE: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xEFC2AD.
    case 0xC2AF: c.execute<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xC2B0: if (c.p & 0x20) c.execute<0xA9>(0x0000EF, 2); else c.execute<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFC2B0.
    case 0xC2B2: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xC2B3: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    case 0xC2B5: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x006100, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Overlapping static entry reached from 0xEFC2B5.
    case 0xC2B7: c.execute<0x61>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    case 0xC2B8: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x001000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Overlapping static entry reached from 0xEFC2B7.
    case 0xC2B9: c.execute<0x00>(0x000010, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Overlapping static entry reached from 0xEFC2B8.
    case 0xC2BA: c.execute<0x10>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BB: c.execute<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xEFC2BA.
    case 0xC2BC: c.execute<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    case 0xC2BD: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    case 0xC2BF: c.execute<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFC2BD.
    case 0xC2C0: c.execute<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFC2C0.
    case 0xC2C2: if (c.p & 0x10) c.execute<0xC0>(0x0000A9, 2); else c.execute<0xC0>(0x0000A9, 3); return true;
    // src/unknown/EF/EFD95E.asm:24 LDA #0
    case 0xC2C3: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFD95E.asm:24 LDA #0
    // Overlapping static entry reached from 0xEFC2C2.
    case 0xC2C4: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EFD95E.asm:24 LDA #0
    // Overlapping static entry reached from 0xEFC2C3.
    case 0xC2C5: c.execute<0x00>(0x000087, 2); return true;
    // src/unknown/EF/EFD95E.asm:25 STA [@VIRTUAL06]
    case 0xC2C6: c.execute<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xC2C8: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xC2CA: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xC2CC: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xC2CE: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    case 0xC2D0: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x007C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Overlapping static entry reached from 0xEFC2D0.
    case 0xC2D2: c.execute<0x7C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    case 0xC2D3: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Overlapping static entry reached from 0xEFC2D3.
    case 0xC2D5: c.execute<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D6: c.execute<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    case 0xC2D8: if (c.p & 0x20) c.execute<0xA9>(0x000003, 2); else c.execute<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    case 0xC2DA: c.execute<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFC2D8.
    case 0xC2DB: c.execute<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFC2DB.
    case 0xC2DD: if (c.p & 0x10) c.execute<0xC0>(0x0000AD, 2); else c.execute<0xC0>(0x000AAD, 3); return true;
    // src/unknown/EF/EFD95E.asm:27 LDA DEBUG_MODE_NUMBER
    case 0xC2DE: c.execute<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFD95E.asm:27 LDA DEBUG_MODE_NUMBER
    // Overlapping static entry reached from 0xEFC2DD.
    case 0xC2DF: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD95E.asm:27 LDA DEBUG_MODE_NUMBER
    // Overlapping static entry reached from 0xEFC2DD.
    case 0xC2E0: c.execute<0xB7>(0x0000C9, 2); return true;
    // src/unknown/EF/EFD95E.asm:28 CMP #3
    case 0xC2E1: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFD95E.asm:28 CMP #3
    // Overlapping static entry reached from 0xEFC2E0.
    case 0xC2E2: c.execute<0x03>(0x000000, 2); return true;
    // src/unknown/EF/EFD95E.asm:28 CMP #3
    // Overlapping static entry reached from 0xEFC2E1.
    case 0xC2E3: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD95E.asm:29 BEQ @UNKNOWN1
    case 0xC2E4: c.execute<0xF0>(0x000008, 2); return true;
    // src/unknown/EF/EFD95E.asm:30 LDA #.LOWORD(-1)
    case 0xC2E6: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFD95E.asm:30 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFC2E6.
    case 0xC2E8: c.execute<0xFF>(0x02048D, 4); return true;
    // src/unknown/EF/EFD95E.asm:31 STA PALETTES+4
    case 0xC2E9: c.execute<0x8D>(0x000204, 3); return true;
    // src/unknown/EF/EFD95E.asm:32 BRA @UNKNOWN2
    case 0xC2EC: c.execute<0x80>(0x000014, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xC2EE: if (c.p & 0x20) c.execute<0xA9>(0x0000CA, 2); else c.execute<0xA9>(0x00D8CA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFC2EE.
    case 0xC2F0: c.execute<0xD8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    case 0xC2F1: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xC2F3: if (c.p & 0x20) c.execute<0xA9>(0x0000EF, 2); else c.execute<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFC2F3.
    case 0xC2F5: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xC2F6: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD95E.asm:35 LDX #BPP2PALETTE_SIZE * 3
    case 0xC2F8: if (c.p & 0x10) c.execute<0xA2>(0x000018, 2); else c.execute<0xA2>(0x000018, 3); return true;
    // src/unknown/EF/EFD95E.asm:35 LDX #BPP2PALETTE_SIZE * 3
    // Overlapping static entry reached from 0xEFC2F8.
    case 0xC2FA: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD95E.asm:36 LDA #.LOWORD(PALETTES)
    case 0xC2FB: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000200, 3); return true;
    // src/unknown/EF/EFD95E.asm:36 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xEFC2FB.
    case 0xC2FD: c.execute<0x02>(0x000022, 2); return true;
    // src/unknown/EF/EFD95E.asm:37 JSL MEMCPY16
    case 0xC2FE: c.execute<0x22>(0xC08EC3, 4); return true;
    // src/unknown/EF/EFD95E.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC302: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFD95E.asm:40 LDA #PALETTE_UPLOAD::FULL
    case 0xC304: if (c.p & 0x20) c.execute<0xA9>(0x000018, 2); else c.execute<0xA9>(0x008D18, 3); return true;
    // src/unknown/EF/EFD95E.asm:41 STA PALETTE_UPLOAD_MODE
    case 0xC306: c.execute<0x8D>(0x000030, 3); return true;
    // src/unknown/EF/EFD95E.asm:41 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xEFC304.
    case 0xC307: c.execute<0x30>(0x000000, 2); return true;
    // src/unknown/EF/EFD95E.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC309: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    case 0xC30B: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xC30C: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC30D: c.execute<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EFD9F3.asm:5 LDA DEBUG_MODE_NUMBER
    case 0xC30F: c.execute<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFD9F3.asm:6 BEQ @UNKNOWN0
    case 0xC312: c.execute<0xF0>(0x000006, 2); return true;
    // src/unknown/EF/EFD9F3.asm:7 JSL UNKNOWN_EFD95E
    case 0xC314: c.execute<0x22>(0xEFC269, 4); return true;
    // src/unknown/EF/EFD9F3.asm:8 BRA @UNKNOWN1
    case 0xC318: c.execute<0x80>(0x000004, 2); return true;
    // src/unknown/EF/EFD9F3.asm:10 JSL UNKNOWN_C47F87
    case 0xC31A: c.execute<0x22>(0xC45C1A, 4); return true;
    // include/macros.asm:30 RTL
    case 0xC31E: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC31F: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xC321: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xC322: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xC323: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFC323.
    case 0xC325: c.execute<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xC326: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xC327: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFC327.
    case 0xC329: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xC32A: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xC32C: if (c.p & 0x20) c.execute<0xA9>(0x00007F, 2); else c.execute<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFC32C.
    case 0xC32E: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xC32F: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EFDA05.asm:8 JSL UNKNOWN_C08726
    case 0xC331: c.execute<0x22>(0xC0871F, 4); return true;
    // src/unknown/EF/EFDA05.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC335: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFDA05.asm:10 LDA #$17
    case 0xC337: if (c.p & 0x20) c.execute<0xA9>(0x000017, 2); else c.execute<0xA9>(0x008D17, 3); return true;
    // src/unknown/EF/EFDA05.asm:11 STA TM_MIRROR
    case 0xC339: c.execute<0x8D>(0x00001A, 3); return true;
    // src/unknown/EF/EFDA05.asm:11 STA TM_MIRROR
    // Overlapping static entry reached from 0xEFC337.
    case 0xC33A: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:11 STA TM_MIRROR
    // Overlapping static entry reached from 0xEFC33A.
    case 0xC33B: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFDA05.asm:12 LDA #$2F
    case 0xC33C: if (c.p & 0x20) c.execute<0xA9>(0x00002F, 2); else c.execute<0xA9>(0x008D2F, 3); return true;
    // src/unknown/EF/EFDA05.asm:13 STA SPRITEMAP_BANK
    case 0xC33E: c.execute<0x8D>(0x00000B, 3); return true;
    // src/unknown/EF/EFDA05.asm:13 STA SPRITEMAP_BANK
    // Overlapping static entry reached from 0xEFC33C.
    case 0xC33F: c.execute<0x0B>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:13 STA SPRITEMAP_BANK
    // Overlapping static entry reached from 0xEFC33F.
    case 0xC340: c.execute<0x00>(0x0000C2, 2); return true;
    // src/unknown/EF/EFDA05.asm:14 REP #PROC_FLAGS::ACCUM8
    case 0xC341: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFDA05.asm:15 STZ UNREAD_7EB55D
    case 0xC343: c.execute<0x9C>(0x00B70E, 3); return true;
    // src/unknown/EF/EFDA05.asm:16 STZ DEBUG_MENU_BUTTONS_PRESSED
    case 0xC346: c.execute<0x9C>(0x00B708, 3); return true;
    // src/unknown/EF/EFDA05.asm:17 STZ DEBUG_MENU_CURSOR_POSITION
    case 0xC349: c.execute<0x9C>(0x00B706, 3); return true;
    // src/unknown/EF/EFDA05.asm:18 STZ UNREAD_7EB551
    case 0xC34C: c.execute<0x9C>(0x00B702, 3); return true;
    // src/unknown/EF/EFDA05.asm:19 STZ VIEW_ATTRIBUTE_MODE
    case 0xC34F: c.execute<0x9C>(0x00B710, 3); return true;
    // src/unknown/EF/EFDA05.asm:20 LDA #9
    case 0xC352: if (c.p & 0x20) c.execute<0xA9>(0x000009, 2); else c.execute<0xA9>(0x000009, 3); return true;
    // src/unknown/EF/EFDA05.asm:20 LDA #9
    // Overlapping static entry reached from 0xEFC352.
    case 0xC354: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:21 JSL UNKNOWN_C08D79
    case 0xC355: c.execute<0x22>(0xC08D6A, 4); return true;
    // src/unknown/EF/EFDA05.asm:22 LDY #VRAM::OVERWORLD_LAYER_1_TILES
    case 0xC359: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFDA05.asm:22 LDY #VRAM::OVERWORLD_LAYER_1_TILES
    // Overlapping static entry reached from 0xEFC359.
    case 0xC35B: c.execute<0x00>(0x0000A2, 2); return true;
    // src/unknown/EF/EFDA05.asm:23 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP
    case 0xC35C: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x003800, 3); return true;
    // src/unknown/EF/EFDA05.asm:23 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP
    // Overlapping static entry reached from 0xEFC35C.
    case 0xC35E: c.execute<0x38>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:24 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xC35F: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFDA05.asm:24 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xEFC35F.
    case 0xC361: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:25 JSL SET_BG1_VRAM_LOCATION
    case 0xC362: c.execute<0x22>(0xC08D8F, 4); return true;
    // src/unknown/EF/EFDA05.asm:26 LDY #VRAM::OVERWORLD_LAYER_2_TILES
    case 0xC366: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x002000, 3); return true;
    // src/unknown/EF/EFDA05.asm:26 LDY #VRAM::OVERWORLD_LAYER_2_TILES
    // Overlapping static entry reached from 0xEFC366.
    case 0xC368: c.execute<0x20>(0x0000A2, 3); return true;
    // src/unknown/EF/EFDA05.asm:27 LDX #VRAM::OVERWORLD_LAYER_2_TILEMAP
    case 0xC369: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x005800, 3); return true;
    // src/unknown/EF/EFDA05.asm:27 LDX #VRAM::OVERWORLD_LAYER_2_TILEMAP
    // Overlapping static entry reached from 0xEFC369.
    case 0xC36B: c.execute<0x58>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:28 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xC36C: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFDA05.asm:28 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xEFC36C.
    case 0xC36E: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:29 JSL SET_BG2_VRAM_LOCATION
    case 0xC36F: c.execute<0x22>(0xC08DCF, 4); return true;
    // src/unknown/EF/EFDA05.asm:30 LDY #VRAM::TEXT_LAYER_TILES
    case 0xC373: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x006000, 3); return true;
    // src/unknown/EF/EFDA05.asm:30 LDY #VRAM::TEXT_LAYER_TILES
    // Overlapping static entry reached from 0xEFC373.
    case 0xC375: c.execute<0x60>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:31 LDX #VRAM::TEXT_LAYER_TILEMAP
    case 0xC376: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x007C00, 3); return true;
    // src/unknown/EF/EFDA05.asm:31 LDX #VRAM::TEXT_LAYER_TILEMAP
    // Overlapping static entry reached from 0xEFC376.
    case 0xC378: c.execute<0x7C>(0x0000A9, 3); return true;
    // src/unknown/EF/EFDA05.asm:32 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC379: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFDA05.asm:32 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xEFC379.
    case 0xC37B: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:33 JSL SET_BG3_VRAM_LOCATION
    case 0xC37C: c.execute<0x22>(0xC08E0D, 4); return true;
    // src/unknown/EF/EFDA05.asm:34 LDA #$02
    case 0xC380: if (c.p & 0x20) c.execute<0xA9>(0x000002, 2); else c.execute<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EFDA05.asm:34 LDA #$02
    // Overlapping static entry reached from 0xEFC380.
    case 0xC382: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:35 JSL SET_OAM_SIZE
    case 0xC383: c.execute<0x22>(0xC08D83, 4); return true;
    // src/unknown/EF/EFDA05.asm:36 LDA #0
    case 0xC387: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFDA05.asm:36 LDA #0
    // Overlapping static entry reached from 0xEFC387.
    case 0xC389: c.execute<0x00>(0x000087, 2); return true;
    // src/unknown/EF/EFDA05.asm:37 STA [@VIRTUAL06]
    case 0xC38A: c.execute<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xC38C: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xC38E: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xC390: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xC392: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFDA05.asm:39 LDY #0
    case 0xC394: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFDA05.asm:39 LDY #0
    // Overlapping static entry reached from 0xEFC394.
    case 0xC396: c.execute<0x00>(0x0000BB, 2); return true;
    // src/unknown/EF/EFDA05.asm:40 TYX
    case 0xC397: c.execute<0xBB>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC398: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFDA05.asm:42 LDA #3
    case 0xC39A: if (c.p & 0x20) c.execute<0xA9>(0x000003, 2); else c.execute<0xA9>(0x002203, 3); return true;
    // src/unknown/EF/EFDA05.asm:43 JSL PREPARE_VRAM_COPY
    case 0xC39C: c.execute<0x22>(0xC08616, 4); return true;
    // src/unknown/EF/EFDA05.asm:43 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFC39A.
    case 0xC39D: c.execute<0x16>(0x000086, 2); return true;
    // src/unknown/EF/EFDA05.asm:43 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFC39D.
    case 0xC39F: if (c.p & 0x10) c.execute<0xC0>(0x0000A9, 2); else c.execute<0xC0>(0x00E6A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xC3A0: if (c.p & 0x20) c.execute<0xA9>(0x0000E6, 2); else c.execute<0xA9>(0x00DAE6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFC39F.
    case 0xC3A1: c.execute<0xE6>(0x0000DA, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFC3A0.
    case 0xC3A2: c.execute<0xDA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    case 0xC3A3: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xC3A5: if (c.p & 0x20) c.execute<0xA9>(0x0000EF, 2); else c.execute<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFC3A5.
    case 0xC3A7: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xC3A8: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFDA05.asm:46 LDX #BPP4PALETTE_SIZE * 16
    case 0xC3AA: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000200, 3); return true;
    // src/unknown/EF/EFDA05.asm:46 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xEFC3AA.
    case 0xC3AC: c.execute<0x02>(0x0000A9, 2); return true;
    // src/unknown/EF/EFDA05.asm:47 LDA #.LOWORD(PALETTES)
    case 0xC3AD: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000200, 3); return true;
    // src/unknown/EF/EFDA05.asm:47 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xEFC3AD.
    case 0xC3AF: c.execute<0x02>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:48 JSL MEMCPY16
    case 0xC3B0: c.execute<0x22>(0xC08EC3, 4); return true;
    // src/unknown/EF/EFDA05.asm:49 JSL UNKNOWN_EFD95E
    case 0xC3B4: c.execute<0x22>(0xEFC269, 4); return true;
    // src/unknown/EF/EFDA05.asm:50 STZ ENTITY_ALLOCATION_MIN_SLOT
    case 0xC3B8: c.execute<0x9C>(0x000A42, 3); return true;
    // src/unknown/EF/EFDA05.asm:51 LDA #1
    case 0xC3BB: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFDA05.asm:51 LDA #1
    // Overlapping static entry reached from 0xEFC3BB.
    case 0xC3BD: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFDA05.asm:52 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC3BE: c.execute<0x8D>(0x000A44, 3); return true;
    // src/unknown/EF/EFDA05.asm:53 LDY #52
    case 0xC3C1: if (c.p & 0x10) c.execute<0xA0>(0x000034, 2); else c.execute<0xA0>(0x000034, 3); return true;
    // src/unknown/EF/EFDA05.asm:53 LDY #52
    // Overlapping static entry reached from 0xEFC3C1.
    case 0xC3C3: c.execute<0x00>(0x0000BB, 2); return true;
    // src/unknown/EF/EFDA05.asm:54 TYX
    case 0xC3C4: c.execute<0xBB>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:55 LDA #EVENT_SCRIPT::EVENT_000
    case 0xC3C5: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFDA05.asm:55 LDA #EVENT_SCRIPT::EVENT_000
    // Overlapping static entry reached from 0xEFC3C5.
    case 0xC3C7: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:56 JSL INIT_ENTITY_WIPE
    case 0xC3C8: c.execute<0x22>(0xC092D4, 4); return true;
    // src/unknown/EF/EFDA05.asm:57 STA DEBUG_CURSOR_ENTITY
    case 0xC3CC: c.execute<0x8D>(0x00B704, 3); return true;
    // src/unknown/EF/EFDA05.asm:58 STZ NPC_SPAWNS_ENABLED
    case 0xC3CF: c.execute<0x9C>(0x004DDE, 3); return true;
    // src/unknown/EF/EFDA05.asm:59 STZ ENEMY_SPAWNS_ENABLED
    case 0xC3D2: c.execute<0x9C>(0x004DE0, 3); return true;
    // include/macros.asm:25 PLD
    case 0xC3D5: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xC3D6: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC3D7: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xC3D9: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xC3DA: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xC3DB: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xC3DC: if (c.p & 0x20) c.execute<0x69>(0x0000EA, 2); else c.execute<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFC3DC.
    case 0xC3DE: c.execute<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xC3DF: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xC3E0: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:13 STX @LOCAL03
    case 0xC3E1: c.execute<0x86>(0x000014, 2); return true;
    // src/unknown/EF/EFDABD.asm:13 STX @LOCAL03
    // Overlapping static entry reached from 0xEFC3DE.
    case 0xC3E2: c.execute<0x14>(0x000085, 2); return true;
    // src/unknown/EF/EFDABD.asm:14 STA @VIRTUAL04
    case 0xC3E3: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFDABD.asm:14 STA @VIRTUAL04
    // Overlapping static entry reached from 0xEFC3E2.
    case 0xC3E4: c.execute<0x04>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xC3E5: c.execute<0xA5>(0x000024, 2); return true;
    // include/macros.asm:836 LDA src
    // Overlapping static entry reached from 0xEFC3E4.
    case 0xC3E6: c.execute<0x24>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xC3E7: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Overlapping static entry reached from 0xEFC3E6.
    case 0xC3E8: c.execute<0x06>(0x0000A5, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xC3E9: c.execute<0xA5>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Overlapping static entry reached from 0xEFC3E8.
    case 0xC3EA: c.execute<0x26>(0x000085, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xC3EB: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Overlapping static entry reached from 0xEFC3EA.
    case 0xC3EC: c.execute<0x08>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:16 LDA #0
    case 0xC3ED: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFDABD.asm:16 LDA #0
    // Overlapping static entry reached from 0xEFC3ED.
    case 0xC3EF: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFDABD.asm:17 STA @VIRTUAL02
    case 0xC3F0: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFDABD.asm:18 LDA #64
    case 0xC3F2: if (c.p & 0x20) c.execute<0xA9>(0x000040, 2); else c.execute<0xA9>(0x000040, 3); return true;
    // src/unknown/EF/EFDABD.asm:18 LDA #64
    // Overlapping static entry reached from 0xEFC3F2.
    case 0xC3F4: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDABD.asm:19 JSL SBRK
    case 0xC3F5: c.execute<0x22>(0xC086D7, 4); return true;
    // src/unknown/EF/EFDABD.asm:20 TAY
    case 0xC3F9: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:21 TYX
    case 0xC3FA: c.execute<0xBB>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:22 BRA @UNKNOWN1
    case 0xC3FB: c.execute<0x80>(0x000012, 2); return true;
    // src/unknown/EF/EFDABD.asm:24 AND #$00FF
    case 0xC3FD: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFDABD.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xEFC3FD.
    case 0xC3FF: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EFDABD.asm:25 CLC
    case 0xC400: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:26 ADC #$2000
    case 0xC401: if (c.p & 0x20) c.execute<0x69>(0x000000, 2); else c.execute<0x69>(0x002000, 3); return true;
    // src/unknown/EF/EFDABD.asm:26 ADC #$2000
    // Overlapping static entry reached from 0xEFC401.
    case 0xC403: c.execute<0x20>(0x00009D, 3); return true;
    // src/unknown/EF/EFDABD.asm:27 STA __BSS_START__,X
    case 0xC404: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFDABD.asm:27 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFC403.
    case 0xC406: c.execute<0x00>(0x0000E6, 2); return true;
    // src/unknown/EF/EFDABD.asm:28 INC @VIRTUAL06
    case 0xC407: c.execute<0xE6>(0x000006, 2); return true;
    // src/unknown/EF/EFDABD.asm:29 INX
    case 0xC409: c.execute<0xE8>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:30 INX
    case 0xC40A: c.execute<0xE8>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:31 INC @VIRTUAL02
    case 0xC40B: c.execute<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EFDABD.asm:32 INC @VIRTUAL02
    case 0xC40D: c.execute<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EFDABD.asm:34 LDA [@VIRTUAL06]
    case 0xC40F: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/EF/EFDABD.asm:35 AND #$00FF
    case 0xC411: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFDABD.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xEFC411.
    case 0xC413: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFDABD.asm:36 BNE @UNKNOWN0
    case 0xC414: c.execute<0xD0>(0x0000E7, 2); return true;
    // src/unknown/EF/EFDABD.asm:37 LDA @LOCAL03
    case 0xC416: c.execute<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EFDABD.asm:38 ASL
    case 0xC418: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:39 ASL
    case 0xC419: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:40 ASL
    case 0xC41A: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:41 ASL
    case 0xC41B: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:42 ASL
    case 0xC41C: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:43 CLC
    case 0xC41D: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:44 ADC @VIRTUAL04
    case 0xC41E: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/EF/EFDABD.asm:45 CLC
    case 0xC420: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:46 ADC #$7C00
    case 0xC421: if (c.p & 0x20) c.execute<0x69>(0x000000, 2); else c.execute<0x69>(0x007C00, 3); return true;
    // src/unknown/EF/EFDABD.asm:46 ADC #$7C00
    // Overlapping static entry reached from 0xEFC421.
    case 0xC423: c.execute<0x7C>(0x001285, 3); return true;
    // src/unknown/EF/EFDABD.asm:47 STA @LOCAL02
    case 0xC424: c.execute<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EFDABD.asm:48 LDA #^STACK_START
    case 0xC426: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/unknown/EF/EFDABD.asm:48 LDA #^STACK_START
    // Overlapping static entry reached from 0xEFC426.
    case 0xC428: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFDABD.asm:49 STA @LOCAL00
    case 0xC429: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFDABD.asm:50 LDA @LOCAL02
    case 0xC42B: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EFDABD.asm:51 STA @LOCAL01
    case 0xC42D: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFDABD.asm:52 LDX @VIRTUAL02
    case 0xC42F: c.execute<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFDABD.asm:53 SEP #PROC_FLAGS::ACCUM8
    case 0xC431: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFDABD.asm:54 LDA #0
    case 0xC433: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/unknown/EF/EFDABD.asm:55 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC435: c.execute<0x22>(0xC0862E, 4); return true;
    // src/unknown/EF/EFDABD.asm:55 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC433.
    case 0xC436: c.execute<0x2E>(0x00C086, 3); return true;
    // include/macros.asm:25 PLD
    case 0xC439: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xC43A: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC43B: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xC43D: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xC43E: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xC43F: if (c.p & 0x20) c.execute<0x69>(0x0000EC, 2); else c.execute<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFC43F.
    case 0xC441: c.execute<0xFF>(0xC0A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xC442: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xC443: if (c.p & 0x20) c.execute<0xA9>(0x0000C0, 2); else c.execute<0xA9>(0x00C1C0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFC443.
    case 0xC445: c.execute<0xC1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xC446: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xEFC445.
    case 0xC447: c.execute<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xC448: if (c.p & 0x20) c.execute<0xA9>(0x0000EF, 2); else c.execute<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFC448.
    case 0xC44A: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xC44B: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_menu_options.asm:9 LDX #0
    case 0xC44D: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/system/debug/display_menu_options.asm:9 LDX #0
    // Overlapping static entry reached from 0xEFC44D.
    case 0xC44F: c.execute<0x00>(0x00008A, 2); return true;
    // src/system/debug/display_menu_options.asm:10 TXA
    case 0xC450: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/debug/display_menu_options.asm:11 JSR UNKNOWN_EFDABD
    case 0xC451: c.execute<0x20>(0x00C3D7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xC454: if (c.p & 0x20) c.execute<0xA9>(0x0000E1, 2); else c.execute<0xA9>(0x00C1E1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFC454.
    case 0xC456: c.execute<0xC1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xC457: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xEFC456.
    case 0xC458: c.execute<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xC459: if (c.p & 0x20) c.execute<0xA9>(0x0000EF, 2); else c.execute<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFC459.
    case 0xC45B: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xC45C: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_menu_options.asm:13 LDX #3
    case 0xC45E: if (c.p & 0x10) c.execute<0xA2>(0x000003, 2); else c.execute<0xA2>(0x000003, 3); return true;
    // src/system/debug/display_menu_options.asm:13 LDX #3
    // Overlapping static entry reached from 0xEFC45E.
    case 0xC460: c.execute<0x00>(0x0000A9, 2); return true;
    // src/system/debug/display_menu_options.asm:14 LDA #11
    case 0xC461: if (c.p & 0x20) c.execute<0xA9>(0x00000B, 2); else c.execute<0xA9>(0x00000B, 3); return true;
    // src/system/debug/display_menu_options.asm:14 LDA #11
    // Overlapping static entry reached from 0xEFC461.
    case 0xC463: c.execute<0x00>(0x000020, 2); return true;
    // src/system/debug/display_menu_options.asm:15 JSR UNKNOWN_EFDABD
    case 0xC464: c.execute<0x20>(0x00C3D7, 3); return true;
    // src/system/debug/display_menu_options.asm:16 LDA #6
    case 0xC467: if (c.p & 0x20) c.execute<0xA9>(0x000006, 2); else c.execute<0xA9>(0x000006, 3); return true;
    // src/system/debug/display_menu_options.asm:16 LDA #6
    // Overlapping static entry reached from 0xEFC467.
    case 0xC469: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_menu_options.asm:17 STA @VIRTUAL02
    case 0xC46A: c.execute<0x85>(0x000002, 2); return true;
    // src/system/debug/display_menu_options.asm:18 LDY #0
    case 0xC46C: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/system/debug/display_menu_options.asm:18 LDY #0
    // Overlapping static entry reached from 0xEFC46C.
    case 0xC46E: c.execute<0x00>(0x000084, 2); return true;
    // src/system/debug/display_menu_options.asm:19 STY @LOCAL01
    case 0xC46F: c.execute<0x84>(0x000012, 2); return true;
    // src/system/debug/display_menu_options.asm:20 BRA @UNKNOWN1
    case 0xC471: c.execute<0x80>(0x000035, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xC473: if (c.p & 0x20) c.execute<0xA9>(0x0000E1, 2); else c.execute<0xA9>(0x00C1E1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFC473.
    case 0xC475: c.execute<0xC1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xC476: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xEFC475.
    case 0xC477: c.execute<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xC478: if (c.p & 0x20) c.execute<0xA9>(0x0000EF, 2); else c.execute<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFC477.
    case 0xC479: c.execute<0xEF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFC478.
    case 0xC47A: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xC47B: c.execute<0x85>(0x000008, 2); return true;
    // src/system/debug/display_menu_options.asm:23 TYA
    case 0xC47D: c.execute<0x98>(0x000000, 1); return true;
    // include/macros.asm:594 STA scratch
    case 0xC47E: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    case 0xC480: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    case 0xC481: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    case 0xC482: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    case 0xC483: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    case 0xC484: c.execute<0x65>(0x000004, 2); return true;
    // src/system/debug/display_menu_options.asm:25 CLC
    case 0xC486: c.execute<0x18>(0x000000, 1); return true;
    // src/system/debug/display_menu_options.asm:26 ADC #17
    case 0xC487: if (c.p & 0x20) c.execute<0x69>(0x000011, 2); else c.execute<0x69>(0x000011, 3); return true;
    // src/system/debug/display_menu_options.asm:26 ADC #17
    // Overlapping static entry reached from 0xEFC487.
    case 0xC489: c.execute<0x00>(0x000018, 2); return true;
    // src/system/debug/display_menu_options.asm:27 CLC
    case 0xC48A: c.execute<0x18>(0x000000, 1); return true;
    // src/system/debug/display_menu_options.asm:28 ADC @VIRTUAL06
    case 0xC48B: c.execute<0x65>(0x000006, 2); return true;
    // src/system/debug/display_menu_options.asm:29 STA @VIRTUAL06
    case 0xC48D: c.execute<0x85>(0x000006, 2); return true;
    // src/system/debug/display_menu_options.asm:30 STA @LOCAL00
    case 0xC48F: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_menu_options.asm:31 LDA @VIRTUAL06+2
    case 0xC491: c.execute<0xA5>(0x000008, 2); return true;
    // src/system/debug/display_menu_options.asm:32 STA @LOCAL00+2
    case 0xC493: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_menu_options.asm:33 LDX @VIRTUAL02
    case 0xC495: c.execute<0xA6>(0x000002, 2); return true;
    // src/system/debug/display_menu_options.asm:34 LDA #8
    case 0xC497: if (c.p & 0x20) c.execute<0xA9>(0x000008, 2); else c.execute<0xA9>(0x000008, 3); return true;
    // src/system/debug/display_menu_options.asm:34 LDA #8
    // Overlapping static entry reached from 0xEFC497.
    case 0xC499: c.execute<0x00>(0x000020, 2); return true;
    // src/system/debug/display_menu_options.asm:35 JSR UNKNOWN_EFDABD
    case 0xC49A: c.execute<0x20>(0x00C3D7, 3); return true;
    // src/system/debug/display_menu_options.asm:36 INC @VIRTUAL02
    case 0xC49D: c.execute<0xE6>(0x000002, 2); return true;
    // src/system/debug/display_menu_options.asm:37 INC @VIRTUAL02
    case 0xC49F: c.execute<0xE6>(0x000002, 2); return true;
    // src/system/debug/display_menu_options.asm:38 INC @VIRTUAL02
    case 0xC4A1: c.execute<0xE6>(0x000002, 2); return true;
    // src/system/debug/display_menu_options.asm:39 LDY @LOCAL01
    case 0xC4A3: c.execute<0xA4>(0x000012, 2); return true;
    // src/system/debug/display_menu_options.asm:40 INY
    case 0xC4A5: c.execute<0xC8>(0x000000, 1); return true;
    // src/system/debug/display_menu_options.asm:41 STY @LOCAL01
    case 0xC4A6: c.execute<0x84>(0x000012, 2); return true;
    // src/system/debug/display_menu_options.asm:43 CPY #7
    case 0xC4A8: if (c.p & 0x10) c.execute<0xC0>(0x000007, 2); else c.execute<0xC0>(0x000007, 3); return true;
    // src/system/debug/display_menu_options.asm:43 CPY #7
    // Overlapping static entry reached from 0xEFC4A8.
    case 0xC4AA: c.execute<0x00>(0x000090, 2); return true;
    // src/system/debug/display_menu_options.asm:44 BCC @UNKNOWN0
    case 0xC4AB: c.execute<0x90>(0x0000C6, 2); return true;
    // include/macros.asm:25 PLD
    case 0xC4AD: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xC4AE: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC4AF: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xC4B1: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xC4B2: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xC4B3: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xC4B4: if (c.p & 0x20) c.execute<0x69>(0x0000EC, 2); else c.execute<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFC4B4.
    case 0xC4B6: c.execute<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xC4B7: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xC4B8: c.execute<0x68>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:11 TAY
    case 0xC4B9: c.execute<0xA8>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:12 STY @LOCAL02
    case 0xC4BA: c.execute<0x84>(0x000012, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:13 LDA #8
    case 0xC4BC: if (c.p & 0x20) c.execute<0xA9>(0x000008, 2); else c.execute<0xA9>(0x000008, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:13 LDA #8
    // Overlapping static entry reached from 0xEFC4BC.
    case 0xC4BE: c.execute<0x00>(0x000022, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:14 JSL SBRK
    case 0xC4BF: c.execute<0x22>(0xC086D7, 4); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:15 STA @VIRTUAL02
    case 0xC4C3: c.execute<0x85>(0x000002, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:16 LDX #3
    case 0xC4C5: if (c.p & 0x10) c.execute<0xA2>(0x000003, 2); else c.execute<0xA2>(0x000003, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:16 LDX #3
    // Overlapping static entry reached from 0xEFC4C5.
    case 0xC4C7: c.execute<0x00>(0x000086, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:17 STX @LOCAL01
    case 0xC4C8: c.execute<0x86>(0x000010, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:18 BRA @UNKNOWN3
    case 0xC4CA: c.execute<0x80>(0x000035, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:20 LDY @LOCAL02
    case 0xC4CC: c.execute<0xA4>(0x000012, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:21 TYA
    case 0xC4CE: c.execute<0x98>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:22 AND #$000F
    case 0xC4CF: if (c.p & 0x20) c.execute<0x29>(0x00000F, 2); else c.execute<0x29>(0x00000F, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:22 AND #$000F
    // Overlapping static entry reached from 0xEFC4CF.
    case 0xC4D1: c.execute<0x00>(0x0000C9, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:23 CMP #10
    case 0xC4D2: if (c.p & 0x20) c.execute<0xC9>(0x00000A, 2); else c.execute<0xC9>(0x00000A, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:23 CMP #10
    // Overlapping static entry reached from 0xEFC4D2.
    case 0xC4D4: c.execute<0x00>(0x000090, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:24 BCC @UNKNOWN1
    case 0xC4D5: c.execute<0x90>(0x000008, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:25 CLC
    case 0xC4D7: c.execute<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:26 ADC #7
    case 0xC4D8: if (c.p & 0x20) c.execute<0x69>(0x000007, 2); else c.execute<0x69>(0x000007, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:26 ADC #7
    // Overlapping static entry reached from 0xEFC4D8.
    case 0xC4DA: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:27 STA @LOCAL00
    case 0xC4DB: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:28 BRA @UNKNOWN2
    case 0xC4DD: c.execute<0x80>(0x000002, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:30 STA @LOCAL00
    case 0xC4DF: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:32 TXA
    case 0xC4E1: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:33 ASL
    case 0xC4E2: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:34 STA @VIRTUAL04
    case 0xC4E3: c.execute<0x85>(0x000004, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:35 LDA @VIRTUAL02
    case 0xC4E5: c.execute<0xA5>(0x000002, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:36 CLC
    case 0xC4E7: c.execute<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:37 ADC @VIRTUAL04
    case 0xC4E8: c.execute<0x65>(0x000004, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:38 TAX
    case 0xC4EA: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:39 LDA @LOCAL00
    case 0xC4EB: c.execute<0xA5>(0x00000E, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:40 CLC
    case 0xC4ED: c.execute<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:41 ADC #$2030 ;0 tile, priority
    case 0xC4EE: if (c.p & 0x20) c.execute<0x69>(0x000030, 2); else c.execute<0x69>(0x002030, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:41 ADC #$2030 ;0 tile, priority
    // Overlapping static entry reached from 0xEFC4EE.
    case 0xC4F0: c.execute<0x20>(0x00009D, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:42 STA __BSS_START__,X
    case 0xC4F1: c.execute<0x9D>(0x000000, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:42 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFC4F0.
    case 0xC4F3: c.execute<0x00>(0x000098, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:43 TYA
    case 0xC4F4: c.execute<0x98>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:44 LSR
    case 0xC4F5: c.execute<0x4A>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:45 LSR
    case 0xC4F6: c.execute<0x4A>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:46 LSR
    case 0xC4F7: c.execute<0x4A>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:47 LSR
    case 0xC4F8: c.execute<0x4A>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:48 TAY
    case 0xC4F9: c.execute<0xA8>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:49 STY @LOCAL02
    case 0xC4FA: c.execute<0x84>(0x000012, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:50 LDX @LOCAL01
    case 0xC4FC: c.execute<0xA6>(0x000010, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:51 DEX
    case 0xC4FE: c.execute<0xCA>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:52 STX @LOCAL01
    case 0xC4FF: c.execute<0x86>(0x000010, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:54 CPX #.LOWORD(-1)
    case 0xC501: if (c.p & 0x10) c.execute<0xE0>(0x0000FF, 2); else c.execute<0xE0>(0x00FFFF, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:54 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFC501.
    case 0xC503: c.execute<0xFF>(0xA5C6D0, 4); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:55 BNE @UNKNOWN0
    case 0xC504: c.execute<0xD0>(0x0000C6, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:56 LDA @VIRTUAL02
    case 0xC506: c.execute<0xA5>(0x000002, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:56 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xEFC503.
    case 0xC507: c.execute<0x02>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    case 0xC508: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xC509: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC50A: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xC50C: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xC50D: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xC50E: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xC50F: if (c.p & 0x20) c.execute<0x69>(0x0000E8, 2); else c.execute<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFC50F.
    case 0xC511: c.execute<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xC512: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xC513: c.execute<0x68>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:13 STA @VIRTUAL04
    case 0xC514: c.execute<0x85>(0x000004, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:13 STA @VIRTUAL04
    // Overlapping static entry reached from 0xEFC511.
    case 0xC515: c.execute<0x04>(0x000085, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:14 STA @LOCAL04
    case 0xC516: c.execute<0x85>(0x000016, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:14 STA @LOCAL04
    // Overlapping static entry reached from 0xEFC515.
    case 0xC517: c.execute<0x16>(0x0000A0, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:15 LDY #1
    case 0xC518: if (c.p & 0x10) c.execute<0xA0>(0x000001, 2); else c.execute<0xA0>(0x000001, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:15 LDY #1
    // Overlapping static entry reached from 0xEFC517.
    case 0xC519: c.execute<0x01>(0x000000, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:15 LDY #1
    // Overlapping static entry reached from 0xEFC518.
    case 0xC51A: c.execute<0x00>(0x000084, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:16 STY @LOCAL03
    case 0xC51B: c.execute<0x84>(0x000014, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:17 LDA #8
    case 0xC51D: if (c.p & 0x20) c.execute<0xA9>(0x000008, 2); else c.execute<0xA9>(0x000008, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:17 LDA #8
    // Overlapping static entry reached from 0xEFC51D.
    case 0xC51F: c.execute<0x00>(0x000022, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:18 JSL SBRK
    case 0xC520: c.execute<0x22>(0xC086D7, 4); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:19 STA @VIRTUAL02
    case 0xC524: c.execute<0x85>(0x000002, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:20 STA @LOCAL02
    case 0xC526: c.execute<0x85>(0x000012, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:21 LDX #3
    case 0xC528: if (c.p & 0x10) c.execute<0xA2>(0x000003, 2); else c.execute<0xA2>(0x000003, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:21 LDX #3
    // Overlapping static entry reached from 0xEFC528.
    case 0xC52A: c.execute<0x00>(0x000086, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:22 STX @LOCAL01
    case 0xC52B: c.execute<0x86>(0x000010, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:23 BRA @UNKNOWN3
    case 0xC52D: c.execute<0x80>(0x000049, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:25 LDY @LOCAL03
    case 0xC52F: c.execute<0xA4>(0x000014, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:26 LDA @LOCAL04
    case 0xC531: c.execute<0xA5>(0x000016, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:27 STA @VIRTUAL04
    case 0xC533: c.execute<0x85>(0x000004, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:28 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC535: c.execute<0x22>(0xC0913D, 4); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:29 LDY #10
    case 0xC539: if (c.p & 0x10) c.execute<0xA0>(0x00000A, 2); else c.execute<0xA0>(0x00000A, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:29 LDY #10
    // Overlapping static entry reached from 0xEFC539.
    case 0xC53B: c.execute<0x00>(0x000022, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:30 JSL MODULUS16
    case 0xC53C: c.execute<0x22>(0xC09213, 4); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:31 CMP #10
    case 0xC540: if (c.p & 0x20) c.execute<0xC9>(0x00000A, 2); else c.execute<0xC9>(0x00000A, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:31 CMP #10
    // Overlapping static entry reached from 0xEFC540.
    case 0xC542: c.execute<0x00>(0x000090, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:32 BCC @UNKNOWN1
    case 0xC543: c.execute<0x90>(0x000008, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:33 CLC
    case 0xC545: c.execute<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:34 ADC #7
    case 0xC546: if (c.p & 0x20) c.execute<0x69>(0x000007, 2); else c.execute<0x69>(0x000007, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:34 ADC #7
    // Overlapping static entry reached from 0xEFC546.
    case 0xC548: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:35 STA @LOCAL00
    case 0xC549: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:36 BRA @UNKNOWN2
    case 0xC54B: c.execute<0x80>(0x000002, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:38 STA @LOCAL00
    case 0xC54D: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:40 TXA
    case 0xC54F: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:41 ASL
    case 0xC550: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:42 PHA
    case 0xC551: c.execute<0x48>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:43 LDA @LOCAL02
    case 0xC552: c.execute<0xA5>(0x000012, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:44 STA @VIRTUAL02
    case 0xC554: c.execute<0x85>(0x000002, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:45 PLY
    case 0xC556: c.execute<0x7A>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:46 STY @VIRTUAL02
    case 0xC557: c.execute<0x84>(0x000002, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:47 CLC
    case 0xC559: c.execute<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:48 ADC @VIRTUAL02
    case 0xC55A: c.execute<0x65>(0x000002, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:49 TAX
    case 0xC55C: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:50 LDA @LOCAL00
    case 0xC55D: c.execute<0xA5>(0x00000E, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:51 CLC
    case 0xC55F: c.execute<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:52 ADC #$2030 ;0 tile, priority
    case 0xC560: if (c.p & 0x20) c.execute<0x69>(0x000030, 2); else c.execute<0x69>(0x002030, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:52 ADC #$2030 ;0 tile, priority
    // Overlapping static entry reached from 0xEFC560.
    case 0xC562: c.execute<0x20>(0x00009D, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:53 STA __BSS_START__,X
    case 0xC563: c.execute<0x9D>(0x000000, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:53 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFC562.
    case 0xC565: c.execute<0x00>(0x0000A4, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:54 LDY @LOCAL03
    case 0xC566: c.execute<0xA4>(0x000014, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:55 TYA
    case 0xC568: c.execute<0x98>(0x000000, 1); return true;
    // include/macros.asm:555 STA scratch
    case 0xC569: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    case 0xC56B: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    case 0xC56C: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    case 0xC56D: c.execute<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    case 0xC56F: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:57 TAY
    case 0xC570: c.execute<0xA8>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:58 STY @LOCAL03
    case 0xC571: c.execute<0x84>(0x000014, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:59 LDX @LOCAL01
    case 0xC573: c.execute<0xA6>(0x000010, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:60 DEX
    case 0xC575: c.execute<0xCA>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:61 STX @LOCAL01
    case 0xC576: c.execute<0x86>(0x000010, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:63 CPX #.LOWORD(-1)
    case 0xC578: if (c.p & 0x10) c.execute<0xE0>(0x0000FF, 2); else c.execute<0xE0>(0x00FFFF, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:63 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFC578.
    case 0xC57A: c.execute<0xFF>(0xA5B2D0, 4); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:64 BNE @UNKNOWN0
    case 0xC57B: c.execute<0xD0>(0x0000B2, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:65 LDA @LOCAL02
    case 0xC57D: c.execute<0xA5>(0x000012, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:65 LDA @LOCAL02
    // Overlapping static entry reached from 0xEFC57A.
    case 0xC57E: c.execute<0x12>(0x000085, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:66 STA @VIRTUAL02
    case 0xC57F: c.execute<0x85>(0x000002, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:66 STA @VIRTUAL02
    // Overlapping static entry reached from 0xEFC57E.
    case 0xC580: c.execute<0x02>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    case 0xC581: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xC582: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC583: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xC585: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xC586: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xC587: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xC588: if (c.p & 0x20) c.execute<0x69>(0x0000EC, 2); else c.execute<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFC588.
    case 0xC58A: c.execute<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xC58B: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xC58C: c.execute<0x68>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:10 TAY
    case 0xC58D: c.execute<0xA8>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:11 STY @LOCAL02
    case 0xC58E: c.execute<0x84>(0x000012, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:12 LDA #16
    case 0xC590: if (c.p & 0x20) c.execute<0xA9>(0x000010, 2); else c.execute<0xA9>(0x000010, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:12 LDA #16
    // Overlapping static entry reached from 0xEFC590.
    case 0xC592: c.execute<0x00>(0x000022, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:13 JSL SBRK
    case 0xC593: c.execute<0x22>(0xC086D7, 4); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:14 STA @VIRTUAL02
    case 0xC597: c.execute<0x85>(0x000002, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:15 LDX #0
    case 0xC599: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:15 LDX #0
    // Overlapping static entry reached from 0xEFC599.
    case 0xC59B: c.execute<0x00>(0x000086, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:16 STX @LOCAL01
    case 0xC59C: c.execute<0x86>(0x000010, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:17 BRA @UNKNOWN3
    case 0xC59E: c.execute<0x80>(0x00002D, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:19 LDY @LOCAL02
    case 0xC5A0: c.execute<0xA4>(0x000012, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:20 TYA
    case 0xC5A2: c.execute<0x98>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:21 AND #$0080
    case 0xC5A3: if (c.p & 0x20) c.execute<0x29>(0x000080, 2); else c.execute<0x29>(0x000080, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:21 AND #$0080
    // Overlapping static entry reached from 0xEFC5A3.
    case 0xC5A5: c.execute<0x00>(0x0000F0, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:22 BEQ @UNKNOWN1
    case 0xC5A6: c.execute<0xF0>(0x000007, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:23 LDA #$2031 ;1 tile, priority
    case 0xC5A8: if (c.p & 0x20) c.execute<0xA9>(0x000031, 2); else c.execute<0xA9>(0x002031, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:23 LDA #$2031 ;1 tile, priority
    // Overlapping static entry reached from 0xEFC5A8.
    case 0xC5AA: c.execute<0x20>(0x000E85, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:24 STA @LOCAL00
    case 0xC5AB: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:25 BRA @UNKNOWN2
    case 0xC5AD: c.execute<0x80>(0x000005, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:27 LDA #$2030 ;0 tile, priority
    case 0xC5AF: if (c.p & 0x20) c.execute<0xA9>(0x000030, 2); else c.execute<0xA9>(0x002030, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:27 LDA #$2030 ;0 tile, priority
    // Overlapping static entry reached from 0xEFC5AF.
    case 0xC5B1: c.execute<0x20>(0x000E85, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:28 STA @LOCAL00
    case 0xC5B2: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:30 TXA
    case 0xC5B4: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:31 ASL
    case 0xC5B5: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:32 STA @VIRTUAL04
    case 0xC5B6: c.execute<0x85>(0x000004, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:33 LDA @VIRTUAL02
    case 0xC5B8: c.execute<0xA5>(0x000002, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:34 CLC
    case 0xC5BA: c.execute<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:35 ADC @VIRTUAL04
    case 0xC5BB: c.execute<0x65>(0x000004, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:36 TAX
    case 0xC5BD: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:37 LDA @LOCAL00
    case 0xC5BE: c.execute<0xA5>(0x00000E, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:38 STA __BSS_START__,X
    case 0xC5C0: c.execute<0x9D>(0x000000, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:39 TYA
    case 0xC5C3: c.execute<0x98>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:40 ASL
    case 0xC5C4: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:41 TAY
    case 0xC5C5: c.execute<0xA8>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:42 STY @LOCAL02
    case 0xC5C6: c.execute<0x84>(0x000012, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:43 LDX @LOCAL01
    case 0xC5C8: c.execute<0xA6>(0x000010, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:44 INX
    case 0xC5CA: c.execute<0xE8>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:45 STX @LOCAL01
    case 0xC5CB: c.execute<0x86>(0x000010, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:47 CPX #8
    case 0xC5CD: if (c.p & 0x10) c.execute<0xE0>(0x000008, 2); else c.execute<0xE0>(0x000008, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:47 CPX #8
    // Overlapping static entry reached from 0xEFC5CD.
    case 0xC5CF: c.execute<0x00>(0x000090, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:48 BCC @UNKNOWN0
    case 0xC5D0: c.execute<0x90>(0x0000CE, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:49 LDA @VIRTUAL02
    case 0xC5D2: c.execute<0xA5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    case 0xC5D4: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xC5D5: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC5D6: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xC5D8: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xC5D9: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xC5DA: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFC5DA.
    case 0xC5DC: c.execute<0xFF>(0x28A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xC5DD: c.execute<0x5B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:8 LDA #.LOWORD(GAME_STATE)+game_state::leader_x_coord
    case 0xC5DE: if (c.p & 0x20) c.execute<0xA9>(0x000028, 2); else c.execute<0xA9>(0x009B28, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:8 LDA #.LOWORD(GAME_STATE)+game_state::leader_x_coord
    // Overlapping static entry reached from 0xEFC5DE.
    case 0xC5E0: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:9 STA @VIRTUAL04
    case 0xC5E1: c.execute<0x85>(0x000004, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:10 LDX @VIRTUAL04
    case 0xC5E3: c.execute<0xA6>(0x000004, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:11 LDA __BSS_START__,X
    case 0xC5E5: c.execute<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:12 XBA
    case 0xC5E8: c.execute<0xEB>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:13 AND #$00FF
    case 0xC5E9: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xEFC5E9.
    case 0xC5EB: c.execute<0x00>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:14 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xC5EC: c.execute<0x20>(0x00C4AF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:15 TAX
    case 0xC5EF: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:16 LDA #^__BSS_START__
    case 0xC5F0: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:16 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC5F0.
    case 0xC5F2: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:17 STA @LOCAL00
    case 0xC5F3: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:18 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 26
    case 0xC5F5: if (c.p & 0x20) c.execute<0xA9>(0x000044, 2); else c.execute<0xA9>(0x007F44, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:18 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 26
    // Overlapping static entry reached from 0xEFC5F5.
    case 0xC5F7: c.execute<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:19 STA @LOCAL01
    case 0xC5F8: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:20 TXY
    case 0xC5FA: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:21 LDX #8
    case 0xC5FB: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:21 LDX #8
    // Overlapping static entry reached from 0xEFC5FB.
    case 0xC5FD: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC5FE: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:23 LDA #0
    case 0xC600: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:24 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC602: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:24 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC600.
    case 0xC603: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:26 LDA #.LOWORD(GAME_STATE)+game_state::leader_y_coord
    case 0xC606: if (c.p & 0x20) c.execute<0xA9>(0x00002C, 2); else c.execute<0xA9>(0x009B2C, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:26 LDA #.LOWORD(GAME_STATE)+game_state::leader_y_coord
    // Overlapping static entry reached from 0xEFC606.
    case 0xC608: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:27 STA @VIRTUAL02
    case 0xC609: c.execute<0x85>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:28 LDX @VIRTUAL02
    case 0xC60B: c.execute<0xA6>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:29 LDA __BSS_START__,X
    case 0xC60D: c.execute<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:30 XBA
    case 0xC610: c.execute<0xEB>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:31 AND #$00FF
    case 0xC611: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xEFC611.
    case 0xC613: c.execute<0x00>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:32 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xC614: c.execute<0x20>(0x00C4AF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:34 TAX
    case 0xC617: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:35 LDA #^__BSS_START__
    case 0xC618: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:35 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC618.
    case 0xC61A: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:36 STA @LOCAL00
    case 0xC61B: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:37 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 26
    case 0xC61D: if (c.p & 0x20) c.execute<0xA9>(0x00004A, 2); else c.execute<0xA9>(0x007F4A, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:37 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 26
    // Overlapping static entry reached from 0xEFC61D.
    case 0xC61F: c.execute<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:38 STA @LOCAL01
    case 0xC620: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:39 TXY
    case 0xC622: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:40 LDX #8
    case 0xC623: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:40 LDX #8
    // Overlapping static entry reached from 0xEFC623.
    case 0xC625: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC626: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:42 LDA #0
    case 0xC628: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:43 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC62A: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:43 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC628.
    case 0xC62B: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:44 LDX @VIRTUAL04
    case 0xC62E: c.execute<0xA6>(0x000004, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:45 LDA __BSS_START__,X
    case 0xC630: c.execute<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:46 LSR
    case 0xC633: c.execute<0x4A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:47 LSR
    case 0xC634: c.execute<0x4A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:48 LSR
    case 0xC635: c.execute<0x4A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:49 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xC636: c.execute<0x20>(0x00C4AF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:51 TAX
    case 0xC639: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:52 LDA #^__BSS_START__
    case 0xC63A: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:52 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC63A.
    case 0xC63C: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:53 STA @LOCAL00
    case 0xC63D: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:54 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 25
    case 0xC63F: if (c.p & 0x20) c.execute<0xA9>(0x000024, 2); else c.execute<0xA9>(0x007F24, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:54 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 25
    // Overlapping static entry reached from 0xEFC63F.
    case 0xC641: c.execute<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:55 STA @LOCAL01
    case 0xC642: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:56 TXY
    case 0xC644: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:57 LDX #8
    case 0xC645: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:57 LDX #8
    // Overlapping static entry reached from 0xEFC645.
    case 0xC647: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xC648: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:59 LDA #0
    case 0xC64A: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:60 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC64C: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:60 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC64A.
    case 0xC64D: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:61 LDX @VIRTUAL02
    case 0xC650: c.execute<0xA6>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:62 LDA __BSS_START__,X
    case 0xC652: c.execute<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:63 LSR
    case 0xC655: c.execute<0x4A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:64 LSR
    case 0xC656: c.execute<0x4A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:65 LSR
    case 0xC657: c.execute<0x4A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:66 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xC658: c.execute<0x20>(0x00C4AF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:68 TAX
    case 0xC65B: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:69 LDA #^__BSS_START__
    case 0xC65C: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:69 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC65C.
    case 0xC65E: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:70 STA @LOCAL00
    case 0xC65F: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:71 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 25
    case 0xC661: if (c.p & 0x20) c.execute<0xA9>(0x00002A, 2); else c.execute<0xA9>(0x007F2A, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:71 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 25
    // Overlapping static entry reached from 0xEFC661.
    case 0xC663: c.execute<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:72 STA @LOCAL01
    case 0xC664: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:73 TXY
    case 0xC666: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:74 LDX #8
    case 0xC667: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:74 LDX #8
    // Overlapping static entry reached from 0xEFC667.
    case 0xC669: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xC66A: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:76 LDA #0
    case 0xC66C: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:77 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC66E: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:77 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC66C.
    case 0xC66F: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:78 LDX @VIRTUAL04
    case 0xC672: c.execute<0xA6>(0x000004, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:79 LDA __BSS_START__,X
    case 0xC674: c.execute<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:80 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xC677: c.execute<0x20>(0x00C4AF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:82 TAX
    case 0xC67A: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:83 LDA #^__BSS_START__
    case 0xC67B: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:83 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC67B.
    case 0xC67D: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:84 STA @LOCAL00
    case 0xC67E: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:85 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 24
    case 0xC680: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x007F04, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:85 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 24
    // Overlapping static entry reached from 0xEFC680.
    case 0xC682: c.execute<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:86 STA @LOCAL01
    case 0xC683: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:87 TXY
    case 0xC685: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:88 LDX #8
    case 0xC686: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:88 LDX #8
    // Overlapping static entry reached from 0xEFC686.
    case 0xC688: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:89 SEP #PROC_FLAGS::ACCUM8
    case 0xC689: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:90 LDA #0
    case 0xC68B: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:91 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC68D: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:91 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC68B.
    case 0xC68E: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:92 LDX @VIRTUAL02
    case 0xC691: c.execute<0xA6>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:93 LDA __BSS_START__,X
    case 0xC693: c.execute<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:94 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xC696: c.execute<0x20>(0x00C4AF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:96 TAX
    case 0xC699: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:97 LDA #^__BSS_START__
    case 0xC69A: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:97 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC69A.
    case 0xC69C: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:98 STA @LOCAL00
    case 0xC69D: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:99 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 24
    case 0xC69F: if (c.p & 0x20) c.execute<0xA9>(0x00000A, 2); else c.execute<0xA9>(0x007F0A, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:99 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 24
    // Overlapping static entry reached from 0xEFC69F.
    case 0xC6A1: c.execute<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:100 STA @LOCAL01
    case 0xC6A2: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:101 TXY
    case 0xC6A4: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:102 LDX #8
    case 0xC6A5: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:102 LDX #8
    // Overlapping static entry reached from 0xEFC6A5.
    case 0xC6A7: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:103 SEP #PROC_FLAGS::ACCUM8
    case 0xC6A8: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:104 LDA #0
    case 0xC6AA: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:105 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC6AC: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:105 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC6AA.
    case 0xC6AD: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:107 LDX @VIRTUAL04
    case 0xC6B0: c.execute<0xA6>(0x000004, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:108 LDA __BSS_START__,X
    case 0xC6B2: c.execute<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:109 XBA
    case 0xC6B5: c.execute<0xEB>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:110 AND #$00FF
    case 0xC6B6: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:110 AND #$00FF
    // Overlapping static entry reached from 0xEFC6B6.
    case 0xC6B8: c.execute<0x00>(0x000048, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:111 PHA
    case 0xC6B9: c.execute<0x48>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:112 LDY #MAP_WIDTH_TILES
    case 0xC6BA: if (c.p & 0x10) c.execute<0xA0>(0x000080, 2); else c.execute<0xA0>(0x000080, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:112 LDY #MAP_WIDTH_TILES
    // Overlapping static entry reached from 0xEFC6BA.
    case 0xC6BC: c.execute<0x00>(0x0000A6, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:113 LDX @VIRTUAL02
    case 0xC6BD: c.execute<0xA6>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:114 LDA __BSS_START__,X
    case 0xC6BF: c.execute<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:115 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC6C2: c.execute<0x22>(0xC0913D, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:116 ASL
    case 0xC6C6: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:117 ASL
    case 0xC6C7: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:118 ASL
    case 0xC6C8: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:119 ASL
    case 0xC6C9: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:120 ASL
    case 0xC6CA: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:121 PLY
    case 0xC6CB: c.execute<0x7A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:122 STY @VIRTUAL02
    case 0xC6CC: c.execute<0x84>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:123 CLC
    case 0xC6CE: c.execute<0x18>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:124 ADC @VIRTUAL02
    case 0xC6CF: c.execute<0x65>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:125 TAX
    case 0xC6D1: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:126 LDA MAP_DATA_PER_SECTOR_MUSIC,X
    case 0xC6D2: c.execute<0xBF>(0xDCD634, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:127 AND #$00FF
    case 0xC6D6: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:127 AND #$00FF
    // Overlapping static entry reached from 0xEFC6D6.
    case 0xC6D8: c.execute<0x00>(0x0000AA, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:128 TAX
    case 0xC6D9: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:129 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xC6DA: c.execute<0x20>(0x00C4AF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:130 TAX
    case 0xC6DD: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:131 LDA #^__BSS_START__
    case 0xC6DE: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:131 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC6DE.
    case 0xC6E0: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:132 STA @LOCAL00
    case 0xC6E1: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:133 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 2, 2
    case 0xC6E3: if (c.p & 0x20) c.execute<0xA9>(0x000042, 2); else c.execute<0xA9>(0x007C42, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:133 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 2, 2
    // Overlapping static entry reached from 0xEFC6E3.
    case 0xC6E5: c.execute<0x7C>(0x001085, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:134 STA @LOCAL01
    case 0xC6E6: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:135 TXY
    case 0xC6E8: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:136 INY
    case 0xC6E9: c.execute<0xC8>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:137 INY
    case 0xC6EA: c.execute<0xC8>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:138 INY
    case 0xC6EB: c.execute<0xC8>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:139 INY
    case 0xC6EC: c.execute<0xC8>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:140 LDX #4
    case 0xC6ED: if (c.p & 0x10) c.execute<0xA2>(0x000004, 2); else c.execute<0xA2>(0x000004, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:140 LDX #4
    // Overlapping static entry reached from 0xEFC6ED.
    case 0xC6EF: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:141 SEP #PROC_FLAGS::ACCUM8
    case 0xC6F0: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:142 LDA #0
    case 0xC6F2: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:143 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC6F4: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:143 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC6F2.
    case 0xC6F5: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:144 LDA CURRENT_SECTOR_ATTRIBUTES
    case 0xC6F8: c.execute<0xAD>(0x004714, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:145 JSR INTEGER_TO_BINARY_DEBUG_TILES
    case 0xC6FB: c.execute<0x20>(0x00C583, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:147 TAX
    case 0xC6FE: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:148 LDA #^__BSS_START__
    case 0xC6FF: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:148 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC6FF.
    case 0xC701: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:149 STA @LOCAL00
    case 0xC702: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:150 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 2, 3
    case 0xC704: if (c.p & 0x20) c.execute<0xA9>(0x000062, 2); else c.execute<0xA9>(0x007C62, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:150 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 2, 3
    // Overlapping static entry reached from 0xEFC704.
    case 0xC706: c.execute<0x7C>(0x001085, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:151 STA @LOCAL01
    case 0xC707: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:152 TXY
    case 0xC709: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:153 LDX #16
    case 0xC70A: if (c.p & 0x10) c.execute<0xA2>(0x000010, 2); else c.execute<0xA2>(0x000010, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:153 LDX #16
    // Overlapping static entry reached from 0xEFC70A.
    case 0xC70C: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:154 SEP #PROC_FLAGS::ACCUM8
    case 0xC70D: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:155 LDA #0
    case 0xC70F: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:156 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC711: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:156 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC70F.
    case 0xC712: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:157 LDA GAME_STATE+game_state::trodden_tile_type
    case 0xC715: c.execute<0xAD>(0x009B32, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:158 JSR INTEGER_TO_BINARY_DEBUG_TILES
    case 0xC718: c.execute<0x20>(0x00C583, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:160 TAX
    case 0xC71B: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:161 LDA #^__BSS_START__
    case 0xC71C: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:161 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC71C.
    case 0xC71E: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:162 STA @LOCAL00
    case 0xC71F: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:163 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 2, 4
    case 0xC721: if (c.p & 0x20) c.execute<0xA9>(0x000082, 2); else c.execute<0xA9>(0x007C82, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:163 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 2, 4
    // Overlapping static entry reached from 0xEFC721.
    case 0xC723: c.execute<0x7C>(0x001085, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:164 STA @LOCAL01
    case 0xC724: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:165 TXY
    case 0xC726: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:166 LDX #16
    case 0xC727: if (c.p & 0x10) c.execute<0xA2>(0x000010, 2); else c.execute<0xA2>(0x000010, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:166 LDX #16
    // Overlapping static entry reached from 0xEFC727.
    case 0xC729: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:167 SEP #PROC_FLAGS::ACCUM8
    case 0xC72A: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:168 LDA #0
    case 0xC72C: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:169 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC72E: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:169 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC72C.
    case 0xC72F: c.execute<0x2E>(0x00C086, 3); return true;
    // include/macros.asm:25 PLD
    case 0xC732: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xC733: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC734: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xC736: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xC737: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xC738: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFC738.
    case 0xC73A: c.execute<0xFF>(0x40A05B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xC73B: c.execute<0x5B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:8 LDY #64
    case 0xC73C: if (c.p & 0x10) c.execute<0xA0>(0x000040, 2); else c.execute<0xA0>(0x000040, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:8 LDY #64
    // Overlapping static entry reached from 0xEFC73C.
    case 0xC73E: c.execute<0x00>(0x0000AD, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:9 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC73F: c.execute<0xAD>(0x009B28, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:10 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC742: c.execute<0x22>(0xC0913D, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:11 STA @VIRTUAL04
    case 0xC746: c.execute<0x85>(0x000004, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:12 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xC748: c.execute<0x20>(0x00C4AF, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:14 TAX
    case 0xC74B: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:15 LDA #^__BSS_START__
    case 0xC74C: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:15 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC74C.
    case 0xC74E: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:16 STA @LOCAL00
    case 0xC74F: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:17 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 25
    case 0xC751: if (c.p & 0x20) c.execute<0xA9>(0x000024, 2); else c.execute<0xA9>(0x007F24, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:17 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 25
    // Overlapping static entry reached from 0xEFC751.
    case 0xC753: c.execute<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:18 STA @LOCAL01
    case 0xC754: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:19 TXY
    case 0xC756: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:20 LDX #8
    case 0xC757: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:20 LDX #8
    // Overlapping static entry reached from 0xEFC757.
    case 0xC759: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xC75A: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:22 LDA #0
    case 0xC75C: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:23 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC75E: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:23 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC75C.
    case 0xC75F: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:24 LDY #64
    case 0xC762: if (c.p & 0x10) c.execute<0xA0>(0x000040, 2); else c.execute<0xA0>(0x000040, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:24 LDY #64
    // Overlapping static entry reached from 0xEFC762.
    case 0xC764: c.execute<0x00>(0x0000AD, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:25 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC765: c.execute<0xAD>(0x009B2C, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:26 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC768: c.execute<0x22>(0xC0913D, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:27 STA @VIRTUAL02
    case 0xC76C: c.execute<0x85>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:28 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xC76E: c.execute<0x20>(0x00C4AF, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:30 TAX
    case 0xC771: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:31 LDA #^__BSS_START__
    case 0xC772: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:31 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC772.
    case 0xC774: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:32 STA @LOCAL00
    case 0xC775: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:33 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 25
    case 0xC777: if (c.p & 0x20) c.execute<0xA9>(0x00002A, 2); else c.execute<0xA9>(0x007F2A, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:33 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 25
    // Overlapping static entry reached from 0xEFC777.
    case 0xC779: c.execute<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:34 STA @LOCAL01
    case 0xC77A: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:35 TXY
    case 0xC77C: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:36 LDX #8
    case 0xC77D: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:36 LDX #8
    // Overlapping static entry reached from 0xEFC77D.
    case 0xC77F: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC780: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:38 LDA #0
    case 0xC782: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:39 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC784: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:39 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC782.
    case 0xC785: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:40 LDX @VIRTUAL02
    case 0xC788: c.execute<0xA6>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:41 LDA @VIRTUAL04
    case 0xC78A: c.execute<0xA5>(0x000004, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:42 JSL UNKNOWN_C0263D
    case 0xC78C: c.execute<0x22>(0xC0264B, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:43 JSR INTEGER_TO_DECIMAL_DEBUG_TILES
    case 0xC790: c.execute<0x20>(0x00C50A, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:45 TAX
    case 0xC793: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:46 LDA #^__BSS_START__
    case 0xC794: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:46 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC794.
    case 0xC796: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:47 STA @LOCAL00
    case 0xC797: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:48 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 21, 25
    case 0xC799: if (c.p & 0x20) c.execute<0xA9>(0x000035, 2); else c.execute<0xA9>(0x007F35, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:48 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 21, 25
    // Overlapping static entry reached from 0xEFC799.
    case 0xC79B: c.execute<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:49 STA @LOCAL01
    case 0xC79C: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:50 TXY
    case 0xC79E: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:51 LDX #8
    case 0xC79F: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:51 LDX #8
    // Overlapping static entry reached from 0xEFC79F.
    case 0xC7A1: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC7A2: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:53 LDA #0
    case 0xC7A4: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:54 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC7A6: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:54 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC7A4.
    case 0xC7A7: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:55 LDA ENEMY_SPAWN_TOO_MANY_ENEMIES_FAILURE_COUNT
    case 0xC7AA: c.execute<0xAD>(0x004DEE, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:56 JSR INTEGER_TO_DECIMAL_DEBUG_TILES
    case 0xC7AD: c.execute<0x20>(0x00C50A, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:58 TAX
    case 0xC7B0: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:59 LDA #^__BSS_START__
    case 0xC7B1: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:59 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC7B1.
    case 0xC7B3: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:60 STA @LOCAL00
    case 0xC7B4: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:61 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 26, 25
    case 0xC7B6: if (c.p & 0x20) c.execute<0xA9>(0x00003A, 2); else c.execute<0xA9>(0x007F3A, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:61 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 26, 25
    // Overlapping static entry reached from 0xEFC7B6.
    case 0xC7B8: c.execute<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:62 STA @LOCAL01
    case 0xC7B9: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:63 TXY
    case 0xC7BB: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:64 LDX #8
    case 0xC7BC: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:64 LDX #8
    // Overlapping static entry reached from 0xEFC7BC.
    case 0xC7BE: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xC7BF: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:66 LDA #0
    case 0xC7C1: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:67 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC7C3: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:67 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC7C1.
    case 0xC7C4: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:69 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC7C7: c.execute<0xAD>(0x0060E6, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:70 BEQ @UNKNOWN2
    case 0xC7CA: c.execute<0xF0>(0x000057, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:71 LDA #0
    case 0xC7CC: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:71 LDA #0
    // Overlapping static entry reached from 0xEFC7CC.
    case 0xC7CE: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:72 STA @VIRTUAL02
    case 0xC7CF: c.execute<0x85>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:73 BRA @UNKNOWN1
    case 0xC7D1: c.execute<0x80>(0x00002C, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:75 LDA @VIRTUAL02
    case 0xC7D3: c.execute<0xA5>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:76 ASL
    case 0xC7D5: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:77 TAX
    case 0xC7D6: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:78 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC7D7: c.execute<0xBD>(0x00A18E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:79 JSR INTEGER_TO_DECIMAL_DEBUG_TILES
    case 0xC7DA: c.execute<0x20>(0x00C50A, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:81 TAX
    case 0xC7DD: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:82 LDA #^__BSS_START__
    case 0xC7DE: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:82 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC7DE.
    case 0xC7E0: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:83 STA @LOCAL00
    case 0xC7E1: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:84 LDA @VIRTUAL02
    case 0xC7E3: c.execute<0xA5>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:85 STA @VIRTUAL04
    case 0xC7E5: c.execute<0x85>(0x000004, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:86 ASL
    case 0xC7E7: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:87 ASL
    case 0xC7E8: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:88 ADC @VIRTUAL04
    case 0xC7E9: c.execute<0x65>(0x000004, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:89 CLC
    case 0xC7EB: c.execute<0x18>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:90 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 6, 26
    case 0xC7EC: if (c.p & 0x20) c.execute<0x69>(0x000046, 2); else c.execute<0x69>(0x007F46, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:90 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 6, 26
    // Overlapping static entry reached from 0xEFC7EC.
    case 0xC7EE: c.execute<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:91 STA @LOCAL01
    case 0xC7EF: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:92 TXY
    case 0xC7F1: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:93 LDX #8
    case 0xC7F2: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:93 LDX #8
    // Overlapping static entry reached from 0xEFC7F2.
    case 0xC7F4: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:94 SEP #PROC_FLAGS::ACCUM8
    case 0xC7F5: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:95 LDA #0
    case 0xC7F7: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:96 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC7F9: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:96 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC7F7.
    case 0xC7FA: c.execute<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:98 INC @VIRTUAL02
    case 0xC7FD: c.execute<0xE6>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:100 LDA @VIRTUAL02
    case 0xC7FF: c.execute<0xA5>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:101 CMP #5
    case 0xC801: if (c.p & 0x20) c.execute<0xC9>(0x000005, 2); else c.execute<0xC9>(0x000005, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:101 CMP #5
    // Overlapping static entry reached from 0xEFC801.
    case 0xC803: c.execute<0x00>(0x0000D0, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:102 BNE @UNKNOWN0
    case 0xC804: c.execute<0xD0>(0x0000CD, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:103 LDA CURRENT_BATTLE_GROUP
    case 0xC806: c.execute<0xAD>(0x004E12, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:104 JSR INTEGER_TO_DECIMAL_DEBUG_TILES
    case 0xC809: c.execute<0x20>(0x00C50A, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:106 TAX
    case 0xC80C: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:107 LDA #^__BSS_START__
    case 0xC80D: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:107 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC80D.
    case 0xC80F: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:108 STA @LOCAL00
    case 0xC810: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:109 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 1, 26
    case 0xC812: if (c.p & 0x20) c.execute<0xA9>(0x000041, 2); else c.execute<0xA9>(0x007F41, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:109 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 1, 26
    // Overlapping static entry reached from 0xEFC812.
    case 0xC814: c.execute<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:110 STA @LOCAL01
    case 0xC815: c.execute<0x85>(0x000010, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:111 TXY
    case 0xC817: c.execute<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:112 LDX #8
    case 0xC818: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:112 LDX #8
    // Overlapping static entry reached from 0xEFC818.
    case 0xC81A: c.execute<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:113 SEP #PROC_FLAGS::ACCUM8
    case 0xC81B: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:114 LDA #0
    case 0xC81D: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:115 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC81F: c.execute<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:115 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC81D.
    case 0xC820: c.execute<0x2E>(0x00C086, 3); return true;
    // include/macros.asm:25 PLD
    case 0xC823: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xC824: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC825: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xC827: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xC828: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xC829: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xC82A: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFC82A.
    case 0xC82C: c.execute<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xC82D: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xC82E: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFDF0B.asm:10 STY @VIRTUAL02
    case 0xC82F: c.execute<0x84>(0x000002, 2); return true;
    // src/unknown/EF/EFDF0B.asm:10 STY @VIRTUAL02
    // Overlapping static entry reached from 0xEFC82C.
    case 0xC830: c.execute<0x02>(0x00009B, 2); return true;
    // src/unknown/EF/EFDF0B.asm:11 TXY
    case 0xC831: c.execute<0x9B>(0x000000, 1); return true;
    // src/unknown/EF/EFDF0B.asm:12 STA @LOCAL00
    case 0xC832: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:13 LDX #0
    case 0xC834: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/unknown/EF/EFDF0B.asm:13 LDX #0
    // Overlapping static entry reached from 0xEFC834.
    case 0xC836: c.execute<0x00>(0x0000AD, 2); return true;
    // src/unknown/EF/EFDF0B.asm:14 LDA VIEW_ATTRIBUTE_MODE
    case 0xC837: c.execute<0xAD>(0x00B710, 3); return true;
    // src/unknown/EF/EFDF0B.asm:15 AND #$00FF
    case 0xC83A: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFDF0B.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xEFC83A.
    case 0xC83C: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:16 BEQ @UNKNOWN1
    case 0xC83D: c.execute<0xF0>(0x000010, 2); return true;
    // src/unknown/EF/EFDF0B.asm:17 CMP #1
    case 0xC83F: if (c.p & 0x20) c.execute<0xC9>(0x000001, 2); else c.execute<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFDF0B.asm:17 CMP #1
    // Overlapping static entry reached from 0xEFC83F.
    case 0xC841: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:18 BEQ @UNKNOWN5
    case 0xC842: c.execute<0xF0>(0x00003C, 2); return true;
    // src/unknown/EF/EFDF0B.asm:19 CMP #2
    case 0xC844: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFDF0B.asm:19 CMP #2
    // Overlapping static entry reached from 0xEFC844.
    case 0xC846: c.execute<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    case 0xC847: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xC849: c.execute<0x4C>(0x00C8D1, 3); return true;
    // src/unknown/EF/EFDF0B.asm:21 JMP @UNKNOWN11
    case 0xC84C: c.execute<0x4C>(0x00C8DB, 3); return true;
    // src/unknown/EF/EFDF0B.asm:23 LDA @LOCAL00
    case 0xC84F: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:24 AND #$0002
    case 0xC851: if (c.p & 0x20) c.execute<0x29>(0x000002, 2); else c.execute<0x29>(0x000002, 3); return true;
    // src/unknown/EF/EFDF0B.asm:24 AND #$0002
    // Overlapping static entry reached from 0xEFC851.
    case 0xC853: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:25 BEQ @UNKNOWN2
    case 0xC854: c.execute<0xF0>(0x000006, 2); return true;
    // src/unknown/EF/EFDF0B.asm:26 LDX #$2061
    case 0xC856: if (c.p & 0x10) c.execute<0xA2>(0x000061, 2); else c.execute<0xA2>(0x002061, 3); return true;
    // src/unknown/EF/EFDF0B.asm:26 LDX #$2061
    // Overlapping static entry reached from 0xEFC856.
    case 0xC858: c.execute<0x20>(0x00DB4C, 3); return true;
    // src/unknown/EF/EFDF0B.asm:27 JMP @UNKNOWN11
    case 0xC859: c.execute<0x4C>(0x00C8DB, 3); return true;
    // src/unknown/EF/EFDF0B.asm:27 JMP @UNKNOWN11
    // Overlapping static entry reached from 0xEFC858.
    case 0xC85B: c.execute<0xC8>(0x000000, 1); return true;
    // src/unknown/EF/EFDF0B.asm:29 LDA @LOCAL00
    case 0xC85C: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:30 AND #$0001
    case 0xC85E: if (c.p & 0x20) c.execute<0x29>(0x000001, 2); else c.execute<0x29>(0x000001, 3); return true;
    // src/unknown/EF/EFDF0B.asm:30 AND #$0001
    // Overlapping static entry reached from 0xEFC85E.
    case 0xC860: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:31 BEQ @UNKNOWN3
    case 0xC861: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EFDF0B.asm:32 LDX #$2062
    case 0xC863: if (c.p & 0x10) c.execute<0xA2>(0x000062, 2); else c.execute<0xA2>(0x002062, 3); return true;
    // src/unknown/EF/EFDF0B.asm:32 LDX #$2062
    // Overlapping static entry reached from 0xEFC863.
    case 0xC865: c.execute<0x20>(0x007380, 3); return true;
    // src/unknown/EF/EFDF0B.asm:33 BRA @UNKNOWN11
    case 0xC866: c.execute<0x80>(0x000073, 2); return true;
    // src/unknown/EF/EFDF0B.asm:35 LDA @LOCAL00
    case 0xC868: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:36 AND #$0080
    case 0xC86A: if (c.p & 0x20) c.execute<0x29>(0x000080, 2); else c.execute<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EFDF0B.asm:36 AND #$0080
    // Overlapping static entry reached from 0xEFC86A.
    case 0xC86C: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:37 BEQ @UNKNOWN4
    case 0xC86D: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EFDF0B.asm:38 LDX #$2063
    case 0xC86F: if (c.p & 0x10) c.execute<0xA2>(0x000063, 2); else c.execute<0xA2>(0x002063, 3); return true;
    // src/unknown/EF/EFDF0B.asm:38 LDX #$2063
    // Overlapping static entry reached from 0xEFC86F.
    case 0xC871: c.execute<0x20>(0x006780, 3); return true;
    // src/unknown/EF/EFDF0B.asm:39 BRA @UNKNOWN11
    case 0xC872: c.execute<0x80>(0x000067, 2); return true;
    // src/unknown/EF/EFDF0B.asm:41 LDA @LOCAL00
    case 0xC874: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:42 AND #$0040
    case 0xC876: if (c.p & 0x20) c.execute<0x29>(0x000040, 2); else c.execute<0x29>(0x000040, 3); return true;
    // src/unknown/EF/EFDF0B.asm:42 AND #$0040
    // Overlapping static entry reached from 0xEFC876.
    case 0xC878: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:43 BEQ @UNKNOWN11
    case 0xC879: c.execute<0xF0>(0x000060, 2); return true;
    // src/unknown/EF/EFDF0B.asm:44 LDX #$2063
    case 0xC87B: if (c.p & 0x10) c.execute<0xA2>(0x000063, 2); else c.execute<0xA2>(0x002063, 3); return true;
    // src/unknown/EF/EFDF0B.asm:44 LDX #$2063
    // Overlapping static entry reached from 0xEFC87B.
    case 0xC87D: c.execute<0x20>(0x005B80, 3); return true;
    // src/unknown/EF/EFDF0B.asm:45 BRA @UNKNOWN11
    case 0xC87E: c.execute<0x80>(0x00005B, 2); return true;
    // src/unknown/EF/EFDF0B.asm:47 LDA @LOCAL00
    case 0xC880: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:48 AND #$0010
    case 0xC882: if (c.p & 0x20) c.execute<0x29>(0x000010, 2); else c.execute<0x29>(0x000010, 3); return true;
    // src/unknown/EF/EFDF0B.asm:48 AND #$0010
    // Overlapping static entry reached from 0xEFC882.
    case 0xC884: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:49 BEQ @UNKNOWN11
    case 0xC885: c.execute<0xF0>(0x000054, 2); return true;
    // src/unknown/EF/EFDF0B.asm:50 LDX @VIRTUAL02
    case 0xC887: c.execute<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFDF0B.asm:51 TYA
    case 0xC889: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/EF/EFDF0B.asm:52 JSL UNKNOWN_C07477
    case 0xC88A: c.execute<0x22>(0xC076B6, 4); return true;
    // src/unknown/EF/EFDF0B.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC88E: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFDF0B.asm:54 AND #$00FF
    case 0xC890: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFDF0B.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xEFC890.
    case 0xC892: c.execute<0x00>(0x0000C9, 2); return true;
    // src/unknown/EF/EFDF0B.asm:55 CMP #2
    case 0xC893: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFDF0B.asm:55 CMP #2
    // Overlapping static entry reached from 0xEFC893.
    case 0xC895: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:56 BEQ @UNKNOWN6
    case 0xC896: c.execute<0xF0>(0x000025, 2); return true;
    // src/unknown/EF/EFDF0B.asm:57 CMP #1
    case 0xC898: if (c.p & 0x20) c.execute<0xC9>(0x000001, 2); else c.execute<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFDF0B.asm:57 CMP #1
    // Overlapping static entry reached from 0xEFC898.
    case 0xC89A: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:58 BEQ @UNKNOWN7
    case 0xC89B: c.execute<0xF0>(0x000025, 2); return true;
    // src/unknown/EF/EFDF0B.asm:59 CMP #3
    case 0xC89D: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFDF0B.asm:59 CMP #3
    // Overlapping static entry reached from 0xEFC89D.
    case 0xC89F: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:60 BEQ @UNKNOWN7
    case 0xC8A0: c.execute<0xF0>(0x000020, 2); return true;
    // src/unknown/EF/EFDF0B.asm:61 CMP #4
    case 0xC8A2: if (c.p & 0x20) c.execute<0xC9>(0x000004, 2); else c.execute<0xC9>(0x000004, 3); return true;
    // src/unknown/EF/EFDF0B.asm:61 CMP #4
    // Overlapping static entry reached from 0xEFC8A2.
    case 0xC8A4: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:62 BEQ @UNKNOWN7
    case 0xC8A5: c.execute<0xF0>(0x00001B, 2); return true;
    // src/unknown/EF/EFDF0B.asm:63 CMP #5
    case 0xC8A7: if (c.p & 0x20) c.execute<0xC9>(0x000005, 2); else c.execute<0xC9>(0x000005, 3); return true;
    // src/unknown/EF/EFDF0B.asm:63 CMP #5
    // Overlapping static entry reached from 0xEFC8A7.
    case 0xC8A9: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:64 BEQ @UNKNOWN8
    case 0xC8AA: c.execute<0xF0>(0x00001B, 2); return true;
    // src/unknown/EF/EFDF0B.asm:65 CMP #0
    case 0xC8AC: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFDF0B.asm:65 CMP #0
    // Overlapping static entry reached from 0xEFC8AC.
    case 0xC8AE: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:66 BEQ @UNKNOWN8
    case 0xC8AF: c.execute<0xF0>(0x000016, 2); return true;
    // src/unknown/EF/EFDF0B.asm:67 CMP #6
    case 0xC8B1: if (c.p & 0x20) c.execute<0xC9>(0x000006, 2); else c.execute<0xC9>(0x000006, 3); return true;
    // src/unknown/EF/EFDF0B.asm:67 CMP #6
    // Overlapping static entry reached from 0xEFC8B1.
    case 0xC8B3: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:68 BEQ @UNKNOWN8
    case 0xC8B4: c.execute<0xF0>(0x000011, 2); return true;
    // src/unknown/EF/EFDF0B.asm:69 CMP #7
    case 0xC8B6: if (c.p & 0x20) c.execute<0xC9>(0x000007, 2); else c.execute<0xC9>(0x000007, 3); return true;
    // src/unknown/EF/EFDF0B.asm:69 CMP #7
    // Overlapping static entry reached from 0xEFC8B6.
    case 0xC8B8: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:70 BEQ @UNKNOWN8
    case 0xC8B9: c.execute<0xF0>(0x00000C, 2); return true;
    // src/unknown/EF/EFDF0B.asm:71 BRA @UNKNOWN9
    case 0xC8BB: c.execute<0x80>(0x00000F, 2); return true;
    // src/unknown/EF/EFDF0B.asm:73 LDX #$2461
    case 0xC8BD: if (c.p & 0x10) c.execute<0xA2>(0x000061, 2); else c.execute<0xA2>(0x002461, 3); return true;
    // src/unknown/EF/EFDF0B.asm:73 LDX #$2461
    // Overlapping static entry reached from 0xEFC8BD.
    case 0xC8BF: c.execute<0x24>(0x000080, 2); return true;
    // src/unknown/EF/EFDF0B.asm:74 BRA @UNKNOWN11
    case 0xC8C0: c.execute<0x80>(0x000019, 2); return true;
    // src/unknown/EF/EFDF0B.asm:74 BRA @UNKNOWN11
    // Overlapping static entry reached from 0xEFC8BF.
    case 0xC8C1: c.execute<0x19>(0x0062A2, 3); return true;
    // src/unknown/EF/EFDF0B.asm:76 LDX #$2462
    case 0xC8C2: if (c.p & 0x10) c.execute<0xA2>(0x000062, 2); else c.execute<0xA2>(0x002462, 3); return true;
    // src/unknown/EF/EFDF0B.asm:76 LDX #$2462
    // Overlapping static entry reached from 0xEFC8C2.
    case 0xC8C4: c.execute<0x24>(0x000080, 2); return true;
    // src/unknown/EF/EFDF0B.asm:77 BRA @UNKNOWN11
    case 0xC8C5: c.execute<0x80>(0x000014, 2); return true;
    // src/unknown/EF/EFDF0B.asm:77 BRA @UNKNOWN11
    // Overlapping static entry reached from 0xEFC8C4.
    case 0xC8C6: c.execute<0x14>(0x0000A2, 2); return true;
    // src/unknown/EF/EFDF0B.asm:79 LDX #$2463
    case 0xC8C7: if (c.p & 0x10) c.execute<0xA2>(0x000063, 2); else c.execute<0xA2>(0x002463, 3); return true;
    // src/unknown/EF/EFDF0B.asm:79 LDX #$2463
    // Overlapping static entry reached from 0xEFC8C6.
    case 0xC8C8: c.execute<0x63>(0x000024, 2); return true;
    // src/unknown/EF/EFDF0B.asm:79 LDX #$2463
    // Overlapping static entry reached from 0xEFC8C7.
    case 0xC8C9: c.execute<0x24>(0x000080, 2); return true;
    // src/unknown/EF/EFDF0B.asm:80 BRA @UNKNOWN11
    case 0xC8CA: c.execute<0x80>(0x00000F, 2); return true;
    // src/unknown/EF/EFDF0B.asm:80 BRA @UNKNOWN11
    // Overlapping static entry reached from 0xEFC8C9.
    case 0xC8CB: c.execute<0x0F>(0x2058A2, 4); return true;
    // src/unknown/EF/EFDF0B.asm:82 LDX #$2058
    case 0xC8CC: if (c.p & 0x10) c.execute<0xA2>(0x000058, 2); else c.execute<0xA2>(0x002058, 3); return true;
    // src/unknown/EF/EFDF0B.asm:82 LDX #$2058
    // Overlapping static entry reached from 0xEFC91B.
    case 0xC8CD: c.execute<0x58>(0x000000, 1); return true;
    // src/unknown/EF/EFDF0B.asm:82 LDX #$2058
    // Overlapping static entry reached from 0xEFC8CC.
    case 0xC8CE: c.execute<0x20>(0x000A80, 3); return true;
    // src/unknown/EF/EFDF0B.asm:83 BRA @UNKNOWN11
    case 0xC8CF: c.execute<0x80>(0x00000A, 2); return true;
    // src/unknown/EF/EFDF0B.asm:85 LDA @LOCAL00
    case 0xC8D1: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:86 AND #$0020
    case 0xC8D3: if (c.p & 0x20) c.execute<0x29>(0x000020, 2); else c.execute<0x29>(0x000020, 3); return true;
    // src/unknown/EF/EFDF0B.asm:86 AND #$0020
    // Overlapping static entry reached from 0xEFC8D3.
    case 0xC8D5: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:87 BEQ @UNKNOWN11
    case 0xC8D6: c.execute<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFDF0B.asm:88 LDX #$2261
    case 0xC8D8: if (c.p & 0x10) c.execute<0xA2>(0x000061, 2); else c.execute<0xA2>(0x002261, 3); return true;
    // src/unknown/EF/EFDF0B.asm:88 LDX #$2261
    // Overlapping static entry reached from 0xEFC8D8.
    case 0xC8DA: c.execute<0x22>(0x602B8A, 4); return true;
    // src/unknown/EF/EFDF0B.asm:90 TXA
    case 0xC8DB: c.execute<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    case 0xC8DC: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xC8DD: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC8DE: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xC8E0: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xC8E1: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xC8E2: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xC8E3: if (c.p & 0x20) c.execute<0x69>(0x0000E4, 2); else c.execute<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFC8E3.
    case 0xC8E5: c.execute<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xC8E6: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xC8E7: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:14 STX @LOCAL05
    case 0xC8E8: c.execute<0x86>(0x00001A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:14 STX @LOCAL05
    // Overlapping static entry reached from 0xEFC8E5.
    case 0xC8E9: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:15 STA @VIRTUAL02
    case 0xC8EA: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:16 STA @LOCAL04
    case 0xC8EC: c.execute<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFDFC4.asm:17 LDA DEBUG_MODE_NUMBER
    case 0xC8EE: c.execute<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFDFC4.asm:18 CMP #3
    case 0xC8F1: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFDFC4.asm:18 CMP #3
    // Overlapping static entry reached from 0xEFC8F1.
    case 0xC8F3: c.execute<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    case 0xC8F4: c.execute<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    case 0xC8F6: c.execute<0x4C>(0x00C994, 3); return true;
    // src/unknown/EF/EFDFC4.asm:20 LDA #64
    case 0xC8F9: if (c.p & 0x20) c.execute<0xA9>(0x000040, 2); else c.execute<0xA9>(0x000040, 3); return true;
    // src/unknown/EF/EFDFC4.asm:20 LDA #64
    // Overlapping static entry reached from 0xEFC8F9.
    case 0xC8FB: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDFC4.asm:21 JSL SBRK
    case 0xC8FC: c.execute<0x22>(0xC086D7, 4); return true;
    // src/unknown/EF/EFDFC4.asm:22 STA @LOCAL03
    case 0xC900: c.execute<0x85>(0x000016, 2); return true;
    // src/unknown/EF/EFDFC4.asm:23 LDA @LOCAL05
    case 0xC902: c.execute<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:24 CMP #$8000
    case 0xC904: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x008000, 3); return true;
    // src/unknown/EF/EFDFC4.asm:24 CMP #$8000
    // Overlapping static entry reached from 0xEFC904.
    case 0xC906: c.execute<0x80>(0x0000B0, 2); return true;
    // src/unknown/EF/EFDFC4.asm:25 BCS @UNKNOWN4
    case 0xC907: c.execute<0xB0>(0x00005B, 2); return true;
    // src/unknown/EF/EFDFC4.asm:26 LDA @VIRTUAL02
    case 0xC909: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:27 AND #$001F
    case 0xC90B: if (c.p & 0x20) c.execute<0x29>(0x00001F, 2); else c.execute<0x29>(0x00001F, 3); return true;
    // src/unknown/EF/EFDFC4.asm:27 AND #$001F
    // Overlapping static entry reached from 0xEFC90B.
    case 0xC90D: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFDFC4.asm:28 STA @LOCAL02
    case 0xC90E: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFDFC4.asm:29 LDA #0
    case 0xC910: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFDFC4.asm:29 LDA #0
    // Overlapping static entry reached from 0xEFC910.
    case 0xC912: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFDFC4.asm:30 STA @VIRTUAL04
    case 0xC913: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFDFC4.asm:31 BRA @UNKNOWN3
    case 0xC915: c.execute<0x80>(0x000046, 2); return true;
    // src/unknown/EF/EFDFC4.asm:33 LDA @VIRTUAL02
    case 0xC917: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:34 CMP #$8000
    case 0xC919: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x008000, 3); return true;
    // src/unknown/EF/EFDFC4.asm:34 CMP #$8000
    // Overlapping static entry reached from 0xEFC919.
    case 0xC91B: c.execute<0x80>(0x0000B0, 2); return true;
    // src/unknown/EF/EFDFC4.asm:35 BCS @UNKNOWN2
    case 0xC91C: c.execute<0xB0>(0x00002F, 2); return true;
    // src/unknown/EF/EFDFC4.asm:36 LDA @VIRTUAL02
    case 0xC91E: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:37 AND #$003F
    case 0xC920: if (c.p & 0x20) c.execute<0x29>(0x00003F, 2); else c.execute<0x29>(0x00003F, 3); return true;
    // src/unknown/EF/EFDFC4.asm:37 AND #$003F
    // Overlapping static entry reached from 0xEFC920.
    case 0xC922: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFDFC4.asm:38 STA @VIRTUAL02
    case 0xC923: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:39 LDA @LOCAL05
    case 0xC925: c.execute<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:40 AND #$003F
    case 0xC927: if (c.p & 0x20) c.execute<0x29>(0x00003F, 2); else c.execute<0x29>(0x00003F, 3); return true;
    // src/unknown/EF/EFDFC4.asm:40 AND #$003F
    // Overlapping static entry reached from 0xEFC927.
    case 0xC929: c.execute<0x00>(0x00000A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:41 ASL
    case 0xC92A: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:42 ASL
    case 0xC92B: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:43 ASL
    case 0xC92C: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:44 ASL
    case 0xC92D: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:45 ASL
    case 0xC92E: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:46 ASL
    case 0xC92F: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:47 CLC
    case 0xC930: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:48 ADC @VIRTUAL02
    case 0xC931: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:49 TAX
    case 0xC933: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:50 LDA LOADED_COLLISION_TILES,X
    case 0xC934: c.execute<0xBD>(0x00E000, 3); return true;
    // src/unknown/EF/EFDFC4.asm:51 AND #$00FF
    case 0xC937: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFDFC4.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xEFC937.
    case 0xC939: c.execute<0x00>(0x0000A4, 2); return true;
    // src/unknown/EF/EFDFC4.asm:52 LDY @LOCAL05
    case 0xC93A: c.execute<0xA4>(0x00001A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:53 LDX @LOCAL04
    case 0xC93C: c.execute<0xA6>(0x000018, 2); return true;
    // src/unknown/EF/EFDFC4.asm:54 STX @VIRTUAL02
    case 0xC93E: c.execute<0x86>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:55 JSR UNKNOWN_EFDF0B
    case 0xC940: c.execute<0x20>(0x00C825, 3); return true;
    // src/unknown/EF/EFDFC4.asm:56 STA @LOCAL01
    case 0xC943: c.execute<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EFDFC4.asm:57 LDA @LOCAL02
    case 0xC945: c.execute<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EFDFC4.asm:58 ASL
    case 0xC947: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:59 TAY
    case 0xC948: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:60 LDA @LOCAL01
    case 0xC949: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EFDFC4.asm:61 STA (@LOCAL03),Y
    case 0xC94B: c.execute<0x91>(0x000016, 2); return true;
    // src/unknown/EF/EFDFC4.asm:63 LDA @LOCAL02
    case 0xC94D: c.execute<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EFDFC4.asm:64 INC
    case 0xC94F: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:65 AND #$001F
    case 0xC950: if (c.p & 0x20) c.execute<0x29>(0x00001F, 2); else c.execute<0x29>(0x00001F, 3); return true;
    // src/unknown/EF/EFDFC4.asm:65 AND #$001F
    // Overlapping static entry reached from 0xEFC950.
    case 0xC952: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFDFC4.asm:66 STA @LOCAL02
    case 0xC953: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFDFC4.asm:67 INC @VIRTUAL02
    case 0xC955: c.execute<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:68 LDA @VIRTUAL02
    case 0xC957: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:69 STA @LOCAL04
    case 0xC959: c.execute<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFDFC4.asm:70 INC @VIRTUAL04
    case 0xC95B: c.execute<0xE6>(0x000004, 2); return true;
    // src/unknown/EF/EFDFC4.asm:72 LDA @VIRTUAL04
    case 0xC95D: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFDFC4.asm:73 CMP #32
    case 0xC95F: if (c.p & 0x20) c.execute<0xC9>(0x000020, 2); else c.execute<0xC9>(0x000020, 3); return true;
    // src/unknown/EF/EFDFC4.asm:73 CMP #32
    // Overlapping static entry reached from 0xEFC95F.
    case 0xC961: c.execute<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EFDFC4.asm:74 BCC @UNKNOWN1
    case 0xC962: c.execute<0x90>(0x0000B3, 2); return true;
    // src/unknown/EF/EFDFC4.asm:76 LDA @LOCAL03
    case 0xC964: c.execute<0xA5>(0x000016, 2); return true;
    // include/macros.asm:908 STA dest
    case 0xC966: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    case 0xC968: c.execute<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    case 0xC969: c.execute<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    case 0xC96B: c.execute<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    case 0xC96C: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    case 0xC96E: c.execute<0x64>(0x000009, 2); return true;
    // src/unknown/EF/EFDFC4.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC970: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xC972: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xC974: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xC976: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xC978: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFDFC4.asm:80 LDA @LOCAL05
    case 0xC97A: c.execute<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:81 AND #$001F
    case 0xC97C: if (c.p & 0x20) c.execute<0x29>(0x00001F, 2); else c.execute<0x29>(0x00001F, 3); return true;
    // src/unknown/EF/EFDFC4.asm:81 AND #$001F
    // Overlapping static entry reached from 0xEFC97C.
    case 0xC97E: c.execute<0x00>(0x00000A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:82 ASL
    case 0xC97F: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:83 ASL
    case 0xC980: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:84 ASL
    case 0xC981: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:85 ASL
    case 0xC982: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:86 ASL
    case 0xC983: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:87 CLC
    case 0xC984: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:88 ADC #VRAM::TEXT_LAYER_TILEMAP
    case 0xC985: if (c.p & 0x20) c.execute<0x69>(0x000000, 2); else c.execute<0x69>(0x007C00, 3); return true;
    // src/unknown/EF/EFDFC4.asm:88 ADC #VRAM::TEXT_LAYER_TILEMAP
    // Overlapping static entry reached from 0xEFC985.
    case 0xC987: c.execute<0x7C>(0x00A2A8, 3); return true;
    // src/unknown/EF/EFDFC4.asm:89 TAY
    case 0xC988: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:90 LDX #64
    case 0xC989: if (c.p & 0x10) c.execute<0xA2>(0x000040, 2); else c.execute<0xA2>(0x000040, 3); return true;
    // src/unknown/EF/EFDFC4.asm:90 LDX #64
    // Overlapping static entry reached from 0xEFC989.
    case 0xC98B: c.execute<0x00>(0x0000E2, 2); return true;
    // src/unknown/EF/EFDFC4.asm:91 SEP #PROC_FLAGS::ACCUM8
    case 0xC98C: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFDFC4.asm:92 LDA #0
    case 0xC98E: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/unknown/EF/EFDFC4.asm:93 JSL PREPARE_VRAM_COPY
    case 0xC990: c.execute<0x22>(0xC08616, 4); return true;
    // src/unknown/EF/EFDFC4.asm:93 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFC98E.
    case 0xC991: c.execute<0x16>(0x000086, 2); return true;
    // src/unknown/EF/EFDFC4.asm:93 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFC991.
    case 0xC993: if (c.p & 0x10) c.execute<0xC0>(0x00002B, 2); else c.execute<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    case 0xC994: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xC995: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC996: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xC998: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xC999: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xC99A: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xC99B: if (c.p & 0x20) c.execute<0x69>(0x0000E4, 2); else c.execute<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFC99B.
    case 0xC99D: c.execute<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xC99E: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xC99F: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:14 STX @VIRTUAL02
    case 0xC9A0: c.execute<0x86>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:14 STX @VIRTUAL02
    // Overlapping static entry reached from 0xEFC99D.
    case 0xC9A1: c.execute<0x02>(0x000086, 2); return true;
    // src/unknown/EF/EFE07C.asm:15 STX @LOCAL05
    case 0xC9A2: c.execute<0x86>(0x00001A, 2); return true;
    // src/unknown/EF/EFE07C.asm:16 STA @LOCAL04
    case 0xC9A4: c.execute<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFE07C.asm:17 LDA DEBUG_MODE_NUMBER
    case 0xC9A6: c.execute<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE07C.asm:18 CMP #3
    case 0xC9A9: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFE07C.asm:18 CMP #3
    // Overlapping static entry reached from 0xEFC9A9.
    case 0xC9AB: c.execute<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    case 0xC9AC: c.execute<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    case 0xC9AE: c.execute<0x4C>(0x00CA4B, 3); return true;
    // src/unknown/EF/EFE07C.asm:20 LDA #64
    case 0xC9B1: if (c.p & 0x20) c.execute<0xA9>(0x000040, 2); else c.execute<0xA9>(0x000040, 3); return true;
    // src/unknown/EF/EFE07C.asm:20 LDA #64
    // Overlapping static entry reached from 0xEFC9B1.
    case 0xC9B3: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE07C.asm:21 JSL SBRK
    case 0xC9B4: c.execute<0x22>(0xC086D7, 4); return true;
    // src/unknown/EF/EFE07C.asm:22 STA @LOCAL03
    case 0xC9B8: c.execute<0x85>(0x000016, 2); return true;
    // src/unknown/EF/EFE07C.asm:23 LDA @LOCAL04
    case 0xC9BA: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE07C.asm:24 CMP #$8000
    case 0xC9BC: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x008000, 3); return true;
    // src/unknown/EF/EFE07C.asm:24 CMP #$8000
    // Overlapping static entry reached from 0xEFC9BC.
    case 0xC9BE: c.execute<0x80>(0x0000B0, 2); return true;
    // src/unknown/EF/EFE07C.asm:25 BCS @UNKNOWN4
    case 0xC9BF: c.execute<0xB0>(0x00005F, 2); return true;
    // src/unknown/EF/EFE07C.asm:26 LDA @VIRTUAL02
    case 0xC9C1: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:27 AND #$001F
    case 0xC9C3: if (c.p & 0x20) c.execute<0x29>(0x00001F, 2); else c.execute<0x29>(0x00001F, 3); return true;
    // src/unknown/EF/EFE07C.asm:27 AND #$001F
    // Overlapping static entry reached from 0xEFC9C3.
    case 0xC9C5: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE07C.asm:28 STA @LOCAL02
    case 0xC9C6: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE07C.asm:29 LDA #0
    case 0xC9C8: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE07C.asm:29 LDA #0
    // Overlapping static entry reached from 0xEFC9C8.
    case 0xC9CA: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE07C.asm:30 STA @VIRTUAL04
    case 0xC9CB: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFE07C.asm:31 BRA @UNKNOWN3
    case 0xC9CD: c.execute<0x80>(0x00004A, 2); return true;
    // src/unknown/EF/EFE07C.asm:33 LDA @VIRTUAL02
    case 0xC9CF: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:34 CMP #$8000
    case 0xC9D1: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x008000, 3); return true;
    // src/unknown/EF/EFE07C.asm:34 CMP #$8000
    // Overlapping static entry reached from 0xEFC9D1.
    case 0xC9D3: c.execute<0x80>(0x0000B0, 2); return true;
    // src/unknown/EF/EFE07C.asm:35 BCS @UNKNOWN2
    case 0xC9D4: c.execute<0xB0>(0x000033, 2); return true;
    // src/unknown/EF/EFE07C.asm:36 LDA @LOCAL04
    case 0xC9D6: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE07C.asm:37 AND #$003F
    case 0xC9D8: if (c.p & 0x20) c.execute<0x29>(0x00003F, 2); else c.execute<0x29>(0x00003F, 3); return true;
    // src/unknown/EF/EFE07C.asm:37 AND #$003F
    // Overlapping static entry reached from 0xEFC9D8.
    case 0xC9DA: c.execute<0x00>(0x000048, 2); return true;
    // src/unknown/EF/EFE07C.asm:38 PHA
    case 0xC9DB: c.execute<0x48>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:39 LDA @VIRTUAL02
    case 0xC9DC: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:40 AND #$003F
    case 0xC9DE: if (c.p & 0x20) c.execute<0x29>(0x00003F, 2); else c.execute<0x29>(0x00003F, 3); return true;
    // src/unknown/EF/EFE07C.asm:40 AND #$003F
    // Overlapping static entry reached from 0xEFC9DE.
    case 0xC9E0: c.execute<0x00>(0x00000A, 2); return true;
    // src/unknown/EF/EFE07C.asm:41 ASL
    case 0xC9E1: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:42 ASL
    case 0xC9E2: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:43 ASL
    case 0xC9E3: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:44 ASL
    case 0xC9E4: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:45 ASL
    case 0xC9E5: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:46 ASL
    case 0xC9E6: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:47 PLY
    case 0xC9E7: c.execute<0x7A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:48 STY @VIRTUAL02
    case 0xC9E8: c.execute<0x84>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:49 CLC
    case 0xC9EA: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:50 ADC @VIRTUAL02
    case 0xC9EB: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:51 TAX
    case 0xC9ED: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:52 LDA LOADED_COLLISION_TILES,X
    case 0xC9EE: c.execute<0xBD>(0x00E000, 3); return true;
    // src/unknown/EF/EFE07C.asm:53 AND #$00FF
    case 0xC9F1: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFE07C.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xEFC9F1.
    case 0xC9F3: c.execute<0x00>(0x0000A6, 2); return true;
    // src/unknown/EF/EFE07C.asm:54 LDX @LOCAL05
    case 0xC9F4: c.execute<0xA6>(0x00001A, 2); return true;
    // src/unknown/EF/EFE07C.asm:55 STX @VIRTUAL02
    case 0xC9F6: c.execute<0x86>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:56 LDY @VIRTUAL02
    case 0xC9F8: c.execute<0xA4>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:57 LDX @LOCAL04
    case 0xC9FA: c.execute<0xA6>(0x000018, 2); return true;
    // src/unknown/EF/EFE07C.asm:57 LDX @LOCAL04
    // Overlapping static entry reached from 0xEFCA74.
    case 0xC9FB: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:58 JSR UNKNOWN_EFDF0B
    case 0xC9FC: c.execute<0x20>(0x00C825, 3); return true;
    // src/unknown/EF/EFE07C.asm:59 STA @LOCAL01
    case 0xC9FF: c.execute<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EFE07C.asm:60 LDA @LOCAL02
    case 0xCA01: c.execute<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EFE07C.asm:61 ASL
    case 0xCA03: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:62 TAY
    case 0xCA04: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:63 LDA @LOCAL01
    case 0xCA05: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EFE07C.asm:64 STA (@LOCAL03),Y
    case 0xCA07: c.execute<0x91>(0x000016, 2); return true;
    // src/unknown/EF/EFE07C.asm:66 LDA @LOCAL02
    case 0xCA09: c.execute<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EFE07C.asm:67 INC
    case 0xCA0B: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:68 AND #$001F
    case 0xCA0C: if (c.p & 0x20) c.execute<0x29>(0x00001F, 2); else c.execute<0x29>(0x00001F, 3); return true;
    // src/unknown/EF/EFE07C.asm:68 AND #$001F
    // Overlapping static entry reached from 0xEFCA0C.
    case 0xCA0E: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE07C.asm:69 STA @LOCAL02
    case 0xCA0F: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE07C.asm:70 INC @VIRTUAL02
    case 0xCA11: c.execute<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:71 LDA @VIRTUAL02
    case 0xCA13: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:72 STA @LOCAL05
    case 0xCA15: c.execute<0x85>(0x00001A, 2); return true;
    // src/unknown/EF/EFE07C.asm:73 INC @VIRTUAL04
    case 0xCA17: c.execute<0xE6>(0x000004, 2); return true;
    // src/unknown/EF/EFE07C.asm:75 LDA @VIRTUAL04
    case 0xCA19: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFE07C.asm:76 CMP #32
    case 0xCA1B: if (c.p & 0x20) c.execute<0xC9>(0x000020, 2); else c.execute<0xC9>(0x000020, 3); return true;
    // src/unknown/EF/EFE07C.asm:76 CMP #32
    // Overlapping static entry reached from 0xEFCA1B.
    case 0xCA1D: c.execute<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EFE07C.asm:77 BCC @UNKNOWN1
    case 0xCA1E: c.execute<0x90>(0x0000AF, 2); return true;
    // src/unknown/EF/EFE07C.asm:79 LDA @LOCAL03
    case 0xCA20: c.execute<0xA5>(0x000016, 2); return true;
    // include/macros.asm:908 STA dest
    case 0xCA22: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    case 0xCA24: c.execute<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    case 0xCA25: c.execute<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    case 0xCA27: c.execute<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    case 0xCA28: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    case 0xCA2A: c.execute<0x64>(0x000009, 2); return true;
    // src/unknown/EF/EFE07C.asm:81 REP #PROC_FLAGS::ACCUM8
    case 0xCA2C: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xCA2E: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xCA30: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xCA32: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xCA34: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE07C.asm:83 LDA @LOCAL04
    case 0xCA36: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE07C.asm:84 AND #$001F
    case 0xCA38: if (c.p & 0x20) c.execute<0x29>(0x00001F, 2); else c.execute<0x29>(0x00001F, 3); return true;
    // src/unknown/EF/EFE07C.asm:84 AND #$001F
    // Overlapping static entry reached from 0xEFCA38.
    case 0xCA3A: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EFE07C.asm:85 CLC
    case 0xCA3B: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:86 ADC #VRAM::TEXT_LAYER_TILEMAP
    case 0xCA3C: if (c.p & 0x20) c.execute<0x69>(0x000000, 2); else c.execute<0x69>(0x007C00, 3); return true;
    // src/unknown/EF/EFE07C.asm:86 ADC #VRAM::TEXT_LAYER_TILEMAP
    // Overlapping static entry reached from 0xEFCA3C.
    case 0xCA3E: c.execute<0x7C>(0x00A2A8, 3); return true;
    // src/unknown/EF/EFE07C.asm:87 TAY
    case 0xCA3F: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:88 LDX #64
    case 0xCA40: if (c.p & 0x10) c.execute<0xA2>(0x000040, 2); else c.execute<0xA2>(0x000040, 3); return true;
    // src/unknown/EF/EFE07C.asm:88 LDX #64
    // Overlapping static entry reached from 0xEFCA40.
    case 0xCA42: c.execute<0x00>(0x0000E2, 2); return true;
    // src/unknown/EF/EFE07C.asm:89 SEP #PROC_FLAGS::ACCUM8
    case 0xCA43: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFE07C.asm:90 LDA #27
    case 0xCA45: if (c.p & 0x20) c.execute<0xA9>(0x00001B, 2); else c.execute<0xA9>(0x00221B, 3); return true;
    // src/unknown/EF/EFE07C.asm:91 JSL PREPARE_VRAM_COPY
    case 0xCA47: c.execute<0x22>(0xC08616, 4); return true;
    // src/unknown/EF/EFE07C.asm:91 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFCA45.
    case 0xCA48: c.execute<0x16>(0x000086, 2); return true;
    // src/unknown/EF/EFE07C.asm:91 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFCA48.
    case 0xCA4A: if (c.p & 0x10) c.execute<0xC0>(0x00002B, 2); else c.execute<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    case 0xCA4B: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xCA4C: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xCA4D: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xCA4F: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xCA50: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xCA51: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xCA52: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFCA52.
    case 0xCA54: c.execute<0xFF>(0x4A685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xCA55: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xCA56: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:9 LSR
    case 0xCA57: c.execute<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:10 LSR
    case 0xCA58: c.execute<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:11 LSR
    case 0xCA59: c.execute<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:12 SEC
    case 0xCA5A: c.execute<0x38>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:13 SBC #16
    case 0xCA5B: if (c.p & 0x20) c.execute<0xE9>(0x000010, 2); else c.execute<0xE9>(0x000010, 3); return true;
    // src/unknown/EF/EFE133.asm:13 SBC #16
    // Overlapping static entry reached from 0xEFCA5B.
    case 0xCA5D: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE133.asm:14 STA @VIRTUAL04
    case 0xCA5E: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFE133.asm:15 TXA
    case 0xCA60: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:16 LSR
    case 0xCA61: c.execute<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:17 LSR
    case 0xCA62: c.execute<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:18 LSR
    case 0xCA63: c.execute<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:19 SEC
    case 0xCA64: c.execute<0x38>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:20 SBC #14
    case 0xCA65: if (c.p & 0x20) c.execute<0xE9>(0x00000E, 2); else c.execute<0xE9>(0x00000E, 3); return true;
    // src/unknown/EF/EFE133.asm:20 SBC #14
    // Overlapping static entry reached from 0xEFCA65.
    case 0xCA67: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE133.asm:21 STA @VIRTUAL02
    case 0xCA68: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFE133.asm:22 STA @LOCAL01
    case 0xCA6A: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE133.asm:23 LDY #.LOWORD(-1)
    case 0xCA6C: if (c.p & 0x10) c.execute<0xA0>(0x0000FF, 2); else c.execute<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE133.asm:23 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFCA6C.
    case 0xCA6E: c.execute<0xFF>(0x800E84, 4); return true;
    // src/unknown/EF/EFE133.asm:24 STY @LOCAL00
    case 0xCA6F: c.execute<0x84>(0x00000E, 2); return true;
    // src/unknown/EF/EFE133.asm:25 BRA @UNKNOWN1
    case 0xCA71: c.execute<0x80>(0x000015, 2); return true;
    // src/unknown/EF/EFE133.asm:25 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xEFCA6E.
    case 0xCA72: c.execute<0x15>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE133.asm:27 LDA @LOCAL01
    case 0xCA73: c.execute<0xA5>(0x000010, 2); return true;
    // src/unknown/EF/EFE133.asm:27 LDA @LOCAL01
    // Overlapping static entry reached from 0xEFCA72.
    case 0xCA74: c.execute<0x10>(0x000085, 2); return true;
    // src/unknown/EF/EFE133.asm:28 STA @VIRTUAL02
    case 0xCA75: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFE133.asm:28 STA @VIRTUAL02
    // Overlapping static entry reached from 0xEFCA74.
    case 0xCA76: c.execute<0x02>(0x000084, 2); return true;
    // src/unknown/EF/EFE133.asm:29 STY @VIRTUAL02
    case 0xCA77: c.execute<0x84>(0x000002, 2); return true;
    // src/unknown/EF/EFE133.asm:30 CLC
    case 0xCA79: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:31 ADC @VIRTUAL02
    case 0xCA7A: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/EF/EFE133.asm:32 TAX
    case 0xCA7C: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:33 LDA @VIRTUAL04
    case 0xCA7D: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFE133.asm:34 JSL UNKNOWN_EFDFC4
    case 0xCA7F: c.execute<0x22>(0xEFC8DE, 4); return true;
    // src/unknown/EF/EFE133.asm:35 LDY @LOCAL00
    case 0xCA83: c.execute<0xA4>(0x00000E, 2); return true;
    // src/unknown/EF/EFE133.asm:36 INY
    case 0xCA85: c.execute<0xC8>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:37 STY @LOCAL00
    case 0xCA86: c.execute<0x84>(0x00000E, 2); return true;
    // src/unknown/EF/EFE133.asm:39 CPY #31
    case 0xCA88: if (c.p & 0x10) c.execute<0xC0>(0x00001F, 2); else c.execute<0xC0>(0x00001F, 3); return true;
    // src/unknown/EF/EFE133.asm:39 CPY #31
    // Overlapping static entry reached from 0xEFCA88.
    case 0xCA8A: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE133.asm:40 BNE @UNKNOWN0
    case 0xCA8B: c.execute<0xD0>(0x0000E6, 2); return true;
    // include/macros.asm:25 PLD
    case 0xCA8D: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xCA8E: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xCA8F: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xCA91: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xCA92: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xCA93: if (c.p & 0x20) c.execute<0x69>(0x0000E2, 2); else c.execute<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFCA93.
    case 0xCA95: c.execute<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xCA96: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xCA97: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFCA97.
    case 0xCA99: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xCA9A: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xCA9C: if (c.p & 0x20) c.execute<0xA9>(0x00007F, 2); else c.execute<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFCA9C.
    case 0xCA9E: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xCA9F: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:15 LDA #0
    case 0xCAA1: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:15 LDA #0
    // Overlapping static entry reached from 0xEFCAA1.
    case 0xCAA3: c.execute<0x00>(0x000087, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:16 STA [@VIRTUAL06]
    case 0xCAA4: c.execute<0x87>(0x000006, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:17 LDA DEBUG_START_POSITION_X
    case 0xCAA6: c.execute<0xAD>(0x00B712, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:18 STA @VIRTUAL04
    case 0xCAA9: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:19 LDA DEBUG_START_POSITION_Y
    case 0xCAAB: c.execute<0xAD>(0x00B714, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:20 STA @VIRTUAL02
    case 0xCAAE: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:21 JSL UNKNOWN_C08726
    case 0xCAB0: c.execute<0x22>(0xC0871F, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:22 JSL UNKNOWN_C0927C
    case 0xCAB4: c.execute<0x22>(0xC0925E, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:23 JSL UNKNOWN_C01A86
    case 0xCAB8: c.execute<0x22>(0xC01A9C, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:24 LDX #0
    case 0xCABC: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:24 LDX #0
    // Overlapping static entry reached from 0xEFCABC.
    case 0xCABE: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:25 LDA #$8000
    case 0xCABF: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x008000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:25 LDA #$8000
    // Overlapping static entry reached from 0xEFCABF.
    case 0xCAC1: c.execute<0x80>(0x000022, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:26 JSL ALLOC_SPRITE_MEM
    case 0xCAC2: c.execute<0x22>(0xC01C27, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:27 JSL INITIALIZE_MISC_OBJECT_DATA
    case 0xCAC6: c.execute<0x22>(0xC01A7F, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:28 LDA DEBUG_VIEW_CHARACTER_SPRITE
    case 0xCACA: c.execute<0xAD>(0x00B716, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:29 STA @LOCAL07
    case 0xCACD: c.execute<0x85>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:30 LDA #23
    case 0xCACF: if (c.p & 0x20) c.execute<0xA9>(0x000017, 2); else c.execute<0xA9>(0x000017, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:30 LDA #23
    // Overlapping static entry reached from 0xEFCACF.
    case 0xCAD1: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:31 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xCAD2: c.execute<0x8D>(0x000A42, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:32 LDA #24
    case 0xCAD5: if (c.p & 0x20) c.execute<0xA9>(0x000018, 2); else c.execute<0xA9>(0x000018, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:32 LDA #24
    // Overlapping static entry reached from 0xEFCAD5.
    case 0xCAD7: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:33 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xCAD8: c.execute<0x8D>(0x000A44, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:34 LDA #3
    case 0xCADB: if (c.p & 0x20) c.execute<0xA9>(0x000003, 2); else c.execute<0xA9>(0x000003, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:34 LDA #3
    // Overlapping static entry reached from 0xEFCADB.
    case 0xCADD: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:35 STA NEW_ENTITY_PRIORITY
    case 0xCADE: c.execute<0x8D>(0x000A40, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:36 LDA @VIRTUAL04
    case 0xCAE1: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:37 STA GAME_STATE+game_state::leader_x_coord
    case 0xCAE3: c.execute<0x8D>(0x009B28, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:37 STA GAME_STATE+game_state::leader_x_coord
    // Overlapping static entry reached from 0xEFCAC1.
    case 0xCAE5: c.execute<0x9B>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:38 LDA @VIRTUAL02
    case 0xCAE6: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:39 STA GAME_STATE+game_state::leader_y_coord
    case 0xCAE8: c.execute<0x8D>(0x009B2C, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:40 LDY #0
    case 0xCAEB: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:40 LDY #0
    // Overlapping static entry reached from 0xEFCAEB.
    case 0xCAED: c.execute<0x00>(0x0000BB, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:41 TYX
    case 0xCAEE: c.execute<0xBB>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:42 LDA #EVENT_SCRIPT::EVENT_001
    case 0xCAEF: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:42 LDA #EVENT_SCRIPT::EVENT_001
    // Overlapping static entry reached from 0xEFCAEF.
    case 0xCAF1: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:43 JSL INIT_ENTITY
    case 0xCAF2: c.execute<0x22>(0xC09300, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:44 JSL UNKNOWN_C02D29
    case 0xCAF6: c.execute<0x22>(0xC02EFE, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:45 LDA #0
    case 0xCAFA: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:45 LDA #0
    // Overlapping static entry reached from 0xEFCAFA.
    case 0xCAFC: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:46 STA @LOCAL06
    case 0xCAFD: c.execute<0x85>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:47 BRA @UNKNOWN1
    case 0xCAFF: c.execute<0x80>(0x000011, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:49 CLC
    case 0xCB01: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:50 ADC #.LOWORD(GAME_STATE)
    case 0xCB02: if (c.p & 0x20) c.execute<0x69>(0x0000A9, 2); else c.execute<0x69>(0x009AA9, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:50 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xEFCB02.
    case 0xCB04: c.execute<0x9A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:51 TAX
    case 0xCB05: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xCB06: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:53 STZ a:game_state::party_members,X
    case 0xCB08: c.execute<0x9E>(0x000077, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0xCB0B: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:55 LDA @LOCAL06
    case 0xCB0D: c.execute<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:56 INC
    case 0xCB0F: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:57 STA @LOCAL06
    case 0xCB10: c.execute<0x85>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:59 CMP #6
    case 0xCB12: if (c.p & 0x20) c.execute<0xC9>(0x000006, 2); else c.execute<0xC9>(0x000006, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:59 CMP #6
    // Overlapping static entry reached from 0xEFCB12.
    case 0xCB14: c.execute<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:60 BCC @UNKNOWN0
    case 0xCB15: c.execute<0x90>(0x0000EA, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:61 LDA #CHARACTER_PAULA
    case 0xCB17: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:61 LDA #CHARACTER_PAULA
    // Overlapping static entry reached from 0xEFCB17.
    case 0xCB19: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:62 JSL ADD_CHAR_TO_PARTY
    case 0xCB1A: c.execute<0x22>(0xC227C4, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:63 LDA DEBUG_MODE_NUMBER
    case 0xCB1E: c.execute<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:64 CMP #5
    case 0xCB21: if (c.p & 0x20) c.execute<0xC9>(0x000005, 2); else c.execute<0xC9>(0x000005, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:64 CMP #5
    // Overlapping static entry reached from 0xEFCB21.
    case 0xCB23: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:65 BEQ @UNKNOWN2
    case 0xCB24: c.execute<0xF0>(0x000016, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:66 LDA DEBUG_MODE_NUMBER
    case 0xCB26: c.execute<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:66 LDA DEBUG_MODE_NUMBER
    // Overlapping static entry reached from 0xEFCB89.
    case 0xCB28: c.execute<0xB7>(0x0000C9, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:67 CMP #3
    case 0xCB29: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:67 CMP #3
    // Overlapping static entry reached from 0xEFCB28.
    case 0xCB2A: c.execute<0x03>(0x000000, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:67 CMP #3
    // Overlapping static entry reached from 0xEFCB29.
    case 0xCB2B: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:68 BEQ @UNKNOWN2
    case 0xCB2C: c.execute<0xF0>(0x00000E, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:69 LDA #CHARACTER_JEFF
    case 0xCB2E: if (c.p & 0x20) c.execute<0xA9>(0x000002, 2); else c.execute<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:69 LDA #CHARACTER_JEFF
    // Overlapping static entry reached from 0xEFCB2E.
    case 0xCB30: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:70 JSL ADD_CHAR_TO_PARTY
    case 0xCB31: c.execute<0x22>(0xC227C4, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:71 LDA #CHARACTER_POO
    case 0xCB35: if (c.p & 0x20) c.execute<0xA9>(0x000003, 2); else c.execute<0xA9>(0x000003, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:71 LDA #CHARACTER_POO
    // Overlapping static entry reached from 0xEFCB35.
    case 0xCB37: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:72 JSL ADD_CHAR_TO_PARTY
    case 0xCB38: c.execute<0x22>(0xC227C4, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:74 LDA #<-1
    case 0xCB3C: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x0000FF, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:74 LDA #<-1
    // Overlapping static entry reached from 0xEFCB3C.
    case 0xCB3E: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:75 JSL UNKNOWN_C46631
    case 0xCB3F: c.execute<0x22>(0xC443A3, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:76 LDX #128
    case 0xCB43: if (c.p & 0x10) c.execute<0xA2>(0x000080, 2); else c.execute<0xA2>(0x000080, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:76 LDX #128
    // Overlapping static entry reached from 0xEFCB43.
    case 0xCB45: c.execute<0x00>(0x00008E, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:77 STX ENTITY_SCREEN_X_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xCB46: c.execute<0x8E>(0x000B3C, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:78 LDX #112
    case 0xCB49: if (c.p & 0x10) c.execute<0xA2>(0x000070, 2); else c.execute<0xA2>(0x000070, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:78 LDX #112
    // Overlapping static entry reached from 0xEFCB49.
    case 0xCB4B: c.execute<0x00>(0x00008E, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:79 STX ENTITY_SCREEN_Y_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xCB4C: c.execute<0x8E>(0x000B78, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:80 LDA DEBUG_MODE_NUMBER
    case 0xCB4F: c.execute<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:81 CMP #2
    case 0xCB52: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:81 CMP #2
    // Overlapping static entry reached from 0xEFCB52.
    case 0xCB54: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:82 BNE @UNKNOWN3
    case 0xCB55: c.execute<0xD0>(0x000036, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:83 LDA #32
    case 0xCB57: if (c.p & 0x20) c.execute<0xA9>(0x000020, 2); else c.execute<0xA9>(0x000020, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:83 LDA #32
    // Overlapping static entry reached from 0xEFCB57.
    case 0xCB59: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:84 STA @LOCAL00
    case 0xCB5A: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:85 STA @LOCAL01
    case 0xCB5C: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:86 LDY #.LOWORD(-1)
    case 0xCB5E: if (c.p & 0x10) c.execute<0xA0>(0x0000FF, 2); else c.execute<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:86 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFCB5E.
    case 0xCB60: c.execute<0xFF>(0x0004A2, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:87 LDX #EVENT_SCRIPT::EVENT_004
    case 0xCB61: if (c.p & 0x10) c.execute<0xA2>(0x000004, 2); else c.execute<0xA2>(0x000004, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:87 LDX #EVENT_SCRIPT::EVENT_004
    // Overlapping static entry reached from 0xEFCB61.
    case 0xCB63: c.execute<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:88 LDA @LOCAL07
    case 0xCB64: c.execute<0xA5>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:89 JSL CREATE_ENTITY
    case 0xCB66: c.execute<0x22>(0xC01E5F, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:90 STA @LOCAL05
    case 0xCB6A: c.execute<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:91 ASL
    case 0xCB6C: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:92 STA @LOCAL06
    case 0xCB6D: c.execute<0x85>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:93 CLC
    case 0xCB6F: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:94 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xCB70: if (c.p & 0x20) c.execute<0x69>(0x0000AC, 2); else c.execute<0x69>(0x0010AC, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:94 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xEFCB70.
    case 0xCB72: c.execute<0x10>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:95 TAX
    case 0xCB73: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:96 LDA __BSS_START__,X
    case 0xCB74: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:97 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xCB77: if (c.p & 0x20) c.execute<0x09>(0x000000, 2); else c.execute<0x09>(0x00C000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:97 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xEFCB77.
    case 0xCB79: if (c.p & 0x10) c.execute<0xC0>(0x00009D, 2); else c.execute<0xC0>(0x00009D, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:98 STA __BSS_START__,X
    case 0xCB7A: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:98 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFCB79.
    case 0xCB7B: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:98 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFCB79.
    case 0xCB7C: c.execute<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:99 LDA @LOCAL06
    case 0xCB7D: c.execute<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:100 CLC
    case 0xCB7F: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:101 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xCB80: if (c.p & 0x20) c.execute<0x69>(0x000060, 2); else c.execute<0x69>(0x001160, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:101 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xEFCB80.
    case 0xCB82: c.execute<0x11>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:102 TAX
    case 0xCB83: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:103 LDA __BSS_START__,X
    case 0xCB84: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:104 ORA #$8000
    case 0xCB87: if (c.p & 0x20) c.execute<0x09>(0x000000, 2); else c.execute<0x09>(0x008000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:104 ORA #$8000
    // Overlapping static entry reached from 0xEFCB87.
    case 0xCB89: c.execute<0x80>(0x00009D, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:105 STA __BSS_START__,X
    case 0xCB8A: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:107 SEP #PROC_FLAGS::ACCUM8
    case 0xCB8D: c.execute<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    case 0xCB8F: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    case 0xCB91: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Overlapping static entry reached from 0xEFCB8F.
    case 0xCB92: c.execute<0x0E>(0x0000A2, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:109 LDX #BPP4PALETTE_SIZE * 16
    case 0xCB93: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000200, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:109 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xEFCB93.
    case 0xCB95: c.execute<0x02>(0x0000C2, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:110 REP #PROC_FLAGS::ACCUM8
    case 0xCB96: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:111 LDA #.LOWORD(PALETTES)
    case 0xCB98: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000200, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:111 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xEFCB98.
    case 0xCB9A: c.execute<0x02>(0x000022, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:112 JSL MEMSET16
    case 0xCB9B: c.execute<0x22>(0xC08EED, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:113 JSL OVERWORLD_INITIALIZE
    case 0xCB9F: c.execute<0x22>(0xC0004B, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:114 LDX @VIRTUAL02
    case 0xCBA3: c.execute<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:115 LDA @VIRTUAL04
    case 0xCBA5: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:116 JSL LOAD_MAP_AT_POSITION
    case 0xCBA7: c.execute<0x22>(0xC0140C, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:117 LDY #4
    case 0xCBAB: if (c.p & 0x10) c.execute<0xA0>(0x000004, 2); else c.execute<0xA0>(0x000004, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:117 LDY #4
    // Overlapping static entry reached from 0xEFCBAB.
    case 0xCBAD: c.execute<0x00>(0x0000A6, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:118 LDX @VIRTUAL02
    case 0xCBAE: c.execute<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:119 LDA @VIRTUAL04
    case 0xCBB0: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:120 JSL UNKNOWN_C03FA9
    case 0xCBB2: c.execute<0x22>(0xC04230, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:121 JSL UNKNOWN_EFD95E
    case 0xCBB6: c.execute<0x22>(0xEFC269, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:122 LDA DEBUG_MODE_NUMBER
    case 0xCBBA: c.execute<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:123 CMP #3
    case 0xCBBD: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:123 CMP #3
    // Overlapping static entry reached from 0xEFCBBD.
    case 0xCBBF: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:124 BNE @UNKNOWN4
    case 0xCBC0: c.execute<0xD0>(0x000020, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:125 SEP #PROC_FLAGS::ACCUM8
    case 0xCBC2: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:126 LDA #$13
    case 0xCBC4: if (c.p & 0x20) c.execute<0xA9>(0x000013, 2); else c.execute<0xA9>(0x008D13, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:127 STA TM_MIRROR
    case 0xCBC6: c.execute<0x8D>(0x00001A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:127 STA TM_MIRROR
    // Overlapping static entry reached from 0xEFCBC4.
    case 0xCBC7: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:127 STA TM_MIRROR
    // Overlapping static entry reached from 0xEFCBC7.
    case 0xCBC8: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:128 LDA #$04
    case 0xCBC9: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x008D04, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:129 STA TD_MIRROR
    case 0xCBCB: c.execute<0x8D>(0x00001B, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:129 STA TD_MIRROR
    // Overlapping static entry reached from 0xEFCBC9.
    case 0xCBCC: c.execute<0x1B>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:129 STA TD_MIRROR
    // Overlapping static entry reached from 0xEFCBCC.
    case 0xCBCD: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:130 LDA #$02
    case 0xCBCE: if (c.p & 0x20) c.execute<0xA9>(0x000002, 2); else c.execute<0xA9>(0x008F02, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:131 STA f:CGWSEL
    case 0xCBD0: c.execute<0x8F>(0x002130, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:131 STA f:CGWSEL
    // Overlapping static entry reached from 0xEFCBCE.
    case 0xCBD1: c.execute<0x30>(0x000021, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:131 STA f:CGWSEL
    // Overlapping static entry reached from 0xEFCBD1.
    case 0xCBD3: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:132 LDA #$47
    case 0xCBD4: if (c.p & 0x20) c.execute<0xA9>(0x000047, 2); else c.execute<0xA9>(0x008F47, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:133 STA f:CGADSUB
    case 0xCBD6: c.execute<0x8F>(0x002131, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:133 STA f:CGADSUB
    // Overlapping static entry reached from 0xEFCBD4.
    case 0xCBD7: c.execute<0x31>(0x000021, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:133 STA f:CGADSUB
    // Overlapping static entry reached from 0xEFCBD7.
    case 0xCBD9: c.execute<0x00>(0x0000C2, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:134 REP #PROC_FLAGS::ACCUM8
    case 0xCBDA: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:135 LDA #3
    case 0xCBDC: if (c.p & 0x20) c.execute<0xA9>(0x000003, 2); else c.execute<0xA9>(0x000003, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:135 LDA #3
    // Overlapping static entry reached from 0xEFCBDC.
    case 0xCBDE: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:136 STA DEBUG_MODE_NUMBER
    case 0xCBDF: c.execute<0x8D>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:138 LDA DEBUG_MODE_NUMBER
    case 0xCBE2: c.execute<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:139 CMP #5
    case 0xCBE5: if (c.p & 0x20) c.execute<0xC9>(0x000005, 2); else c.execute<0xC9>(0x000005, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:139 CMP #5
    // Overlapping static entry reached from 0xEFCBE5.
    case 0xCBE7: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:140 BNE @UNKNOWN5
    case 0xCBE8: c.execute<0xD0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:141 JSL UNKNOWN_EFEAC8
    case 0xCBEA: c.execute<0x22>(0xEFD3F3, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:143 LDA #.LOWORD(PROCESS_OVERWORLD_TASKS)
    case 0xCBEE: if (c.p & 0x20) c.execute<0xA9>(0x000016, 2); else c.execute<0xA9>(0x00DC16, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:143 LDA #.LOWORD(PROCESS_OVERWORLD_TASKS)
    // Overlapping static entry reached from 0xEFCBEE.
    case 0xCBF0: c.execute<0xDC>(0x001C22, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:144 JSL SET_IRQ_CALLBACK
    case 0xCBF1: c.execute<0x22>(0xC0851C, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:144 JSL SET_IRQ_CALLBACK
    // Overlapping static entry reached from 0xEFCBD1.
    case 0xCBF4: if (c.p & 0x10) c.execute<0xC0>(0x000022, 2); else c.execute<0xC0>(0x003A22, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:145 JSL UNKNOWN_C08744
    case 0xCBF5: c.execute<0x22>(0xC0873A, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:145 JSL UNKNOWN_C08744
    // Overlapping static entry reached from 0xEFCBF4.
    case 0xCBF6: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:145 JSL UNKNOWN_C08744
    // Overlapping static entry reached from 0xEFCBF4.
    case 0xCBF7: c.execute<0x87>(0x0000C0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:146 LDX #1
    case 0xCBF9: if (c.p & 0x10) c.execute<0xA2>(0x000001, 2); else c.execute<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:146 LDX #1
    // Overlapping static entry reached from 0xEFCBF9.
    case 0xCBFB: c.execute<0x00>(0x00008A, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:147 TXA
    case 0xCBFC: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:148 JSL FADE_IN
    case 0xCBFD: c.execute<0x22>(0xC0885E, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:150 JSL OAM_CLEAR
    case 0xCC01: c.execute<0x22>(0xC088A3, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:151 LDA DEBUG_MODE_NUMBER
    case 0xCC05: c.execute<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:152 CMP #2
    case 0xCC08: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:152 CMP #2
    // Overlapping static entry reached from 0xEFCC08.
    case 0xCC0A: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:153 BEQ @UNKNOWN7
    case 0xCC0B: c.execute<0xF0>(0x000007, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:154 CMP #5
    case 0xCC0D: if (c.p & 0x20) c.execute<0xC9>(0x000005, 2); else c.execute<0xC9>(0x000005, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:154 CMP #5
    // Overlapping static entry reached from 0xEFCC0D.
    case 0xCC0F: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:155 BEQ @UNKNOWN8
    case 0xCC10: c.execute<0xF0>(0x000007, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:156 BRA @UNKNOWN9
    case 0xCC12: c.execute<0x80>(0x000008, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:158 JSR DISPLAY_VIEW_CHARACTER_DEBUG_OVERLAY
    case 0xCC14: c.execute<0x20>(0x00C734, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:159 BRA @UNKNOWN9
    case 0xCC17: c.execute<0x80>(0x000003, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:161 JSR DISPLAY_CHECK_POSITION_DEBUG_OVERLAY
    case 0xCC19: c.execute<0x20>(0x00C5D6, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:163 LDA PAD_PRESS
    case 0xCC1C: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:164 AND #PAD::A_BUTTON
    case 0xCC1F: if (c.p & 0x20) c.execute<0x29>(0x000080, 2); else c.execute<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:164 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xEFCC1F.
    case 0xCC21: c.execute<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    case 0xCC22: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xCC24: c.execute<0x4C>(0x00CCAE, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:166 STZ BATTLE_SWIRL_COUNTDOWN
    case 0xCC27: c.execute<0x9C>(0x0060E6, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:167 LDA PAD_STATE
    case 0xCC2A: c.execute<0xAD>(0x000065, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:168 AND #PAD::X_BUTTON
    case 0xCC2D: if (c.p & 0x20) c.execute<0x29>(0x000040, 2); else c.execute<0x29>(0x000040, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:168 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xEFCC2D.
    case 0xCC2F: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:169 BEQ @UNKNOWN11
    case 0xCC30: c.execute<0xF0>(0x000006, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:170 LDA #.LOWORD(-1)
    case 0xCC32: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:170 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFCC32.
    case 0xCC34: c.execute<0xFF>(0xB7268D, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:171 STA DEBUG_ENEMIES_ENABLED_FLAG
    case 0xCC35: c.execute<0x8D>(0x00B726, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:173 LDA #.LOWORD(-1)
    case 0xCC38: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:173 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFCC38.
    case 0xCC3A: c.execute<0xFF>(0x46F68D, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:174 STA LOADED_MAP_PALETTE
    case 0xCC3B: c.execute<0x8D>(0x0046F6, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:175 STA LOADED_MAP_TILE_COMBO
    case 0xCC3E: c.execute<0x8D>(0x0046F4, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:176 LDA SCREEN_X_PIXELS
    case 0xCC41: c.execute<0xAD>(0x004706, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:177 AND #$FFF8
    case 0xCC44: if (c.p & 0x20) c.execute<0x29>(0x0000F8, 2); else c.execute<0x29>(0x00FFF8, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:177 AND #$FFF8
    // Overlapping static entry reached from 0xEFCC44.
    case 0xCC46: c.execute<0xFF>(0x47068D, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:178 STA SCREEN_X_PIXELS
    case 0xCC47: c.execute<0x8D>(0x004706, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:179 LDA SCREEN_Y_PIXELS
    case 0xCC4A: c.execute<0xAD>(0x004708, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:180 AND #$FFF8
    case 0xCC4D: if (c.p & 0x20) c.execute<0x29>(0x0000F8, 2); else c.execute<0x29>(0x00FFF8, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:180 AND #$FFF8
    // Overlapping static entry reached from 0xEFCC4D.
    case 0xCC4F: c.execute<0xFF>(0x47088D, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:181 STA SCREEN_Y_PIXELS
    case 0xCC50: c.execute<0x8D>(0x004708, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:182 JSL UNKNOWN_C08726
    case 0xCC53: c.execute<0x22>(0xC0871F, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:183 LDA #.LOWORD(GAME_STATE)+game_state::leader_x_coord
    case 0xCC57: if (c.p & 0x20) c.execute<0xA9>(0x000028, 2); else c.execute<0xA9>(0x009B28, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:183 LDA #.LOWORD(GAME_STATE)+game_state::leader_x_coord
    // Overlapping static entry reached from 0xEFCC57.
    case 0xCC59: c.execute<0x9B>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:184 STA @VIRTUAL04
    case 0xCC5A: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:185 LDA #.LOWORD(GAME_STATE)+game_state::leader_y_coord
    case 0xCC5C: if (c.p & 0x20) c.execute<0xA9>(0x00002C, 2); else c.execute<0xA9>(0x009B2C, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:185 LDA #.LOWORD(GAME_STATE)+game_state::leader_y_coord
    // Overlapping static entry reached from 0xEFCC5C.
    case 0xCC5E: c.execute<0x9B>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:186 STA @VIRTUAL02
    case 0xCC5F: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:187 LDX @VIRTUAL02
    case 0xCC61: c.execute<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:188 LDA __BSS_START__,X
    case 0xCC63: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:189 TAX
    case 0xCC66: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:190 STX @LOCAL04
    case 0xCC67: c.execute<0x86>(0x000016, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:191 LDX @VIRTUAL04
    case 0xCC69: c.execute<0xA6>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:192 LDA __BSS_START__,X
    case 0xCC6B: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:193 LDX @LOCAL04
    case 0xCC6E: c.execute<0xA6>(0x000016, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:194 JSL LOAD_MAP_AT_POSITION
    case 0xCC70: c.execute<0x22>(0xC0140C, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:195 LDY GAME_STATE+game_state::leader_direction
    case 0xCC74: c.execute<0xAC>(0x009B30, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:196 LDX @VIRTUAL02
    case 0xCC77: c.execute<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:197 LDA __BSS_START__,X
    case 0xCC79: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:198 TAX
    case 0xCC7C: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:199 STX @LOCAL04
    case 0xCC7D: c.execute<0x86>(0x000016, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:200 LDX @VIRTUAL04
    case 0xCC7F: c.execute<0xA6>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:201 LDA __BSS_START__,X
    case 0xCC81: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:202 LDX @LOCAL04
    case 0xCC84: c.execute<0xA6>(0x000016, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:203 JSL UNKNOWN_C03FA9
    case 0xCC86: c.execute<0x22>(0xC04230, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:204 JSL UNKNOWN_EFD95E
    case 0xCC8A: c.execute<0x22>(0xEFC269, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:205 STZ DEBUG_ENEMIES_ENABLED_FLAG
    case 0xCC8E: c.execute<0x9C>(0x00B726, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:206 LDA DEBUG_MODE_NUMBER
    case 0xCC91: c.execute<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:207 CMP #5
    case 0xCC94: if (c.p & 0x20) c.execute<0xC9>(0x000005, 2); else c.execute<0xC9>(0x000005, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:207 CMP #5
    // Overlapping static entry reached from 0xEFCC94.
    case 0xCC96: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:208 BNE @UNKNOWN12
    case 0xCC97: c.execute<0xD0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:209 JSL UNKNOWN_EFEAC8
    case 0xCC99: c.execute<0x22>(0xEFD3F3, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:211 JSL UNKNOWN_C08744
    case 0xCC9D: c.execute<0x22>(0xC0873A, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:212 LDY #0
    case 0xCCA1: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:212 LDY #0
    // Overlapping static entry reached from 0xEFCCA1.
    case 0xCCA3: c.execute<0x00>(0x0000A2, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:213 LDX #1
    case 0xCCA4: if (c.p & 0x10) c.execute<0xA2>(0x000001, 2); else c.execute<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:213 LDX #1
    // Overlapping static entry reached from 0xEFCCA4.
    case 0xCCA6: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:214 LDA #4
    case 0xCCA7: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:214 LDA #4
    // Overlapping static entry reached from 0xEFCCA7.
    case 0xCCA9: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:215 JSL FADE_IN_WITH_MOSAIC
    case 0xCCAA: c.execute<0x22>(0xC087C4, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:217 LDA DEBUG_MODE_NUMBER
    case 0xCCAE: c.execute<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:218 CMP #2
    case 0xCCB1: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:218 CMP #2
    // Overlapping static entry reached from 0xEFCCB1.
    case 0xCCB3: c.execute<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    case 0xCCB4: c.execute<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    case 0xCCB6: c.execute<0x4C>(0x00CDE5, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:220 LDY @LOCAL07
    case 0xCCB9: c.execute<0xA4>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:221 LDA PAD_HELD + 2
    case 0xCCBB: c.execute<0xAD>(0x00006B, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:222 STA @LOCAL03
    case 0xCCBE: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:223 AND #PAD::UP
    case 0xCCC0: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000800, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:223 AND #PAD::UP
    // Overlapping static entry reached from 0xEFCCC0.
    case 0xCCC2: c.execute<0x08>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:224 BEQ @UNKNOWN16
    case 0xCCC3: c.execute<0xF0>(0x00000F, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:225 LDA @LOCAL07
    case 0xCCC5: c.execute<0xA5>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:226 CMP #333
    case 0xCCC7: if (c.p & 0x20) c.execute<0xC9>(0x00004D, 2); else c.execute<0xC9>(0x00014D, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:226 CMP #333
    // Overlapping static entry reached from 0xEFCCC7.
    case 0xCCC9: c.execute<0x01>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:227 BEQ @UNKNOWN15
    case 0xCCCA: c.execute<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:227 BEQ @UNKNOWN15
    // Overlapping static entry reached from 0xEFCCC9.
    case 0xCCCB: c.execute<0x04>(0x0000E6, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:228 INC @LOCAL07
    case 0xCCCC: c.execute<0xE6>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:228 INC @LOCAL07
    // Overlapping static entry reached from 0xEFCCCB.
    case 0xCCCD: c.execute<0x1C>(0x001880, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:229 BRA @UNKNOWN18
    case 0xCCCE: c.execute<0x80>(0x000018, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:229 BRA @UNKNOWN18
    // Overlapping static entry reached from 0xEFCD23.
    case 0xCCCF: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:231 STZ @LOCAL07
    case 0xCCD0: c.execute<0x64>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:232 BRA @UNKNOWN18
    case 0xCCD2: c.execute<0x80>(0x000014, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:234 LDA @LOCAL03
    case 0xCCD4: c.execute<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:235 AND #PAD::DOWN
    case 0xCCD6: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000400, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:235 AND #PAD::DOWN
    // Overlapping static entry reached from 0xEFCCD6.
    case 0xCCD8: c.execute<0x04>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:236 BEQ @UNKNOWN18
    case 0xCCD9: c.execute<0xF0>(0x00000D, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:236 BEQ @UNKNOWN18
    // Overlapping static entry reached from 0xEFCCD8.
    case 0xCCDA: c.execute<0x0D>(0x001CA5, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:237 LDA @LOCAL07
    case 0xCCDB: c.execute<0xA5>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:238 BEQ @UNKNOWN17
    case 0xCCDD: c.execute<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:239 DEC @LOCAL07
    case 0xCCDF: c.execute<0xC6>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:240 BRA @UNKNOWN18
    case 0xCCE1: c.execute<0x80>(0x000005, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:242 LDA #324
    case 0xCCE3: if (c.p & 0x20) c.execute<0xA9>(0x000044, 2); else c.execute<0xA9>(0x000144, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:242 LDA #324
    // Overlapping static entry reached from 0xEFCCE3.
    case 0xCCE5: c.execute<0x01>(0x000085, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:243 STA @LOCAL07
    case 0xCCE6: c.execute<0x85>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:243 STA @LOCAL07
    // Overlapping static entry reached from 0xEFCCE5.
    case 0xCCE7: c.execute<0x1C>(0x006FAD, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:245 LDA PAD_PRESS + 2
    case 0xCCE8: c.execute<0xAD>(0x00006F, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:245 LDA PAD_PRESS + 2
    // Overlapping static entry reached from 0xEFCCE7.
    case 0xCCEA: c.execute<0x00>(0x000029, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:246 AND #PAD::X_BUTTON
    case 0xCCEB: if (c.p & 0x20) c.execute<0x29>(0x000040, 2); else c.execute<0x29>(0x000040, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:246 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xEFCCEB.
    case 0xCCED: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:247 BEQ @UNKNOWN19
    case 0xCCEE: c.execute<0xF0>(0x000023, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:248 LDA @LOCAL05
    case 0xCCF0: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:249 ASL
    case 0xCCF2: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:250 STA @LOCAL06
    case 0xCCF3: c.execute<0x85>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:251 CLC
    case 0xCCF5: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:252 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xCCF6: if (c.p & 0x20) c.execute<0x69>(0x0000AC, 2); else c.execute<0x69>(0x0010AC, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:252 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xEFCCF6.
    case 0xCCF8: c.execute<0x10>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:253 TAX
    case 0xCCF9: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:254 LDA __BSS_START__,X
    case 0xCCFA: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:255 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xCCFD: if (c.p & 0x20) c.execute<0x09>(0x000000, 2); else c.execute<0x09>(0x00C000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:255 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xEFCCFD.
    case 0xCCFF: if (c.p & 0x10) c.execute<0xC0>(0x00009D, 2); else c.execute<0xC0>(0x00009D, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:256 STA __BSS_START__,X
    case 0xCD00: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:256 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFCCFF.
    case 0xCD01: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:256 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFCCFF.
    case 0xCD02: c.execute<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:257 LDA @LOCAL06
    case 0xCD03: c.execute<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:258 CLC
    case 0xCD05: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:259 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xCD06: if (c.p & 0x20) c.execute<0x69>(0x000060, 2); else c.execute<0x69>(0x001160, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:259 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xEFCD06.
    case 0xCD08: c.execute<0x11>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:260 TAX
    case 0xCD09: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:261 LDA __BSS_START__,X
    case 0xCD0A: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:262 ORA #$8000
    case 0xCD0D: if (c.p & 0x20) c.execute<0x09>(0x000000, 2); else c.execute<0x09>(0x008000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:262 ORA #$8000
    // Overlapping static entry reached from 0xEFCD0D.
    case 0xCD0F: c.execute<0x80>(0x00009D, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:263 STA __BSS_START__,X
    case 0xCD10: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:265 LDA PAD_PRESS + 2
    case 0xCD13: c.execute<0xAD>(0x00006F, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:266 AND #PAD::Y_BUTTON
    case 0xCD16: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x004000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:266 AND #PAD::Y_BUTTON
    // Overlapping static entry reached from 0xEFCD16.
    case 0xCD18: c.execute<0x40>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:267 BEQ @UNKNOWN20
    case 0xCD19: c.execute<0xF0>(0x000023, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:268 LDA @LOCAL05
    case 0xCD1B: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:269 ASL
    case 0xCD1D: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:270 STA @LOCAL06
    case 0xCD1E: c.execute<0x85>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:271 CLC
    case 0xCD20: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:272 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xCD21: if (c.p & 0x20) c.execute<0x69>(0x0000AC, 2); else c.execute<0x69>(0x0010AC, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:272 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xEFCD21.
    case 0xCD23: c.execute<0x10>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:273 TAX
    case 0xCD24: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:274 LDA __BSS_START__,X
    case 0xCD25: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:275 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xCD28: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x003FFF, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:275 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xEFCD28.
    case 0xCD2A: c.execute<0x3F>(0x00009D, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:276 STA __BSS_START__,X
    case 0xCD2B: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:277 LDA @LOCAL06
    case 0xCD2E: c.execute<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:278 CLC
    case 0xCD30: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:279 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xCD31: if (c.p & 0x20) c.execute<0x69>(0x000060, 2); else c.execute<0x69>(0x001160, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:279 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xEFCD31.
    case 0xCD33: c.execute<0x11>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:280 TAX
    case 0xCD34: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:281 LDA __BSS_START__,X
    case 0xCD35: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:282 AND #$7FFF
    case 0xCD38: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x007FFF, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:282 AND #$7FFF
    // Overlapping static entry reached from 0xEFCD38.
    case 0xCD3A: c.execute<0x7F>(0x00009D, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:283 STA __BSS_START__,X
    case 0xCD3B: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:285 CPY @LOCAL07
    case 0xCD3E: c.execute<0xC4>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:286 BEQ @UNKNOWN21
    case 0xCD40: c.execute<0xF0>(0x00001D, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:287 LDA @LOCAL05
    case 0xCD42: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:288 JSL UNKNOWN_C02140
    case 0xCD44: c.execute<0x22>(0xC0214E, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:289 LDA #32
    case 0xCD48: if (c.p & 0x20) c.execute<0xA9>(0x000020, 2); else c.execute<0xA9>(0x000020, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:289 LDA #32
    // Overlapping static entry reached from 0xEFCD48.
    case 0xCD4A: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:290 STA @LOCAL00
    case 0xCD4B: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:291 STA @LOCAL01
    case 0xCD4D: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:292 LDY @LOCAL05
    case 0xCD4F: c.execute<0xA4>(0x000018, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:293 LDX #EVENT_SCRIPT::EVENT_004
    case 0xCD51: if (c.p & 0x10) c.execute<0xA2>(0x000004, 2); else c.execute<0xA2>(0x000004, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:293 LDX #EVENT_SCRIPT::EVENT_004
    // Overlapping static entry reached from 0xEFCD51.
    case 0xCD53: c.execute<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:294 LDA @LOCAL07
    case 0xCD54: c.execute<0xA5>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:295 JSL CREATE_ENTITY
    case 0xCD56: c.execute<0x22>(0xC01E5F, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:296 ASL
    case 0xCD5A: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:297 TAX
    case 0xCD5B: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:298 STZ ENTITY_NPC_IDS,X
    case 0xCD5C: c.execute<0x9E>(0x003098, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:300 LDA PAD_PRESS + 2
    case 0xCD5F: c.execute<0xAD>(0x00006F, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:301 AND #PAD::A_BUTTON
    case 0xCD62: if (c.p & 0x20) c.execute<0x29>(0x000080, 2); else c.execute<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:301 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xEFCD62.
    case 0xCD64: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:302 BEQ @UNKNOWN22
    case 0xCD65: c.execute<0xF0>(0x000030, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:303 LDA @LOCAL05
    case 0xCD67: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:304 ASL
    case 0xCD69: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:305 TAX
    case 0xCD6A: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:306 LDA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xCD6B: c.execute<0xBD>(0x0010AC, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:307 AND #OBJECT_TICK_DISABLED
    case 0xCD6E: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:307 AND #OBJECT_TICK_DISABLED
    // Overlapping static entry reached from 0xEFCD6E.
    case 0xCD70: c.execute<0x80>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:308 BNE @UNKNOWN22
    case 0xCD71: c.execute<0xD0>(0x000024, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:309 LDA BG1_X_POS
    case 0xCD73: c.execute<0xAD>(0x000031, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:310 CLC
    case 0xCD76: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:311 ADC #32
    case 0xCD77: if (c.p & 0x20) c.execute<0x69>(0x000020, 2); else c.execute<0x69>(0x000020, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:311 ADC #32
    // Overlapping static entry reached from 0xEFCD77.
    case 0xCD79: c.execute<0x00>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:312 TAX
    case 0xCD7A: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:313 LDA BG1_Y_POS
    case 0xCD7B: c.execute<0xAD>(0x000033, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:314 CLC
    case 0xCD7E: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:315 ADC #32
    case 0xCD7F: if (c.p & 0x20) c.execute<0x69>(0x000020, 2); else c.execute<0x69>(0x000020, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:315 ADC #32
    // Overlapping static entry reached from 0xEFCD7F.
    case 0xCD81: c.execute<0x00>(0x000086, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:316 STX @LOCAL00
    case 0xCD82: c.execute<0x86>(0x00000E, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:317 STA @LOCAL01
    case 0xCD84: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:318 LDY #.LOWORD(-1)
    case 0xCD86: if (c.p & 0x10) c.execute<0xA0>(0x0000FF, 2); else c.execute<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:318 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFCD86.
    case 0xCD88: c.execute<0xFF>(0x0006A2, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:319 LDX #EVENT_SCRIPT::EVENT_006
    case 0xCD89: if (c.p & 0x10) c.execute<0xA2>(0x000006, 2); else c.execute<0xA2>(0x000006, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:319 LDX #EVENT_SCRIPT::EVENT_006
    // Overlapping static entry reached from 0xEFCD89.
    case 0xCD8B: c.execute<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:320 LDA @LOCAL07
    case 0xCD8C: c.execute<0xA5>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:321 JSL CREATE_ENTITY
    case 0xCD8E: c.execute<0x22>(0xC01E5F, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:322 ASL
    case 0xCD92: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:323 TAX
    case 0xCD93: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:324 STZ ENTITY_NPC_IDS,X
    case 0xCD94: c.execute<0x9E>(0x003098, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:326 LDA PAD_PRESS + 2
    case 0xCD97: c.execute<0xAD>(0x00006F, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:327 AND #PAD::B_BUTTON
    case 0xCD9A: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:327 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xEFCD9A.
    case 0xCD9C: c.execute<0x80>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:328 BEQ @UNKNOWN26
    case 0xCD9D: c.execute<0xF0>(0x000046, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:329 LDA BG1_X_POS
    case 0xCD9F: c.execute<0xAD>(0x000031, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:330 STA @LOCAL02
    case 0xCDA2: c.execute<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:331 LDY BG1_Y_POS
    case 0xCDA4: c.execute<0xAC>(0x000033, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:332 LDA #0
    case 0xCDA7: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:332 LDA #0
    // Overlapping static entry reached from 0xEFCDA7.
    case 0xCDA9: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:333 STA @VIRTUAL02
    case 0xCDAA: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:334 BRA @UNKNOWN25
    case 0xCDAC: c.execute<0x80>(0x000011, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:336 LDA @VIRTUAL02
    case 0xCDAE: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:337 ASL
    case 0xCDB0: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:338 TAX
    case 0xCDB1: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:339 LDA ENTITY_SCRIPT_TABLE,X
    case 0xCDB2: c.execute<0xBD>(0x000A58, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:340 CMP #.LOWORD(-1)
    case 0xCDB5: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:340 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFCDB5.
    case 0xCDB7: c.execute<0xFF>(0x9E03F0, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:341 BEQ @UNKNOWN24
    case 0xCDB8: c.execute<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:341 BEQ @UNKNOWN24
    // Overlapping static entry reached from 0xEFCDEE.
    case 0xCDB9: c.execute<0x03>(0x00009E, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:342 STZ ENTITY_PATHFINDING_STATES,X
    case 0xCDBA: c.execute<0x9E>(0x00305C, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:342 STZ ENTITY_PATHFINDING_STATES,X
    // Overlapping static entry reached from 0xEFCDB7.
    case 0xCDBB: c.execute<0x5C>(0x02E630, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:344 INC @VIRTUAL02
    case 0xCDBD: c.execute<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:346 LDA @VIRTUAL02
    case 0xCDBF: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:347 CMP #MAX_ENTITIES
    case 0xCDC1: if (c.p & 0x20) c.execute<0xC9>(0x00001E, 2); else c.execute<0xC9>(0x00001E, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:347 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xEFCDC1.
    case 0xCDC3: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:348 BNE @UNKNOWN23
    case 0xCDC4: c.execute<0xD0>(0x0000E8, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:349 LDA @LOCAL02
    case 0xCDC6: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:350 STA @LOCAL00
    case 0xCDC8: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:351 STY @LOCAL01
    case 0xCDCA: c.execute<0x84>(0x000010, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:352 LDY #.LOWORD(-1)
    case 0xCDCC: if (c.p & 0x10) c.execute<0xA0>(0x0000FF, 2); else c.execute<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:352 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFCDCC.
    case 0xCDCE: c.execute<0xFF>(0x01F3A2, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:353 LDX #EVENT_SCRIPT::EVENT_499
    case 0xCDCF: if (c.p & 0x10) c.execute<0xA2>(0x0000F3, 2); else c.execute<0xA2>(0x0001F3, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:353 LDX #EVENT_SCRIPT::EVENT_499
    // Overlapping static entry reached from 0xEFCDCF.
    case 0xCDD1: c.execute<0x01>(0x0000A9, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:354 LDA #OVERWORLD_SPRITE::GIRL_IN_STRIPED_APRON
    case 0xCDD2: if (c.p & 0x20) c.execute<0xA9>(0x00008A, 2); else c.execute<0xA9>(0x00008A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:354 LDA #OVERWORLD_SPRITE::GIRL_IN_STRIPED_APRON
    // Overlapping static entry reached from 0xEFCDD1.
    case 0xCDD3: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:354 LDA #OVERWORLD_SPRITE::GIRL_IN_STRIPED_APRON
    // Overlapping static entry reached from 0xEFCDD2.
    case 0xCDD4: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:355 JSL CREATE_ENTITY
    case 0xCDD5: c.execute<0x22>(0xC01E5F, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:356 ASL
    case 0xCDD9: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:357 TAX
    case 0xCDDA: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:358 LDA #.LOWORD(-1)
    case 0xCDDB: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:358 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFCDDB.
    case 0xCDDD: c.execute<0xFF>(0x305C9D, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:359 STA ENTITY_PATHFINDING_STATES,X
    case 0xCDDE: c.execute<0x9D>(0x00305C, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:360 JSL UNKNOWN_C0BD96
    case 0xCDE1: c.execute<0x22>(0xC0BD78, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:362 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xCDE5: c.execute<0x22>(0xC09445, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:363 LDA PAD_STATE
    case 0xCDE9: c.execute<0xAD>(0x000065, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:364 AND #PAD::START_BUTTON | PAD::SELECT_BUTTON
    case 0xCDEC: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x003000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:364 AND #PAD::START_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xEFCDEC.
    case 0xCDEE: c.execute<0x30>(0x0000C9, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:365 CMP #PAD::START_BUTTON | PAD::SELECT_BUTTON
    case 0xCDEF: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x003000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:365 CMP #PAD::START_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xEFCDEE.
    case 0xCDF0: c.execute<0x00>(0x000030, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:365 CMP #PAD::START_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xEFCDEF.
    case 0xCDF1: c.execute<0x30>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:366 BNE @UNKNOWN27
    case 0xCDF2: c.execute<0xD0>(0x000013, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:366 BNE @UNKNOWN27
    // Overlapping static entry reached from 0xEFCDF1.
    case 0xCDF3: c.execute<0x13>(0x0000AD, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:367 LDA ENTITY_ABS_X_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xCDF4: c.execute<0xAD>(0x000BB4, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:367 LDA ENTITY_ABS_X_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    // Overlapping static entry reached from 0xEFCDF3.
    case 0xCDF5: c.execute<0xB4>(0x00000B, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:368 STA DEBUG_START_POSITION_X
    case 0xCDF7: c.execute<0x8D>(0x00B712, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:369 LDA ENTITY_ABS_Y_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xCDFA: c.execute<0xAD>(0x000BF0, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:370 STA DEBUG_START_POSITION_Y
    case 0xCDFD: c.execute<0x8D>(0x00B714, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:371 LDA @LOCAL07
    case 0xCE00: c.execute<0xA5>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:372 STA DEBUG_VIEW_CHARACTER_SPRITE
    case 0xCE02: c.execute<0x8D>(0x00B716, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:373 BRA @UNKNOWN33
    case 0xCE05: c.execute<0x80>(0x000070, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:375 LDA PAD_PRESS
    case 0xCE07: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:376 AND #PAD::Y_BUTTON
    case 0xCE0A: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x004000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:376 AND #PAD::Y_BUTTON
    // Overlapping static entry reached from 0xEFCE0A.
    case 0xCE0C: c.execute<0x40>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:377 BEQ @UNKNOWN28
    case 0xCE0D: c.execute<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:378 JSL DEBUG_Y_BUTTON_MENU
    case 0xCE0F: c.execute<0x22>(0xC1357F, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:380 LDA DEBUG_MODE_NUMBER
    case 0xCE13: c.execute<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:381 CMP #3
    case 0xCE16: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:381 CMP #3
    // Overlapping static entry reached from 0xEFCE16.
    case 0xCE18: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:382 BNE @UNKNOWN30
    case 0xCE19: c.execute<0xD0>(0x00002C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:383 LDA BG1_X_POS
    case 0xCE1B: c.execute<0xAD>(0x000031, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:384 STA BG3_X_POS
    case 0xCE1E: c.execute<0x8D>(0x000039, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:385 LDA BG1_Y_POS
    case 0xCE21: c.execute<0xAD>(0x000033, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:386 STA BG3_Y_POS
    case 0xCE24: c.execute<0x8D>(0x00003B, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:387 LDA PAD_PRESS
    case 0xCE27: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:388 AND #PAD::SELECT_BUTTON
    case 0xCE2A: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x002000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:388 AND #PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xEFCE2A.
    case 0xCE2C: c.execute<0x20>(0x0018F0, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:389 BEQ @UNKNOWN30
    case 0xCE2D: c.execute<0xF0>(0x000018, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:390 LDX VIEW_ATTRIBUTE_MODE
    case 0xCE2F: c.execute<0xAE>(0x00B710, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:391 INX
    case 0xCE32: c.execute<0xE8>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:392 STX VIEW_ATTRIBUTE_MODE
    case 0xCE33: c.execute<0x8E>(0x00B710, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:393 CPX #4
    case 0xCE36: if (c.p & 0x10) c.execute<0xE0>(0x000004, 2); else c.execute<0xE0>(0x000004, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:393 CPX #4
    // Overlapping static entry reached from 0xEFCE36.
    case 0xCE38: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:394 BNE @UNKNOWN29
    case 0xCE39: c.execute<0xD0>(0x000003, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:395 STZ VIEW_ATTRIBUTE_MODE
    case 0xCE3B: c.execute<0x9C>(0x00B710, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:397 LDX GAME_STATE+game_state::leader_y_coord
    case 0xCE3E: c.execute<0xAE>(0x009B2C, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:398 LDA GAME_STATE+game_state::leader_x_coord
    case 0xCE41: c.execute<0xAD>(0x009B28, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:399 JSR UNKNOWN_EFE133
    case 0xCE44: c.execute<0x20>(0x00CA4D, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:399 JSR UNKNOWN_EFE133
    // Overlapping static entry reached from 0xEFCE54.
    case 0xCE46: c.execute<0xCA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:401 LDA DEBUG_MODE_NUMBER
    case 0xCE47: c.execute<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:402 CMP #1
    case 0xCE4A: if (c.p & 0x20) c.execute<0xC9>(0x000001, 2); else c.execute<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:402 CMP #1
    // Overlapping static entry reached from 0xEFCE4A.
    case 0xCE4C: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:403 BNE @UNKNOWN31
    case 0xCE4D: c.execute<0xD0>(0x00000C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:404 LDA PAD_PRESS
    case 0xCE4F: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:405 AND #PAD::B_BUTTON
    case 0xCE52: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:405 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xEFCE52.
    case 0xCE54: c.execute<0x80>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:406 BEQ @UNKNOWN31
    case 0xCE55: c.execute<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:407 JSL OPEN_MENU_BUTTON
    case 0xCE57: c.execute<0x22>(0xC13A85, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:409 LDA CURRENT_QUEUED_INTERACTION
    case 0xCE5B: c.execute<0xAD>(0x006188, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:410 SEC
    case 0xCE5E: c.execute<0x38>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:411 SBC NEXT_QUEUED_INTERACTION
    case 0xCE5F: c.execute<0xED>(0x00618A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:412 BEQ @UNKNOWN32
    case 0xCE62: c.execute<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:413 JSL PROCESS_QUEUED_INTERACTIONS
    case 0xCE64: c.execute<0x22>(0xC0781C, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:415 JSL UPDATE_SCREEN
    case 0xCE68: c.execute<0x22>(0xC08B17, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:416 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xCE6C: c.execute<0x22>(0xC0874C, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:417 JSL INIT_BATTLE_OVERWORLD
    case 0xCE70: c.execute<0x22>(0xC0B717, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:417 JSL INIT_BATTLE_OVERWORLD
    // Overlapping static entry reached from 0xEFCEC3.
    case 0xCE72: c.execute<0xB7>(0x0000C0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:418 JMP @UNKNOWN6
    case 0xCE74: c.execute<0x4C>(0x00CC01, 3); return true;
    // include/macros.asm:25 PLD
    case 0xCE77: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xCE78: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xCE79: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xCE7B: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xCE7C: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xCE7D: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFCE7D.
    case 0xCE7F: c.execute<0xFF>(0xE2A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xCE80: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xCE81: if (c.p & 0x20) c.execute<0xA9>(0x0000E2, 2); else c.execute<0xA9>(0x00D8E2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFCE81.
    case 0xCE83: c.execute<0xD8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    case 0xCE84: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xCE86: if (c.p & 0x20) c.execute<0xA9>(0x0000EF, 2); else c.execute<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFCE86.
    case 0xCE88: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xCE89: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    case 0xCE8B: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x004000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Overlapping static entry reached from 0xEFCE8B.
    case 0xCE8D: c.execute<0x40>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    case 0xCE8E: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000200, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Overlapping static entry reached from 0xEFCE8E.
    case 0xCE90: c.execute<0x02>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    case 0xCE91: c.execute<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    case 0xCE93: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    case 0xCE95: c.execute<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFCE93.
    case 0xCE96: c.execute<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFCE96.
    case 0xCE98: if (c.p & 0x10) c.execute<0xC0>(0x00002B, 2); else c.execute<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    case 0xCE99: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xCE9A: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xCE9B: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xCE9D: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xCE9E: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xCE9F: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFCE9F.
    case 0xCEA1: c.execute<0xFF>(0x69AD5B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xCEA2: c.execute<0x5B>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:7 LDA PAD_HELD
    case 0xCEA3: c.execute<0xAD>(0x000069, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:7 LDA PAD_HELD
    // Overlapping static entry reached from 0xEFCEA1.
    case 0xCEA5: c.execute<0x00>(0x000085, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:8 STA @LOCAL00
    case 0xCEA6: c.execute<0x85>(0x00000E, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:9 AND #PAD::UP
    case 0xCEA8: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000800, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:9 AND #PAD::UP
    // Overlapping static entry reached from 0xEFCEA8.
    case 0xCEAA: c.execute<0x08>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:10 BEQ @UNKNOWN1
    case 0xCEAB: c.execute<0xF0>(0x000010, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:11 LDA DEBUG_MENU_CURSOR_POSITION
    case 0xCEAD: c.execute<0xAD>(0x00B706, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:12 BEQ @UNKNOWN0
    case 0xCEB0: c.execute<0xF0>(0x000005, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:13 DEC DEBUG_MENU_CURSOR_POSITION
    case 0xCEB2: c.execute<0xCE>(0x00B706, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:14 BRA @UNKNOWN1
    case 0xCEB5: c.execute<0x80>(0x000006, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:16 LDA #6
    case 0xCEB7: if (c.p & 0x20) c.execute<0xA9>(0x000006, 2); else c.execute<0xA9>(0x000006, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:16 LDA #6
    // Overlapping static entry reached from 0xEFCEB7.
    case 0xCEB9: c.execute<0x00>(0x00008D, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:17 STA DEBUG_MENU_CURSOR_POSITION
    case 0xCEBA: c.execute<0x8D>(0x00B706, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:19 LDA @LOCAL00
    case 0xCEBD: c.execute<0xA5>(0x00000E, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:20 AND #PAD::DOWN
    case 0xCEBF: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000400, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:20 AND #PAD::DOWN
    // Overlapping static entry reached from 0xEFCEBF.
    case 0xCEC1: c.execute<0x04>(0x0000F0, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:21 BEQ @UNKNOWN3
    case 0xCEC2: c.execute<0xF0>(0x000010, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:21 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xEFCEC1.
    case 0xCEC3: c.execute<0x10>(0x0000AD, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:22 LDA DEBUG_MENU_CURSOR_POSITION
    case 0xCEC4: c.execute<0xAD>(0x00B706, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:22 LDA DEBUG_MENU_CURSOR_POSITION
    // Overlapping static entry reached from 0xEFCEC3.
    case 0xCEC5: c.execute<0x06>(0x0000B7, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:23 CMP #6
    case 0xCEC7: if (c.p & 0x20) c.execute<0xC9>(0x000006, 2); else c.execute<0xC9>(0x000006, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:23 CMP #6
    // Overlapping static entry reached from 0xEFCEC7.
    case 0xCEC9: c.execute<0x00>(0x0000F0, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:24 BEQ @UNKNOWN2
    case 0xCECA: c.execute<0xF0>(0x000005, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:25 INC DEBUG_MENU_CURSOR_POSITION
    case 0xCECC: c.execute<0xEE>(0x00B706, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:26 BRA @UNKNOWN3
    case 0xCECF: c.execute<0x80>(0x000003, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:28 STZ DEBUG_MENU_CURSOR_POSITION
    case 0xCED1: c.execute<0x9C>(0x00B706, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:30 LDA DEBUG_CURSOR_ENTITY
    case 0xCED4: c.execute<0xAD>(0x00B704, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:31 ASL
    case 0xCED7: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:32 TAX
    case 0xCED8: c.execute<0xAA>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:33 LDA DEBUG_MENU_CURSOR_POSITION
    case 0xCED9: c.execute<0xAD>(0x00B706, 3); return true;
    // include/macros.asm:623 STA scratch
    case 0xCEDC: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    case 0xCEDE: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    case 0xCEDF: c.execute<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    case 0xCEE1: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    case 0xCEE2: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    case 0xCEE3: c.execute<0x0A>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:35 CLC
    case 0xCEE4: c.execute<0x18>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:36 ADC #26 * 2
    case 0xCEE5: if (c.p & 0x20) c.execute<0x69>(0x000034, 2); else c.execute<0x69>(0x000034, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:36 ADC #26 * 2
    // Overlapping static entry reached from 0xEFCEE5.
    case 0xCEE7: c.execute<0x00>(0x00009D, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:37 STA ENTITY_ABS_Y_TABLE,X
    case 0xCEE8: c.execute<0x9D>(0x000BC0, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:38 LDA PAD_PRESS
    case 0xCEEB: c.execute<0xAD>(0x00006D, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:39 AND #PAD::B_BUTTON | PAD::START_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    case 0xCEEE: if (c.p & 0x20) c.execute<0x29>(0x0000A0, 2); else c.execute<0x29>(0x0090A0, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:39 AND #PAD::B_BUTTON | PAD::START_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xEFCEEE.
    case 0xCEF0: c.execute<0x90>(0x00008D, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:40 STA DEBUG_MENU_BUTTONS_PRESSED
    case 0xCEF1: c.execute<0x8D>(0x00B708, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:40 STA DEBUG_MENU_BUTTONS_PRESSED
    // Overlapping static entry reached from 0xEFCEF0.
    case 0xCEF2: c.execute<0x08>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:40 STA DEBUG_MENU_BUTTONS_PRESSED
    // Overlapping static entry reached from 0xEFCEF2.
    case 0xCEF3: c.execute<0xB7>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    case 0xCEF4: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xCEF5: c.execute<0x60>(0x000000, 1); return true;
    // src/system/debug/process_command_selection.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xCEF6: c.execute<0xC2>(0x000031, 2); return true;
    // src/system/debug/process_command_selection.asm:4 LDA DEBUG_MENU_BUTTONS_PRESSED
    case 0xCEF8: c.execute<0xAD>(0x00B708, 3); return true;
    // include/macros.asm:772 BNE :+
    case 0xCEFB: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xCEFD: c.execute<0x4C>(0x00CFAB, 3); return true;
    // src/system/debug/process_command_selection.asm:6 LDA DEBUG_MENU_CURSOR_POSITION
    case 0xCF00: c.execute<0xAD>(0x00B706, 3); return true;
    // src/system/debug/process_command_selection.asm:7 BEQ @UNKNOWN1
    case 0xCF03: c.execute<0xF0>(0x000020, 2); return true;
    // src/system/debug/process_command_selection.asm:8 CMP #$0001
    case 0xCF05: if (c.p & 0x20) c.execute<0xC9>(0x000001, 2); else c.execute<0xC9>(0x000001, 3); return true;
    // src/system/debug/process_command_selection.asm:8 CMP #$0001
    // Overlapping static entry reached from 0xEFCF05.
    case 0xCF07: c.execute<0x00>(0x0000F0, 2); return true;
    // src/system/debug/process_command_selection.asm:9 BEQ @UNKNOWN2
    case 0xCF08: c.execute<0xF0>(0x00002E, 2); return true;
    // src/system/debug/process_command_selection.asm:10 CMP #$0002
    case 0xCF0A: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/system/debug/process_command_selection.asm:10 CMP #$0002
    // Overlapping static entry reached from 0xEFCF0A.
    case 0xCF0C: c.execute<0x00>(0x0000F0, 2); return true;
    // src/system/debug/process_command_selection.asm:11 BEQ @UNKNOWN3
    case 0xCF0D: c.execute<0xF0>(0x00003A, 2); return true;
    // src/system/debug/process_command_selection.asm:12 CMP #$0003
    case 0xCF0F: if (c.p & 0x20) c.execute<0xC9>(0x000003, 2); else c.execute<0xC9>(0x000003, 3); return true;
    // src/system/debug/process_command_selection.asm:12 CMP #$0003
    // Overlapping static entry reached from 0xEFCF0F.
    case 0xCF11: c.execute<0x00>(0x0000F0, 2); return true;
    // src/system/debug/process_command_selection.asm:13 BEQ @UNKNOWN4
    case 0xCF12: c.execute<0xF0>(0x00004C, 2); return true;
    // src/system/debug/process_command_selection.asm:14 CMP #$0004
    case 0xCF14: if (c.p & 0x20) c.execute<0xC9>(0x000004, 2); else c.execute<0xC9>(0x000004, 3); return true;
    // src/system/debug/process_command_selection.asm:14 CMP #$0004
    // Overlapping static entry reached from 0xEFCF14.
    case 0xCF16: c.execute<0x00>(0x0000F0, 2); return true;
    // src/system/debug/process_command_selection.asm:15 BEQ @UNKNOWN5
    case 0xCF17: c.execute<0xF0>(0x000052, 2); return true;
    // src/system/debug/process_command_selection.asm:16 CMP #$0005
    case 0xCF19: if (c.p & 0x20) c.execute<0xC9>(0x000005, 2); else c.execute<0xC9>(0x000005, 3); return true;
    // src/system/debug/process_command_selection.asm:16 CMP #$0005
    // Overlapping static entry reached from 0xEFCF19.
    case 0xCF1B: c.execute<0x00>(0x0000F0, 2); return true;
    // src/system/debug/process_command_selection.asm:17 BEQ @UNKNOWN6
    case 0xCF1C: c.execute<0xF0>(0x000059, 2); return true;
    // src/system/debug/process_command_selection.asm:18 CMP #$0006
    case 0xCF1E: if (c.p & 0x20) c.execute<0xC9>(0x000006, 2); else c.execute<0xC9>(0x000006, 3); return true;
    // src/system/debug/process_command_selection.asm:18 CMP #$0006
    // Overlapping static entry reached from 0xEFCF1E.
    case 0xCF20: c.execute<0x00>(0x0000F0, 2); return true;
    // src/system/debug/process_command_selection.asm:19 BEQ @UNKNOWN7
    case 0xCF21: c.execute<0xF0>(0x00005F, 2); return true;
    // src/system/debug/process_command_selection.asm:20 BRA @UNKNOWN8
    case 0xCF23: c.execute<0x80>(0x00006A, 2); return true;
    // src/system/debug/process_command_selection.asm:22 LDY #$0000
    case 0xCF25: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/system/debug/process_command_selection.asm:22 LDY #$0000
    // Overlapping static entry reached from 0xEFCF25.
    case 0xCF27: c.execute<0x00>(0x0000A2, 2); return true;
    // src/system/debug/process_command_selection.asm:23 LDX #$0001
    case 0xCF28: if (c.p & 0x10) c.execute<0xA2>(0x000001, 2); else c.execute<0xA2>(0x000001, 3); return true;
    // src/system/debug/process_command_selection.asm:23 LDX #$0001
    // Overlapping static entry reached from 0xEFCF28.
    case 0xCF2A: c.execute<0x00>(0x0000A9, 2); return true;
    // src/system/debug/process_command_selection.asm:24 LDA #$0004
    case 0xCF2B: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/system/debug/process_command_selection.asm:24 LDA #$0004
    // Overlapping static entry reached from 0xEFCF2B.
    case 0xCF2D: c.execute<0x00>(0x000022, 2); return true;
    // src/system/debug/process_command_selection.asm:25 JSL FADE_OUT_WITH_MOSAIC
    case 0xCF2E: c.execute<0x22>(0xC0880A, 4); return true;
    // src/system/debug/process_command_selection.asm:26 JSL MAIN_LOOP
    case 0xCF32: c.execute<0x22>(0xC0B7BE, 4); return true;
    // src/system/debug/process_command_selection.asm:27 BRA @UNKNOWN8
    case 0xCF36: c.execute<0x80>(0x000057, 2); return true;
    // src/system/debug/process_command_selection.asm:29 LDA #$0001
    case 0xCF38: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/system/debug/process_command_selection.asm:29 LDA #$0001
    // Overlapping static entry reached from 0xEFCF38.
    case 0xCF3A: c.execute<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:30 STA DEBUG_MODE_NUMBER
    case 0xCF3B: c.execute<0x8D>(0x00B70A, 3); return true;
    // src/system/debug/process_command_selection.asm:31 LDA #$FFFF
    case 0xCF3E: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/system/debug/process_command_selection.asm:31 LDA #$FFFF
    // Overlapping static entry reached from 0xEFCF3E.
    case 0xCF40: c.execute<0xFF>(0x4DDE8D, 4); return true;
    // src/system/debug/process_command_selection.asm:32 STA NPC_SPAWNS_ENABLED
    case 0xCF41: c.execute<0x8D>(0x004DDE, 3); return true;
    // src/system/debug/process_command_selection.asm:33 JSR UNKNOWN_EFE175
    case 0xCF44: c.execute<0x20>(0x00CA8F, 3); return true;
    // src/system/debug/process_command_selection.asm:34 BRA @UNKNOWN8
    case 0xCF47: c.execute<0x80>(0x000046, 2); return true;
    // src/system/debug/process_command_selection.asm:36 LDA #$0002
    case 0xCF49: if (c.p & 0x20) c.execute<0xA9>(0x000002, 2); else c.execute<0xA9>(0x000002, 3); return true;
    // src/system/debug/process_command_selection.asm:36 LDA #$0002
    // Overlapping static entry reached from 0xEFCF49.
    case 0xCF4B: c.execute<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:37 STA DEBUG_MODE_NUMBER
    case 0xCF4C: c.execute<0x8D>(0x00B70A, 3); return true;
    // src/system/debug/process_command_selection.asm:38 LDA #$000A
    case 0xCF4F: if (c.p & 0x20) c.execute<0xA9>(0x00000A, 2); else c.execute<0xA9>(0x00000A, 3); return true;
    // src/system/debug/process_command_selection.asm:38 LDA #$000A
    // Overlapping static entry reached from 0xEFCF4F.
    case 0xCF51: c.execute<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:39 STA OVERWORLD_ENEMY_MAXIMUM
    case 0xCF52: c.execute<0x8D>(0x004DE4, 3); return true;
    // src/system/debug/process_command_selection.asm:40 LDA #$FFFF
    case 0xCF55: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/system/debug/process_command_selection.asm:40 LDA #$FFFF
    // Overlapping static entry reached from 0xEFCF55.
    case 0xCF57: c.execute<0xFF>(0x4DE08D, 4); return true;
    // src/system/debug/process_command_selection.asm:41 STA ENEMY_SPAWNS_ENABLED
    case 0xCF58: c.execute<0x8D>(0x004DE0, 3); return true;
    // src/system/debug/process_command_selection.asm:42 JSR UNKNOWN_EFE175
    case 0xCF5B: c.execute<0x20>(0x00CA8F, 3); return true;
    // src/system/debug/process_command_selection.asm:43 BRA @UNKNOWN8
    case 0xCF5E: c.execute<0x80>(0x00002F, 2); return true;
    // src/system/debug/process_command_selection.asm:45 LDA #$0003
    case 0xCF60: if (c.p & 0x20) c.execute<0xA9>(0x000003, 2); else c.execute<0xA9>(0x000003, 3); return true;
    // src/system/debug/process_command_selection.asm:45 LDA #$0003
    // Overlapping static entry reached from 0xEFCF60.
    case 0xCF62: c.execute<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:46 STA DEBUG_MODE_NUMBER
    case 0xCF63: c.execute<0x8D>(0x00B70A, 3); return true;
    // src/system/debug/process_command_selection.asm:47 JSR UNKNOWN_EFE175
    case 0xCF66: c.execute<0x20>(0x00CA8F, 3); return true;
    // src/system/debug/process_command_selection.asm:48 BRA @UNKNOWN8
    case 0xCF69: c.execute<0x80>(0x000024, 2); return true;
    // src/system/debug/process_command_selection.asm:50 LDA #$0004
    case 0xCF6B: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/system/debug/process_command_selection.asm:50 LDA #$0004
    // Overlapping static entry reached from 0xEFCF6B.
    case 0xCF6D: c.execute<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:51 STA DEBUG_MODE_NUMBER
    case 0xCF6E: c.execute<0x8D>(0x00B70A, 3); return true;
    // src/system/debug/process_command_selection.asm:52 JSL BATTLE_ROUTINE
    case 0xCF71: c.execute<0x22>(0xC246EE, 4); return true;
    // src/system/debug/process_command_selection.asm:53 BRA @UNKNOWN8
    case 0xCF75: c.execute<0x80>(0x000018, 2); return true;
    // src/system/debug/process_command_selection.asm:55 LDA #$0005
    case 0xCF77: if (c.p & 0x20) c.execute<0xA9>(0x000005, 2); else c.execute<0xA9>(0x000005, 3); return true;
    // src/system/debug/process_command_selection.asm:55 LDA #$0005
    // Overlapping static entry reached from 0xEFCF77.
    case 0xCF79: c.execute<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:56 STA DEBUG_MODE_NUMBER
    case 0xCF7A: c.execute<0x8D>(0x00B70A, 3); return true;
    // src/system/debug/process_command_selection.asm:57 JSR UNKNOWN_EFE175
    case 0xCF7D: c.execute<0x20>(0x00CA8F, 3); return true;
    // src/system/debug/process_command_selection.asm:58 BRA @UNKNOWN8
    case 0xCF80: c.execute<0x80>(0x00000D, 2); return true;
    // src/system/debug/process_command_selection.asm:60 LDA #$0006
    case 0xCF82: if (c.p & 0x20) c.execute<0xA9>(0x000006, 2); else c.execute<0xA9>(0x000006, 3); return true;
    // src/system/debug/process_command_selection.asm:60 LDA #$0006
    // Overlapping static entry reached from 0xEFCF82.
    case 0xCF84: c.execute<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:61 STA DEBUG_MODE_NUMBER
    case 0xCF85: c.execute<0x8D>(0x00B70A, 3); return true;
    // src/system/debug/process_command_selection.asm:62 LDA DEBUG_CURSOR_ENTITY
    case 0xCF88: c.execute<0xAD>(0x00B704, 3); return true;
    // src/system/debug/process_command_selection.asm:63 JSL UNKNOWN_EFD6D4
    case 0xCF8B: c.execute<0x22>(0xEFBFDF, 4); return true;
    // src/system/debug/process_command_selection.asm:65 JSL UNKNOWN_EFEB2A
    case 0xCF8F: c.execute<0x22>(0xEFD455, 4); return true;
    // src/system/debug/process_command_selection.asm:66 STZ DEBUG_MENU_BUTTONS_PRESSED
    case 0xCF93: c.execute<0x9C>(0x00B708, 3); return true;
    // src/system/debug/process_command_selection.asm:67 STZ DEBUG_MODE_NUMBER
    case 0xCF96: c.execute<0x9C>(0x00B70A, 3); return true;
    // src/system/debug/process_command_selection.asm:68 JSL UNKNOWN_C0927C
    case 0xCF99: c.execute<0x22>(0xC0925E, 4); return true;
    // src/system/debug/process_command_selection.asm:69 JSR UNKNOWN_EFDA05
    case 0xCF9D: c.execute<0x20>(0x00C31F, 3); return true;
    // src/system/debug/process_command_selection.asm:70 JSR DEBUG_DISPLAY_MENU_OPTIONS
    case 0xCFA0: c.execute<0x20>(0x00C43B, 3); return true;
    // src/system/debug/process_command_selection.asm:71 LDX #$0001
    case 0xCFA3: if (c.p & 0x10) c.execute<0xA2>(0x000001, 2); else c.execute<0xA2>(0x000001, 3); return true;
    // src/system/debug/process_command_selection.asm:71 LDX #$0001
    // Overlapping static entry reached from 0xEFCFA3.
    case 0xCFA5: c.execute<0x00>(0x00008A, 2); return true;
    // src/system/debug/process_command_selection.asm:72 TXA
    case 0xCFA6: c.execute<0x8A>(0x000000, 1); return true;
    // src/system/debug/process_command_selection.asm:73 JSL FADE_IN
    case 0xCFA7: c.execute<0x22>(0xC0885E, 4); return true;
    // src/system/debug/process_command_selection.asm:75 RTS
    case 0xCFAB: c.execute<0x60>(0x000000, 1); return true;
    // src/system/debug/load_menu.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xCFAC: c.execute<0xC2>(0x000031, 2); return true;
    // src/system/debug/load_menu.asm:4 LDA #$0080
    case 0xCFAE: if (c.p & 0x20) c.execute<0xA9>(0x000080, 2); else c.execute<0xA9>(0x000080, 3); return true;
    // src/system/debug/load_menu.asm:4 LDA #$0080
    // Overlapping static entry reached from 0xEFCFAE.
    case 0xCFB0: c.execute<0x00>(0x00008D, 2); return true;
    // src/system/debug/load_menu.asm:5 STA DEBUG_START_POSITION_X
    case 0xCFB1: c.execute<0x8D>(0x00B712, 3); return true;
    // src/system/debug/load_menu.asm:6 LDA #$0070
    case 0xCFB4: if (c.p & 0x20) c.execute<0xA9>(0x000070, 2); else c.execute<0xA9>(0x000070, 3); return true;
    // src/system/debug/load_menu.asm:6 LDA #$0070
    // Overlapping static entry reached from 0xEFCFB4.
    case 0xCFB6: c.execute<0x00>(0x00008D, 2); return true;
    // src/system/debug/load_menu.asm:7 STA DEBUG_START_POSITION_Y
    case 0xCFB7: c.execute<0x8D>(0x00B714, 3); return true;
    // src/system/debug/load_menu.asm:8 LDA #$0094
    case 0xCFBA: if (c.p & 0x20) c.execute<0xA9>(0x000094, 2); else c.execute<0xA9>(0x000094, 3); return true;
    // src/system/debug/load_menu.asm:8 LDA #$0094
    // Overlapping static entry reached from 0xEFCFBA.
    case 0xCFBC: c.execute<0x00>(0x00008D, 2); return true;
    // src/system/debug/load_menu.asm:9 STA DEBUG_VIEW_CHARACTER_SPRITE
    case 0xCFBD: c.execute<0x8D>(0x00B716, 3); return true;
    // src/system/debug/load_menu.asm:10 LDA #$FFFF
    case 0xCFC0: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/system/debug/load_menu.asm:10 LDA #$FFFF
    // Overlapping static entry reached from 0xEFCFC0.
    case 0xCFC2: c.execute<0xFF>(0xA05A8D, 4); return true;
    // src/system/debug/load_menu.asm:11 STA DAD_PHONE_TIMER
    case 0xCFC3: c.execute<0x8D>(0x00A05A, 3); return true;
    // src/system/debug/load_menu.asm:12 JSL UNKNOWN_C0927C
    case 0xCFC6: c.execute<0x22>(0xC0925E, 4); return true;
    // src/system/debug/load_menu.asm:13 JSR UNKNOWN_EFDA05
    case 0xCFCA: c.execute<0x20>(0x00C31F, 3); return true;
    // src/system/debug/load_menu.asm:14 JSR DEBUG_DISPLAY_MENU_OPTIONS
    case 0xCFCD: c.execute<0x20>(0x00C43B, 3); return true;
    // src/system/debug/load_menu.asm:15 LDX #$0001
    case 0xCFD0: if (c.p & 0x10) c.execute<0xA2>(0x000001, 2); else c.execute<0xA2>(0x000001, 3); return true;
    // src/system/debug/load_menu.asm:15 LDX #$0001
    // Overlapping static entry reached from 0xEFCFD0.
    case 0xCFD2: c.execute<0x00>(0x0000A9, 2); return true;
    // src/system/debug/load_menu.asm:16 LDA #$0004
    case 0xCFD3: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/system/debug/load_menu.asm:16 LDA #$0004
    // Overlapping static entry reached from 0xEFCFD3.
    case 0xCFD5: c.execute<0x00>(0x000022, 2); return true;
    // src/system/debug/load_menu.asm:17 JSL FADE_IN
    case 0xCFD6: c.execute<0x22>(0xC0885E, 4); return true;
    // src/system/debug/load_menu.asm:19 JSL OAM_CLEAR
    case 0xCFDA: c.execute<0x22>(0xC088A3, 4); return true;
    // src/system/debug/load_menu.asm:20 JSR DEBUG_HANDLE_CURSOR_MOVEMENT
    case 0xCFDE: c.execute<0x20>(0x00CE9B, 3); return true;
    // src/system/debug/load_menu.asm:21 JSR DEBUG_PROCESS_COMMAND_SELECTION
    case 0xCFE1: c.execute<0x20>(0x00CEF6, 3); return true;
    // src/system/debug/load_menu.asm:22 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xCFE4: c.execute<0x22>(0xC09445, 4); return true;
    // src/system/debug/load_menu.asm:23 JSL UPDATE_SCREEN
    case 0xCFE8: c.execute<0x22>(0xC08B17, 4); return true;
    // src/system/debug/load_menu.asm:24 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xCFEC: c.execute<0x22>(0xC0874C, 4); return true;
    // src/system/debug/load_menu.asm:25 BRA @UNKNOWN0
    case 0xCFF0: c.execute<0x80>(0x0000E8, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xCFF2: c.execute<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EFE6CF.asm:6 LDA DEBUG_MODE_NUMBER
    case 0xCFF4: c.execute<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE6CF.asm:7 CMP #1
    case 0xCFF7: if (c.p & 0x20) c.execute<0xC9>(0x000001, 2); else c.execute<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFE6CF.asm:7 CMP #1
    // Overlapping static entry reached from 0xEFCFF7.
    case 0xCFF9: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE6CF.asm:8 BNE @UNKNOWN1
    case 0xCFFA: c.execute<0xD0>(0x000005, 2); return true;
    // src/unknown/EF/EFE6CF.asm:9 LDA #0
    case 0xCFFC: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE6CF.asm:9 LDA #0
    // Overlapping static entry reached from 0xEFCFFC.
    case 0xCFFE: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EFE6CF.asm:10 BRA @UNKNOWN2
    case 0xCFFF: c.execute<0x80>(0x000003, 2); return true;
    // src/unknown/EF/EFE6CF.asm:12 LDA #.LOWORD(-1)
    case 0xD001: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE6CF.asm:12 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD001.
    case 0xD003: c.execute<0xFF>(0x31C26B, 4); return true;
    // include/macros.asm:30 RTL
    case 0xD004: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xD005: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xD007: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xD008: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xD009: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xD00A: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFD00A.
    case 0xD00C: c.execute<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xD00D: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xD00E: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFE6E2.asm:9 STA @LOCAL00
    case 0xD00F: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE6E2.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xEFD00C.
    case 0xD010: c.execute<0x0E>(0x000AAD, 3); return true;
    // src/unknown/EF/EFE6E2.asm:10 LDA DEBUG_MODE_NUMBER
    case 0xD011: c.execute<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE6E2.asm:10 LDA DEBUG_MODE_NUMBER
    // Overlapping static entry reached from 0xEFD010.
    case 0xD013: c.execute<0xB7>(0x0000C9, 2); return true;
    // src/unknown/EF/EFE6E2.asm:11 CMP #1
    case 0xD014: if (c.p & 0x20) c.execute<0xC9>(0x000001, 2); else c.execute<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFE6E2.asm:11 CMP #1
    // Overlapping static entry reached from 0xEFD013.
    case 0xD015: c.execute<0x01>(0x000000, 2); return true;
    // src/unknown/EF/EFE6E2.asm:11 CMP #1
    // Overlapping static entry reached from 0xEFD014.
    case 0xD016: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE6E2.asm:12 BNE @UNKNOWN0
    case 0xD017: c.execute<0xD0>(0x00000E, 2); return true;
    // src/unknown/EF/EFE6E2.asm:13 LDA @LOCAL00
    case 0xD019: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFE6E2.asm:14 CMP #10
    case 0xD01B: if (c.p & 0x20) c.execute<0xC9>(0x00000A, 2); else c.execute<0xC9>(0x00000A, 3); return true;
    // src/unknown/EF/EFE6E2.asm:14 CMP #10
    // Overlapping static entry reached from 0xEFD01B.
    case 0xD01D: c.execute<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    case 0xD01E: c.execute<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    case 0xD020: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EFE6E2.asm:16 LDA #10
    case 0xD022: if (c.p & 0x20) c.execute<0xA9>(0x00000A, 2); else c.execute<0xA9>(0x00000A, 3); return true;
    // src/unknown/EF/EFE6E2.asm:16 LDA #10
    // Overlapping static entry reached from 0xEFD022.
    case 0xD024: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE6E2.asm:17 STA @LOCAL00
    case 0xD025: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE6E2.asm:19 LDA @LOCAL00
    case 0xD027: c.execute<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:25 PLD
    case 0xD029: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xD02A: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xD02B: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xD02D: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xD02E: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xD02F: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFD02F.
    case 0xD031: c.execute<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xD032: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EFE708.asm:8 LDA #0
    case 0xD033: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE708.asm:8 LDA #0
    // Overlapping static entry reached from 0xEFD033.
    case 0xD035: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE708.asm:9 STA @LOCAL00
    case 0xD036: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE708.asm:10 LDA DEBUG_MODE_NUMBER
    case 0xD038: c.execute<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE708.asm:11 CMP #2
    case 0xD03B: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFE708.asm:11 CMP #2
    // Overlapping static entry reached from 0xEFD03B.
    case 0xD03D: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE708.asm:12 BNE @UNKNOWN2
    case 0xD03E: c.execute<0xD0>(0x000018, 2); return true;
    // src/unknown/EF/EFE708.asm:13 BRA @UNKNOWN1
    case 0xD040: c.execute<0x80>(0x000004, 2); return true;
    // src/unknown/EF/EFE708.asm:15 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xD042: c.execute<0x22>(0xC0874C, 4); return true;
    // src/unknown/EF/EFE708.asm:17 LDA PAD_STATE
    case 0xD046: c.execute<0xAD>(0x000065, 3); return true;
    // src/unknown/EF/EFE708.asm:18 AND #PAD::B_BUTTON
    case 0xD049: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EFE708.asm:18 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xEFD049.
    case 0xD04B: c.execute<0x80>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE708.asm:19 BEQ @UNKNOWN0
    case 0xD04C: c.execute<0xF0>(0x0000F4, 2); return true;
    // src/unknown/EF/EFE708.asm:20 STZ BATTLE_MODE
    case 0xD04E: c.execute<0x9C>(0x005148, 3); return true;
    // src/unknown/EF/EFE708.asm:21 LDA #.LOWORD(-1)
    case 0xD051: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE708.asm:21 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD051.
    case 0xD053: c.execute<0xFF>(0x800E85, 4); return true;
    // src/unknown/EF/EFE708.asm:22 STA @LOCAL00
    case 0xD054: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE708.asm:23 BRA @UNKNOWN3
    case 0xD056: c.execute<0x80>(0x00000D, 2); return true;
    // src/unknown/EF/EFE708.asm:23 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xEFD053.
    case 0xD057: c.execute<0x0D>(0x0065AD, 3); return true;
    // src/unknown/EF/EFE708.asm:25 LDA PAD_STATE
    case 0xD058: c.execute<0xAD>(0x000065, 3); return true;
    // src/unknown/EF/EFE708.asm:25 LDA PAD_STATE
    // Overlapping static entry reached from 0xEFD057.
    case 0xD05A: c.execute<0x00>(0x000029, 2); return true;
    // src/unknown/EF/EFE708.asm:26 AND #PAD::Y_BUTTON
    case 0xD05B: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x004000, 3); return true;
    // src/unknown/EF/EFE708.asm:26 AND #PAD::Y_BUTTON
    // Overlapping static entry reached from 0xEFD05B.
    case 0xD05D: c.execute<0x40>(0x000000, 1); return true;
    // src/unknown/EF/EFE708.asm:27 BEQ @UNKNOWN3
    case 0xD05E: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EFE708.asm:28 LDA #.LOWORD(-1)
    case 0xD060: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE708.asm:28 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD060.
    case 0xD062: c.execute<0xFF>(0xA50E85, 4); return true;
    // src/unknown/EF/EFE708.asm:29 STA @LOCAL00
    case 0xD063: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE708.asm:31 LDA @LOCAL00
    case 0xD065: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFE708.asm:31 LDA @LOCAL00
    // Overlapping static entry reached from 0xEFD062.
    case 0xD066: c.execute<0x0E>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    case 0xD067: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xD068: c.execute<0x6B>(0x000000, 1); return true;
    // src/system/debug/check_view_character_mode.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xD069: c.execute<0xC2>(0x000031, 2); return true;
    // src/system/debug/check_view_character_mode.asm:4 LDA DEBUG_MODE_NUMBER
    case 0xD06B: c.execute<0xAD>(0x00B70A, 3); return true;
    // src/system/debug/check_view_character_mode.asm:5 CMP #$0002
    case 0xD06E: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/system/debug/check_view_character_mode.asm:5 CMP #$0002
    // Overlapping static entry reached from 0xEFD06E.
    case 0xD070: c.execute<0x00>(0x0000D0, 2); return true;
    // src/system/debug/check_view_character_mode.asm:6 BNE @UNKNOWN0
    case 0xD071: c.execute<0xD0>(0x000005, 2); return true;
    // src/system/debug/check_view_character_mode.asm:7 LDA #$0000
    case 0xD073: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/system/debug/check_view_character_mode.asm:7 LDA #$0000
    // Overlapping static entry reached from 0xEFD073.
    case 0xD075: c.execute<0x00>(0x000080, 2); return true;
    // src/system/debug/check_view_character_mode.asm:8 BRA @UNKNOWN1
    case 0xD076: c.execute<0x80>(0x000003, 2); return true;
    // src/system/debug/check_view_character_mode.asm:10 LDA #$0001
    case 0xD078: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/system/debug/check_view_character_mode.asm:10 LDA #$0001
    // Overlapping static entry reached from 0xEFD078.
    case 0xD07A: c.execute<0x00>(0x00006B, 2); return true;
    // src/system/debug/check_view_character_mode.asm:12 RTL
    case 0xD07B: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xD07C: c.execute<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EFE759.asm:6 LDA DEBUG_MODE_NUMBER
    case 0xD07E: c.execute<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE759.asm:7 CMP #2
    case 0xD081: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFE759.asm:7 CMP #2
    // Overlapping static entry reached from 0xEFD081.
    case 0xD083: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE759.asm:8 BNE @UNKNOWN0
    case 0xD084: c.execute<0xD0>(0x00000A, 2); return true;
    // src/unknown/EF/EFE759.asm:9 LDA DEBUG_ENEMIES_ENABLED_FLAG
    case 0xD086: c.execute<0xAD>(0x00B726, 3); return true;
    // src/unknown/EF/EFE759.asm:10 BEQ @UNKNOWN0
    case 0xD089: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EFE759.asm:11 LDA #.LOWORD(-1)
    case 0xD08B: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE759.asm:11 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD08B.
    case 0xD08D: c.execute<0xFF>(0xA90380, 4); return true;
    // src/unknown/EF/EFE759.asm:12 BRA @UNKNOWN1
    case 0xD08E: c.execute<0x80>(0x000003, 2); return true;
    // src/unknown/EF/EFE759.asm:14 LDA #0
    case 0xD090: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE759.asm:14 LDA #0
    // Overlapping static entry reached from 0xEFD08D.
    case 0xD091: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EFE759.asm:14 LDA #0
    // Overlapping static entry reached from 0xEFD090.
    case 0xD092: c.execute<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    case 0xD093: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xD094: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xD096: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xD097: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xD098: if (c.p & 0x20) c.execute<0x69>(0x0000EA, 2); else c.execute<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFD098.
    case 0xD09A: c.execute<0xFF>(0x91225B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xD09B: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EFE771.asm:8 JSL TEST_SRAM_SIZE
    case 0xD09C: c.execute<0x22>(0xC08391, 4); return true;
    // src/unknown/EF/EFE771.asm:8 JSL TEST_SRAM_SIZE
    // Overlapping static entry reached from 0xEFD09A.
    case 0xD09E: c.execute<0x83>(0x0000C0, 2); return true;
    // src/unknown/EF/EFE771.asm:9 CMP #0
    case 0xD0A0: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFE771.asm:9 CMP #0
    // Overlapping static entry reached from 0xEFD0A0.
    case 0xD0A2: c.execute<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    case 0xD0A3: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xD0A5: c.execute<0x4C>(0x00D194, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xD0A8: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x006000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFD0A8.
    case 0xD0AA: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    case 0xD0AB: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xD0AD: if (c.p & 0x20) c.execute<0xA9>(0x000031, 2); else c.execute<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFD0AD.
    case 0xD0AF: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xD0B0: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xD0B2: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFD0B2.
    case 0xD0B4: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xD0B5: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xD0B7: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFD0B7.
    case 0xD0B9: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xD0BA: c.execute<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD0BC: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD0BE: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD0C0: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD0C2: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE771.asm:14 LDA #.LOWORD(GAME_STATE)
    case 0xD0C4: if (c.p & 0x20) c.execute<0xA9>(0x0000A9, 2); else c.execute<0xA9>(0x009AA9, 3); return true;
    // src/unknown/EF/EFE771.asm:14 LDA #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xEFD0C4.
    case 0xD0C6: c.execute<0x9A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    case 0xD0C7: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xD0C9: c.execute<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE771.asm:16 CLC
    case 0xD0CB: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    case 0xD0CC: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    case 0xD0CE: c.execute<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    case 0xD0D0: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    case 0xD0D2: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    case 0xD0D4: c.execute<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    case 0xD0D6: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD0D8: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD0DA: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD0DC: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD0DE: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE771.asm:19 LDA #.SIZEOF(game_state)
    case 0xD0E0: if (c.p & 0x20) c.execute<0xA9>(0x0000D6, 2); else c.execute<0xA9>(0x0001D6, 3); return true;
    // src/unknown/EF/EFE771.asm:19 LDA #.SIZEOF(game_state)
    // Overlapping static entry reached from 0xEFD0E0.
    case 0xD0E2: c.execute<0x01>(0x000022, 2); return true;
    // src/unknown/EF/EFE771.asm:20 JSL MEMCPY24
    case 0xD0E3: c.execute<0x22>(0xC08EDE, 4); return true;
    // src/unknown/EF/EFE771.asm:20 JSL MEMCPY24
    // Overlapping static entry reached from 0xEFD0E2.
    case 0xD0E4: c.execute<0xDE>(0x00C08E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xD0E7: if (c.p & 0x20) c.execute<0xA9>(0x0000D6, 2); else c.execute<0xA9>(0x0061D6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFD0E7.
    case 0xD0E9: c.execute<0x61>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xD0EA: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xEFD0E9.
    case 0xD0EB: c.execute<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xD0EC: if (c.p & 0x20) c.execute<0xA9>(0x000031, 2); else c.execute<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFD0EB.
    case 0xD0ED: c.execute<0x31>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFD0EC.
    case 0xD0EE: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xD0EF: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD0F1: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD0F3: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD0F5: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD0F7: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE771.asm:23 LDA #.LOWORD(PARTY_CHARACTERS)
    case 0xD0F9: if (c.p & 0x20) c.execute<0xA9>(0x00007F, 2); else c.execute<0xA9>(0x009C7F, 3); return true;
    // src/unknown/EF/EFE771.asm:23 LDA #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xEFD0F9.
    case 0xD0FB: c.execute<0x9C>(0x000685, 3); return true;
    // include/macros.asm:870 STA dest
    case 0xD0FC: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xD0FE: c.execute<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE771.asm:25 CLC
    case 0xD100: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    case 0xD101: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    case 0xD103: c.execute<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    case 0xD105: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    case 0xD107: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    case 0xD109: c.execute<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    case 0xD10B: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD10D: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD10F: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD111: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD113: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE771.asm:28 LDA #.SIZEOF(char_struct) * (TOTAL_PARTY_COUNT)
    case 0xD115: if (c.p & 0x20) c.execute<0xA9>(0x000034, 2); else c.execute<0xA9>(0x000234, 3); return true;
    // src/unknown/EF/EFE771.asm:28 LDA #.SIZEOF(char_struct) * (TOTAL_PARTY_COUNT)
    // Overlapping static entry reached from 0xEFD115.
    case 0xD117: c.execute<0x02>(0x000022, 2); return true;
    // src/unknown/EF/EFE771.asm:29 JSL MEMCPY24
    case 0xD118: c.execute<0x22>(0xC08EDE, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xD11C: if (c.p & 0x20) c.execute<0xA9>(0x00000A, 2); else c.execute<0xA9>(0x00640A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFD11C.
    case 0xD11E: c.execute<0x64>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xD11F: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xEFD11E.
    case 0xD120: c.execute<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xD121: if (c.p & 0x20) c.execute<0xA9>(0x000031, 2); else c.execute<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFD120.
    case 0xD122: c.execute<0x31>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFD121.
    case 0xD123: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xD124: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD126: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD128: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD12A: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD12C: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE771.asm:32 LDA #.LOWORD(EVENT_FLAGS)
    case 0xD12E: if (c.p & 0x20) c.execute<0xA9>(0x0000B3, 2); else c.execute<0xA9>(0x009EB3, 3); return true;
    // src/unknown/EF/EFE771.asm:32 LDA #.LOWORD(EVENT_FLAGS)
    // Overlapping static entry reached from 0xEFD12E.
    case 0xD130: c.execute<0x9E>(0x000685, 3); return true;
    // include/macros.asm:870 STA dest
    case 0xD131: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xD133: c.execute<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE771.asm:34 CLC
    case 0xD135: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    case 0xD136: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    case 0xD138: c.execute<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    case 0xD13A: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    case 0xD13C: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    case 0xD13E: c.execute<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    case 0xD140: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD142: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD144: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD146: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD148: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE771.asm:37 LDA #.SIZEOF(save_block::event_flags)
    case 0xD14A: if (c.p & 0x20) c.execute<0xA9>(0x000080, 2); else c.execute<0xA9>(0x000080, 3); return true;
    // src/unknown/EF/EFE771.asm:37 LDA #.SIZEOF(save_block::event_flags)
    // Overlapping static entry reached from 0xEFD14A.
    case 0xD14C: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE771.asm:38 JSL MEMCPY24
    case 0xD14D: c.execute<0x22>(0xC08EDE, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xD151: if (c.p & 0x20) c.execute<0xA9>(0x00008A, 2); else c.execute<0xA9>(0x00648A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFD151.
    case 0xD153: c.execute<0x64>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xD154: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xEFD153.
    case 0xD155: c.execute<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xD156: if (c.p & 0x20) c.execute<0xA9>(0x000031, 2); else c.execute<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFD155.
    case 0xD157: c.execute<0x31>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFD156.
    case 0xD158: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xD159: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD15B: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD15D: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD15F: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD161: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE771.asm:41 LDA #.LOWORD(TIMER)
    case 0xD163: if (c.p & 0x20) c.execute<0xA9>(0x0000A7, 2); else c.execute<0xA9>(0x0000A7, 3); return true;
    // src/unknown/EF/EFE771.asm:41 LDA #.LOWORD(TIMER)
    // Overlapping static entry reached from 0xEFD163.
    case 0xD165: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    case 0xD166: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xD168: c.execute<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE771.asm:43 CLC
    case 0xD16A: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    case 0xD16B: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    case 0xD16D: c.execute<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    case 0xD16F: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    case 0xD171: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    case 0xD173: c.execute<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    case 0xD175: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD177: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD179: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD17B: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD17D: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE771.asm:46 LDA #4
    case 0xD17F: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EFE771.asm:46 LDA #4
    // Overlapping static entry reached from 0xEFD17F.
    case 0xD181: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE771.asm:47 JSL MEMCPY24
    case 0xD182: c.execute<0x22>(0xC08EDE, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xD186: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x006000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFD186.
    case 0xD188: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    case 0xD189: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xD18B: if (c.p & 0x20) c.execute<0xA9>(0x000032, 2); else c.execute<0xA9>(0x000032, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFD18B.
    case 0xD18D: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xD18E: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE771.asm:49 JSL UNKNOWN_C083C1
    case 0xD190: c.execute<0x22>(0xC083C1, 4); return true;
    // include/macros.asm:25 PLD
    case 0xD194: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xD195: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xD196: c.execute<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EFE873.asm:6 JSL TEST_SRAM_SIZE
    case 0xD198: c.execute<0x22>(0xC08391, 4); return true;
    // src/unknown/EF/EFE873.asm:7 CMP #0
    case 0xD19C: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFE873.asm:7 CMP #0
    // Overlapping static entry reached from 0xEFD19C.
    case 0xD19E: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE873.asm:8 BEQ @GOOD_SRAM_SIZE
    case 0xD19F: c.execute<0xF0>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD1A1: c.execute<0xAD>(0x00B71E, 3); return true;
    // include/macros.asm:837 STA dest
    case 0xD1A4: c.execute<0x8D>(0x000024, 3); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD1A7: c.execute<0xAD>(0x00B720, 3); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD1AA: c.execute<0x8D>(0x000026, 3); return true;
    // src/unknown/EF/EFE873.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xD1AD: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFE873.asm:11 LDA FRAME_COUNTER_BACKUP
    case 0xD1AF: c.execute<0xAD>(0x00B722, 3); return true;
    // src/unknown/EF/EFE873.asm:12 STA FRAME_COUNTER
    case 0xD1B2: c.execute<0x8D>(0x000002, 3); return true;
    // src/unknown/EF/EFE873.asm:14 REP #PROC_FLAGS::ACCUM8
    case 0xD1B5: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:30 RTL
    case 0xD1B7: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xD1B8: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xD1BA: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xD1BB: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xD1BC: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xD1BD: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFD1BD.
    case 0xD1BF: c.execute<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xD1C0: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xD1C1: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFE895.asm:8 TAX
    case 0xD1C2: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE895.asm:9 STX @LOCAL00
    case 0xD1C3: c.execute<0x86>(0x00000E, 2); return true;
    // src/unknown/EF/EFE895.asm:10 JSL TEST_SRAM_SIZE
    case 0xD1C5: c.execute<0x22>(0xC08391, 4); return true;
    // src/unknown/EF/EFE895.asm:11 CMP #0
    case 0xD1C9: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFE895.asm:11 CMP #0
    // Overlapping static entry reached from 0xEFD1C9.
    case 0xD1CB: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE895.asm:12 BEQ @GOOD_SRAM_SIZE
    case 0xD1CC: c.execute<0xF0>(0x00001A, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD1CE: c.execute<0xAD>(0x000024, 3); return true;
    // include/macros.asm:837 STA dest
    case 0xD1D1: c.execute<0x8D>(0x00B71E, 3); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD1D4: c.execute<0xAD>(0x000026, 3); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD1D7: c.execute<0x8D>(0x00B720, 3); return true;
    // src/unknown/EF/EFE895.asm:14 LDA FRAME_COUNTER
    case 0xD1DA: c.execute<0xAD>(0x000002, 3); return true;
    // src/unknown/EF/EFE895.asm:15 AND #$00FF
    case 0xD1DD: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFE895.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xEFD1DD.
    case 0xD1DF: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFE895.asm:16 STA FRAME_COUNTER_BACKUP
    case 0xD1E0: c.execute<0x8D>(0x00B722, 3); return true;
    // src/unknown/EF/EFE895.asm:17 LDX @LOCAL00
    case 0xD1E3: c.execute<0xA6>(0x00000E, 2); return true;
    // src/unknown/EF/EFE895.asm:18 STX REPLAY_TRANSITION_STYLE
    case 0xD1E5: c.execute<0x8E>(0x00B724, 3); return true;
    // include/macros.asm:25 PLD
    case 0xD1E8: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xD1E9: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xD1EA: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xD1EC: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xD1ED: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xD1EE: if (c.p & 0x20) c.execute<0x69>(0x0000E6, 2); else c.execute<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFD1EE.
    case 0xD1F0: c.execute<0xFF>(0x91225B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xD1F1: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EFE8C7-jp.asm:9 JSL TEST_SRAM_SIZE
    case 0xD1F2: c.execute<0x22>(0xC08391, 4); return true;
    // src/unknown/EF/EFE8C7-jp.asm:9 JSL TEST_SRAM_SIZE
    // Overlapping static entry reached from 0xEFD1F0.
    case 0xD1F4: c.execute<0x83>(0x0000C0, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:10 CMP #0
    case 0xD1F6: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFE8C7-jp.asm:10 CMP #0
    // Overlapping static entry reached from 0xEFD1F6.
    case 0xD1F8: c.execute<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    case 0xD1F9: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xD1FB: c.execute<0x4C>(0x00D34C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xD1FE: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x006000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFD1FE.
    case 0xD200: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    case 0xD201: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xD203: if (c.p & 0x20) c.execute<0xA9>(0x000031, 2); else c.execute<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFD203.
    case 0xD205: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xD206: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD208: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD20A: c.execute<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD20C: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD20E: c.execute<0x85>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xD210: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFD210.
    case 0xD212: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xD213: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xD215: if (c.p & 0x20) c.execute<0xA9>(0x00007E, 2); else c.execute<0xA9>(0x00007E, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFD215.
    case 0xD217: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xD218: c.execute<0x85>(0x00000C, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:15 LDA #.LOWORD(GAME_STATE)
    case 0xD21A: if (c.p & 0x20) c.execute<0xA9>(0x0000A9, 2); else c.execute<0xA9>(0x009AA9, 3); return true;
    // src/unknown/EF/EFE8C7-jp.asm:15 LDA #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xEFD21A.
    case 0xD21C: c.execute<0x9A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    case 0xD21D: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xD21F: c.execute<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:17 CLC
    case 0xD221: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    case 0xD222: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    case 0xD224: c.execute<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    case 0xD226: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    case 0xD228: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    case 0xD22A: c.execute<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    case 0xD22C: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD22E: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD230: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD232: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD234: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD236: c.execute<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD238: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD23A: c.execute<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD23C: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD23E: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD240: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD242: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD244: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:22 LDA #.SIZEOF(save_block::game_state)
    case 0xD246: if (c.p & 0x20) c.execute<0xA9>(0x0000D6, 2); else c.execute<0xA9>(0x0001D6, 3); return true;
    // src/unknown/EF/EFE8C7-jp.asm:22 LDA #.SIZEOF(save_block::game_state)
    // Overlapping static entry reached from 0xEFD246.
    case 0xD248: c.execute<0x01>(0x000022, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:23 JSL MEMCPY24
    case 0xD249: c.execute<0x22>(0xC08EDE, 4); return true;
    // src/unknown/EF/EFE8C7-jp.asm:23 JSL MEMCPY24
    // Overlapping static entry reached from 0xEFD248.
    case 0xD24A: c.execute<0xDE>(0x00C08E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xD24D: if (c.p & 0x20) c.execute<0xA9>(0x0000D6, 2); else c.execute<0xA9>(0x0061D6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFD24D.
    case 0xD24F: c.execute<0x61>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xD250: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xEFD24F.
    case 0xD251: c.execute<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xD252: if (c.p & 0x20) c.execute<0xA9>(0x000031, 2); else c.execute<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFD251.
    case 0xD253: c.execute<0x31>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFD252.
    case 0xD254: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xD255: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD257: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD259: c.execute<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD25B: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD25D: c.execute<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:26 LDA #.LOWORD(PARTY_CHARACTERS)
    case 0xD25F: if (c.p & 0x20) c.execute<0xA9>(0x00007F, 2); else c.execute<0xA9>(0x009C7F, 3); return true;
    // src/unknown/EF/EFE8C7-jp.asm:26 LDA #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xEFD25F.
    case 0xD261: c.execute<0x9C>(0x000685, 3); return true;
    // include/macros.asm:870 STA dest
    case 0xD262: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xD264: c.execute<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:28 CLC
    case 0xD266: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    case 0xD267: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    case 0xD269: c.execute<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    case 0xD26B: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    case 0xD26D: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    case 0xD26F: c.execute<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    case 0xD271: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD273: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD275: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD277: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD279: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD27B: c.execute<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD27D: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD27F: c.execute<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD281: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD283: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD285: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD287: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD289: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:33 LDA #.SIZEOF(save_block::party_characters)
    case 0xD28B: if (c.p & 0x20) c.execute<0xA9>(0x000034, 2); else c.execute<0xA9>(0x000234, 3); return true;
    // src/unknown/EF/EFE8C7-jp.asm:33 LDA #.SIZEOF(save_block::party_characters)
    // Overlapping static entry reached from 0xEFD28B.
    case 0xD28D: c.execute<0x02>(0x000022, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:34 JSL MEMCPY24
    case 0xD28E: c.execute<0x22>(0xC08EDE, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xD292: if (c.p & 0x20) c.execute<0xA9>(0x00000A, 2); else c.execute<0xA9>(0x00640A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFD292.
    case 0xD294: c.execute<0x64>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xD295: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xEFD294.
    case 0xD296: c.execute<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xD297: if (c.p & 0x20) c.execute<0xA9>(0x000031, 2); else c.execute<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFD296.
    case 0xD298: c.execute<0x31>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFD297.
    case 0xD299: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xD29A: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD29C: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD29E: c.execute<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD2A0: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD2A2: c.execute<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:37 LDA #.LOWORD(EVENT_FLAGS)
    case 0xD2A4: if (c.p & 0x20) c.execute<0xA9>(0x0000B3, 2); else c.execute<0xA9>(0x009EB3, 3); return true;
    // src/unknown/EF/EFE8C7-jp.asm:37 LDA #.LOWORD(EVENT_FLAGS)
    // Overlapping static entry reached from 0xEFD2A4.
    case 0xD2A6: c.execute<0x9E>(0x000685, 3); return true;
    // include/macros.asm:870 STA dest
    case 0xD2A7: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xD2A9: c.execute<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:39 CLC
    case 0xD2AB: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    case 0xD2AC: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    case 0xD2AE: c.execute<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    case 0xD2B0: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    case 0xD2B2: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    case 0xD2B4: c.execute<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    case 0xD2B6: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD2B8: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD2BA: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD2BC: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD2BE: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD2C0: c.execute<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD2C2: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD2C4: c.execute<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD2C6: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD2C8: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD2CA: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD2CC: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD2CE: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:44 LDA #.SIZEOF(save_block::event_flags)
    case 0xD2D0: if (c.p & 0x20) c.execute<0xA9>(0x000080, 2); else c.execute<0xA9>(0x000080, 3); return true;
    // src/unknown/EF/EFE8C7-jp.asm:44 LDA #.SIZEOF(save_block::event_flags)
    // Overlapping static entry reached from 0xEFD2D0.
    case 0xD2D2: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:45 JSL MEMCPY24
    case 0xD2D3: c.execute<0x22>(0xC08EDE, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xD2D7: if (c.p & 0x20) c.execute<0xA9>(0x00008A, 2); else c.execute<0xA9>(0x00648A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFD2D7.
    case 0xD2D9: c.execute<0x64>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xD2DA: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xEFD2D9.
    case 0xD2DB: c.execute<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xD2DC: if (c.p & 0x20) c.execute<0xA9>(0x000031, 2); else c.execute<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFD2DB.
    case 0xD2DD: c.execute<0x31>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFD2DC.
    case 0xD2DE: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xD2DF: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD2E1: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD2E3: c.execute<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD2E5: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD2E7: c.execute<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD2E9: c.execute<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD2EB: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD2ED: c.execute<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD2EF: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:49 LDA #167
    case 0xD2F1: if (c.p & 0x20) c.execute<0xA9>(0x0000A7, 2); else c.execute<0xA9>(0x0000A7, 3); return true;
    // src/unknown/EF/EFE8C7-jp.asm:49 LDA #167
    // Overlapping static entry reached from 0xEFD2F1.
    case 0xD2F3: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    case 0xD2F4: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xD2F6: c.execute<0x64>(0x00000C, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:51 CLC
    case 0xD2F8: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    case 0xD2F9: c.execute<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:943 ADC val2
    case 0xD2FB: c.execute<0x65>(0x000006, 2); return true;
    // include/macros.asm:944 STA dest
    case 0xD2FD: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:945 LDA val1+2
    case 0xD2FF: c.execute<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:946 ADC val2+2
    case 0xD301: c.execute<0x65>(0x000008, 2); return true;
    // include/macros.asm:947 STA dest+2
    case 0xD303: c.execute<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD305: c.execute<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD307: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD309: c.execute<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD30B: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD30D: c.execute<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD30F: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD311: c.execute<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD313: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD315: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xD317: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD319: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD31B: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:56 LDA #4
    case 0xD31D: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EFE8C7-jp.asm:56 LDA #4
    // Overlapping static entry reached from 0xEFD31D.
    case 0xD31F: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:57 JSL MEMCPY24
    case 0xD320: c.execute<0x22>(0xC08EDE, 4); return true;
    // src/unknown/EF/EFE8C7-jp.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xD324: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:59 LDA FRAME_COUNTER_BACKUP
    case 0xD326: c.execute<0xAD>(0x00B722, 3); return true;
    // src/unknown/EF/EFE8C7-jp.asm:60 STA FRAME_COUNTER
    case 0xD329: c.execute<0x8D>(0x000002, 3); return true;
    // src/unknown/EF/EFE8C7-jp.asm:61 REP #PROC_FLAGS::ACCUM8
    case 0xD32C: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xD32E: c.execute<0xAD>(0x00B71E, 3); return true;
    // include/macros.asm:837 STA dest
    case 0xD331: c.execute<0x8D>(0x000024, 3); return true;
    // include/macros.asm:838 LDA src+2
    case 0xD334: c.execute<0xAD>(0x00B720, 3); return true;
    // include/macros.asm:839 STA dest+2
    case 0xD337: c.execute<0x8D>(0x000026, 3); return true;
    // src/unknown/EF/EFE8C7-jp.asm:63 JSL UNKNOWN_C083B8
    case 0xD33A: c.execute<0x22>(0xC083B8, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xD33E: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x006000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xEFD33E.
    case 0xD340: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    case 0xD341: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xD343: if (c.p & 0x20) c.execute<0xA9>(0x000032, 2); else c.execute<0xA9>(0x000032, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xEFD343.
    case 0xD345: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xD346: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:65 JSL UNKNOWN_C083E3
    case 0xD348: c.execute<0x22>(0xC083E3, 4); return true;
    // include/macros.asm:25 PLD
    case 0xD34C: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xD34D: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xD34E: c.execute<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EFEA23.asm:5 JSL TEST_SRAM_SIZE
    case 0xD350: c.execute<0x22>(0xC08391, 4); return true;
    // src/unknown/EF/EFEA23.asm:6 CMP #0
    case 0xD354: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFEA23.asm:6 CMP #0
    // Overlapping static entry reached from 0xEFD354.
    case 0xD356: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFEA23.asm:7 BEQ @RETURN ;insufficient SRAM
    case 0xD357: c.execute<0xF0>(0x00001B, 2); return true;
    // src/unknown/EF/EFEA23.asm:8 LDA REPLAY_MODE_ACTIVE
    case 0xD359: c.execute<0xAD>(0x00B718, 3); return true;
    // src/unknown/EF/EFEA23.asm:9 BEQ @UNKNOWN0
    case 0xD35C: c.execute<0xF0>(0x000012, 2); return true;
    // src/unknown/EF/EFEA23.asm:10 JSL LOAD_REPLAY_SAVE_SLOT
    case 0xD35E: c.execute<0x22>(0xEFD1EA, 4); return true;
    // src/unknown/EF/EFEA23.asm:11 LDA GAME_STATE+game_state::leader_x_coord
    case 0xD362: c.execute<0xAD>(0x009B28, 3); return true;
    // src/unknown/EF/EFEA23.asm:12 STA UNUSED_7EB569
    case 0xD365: c.execute<0x8D>(0x00B71A, 3); return true;
    // src/unknown/EF/EFEA23.asm:13 LDA GAME_STATE+game_state::leader_y_coord
    case 0xD368: c.execute<0xAD>(0x009B2C, 3); return true;
    // src/unknown/EF/EFEA23.asm:14 STA UNUSED_7EB56B
    case 0xD36B: c.execute<0x8D>(0x00B71C, 3); return true;
    // src/unknown/EF/EFEA23.asm:15 BRA @RETURN
    case 0xD36E: c.execute<0x80>(0x000004, 2); return true;
    // src/unknown/EF/EFEA23.asm:17 JSL SAVE_REPLAY_SAVE_SLOT
    case 0xD370: c.execute<0x22>(0xEFD094, 4); return true;
    // include/macros.asm:30 RTL
    case 0xD374: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xD375: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xD377: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xD378: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xD379: if (c.p & 0x20) c.execute<0x69>(0x0000F2, 2); else c.execute<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xEFD379.
    case 0xD37B: c.execute<0xFF>(0x91225B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xD37C: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EFEA4A.asm:6 JSL TEST_SRAM_SIZE
    case 0xD37D: c.execute<0x22>(0xC08391, 4); return true;
    // src/unknown/EF/EFEA4A.asm:6 JSL TEST_SRAM_SIZE
    // Overlapping static entry reached from 0xEFD37B.
    case 0xD37F: c.execute<0x83>(0x0000C0, 2); return true;
    // src/unknown/EF/EFEA4A.asm:7 CMP #0
    case 0xD381: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFEA4A.asm:7 CMP #0
    // Overlapping static entry reached from 0xEFD381.
    case 0xD383: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFEA4A.asm:8 BEQ @INSUFFICIENT_SRAM
    case 0xD384: c.execute<0xF0>(0x000041, 2); return true;
    // src/unknown/EF/EFEA4A.asm:9 LDA #1
    case 0xD386: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFEA4A.asm:9 LDA #1
    // Overlapping static entry reached from 0xEFD386.
    case 0xD388: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFEA4A.asm:10 STA REPLAY_MODE_ACTIVE
    case 0xD389: c.execute<0x8D>(0x00B718, 3); return true;
    // src/unknown/EF/EFEA4A.asm:11 JSL LOAD_REPLAY_SAVE_SLOT
    case 0xD38C: c.execute<0x22>(0xEFD1EA, 4); return true;
    // src/unknown/EF/EFEA4A.asm:12 LDA GAME_STATE + game_state::leader_x_coord
    case 0xD390: c.execute<0xAD>(0x009B28, 3); return true;
    // src/unknown/EF/EFEA4A.asm:13 STA @VIRTUAL04
    case 0xD393: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFEA4A.asm:14 LDA GAME_STATE + game_state::leader_y_coord
    case 0xD395: c.execute<0xAD>(0x009B2C, 3); return true;
    // src/unknown/EF/EFEA4A.asm:15 STA @VIRTUAL02
    case 0xD398: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFEA4A.asm:16 LDX #1
    case 0xD39A: if (c.p & 0x10) c.execute<0xA2>(0x000001, 2); else c.execute<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EFEA4A.asm:16 LDX #1
    // Overlapping static entry reached from 0xEFD39A.
    case 0xD39C: c.execute<0x00>(0x00008A, 2); return true;
    // src/unknown/EF/EFEA4A.asm:17 TXA
    case 0xD39D: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EFEA4A.asm:18 JSL FADE_OUT
    case 0xD39E: c.execute<0x22>(0xC0886C, 4); return true;
    // src/unknown/EF/EFEA4A.asm:19 LDX @VIRTUAL02
    case 0xD3A2: c.execute<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFEA4A.asm:20 LDA @VIRTUAL04
    case 0xD3A4: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFEA4A.asm:21 JSL LOAD_MAP_AT_POSITION
    case 0xD3A6: c.execute<0x22>(0xC0140C, 4); return true;
    // src/unknown/EF/EFEA4A.asm:22 LDY #0
    case 0xD3AA: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFEA4A.asm:22 LDY #0
    // Overlapping static entry reached from 0xEFD3AA.
    case 0xD3AC: c.execute<0x00>(0x0000A6, 2); return true;
    // src/unknown/EF/EFEA4A.asm:23 LDX @VIRTUAL02
    case 0xD3AD: c.execute<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFEA4A.asm:24 LDA @VIRTUAL04
    case 0xD3AF: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFEA4A.asm:25 JSL UNKNOWN_C03FA9
    case 0xD3B1: c.execute<0x22>(0xC04230, 4); return true;
    // src/unknown/EF/EFEA4A.asm:26 JSL UNKNOWN_C09451
    case 0xD3B5: c.execute<0x22>(0xC09430, 4); return true;
    // src/unknown/EF/EFEA4A.asm:27 LDX #0
    case 0xD3B9: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/unknown/EF/EFEA4A.asm:27 LDX #0
    // Overlapping static entry reached from 0xEFD3B9.
    case 0xD3BB: c.execute<0x00>(0x0000AD, 2); return true;
    // src/unknown/EF/EFEA4A.asm:28 LDA REPLAY_TRANSITION_STYLE
    case 0xD3BC: c.execute<0xAD>(0x00B724, 3); return true;
    // src/unknown/EF/EFEA4A.asm:29 JSL SCREEN_TRANSITION
    case 0xD3BF: c.execute<0x22>(0xC06890, 4); return true;
    // src/unknown/EF/EFEA4A.asm:30 JSL UNKNOWN_C0943C
    case 0xD3C3: c.execute<0x22>(0xC0941B, 4); return true;
    // include/macros.asm:25 PLD
    case 0xD3C7: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xD3C8: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xD3C9: c.execute<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EFEA9E.asm:5 STZ REPLAY_MODE_ACTIVE
    case 0xD3CB: c.execute<0x9C>(0x00B718, 3); return true;
    // include/macros.asm:30 RTL
    case 0xD3CE: c.execute<0x6B>(0x000000, 1); return true;
    // src/unknown/EF/EFEAA4.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xD3CF: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFEAA4.asm:4 LDA INIDISP_MIRROR
    case 0xD3D1: c.execute<0xAD>(0x00000D, 3); return true;
    // src/unknown/EF/EFEAA4.asm:5 PHA
    case 0xD3D4: c.execute<0x48>(0x000000, 1); return true;
    // src/unknown/EF/EFEAA4.asm:6 LDA #$0080
    case 0xD3D5: if (c.p & 0x20) c.execute<0xA9>(0x000080, 2); else c.execute<0xA9>(0x008D80, 3); return true;
    // src/unknown/EF/EFEAA4.asm:7 STA INIDISP_MIRROR
    case 0xD3D7: c.execute<0x8D>(0x00000D, 3); return true;
    // src/unknown/EF/EFEAA4.asm:7 STA INIDISP_MIRROR
    // Overlapping static entry reached from 0xEFD3D5.
    case 0xD3D8: c.execute<0x0D>(0x008F00, 3); return true;
    // src/unknown/EF/EFEAA4.asm:8 STA f:INIDISP
    case 0xD3DA: c.execute<0x8F>(0x002100, 4); return true;
    // src/unknown/EF/EFEAA4.asm:8 STA f:INIDISP
    // Overlapping static entry reached from 0xEFD3D8.
    case 0xD3DB: c.execute<0x00>(0x000021, 2); return true;
    // src/unknown/EF/EFEAA4.asm:9 LDX #$0000
    case 0xD3DE: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/unknown/EF/EFEAA4.asm:9 LDX #$0000
    // Overlapping static entry reached from 0xEFD3DE.
    case 0xD3E0: c.execute<0x00>(0x0000BF, 2); return true;
    // src/unknown/EF/EFEAA4.asm:11 LDA BUFFER,X
    case 0xD3E1: c.execute<0xBF>(0x7F0000, 4); return true;
    // src/unknown/EF/EFEAA4.asm:12 INX
    case 0xD3E5: c.execute<0xE8>(0x000000, 1); return true;
    // src/unknown/EF/EFEAA4.asm:13 BNE @UNKNOWN0
    case 0xD3E6: c.execute<0xD0>(0x0000F9, 2); return true;
    // src/unknown/EF/EFEAA4.asm:14 PLA
    case 0xD3E8: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFEAA4.asm:15 STA INIDISP_MIRROR
    case 0xD3E9: c.execute<0x8D>(0x00000D, 3); return true;
    // src/unknown/EF/EFEAA4.asm:16 STA f:INIDISP
    case 0xD3EC: c.execute<0x8F>(0x002100, 4); return true;
    // src/unknown/EF/EFEAA4.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xD3F0: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFEAA4.asm:18 RTL
    case 0xD3F2: c.execute<0x6B>(0x000000, 1); return true;
    // src/unknown/EF/EFEAC8-jp.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xD3F3: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:4 LDA #$0020
    case 0xD3F5: if (c.p & 0x20) c.execute<0xA9>(0x000020, 2); else c.execute<0xA9>(0x008F20, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:5 STA f:WOBJSEL
    case 0xD3F7: c.execute<0x8F>(0x002125, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:5 STA f:WOBJSEL
    // Overlapping static entry reached from 0xEFD3F5.
    case 0xD3F8: c.execute<0x25>(0x000021, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:5 STA f:WOBJSEL
    // Overlapping static entry reached from 0xEFD3F8.
    case 0xD3FA: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:6 LDA #$0018
    case 0xD3FB: if (c.p & 0x20) c.execute<0xA9>(0x000018, 2); else c.execute<0xA9>(0x008F18, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:7 STA f:WH0
    case 0xD3FD: c.execute<0x8F>(0x002126, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:7 STA f:WH0
    // Overlapping static entry reached from 0xEFD3FB.
    case 0xD3FE: c.execute<0x26>(0x000021, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:7 STA f:WH0
    // Overlapping static entry reached from 0xEFD3FE.
    case 0xD400: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:8 LDA #$0078
    case 0xD401: if (c.p & 0x20) c.execute<0xA9>(0x000078, 2); else c.execute<0xA9>(0x008F78, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:9 STA f:WH1
    case 0xD403: c.execute<0x8F>(0x002127, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:9 STA f:WH1
    // Overlapping static entry reached from 0xEFD401.
    case 0xD404: c.execute<0x27>(0x000021, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:9 STA f:WH1
    // Overlapping static entry reached from 0xEFD404.
    case 0xD406: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:10 LDA #$0013
    case 0xD407: if (c.p & 0x20) c.execute<0xA9>(0x000013, 2); else c.execute<0xA9>(0x008F13, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:11 STA f:TMW
    case 0xD409: c.execute<0x8F>(0x00212E, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:11 STA f:TMW
    // Overlapping static entry reached from 0xEFD407.
    case 0xD40A: c.execute<0x2E>(0x000021, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:12 LDA #$0010
    case 0xD40D: if (c.p & 0x20) c.execute<0xA9>(0x000010, 2); else c.execute<0xA9>(0x008F10, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:13 STA f:CGWSEL
    case 0xD40F: c.execute<0x8F>(0x002130, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:13 STA f:CGWSEL
    // Overlapping static entry reached from 0xEFD40D.
    case 0xD410: c.execute<0x30>(0x000021, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:13 STA f:CGWSEL
    // Overlapping static entry reached from 0xEFD410.
    case 0xD412: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:14 LDA #$0093
    case 0xD413: if (c.p & 0x20) c.execute<0xA9>(0x000093, 2); else c.execute<0xA9>(0x008F93, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:15 STA f:CGADSUB
    case 0xD415: c.execute<0x8F>(0x002131, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:15 STA f:CGADSUB
    // Overlapping static entry reached from 0xEFD413.
    case 0xD416: c.execute<0x31>(0x000021, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:15 STA f:CGADSUB
    // Overlapping static entry reached from 0xEFD416.
    case 0xD418: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:16 LDA #$00EF
    case 0xD419: if (c.p & 0x20) c.execute<0xA9>(0x0000EF, 2); else c.execute<0xA9>(0x008FEF, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:17 STA f:$2132
    case 0xD41B: c.execute<0x8F>(0x002132, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:17 STA f:$2132
    // Overlapping static entry reached from 0xEFD419.
    case 0xD41C: c.execute<0x32>(0x000021, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:17 STA f:$2132
    // Overlapping static entry reached from 0xEFD41C.
    case 0xD41E: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:18 LDA #$0001
    case 0xD41F: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x008F01, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:19 STA f:DMAP4
    case 0xD421: c.execute<0x8F>(0x004340, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:19 STA f:DMAP4
    // Overlapping static entry reached from 0xEFD41F.
    case 0xD422: c.execute<0x40>(0x000000, 1); return true;
    // src/unknown/EF/EFEAC8-jp.asm:20 LDA #$0026
    case 0xD425: if (c.p & 0x20) c.execute<0xA9>(0x000026, 2); else c.execute<0xA9>(0x008F26, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:21 STA f:BBAD4
    case 0xD427: c.execute<0x8F>(0x004341, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:21 STA f:BBAD4
    // Overlapping static entry reached from 0xEFD425.
    case 0xD428: c.execute<0x41>(0x000043, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:21 STA f:BBAD4
    // Overlapping static entry reached from 0xEFD428.
    case 0xD42A: c.execute<0x00>(0x0000C2, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xD42B: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:23 LDA #$D448
    case 0xD42D: if (c.p & 0x20) c.execute<0xA9>(0x000048, 2); else c.execute<0xA9>(0x00D448, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:23 LDA #$D448
    // Overlapping static entry reached from 0xEFD42D.
    case 0xD42F: c.execute<0xD4>(0x00008F, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:24 STA f:A1T4L
    case 0xD430: c.execute<0x8F>(0x004342, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:24 STA f:A1T4L
    // Overlapping static entry reached from 0xEFD42F.
    case 0xD431: c.execute<0x42>(0x000043, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:24 STA f:A1T4L
    // Overlapping static entry reached from 0xEFD410.
    case 0xD433: c.execute<0x00>(0x0000E2, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xD434: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:26 LDA #$00EF
    case 0xD436: if (c.p & 0x20) c.execute<0xA9>(0x0000EF, 2); else c.execute<0xA9>(0x008FEF, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:27 STA f:A1B4
    case 0xD438: c.execute<0x8F>(0x004344, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:27 STA f:A1B4
    // Overlapping static entry reached from 0xEFD436.
    case 0xD439: c.execute<0x44>(0x000043, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:28 STA f:$4347
    case 0xD43C: c.execute<0x8F>(0x004347, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:29 LDA #$0010
    case 0xD440: if (c.p & 0x20) c.execute<0xA9>(0x000010, 2); else c.execute<0xA9>(0x000C10, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:30 TSB HDMAEN_MIRROR
    case 0xD442: c.execute<0x0C>(0x00001F, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:30 TSB HDMAEN_MIRROR
    // Overlapping static entry reached from 0xEFD440.
    case 0xD443: c.execute<0x1F>(0x20C200, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xD445: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:32 RTL
    case 0xD447: c.execute<0x6B>(0x000000, 1); return true;
    // src/unknown/EF/EFEB2A.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xD455: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFEB2A.asm:4 STZ HDMAEN_MIRROR
    case 0xD457: c.execute<0x9C>(0x00001F, 3); return true;
    // src/unknown/EF/EFEB2A.asm:5 LDA #$0080
    case 0xD45A: if (c.p & 0x20) c.execute<0xA9>(0x000080, 2); else c.execute<0xA9>(0x008F80, 3); return true;
    // src/unknown/EF/EFEB2A.asm:6 STA f:WH0
    case 0xD45C: c.execute<0x8F>(0x002126, 4); return true;
    // src/unknown/EF/EFEB2A.asm:6 STA f:WH0
    // Overlapping static entry reached from 0xEFD45A.
    case 0xD45D: c.execute<0x26>(0x000021, 2); return true;
    // src/unknown/EF/EFEB2A.asm:6 STA f:WH0
    // Overlapping static entry reached from 0xEFD45D.
    case 0xD45F: c.execute<0x00>(0x00003A, 2); return true;
    // src/unknown/EF/EFEB2A.asm:7 DEC
    case 0xD460: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EFEB2A.asm:8 STA f:WH1
    case 0xD461: c.execute<0x8F>(0x002127, 4); return true;
    // src/unknown/EF/EFEB2A.asm:9 REP #PROC_FLAGS::ACCUM8
    case 0xD465: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFEB2A.asm:10 RTL
    case 0xD467: c.execute<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}
} // namespace eb
