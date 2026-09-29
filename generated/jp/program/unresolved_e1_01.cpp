// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/unknown/E1/E14DE8.asm (unresolved).
bool execute_unresolved_e1_e14de8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/E1/E14DE8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xE1423E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/E1/E14DE8.asm:8 END_STACK_VARS
    case 0xE14240: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/E1/E14DE8.asm:8 END_STACK_VARS
    case 0xE14241: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/E1/E14DE8.asm:8 END_STACK_VARS
    case 0xE14242: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/E1/E14DE8.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xE14242.
    case 0xE14244: cpu.execute_instruction<0xFF>(0x01A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/E1/E14DE8.asm:8 END_STACK_VARS
    case 0xE14245: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:9 LDY #1
    case 0xE14246: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/E1/E14DE8.asm:9 LDY #1
    // Overlapping static entry reached from 0xE14246.
    case 0xE14248: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/E1/E14DE8.asm:10 STY @LOCAL02
    case 0xE14249: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/E1/E14DE8.asm:11 LDX #0
    case 0xE1424B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/E1/E14DE8.asm:11 LDX #0
    // Overlapping static entry reached from 0xE1424B.
    case 0xE1424D: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/E1/E14DE8.asm:12 STX @LOCAL01
    case 0xE1424E: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:13 BRA @UNKNOWN6
    case 0xE14250: cpu.execute_instruction<0x80>(0x000037, 2); return true;
    // src/unknown/E1/E14DE8.asm:15 LDY @LOCAL02
    case 0xE14252: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/E1/E14DE8.asm:16 STY @VIRTUAL02
    case 0xE14254: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:17 LDX @LOCAL01
    case 0xE14256: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:18 TXA
    case 0xE14258: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:19 CLC
    case 0xE14259: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:20 ADC @VIRTUAL02
    case 0xE1425A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:21 TAX
    case 0xE1425C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:22 STX @LOCAL01
    case 0xE1425D: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:23 STX @VIRTUAL02
    case 0xE1425F: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:24 LDA #0
    case 0xE14261: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/E1/E14DE8.asm:24 LDA #0
    // Overlapping static entry reached from 0xE14261.
    case 0xE14263: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/E1/E14DE8.asm:25 CLC
    case 0xE14264: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:26 SBC @VIRTUAL02
    case 0xE14265: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/E1/E14DE8.asm:27 BRANCHLTEQS @UNKNOWN3
    case 0xE14267: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/E1/E14DE8.asm:27 BRANCHLTEQS @UNKNOWN3
    case 0xE14269: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/E1/E14DE8.asm:27 BRANCHLTEQS @UNKNOWN3
    case 0xE1426B: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/E1/E14DE8.asm:27 BRANCHLTEQS @UNKNOWN3
    case 0xE1426D: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/E1/E14DE8.asm:28 LDX #BATTLER_COUNT - 1
    case 0xE1426F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001F, 2); else cpu.execute_instruction<0xA2>(0x00001F, 3); return true;
    // src/unknown/E1/E14DE8.asm:28 LDX #BATTLER_COUNT - 1
    // Overlapping static entry reached from 0xE1426F.
    case 0xE14271: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/E1/E14DE8.asm:29 STX @LOCAL01
    case 0xE14272: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:31 STX @VIRTUAL02
    case 0xE14274: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:32 LDA #BATTLER_COUNT
    case 0xE14276: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/E1/E14DE8.asm:32 LDA #BATTLER_COUNT
    // Overlapping static entry reached from 0xE14276.
    case 0xE14278: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/E1/E14DE8.asm:33 CLC
    case 0xE14279: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:34 SBC @VIRTUAL02
    case 0xE1427A: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/E1/E14DE8.asm:35 BRANCHGTS @UNKNOWN6
    case 0xE1427C: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/E1/E14DE8.asm:35 BRANCHGTS @UNKNOWN6
    case 0xE1427E: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/E1/E14DE8.asm:35 BRANCHGTS @UNKNOWN6
    case 0xE14280: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/E1/E14DE8.asm:35 BRANCHGTS @UNKNOWN6
    case 0xE14282: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/E1/E14DE8.asm:36 LDX #0
    case 0xE14284: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/E1/E14DE8.asm:36 LDX #0
    // Overlapping static entry reached from 0xE14284.
    case 0xE14286: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/E1/E14DE8.asm:37 STX @LOCAL01
    case 0xE14287: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:39 LDX @LOCAL01
    case 0xE14289: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:40 TXA
    case 0xE1428B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:41 LDY #.SIZEOF(battler)
    case 0xE1428C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/E1/E14DE8.asm:41 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xE1428C.
    case 0xE1428E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/E1/E14DE8.asm:42 JSL MULT168
    case 0xE1428F: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/E1/E14DE8.asm:43 STA @LOCAL00
    case 0xE14293: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/E1/E14DE8.asm:44 TAX
    case 0xE14295: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:45 LDA BATTLERS_TABLE + battler::consciousness,X
    case 0xE14296: cpu.execute_instruction<0xBD>(0x00A1BA, 3); return true;
    // src/unknown/E1/E14DE8.asm:46 AND #$00FF
    case 0xE14299: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/E1/E14DE8.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xE14299.
    case 0xE1429B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/E1/E14DE8.asm:47 BEQ @UNKNOWN0
    case 0xE1429C: cpu.execute_instruction<0xF0>(0x0000B4, 2); return true;
    // src/unknown/E1/E14DE8.asm:48 LDA @LOCAL00
    case 0xE1429E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/E1/E14DE8.asm:49 CLC
    case 0xE142A0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:50 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xE142A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AE, 2); else cpu.execute_instruction<0x69>(0x00A1AE, 3); return true;
    // src/unknown/E1/E14DE8.asm:50 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xE142A1.
    case 0xE142A3: cpu.execute_instruction<0xA1>(0x000022, 2); return true;
    // src/unknown/E1/E14DE8.asm:51 JSL NULL_C1E1A2
    case 0xE142A4: cpu.execute_instruction<0x22>(0xC1DF66, 4); return true;
    // src/unknown/E1/E14DE8.asm:51 JSL NULL_C1E1A2
    // Overlapping static entry reached from 0xE142A3.
    case 0xE142A5: cpu.execute_instruction<0x66>(0x0000DF, 2); return true;
    // src/unknown/E1/E14DE8.asm:51 JSL NULL_C1E1A2
    // Overlapping static entry reached from 0xE142A5.
    case 0xE142A7: cpu.execute_instruction<0xC1>(0x000022, 2); return true;
    // src/unknown/E1/E14DE8.asm:52 JSL WINDOW_TICK
    case 0xE142A8: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/unknown/E1/E14DE8.asm:52 JSL WINDOW_TICK
    // Overlapping static entry reached from 0xE142A7.
    case 0xE142A9: cpu.execute_instruction<0x02>(0x000035, 2); return true;
    // src/unknown/E1/E14DE8.asm:54 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xE142AC: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/E1/E14DE8.asm:55 LDA PAD_HELD
    case 0xE142B0: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/unknown/E1/E14DE8.asm:56 AND #PAD::RIGHT
    case 0xE142B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/unknown/E1/E14DE8.asm:56 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xE142B3.
    case 0xE142B5: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/E1/E14DE8.asm:57 BEQ @UNKNOWN8
    case 0xE142B6: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/E1/E14DE8.asm:57 BEQ @UNKNOWN8
    // Overlapping static entry reached from 0xE142B5.
    case 0xE142B7: cpu.execute_instruction<0x07>(0x0000A0, 2); return true;
    // src/unknown/E1/E14DE8.asm:58 LDY #1
    case 0xE142B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/E1/E14DE8.asm:58 LDY #1
    // Overlapping static entry reached from 0xE142B7.
    case 0xE142B9: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/E1/E14DE8.asm:58 LDY #1
    // Overlapping static entry reached from 0xE142B8.
    case 0xE142BA: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/E1/E14DE8.asm:59 STY @LOCAL02
    case 0xE142BB: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/E1/E14DE8.asm:60 BRA @UNKNOWN10
    case 0xE142BD: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/E1/E14DE8.asm:62 LDA PAD_HELD
    case 0xE142BF: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/unknown/E1/E14DE8.asm:63 AND #PAD::LEFT
    case 0xE142C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/unknown/E1/E14DE8.asm:63 AND #PAD::LEFT
    // Overlapping static entry reached from 0xE142C2.
    case 0xE142C4: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/E1/E14DE8.asm:64 BEQ @UNKNOWN9
    case 0xE142C5: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/E1/E14DE8.asm:65 LDY #.LOWORD(-1)
    case 0xE142C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/E1/E14DE8.asm:65 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xE142C7.
    case 0xE142C9: cpu.execute_instruction<0xFF>(0x801284, 4); return true;
    // src/unknown/E1/E14DE8.asm:66 STY @LOCAL02
    case 0xE142CA: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/E1/E14DE8.asm:67 BRA @UNKNOWN10
    case 0xE142CC: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/unknown/E1/E14DE8.asm:67 BRA @UNKNOWN10
    // Overlapping static entry reached from 0xE142C9.
    case 0xE142CD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:69 LDA PAD_PRESS
    case 0xE142CE: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/E1/E14DE8.asm:70 BEQ @UNKNOWN7
    case 0xE142D1: cpu.execute_instruction<0xF0>(0x0000D9, 2); return true;
    // src/unknown/E1/E14DE8.asm:71 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0xE142D3: cpu.execute_instruction<0x22>(0xC1DB36, 4); return true;
    // src/unknown/E1/E14DE8.asm:72 BRA @RETURN
    case 0xE142D7: cpu.execute_instruction<0x80>(0x00003C, 2); return true;
    // src/unknown/E1/E14DE8.asm:74 STY @VIRTUAL02
    case 0xE142D9: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:75 LDX @LOCAL01
    case 0xE142DB: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:76 TXA
    case 0xE142DD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:77 CLC
    case 0xE142DE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:78 ADC @VIRTUAL02
    case 0xE142DF: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:79 TAX
    case 0xE142E1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:80 STX @LOCAL01
    case 0xE142E2: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:81 STX @VIRTUAL02
    case 0xE142E4: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:82 LDA #0
    case 0xE142E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/E1/E14DE8.asm:82 LDA #0
    // Overlapping static entry reached from 0xE142E6.
    case 0xE142E8: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/E1/E14DE8.asm:83 CLC
    case 0xE142E9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:84 SBC @VIRTUAL02
    case 0xE142EA: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/E1/E14DE8.asm:85 BRANCHLTEQS @UNKNOWN13
    case 0xE142EC: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/E1/E14DE8.asm:85 BRANCHLTEQS @UNKNOWN13
    case 0xE142EE: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/E1/E14DE8.asm:85 BRANCHLTEQS @UNKNOWN13
    case 0xE142F0: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/E1/E14DE8.asm:85 BRANCHLTEQS @UNKNOWN13
    case 0xE142F2: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/E1/E14DE8.asm:86 LDX #BATTLER_COUNT - 1
    case 0xE142F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001F, 2); else cpu.execute_instruction<0xA2>(0x00001F, 3); return true;
    // src/unknown/E1/E14DE8.asm:86 LDX #BATTLER_COUNT - 1
    // Overlapping static entry reached from 0xE142F4.
    case 0xE142F6: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/E1/E14DE8.asm:87 STX @LOCAL01
    case 0xE142F7: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:89 STX @VIRTUAL02
    case 0xE142F9: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:90 LDA #BATTLER_COUNT
    case 0xE142FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/E1/E14DE8.asm:90 LDA #BATTLER_COUNT
    // Overlapping static entry reached from 0xE142FB.
    case 0xE142FD: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/E1/E14DE8.asm:91 CLC
    case 0xE142FE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:92 SBC @VIRTUAL02
    case 0xE142FF: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/E1/E14DE8.asm:93 BRANCHGTS @UNKNOWN16
    case 0xE14301: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/E1/E14DE8.asm:93 BRANCHGTS @UNKNOWN16
    case 0xE14303: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/E1/E14DE8.asm:93 BRANCHGTS @UNKNOWN16
    case 0xE14305: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/E1/E14DE8.asm:93 BRANCHGTS @UNKNOWN16
    case 0xE14307: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/E1/E14DE8.asm:94 LDX #0
    case 0xE14309: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/E1/E14DE8.asm:94 LDX #0
    // Overlapping static entry reached from 0xE14309.
    case 0xE1430B: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/E1/E14DE8.asm:95 STX @LOCAL01
    case 0xE1430C: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:97 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0xE1430E: cpu.execute_instruction<0x22>(0xC1DB36, 4); return true;
    // src/unknown/E1/E14DE8.asm:98 JMP @UNKNOWN6
    case 0xE14312: cpu.execute_instruction<0x4C>(0x004289, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/E1/E14DE8.asm:100 END_C_FUNCTION
    case 0xE14315: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/E1/E14DE8.asm:100 END_C_FUNCTION
    case 0xE14316: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
