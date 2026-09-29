// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/unknown/E1/E14DE8.asm (unresolved).
bool execute_unresolved_e1_e14de8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/E1/E14DE8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xE14DE8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/E1/E14DE8.asm:8 END_STACK_VARS
    case 0xE14DEA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/E1/E14DE8.asm:8 END_STACK_VARS
    case 0xE14DEB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/E1/E14DE8.asm:8 END_STACK_VARS
    case 0xE14DEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/E1/E14DE8.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xE14DEC.
    case 0xE14DEE: cpu.execute_instruction<0xFF>(0x01A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/E1/E14DE8.asm:8 END_STACK_VARS
    case 0xE14DEF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:9 LDY #1
    case 0xE14DF0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/E1/E14DE8.asm:9 LDY #1
    // Overlapping static entry reached from 0xE14DF0.
    case 0xE14DF2: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/E1/E14DE8.asm:10 STY @LOCAL02
    case 0xE14DF3: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/E1/E14DE8.asm:11 LDX #0
    case 0xE14DF5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/E1/E14DE8.asm:11 LDX #0
    // Overlapping static entry reached from 0xE14DF5.
    case 0xE14DF7: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/E1/E14DE8.asm:12 STX @LOCAL01
    case 0xE14DF8: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:13 BRA @UNKNOWN6
    case 0xE14DFA: cpu.execute_instruction<0x80>(0x000037, 2); return true;
    // src/unknown/E1/E14DE8.asm:15 LDY @LOCAL02
    case 0xE14DFC: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/E1/E14DE8.asm:16 STY @VIRTUAL02
    case 0xE14DFE: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:17 LDX @LOCAL01
    case 0xE14E00: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:18 TXA
    case 0xE14E02: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:19 CLC
    case 0xE14E03: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:20 ADC @VIRTUAL02
    case 0xE14E04: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:21 TAX
    case 0xE14E06: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:22 STX @LOCAL01
    case 0xE14E07: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:23 STX @VIRTUAL02
    case 0xE14E09: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:24 LDA #0
    case 0xE14E0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/E1/E14DE8.asm:24 LDA #0
    // Overlapping static entry reached from 0xE14E0B.
    case 0xE14E0D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/E1/E14DE8.asm:25 CLC
    case 0xE14E0E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:26 SBC @VIRTUAL02
    case 0xE14E0F: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/E1/E14DE8.asm:27 BRANCHLTEQS @UNKNOWN3
    case 0xE14E11: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/E1/E14DE8.asm:27 BRANCHLTEQS @UNKNOWN3
    case 0xE14E13: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/E1/E14DE8.asm:27 BRANCHLTEQS @UNKNOWN3
    case 0xE14E15: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/E1/E14DE8.asm:27 BRANCHLTEQS @UNKNOWN3
    case 0xE14E17: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/E1/E14DE8.asm:28 LDX #BATTLER_COUNT - 1
    case 0xE14E19: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001F, 2); else cpu.execute_instruction<0xA2>(0x00001F, 3); return true;
    // src/unknown/E1/E14DE8.asm:28 LDX #BATTLER_COUNT - 1
    // Overlapping static entry reached from 0xE14E19.
    case 0xE14E1B: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/E1/E14DE8.asm:29 STX @LOCAL01
    case 0xE14E1C: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:31 STX @VIRTUAL02
    case 0xE14E1E: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:32 LDA #BATTLER_COUNT
    case 0xE14E20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/E1/E14DE8.asm:32 LDA #BATTLER_COUNT
    // Overlapping static entry reached from 0xE14E20.
    case 0xE14E22: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/E1/E14DE8.asm:33 CLC
    case 0xE14E23: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:34 SBC @VIRTUAL02
    case 0xE14E24: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/E1/E14DE8.asm:35 BRANCHGTS @UNKNOWN6
    case 0xE14E26: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/E1/E14DE8.asm:35 BRANCHGTS @UNKNOWN6
    case 0xE14E28: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/E1/E14DE8.asm:35 BRANCHGTS @UNKNOWN6
    case 0xE14E2A: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/E1/E14DE8.asm:35 BRANCHGTS @UNKNOWN6
    case 0xE14E2C: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/E1/E14DE8.asm:36 LDX #0
    case 0xE14E2E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/E1/E14DE8.asm:36 LDX #0
    // Overlapping static entry reached from 0xE14E2E.
    case 0xE14E30: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/E1/E14DE8.asm:37 STX @LOCAL01
    case 0xE14E31: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:39 LDX @LOCAL01
    case 0xE14E33: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:40 TXA
    case 0xE14E35: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:41 LDY #.SIZEOF(battler)
    case 0xE14E36: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/E1/E14DE8.asm:41 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xE14E36.
    case 0xE14E38: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/E1/E14DE8.asm:42 JSL MULT168
    case 0xE14E39: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/E1/E14DE8.asm:43 STA @LOCAL00
    case 0xE14E3D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/E1/E14DE8.asm:44 TAX
    case 0xE14E3F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:45 LDA BATTLERS_TABLE + battler::consciousness,X
    case 0xE14E40: cpu.execute_instruction<0xBD>(0x009FB8, 3); return true;
    // src/unknown/E1/E14DE8.asm:46 AND #$00FF
    case 0xE14E43: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/E1/E14DE8.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xE14E43.
    case 0xE14E45: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/E1/E14DE8.asm:47 BEQ @UNKNOWN0
    case 0xE14E46: cpu.execute_instruction<0xF0>(0x0000B4, 2); return true;
    // src/unknown/E1/E14DE8.asm:48 LDA @LOCAL00
    case 0xE14E48: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/E1/E14DE8.asm:49 CLC
    case 0xE14E4A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:50 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xE14E4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x009FAC, 3); return true;
    // src/unknown/E1/E14DE8.asm:50 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xE14E4B.
    case 0xE14E4D: cpu.execute_instruction<0x9F>(0xE1A222, 4); return true;
    // src/unknown/E1/E14DE8.asm:51 JSL NULL_C1E1A2
    case 0xE14E4E: cpu.execute_instruction<0x22>(0xC1E1A2, 4); return true;
    // src/unknown/E1/E14DE8.asm:51 JSL NULL_C1E1A2
    // Overlapping static entry reached from 0xE14E4D.
    case 0xE14E51: cpu.execute_instruction<0xC1>(0x000022, 2); return true;
    // src/unknown/E1/E14DE8.asm:52 JSL WINDOW_TICK
    case 0xE14E52: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/unknown/E1/E14DE8.asm:52 JSL WINDOW_TICK
    // Overlapping static entry reached from 0xE14E51.
    case 0xE14E53: cpu.execute_instruction<0xD5>(0x00002D, 2); return true;
    // src/unknown/E1/E14DE8.asm:52 JSL WINDOW_TICK
    // Overlapping static entry reached from 0xE14E53.
    case 0xE14E55: cpu.execute_instruction<0xC1>(0x000022, 2); return true;
    // src/unknown/E1/E14DE8.asm:54 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xE14E56: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/E1/E14DE8.asm:54 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xE14E55.
    case 0xE14E57: cpu.execute_instruction<0x56>(0x000087, 2); return true;
    // src/unknown/E1/E14DE8.asm:54 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xE14E57.
    case 0xE14E59: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AD, 2); else cpu.execute_instruction<0xC0>(0x0069AD, 3); return true;
    // src/unknown/E1/E14DE8.asm:55 LDA PAD_HELD
    case 0xE14E5A: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/unknown/E1/E14DE8.asm:55 LDA PAD_HELD
    // Overlapping static entry reached from 0xE14E59.
    case 0xE14E5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002900, 3); return true;
    // src/unknown/E1/E14DE8.asm:55 LDA PAD_HELD
    // Overlapping static entry reached from 0xE14E59.
    case 0xE14E5C: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/E1/E14DE8.asm:56 AND #PAD::RIGHT
    case 0xE14E5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/unknown/E1/E14DE8.asm:56 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xE14E5B.
    case 0xE14E5E: cpu.execute_instruction<0x00>(0x000001, 2); return true;
    // src/unknown/E1/E14DE8.asm:56 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xE14E5D.
    case 0xE14E5F: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/E1/E14DE8.asm:57 BEQ @UNKNOWN8
    case 0xE14E60: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/E1/E14DE8.asm:57 BEQ @UNKNOWN8
    // Overlapping static entry reached from 0xE14E5F.
    case 0xE14E61: cpu.execute_instruction<0x07>(0x0000A0, 2); return true;
    // src/unknown/E1/E14DE8.asm:58 LDY #1
    case 0xE14E62: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/E1/E14DE8.asm:58 LDY #1
    // Overlapping static entry reached from 0xE14E61.
    case 0xE14E63: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/E1/E14DE8.asm:58 LDY #1
    // Overlapping static entry reached from 0xE14E62.
    case 0xE14E64: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/E1/E14DE8.asm:59 STY @LOCAL02
    case 0xE14E65: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/E1/E14DE8.asm:60 BRA @UNKNOWN10
    case 0xE14E67: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/E1/E14DE8.asm:62 LDA PAD_HELD
    case 0xE14E69: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/unknown/E1/E14DE8.asm:63 AND #PAD::LEFT
    case 0xE14E6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/unknown/E1/E14DE8.asm:63 AND #PAD::LEFT
    // Overlapping static entry reached from 0xE14E6C.
    case 0xE14E6E: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/E1/E14DE8.asm:64 BEQ @UNKNOWN9
    case 0xE14E6F: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/E1/E14DE8.asm:65 LDY #.LOWORD(-1)
    case 0xE14E71: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/E1/E14DE8.asm:65 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xE14E71.
    case 0xE14E73: cpu.execute_instruction<0xFF>(0x801284, 4); return true;
    // src/unknown/E1/E14DE8.asm:66 STY @LOCAL02
    case 0xE14E74: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/E1/E14DE8.asm:67 BRA @UNKNOWN10
    case 0xE14E76: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/unknown/E1/E14DE8.asm:67 BRA @UNKNOWN10
    // Overlapping static entry reached from 0xE14E73.
    case 0xE14E77: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:69 LDA PAD_PRESS
    case 0xE14E78: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/E1/E14DE8.asm:70 BEQ @UNKNOWN7
    case 0xE14E7B: cpu.execute_instruction<0xF0>(0x0000D9, 2); return true;
    // src/unknown/E1/E14DE8.asm:71 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0xE14E7D: cpu.execute_instruction<0x22>(0xC1DD59, 4); return true;
    // src/unknown/E1/E14DE8.asm:72 BRA @RETURN
    case 0xE14E81: cpu.execute_instruction<0x80>(0x00003C, 2); return true;
    // src/unknown/E1/E14DE8.asm:74 STY @VIRTUAL02
    case 0xE14E83: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:75 LDX @LOCAL01
    case 0xE14E85: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:76 TXA
    case 0xE14E87: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:77 CLC
    case 0xE14E88: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:78 ADC @VIRTUAL02
    case 0xE14E89: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:79 TAX
    case 0xE14E8B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:80 STX @LOCAL01
    case 0xE14E8C: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:81 STX @VIRTUAL02
    case 0xE14E8E: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:82 LDA #0
    case 0xE14E90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/E1/E14DE8.asm:82 LDA #0
    // Overlapping static entry reached from 0xE14E90.
    case 0xE14E92: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/E1/E14DE8.asm:83 CLC
    case 0xE14E93: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:84 SBC @VIRTUAL02
    case 0xE14E94: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/E1/E14DE8.asm:85 BRANCHLTEQS @UNKNOWN13
    case 0xE14E96: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/E1/E14DE8.asm:85 BRANCHLTEQS @UNKNOWN13
    case 0xE14E98: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/E1/E14DE8.asm:85 BRANCHLTEQS @UNKNOWN13
    case 0xE14E9A: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/E1/E14DE8.asm:85 BRANCHLTEQS @UNKNOWN13
    case 0xE14E9C: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/E1/E14DE8.asm:86 LDX #BATTLER_COUNT - 1
    case 0xE14E9E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001F, 2); else cpu.execute_instruction<0xA2>(0x00001F, 3); return true;
    // src/unknown/E1/E14DE8.asm:86 LDX #BATTLER_COUNT - 1
    // Overlapping static entry reached from 0xE14E9E.
    case 0xE14EA0: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/E1/E14DE8.asm:87 STX @LOCAL01
    case 0xE14EA1: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:89 STX @VIRTUAL02
    case 0xE14EA3: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/E1/E14DE8.asm:90 LDA #BATTLER_COUNT
    case 0xE14EA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/E1/E14DE8.asm:90 LDA #BATTLER_COUNT
    // Overlapping static entry reached from 0xE14EA5.
    case 0xE14EA7: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/E1/E14DE8.asm:91 CLC
    case 0xE14EA8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/E1/E14DE8.asm:92 SBC @VIRTUAL02
    case 0xE14EA9: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/E1/E14DE8.asm:93 BRANCHGTS @UNKNOWN16
    case 0xE14EAB: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/E1/E14DE8.asm:93 BRANCHGTS @UNKNOWN16
    case 0xE14EAD: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/E1/E14DE8.asm:93 BRANCHGTS @UNKNOWN16
    case 0xE14EAF: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/E1/E14DE8.asm:93 BRANCHGTS @UNKNOWN16
    case 0xE14EB1: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/E1/E14DE8.asm:94 LDX #0
    case 0xE14EB3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/E1/E14DE8.asm:94 LDX #0
    // Overlapping static entry reached from 0xE14EB3.
    case 0xE14EB5: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/E1/E14DE8.asm:95 STX @LOCAL01
    case 0xE14EB6: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/E1/E14DE8.asm:97 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0xE14EB8: cpu.execute_instruction<0x22>(0xC1DD59, 4); return true;
    // src/unknown/E1/E14DE8.asm:98 JMP @UNKNOWN6
    case 0xE14EBC: cpu.execute_instruction<0x4C>(0x004E33, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/E1/E14DE8.asm:100 END_C_FUNCTION
    case 0xE14EBF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/E1/E14DE8.asm:100 END_C_FUNCTION
    case 0xE14EC0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
