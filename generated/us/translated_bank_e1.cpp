// Generated from ca65 instruction spans. Do not edit.
#include "eb/cpu.hpp"
#include <cstdint>

namespace eb::us {
bool translated_bank_e1(Cpu& c, std::uint16_t offset) {
    switch (offset) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x4DE8: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x4DEA: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x4DEB: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x4DEC: if (c.p & 0x20) c.execute<0x69>(0x0000EC, 2); else c.execute<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xE14DEC.
    case 0x4DEE: c.execute<0xFF>(0x01A05B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x4DEF: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:9 LDY #1
    case 0x4DF0: if (c.p & 0x10) c.execute<0xA0>(0x000001, 2); else c.execute<0xA0>(0x000001, 3); return true;
    // src/unknown/E1/E14DE8.asm:9 LDY #1
    // Overlapping static entry reached from 0xE14DF0.
    case 0x4DF2: c.execute<0x00>(0x000084, 2); return true;
    // src/unknown/E1/E14DE8.asm:10 STY @LOCAL02
    case 0x4DF3: c.execute<0x84>(0x000012, 2); return true;
    // src/unknown/E1/E14DE8.asm:11 LDX #0
    case 0x4DF5: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/unknown/E1/E14DE8.asm:11 LDX #0
    // Overlapping static entry reached from 0xE14DF5.
    case 0x4DF7: c.execute<0x00>(0x000086, 2); return true;
    // src/unknown/E1/E14DE8.asm:12 STX @LOCAL01
    case 0x4DF8: c.execute<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:13 BRA @UNKNOWN6
    case 0x4DFA: c.execute<0x80>(0x000037, 2); return true;
    // src/unknown/E1/E14DE8.asm:15 LDY @LOCAL02
    case 0x4DFC: c.execute<0xA4>(0x000012, 2); return true;
    // src/unknown/E1/E14DE8.asm:16 STY @VIRTUAL02
    case 0x4DFE: c.execute<0x84>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:17 LDX @LOCAL01
    case 0x4E00: c.execute<0xA6>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:18 TXA
    case 0x4E02: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:19 CLC
    case 0x4E03: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:20 ADC @VIRTUAL02
    case 0x4E04: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:21 TAX
    case 0x4E06: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:22 STX @LOCAL01
    case 0x4E07: c.execute<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:23 STX @VIRTUAL02
    case 0x4E09: c.execute<0x86>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:24 LDA #0
    case 0x4E0B: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/E1/E14DE8.asm:24 LDA #0
    // Overlapping static entry reached from 0xE14E0B.
    case 0x4E0D: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/E1/E14DE8.asm:25 CLC
    case 0x4E0E: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:26 SBC @VIRTUAL02
    case 0x4E0F: c.execute<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    case 0x4E11: c.execute<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    case 0x4E13: c.execute<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    case 0x4E15: c.execute<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    case 0x4E17: c.execute<0x30>(0x000005, 2); return true;
    // src/unknown/E1/E14DE8.asm:28 LDX #BATTLER_COUNT - 1
    case 0x4E19: if (c.p & 0x10) c.execute<0xA2>(0x00001F, 2); else c.execute<0xA2>(0x00001F, 3); return true;
    // src/unknown/E1/E14DE8.asm:28 LDX #BATTLER_COUNT - 1
    // Overlapping static entry reached from 0xE14E19.
    case 0x4E1B: c.execute<0x00>(0x000086, 2); return true;
    // src/unknown/E1/E14DE8.asm:29 STX @LOCAL01
    case 0x4E1C: c.execute<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:31 STX @VIRTUAL02
    case 0x4E1E: c.execute<0x86>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:32 LDA #BATTLER_COUNT
    case 0x4E20: if (c.p & 0x20) c.execute<0xA9>(0x000020, 2); else c.execute<0xA9>(0x000020, 3); return true;
    // src/unknown/E1/E14DE8.asm:32 LDA #BATTLER_COUNT
    // Overlapping static entry reached from 0xE14E20.
    case 0x4E22: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/E1/E14DE8.asm:33 CLC
    case 0x4E23: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:34 SBC @VIRTUAL02
    case 0x4E24: c.execute<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    case 0x4E26: c.execute<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    case 0x4E28: c.execute<0x10>(0x000009, 2); return true;
    // include/macros.asm:800 BRA :++
    case 0x4E2A: c.execute<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    case 0x4E2C: c.execute<0x30>(0x000005, 2); return true;
    // src/unknown/E1/E14DE8.asm:36 LDX #0
    case 0x4E2E: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/unknown/E1/E14DE8.asm:36 LDX #0
    // Overlapping static entry reached from 0xE14E2E.
    case 0x4E30: c.execute<0x00>(0x000086, 2); return true;
    // src/unknown/E1/E14DE8.asm:37 STX @LOCAL01
    case 0x4E31: c.execute<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:39 LDX @LOCAL01
    case 0x4E33: c.execute<0xA6>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:40 TXA
    case 0x4E35: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:41 LDY #.SIZEOF(battler)
    case 0x4E36: if (c.p & 0x10) c.execute<0xA0>(0x00004E, 2); else c.execute<0xA0>(0x00004E, 3); return true;
    // src/unknown/E1/E14DE8.asm:41 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xE14E36.
    case 0x4E38: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/E1/E14DE8.asm:42 JSL MULT168
    case 0x4E39: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/E1/E14DE8.asm:43 STA @LOCAL00
    case 0x4E3D: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/E1/E14DE8.asm:44 TAX
    case 0x4E3F: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:45 LDA BATTLERS_TABLE + battler::consciousness,X
    case 0x4E40: c.execute<0xBD>(0x009FB8, 3); return true;
    // src/unknown/E1/E14DE8.asm:46 AND #$00FF
    case 0x4E43: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/E1/E14DE8.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xE14E43.
    case 0x4E45: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/E1/E14DE8.asm:47 BEQ @UNKNOWN0
    case 0x4E46: c.execute<0xF0>(0x0000B4, 2); return true;
    // src/unknown/E1/E14DE8.asm:48 LDA @LOCAL00
    case 0x4E48: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/E1/E14DE8.asm:49 CLC
    case 0x4E4A: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:50 ADC #.LOWORD(BATTLERS_TABLE)
    case 0x4E4B: if (c.p & 0x20) c.execute<0x69>(0x0000AC, 2); else c.execute<0x69>(0x009FAC, 3); return true;
    // src/unknown/E1/E14DE8.asm:50 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xE14E4B.
    case 0x4E4D: c.execute<0x9F>(0xE1A222, 4); return true;
    // src/unknown/E1/E14DE8.asm:51 JSL NULL_C1E1A2
    case 0x4E4E: c.execute<0x22>(0xC1E1A2, 4); return true;
    // src/unknown/E1/E14DE8.asm:51 JSL NULL_C1E1A2
    // Overlapping static entry reached from 0xE14E4D.
    case 0x4E51: c.execute<0xC1>(0x000022, 2); return true;
    // src/unknown/E1/E14DE8.asm:52 JSL WINDOW_TICK
    case 0x4E52: c.execute<0x22>(0xC12DD5, 4); return true;
    // src/unknown/E1/E14DE8.asm:52 JSL WINDOW_TICK
    // Overlapping static entry reached from 0xE14E51.
    case 0x4E53: c.execute<0xD5>(0x00002D, 2); return true;
    // src/unknown/E1/E14DE8.asm:52 JSL WINDOW_TICK
    // Overlapping static entry reached from 0xE14E53.
    case 0x4E55: c.execute<0xC1>(0x000022, 2); return true;
    // src/unknown/E1/E14DE8.asm:54 JSL WAIT_UNTIL_NEXT_FRAME
    case 0x4E56: c.execute<0x22>(0xC08756, 4); return true;
    // src/unknown/E1/E14DE8.asm:54 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xE14E55.
    case 0x4E57: c.execute<0x56>(0x000087, 2); return true;
    // src/unknown/E1/E14DE8.asm:54 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xE14E57.
    case 0x4E59: if (c.p & 0x10) c.execute<0xC0>(0x0000AD, 2); else c.execute<0xC0>(0x0069AD, 3); return true;
    // src/unknown/E1/E14DE8.asm:55 LDA PAD_HELD
    case 0x4E5A: c.execute<0xAD>(0x000069, 3); return true;
    // src/unknown/E1/E14DE8.asm:55 LDA PAD_HELD
    // Overlapping static entry reached from 0xE14E59.
    case 0x4E5B: if (c.p & 0x20) c.execute<0x69>(0x000000, 2); else c.execute<0x69>(0x002900, 3); return true;
    // src/unknown/E1/E14DE8.asm:55 LDA PAD_HELD
    // Overlapping static entry reached from 0xE14E59.
    case 0x4E5C: c.execute<0x00>(0x000029, 2); return true;
    // src/unknown/E1/E14DE8.asm:56 AND #PAD::RIGHT
    case 0x4E5D: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000100, 3); return true;
    // src/unknown/E1/E14DE8.asm:56 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xE14E5B.
    case 0x4E5E: c.execute<0x00>(0x000001, 2); return true;
    // src/unknown/E1/E14DE8.asm:56 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xE14E5D.
    case 0x4E5F: c.execute<0x01>(0x0000F0, 2); return true;
    // src/unknown/E1/E14DE8.asm:57 BEQ @UNKNOWN8
    case 0x4E60: c.execute<0xF0>(0x000007, 2); return true;
    // src/unknown/E1/E14DE8.asm:57 BEQ @UNKNOWN8
    // Overlapping static entry reached from 0xE14E5F.
    case 0x4E61: c.execute<0x07>(0x0000A0, 2); return true;
    // src/unknown/E1/E14DE8.asm:58 LDY #1
    case 0x4E62: if (c.p & 0x10) c.execute<0xA0>(0x000001, 2); else c.execute<0xA0>(0x000001, 3); return true;
    // src/unknown/E1/E14DE8.asm:58 LDY #1
    // Overlapping static entry reached from 0xE14E61.
    case 0x4E63: c.execute<0x01>(0x000000, 2); return true;
    // src/unknown/E1/E14DE8.asm:58 LDY #1
    // Overlapping static entry reached from 0xE14E62.
    case 0x4E64: c.execute<0x00>(0x000084, 2); return true;
    // src/unknown/E1/E14DE8.asm:59 STY @LOCAL02
    case 0x4E65: c.execute<0x84>(0x000012, 2); return true;
    // src/unknown/E1/E14DE8.asm:60 BRA @UNKNOWN10
    case 0x4E67: c.execute<0x80>(0x00001A, 2); return true;
    // src/unknown/E1/E14DE8.asm:62 LDA PAD_HELD
    case 0x4E69: c.execute<0xAD>(0x000069, 3); return true;
    // src/unknown/E1/E14DE8.asm:63 AND #PAD::LEFT
    case 0x4E6C: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000200, 3); return true;
    // src/unknown/E1/E14DE8.asm:63 AND #PAD::LEFT
    // Overlapping static entry reached from 0xE14E6C.
    case 0x4E6E: c.execute<0x02>(0x0000F0, 2); return true;
    // src/unknown/E1/E14DE8.asm:64 BEQ @UNKNOWN9
    case 0x4E6F: c.execute<0xF0>(0x000007, 2); return true;
    // src/unknown/E1/E14DE8.asm:65 LDY #.LOWORD(-1)
    case 0x4E71: if (c.p & 0x10) c.execute<0xA0>(0x0000FF, 2); else c.execute<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/E1/E14DE8.asm:65 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xE14E71.
    case 0x4E73: c.execute<0xFF>(0x801284, 4); return true;
    // src/unknown/E1/E14DE8.asm:66 STY @LOCAL02
    case 0x4E74: c.execute<0x84>(0x000012, 2); return true;
    // src/unknown/E1/E14DE8.asm:67 BRA @UNKNOWN10
    case 0x4E76: c.execute<0x80>(0x00000B, 2); return true;
    // src/unknown/E1/E14DE8.asm:67 BRA @UNKNOWN10
    // Overlapping static entry reached from 0xE14E73.
    case 0x4E77: c.execute<0x0B>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:69 LDA PAD_PRESS
    case 0x4E78: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/E1/E14DE8.asm:70 BEQ @UNKNOWN7
    case 0x4E7B: c.execute<0xF0>(0x0000D9, 2); return true;
    // src/unknown/E1/E14DE8.asm:71 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0x4E7D: c.execute<0x22>(0xC1DD59, 4); return true;
    // src/unknown/E1/E14DE8.asm:72 BRA @RETURN
    case 0x4E81: c.execute<0x80>(0x00003C, 2); return true;
    // src/unknown/E1/E14DE8.asm:74 STY @VIRTUAL02
    case 0x4E83: c.execute<0x84>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:75 LDX @LOCAL01
    case 0x4E85: c.execute<0xA6>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:76 TXA
    case 0x4E87: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:77 CLC
    case 0x4E88: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:78 ADC @VIRTUAL02
    case 0x4E89: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:79 TAX
    case 0x4E8B: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:80 STX @LOCAL01
    case 0x4E8C: c.execute<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:81 STX @VIRTUAL02
    case 0x4E8E: c.execute<0x86>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:82 LDA #0
    case 0x4E90: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/E1/E14DE8.asm:82 LDA #0
    // Overlapping static entry reached from 0xE14E90.
    case 0x4E92: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/E1/E14DE8.asm:83 CLC
    case 0x4E93: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:84 SBC @VIRTUAL02
    case 0x4E94: c.execute<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    case 0x4E96: c.execute<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    case 0x4E98: c.execute<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    case 0x4E9A: c.execute<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    case 0x4E9C: c.execute<0x30>(0x000005, 2); return true;
    // src/unknown/E1/E14DE8.asm:86 LDX #BATTLER_COUNT - 1
    case 0x4E9E: if (c.p & 0x10) c.execute<0xA2>(0x00001F, 2); else c.execute<0xA2>(0x00001F, 3); return true;
    // src/unknown/E1/E14DE8.asm:86 LDX #BATTLER_COUNT - 1
    // Overlapping static entry reached from 0xE14E9E.
    case 0x4EA0: c.execute<0x00>(0x000086, 2); return true;
    // src/unknown/E1/E14DE8.asm:87 STX @LOCAL01
    case 0x4EA1: c.execute<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:89 STX @VIRTUAL02
    case 0x4EA3: c.execute<0x86>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:90 LDA #BATTLER_COUNT
    case 0x4EA5: if (c.p & 0x20) c.execute<0xA9>(0x000020, 2); else c.execute<0xA9>(0x000020, 3); return true;
    // src/unknown/E1/E14DE8.asm:90 LDA #BATTLER_COUNT
    // Overlapping static entry reached from 0xE14EA5.
    case 0x4EA7: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/E1/E14DE8.asm:91 CLC
    case 0x4EA8: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:92 SBC @VIRTUAL02
    case 0x4EA9: c.execute<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    case 0x4EAB: c.execute<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    case 0x4EAD: c.execute<0x10>(0x000009, 2); return true;
    // include/macros.asm:800 BRA :++
    case 0x4EAF: c.execute<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    case 0x4EB1: c.execute<0x30>(0x000005, 2); return true;
    // src/unknown/E1/E14DE8.asm:94 LDX #0
    case 0x4EB3: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/unknown/E1/E14DE8.asm:94 LDX #0
    // Overlapping static entry reached from 0xE14EB3.
    case 0x4EB5: c.execute<0x00>(0x000086, 2); return true;
    // src/unknown/E1/E14DE8.asm:95 STX @LOCAL01
    case 0x4EB6: c.execute<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:97 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0x4EB8: c.execute<0x22>(0xC1DD59, 4); return true;
    // src/unknown/E1/E14DE8.asm:98 JMP @UNKNOWN6
    case 0x4EBC: c.execute<0x4C>(0x004E33, 3); return true;
    // include/macros.asm:25 PLD
    case 0x4EBF: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x4EC0: c.execute<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}
} // namespace eb
