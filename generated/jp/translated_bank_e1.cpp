// Generated from ca65 instruction spans. Do not edit.
#include "eb/cpu.hpp"
#include <cstdint>

namespace eb::jp {
bool translated_bank_e1(Cpu& c, std::uint16_t offset) {
    switch (offset) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x423E: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x4240: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x4241: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x4242: if (c.p & 0x20) c.execute<0x69>(0x0000EC, 2); else c.execute<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xE14242.
    case 0x4244: c.execute<0xFF>(0x01A05B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x4245: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:9 LDY #1
    case 0x4246: if (c.p & 0x10) c.execute<0xA0>(0x000001, 2); else c.execute<0xA0>(0x000001, 3); return true;
    // src/unknown/E1/E14DE8.asm:9 LDY #1
    // Overlapping static entry reached from 0xE14246.
    case 0x4248: c.execute<0x00>(0x000084, 2); return true;
    // src/unknown/E1/E14DE8.asm:10 STY @LOCAL02
    case 0x4249: c.execute<0x84>(0x000012, 2); return true;
    // src/unknown/E1/E14DE8.asm:11 LDX #0
    case 0x424B: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/unknown/E1/E14DE8.asm:11 LDX #0
    // Overlapping static entry reached from 0xE1424B.
    case 0x424D: c.execute<0x00>(0x000086, 2); return true;
    // src/unknown/E1/E14DE8.asm:12 STX @LOCAL01
    case 0x424E: c.execute<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:13 BRA @UNKNOWN6
    case 0x4250: c.execute<0x80>(0x000037, 2); return true;
    // src/unknown/E1/E14DE8.asm:15 LDY @LOCAL02
    case 0x4252: c.execute<0xA4>(0x000012, 2); return true;
    // src/unknown/E1/E14DE8.asm:16 STY @VIRTUAL02
    case 0x4254: c.execute<0x84>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:17 LDX @LOCAL01
    case 0x4256: c.execute<0xA6>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:18 TXA
    case 0x4258: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:19 CLC
    case 0x4259: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:20 ADC @VIRTUAL02
    case 0x425A: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:21 TAX
    case 0x425C: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:22 STX @LOCAL01
    case 0x425D: c.execute<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:23 STX @VIRTUAL02
    case 0x425F: c.execute<0x86>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:24 LDA #0
    case 0x4261: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/E1/E14DE8.asm:24 LDA #0
    // Overlapping static entry reached from 0xE14261.
    case 0x4263: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/E1/E14DE8.asm:25 CLC
    case 0x4264: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:26 SBC @VIRTUAL02
    case 0x4265: c.execute<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    case 0x4267: c.execute<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    case 0x4269: c.execute<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    case 0x426B: c.execute<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    case 0x426D: c.execute<0x30>(0x000005, 2); return true;
    // src/unknown/E1/E14DE8.asm:28 LDX #BATTLER_COUNT - 1
    case 0x426F: if (c.p & 0x10) c.execute<0xA2>(0x00001F, 2); else c.execute<0xA2>(0x00001F, 3); return true;
    // src/unknown/E1/E14DE8.asm:28 LDX #BATTLER_COUNT - 1
    // Overlapping static entry reached from 0xE1426F.
    case 0x4271: c.execute<0x00>(0x000086, 2); return true;
    // src/unknown/E1/E14DE8.asm:29 STX @LOCAL01
    case 0x4272: c.execute<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:31 STX @VIRTUAL02
    case 0x4274: c.execute<0x86>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:32 LDA #BATTLER_COUNT
    case 0x4276: if (c.p & 0x20) c.execute<0xA9>(0x000020, 2); else c.execute<0xA9>(0x000020, 3); return true;
    // src/unknown/E1/E14DE8.asm:32 LDA #BATTLER_COUNT
    // Overlapping static entry reached from 0xE14276.
    case 0x4278: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/E1/E14DE8.asm:33 CLC
    case 0x4279: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:34 SBC @VIRTUAL02
    case 0x427A: c.execute<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    case 0x427C: c.execute<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    case 0x427E: c.execute<0x10>(0x000009, 2); return true;
    // include/macros.asm:800 BRA :++
    case 0x4280: c.execute<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    case 0x4282: c.execute<0x30>(0x000005, 2); return true;
    // src/unknown/E1/E14DE8.asm:36 LDX #0
    case 0x4284: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/unknown/E1/E14DE8.asm:36 LDX #0
    // Overlapping static entry reached from 0xE14284.
    case 0x4286: c.execute<0x00>(0x000086, 2); return true;
    // src/unknown/E1/E14DE8.asm:37 STX @LOCAL01
    case 0x4287: c.execute<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:39 LDX @LOCAL01
    case 0x4289: c.execute<0xA6>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:40 TXA
    case 0x428B: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:41 LDY #.SIZEOF(battler)
    case 0x428C: if (c.p & 0x10) c.execute<0xA0>(0x00004E, 2); else c.execute<0xA0>(0x00004E, 3); return true;
    // src/unknown/E1/E14DE8.asm:41 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xE1428C.
    case 0x428E: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/E1/E14DE8.asm:42 JSL MULT168
    case 0x428F: c.execute<0x22>(0xC08FDB, 4); return true;
    // src/unknown/E1/E14DE8.asm:43 STA @LOCAL00
    case 0x4293: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/E1/E14DE8.asm:44 TAX
    case 0x4295: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:45 LDA BATTLERS_TABLE + battler::consciousness,X
    case 0x4296: c.execute<0xBD>(0x00A1BA, 3); return true;
    // src/unknown/E1/E14DE8.asm:46 AND #$00FF
    case 0x4299: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/E1/E14DE8.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xE14299.
    case 0x429B: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/E1/E14DE8.asm:47 BEQ @UNKNOWN0
    case 0x429C: c.execute<0xF0>(0x0000B4, 2); return true;
    // src/unknown/E1/E14DE8.asm:48 LDA @LOCAL00
    case 0x429E: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/E1/E14DE8.asm:49 CLC
    case 0x42A0: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:50 ADC #.LOWORD(BATTLERS_TABLE)
    case 0x42A1: if (c.p & 0x20) c.execute<0x69>(0x0000AE, 2); else c.execute<0x69>(0x00A1AE, 3); return true;
    // src/unknown/E1/E14DE8.asm:50 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xE142A1.
    case 0x42A3: c.execute<0xA1>(0x000022, 2); return true;
    // src/unknown/E1/E14DE8.asm:51 JSL NULL_C1E1A2
    case 0x42A4: c.execute<0x22>(0xC1DF66, 4); return true;
    // src/unknown/E1/E14DE8.asm:51 JSL NULL_C1E1A2
    // Overlapping static entry reached from 0xE142A3.
    case 0x42A5: c.execute<0x66>(0x0000DF, 2); return true;
    // src/unknown/E1/E14DE8.asm:51 JSL NULL_C1E1A2
    // Overlapping static entry reached from 0xE142A5.
    case 0x42A7: c.execute<0xC1>(0x000022, 2); return true;
    // src/unknown/E1/E14DE8.asm:52 JSL WINDOW_TICK
    case 0x42A8: c.execute<0x22>(0xC13502, 4); return true;
    // src/unknown/E1/E14DE8.asm:52 JSL WINDOW_TICK
    // Overlapping static entry reached from 0xE142A7.
    case 0x42A9: c.execute<0x02>(0x000035, 2); return true;
    // src/unknown/E1/E14DE8.asm:54 JSL WAIT_UNTIL_NEXT_FRAME
    case 0x42AC: c.execute<0x22>(0xC0874C, 4); return true;
    // src/unknown/E1/E14DE8.asm:55 LDA PAD_HELD
    case 0x42B0: c.execute<0xAD>(0x000069, 3); return true;
    // src/unknown/E1/E14DE8.asm:56 AND #PAD::RIGHT
    case 0x42B3: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000100, 3); return true;
    // src/unknown/E1/E14DE8.asm:56 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xE142B3.
    case 0x42B5: c.execute<0x01>(0x0000F0, 2); return true;
    // src/unknown/E1/E14DE8.asm:57 BEQ @UNKNOWN8
    case 0x42B6: c.execute<0xF0>(0x000007, 2); return true;
    // src/unknown/E1/E14DE8.asm:57 BEQ @UNKNOWN8
    // Overlapping static entry reached from 0xE142B5.
    case 0x42B7: c.execute<0x07>(0x0000A0, 2); return true;
    // src/unknown/E1/E14DE8.asm:58 LDY #1
    case 0x42B8: if (c.p & 0x10) c.execute<0xA0>(0x000001, 2); else c.execute<0xA0>(0x000001, 3); return true;
    // src/unknown/E1/E14DE8.asm:58 LDY #1
    // Overlapping static entry reached from 0xE142B7.
    case 0x42B9: c.execute<0x01>(0x000000, 2); return true;
    // src/unknown/E1/E14DE8.asm:58 LDY #1
    // Overlapping static entry reached from 0xE142B8.
    case 0x42BA: c.execute<0x00>(0x000084, 2); return true;
    // src/unknown/E1/E14DE8.asm:59 STY @LOCAL02
    case 0x42BB: c.execute<0x84>(0x000012, 2); return true;
    // src/unknown/E1/E14DE8.asm:60 BRA @UNKNOWN10
    case 0x42BD: c.execute<0x80>(0x00001A, 2); return true;
    // src/unknown/E1/E14DE8.asm:62 LDA PAD_HELD
    case 0x42BF: c.execute<0xAD>(0x000069, 3); return true;
    // src/unknown/E1/E14DE8.asm:63 AND #PAD::LEFT
    case 0x42C2: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x000200, 3); return true;
    // src/unknown/E1/E14DE8.asm:63 AND #PAD::LEFT
    // Overlapping static entry reached from 0xE142C2.
    case 0x42C4: c.execute<0x02>(0x0000F0, 2); return true;
    // src/unknown/E1/E14DE8.asm:64 BEQ @UNKNOWN9
    case 0x42C5: c.execute<0xF0>(0x000007, 2); return true;
    // src/unknown/E1/E14DE8.asm:65 LDY #.LOWORD(-1)
    case 0x42C7: if (c.p & 0x10) c.execute<0xA0>(0x0000FF, 2); else c.execute<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/E1/E14DE8.asm:65 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xE142C7.
    case 0x42C9: c.execute<0xFF>(0x801284, 4); return true;
    // src/unknown/E1/E14DE8.asm:66 STY @LOCAL02
    case 0x42CA: c.execute<0x84>(0x000012, 2); return true;
    // src/unknown/E1/E14DE8.asm:67 BRA @UNKNOWN10
    case 0x42CC: c.execute<0x80>(0x00000B, 2); return true;
    // src/unknown/E1/E14DE8.asm:67 BRA @UNKNOWN10
    // Overlapping static entry reached from 0xE142C9.
    case 0x42CD: c.execute<0x0B>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:69 LDA PAD_PRESS
    case 0x42CE: c.execute<0xAD>(0x00006D, 3); return true;
    // src/unknown/E1/E14DE8.asm:70 BEQ @UNKNOWN7
    case 0x42D1: c.execute<0xF0>(0x0000D9, 2); return true;
    // src/unknown/E1/E14DE8.asm:71 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0x42D3: c.execute<0x22>(0xC1DB36, 4); return true;
    // src/unknown/E1/E14DE8.asm:72 BRA @RETURN
    case 0x42D7: c.execute<0x80>(0x00003C, 2); return true;
    // src/unknown/E1/E14DE8.asm:74 STY @VIRTUAL02
    case 0x42D9: c.execute<0x84>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:75 LDX @LOCAL01
    case 0x42DB: c.execute<0xA6>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:76 TXA
    case 0x42DD: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:77 CLC
    case 0x42DE: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:78 ADC @VIRTUAL02
    case 0x42DF: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:79 TAX
    case 0x42E1: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:80 STX @LOCAL01
    case 0x42E2: c.execute<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:81 STX @VIRTUAL02
    case 0x42E4: c.execute<0x86>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:82 LDA #0
    case 0x42E6: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/E1/E14DE8.asm:82 LDA #0
    // Overlapping static entry reached from 0xE142E6.
    case 0x42E8: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/E1/E14DE8.asm:83 CLC
    case 0x42E9: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:84 SBC @VIRTUAL02
    case 0x42EA: c.execute<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    case 0x42EC: c.execute<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    case 0x42EE: c.execute<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    case 0x42F0: c.execute<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    case 0x42F2: c.execute<0x30>(0x000005, 2); return true;
    // src/unknown/E1/E14DE8.asm:86 LDX #BATTLER_COUNT - 1
    case 0x42F4: if (c.p & 0x10) c.execute<0xA2>(0x00001F, 2); else c.execute<0xA2>(0x00001F, 3); return true;
    // src/unknown/E1/E14DE8.asm:86 LDX #BATTLER_COUNT - 1
    // Overlapping static entry reached from 0xE142F4.
    case 0x42F6: c.execute<0x00>(0x000086, 2); return true;
    // src/unknown/E1/E14DE8.asm:87 STX @LOCAL01
    case 0x42F7: c.execute<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:89 STX @VIRTUAL02
    case 0x42F9: c.execute<0x86>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:90 LDA #BATTLER_COUNT
    case 0x42FB: if (c.p & 0x20) c.execute<0xA9>(0x000020, 2); else c.execute<0xA9>(0x000020, 3); return true;
    // src/unknown/E1/E14DE8.asm:90 LDA #BATTLER_COUNT
    // Overlapping static entry reached from 0xE142FB.
    case 0x42FD: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/E1/E14DE8.asm:91 CLC
    case 0x42FE: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:92 SBC @VIRTUAL02
    case 0x42FF: c.execute<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    case 0x4301: c.execute<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    case 0x4303: c.execute<0x10>(0x000009, 2); return true;
    // include/macros.asm:800 BRA :++
    case 0x4305: c.execute<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    case 0x4307: c.execute<0x30>(0x000005, 2); return true;
    // src/unknown/E1/E14DE8.asm:94 LDX #0
    case 0x4309: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/unknown/E1/E14DE8.asm:94 LDX #0
    // Overlapping static entry reached from 0xE14309.
    case 0x430B: c.execute<0x00>(0x000086, 2); return true;
    // src/unknown/E1/E14DE8.asm:95 STX @LOCAL01
    case 0x430C: c.execute<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:97 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0x430E: c.execute<0x22>(0xC1DB36, 4); return true;
    // src/unknown/E1/E14DE8.asm:98 JMP @UNKNOWN6
    case 0x4312: c.execute<0x4C>(0x004289, 3); return true;
    // include/macros.asm:25 PLD
    case 0x4315: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x4316: c.execute<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}
} // namespace eb
