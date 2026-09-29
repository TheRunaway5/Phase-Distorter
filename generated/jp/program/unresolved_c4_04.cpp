// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/unknown/C4/C4D065.asm (unresolved).
bool execute_unresolved_c4_c4d065_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4D065.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4A335: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4D065.asm:8 END_STACK_VARS
    case 0xC4A337: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4D065.asm:8 END_STACK_VARS
    case 0xC4A338: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4D065.asm:8 END_STACK_VARS
    case 0xC4A339: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D065.asm:8 END_STACK_VARS
    case 0xC4A33A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D065.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4A33A.
    case 0xC4A33C: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4D065.asm:8 END_STACK_VARS
    case 0xC4A33D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4D065.asm:8 END_STACK_VARS
    case 0xC4A33E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:9 STX @VIRTUAL04
    case 0xC4A33F: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C4/C4D065.asm:9 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC4A33C.
    case 0xC4A340: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C4/C4D065.asm:10 STA @LOCAL01
    case 0xC4A341: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xC4A340.
    case 0xC4A342: cpu.execute_instruction<0x10>(0x0000A2, 2); return true;
    // src/unknown/C4/C4D065.asm:11 LDX #0
    case 0xC4A343: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:11 LDX #0
    // Overlapping static entry reached from 0xC4A342.
    case 0xC4A344: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:11 LDX #0
    // Overlapping static entry reached from 0xC4A343.
    case 0xC4A345: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4D065.asm:12 STX @LOCAL00
    case 0xC4A346: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4D065.asm:13 JMP @UNKNOWN31
    case 0xC4A348: cpu.execute_instruction<0x4C>(0x00A4FB, 3); return true;
    // src/unknown/C4/C4D065.asm:15 LDA @VIRTUAL00
    case 0xC4A34B: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:16 AND #$00FF
    case 0xC4A34D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D065.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC4A34D.
    case 0xC4A34F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4D065.asm:17 STA @VIRTUAL02
    case 0xC4A350: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4D065.asm:18 INC @VIRTUAL04
    case 0xC4A352: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C4D065.asm:19 LDX @LOCAL00
    case 0xC4A354: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4D065.asm:20 BEQL @UNKNOWN19
    case 0xC4A356: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4D065.asm:20 BEQL @UNKNOWN19
    case 0xC4A358: cpu.execute_instruction<0x4C>(0x00A44B, 3); return true;
    // src/unknown/C4/C4D065.asm:21 TXA
    case 0xC4A35B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:22 CMP @VIRTUAL02
    case 0xC4A35C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4D065.asm:23 BNE @UNKNOWN2
    case 0xC4A35E: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/unknown/C4/C4D065.asm:24 LDA @LOCAL01
    case 0xC4A360: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:25 TAX
    case 0xC4A362: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A363: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:27 LDA #$7E
    case 0xC4A365: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x009D7E, 3); return true;
    // src/unknown/C4/C4D065.asm:28 STA __BSS_START__,X
    case 0xC4A367: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:28 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4A365.
    case 0xC4A368: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC4A36A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:30 LDA @LOCAL01
    case 0xC4A36C: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:31 INC
    case 0xC4A36E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:32 STA @LOCAL01
    case 0xC4A36F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:33 JMP @UNKNOWN31
    case 0xC4A371: cpu.execute_instruction<0x4C>(0x00A4FB, 3); return true;
    // src/unknown/C4/C4D065.asm:35 LDA @VIRTUAL02
    case 0xC4A374: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4D065.asm:36 CMP #$41
    case 0xC4A376: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000041, 2); else cpu.execute_instruction<0xC9>(0x000041, 3); return true;
    // src/unknown/C4/C4D065.asm:36 CMP #$41
    // Overlapping static entry reached from 0xC4A376.
    case 0xC4A378: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D065.asm:37 BEQ @UNKNOWN3
    case 0xC4A379: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C4/C4D065.asm:38 CMP #$49
    case 0xC4A37B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000049, 2); else cpu.execute_instruction<0xC9>(0x000049, 3); return true;
    // src/unknown/C4/C4D065.asm:38 CMP #$49
    // Overlapping static entry reached from 0xC4A37B.
    case 0xC4A37D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D065.asm:39 BEQ @UNKNOWN4
    case 0xC4A37E: cpu.execute_instruction<0xF0>(0x00001E, 2); return true;
    // src/unknown/C4/C4D065.asm:40 CMP #$55
    case 0xC4A380: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000055, 2); else cpu.execute_instruction<0xC9>(0x000055, 3); return true;
    // src/unknown/C4/C4D065.asm:40 CMP #$55
    // Overlapping static entry reached from 0xC4A380.
    case 0xC4A382: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D065.asm:41 BEQ @UNKNOWN5
    case 0xC4A383: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/unknown/C4/C4D065.asm:42 CMP #$45
    case 0xC4A385: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000045, 2); else cpu.execute_instruction<0xC9>(0x000045, 3); return true;
    // src/unknown/C4/C4D065.asm:42 CMP #$45
    // Overlapping static entry reached from 0xC4A385.
    case 0xC4A387: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D065.asm:43 BEQ @UNKNOWN6
    case 0xC4A388: cpu.execute_instruction<0xF0>(0x00002E, 2); return true;
    // src/unknown/C4/C4D065.asm:44 CMP #$4F
    case 0xC4A38A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00004F, 2); else cpu.execute_instruction<0xC9>(0x00004F, 3); return true;
    // src/unknown/C4/C4D065.asm:44 CMP #$4F
    // Overlapping static entry reached from 0xC4A38A.
    case 0xC4A38C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D065.asm:45 BEQ @UNKNOWN7
    case 0xC4A38D: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/unknown/C4/C4D065.asm:46 BRA @UNKNOWN8
    case 0xC4A38F: cpu.execute_instruction<0x80>(0x000040, 2); return true;
    // src/unknown/C4/C4D065.asm:48 LDY #0
    case 0xC4A391: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:48 LDY #0
    // Overlapping static entry reached from 0xC4A391.
    case 0xC4A393: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C4D065.asm:49 LDA @LOCAL01
    case 0xC4A394: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:50 JSR UNKNOWN_C4D00F
    case 0xC4A396: cpu.execute_instruction<0x20>(0x00A2DF, 3); return true;
    // src/unknown/C4/C4D065.asm:51 STA @LOCAL01
    case 0xC4A399: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:52 JMP @UNKNOWN18
    case 0xC4A39B: cpu.execute_instruction<0x4C>(0x00A443, 3); return true;
    // src/unknown/C4/C4D065.asm:54 LDY #1
    case 0xC4A39E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4D065.asm:54 LDY #1
    // Overlapping static entry reached from 0xC4A39E.
    case 0xC4A3A0: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C4D065.asm:55 LDA @LOCAL01
    case 0xC4A3A1: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:56 JSR UNKNOWN_C4D00F
    case 0xC4A3A3: cpu.execute_instruction<0x20>(0x00A2DF, 3); return true;
    // src/unknown/C4/C4D065.asm:57 STA @LOCAL01
    case 0xC4A3A6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:58 JMP @UNKNOWN18
    case 0xC4A3A8: cpu.execute_instruction<0x4C>(0x00A443, 3); return true;
    // src/unknown/C4/C4D065.asm:60 LDY #2
    case 0xC4A3AB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C4/C4D065.asm:60 LDY #2
    // Overlapping static entry reached from 0xC4A3AB.
    case 0xC4A3AD: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C4D065.asm:61 LDA @LOCAL01
    case 0xC4A3AE: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:62 JSR UNKNOWN_C4D00F
    case 0xC4A3B0: cpu.execute_instruction<0x20>(0x00A2DF, 3); return true;
    // src/unknown/C4/C4D065.asm:63 STA @LOCAL01
    case 0xC4A3B3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:64 JMP @UNKNOWN18
    case 0xC4A3B5: cpu.execute_instruction<0x4C>(0x00A443, 3); return true;
    // src/unknown/C4/C4D065.asm:66 LDY #3
    case 0xC4A3B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C4/C4D065.asm:66 LDY #3
    // Overlapping static entry reached from 0xC4A3B8.
    case 0xC4A3BA: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C4D065.asm:67 LDA @LOCAL01
    case 0xC4A3BB: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:68 JSR UNKNOWN_C4D00F
    case 0xC4A3BD: cpu.execute_instruction<0x20>(0x00A2DF, 3); return true;
    // src/unknown/C4/C4D065.asm:69 STA @LOCAL01
    case 0xC4A3C0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:70 JMP @UNKNOWN18
    case 0xC4A3C2: cpu.execute_instruction<0x4C>(0x00A443, 3); return true;
    // src/unknown/C4/C4D065.asm:72 LDY #4
    case 0xC4A3C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C4/C4D065.asm:72 LDY #4
    // Overlapping static entry reached from 0xC4A3C5.
    case 0xC4A3C7: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C4D065.asm:73 LDA @LOCAL01
    case 0xC4A3C8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:74 JSR UNKNOWN_C4D00F
    case 0xC4A3CA: cpu.execute_instruction<0x20>(0x00A2DF, 3); return true;
    // src/unknown/C4/C4D065.asm:75 STA @LOCAL01
    case 0xC4A3CD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:76 BRA @UNKNOWN18
    case 0xC4A3CF: cpu.execute_instruction<0x80>(0x000072, 2); return true;
    // src/unknown/C4/C4D065.asm:78 LDA #$41
    case 0xC4A3D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000041, 2); else cpu.execute_instruction<0xA9>(0x000041, 3); return true;
    // src/unknown/C4/C4D065.asm:78 LDA #$41
    // Overlapping static entry reached from 0xC4A3D1.
    case 0xC4A3D3: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4D065.asm:79 CLC
    case 0xC4A3D4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:80 SBC @VIRTUAL02
    case 0xC4A3D5: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C4/C4D065.asm:81 BRANCHGTS @UNKNOWN15
    case 0xC4A3D7: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C4/C4D065.asm:81 BRANCHGTS @UNKNOWN15
    case 0xC4A3D9: cpu.execute_instruction<0x10>(0x00003B, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C4/C4D065.asm:81 BRANCHGTS @UNKNOWN15
    case 0xC4A3DB: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C4/C4D065.asm:81 BRANCHGTS @UNKNOWN15
    case 0xC4A3DD: cpu.execute_instruction<0x30>(0x000037, 2); return true;
    // src/unknown/C4/C4D065.asm:82 LDA @VIRTUAL02
    case 0xC4A3DF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4D065.asm:83 CLC
    case 0xC4A3E1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:84 SBC #$5A
    case 0xC4A3E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00005A, 2); else cpu.execute_instruction<0xE9>(0x00005A, 3); return true;
    // src/unknown/C4/C4D065.asm:84 SBC #$5A
    // Overlapping static entry reached from 0xC4A3E2.
    case 0xC4A3E4: cpu.execute_instruction<0x00>(0x000070, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C4/C4D065.asm:85 BRANCHGTS @UNKNOWN15
    case 0xC4A3E5: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C4/C4D065.asm:85 BRANCHGTS @UNKNOWN15
    case 0xC4A3E7: cpu.execute_instruction<0x10>(0x00002D, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C4/C4D065.asm:85 BRANCHGTS @UNKNOWN15
    case 0xC4A3E9: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C4/C4D065.asm:85 BRANCHGTS @UNKNOWN15
    case 0xC4A3EB: cpu.execute_instruction<0x30>(0x000029, 2); return true;
    // src/unknown/C4/C4D065.asm:86 CPX #$4E
    case 0xC4A3ED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00004E, 2); else cpu.execute_instruction<0xE0>(0x00004E, 3); return true;
    // src/unknown/C4/C4D065.asm:86 CPX #$4E
    // Overlapping static entry reached from 0xC4A3ED.
    case 0xC4A3EF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D065.asm:87 BNE @UNKNOWN13
    case 0xC4A3F0: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/unknown/C4/C4D065.asm:88 LDA @LOCAL01
    case 0xC4A3F2: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:89 TAX
    case 0xC4A3F4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:90 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A3F5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:91 LDA #$9D
    case 0xC4A3F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009D, 2); else cpu.execute_instruction<0xA9>(0x009D9D, 3); return true;
    // src/unknown/C4/C4D065.asm:92 STA __BSS_START__,X
    case 0xC4A3F9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:92 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4A3F7.
    case 0xC4A3FA: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:93 REP #PROC_FLAGS::ACCUM8
    case 0xC4A3FC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:94 LDA @LOCAL01
    case 0xC4A3FE: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:95 INC
    case 0xC4A400: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:96 STA @LOCAL01
    case 0xC4A401: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:97 BRA @UNKNOWN14
    case 0xC4A403: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C4/C4D065.asm:99 LDY #1
    case 0xC4A405: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4D065.asm:99 LDY #1
    // Overlapping static entry reached from 0xC4A405.
    case 0xC4A407: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C4D065.asm:100 LDA @LOCAL01
    case 0xC4A408: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:101 JSR UNKNOWN_C4D00F
    case 0xC4A40A: cpu.execute_instruction<0x20>(0x00A2DF, 3); return true;
    // src/unknown/C4/C4D065.asm:102 STA @LOCAL01
    case 0xC4A40D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:104 LDX @VIRTUAL02
    case 0xC4A40F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4D065.asm:105 STX @LOCAL00
    case 0xC4A411: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4D065.asm:106 JMP @UNKNOWN31
    case 0xC4A413: cpu.execute_instruction<0x4C>(0x00A4FB, 3); return true;
    // src/unknown/C4/C4D065.asm:108 CPX #$4E
    case 0xC4A416: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00004E, 2); else cpu.execute_instruction<0xE0>(0x00004E, 3); return true;
    // src/unknown/C4/C4D065.asm:108 CPX #$4E
    // Overlapping static entry reached from 0xC4A416.
    case 0xC4A418: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D065.asm:109 BNE @UNKNOWN16
    case 0xC4A419: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/unknown/C4/C4D065.asm:110 LDA @LOCAL01
    case 0xC4A41B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:111 TAX
    case 0xC4A41D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:112 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A41E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:113 LDA #$9D
    case 0xC4A420: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009D, 2); else cpu.execute_instruction<0xA9>(0x009D9D, 3); return true;
    // src/unknown/C4/C4D065.asm:114 STA __BSS_START__,X
    case 0xC4A422: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:114 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4A420.
    case 0xC4A423: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:115 REP #PROC_FLAGS::ACCUM8
    case 0xC4A425: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:116 LDA @LOCAL01
    case 0xC4A427: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:117 TAX
    case 0xC4A429: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:118 INX
    case 0xC4A42A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:119 BRA @UNKNOWN17
    case 0xC4A42B: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C4/C4D065.asm:121 LDY #1
    case 0xC4A42D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4D065.asm:121 LDY #1
    // Overlapping static entry reached from 0xC4A42D.
    case 0xC4A42F: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C4D065.asm:122 LDA @LOCAL01
    case 0xC4A430: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:123 JSR UNKNOWN_C4D00F
    case 0xC4A432: cpu.execute_instruction<0x20>(0x00A2DF, 3); return true;
    // src/unknown/C4/C4D065.asm:124 TAX
    case 0xC4A435: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:126 LDA @VIRTUAL02
    case 0xC4A436: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4D065.asm:127 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A438: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:128 STA __BSS_START__,X
    case 0xC4A43A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:129 REP #PROC_FLAGS::ACCUM8
    case 0xC4A43D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:130 TXA
    case 0xC4A43F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:131 INC
    case 0xC4A440: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:132 STA @LOCAL01
    case 0xC4A441: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:134 LDX #0
    case 0xC4A443: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:134 LDX #0
    // Overlapping static entry reached from 0xC4A443.
    case 0xC4A445: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4D065.asm:135 STX @LOCAL00
    case 0xC4A446: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4D065.asm:136 JMP @UNKNOWN31
    case 0xC4A448: cpu.execute_instruction<0x4C>(0x00A4FB, 3); return true;
    // src/unknown/C4/C4D065.asm:138 LDA @VIRTUAL02
    case 0xC4A44B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4D065.asm:139 CMP #$41
    case 0xC4A44D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000041, 2); else cpu.execute_instruction<0xC9>(0x000041, 3); return true;
    // src/unknown/C4/C4D065.asm:139 CMP #$41
    // Overlapping static entry reached from 0xC4A44D.
    case 0xC4A44F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D065.asm:140 BEQ @UNKNOWN20
    case 0xC4A450: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C4/C4D065.asm:141 CMP #$49
    case 0xC4A452: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000049, 2); else cpu.execute_instruction<0xC9>(0x000049, 3); return true;
    // src/unknown/C4/C4D065.asm:141 CMP #$49
    // Overlapping static entry reached from 0xC4A452.
    case 0xC4A454: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D065.asm:142 BEQ @UNKNOWN21
    case 0xC4A455: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/C4/C4D065.asm:143 CMP #$55
    case 0xC4A457: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000055, 2); else cpu.execute_instruction<0xC9>(0x000055, 3); return true;
    // src/unknown/C4/C4D065.asm:143 CMP #$55
    // Overlapping static entry reached from 0xC4A457.
    case 0xC4A459: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D065.asm:144 BEQ @UNKNOWN22
    case 0xC4A45A: cpu.execute_instruction<0xF0>(0x000033, 2); return true;
    // src/unknown/C4/C4D065.asm:145 CMP #$45
    case 0xC4A45C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000045, 2); else cpu.execute_instruction<0xC9>(0x000045, 3); return true;
    // src/unknown/C4/C4D065.asm:145 CMP #$45
    // Overlapping static entry reached from 0xC4A45C.
    case 0xC4A45E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D065.asm:146 BEQ @UNKNOWN23
    case 0xC4A45F: cpu.execute_instruction<0xF0>(0x000041, 2); return true;
    // src/unknown/C4/C4D065.asm:147 CMP #$4F
    case 0xC4A461: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00004F, 2); else cpu.execute_instruction<0xC9>(0x00004F, 3); return true;
    // src/unknown/C4/C4D065.asm:147 CMP #$4F
    // Overlapping static entry reached from 0xC4A461.
    case 0xC4A463: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D065.asm:148 BEQ @UNKNOWN24
    case 0xC4A464: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // src/unknown/C4/C4D065.asm:149 BRA @UNKNOWN25
    case 0xC4A466: cpu.execute_instruction<0x80>(0x000060, 2); return true;
    // src/unknown/C4/C4D065.asm:151 LDA @LOCAL01
    case 0xC4A468: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:152 TAX
    case 0xC4A46A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:153 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A46B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:154 LDA #$60
    case 0xC4A46D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000060, 2); else cpu.execute_instruction<0xA9>(0x009D60, 3); return true;
    // src/unknown/C4/C4D065.asm:155 STA __BSS_START__,X
    case 0xC4A46F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:155 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4A46D.
    case 0xC4A470: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:156 REP #PROC_FLAGS::ACCUM8
    case 0xC4A472: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:157 LDA @LOCAL01
    case 0xC4A474: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:158 INC
    case 0xC4A476: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:159 STA @LOCAL01
    case 0xC4A477: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:160 JMP @UNKNOWN31
    case 0xC4A479: cpu.execute_instruction<0x4C>(0x00A4FB, 3); return true;
    // src/unknown/C4/C4D065.asm:162 LDA @LOCAL01
    case 0xC4A47C: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:163 TAX
    case 0xC4A47E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:164 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A47F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:165 LDA #$70
    case 0xC4A481: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000070, 2); else cpu.execute_instruction<0xA9>(0x009D70, 3); return true;
    // src/unknown/C4/C4D065.asm:166 STA __BSS_START__,X
    case 0xC4A483: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:166 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4A481.
    case 0xC4A484: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:167 REP #PROC_FLAGS::ACCUM8
    case 0xC4A486: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:168 LDA @LOCAL01
    case 0xC4A488: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:169 INC
    case 0xC4A48A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:170 STA @LOCAL01
    case 0xC4A48B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:171 BRA @UNKNOWN31
    case 0xC4A48D: cpu.execute_instruction<0x80>(0x00006C, 2); return true;
    // src/unknown/C4/C4D065.asm:173 LDA @LOCAL01
    case 0xC4A48F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:174 TAX
    case 0xC4A491: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:175 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A492: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:176 LDA #$80
    case 0xC4A494: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x009D80, 3); return true;
    // src/unknown/C4/C4D065.asm:177 STA __BSS_START__,X
    case 0xC4A496: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:177 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4A494.
    case 0xC4A497: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:178 REP #PROC_FLAGS::ACCUM8
    case 0xC4A499: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:179 LDA @LOCAL01
    case 0xC4A49B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:180 INC
    case 0xC4A49D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:181 STA @LOCAL01
    case 0xC4A49E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:182 BRA @UNKNOWN31
    case 0xC4A4A0: cpu.execute_instruction<0x80>(0x000059, 2); return true;
    // src/unknown/C4/C4D065.asm:184 LDA @LOCAL01
    case 0xC4A4A2: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:185 TAX
    case 0xC4A4A4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:186 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A4A5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:187 LDA #$90
    case 0xC4A4A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000090, 2); else cpu.execute_instruction<0xA9>(0x009D90, 3); return true;
    // src/unknown/C4/C4D065.asm:188 STA __BSS_START__,X
    case 0xC4A4A9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:188 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4A4A7.
    case 0xC4A4AA: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:189 REP #PROC_FLAGS::ACCUM8
    case 0xC4A4AC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:190 LDA @LOCAL01
    case 0xC4A4AE: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:191 INC
    case 0xC4A4B0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:192 STA @LOCAL01
    case 0xC4A4B1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:193 BRA @UNKNOWN31
    case 0xC4A4B3: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/unknown/C4/C4D065.asm:195 LDA @LOCAL01
    case 0xC4A4B5: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:196 TAX
    case 0xC4A4B7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:197 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A4B8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:198 LDA #$A0
    case 0xC4A4BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A0, 2); else cpu.execute_instruction<0xA9>(0x009DA0, 3); return true;
    // src/unknown/C4/C4D065.asm:199 STA __BSS_START__,X
    case 0xC4A4BC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:199 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4A4BA.
    case 0xC4A4BD: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:200 REP #PROC_FLAGS::ACCUM8
    case 0xC4A4BF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:201 LDA @LOCAL01
    case 0xC4A4C1: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:202 INC
    case 0xC4A4C3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:203 STA @LOCAL01
    case 0xC4A4C4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:204 BRA @UNKNOWN31
    case 0xC4A4C6: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/unknown/C4/C4D065.asm:206 LDA #$41
    case 0xC4A4C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000041, 2); else cpu.execute_instruction<0xA9>(0x000041, 3); return true;
    // src/unknown/C4/C4D065.asm:206 LDA #$41
    // Overlapping static entry reached from 0xC4A4C8.
    case 0xC4A4CA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4D065.asm:207 CLC
    case 0xC4A4CB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:208 SBC @VIRTUAL02
    case 0xC4A4CC: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C4/C4D065.asm:209 BRANCHGTS @UNKNOWN30
    case 0xC4A4CE: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C4/C4D065.asm:209 BRANCHGTS @UNKNOWN30
    case 0xC4A4D0: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C4/C4D065.asm:209 BRANCHGTS @UNKNOWN30
    case 0xC4A4D2: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C4/C4D065.asm:209 BRANCHGTS @UNKNOWN30
    case 0xC4A4D4: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/unknown/C4/C4D065.asm:210 LDA @VIRTUAL02
    case 0xC4A4D6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4D065.asm:211 CLC
    case 0xC4A4D8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:212 SBC #$5A
    case 0xC4A4D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00005A, 2); else cpu.execute_instruction<0xE9>(0x00005A, 3); return true;
    // src/unknown/C4/C4D065.asm:212 SBC #$5A
    // Overlapping static entry reached from 0xC4A4D9.
    case 0xC4A4DB: cpu.execute_instruction<0x00>(0x000070, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C4/C4D065.asm:213 BRANCHGTS @UNKNOWN30
    case 0xC4A4DC: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C4/C4D065.asm:213 BRANCHGTS @UNKNOWN30
    case 0xC4A4DE: cpu.execute_instruction<0x10>(0x00000A, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C4/C4D065.asm:213 BRANCHGTS @UNKNOWN30
    case 0xC4A4E0: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C4/C4D065.asm:213 BRANCHGTS @UNKNOWN30
    case 0xC4A4E2: cpu.execute_instruction<0x30>(0x000006, 2); return true;
    // src/unknown/C4/C4D065.asm:214 LDX @VIRTUAL02
    case 0xC4A4E4: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4D065.asm:215 STX @LOCAL00
    case 0xC4A4E6: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4D065.asm:216 BRA @UNKNOWN31
    case 0xC4A4E8: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C4/C4D065.asm:218 LDA @LOCAL01
    case 0xC4A4EA: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:219 TAX
    case 0xC4A4EC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:220 LDA @VIRTUAL02
    case 0xC4A4ED: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4D065.asm:221 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A4EF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:222 STA __BSS_START__,X
    case 0xC4A4F1: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:223 REP #PROC_FLAGS::ACCUM8
    case 0xC4A4F4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:224 LDA @LOCAL01
    case 0xC4A4F6: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:225 INC
    case 0xC4A4F8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:226 STA @LOCAL01
    case 0xC4A4F9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:228 LDX @VIRTUAL04
    case 0xC4A4FB: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4D065.asm:229 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A4FD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:230 LDA __BSS_START__,X
    case 0xC4A4FF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:231 STA @VIRTUAL00
    case 0xC4A502: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:232 REP #PROC_FLAGS::ACCUM8
    case 0xC4A504: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:233 LDA @VIRTUAL00
    case 0xC4A506: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:234 AND #$00FF
    case 0xC4A508: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D065.asm:234 AND #$00FF
    // Overlapping static entry reached from 0xC4A508.
    case 0xC4A50A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C4D065.asm:235 BNEL @UNKNOWN0
    case 0xC4A50B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C4D065.asm:235 BNEL @UNKNOWN0
    case 0xC4A50D: cpu.execute_instruction<0x4C>(0x00A34B, 3); return true;
    // src/unknown/C4/C4D065.asm:236 LDX @LOCAL00
    case 0xC4A510: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C4D065.asm:237 BEQ @UNKNOWN34
    case 0xC4A512: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/unknown/C4/C4D065.asm:238 CPX #$4E
    case 0xC4A514: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00004E, 2); else cpu.execute_instruction<0xE0>(0x00004E, 3); return true;
    // src/unknown/C4/C4D065.asm:238 CPX #$4E
    // Overlapping static entry reached from 0xC4A514.
    case 0xC4A516: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D065.asm:239 BNE @UNKNOWN33
    case 0xC4A517: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/unknown/C4/C4D065.asm:240 LDA @LOCAL01
    case 0xC4A519: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:241 TAX
    case 0xC4A51B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:242 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A51C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:243 LDA #$9D
    case 0xC4A51E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009D, 2); else cpu.execute_instruction<0xA9>(0x009D9D, 3); return true;
    // src/unknown/C4/C4D065.asm:244 STA __BSS_START__,X
    case 0xC4A520: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:244 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4A51E.
    case 0xC4A521: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:245 REP #PROC_FLAGS::ACCUM8
    case 0xC4A523: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:246 LDA @LOCAL01
    case 0xC4A525: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:247 INC
    case 0xC4A527: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:248 STA @LOCAL01
    case 0xC4A528: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:249 BRA @UNKNOWN34
    case 0xC4A52A: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C4/C4D065.asm:251 LDY #1
    case 0xC4A52C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4D065.asm:251 LDY #1
    // Overlapping static entry reached from 0xC4A52C.
    case 0xC4A52E: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C4D065.asm:252 LDA @LOCAL01
    case 0xC4A52F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:253 JSR UNKNOWN_C4D00F
    case 0xC4A531: cpu.execute_instruction<0x20>(0x00A2DF, 3); return true;
    // src/unknown/C4/C4D065.asm:254 STA @LOCAL01
    case 0xC4A534: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:256 LDA @LOCAL01
    case 0xC4A536: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:257 TAX
    case 0xC4A538: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:258 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A539: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:259 LDA #0
    case 0xC4A53B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/unknown/C4/C4D065.asm:260 STA __BSS_START__,X
    case 0xC4A53D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:260 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4A53B.
    case 0xC4A53E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:261 REP #PROC_FLAGS::ACCUM8
    case 0xC4A540: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4D065.asm:262 END_C_FUNCTION
    case 0xC4A542: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4D065.asm:262 END_C_FUNCTION
    case 0xC4A543: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4D2A8.asm (unresolved).
bool execute_unresolved_c4_c4d2a8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4D2A8.asm:3 BEGIN_C_FUNCTION
    case 0xC4A578: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4D2A8.asm:8 END_STACK_VARS
    case 0xC4A57A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4D2A8.asm:8 END_STACK_VARS
    case 0xC4A57B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D2A8.asm:8 END_STACK_VARS
    case 0xC4A57C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D2A8.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4A57C.
    case 0xC4A57E: cpu.execute_instruction<0xFF>(0x86AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4D2A8.asm:8 END_STACK_VARS
    case 0xC4A57F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4D2A8.asm:9 LDA FRAMES_UNTIL_MAP_ICON_PALETTE_UPDATE
    case 0xC4A580: cpu.execute_instruction<0xAD>(0x00B686, 3); return true;
    // src/unknown/C4/C4D2A8.asm:9 LDA FRAMES_UNTIL_MAP_ICON_PALETTE_UPDATE
    // Overlapping static entry reached from 0xC4A57E.
    case 0xC4A582: cpu.execute_instruction<0xB6>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D2A8.asm:10 BNE @UNKNOWN2
    case 0xC4A583: cpu.execute_instruction<0xD0>(0x000036, 2); return true;
    // src/unknown/C4/C4D2A8.asm:10 BNE @UNKNOWN2
    // Overlapping static entry reached from 0xC4A582.
    case 0xC4A584: cpu.execute_instruction<0x36>(0x0000A9, 2); return true;
    // src/unknown/C4/C4D2A8.asm:11 LDA #12
    case 0xC4A585: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C4/C4D2A8.asm:11 LDA #12
    // Overlapping static entry reached from 0xC4A584.
    case 0xC4A586: cpu.execute_instruction<0x0C>(0x008D00, 3); return true;
    // src/unknown/C4/C4D2A8.asm:11 LDA #12
    // Overlapping static entry reached from 0xC4A585.
    case 0xC4A587: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4D2A8.asm:12 STA FRAMES_UNTIL_MAP_ICON_PALETTE_UPDATE
    case 0xC4A588: cpu.execute_instruction<0x8D>(0x00B686, 3); return true;
    // src/unknown/C4/C4D2A8.asm:12 STA FRAMES_UNTIL_MAP_ICON_PALETTE_UPDATE
    // Overlapping static entry reached from 0xC4A586.
    case 0xC4A589: cpu.execute_instruction<0x86>(0x0000B6, 2); return true;
    // src/unknown/C4/C4D2A8.asm:13 LDX PALETTES + BPP4PALETTE_SIZE * 8 + 1 * 2
    case 0xC4A58B: cpu.execute_instruction<0xAE>(0x000302, 3); return true;
    // src/unknown/C4/C4D2A8.asm:14 STX @LOCAL01
    case 0xC4A58E: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C4D2A8.asm:15 LDA #130
    case 0xC4A590: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000082, 2); else cpu.execute_instruction<0xA9>(0x000082, 3); return true;
    // src/unknown/C4/C4D2A8.asm:15 LDA #130
    // Overlapping static entry reached from 0xC4A590.
    case 0xC4A592: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4D2A8.asm:16 STA @LOCAL00
    case 0xC4A593: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4D2A8.asm:17 BRA @UNKNOWN1
    case 0xC4A595: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C4/C4D2A8.asm:19 DEC
    case 0xC4A597: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4D2A8.asm:20 ASL
    case 0xC4A598: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D2A8.asm:21 PHA
    case 0xC4A599: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C4D2A8.asm:22 LDA @LOCAL00
    case 0xC4A59A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4D2A8.asm:23 ASL
    case 0xC4A59C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D2A8.asm:24 TAX
    case 0xC4A59D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D2A8.asm:25 LDA PALETTES,X
    case 0xC4A59E: cpu.execute_instruction<0xBD>(0x000200, 3); return true;
    // src/unknown/C4/C4D2A8.asm:26 PLX
    case 0xC4A5A1: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C4/C4D2A8.asm:27 STA PALETTES,X
    case 0xC4A5A2: cpu.execute_instruction<0x9D>(0x000200, 3); return true;
    // src/unknown/C4/C4D2A8.asm:28 LDA @LOCAL00
    case 0xC4A5A5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4D2A8.asm:29 INC
    case 0xC4A5A7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D2A8.asm:30 STA @LOCAL00
    case 0xC4A5A8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4D2A8.asm:32 CMP #136
    case 0xC4A5AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000088, 2); else cpu.execute_instruction<0xC9>(0x000088, 3); return true;
    // src/unknown/C4/C4D2A8.asm:32 CMP #136
    // Overlapping static entry reached from 0xC4A5AA.
    case 0xC4A5AC: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4D2A8.asm:33 BCC @UNKNOWN0
    case 0xC4A5AD: cpu.execute_instruction<0x90>(0x0000E8, 2); return true;
    // src/unknown/C4/C4D2A8.asm:34 LDX @LOCAL01
    case 0xC4A5AF: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C4D2A8.asm:35 STX PALETTES + BPP4PALETTE_SIZE * 8 + 7 * 2
    case 0xC4A5B1: cpu.execute_instruction<0x8E>(0x00030E, 3); return true;
    // src/unknown/C4/C4D2A8.asm:36 LDA #16
    case 0xC4A5B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C4/C4D2A8.asm:36 LDA #16
    // Overlapping static entry reached from 0xC4A5B4.
    case 0xC4A5B6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4D2A8.asm:37 JSL UNKNOWN_C0856B
    case 0xC4A5B7: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/unknown/C4/C4D2A8.asm:39 DEC FRAMES_UNTIL_MAP_ICON_PALETTE_UPDATE
    case 0xC4A5BB: cpu.execute_instruction<0xCE>(0x00B686, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4D2A8.asm:40 END_C_FUNCTION
    case 0xC4A5BE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4D2A8.asm:40 END_C_FUNCTION
    case 0xC4A5BF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4D2F0.asm (unresolved).
bool execute_unresolved_c4_c4d2f0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4D2F0.asm:3 BEGIN_C_FUNCTION
    case 0xC4A5C0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4D2F0.asm:9 END_STACK_VARS
    case 0xC4A5C2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4D2F0.asm:9 END_STACK_VARS
    case 0xC4A5C3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D2F0.asm:9 END_STACK_VARS
    case 0xC4A5C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D2F0.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4A5C4.
    case 0xC4A5C6: cpu.execute_instruction<0xFF>(0x28AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4D2F0.asm:9 END_STACK_VARS
    case 0xC4A5C7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:10 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC4A5C8: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C4/C4D2F0.asm:10 LDA GAME_STATE+game_state::leader_x_coord
    // Overlapping static entry reached from 0xC4A5C6.
    case 0xC4A5CA: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:11 XBA
    case 0xC4A5CB: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:12 AND #$00FF
    case 0xC4A5CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D2F0.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC4A5CC.
    case 0xC4A5CE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4D2F0.asm:13 TAX
    case 0xC4A5CF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:14 LDY #128
    case 0xC4A5D0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000080, 2); else cpu.execute_instruction<0xA0>(0x000080, 3); return true;
    // src/unknown/C4/C4D2F0.asm:14 LDY #128
    // Overlapping static entry reached from 0xC4A5D0.
    case 0xC4A5D2: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C4/C4D2F0.asm:15 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC4A5D3: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C4/C4D2F0.asm:16 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC4A5D6: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/unknown/C4/C4D2F0.asm:17 STA @LOCAL03
    case 0xC4A5DA: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D2F0.asm:18 LOADPTR MAP_DATA_PER_SECTOR_TOWN_MAP_DATA, @VIRTUAL06
    case 0xC4A5DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x00A022, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D2F0.asm:18 LOADPTR MAP_DATA_PER_SECTOR_TOWN_MAP_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A5DC.
    case 0xC4A5DE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000085, 2); else cpu.execute_instruction<0xA0>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4D2F0.asm:18 LOADPTR MAP_DATA_PER_SECTOR_TOWN_MAP_DATA, @VIRTUAL06
    case 0xC4A5DF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4D2F0.asm:18 LOADPTR MAP_DATA_PER_SECTOR_TOWN_MAP_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A5DE.
    case 0xC4A5E0: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D2F0.asm:18 LOADPTR MAP_DATA_PER_SECTOR_TOWN_MAP_DATA, @VIRTUAL06
    case 0xC4A5E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D2F0.asm:18 LOADPTR MAP_DATA_PER_SECTOR_TOWN_MAP_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A5E0.
    case 0xC4A5E2: cpu.execute_instruction<0xEF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D2F0.asm:18 LOADPTR MAP_DATA_PER_SECTOR_TOWN_MAP_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A5E1.
    case 0xC4A5E3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4D2F0.asm:18 LOADPTR MAP_DATA_PER_SECTOR_TOWN_MAP_DATA, @VIRTUAL06
    case 0xC4A5E4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4D2F0.asm:19 TXA
    case 0xC4A5E6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C4/C4D2F0.asm:20 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4A5E7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C4/C4D2F0.asm:20 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4A5E9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C4/C4D2F0.asm:20 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4A5EA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4D2F0.asm:21 STA @VIRTUAL02
    case 0xC4A5EC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4D2F0.asm:22 LDA @LOCAL03
    case 0xC4A5EE: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:712 STA scratch
    // Macro caller: src/unknown/C4/C4D2F0.asm:23 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4A5F0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:713 ASL
    // Macro caller: src/unknown/C4/C4D2F0.asm:23 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4A5F2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:714 ADC scratch
    // Macro caller: src/unknown/C4/C4D2F0.asm:23 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4A5F3: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:715 ASL
    // Macro caller: src/unknown/C4/C4D2F0.asm:23 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4A5F5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:716 ASL
    // Macro caller: src/unknown/C4/C4D2F0.asm:23 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4A5F6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:717 ASL
    // Macro caller: src/unknown/C4/C4D2F0.asm:23 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4A5F7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:718 ASL
    // Macro caller: src/unknown/C4/C4D2F0.asm:23 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4A5F8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:719 ASL
    // Macro caller: src/unknown/C4/C4D2F0.asm:23 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4A5F9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:24 CLC
    case 0xC4A5FA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:25 ADC @VIRTUAL02
    case 0xC4A5FB: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4D2F0.asm:26 STA @LOCAL02
    case 0xC4A5FD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4D2F0.asm:27 INC
    case 0xC4A5FF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4D2F0.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4A600: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4D2F0.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4A602: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4D2F0.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4A604: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4D2F0.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4A606: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4D2F0.asm:29 CLC
    case 0xC4A608: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:30 ADC @VIRTUAL0A
    case 0xC4A609: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4D2F0.asm:31 STA @VIRTUAL0A
    case 0xC4A60B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4D2F0.asm:32 LDA [@VIRTUAL0A]
    case 0xC4A60D: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4D2F0.asm:33 AND #$00FF
    case 0xC4A60F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D2F0.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC4A60F.
    case 0xC4A611: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4D2F0.asm:34 STA @VIRTUAL04
    case 0xC4A612: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4D2F0.asm:35 LDA @LOCAL02
    case 0xC4A614: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4D2F0.asm:36 INC
    case 0xC4A616: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:37 INC
    case 0xC4A617: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4D2F0.asm:38 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4A618: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4D2F0.asm:38 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4A61A: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4D2F0.asm:38 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4A61C: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4D2F0.asm:38 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4A61E: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4D2F0.asm:39 CLC
    case 0xC4A620: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:40 ADC @VIRTUAL0A
    case 0xC4A621: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4D2F0.asm:41 STA @VIRTUAL0A
    case 0xC4A623: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4D2F0.asm:42 LDA [@VIRTUAL0A]
    case 0xC4A625: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4D2F0.asm:43 AND #$00FF
    case 0xC4A627: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D2F0.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC4A627.
    case 0xC4A629: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4D2F0.asm:44 STA @VIRTUAL02
    case 0xC4A62A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4D2F0.asm:45 LDA @LOCAL02
    case 0xC4A62C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4D2F0.asm:46 CLC
    case 0xC4A62E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:47 ADC @VIRTUAL06
    case 0xC4A62F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4D2F0.asm:48 STA @VIRTUAL06
    case 0xC4A631: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4D2F0.asm:49 LDA [@VIRTUAL06]
    case 0xC4A633: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4D2F0.asm:50 AND #$00FF
    case 0xC4A635: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D2F0.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC4A635.
    case 0xC4A637: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C4/C4D2F0.asm:51 AND #$0070
    case 0xC4A638: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000070, 2); else cpu.execute_instruction<0x29>(0x000070, 3); return true;
    // src/unknown/C4/C4D2F0.asm:51 AND #$0070
    // Overlapping static entry reached from 0xC4A638.
    case 0xC4A63A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4D2F0.asm:52 BEQL @UNKNOWN5
    case 0xC4A63B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4D2F0.asm:52 BEQL @UNKNOWN5
    case 0xC4A63D: cpu.execute_instruction<0x4C>(0x00A6C8, 3); return true;
    // src/unknown/C4/C4D2F0.asm:53 CMP #1 << 4
    case 0xC4A640: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/unknown/C4/C4D2F0.asm:53 CMP #1 << 4
    // Overlapping static entry reached from 0xC4A640.
    case 0xC4A642: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D2F0.asm:54 BEQ @UNKNOWN1
    case 0xC4A643: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C4/C4D2F0.asm:55 CMP #2 << 4
    case 0xC4A645: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C4/C4D2F0.asm:55 CMP #2 << 4
    // Overlapping static entry reached from 0xC4A645.
    case 0xC4A647: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D2F0.asm:56 BEQ @UNKNOWN2
    case 0xC4A648: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/unknown/C4/C4D2F0.asm:57 CMP #4 << 4
    case 0xC4A64A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/unknown/C4/C4D2F0.asm:57 CMP #4 << 4
    // Overlapping static entry reached from 0xC4A64A.
    case 0xC4A64C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D2F0.asm:58 BEQ @UNKNOWN3
    case 0xC4A64D: cpu.execute_instruction<0xF0>(0x000041, 2); return true;
    // src/unknown/C4/C4D2F0.asm:59 CMP #3 << 4
    case 0xC4A64F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000030, 2); else cpu.execute_instruction<0xC9>(0x000030, 3); return true;
    // src/unknown/C4/C4D2F0.asm:59 CMP #3 << 4
    // Overlapping static entry reached from 0xC4A64F.
    case 0xC4A651: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D2F0.asm:60 BEQ @UNKNOWN4
    case 0xC4A652: cpu.execute_instruction<0xF0>(0x000059, 2); return true;
    // src/unknown/C4/C4D2F0.asm:61 BRA @UNKNOWN5
    case 0xC4A654: cpu.execute_instruction<0x80>(0x000072, 2); return true;
    // src/unknown/C4/C4D2F0.asm:63 LDA @VIRTUAL02
    case 0xC4A656: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4D2F0.asm:64 SEC
    case 0xC4A658: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:65 SBC #8
    case 0xC4A659: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/unknown/C4/C4D2F0.asm:65 SBC #8
    // Overlapping static entry reached from 0xC4A659.
    case 0xC4A65B: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C4D2F0.asm:66 TAY
    case 0xC4A65C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:67 LDX @VIRTUAL04
    case 0xC4A65D: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4D2F0.asm:68 STX @LOCAL01
    case 0xC4A65F: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C4D2F0.asm:69 LDA f:TOWN_MAP_MAPPING+4
    case 0xC4A661: cpu.execute_instruction<0xAF>(0xEFBE26, 4); return true;
    // src/unknown/C4/C4D2F0.asm:70 ASL
    case 0xC4A665: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:71 TAX
    case 0xC4A666: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:72 LDA f:UNKNOWN_E1F44C,X
    case 0xC4A667: cpu.execute_instruction<0xBF>(0xE1E159, 4); return true;
    // src/unknown/C4/C4D2F0.asm:73 LDX @LOCAL01
    case 0xC4A66B: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C4D2F0.asm:74 JSL REDIRECT_C08C58
    case 0xC4A66D: cpu.execute_instruction<0x22>(0xC08C45, 4); return true;
    // src/unknown/C4/C4D2F0.asm:75 BRA @UNKNOWN5
    case 0xC4A671: cpu.execute_instruction<0x80>(0x000055, 2); return true;
    // src/unknown/C4/C4D2F0.asm:77 LDA @VIRTUAL02
    case 0xC4A673: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4D2F0.asm:78 CLC
    case 0xC4A675: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:79 ADC #8
    case 0xC4A676: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C4/C4D2F0.asm:79 ADC #8
    // Overlapping static entry reached from 0xC4A676.
    case 0xC4A678: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C4D2F0.asm:80 TAY
    case 0xC4A679: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:81 LDX @VIRTUAL04
    case 0xC4A67A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4D2F0.asm:82 STX @LOCAL01
    case 0xC4A67C: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C4D2F0.asm:83 LDA f:TOWN_MAP_MAPPING+6
    case 0xC4A67E: cpu.execute_instruction<0xAF>(0xEFBE28, 4); return true;
    // src/unknown/C4/C4D2F0.asm:84 ASL
    case 0xC4A682: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:85 TAX
    case 0xC4A683: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:86 LDA f:UNKNOWN_E1F44C,X
    case 0xC4A684: cpu.execute_instruction<0xBF>(0xE1E159, 4); return true;
    // src/unknown/C4/C4D2F0.asm:87 LDX @LOCAL01
    case 0xC4A688: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C4D2F0.asm:88 JSL REDIRECT_C08C58
    case 0xC4A68A: cpu.execute_instruction<0x22>(0xC08C45, 4); return true;
    // src/unknown/C4/C4D2F0.asm:89 BRA @UNKNOWN5
    case 0xC4A68E: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/unknown/C4/C4D2F0.asm:91 LDY @VIRTUAL02
    case 0xC4A690: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C4/C4D2F0.asm:92 LDA @VIRTUAL04
    case 0xC4A692: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4D2F0.asm:93 SEC
    case 0xC4A694: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:94 SBC #8
    case 0xC4A695: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/unknown/C4/C4D2F0.asm:94 SBC #8
    // Overlapping static entry reached from 0xC4A695.
    case 0xC4A697: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4D2F0.asm:95 TAX
    case 0xC4A698: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:96 STX @LOCAL02
    case 0xC4A699: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C4D2F0.asm:97 LDA f:TOWN_MAP_MAPPING+8
    case 0xC4A69B: cpu.execute_instruction<0xAF>(0xEFBE2A, 4); return true;
    // src/unknown/C4/C4D2F0.asm:98 ASL
    case 0xC4A69F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:99 TAX
    case 0xC4A6A0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:100 LDA f:UNKNOWN_E1F44C,X
    case 0xC4A6A1: cpu.execute_instruction<0xBF>(0xE1E159, 4); return true;
    // src/unknown/C4/C4D2F0.asm:101 LDX @LOCAL02
    case 0xC4A6A5: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C4D2F0.asm:102 JSL REDIRECT_C08C58
    case 0xC4A6A7: cpu.execute_instruction<0x22>(0xC08C45, 4); return true;
    // src/unknown/C4/C4D2F0.asm:103 BRA @UNKNOWN5
    case 0xC4A6AB: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C4/C4D2F0.asm:105 LDY @VIRTUAL02
    case 0xC4A6AD: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C4/C4D2F0.asm:106 LDA @VIRTUAL04
    case 0xC4A6AF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4D2F0.asm:107 CLC
    case 0xC4A6B1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:108 ADC #16
    case 0xC4A6B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C4D2F0.asm:108 ADC #16
    // Overlapping static entry reached from 0xC4A6B2.
    case 0xC4A6B4: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4D2F0.asm:109 TAX
    case 0xC4A6B5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:110 STX @LOCAL00
    case 0xC4A6B6: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4D2F0.asm:111 LDA f:TOWN_MAP_MAPPING+10
    case 0xC4A6B8: cpu.execute_instruction<0xAF>(0xEFBE2C, 4); return true;
    // src/unknown/C4/C4D2F0.asm:112 ASL
    case 0xC4A6BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:113 TAX
    case 0xC4A6BD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:114 LDA f:UNKNOWN_E1F44C,X
    case 0xC4A6BE: cpu.execute_instruction<0xBF>(0xE1E159, 4); return true;
    // src/unknown/C4/C4D2F0.asm:115 LDX @LOCAL00
    case 0xC4A6C2: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C4D2F0.asm:116 JSL REDIRECT_C08C58
    case 0xC4A6C4: cpu.execute_instruction<0x22>(0xC08C45, 4); return true;
    // src/unknown/C4/C4D2F0.asm:118 LDA TOWN_MAP_PLAYER_ICON_ANIMATION_FRAME
    case 0xC4A6C8: cpu.execute_instruction<0xAD>(0x00B684, 3); return true;
    // src/unknown/C4/C4D2F0.asm:119 CMP #10
    case 0xC4A6CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/unknown/C4/C4D2F0.asm:119 CMP #10
    // Overlapping static entry reached from 0xC4A6CB.
    case 0xC4A6CD: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C4/C4D2F0.asm:120 BCS @UNKNOWN6
    case 0xC4A6CE: cpu.execute_instruction<0xB0>(0x000018, 2); return true;
    // src/unknown/C4/C4D2F0.asm:121 LDY @VIRTUAL02
    case 0xC4A6D0: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C4/C4D2F0.asm:122 LDX @VIRTUAL04
    case 0xC4A6D2: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4D2F0.asm:123 STX @LOCAL01
    case 0xC4A6D4: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C4D2F0.asm:124 LDA f:TOWN_MAP_MAPPING+2
    case 0xC4A6D6: cpu.execute_instruction<0xAF>(0xEFBE24, 4); return true;
    // src/unknown/C4/C4D2F0.asm:125 ASL
    case 0xC4A6DA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:126 TAX
    case 0xC4A6DB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:127 LDA f:UNKNOWN_E1F44C,X
    case 0xC4A6DC: cpu.execute_instruction<0xBF>(0xE1E159, 4); return true;
    // src/unknown/C4/C4D2F0.asm:128 LDX @LOCAL01
    case 0xC4A6E0: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C4D2F0.asm:129 JSL REDIRECT_C08C58
    case 0xC4A6E2: cpu.execute_instruction<0x22>(0xC08C45, 4); return true;
    // src/unknown/C4/C4D2F0.asm:130 BRA @UNKNOWN7
    case 0xC4A6E6: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C4/C4D2F0.asm:132 LDY @VIRTUAL02
    case 0xC4A6E8: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C4/C4D2F0.asm:133 LDX @VIRTUAL04
    case 0xC4A6EA: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4D2F0.asm:134 STX @LOCAL01
    case 0xC4A6EC: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C4D2F0.asm:135 LDA f:TOWN_MAP_MAPPING
    case 0xC4A6EE: cpu.execute_instruction<0xAF>(0xEFBE22, 4); return true;
    // src/unknown/C4/C4D2F0.asm:136 ASL
    case 0xC4A6F2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:137 TAX
    case 0xC4A6F3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:138 LDA f:UNKNOWN_E1F44C,X
    case 0xC4A6F4: cpu.execute_instruction<0xBF>(0xE1E159, 4); return true;
    // src/unknown/C4/C4D2F0.asm:139 LDX @LOCAL01
    case 0xC4A6F8: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C4D2F0.asm:140 JSL REDIRECT_C08C58
    case 0xC4A6FA: cpu.execute_instruction<0x22>(0xC08C45, 4); return true;
    // src/unknown/C4/C4D2F0.asm:142 LDX TOWN_MAP_PLAYER_ICON_ANIMATION_FRAME
    case 0xC4A6FE: cpu.execute_instruction<0xAE>(0x00B684, 3); return true;
    // src/unknown/C4/C4D2F0.asm:143 DEX
    case 0xC4A701: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:144 STX TOWN_MAP_PLAYER_ICON_ANIMATION_FRAME
    case 0xC4A702: cpu.execute_instruction<0x8E>(0x00B684, 3); return true;
    // src/unknown/C4/C4D2F0.asm:145 BNE @UNKNOWN8
    case 0xC4A705: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C4/C4D2F0.asm:146 LDA #20
    case 0xC4A707: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C4/C4D2F0.asm:146 LDA #20
    // Overlapping static entry reached from 0xC4A707.
    case 0xC4A709: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4D2F0.asm:147 STA TOWN_MAP_PLAYER_ICON_ANIMATION_FRAME
    case 0xC4A70A: cpu.execute_instruction<0x8D>(0x00B684, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4D2F0.asm:149 END_C_FUNCTION
    case 0xC4A70D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4D2F0.asm:149 END_C_FUNCTION
    case 0xC4A70E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4D43F.asm (unresolved).
bool execute_unresolved_c4_c4d43f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4D43F.asm:3 BEGIN_C_FUNCTION
    case 0xC4A70F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4D43F.asm:10 END_STACK_VARS
    case 0xC4A711: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4D43F.asm:10 END_STACK_VARS
    case 0xC4A712: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4D43F.asm:10 END_STACK_VARS
    case 0xC4A713: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D43F.asm:10 END_STACK_VARS
    case 0xC4A714: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D43F.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC4A714.
    case 0xC4A716: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4D43F.asm:10 END_STACK_VARS
    case 0xC4A717: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4D43F.asm:10 END_STACK_VARS
    case 0xC4A718: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:11 TAX
    case 0xC4A719: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:12 STX @LOCAL03
    case 0xC4A71A: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C4/C4D43F.asm:13 STZ CURRENT_SPRITE_DRAWING_PRIORITY
    case 0xC4A71C: cpu.execute_instruction<0x9C>(0x002800, 3); return true;
    // src/unknown/C4/C4D43F.asm:13 STZ CURRENT_SPRITE_DRAWING_PRIORITY
    // Overlapping static entry reached from 0xC4A78B.
    case 0xC4A71D: cpu.execute_instruction<0x00>(0x000028, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D43F.asm:14 LOADPTR UNKNOWN_E1F44C, @LOCAL00
    case 0xC4A71F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000059, 2); else cpu.execute_instruction<0xA9>(0x00E159, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D43F.asm:14 LOADPTR UNKNOWN_E1F44C, @LOCAL00
    // Overlapping static entry reached from 0xC4A71F.
    case 0xC4A721: cpu.execute_instruction<0xE1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4D43F.asm:14 LOADPTR UNKNOWN_E1F44C, @LOCAL00
    case 0xC4A722: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4D43F.asm:14 LOADPTR UNKNOWN_E1F44C, @LOCAL00
    // Overlapping static entry reached from 0xC4A721.
    case 0xC4A723: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D43F.asm:14 LOADPTR UNKNOWN_E1F44C, @LOCAL00
    case 0xC4A724: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D43F.asm:14 LOADPTR UNKNOWN_E1F44C, @LOCAL00
    // Overlapping static entry reached from 0xC4A724.
    case 0xC4A726: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4D43F.asm:14 LOADPTR UNKNOWN_E1F44C, @LOCAL00
    case 0xC4A727: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D43F.asm:15 JSL UNKNOWN_C088A5
    case 0xC4A729: cpu.execute_instruction<0x22>(0xC08897, 4); return true;
    // src/unknown/C4/C4D43F.asm:16 REP #PROC_FLAGS::ACCUM8
    case 0xC4A72D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D43F.asm:17 AND #$00FF
    case 0xC4A72F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D43F.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC4A72F.
    case 0xC4A731: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4D43F.asm:18 STA @VIRTUAL02
    case 0xC4A732: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D43F.asm:19 LOADPTR TOWN_MAP_ICON_PLACEMENT_PTR_TABLE, @VIRTUAL0A
    case 0xC4A734: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009E, 2); else cpu.execute_instruction<0xA9>(0x00E19E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D43F.asm:19 LOADPTR TOWN_MAP_ICON_PLACEMENT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4A734.
    case 0xC4A736: cpu.execute_instruction<0xE1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4D43F.asm:19 LOADPTR TOWN_MAP_ICON_PLACEMENT_PTR_TABLE, @VIRTUAL0A
    case 0xC4A737: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4D43F.asm:19 LOADPTR TOWN_MAP_ICON_PLACEMENT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4A736.
    case 0xC4A738: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D43F.asm:19 LOADPTR TOWN_MAP_ICON_PLACEMENT_PTR_TABLE, @VIRTUAL0A
    case 0xC4A739: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D43F.asm:19 LOADPTR TOWN_MAP_ICON_PLACEMENT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4A739.
    case 0xC4A73B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4D43F.asm:19 LOADPTR TOWN_MAP_ICON_PLACEMENT_PTR_TABLE, @VIRTUAL0A
    case 0xC4A73C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4D43F.asm:20 LDX @LOCAL03
    case 0xC4A73E: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C4/C4D43F.asm:21 TXA
    case 0xC4A740: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:22 ASL
    case 0xC4A741: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:23 ASL
    case 0xC4A742: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:24 CLC
    case 0xC4A743: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:25 ADC @VIRTUAL0A
    case 0xC4A744: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4D43F.asm:26 STA @VIRTUAL0A
    case 0xC4A746: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4D43F.asm:27 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A748: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4D43F.asm:27 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A748.
    case 0xC4A74A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4D43F.asm:27 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A74B: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4D43F.asm:27 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A74D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4D43F.asm:27 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A74E: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4D43F.asm:27 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A750: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4D43F.asm:27 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A752: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C4D43F.asm:28 JMP @UNKNOWN5
    case 0xC4A754: cpu.execute_instruction<0x4C>(0x00A7F1, 3); return true;
    // src/unknown/C4/C4D43F.asm:30 LDY #1
    case 0xC4A757: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4D43F.asm:30 LDY #1
    // Overlapping static entry reached from 0xC4A757.
    case 0xC4A759: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4D43F.asm:31 STY @LOCAL02
    case 0xC4A75A: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C4/C4D43F.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A75C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D43F.asm:33 LDY #2
    case 0xC4A75E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C4/C4D43F.asm:33 LDY #2
    // Overlapping static entry reached from 0xC4A75E.
    case 0xC4A760: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4D43F.asm:34 LDA [@VIRTUAL06],Y
    case 0xC4A761: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4D43F.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC4A763: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D43F.asm:36 AND #$00FF
    case 0xC4A765: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D43F.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC4A765.
    case 0xC4A767: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4D43F.asm:37 TAX
    case 0xC4A768: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:38 LDA f:UNKNOWN_E1F47A,X
    case 0xC4A769: cpu.execute_instruction<0xBF>(0xE1E187, 4); return true;
    // src/unknown/C4/C4D43F.asm:39 AND #$00FF
    case 0xC4A76D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D43F.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC4A76D.
    case 0xC4A76F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D43F.asm:40 BEQ @UNKNOWN1
    case 0xC4A770: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/unknown/C4/C4D43F.asm:41 LDA TOWN_MAP_ANIMATION_FRAME
    case 0xC4A772: cpu.execute_instruction<0xAD>(0x00B682, 3); return true;
    // src/unknown/C4/C4D43F.asm:42 CMP #10
    case 0xC4A775: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/unknown/C4/C4D43F.asm:42 CMP #10
    // Overlapping static entry reached from 0xC4A775.
    case 0xC4A777: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C4/C4D43F.asm:43 BCS @UNKNOWN1
    case 0xC4A778: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C4/C4D43F.asm:44 LDY #0
    case 0xC4A77A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4D43F.asm:44 LDY #0
    // Overlapping static entry reached from 0xC4A77A.
    case 0xC4A77C: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4D43F.asm:45 STY @LOCAL02
    case 0xC4A77D: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C4/C4D43F.asm:47 LDX #0
    case 0xC4A77F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4D43F.asm:47 LDX #0
    // Overlapping static entry reached from 0xC4A77F.
    case 0xC4A781: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4D43F.asm:48 STX @LOCAL01
    case 0xC4A782: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C4D43F.asm:49 LDY #3
    case 0xC4A784: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C4/C4D43F.asm:49 LDY #3
    // Overlapping static entry reached from 0xC4A784.
    case 0xC4A786: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4D43F.asm:50 LDA [@VIRTUAL06],Y
    case 0xC4A787: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4D43F.asm:51 CMP #$8000
    case 0xC4A789: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C4/C4D43F.asm:51 CMP #$8000
    // Overlapping static entry reached from 0xC4A789.
    case 0xC4A78B: cpu.execute_instruction<0x80>(0x000090, 2); return true;
    // src/unknown/C4/C4D43F.asm:52 BCC @UNKNOWN2
    case 0xC4A78C: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/unknown/C4/C4D43F.asm:53 LDX #1
    case 0xC4A78E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C4D43F.asm:53 LDX #1
    // Overlapping static entry reached from 0xC4A78E.
    case 0xC4A790: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4D43F.asm:54 STX @LOCAL01
    case 0xC4A791: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C4D43F.asm:56 LDY #3
    case 0xC4A793: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C4/C4D43F.asm:56 LDY #3
    // Overlapping static entry reached from 0xC4A793.
    case 0xC4A795: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4D43F.asm:57 LDA [@VIRTUAL06],Y
    case 0xC4A796: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4D43F.asm:58 AND #$7FFF
    case 0xC4A798: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C4/C4D43F.asm:58 AND #$7FFF
    // Overlapping static entry reached from 0xC4A798.
    case 0xC4A79A: cpu.execute_instruction<0x7F>(0x14D022, 4); return true;
    // src/unknown/C4/C4D43F.asm:59 JSL GET_EVENT_FLAG
    case 0xC4A79B: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/unknown/C4/C4D43F.asm:59 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC4A79A.
    case 0xC4A79E: cpu.execute_instruction<0xC2>(0x0000A6, 2); return true;
    // src/unknown/C4/C4D43F.asm:60 LDX @LOCAL01
    case 0xC4A79F: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C4D43F.asm:60 LDX @LOCAL01
    // Overlapping static entry reached from 0xC4A79E.
    case 0xC4A7A0: cpu.execute_instruction<0x12>(0x000086, 2); return true;
    // src/unknown/C4/C4D43F.asm:61 STX @VIRTUAL04
    case 0xC4A7A1: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C4/C4D43F.asm:61 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC4A7A0.
    case 0xC4A7A2: cpu.execute_instruction<0x04>(0x0000C5, 2); return true;
    // src/unknown/C4/C4D43F.asm:62 CMP @VIRTUAL04
    case 0xC4A7A3: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C4/C4D43F.asm:62 CMP @VIRTUAL04
    // Overlapping static entry reached from 0xC4A7A2.
    case 0xC4A7A4: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D43F.asm:63 BEQ @UNKNOWN3
    case 0xC4A7A5: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4D43F.asm:63 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC4A7A4.
    case 0xC4A7A6: cpu.execute_instruction<0x05>(0x0000A0, 2); return true;
    // src/unknown/C4/C4D43F.asm:64 LDY #0
    case 0xC4A7A7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4D43F.asm:64 LDY #0
    // Overlapping static entry reached from 0xC4A7A6.
    case 0xC4A7A8: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D43F.asm:64 LDY #0
    // Overlapping static entry reached from 0xC4A7A7.
    case 0xC4A7A9: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4D43F.asm:65 STY @LOCAL02
    case 0xC4A7AA: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C4/C4D43F.asm:67 LDY @LOCAL02
    case 0xC4A7AC: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C4/C4D43F.asm:68 BEQ @UNKNOWN4
    case 0xC4A7AE: cpu.execute_instruction<0xF0>(0x000039, 2); return true;
    // src/unknown/C4/C4D43F.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A7B0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D43F.asm:70 LDY #1
    case 0xC4A7B2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4D43F.asm:70 LDY #1
    // Overlapping static entry reached from 0xC4A7B2.
    case 0xC4A7B4: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4D43F.asm:71 LDA [@VIRTUAL06],Y
    case 0xC4A7B5: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4D43F.asm:72 REP #PROC_FLAGS::ACCUM8
    case 0xC4A7B7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D43F.asm:73 AND #$00FF
    case 0xC4A7B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D43F.asm:73 AND #$00FF
    // Overlapping static entry reached from 0xC4A7B9.
    case 0xC4A7BB: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C4D43F.asm:74 TAY
    case 0xC4A7BC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:75 STY @LOCAL03
    case 0xC4A7BD: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4D43F.asm:76 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4A7BF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4D43F.asm:76 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4A7C1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4D43F.asm:76 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4A7C3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4D43F.asm:76 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4A7C5: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4D43F.asm:77 LDA [@VIRTUAL0A]
    case 0xC4A7C7: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4D43F.asm:78 AND #$00FF
    case 0xC4A7C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D43F.asm:78 AND #$00FF
    // Overlapping static entry reached from 0xC4A7C9.
    case 0xC4A7CB: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4D43F.asm:79 TAX
    case 0xC4A7CC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:80 STX @LOCAL01
    case 0xC4A7CD: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C4D43F.asm:81 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A7CF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D43F.asm:82 LDY #2
    case 0xC4A7D1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C4/C4D43F.asm:82 LDY #2
    // Overlapping static entry reached from 0xC4A7D1.
    case 0xC4A7D3: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4D43F.asm:83 LDA [@VIRTUAL06],Y
    case 0xC4A7D4: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4D43F.asm:84 REP #PROC_FLAGS::ACCUM8
    case 0xC4A7D6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D43F.asm:85 AND #$00FF
    case 0xC4A7D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D43F.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC4A7D8.
    case 0xC4A7DA: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4D43F.asm:86 ASL
    case 0xC4A7DB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:87 TAX
    case 0xC4A7DC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:88 LDA f:UNKNOWN_E1F44C,X
    case 0xC4A7DD: cpu.execute_instruction<0xBF>(0xE1E159, 4); return true;
    // src/unknown/C4/C4D43F.asm:89 LDY @LOCAL03
    case 0xC4A7E1: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C4D43F.asm:90 LDX @LOCAL01
    case 0xC4A7E3: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C4D43F.asm:91 JSL REDIRECT_C08C58
    case 0xC4A7E5: cpu.execute_instruction<0x22>(0xC08C45, 4); return true;
    // src/unknown/C4/C4D43F.asm:93 LDA #5
    case 0xC4A7E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C4/C4D43F.asm:93 LDA #5
    // Overlapping static entry reached from 0xC4A7E9.
    case 0xC4A7EB: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4D43F.asm:94 CLC
    case 0xC4A7EC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:95 ADC @VIRTUAL06
    case 0xC4A7ED: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4D43F.asm:96 STA @VIRTUAL06
    case 0xC4A7EF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4D43F.asm:98 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4A7F1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4D43F.asm:98 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4A7F3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4D43F.asm:98 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4A7F5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4D43F.asm:98 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4A7F7: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4D43F.asm:99 LDA [@VIRTUAL0A]
    case 0xC4A7F9: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4D43F.asm:100 AND #$00FF
    case 0xC4A7FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D43F.asm:100 AND #$00FF
    // Overlapping static entry reached from 0xC4A7FB.
    case 0xC4A7FD: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C4/C4D43F.asm:101 CMP #<-1
    case 0xC4A7FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D43F.asm:101 CMP #<-1
    // Overlapping static entry reached from 0xC4A7FE.
    case 0xC4A800: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C4D43F.asm:102 BNEL @UNKNOWN0
    case 0xC4A801: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C4D43F.asm:102 BNEL @UNKNOWN0
    case 0xC4A803: cpu.execute_instruction<0x4C>(0x00A757, 3); return true;
    // src/unknown/C4/C4D43F.asm:103 JSR UNKNOWN_C4D2F0
    case 0xC4A806: cpu.execute_instruction<0x20>(0x00A5C0, 3); return true;
    // src/unknown/C4/C4D43F.asm:104 LDX TOWN_MAP_ANIMATION_FRAME
    case 0xC4A809: cpu.execute_instruction<0xAE>(0x00B682, 3); return true;
    // src/unknown/C4/C4D43F.asm:105 DEX
    case 0xC4A80C: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:106 STX TOWN_MAP_ANIMATION_FRAME
    case 0xC4A80D: cpu.execute_instruction<0x8E>(0x00B682, 3); return true;
    // src/unknown/C4/C4D43F.asm:107 BNE @UNKNOWN7
    case 0xC4A810: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C4/C4D43F.asm:108 LDA #60
    case 0xC4A812: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/unknown/C4/C4D43F.asm:108 LDA #60
    // Overlapping static entry reached from 0xC4A812.
    case 0xC4A814: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4D43F.asm:109 STA TOWN_MAP_ANIMATION_FRAME
    case 0xC4A815: cpu.execute_instruction<0x8D>(0x00B682, 3); return true;
    // src/unknown/C4/C4D43F.asm:111 LDA @VIRTUAL02
    case 0xC4A818: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4D43F.asm:112 JSL UNKNOWN_C088A5
    case 0xC4A81A: cpu.execute_instruction<0x22>(0xC08897, 4); return true;
    // src/unknown/C4/C4D43F.asm:113 JSR UNKNOWN_C4D2A8
    case 0xC4A81E: cpu.execute_instruction<0x20>(0x00A578, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4D43F.asm:114 END_C_FUNCTION
    case 0xC4A821: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4D43F.asm:114 END_C_FUNCTION
    case 0xC4A822: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4D744.asm (unresolved).
bool execute_unresolved_c4_c4d744_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4D744.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4AA14: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4D744.asm:7 END_STACK_VARS
    case 0xC4AA16: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4D744.asm:7 END_STACK_VARS
    case 0xC4AA17: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D744.asm:7 END_STACK_VARS
    case 0xC4AA18: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D744.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4AA18.
    case 0xC4AA1A: cpu.execute_instruction<0xFF>(0x00A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4D744.asm:7 END_STACK_VARS
    case 0xC4AA1B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4D744.asm:8 LDX #0
    case 0xC4AA1C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4D744.asm:8 LDX #0
    // Overlapping static entry reached from 0xC4AA1C.
    case 0xC4AA1E: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4D744.asm:9 STX @LOCAL01
    case 0xC4AA1F: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C4D744.asm:10 TXY
    case 0xC4AA21: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C4D744.asm:11 STY @LOCAL00
    case 0xC4AA22: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4D744.asm:12 LDA #60
    case 0xC4AA24: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/unknown/C4/C4D744.asm:12 LDA #60
    // Overlapping static entry reached from 0xC4AA24.
    case 0xC4AA26: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4D744.asm:13 STA TOWN_MAP_ANIMATION_FRAME
    case 0xC4AA27: cpu.execute_instruction<0x8D>(0x00B682, 3); return true;
    // src/unknown/C4/C4D744.asm:14 LDA #20
    case 0xC4AA2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C4/C4D744.asm:14 LDA #20
    // Overlapping static entry reached from 0xC4AA2A.
    case 0xC4AA2C: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4D744.asm:15 STA TOWN_MAP_PLAYER_ICON_ANIMATION_FRAME
    case 0xC4AA2D: cpu.execute_instruction<0x8D>(0x00B684, 3); return true;
    // src/unknown/C4/C4D744.asm:16 LDA #12
    case 0xC4AA30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C4/C4D744.asm:16 LDA #12
    // Overlapping static entry reached from 0xC4AA30.
    case 0xC4AA32: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4D744.asm:17 STA FRAMES_UNTIL_MAP_ICON_PALETTE_UPDATE
    case 0xC4AA33: cpu.execute_instruction<0x8D>(0x00B686, 3); return true;
    // src/unknown/C4/C4D744.asm:18 TXA
    case 0xC4AA36: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4D744.asm:19 JSR LOAD_TOWN_MAP_DATA
    case 0xC4AA37: cpu.execute_instruction<0x20>(0x00A823, 3); return true;
    // src/unknown/C4/C4D744.asm:21 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4AA3A: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/C4/C4D744.asm:22 JSL OAM_CLEAR
    case 0xC4AA3E: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/unknown/C4/C4D744.asm:23 LDA PAD_PRESS
    case 0xC4AA42: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C4/C4D744.asm:24 AND #PAD::UP
    case 0xC4AA45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/unknown/C4/C4D744.asm:24 AND #PAD::UP
    // Overlapping static entry reached from 0xC4AA45.
    case 0xC4AA47: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C4D744.asm:25 BEQ @UNKNOWN1
    case 0xC4AA48: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4D744.asm:26 LDX @LOCAL01
    case 0xC4AA4A: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C4D744.asm:27 DEX
    case 0xC4AA4C: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C4D744.asm:28 STX @LOCAL01
    case 0xC4AA4D: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C4D744.asm:30 LDA PAD_PRESS
    case 0xC4AA4F: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C4/C4D744.asm:31 AND #PAD::DOWN
    case 0xC4AA52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/unknown/C4/C4D744.asm:31 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC4AA52.
    case 0xC4AA54: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D744.asm:32 BEQ @UNKNOWN2
    case 0xC4AA55: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4D744.asm:32 BEQ @UNKNOWN2
    // Overlapping static entry reached from 0xC4AA54.
    case 0xC4AA56: cpu.execute_instruction<0x05>(0x0000A6, 2); return true;
    // src/unknown/C4/C4D744.asm:33 LDX @LOCAL01
    case 0xC4AA57: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C4D744.asm:33 LDX @LOCAL01
    // Overlapping static entry reached from 0xC4AA56.
    case 0xC4AA58: cpu.execute_instruction<0x10>(0x0000E8, 2); return true;
    // src/unknown/C4/C4D744.asm:34 INX
    case 0xC4AA59: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4D744.asm:35 STX @LOCAL01
    case 0xC4AA5A: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C4D744.asm:37 LDX @LOCAL01
    case 0xC4AA5C: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C4D744.asm:38 CPX #.LOWORD(-1)
    case 0xC4AA5E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4D744.asm:38 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4AA5E.
    case 0xC4AA60: cpu.execute_instruction<0xFF>(0xA205D0, 4); return true;
    // src/unknown/C4/C4D744.asm:39 BNE @UNKNOWN3
    case 0xC4AA61: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C4D744.asm:40 LDX #5
    case 0xC4AA63: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/unknown/C4/C4D744.asm:40 LDX #5
    // Overlapping static entry reached from 0xC4AA60.
    case 0xC4AA64: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/unknown/C4/C4D744.asm:40 LDX #5
    // Overlapping static entry reached from 0xC4AA63.
    case 0xC4AA65: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4D744.asm:41 STX @LOCAL01
    case 0xC4AA66: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C4D744.asm:43 CPX #6
    case 0xC4AA68: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000006, 2); else cpu.execute_instruction<0xE0>(0x000006, 3); return true;
    // src/unknown/C4/C4D744.asm:43 CPX #6
    // Overlapping static entry reached from 0xC4AA68.
    case 0xC4AA6A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D744.asm:44 BNE @UNKNOWN4
    case 0xC4AA6B: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C4D744.asm:45 LDX #0
    case 0xC4AA6D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4D744.asm:45 LDX #0
    // Overlapping static entry reached from 0xC4AA6D.
    case 0xC4AA6F: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4D744.asm:46 STX @LOCAL01
    case 0xC4AA70: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C4D744.asm:48 STX @VIRTUAL02
    case 0xC4AA72: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4D744.asm:49 LDY @LOCAL00
    case 0xC4AA74: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C4D744.asm:50 TYA
    case 0xC4AA76: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4D744.asm:51 CMP @VIRTUAL02
    case 0xC4AA77: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4D744.asm:52 BEQ @UNKNOWN5
    case 0xC4AA79: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C4/C4D744.asm:53 TXA
    case 0xC4AA7B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4D744.asm:54 JSR LOAD_TOWN_MAP_DATA
    case 0xC4AA7C: cpu.execute_instruction<0x20>(0x00A823, 3); return true;
    // src/unknown/C4/C4D744.asm:55 LDX @LOCAL01
    case 0xC4AA7F: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C4D744.asm:56 TXY
    case 0xC4AA81: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C4D744.asm:57 STY @LOCAL00
    case 0xC4AA82: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4D744.asm:59 TXA
    case 0xC4AA84: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4D744.asm:60 JSR UNKNOWN_C4D43F
    case 0xC4AA85: cpu.execute_instruction<0x20>(0x00A70F, 3); return true;
    // src/unknown/C4/C4D744.asm:61 LDA PAD_PRESS
    case 0xC4AA88: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C4/C4D744.asm:62 AND #PAD::A_BUTTON
    case 0xC4AA8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/C4/C4D744.asm:62 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xC4AA8B.
    case 0xC4AA8D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D744.asm:63 BNE @UNKNOWN6
    case 0xC4AA8E: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C4/C4D744.asm:64 JSL UPDATE_SCREEN
    case 0xC4AA90: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/unknown/C4/C4D744.asm:65 BRA @UNKNOWN0
    case 0xC4AA94: cpu.execute_instruction<0x80>(0x0000A4, 2); return true;
    // src/unknown/C4/C4D744.asm:67 JSL UNDRAW_FLYOVER_TEXT
    case 0xC4AA96: cpu.execute_instruction<0x22>(0xC45CA2, 4); return true;
    // src/unknown/C4/C4D744.asm:68 JSL RELOAD_MAP
    case 0xC4AA9A: cpu.execute_instruction<0x22>(0xC01909, 4); return true;
    // src/unknown/C4/C4D744.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC4AA9E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D744.asm:70 LDA #$17
    case 0xC4AAA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/unknown/C4/C4D744.asm:71 STA TM_MIRROR
    case 0xC4AAA2: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/C4/C4D744.asm:71 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4AAA0.
    case 0xC4AAA3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D744.asm:71 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4AAA3.
    case 0xC4AAA4: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C4D744.asm:72 REP #PROC_FLAGS::ACCUM8
    case 0xC4AAA5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4D744.asm:73 END_C_FUNCTION
    case 0xC4AAA7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4D744.asm:73 END_C_FUNCTION
    case 0xC4AAA8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4D830.asm (unresolved).
bool execute_unresolved_c4_c4d830_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4D830.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4AB03: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4D830.asm:9 END_STACK_VARS
    case 0xC4AB05: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4D830.asm:9 END_STACK_VARS
    case 0xC4AB06: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4D830.asm:9 END_STACK_VARS
    case 0xC4AB07: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D830.asm:9 END_STACK_VARS
    case 0xC4AB08: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D830.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4AB08.
    case 0xC4AB0A: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4D830.asm:9 END_STACK_VARS
    case 0xC4AB0B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4D830.asm:9 END_STACK_VARS
    case 0xC4AB0C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:10 STA @LOCAL02
    case 0xC4AB0D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4D830.asm:10 STA @LOCAL02
    // Overlapping static entry reached from 0xC4AB0A.
    case 0xC4AB0E: cpu.execute_instruction<0x14>(0x000080, 2); return true;
    // src/unknown/C4/C4D830.asm:11 BRA @UNKNOWN1
    case 0xC4AB0F: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C4/C4D830.asm:11 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC4AB0E.
    case 0xC4AB10: cpu.execute_instruction<0x04>(0x000022, 2); return true;
    // src/unknown/C4/C4D830.asm:13 JSL UNKNOWN_C1004E
    case 0xC4AB11: cpu.execute_instruction<0x22>(0xC100C4, 4); return true;
    // src/unknown/C4/C4D830.asm:13 JSL UNKNOWN_C1004E
    // Overlapping static entry reached from 0xC4AB10.
    case 0xC4AB12: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // src/unknown/C4/C4D830.asm:13 JSL UNKNOWN_C1004E
    // Overlapping static entry reached from 0xC4AB12.
    case 0xC4AB14: cpu.execute_instruction<0xC1>(0x0000AD, 2); return true;
    // src/unknown/C4/C4D830.asm:15 LDA WAIT_FOR_NAMING_SCREEN_ACTIONSCRIPT
    case 0xC4AB15: cpu.execute_instruction<0xAD>(0x00B688, 3); return true;
    // src/unknown/C4/C4D830.asm:15 LDA WAIT_FOR_NAMING_SCREEN_ACTIONSCRIPT
    // Overlapping static entry reached from 0xC4AB14.
    case 0xC4AB16: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:15 LDA WAIT_FOR_NAMING_SCREEN_ACTIONSCRIPT
    // Overlapping static entry reached from 0xC4AB16.
    case 0xC4AB17: cpu.execute_instruction<0xB6>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D830.asm:16 BNE @UNKNOWN0
    case 0xC4AB18: cpu.execute_instruction<0xD0>(0x0000F7, 2); return true;
    // src/unknown/C4/C4D830.asm:16 BNE @UNKNOWN0
    // Overlapping static entry reached from 0xC4AB17.
    case 0xC4AB19: cpu.execute_instruction<0xF7>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D830.asm:17 LOADPTR NAMING_SCREEN_ENTITIES + (7*4), @VIRTUAL0A
    case 0xC4AB1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00F87F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D830.asm:17 LOADPTR NAMING_SCREEN_ENTITIES + (7*4), @VIRTUAL0A
    // Overlapping static entry reached from 0xC4AB19.
    case 0xC4AB1B: cpu.execute_instruction<0x7F>(0x0A85F8, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D830.asm:17 LOADPTR NAMING_SCREEN_ENTITIES + (7*4), @VIRTUAL0A
    // Overlapping static entry reached from 0xC4AB1A.
    case 0xC4AB1C: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4D830.asm:17 LOADPTR NAMING_SCREEN_ENTITIES + (7*4), @VIRTUAL0A
    case 0xC4AB1D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D830.asm:17 LOADPTR NAMING_SCREEN_ENTITIES + (7*4), @VIRTUAL0A
    case 0xC4AB1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D830.asm:17 LOADPTR NAMING_SCREEN_ENTITIES + (7*4), @VIRTUAL0A
    // Overlapping static entry reached from 0xC4AB1F.
    case 0xC4AB21: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4D830.asm:17 LOADPTR NAMING_SCREEN_ENTITIES + (7*4), @VIRTUAL0A
    case 0xC4AB22: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4D830.asm:18 LDA @LOCAL02
    case 0xC4AB24: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4D830.asm:19 ASL
    case 0xC4AB26: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:20 ASL
    case 0xC4AB27: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:21 CLC
    case 0xC4AB28: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:22 ADC @VIRTUAL0A
    case 0xC4AB29: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4D830.asm:23 STA @VIRTUAL0A
    case 0xC4AB2B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4D830.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4AB2D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4D830.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AB2D.
    case 0xC4AB2F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4D830.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4AB30: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4D830.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4AB32: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4D830.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4AB33: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4D830.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4AB35: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4D830.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4AB37: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C4D830.asm:25 BRA @UNKNOWN4
    case 0xC4AB39: cpu.execute_instruction<0x80>(0x000061, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4D830.asm:27 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4AB3B: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4D830.asm:27 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4AB3D: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4D830.asm:27 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4AB3F: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4D830.asm:27 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4AB41: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4D830.asm:28 INC @VIRTUAL0A
    case 0xC4AB43: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4D830.asm:29 INC @VIRTUAL0A
    case 0xC4AB45: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4D830.asm:30 JSL UNKNOWN_C46028
    case 0xC4AB47: cpu.execute_instruction<0x22>(0xC43D76, 4); return true;
    // src/unknown/C4/C4D830.asm:31 TAX
    case 0xC4AB4B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:32 CPX #.LOWORD(-1)
    case 0xC4AB4C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4D830.asm:32 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4AB4C.
    case 0xC4AB4E: cpu.execute_instruction<0xFF>(0xA93FF0, 4); return true;
    // src/unknown/C4/C4D830.asm:33 BEQ @UNKNOWN3
    case 0xC4AB4F: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D830.asm:34 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    case 0xC4AB51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00002F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D830.asm:34 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AB4E.
    case 0xC4AB52: cpu.execute_instruction<0x2F>(0x068500, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D830.asm:34 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AB51.
    case 0xC4AB53: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4D830.asm:34 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    case 0xC4AB54: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D830.asm:34 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    case 0xC4AB56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D830.asm:34 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AB56.
    case 0xC4AB58: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4D830.asm:34 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    case 0xC4AB59: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4D830.asm:35 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AB5B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4D830.asm:35 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AB5D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4D830.asm:35 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AB5F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4D830.asm:35 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AB61: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4D830.asm:36 LDA [@VIRTUAL0A]
    case 0xC4AB63: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C4/C4D830.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4AB65: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C4/C4D830.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4AB67: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C4/C4D830.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4AB68: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4D830.asm:38 STA @LOCAL00
    case 0xC4AB6A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4D830.asm:39 INC
    case 0xC4AB6C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:40 INC
    case 0xC4AB6D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:41 CLC
    case 0xC4AB6E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:42 ADC @VIRTUAL06
    case 0xC4AB6F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4D830.asm:43 STA @VIRTUAL06
    case 0xC4AB71: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4D830.asm:44 LDA [@VIRTUAL06]
    case 0xC4AB73: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4D830.asm:45 AND #$00FF
    case 0xC4AB75: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D830.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC4AB75.
    case 0xC4AB77: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C4D830.asm:46 TAY
    case 0xC4AB78: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:47 LDA @LOCAL00
    case 0xC4AB79: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4D830.asm:48 PHA
    case 0xC4AB7B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4D830.asm:49 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4AB7C: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4D830.asm:49 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4AB7E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4D830.asm:49 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4AB80: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4D830.asm:49 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4AB82: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4D830.asm:50 PLA
    case 0xC4AB84: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:51 CLC
    case 0xC4AB85: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:52 ADC @VIRTUAL06
    case 0xC4AB86: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4D830.asm:53 STA @VIRTUAL06
    case 0xC4AB88: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4D830.asm:54 LDA [@VIRTUAL06]
    case 0xC4AB8A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4D830.asm:55 JSL INIT_ENTITY_UNKNOWN1
    case 0xC4AB8C: cpu.execute_instruction<0x22>(0xC093D8, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4D830.asm:57 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4AB90: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4D830.asm:57 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4AB92: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4D830.asm:57 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4AB94: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4D830.asm:57 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4AB96: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4D830.asm:58 INC @VIRTUAL06
    case 0xC4AB98: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4D830.asm:59 INC @VIRTUAL06
    case 0xC4AB9A: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4D830.asm:61 LDA [@VIRTUAL06]
    case 0xC4AB9C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4D830.asm:62 BNE @UNKNOWN2
    case 0xC4AB9E: cpu.execute_instruction<0xD0>(0x00009B, 2); return true;
    // src/unknown/C4/C4D830.asm:64 LDY #.LOWORD(ENTITY_SCRIPT_TABLE)
    case 0xC4ABA0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000058, 2); else cpu.execute_instruction<0xA0>(0x000A58, 3); return true;
    // src/unknown/C4/C4D830.asm:64 LDY #.LOWORD(ENTITY_SCRIPT_TABLE)
    // Overlapping static entry reached from 0xC4ABA0.
    case 0xC4ABA2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:65 LDA #.LOWORD(-1)
    case 0xC4ABA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4D830.asm:65 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4ABA3.
    case 0xC4ABA5: cpu.execute_instruction<0xFF>(0xA20E85, 4); return true;
    // src/unknown/C4/C4D830.asm:66 STA @LOCAL00
    case 0xC4ABA6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4D830.asm:67 LDX #0
    case 0xC4ABA8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4D830.asm:67 LDX #0
    // Overlapping static entry reached from 0xC4ABA5.
    case 0xC4ABA9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D830.asm:67 LDX #0
    // Overlapping static entry reached from 0xC4ABA8.
    case 0xC4ABAA: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4D830.asm:68 BRA @UNKNOWN7
    case 0xC4ABAB: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C4/C4D830.asm:70 LDA __BSS_START__,Y
    case 0xC4ABAD: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C4D830.asm:71 STA @VIRTUAL02
    case 0xC4ABB0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4D830.asm:72 LDA @LOCAL00
    case 0xC4ABB2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4D830.asm:73 AND @VIRTUAL02
    case 0xC4ABB4: cpu.execute_instruction<0x25>(0x000002, 2); return true;
    // src/unknown/C4/C4D830.asm:74 STA @LOCAL00
    case 0xC4ABB6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4D830.asm:75 INY
    case 0xC4ABB8: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:76 INY
    case 0xC4ABB9: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:77 INX
    case 0xC4ABBA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:79 CPX #PARTY_LEADER_ENTITY_INDEX - 1
    case 0xC4ABBB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000017, 2); else cpu.execute_instruction<0xE0>(0x000017, 3); return true;
    // src/unknown/C4/C4D830.asm:79 CPX #PARTY_LEADER_ENTITY_INDEX - 1
    // Overlapping static entry reached from 0xC4ABBB.
    case 0xC4ABBD: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4D830.asm:80 BCC @UNKNOWN6
    case 0xC4ABBE: cpu.execute_instruction<0x90>(0x0000ED, 2); return true;
    // src/unknown/C4/C4D830.asm:81 JSL UNKNOWN_C1004E
    case 0xC4ABC0: cpu.execute_instruction<0x22>(0xC100C4, 4); return true;
    // src/unknown/C4/C4D830.asm:82 LDA @LOCAL00
    case 0xC4ABC4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4D830.asm:83 CMP #.LOWORD(-1)
    case 0xC4ABC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4D830.asm:83 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4ABC6.
    case 0xC4ABC8: cpu.execute_instruction<0xFF>(0x2BD5D0, 4); return true;
    // src/unknown/C4/C4D830.asm:84 BNE @UNKNOWN5
    case 0xC4ABC9: cpu.execute_instruction<0xD0>(0x0000D5, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4D830.asm:85 END_C_FUNCTION
    case 0xC4ABCB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4D830.asm:85 END_C_FUNCTION
    case 0xC4ABCC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4D8FA.asm (unresolved).
bool execute_unresolved_c4_c4d8fa_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4D8FA.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4ABCD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4D8FA.asm:8 END_STACK_VARS
    case 0xC4ABCF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4D8FA.asm:8 END_STACK_VARS
    case 0xC4ABD0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D8FA.asm:8 END_STACK_VARS
    case 0xC4ABD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D8FA.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4ABD1.
    case 0xC4ABD3: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4D8FA.asm:8 END_STACK_VARS
    case 0xC4ABD4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:9 LDA #0
    case 0xC4ABD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4D8FA.asm:9 LDA #0
    // Overlapping static entry reached from 0xC4ABD5.
    case 0xC4ABD7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4D8FA.asm:10 STA @VIRTUAL04
    case 0xC4ABD8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4D8FA.asm:11 BRA @UNKNOWN1
    case 0xC4ABDA: cpu.execute_instruction<0x80>(0x000072, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D8FA.asm:13 LOADPTR FILE_SELECT_SUMMARY_PARTY_SPRITE_CONFIG, @VIRTUAL06
    case 0xC4ABDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009B, 2); else cpu.execute_instruction<0xA9>(0x00F89B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D8FA.asm:13 LOADPTR FILE_SELECT_SUMMARY_PARTY_SPRITE_CONFIG, @VIRTUAL06
    // Overlapping static entry reached from 0xC4ABDC.
    case 0xC4ABDE: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4D8FA.asm:13 LOADPTR FILE_SELECT_SUMMARY_PARTY_SPRITE_CONFIG, @VIRTUAL06
    case 0xC4ABDF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D8FA.asm:13 LOADPTR FILE_SELECT_SUMMARY_PARTY_SPRITE_CONFIG, @VIRTUAL06
    case 0xC4ABE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D8FA.asm:13 LOADPTR FILE_SELECT_SUMMARY_PARTY_SPRITE_CONFIG, @VIRTUAL06
    // Overlapping static entry reached from 0xC4ABE1.
    case 0xC4ABE3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4D8FA.asm:13 LOADPTR FILE_SELECT_SUMMARY_PARTY_SPRITE_CONFIG, @VIRTUAL06
    case 0xC4ABE4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4D8FA.asm:14 LDA @VIRTUAL04
    case 0xC4ABE6: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4D8FA.asm:15 ASL
    case 0xC4ABE8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:16 ASL
    case 0xC4ABE9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:17 ASL
    case 0xC4ABEA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:18 STA @LOCAL02
    case 0xC4ABEB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4D8FA.asm:19 INC
    case 0xC4ABED: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:20 INC
    case 0xC4ABEE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:21 INC
    case 0xC4ABEF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:22 INC
    case 0xC4ABF0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4D8FA.asm:23 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4ABF1: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4D8FA.asm:23 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4ABF3: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4D8FA.asm:23 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4ABF5: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4D8FA.asm:23 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4ABF7: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4D8FA.asm:24 CLC
    case 0xC4ABF9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:25 ADC @VIRTUAL0A
    case 0xC4ABFA: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4D8FA.asm:26 STA @VIRTUAL0A
    case 0xC4ABFC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4D8FA.asm:27 LDA [@VIRTUAL0A]
    case 0xC4ABFE: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4D8FA.asm:28 TAX
    case 0xC4AC00: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:29 LDA @LOCAL02
    case 0xC4AC01: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4D8FA.asm:30 CLC
    case 0xC4AC03: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:31 ADC #6
    case 0xC4AC04: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/unknown/C4/C4D8FA.asm:31 ADC #6
    // Overlapping static entry reached from 0xC4AC04.
    case 0xC4AC06: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C4D8FA.asm:32 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC4AC07: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C4/C4D8FA.asm:32 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC4AC09: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C4/C4D8FA.asm:32 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC4AC0B: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C4/C4D8FA.asm:32 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC4AC0D: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/C4/C4D8FA.asm:33 CLC
    case 0xC4AC0F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:34 ADC @VIRTUAL0A
    case 0xC4AC10: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4D8FA.asm:35 STA @VIRTUAL0A
    case 0xC4AC12: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4D8FA.asm:36 LDA [@VIRTUAL0A]
    case 0xC4AC14: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4D8FA.asm:37 TAY
    case 0xC4AC16: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:38 LDA @LOCAL02
    case 0xC4AC17: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4D8FA.asm:39 INC
    case 0xC4AC19: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:40 INC
    case 0xC4AC1A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:41 PHA
    case 0xC4AC1B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4D8FA.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4AC1C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4D8FA.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4AC1E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4D8FA.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4AC20: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4D8FA.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4AC22: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4D8FA.asm:43 PLA
    case 0xC4AC24: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:44 CLC
    case 0xC4AC25: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:45 ADC @VIRTUAL0A
    case 0xC4AC26: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4D8FA.asm:46 STA @VIRTUAL0A
    case 0xC4AC28: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4D8FA.asm:47 LDA [@VIRTUAL0A]
    case 0xC4AC2A: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4D8FA.asm:48 STA @VIRTUAL02
    case 0xC4AC2C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4D8FA.asm:49 LDA @LOCAL02
    case 0xC4AC2E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4D8FA.asm:50 CLC
    case 0xC4AC30: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:51 ADC @VIRTUAL06
    case 0xC4AC31: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4D8FA.asm:52 STA @VIRTUAL06
    case 0xC4AC33: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4D8FA.asm:53 LDA [@VIRTUAL06]
    case 0xC4AC35: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4D8FA.asm:54 STX @LOCAL00
    case 0xC4AC37: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4D8FA.asm:55 STY @LOCAL01
    case 0xC4AC39: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C4D8FA.asm:56 LDY #.LOWORD(-1)
    case 0xC4AC3B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4D8FA.asm:56 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4AC3B.
    case 0xC4AC3D: cpu.execute_instruction<0xFF>(0x2202A6, 4); return true;
    // src/unknown/C4/C4D8FA.asm:57 LDX @VIRTUAL02
    case 0xC4AC3E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4D8FA.asm:58 JSL CREATE_ENTITY
    case 0xC4AC40: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/unknown/C4/C4D8FA.asm:58 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4AC3D.
    case 0xC4AC41: cpu.execute_instruction<0x5F>(0x0AC01E, 4); return true;
    // src/unknown/C4/C4D8FA.asm:59 ASL
    case 0xC4AC44: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:60 TAX
    case 0xC4AC45: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:61 LDA #DIRECTION::DOWN
    case 0xC4AC46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C4/C4D8FA.asm:61 LDA #DIRECTION::DOWN
    // Overlapping static entry reached from 0xC4AC46.
    case 0xC4AC48: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C4/C4D8FA.asm:62 STA ENTITY_DIRECTIONS,X
    case 0xC4AC49: cpu.execute_instruction<0x9D>(0x002EF4, 3); return true;
    // src/unknown/C4/C4D8FA.asm:63 INC @VIRTUAL04
    case 0xC4AC4C: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C4D8FA.asm:65 LDA @VIRTUAL04
    case 0xC4AC4E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4D8FA.asm:66 CMP #5
    case 0xC4AC50: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C4/C4D8FA.asm:66 CMP #5
    // Overlapping static entry reached from 0xC4AC50.
    case 0xC4AC52: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4D8FA.asm:67 BCCL @UNKNOWN0
    case 0xC4AC53: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4D8FA.asm:67 BCCL @UNKNOWN0
    case 0xC4AC55: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4D8FA.asm:67 BCCL @UNKNOWN0
    case 0xC4AC57: cpu.execute_instruction<0x4C>(0x00ABDC, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4D8FA.asm:68 END_C_FUNCTION
    case 0xC4AC5A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4D8FA.asm:68 END_C_FUNCTION
    case 0xC4AC5B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4D989-jp.asm (unresolved).
bool execute_unresolved_c4_c4d989_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4D989-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4AC5C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4D989-jp.asm:10 END_STACK_VARS
    case 0xC4AC5E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4D989-jp.asm:10 END_STACK_VARS
    case 0xC4AC5F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4D989-jp.asm:10 END_STACK_VARS
    case 0xC4AC60: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D989-jp.asm:10 END_STACK_VARS
    case 0xC4AC61: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D989-jp.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC4AC61.
    case 0xC4AC63: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4D989-jp.asm:10 END_STACK_VARS
    case 0xC4AC64: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4D989-jp.asm:10 END_STACK_VARS
    case 0xC4AC65: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4D989-jp.asm:11 STA @VIRTUAL02
    case 0xC4AC66: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:11 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4AC63.
    case 0xC4AC67: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:12 JSL UNKNOWN_C0927C
    case 0xC4AC68: cpu.execute_instruction<0x22>(0xC0925E, 4); return true;
    // src/unknown/C4/C4D989-jp.asm:13 JSL UNKNOWN_C01A86
    case 0xC4AC6C: cpu.execute_instruction<0x22>(0xC01A9C, 4); return true;
    // src/unknown/C4/C4D989-jp.asm:14 LDX #0
    case 0xC4AC70: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:14 LDX #0
    // Overlapping static entry reached from 0xC4AC70.
    case 0xC4AC72: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:15 LDA #$8000
    case 0xC4AC73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:15 LDA #$8000
    // Overlapping static entry reached from 0xC4AC73.
    case 0xC4AC75: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:16 JSL ALLOC_SPRITE_MEM
    case 0xC4AC76: cpu.execute_instruction<0x22>(0xC01C27, 4); return true;
    // src/unknown/C4/C4D989-jp.asm:17 JSL INITIALIZE_MISC_OBJECT_DATA
    case 0xC4AC7A: cpu.execute_instruction<0x22>(0xC01A7F, 4); return true;
    // src/unknown/C4/C4D989-jp.asm:18 LDA #1
    case 0xC4AC7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:18 LDA #1
    // Overlapping static entry reached from 0xC4AC7E.
    case 0xC4AC80: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:19 STA NPC_SPAWNS_ENABLED
    case 0xC4AC81: cpu.execute_instruction<0x8D>(0x004DDE, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:20 STZ ENEMY_SPAWNS_ENABLED
    case 0xC4AC84: cpu.execute_instruction<0x9C>(0x004DE0, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:21 LDA #0
    case 0xC4AC87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:21 LDA #0
    // Overlapping static entry reached from 0xC4AC87.
    case 0xC4AC89: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:22 JSL SET_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC4AC8A: cpu.execute_instruction<0x22>(0xC4D0E4, 4); return true;
    // src/unknown/C4/C4D989-jp.asm:23 LDA #23
    case 0xC4AC8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:23 LDA #23
    // Overlapping static entry reached from 0xC4AC8E.
    case 0xC4AC90: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:24 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC4AC91: cpu.execute_instruction<0x8D>(0x000A42, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:25 LDA #24
    case 0xC4AC94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:25 LDA #24
    // Overlapping static entry reached from 0xC4AC94.
    case 0xC4AC96: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:26 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC4AC97: cpu.execute_instruction<0x8D>(0x000A44, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:26 STA ENTITY_ALLOCATION_MAX_SLOT
    // Overlapping static entry reached from 0xC4AC75.
    case 0xC4AC99: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D989-jp.asm:27 LDY #0
    case 0xC4AC9A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:27 LDY #0
    // Overlapping static entry reached from 0xC4AC9A.
    case 0xC4AC9C: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:28 TYX
    case 0xC4AC9D: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C4D989-jp.asm:29 LDA #1
    case 0xC4AC9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:29 LDA #1
    // Overlapping static entry reached from 0xC4AC9E.
    case 0xC4ACA0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:30 JSL INIT_ENTITY
    case 0xC4ACA1: cpu.execute_instruction<0x22>(0xC09300, 4); return true;
    // src/unknown/C4/C4D989-jp.asm:31 JSL UNKNOWN_C02D29
    case 0xC4ACA5: cpu.execute_instruction<0x22>(0xC02EFE, 4); return true;
    // src/unknown/C4/C4D989-jp.asm:32 LDA #0
    case 0xC4ACA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:32 LDA #0
    // Overlapping static entry reached from 0xC4ACA9.
    case 0xC4ACAB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:33 STA @LOCAL02
    case 0xC4ACAC: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:34 BRA @UNKNOWN1
    case 0xC4ACAE: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:36 CLC
    case 0xC4ACB0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D989-jp.asm:37 ADC #.LOWORD(GAME_STATE)
    case 0xC4ACB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:37 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC4ACB1.
    case 0xC4ACB3: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C4/C4D989-jp.asm:38 TAX
    case 0xC4ACB4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D989-jp.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC4ACB5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:40 STZ a:game_state::party_members,X
    case 0xC4ACB7: cpu.execute_instruction<0x9E>(0x000077, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC4ACBA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:42 LDA @LOCAL02
    case 0xC4ACBC: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:43 INC
    case 0xC4ACBE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D989-jp.asm:44 STA @LOCAL02
    case 0xC4ACBF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:46 CMP #.SIZEOF(game_state::party_members)
    case 0xC4ACC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:46 CMP #.SIZEOF(game_state::party_members)
    // Overlapping static entry reached from 0xC4ACC1.
    case 0xC4ACC3: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:47 BCC @UNKNOWN0
    case 0xC4ACC4: cpu.execute_instruction<0x90>(0x0000EA, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:48 LDX #2824
    case 0xC4ACC6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000B08, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:48 LDX #2824
    // Overlapping static entry reached from 0xC4ACC6.
    case 0xC4ACC8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C4D989-jp.asm:49 LDA #7520
    case 0xC4ACC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000060, 2); else cpu.execute_instruction<0xA9>(0x001D60, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:49 LDA #7520
    // Overlapping static entry reached from 0xC4ACC9.
    case 0xC4ACCB: cpu.execute_instruction<0x1D>(0x003222, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:50 JSL UNKNOWN_C0B65F
    case 0xC4ACCC: cpu.execute_instruction<0x22>(0xC0B632, 4); return true;
    // src/unknown/C4/C4D989-jp.asm:50 JSL UNKNOWN_C0B65F
    // Overlapping static entry reached from 0xC4ACCB.
    case 0xC4ACCE: cpu.execute_instruction<0xB6>(0x0000C0, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:51 JSL UNKNOWN_C03A24
    case 0xC4ACD0: cpu.execute_instruction<0x22>(0xC03C74, 4); return true;
    // src/unknown/C4/C4D989-jp.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC4ACD4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:53 LDA #0
    case 0xC4ACD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:54 STA @LOCAL00
    case 0xC4ACD8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:54 STA @LOCAL00
    // Overlapping static entry reached from 0xC4ACD6.
    case 0xC4ACD9: cpu.execute_instruction<0x0E>(0x0000A2, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:55 LDX #BPP4PALETTE_SIZE * 16
    case 0xC4ACDA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:55 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC4ACDA.
    case 0xC4ACDC: cpu.execute_instruction<0x02>(0x0000C2, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:56 REP #PROC_FLAGS::ACCUM8
    case 0xC4ACDD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:57 LDA #.LOWORD(PALETTES)
    case 0xC4ACDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:57 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC4ACDF.
    case 0xC4ACE1: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:58 JSL MEMSET16
    case 0xC4ACE2: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C4/C4D989-jp.asm:59 JSL OVERWORLD_INITIALIZE
    case 0xC4ACE6: cpu.execute_instruction<0x22>(0xC0004B, 4); return true;
    // src/unknown/C4/C4D989-jp.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC4ACEA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:61 STZ TM_MIRROR
    case 0xC4ACEC: cpu.execute_instruction<0x9C>(0x00001A, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:61 STZ TM_MIRROR
    // Overlapping static entry reached from 0xC4AD3F.
    case 0xC4ACEE: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:62 REP #PROC_FLAGS::ACCUM8
    case 0xC4ACEF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:63 LDA #0
    case 0xC4ACF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:63 LDA #0
    // Overlapping static entry reached from 0xC4ACF1.
    case 0xC4ACF3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:64 JSL UNKNOWN_C2EA15
    case 0xC4ACF4: cpu.execute_instruction<0x22>(0xC2E92E, 4); return true;
    // src/unknown/C4/C4D989-jp.asm:65 JSL UNKNOWN_C4A7B0
    case 0xC4ACF8: cpu.execute_instruction<0x22>(0xC47C19, 4); return true;
    // src/unknown/C4/C4D989-jp.asm:66 STZ ACTIONSCRIPT_STATE
    case 0xC4ACFC: cpu.execute_instruction<0x9C>(0x009939, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:67 LDX #0
    case 0xC4ACFF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:67 LDX #0
    // Overlapping static entry reached from 0xC4ACFF.
    case 0xC4AD01: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:68 STX @LOCAL02
    case 0xC4AD02: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:69 TXY
    case 0xC4AD04: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C4D989-jp.asm:70 STY @LOCAL01
    case 0xC4AD05: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D989-jp.asm:71 LOADPTR ATTRACT_MODE_TXT, @VIRTUAL0A
    case 0xC4AD07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x00F8C3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D989-jp.asm:71 LOADPTR ATTRACT_MODE_TXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4AD07.
    case 0xC4AD09: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4D989-jp.asm:71 LOADPTR ATTRACT_MODE_TXT, @VIRTUAL0A
    case 0xC4AD0A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D989-jp.asm:71 LOADPTR ATTRACT_MODE_TXT, @VIRTUAL0A
    case 0xC4AD0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D989-jp.asm:71 LOADPTR ATTRACT_MODE_TXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4AD0C.
    case 0xC4AD0E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4D989-jp.asm:71 LOADPTR ATTRACT_MODE_TXT, @VIRTUAL0A
    case 0xC4AD0F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:72 LDA @VIRTUAL02
    case 0xC4AD11: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:73 ASL
    case 0xC4AD13: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D989-jp.asm:74 ASL
    case 0xC4AD14: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D989-jp.asm:75 CLC
    case 0xC4AD15: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D989-jp.asm:76 ADC @VIRTUAL0A
    case 0xC4AD16: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:76 ADC @VIRTUAL0A
    // Overlapping static entry reached from 0xC4AD45.
    case 0xC4AD17: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D989-jp.asm:77 STA @VIRTUAL0A
    case 0xC4AD18: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4D989-jp.asm:78 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4AD1A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4D989-jp.asm:78 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AD1A.
    case 0xC4AD1C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4D989-jp.asm:78 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4AD1D: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4D989-jp.asm:78 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4AD1F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4D989-jp.asm:78 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4AD20: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4D989-jp.asm:78 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4AD22: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4D989-jp.asm:78 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4AD24: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4D989-jp.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4AD26: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4D989-jp.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4AD28: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4D989-jp.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4AD2A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4D989-jp.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4AD2C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:80 JSL DISPLAY_TEXT
    case 0xC4AD2E: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/unknown/C4/C4D989-jp.asm:81 BRA @UNKNOWN7
    case 0xC4AD32: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:83 JSL UNKNOWN_C4A7B0
    case 0xC4AD34: cpu.execute_instruction<0x22>(0xC47C19, 4); return true;
    // src/unknown/C4/C4D989-jp.asm:84 LDA PAD_PRESS
    case 0xC4AD38: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:85 AND #PAD::A_BUTTON
    case 0xC4AD3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:85 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xC4AD3B.
    case 0xC4AD3D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:86 BNE @UNKNOWN3
    case 0xC4AD3E: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:86 BNE @UNKNOWN3
    // Overlapping static entry reached from 0xC4AD4D.
    case 0xC4AD3F: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:87 LDA PAD_PRESS
    case 0xC4AD40: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:87 LDA PAD_PRESS
    // Overlapping static entry reached from 0xC4AD3F.
    case 0xC4AD41: cpu.execute_instruction<0x6D>(0x002900, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:88 AND #PAD::B_BUTTON
    case 0xC4AD43: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:88 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC4AD41.
    case 0xC4AD44: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:88 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC4AD43.
    case 0xC4AD45: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:89 BNE @UNKNOWN3
    case 0xC4AD46: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:90 LDA PAD_PRESS
    case 0xC4AD48: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:91 AND #PAD::START_BUTTON
    case 0xC4AD4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001000, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:91 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xC4AD4B.
    case 0xC4AD4D: cpu.execute_instruction<0x10>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:92 BEQ @UNKNOWN4
    case 0xC4AD4E: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:92 BEQ @UNKNOWN4
    // Overlapping static entry reached from 0xC4AD4D.
    case 0xC4AD4F: cpu.execute_instruction<0x07>(0x0000A0, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:94 LDY #1
    case 0xC4AD50: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:94 LDY #1
    // Overlapping static entry reached from 0xC4AD4F.
    case 0xC4AD51: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:94 LDY #1
    // Overlapping static entry reached from 0xC4AD50.
    case 0xC4AD52: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:95 STY @LOCAL01
    case 0xC4AD53: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:96 BRA @UNKNOWN8
    case 0xC4AD55: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:98 JSL UNKNOWN_C1004E
    case 0xC4AD57: cpu.execute_instruction<0x22>(0xC100C4, 4); return true;
    // src/unknown/C4/C4D989-jp.asm:99 LDX @LOCAL02
    case 0xC4AD5B: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:100 BEQ @UNKNOWN5
    case 0xC4AD5D: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:101 CPX #1
    case 0xC4AD5F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:101 CPX #1
    // Overlapping static entry reached from 0xC4AD5F.
    case 0xC4AD61: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:102 BNE @UNKNOWN6
    case 0xC4AD62: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:104 SEP #PROC_FLAGS::ACCUM8
    case 0xC4AD64: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:105 LDA #$13
    case 0xC4AD66: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x008D13, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:106 STA TM_MIRROR
    case 0xC4AD68: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:106 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4AD66.
    case 0xC4AD69: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D989-jp.asm:106 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4AD69.
    case 0xC4AD6A: cpu.execute_instruction<0x00>(0x0000E8, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:108 INX
    case 0xC4AD6B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4D989-jp.asm:109 STX @LOCAL02
    case 0xC4AD6C: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:111 REP #PROC_FLAGS::ACCUM8
    case 0xC4AD6E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:112 LDA ACTIONSCRIPT_STATE
    case 0xC4AD70: cpu.execute_instruction<0xAD>(0x009939, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:113 BEQ @UNKNOWN2
    case 0xC4AD73: cpu.execute_instruction<0xF0>(0x0000BF, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:115 JSL UNKNOWN_C2EA74
    case 0xC4AD75: cpu.execute_instruction<0x22>(0xC2E98D, 4); return true;
    // src/unknown/C4/C4D989-jp.asm:116 BRA @UNKNOWN10
    case 0xC4AD79: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:118 JSL UNKNOWN_C1004E
    case 0xC4AD7B: cpu.execute_instruction<0x22>(0xC100C4, 4); return true;
    // src/unknown/C4/C4D989-jp.asm:119 JSL UNKNOWN_C4A7B0
    case 0xC4AD7F: cpu.execute_instruction<0x22>(0xC47C19, 4); return true;
    // src/unknown/C4/C4D989-jp.asm:121 JSL UNKNOWN_C2EACF
    case 0xC4AD83: cpu.execute_instruction<0x22>(0xC2E9E8, 4); return true;
    // src/unknown/C4/C4D989-jp.asm:122 CMP #0
    case 0xC4AD87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:122 CMP #0
    // Overlapping static entry reached from 0xC4AD87.
    case 0xC4AD89: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:123 BNE @UNKNOWN9
    case 0xC4AD8A: cpu.execute_instruction<0xD0>(0x0000EF, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:124 LDX #1
    case 0xC4AD8C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:124 LDX #1
    // Overlapping static entry reached from 0xC4AD8C.
    case 0xC4AD8E: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:125 TXA
    case 0xC4AD8F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4D989-jp.asm:126 JSL FADE_OUT
    case 0xC4AD90: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/unknown/C4/C4D989-jp.asm:127 BRA @UNKNOWN12
    case 0xC4AD94: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:129 JSL UNKNOWN_C1004E
    case 0xC4AD96: cpu.execute_instruction<0x22>(0xC100C4, 4); return true;
    // src/unknown/C4/C4D989-jp.asm:131 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC4AD9A: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:132 AND #$00FF
    case 0xC4AD9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:132 AND #$00FF
    // Overlapping static entry reached from 0xC4AD9D.
    case 0xC4AD9F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:133 BNE @UNKNOWN11
    case 0xC4ADA0: cpu.execute_instruction<0xD0>(0x0000F4, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:134 JSL UNKNOWN_C2EAAA
    case 0xC4ADA2: cpu.execute_instruction<0x22>(0xC2E9C3, 4); return true;
    // src/unknown/C4/C4D989-jp.asm:135 STZ ACTIONSCRIPT_STATE
    case 0xC4ADA6: cpu.execute_instruction<0x9C>(0x009939, 3); return true;
    // src/unknown/C4/C4D989-jp.asm:136 JSL UNKNOWN_C021E6
    case 0xC4ADA9: cpu.execute_instruction<0x22>(0xC021F4, 4); return true;
    // src/unknown/C4/C4D989-jp.asm:137 LDY @LOCAL01
    case 0xC4ADAD: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C4/C4D989-jp.asm:138 TYA
    case 0xC4ADAF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4D989-jp.asm:139 END_C_FUNCTION
    case 0xC4ADB0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4D989-jp.asm:139 END_C_FUNCTION
    case 0xC4ADB1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4DCF6.asm (unresolved).
bool execute_unresolved_c4_c4dcf6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4DCF6.asm:3 BEGIN_C_FUNCTION
    case 0xC4AF07: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4DCF6.asm:5 END_STACK_VARS
    case 0xC4AF09: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4DCF6.asm:5 END_STACK_VARS
    case 0xC4AF0A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4DCF6.asm:5 END_STACK_VARS
    case 0xC4AF0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4DCF6.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC4AF0B.
    case 0xC4AF0D: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4DCF6.asm:5 END_STACK_VARS
    case 0xC4AF0E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4DCF6.asm:6 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC4AF0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4DCF6.asm:6 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4AF0F.
    case 0xC4AF11: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4DCF6.asm:6 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC4AF12: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4DCF6.asm:6 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC4AF14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4DCF6.asm:6 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4AF14.
    case 0xC4AF16: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4DCF6.asm:6 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC4AF17: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4DCF6.asm:7 LDX #0
    case 0xC4AF19: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4DCF6.asm:7 LDX #0
    // Overlapping static entry reached from 0xC4AF19.
    case 0xC4AF1B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4DCF6.asm:8 BRA @UNKNOWN1
    case 0xC4AF1C: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4DCF6.asm:10 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4AF1E: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4DCF6.asm:10 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4AF20: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4DCF6.asm:10 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4AF22: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4DCF6.asm:10 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4AF24: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4DCF6.asm:11 LDA [@VIRTUAL06]
    case 0xC4AF26: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4DCF6.asm:12 ORA #$2000
    case 0xC4AF28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x002000, 3); return true;
    // src/unknown/C4/C4DCF6.asm:12 ORA #$2000
    // Overlapping static entry reached from 0xC4AF28.
    case 0xC4AF2A: cpu.execute_instruction<0x20>(0x000687, 3); return true;
    // src/unknown/C4/C4DCF6.asm:13 STA [@VIRTUAL06]
    case 0xC4AF2B: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4DCF6.asm:14 INC @VIRTUAL0A
    case 0xC4AF2D: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4DCF6.asm:15 INC @VIRTUAL0A
    case 0xC4AF2F: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4DCF6.asm:16 INX
    case 0xC4AF31: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4DCF6.asm:18 CPX #1024
    case 0xC4AF32: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000400, 3); return true;
    // src/unknown/C4/C4DCF6.asm:18 CPX #1024
    // Overlapping static entry reached from 0xC4AF32.
    case 0xC4AF34: cpu.execute_instruction<0x04>(0x000090, 2); return true;
    // src/unknown/C4/C4DCF6.asm:19 BCC @UNKNOWN0
    case 0xC4AF35: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/unknown/C4/C4DCF6.asm:19 BCC @UNKNOWN0
    // Overlapping static entry reached from 0xC4AF34.
    case 0xC4AF36: cpu.execute_instruction<0xE7>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4DCF6.asm:20 END_C_FUNCTION
    case 0xC4AF37: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4DCF6.asm:20 END_C_FUNCTION
    case 0xC4AF38: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
