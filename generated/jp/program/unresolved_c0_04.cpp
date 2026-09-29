// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/unknown/C0/C0B149.asm (unresolved).
bool execute_unresolved_c0_c0b149_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0B149.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC0B128: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:4 PHD
    case 0xC0B12A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:5 PHA
    case 0xC0B12B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:6 TDC
    case 0xC0B12C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:7 SEC
    case 0xC0B12D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:8 SBC #$000E
    case 0xC0B12E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000E, 2); else cpu.execute_instruction<0xE9>(0x00000E, 3); return true;
    // src/unknown/C0/C0B149.asm:8 SBC #$000E
    // Overlapping static entry reached from 0xC0B12E.
    case 0xC0B130: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C0/C0B149.asm:9 TCD
    case 0xC0B131: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:10 PLA
    case 0xC0B132: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:11 STA $00
    case 0xC0B133: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C0B149.asm:12 STX $02
    case 0xC0B135: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0B149.asm:13 STY $04
    case 0xC0B137: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C0/C0B149.asm:14 LDA $1C
    case 0xC0B139: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0B149.asm:15 STA $06
    case 0xC0B13B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0B149.asm:16 TXA
    case 0xC0B13D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:17 BMI @UNKNOWN0
    case 0xC0B13E: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C0/C0B149.asm:18 CMP #$0070
    case 0xC0B140: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000070, 2); else cpu.execute_instruction<0xC9>(0x000070, 3); return true;
    // src/unknown/C0/C0B149.asm:18 CMP #$0070
    // Overlapping static entry reached from 0xC0B140.
    case 0xC0B142: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C0B149.asm:19 BCS @UNKNOWN1
    case 0xC0B143: cpu.execute_instruction<0xB0>(0x000003, 2); return true;
    // src/unknown/C0/C0B149.asm:21 JMP @UNKNOWN16
    case 0xC0B145: cpu.execute_instruction<0x4C>(0x00B212, 3); return true;
    // src/unknown/C0/C0B149.asm:23 LDY #$0000
    case 0xC0B148: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0B149.asm:23 LDY #$0000
    // Overlapping static entry reached from 0xC0B148.
    case 0xC0B14A: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C0B149.asm:24 LDA $02
    case 0xC0B14B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0B149.asm:25 SEC
    case 0xC0B14D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:26 SBC $06
    case 0xC0B14E: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // src/unknown/C0/C0B149.asm:27 BMI @UNKNOWN3
    case 0xC0B150: cpu.execute_instruction<0x30>(0x000011, 2); return true;
    // src/unknown/C0/C0B149.asm:28 BEQ @UNKNOWN3
    case 0xC0B152: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C0/C0B149.asm:29 TAX
    case 0xC0B154: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:30 LDA #$00FF
    case 0xC0B155: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C0/C0B149.asm:30 LDA #$00FF
    // Overlapping static entry reached from 0xC0B155.
    case 0xC0B157: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C0B149.asm:32 STA SWIRL_WINDOW_HDMA_BUFFER,Y
    case 0xC0B158: cpu.execute_instruction<0x99>(0x004356, 3); return true;
    // src/unknown/C0/C0B149.asm:33 INY
    case 0xC0B15B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:34 INY
    case 0xC0B15C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:35 DEX
    case 0xC0B15D: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:36 BNE @UNKNOWN2
    case 0xC0B15E: cpu.execute_instruction<0xD0>(0x0000F8, 2); return true;
    // src/unknown/C0/C0B149.asm:37 LDA #$0000
    case 0xC0B160: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0B149.asm:37 LDA #$0000
    // Overlapping static entry reached from 0xC0B160.
    case 0xC0B162: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0B149.asm:39 CLC
    case 0xC0B163: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:40 ADC $06
    case 0xC0B164: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0B149.asm:41 STA $0A
    case 0xC0B166: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C0B149.asm:42 LDA $04
    case 0xC0B168: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0B149.asm:43 STA f:WRMPYA
    case 0xC0B16A: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/unknown/C0/C0B149.asm:45 LDA $0A
    case 0xC0B16E: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C0/C0B149.asm:46 BNE @UNKNOWN5
    case 0xC0B170: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C0/C0B149.asm:47 LDA $04
    case 0xC0B172: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0B149.asm:48 BRA @UNKNOWN6
    case 0xC0B174: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/unknown/C0/C0B149.asm:50 XBA
    case 0xC0B176: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:51 STA f:WRDIVL
    case 0xC0B177: cpu.execute_instruction<0x8F>(0x004204, 4); return true;
    // src/unknown/C0/C0B149.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B17B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:53 LDA $06
    case 0xC0B17D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0B149.asm:54 STA f:WRDIVB
    case 0xC0B17F: cpu.execute_instruction<0x8F>(0x004206, 4); return true;
    // src/unknown/C0/C0B149.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC0B183: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:56 NOP
    case 0xC0B185: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:57 NOP
    case 0xC0B186: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:58 NOP
    case 0xC0B187: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:59 NOP
    case 0xC0B188: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:60 NOP
    case 0xC0B189: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:61 LDA f:RDDIVL
    case 0xC0B18A: cpu.execute_instruction<0xAF>(0x004214, 4); return true;
    // src/unknown/C0/C0B149.asm:62 TAX
    case 0xC0B18E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:63 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B18F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:64 LDA f:UNKNOWN_C0B2FF,X
    case 0xC0B191: cpu.execute_instruction<0xBF>(0xC0B2DE, 4); return true;
    // src/unknown/C0/C0B149.asm:65 STA f:WRMPYB
    case 0xC0B195: cpu.execute_instruction<0x8F>(0x004203, 4); return true;
    // src/unknown/C0/C0B149.asm:66 REP #PROC_FLAGS::ACCUM8
    case 0xC0B199: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:67 LDA #$0080
    case 0xC0B19B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/unknown/C0/C0B149.asm:67 LDA #$0080
    // Overlapping static entry reached from 0xC0B19B.
    case 0xC0B19D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0B149.asm:68 CLC
    case 0xC0B19E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:69 ADC f:RDMPYL
    case 0xC0B19F: cpu.execute_instruction<0x6F>(0x004216, 4); return true;
    // src/unknown/C0/C0B149.asm:70 XBA
    case 0xC0B1A3: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:71 AND #$00FF
    case 0xC0B1A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0B149.asm:71 AND #$00FF
    // Overlapping static entry reached from 0xC0B1A4.
    case 0xC0B1A6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0B149.asm:73 STA $08
    case 0xC0B1A7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0B149.asm:74 CLC
    case 0xC0B1A9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:75 ADC $00
    case 0xC0B1AA: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C0/C0B149.asm:76 BMI @UNKNOWN10
    case 0xC0B1AC: cpu.execute_instruction<0x30>(0x000025, 2); return true;
    // src/unknown/C0/C0B149.asm:77 CMP #$0100
    case 0xC0B1AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C0/C0B149.asm:77 CMP #$0100
    // Overlapping static entry reached from 0xC0B1AE.
    case 0xC0B1B0: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/unknown/C0/C0B149.asm:78 BCC @UNKNOWN7
    case 0xC0B1B1: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C0/C0B149.asm:78 BCC @UNKNOWN7
    // Overlapping static entry reached from 0xC0B1B0.
    case 0xC0B1B2: cpu.execute_instruction<0x03>(0x0000A9, 2); return true;
    // src/unknown/C0/C0B149.asm:79 LDA #$00FF
    case 0xC0B1B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C0/C0B149.asm:79 LDA #$00FF
    // Overlapping static entry reached from 0xC0B1B2.
    case 0xC0B1B4: cpu.execute_instruction<0xFF>(0x0C8500, 4); return true;
    // src/unknown/C0/C0B149.asm:79 LDA #$00FF
    // Overlapping static entry reached from 0xC0B1B3.
    case 0xC0B1B5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0B149.asm:81 STA $0C
    case 0xC0B1B6: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0B149.asm:82 LDA $00
    case 0xC0B1B8: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C0/C0B149.asm:83 SEC
    case 0xC0B1BA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:84 SBC $08
    case 0xC0B1BB: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // src/unknown/C0/C0B149.asm:85 BMI @UNKNOWN8
    case 0xC0B1BD: cpu.execute_instruction<0x30>(0x000007, 2); return true;
    // src/unknown/C0/C0B149.asm:86 CMP #$0100
    case 0xC0B1BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C0/C0B149.asm:86 CMP #$0100
    // Overlapping static entry reached from 0xC0B1BF.
    case 0xC0B1C1: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C0/C0B149.asm:87 BCS @UNKNOWN10
    case 0xC0B1C2: cpu.execute_instruction<0xB0>(0x00000F, 2); return true;
    // src/unknown/C0/C0B149.asm:87 BCS @UNKNOWN10
    // Overlapping static entry reached from 0xC0B1C1.
    case 0xC0B1C3: cpu.execute_instruction<0x0F>(0xA90380, 4); return true;
    // src/unknown/C0/C0B149.asm:88 BRA @UNKNOWN9
    case 0xC0B1C4: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0B149.asm:90 LDA #$0000
    case 0xC0B1C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0B149.asm:90 LDA #$0000
    // Overlapping static entry reached from 0xC0B1C3.
    case 0xC0B1C7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0B149.asm:90 LDA #$0000
    // Overlapping static entry reached from 0xC0B1C6.
    case 0xC0B1C8: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C0/C0B149.asm:92 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B1C9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:93 XBA
    case 0xC0B1CB: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:94 LDA $0C
    case 0xC0B1CC: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/unknown/C0/C0B149.asm:95 XBA
    case 0xC0B1CE: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:96 REP #PROC_FLAGS::ACCUM8
    case 0xC0B1CF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:97 BRA @UNKNOWN11
    case 0xC0B1D1: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0B149.asm:99 LDA #$00FF
    case 0xC0B1D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C0/C0B149.asm:99 LDA #$00FF
    // Overlapping static entry reached from 0xC0B1D3.
    case 0xC0B1D5: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C0B149.asm:101 STA SWIRL_WINDOW_HDMA_BUFFER,Y
    case 0xC0B1D6: cpu.execute_instruction<0x99>(0x004356, 3); return true;
    // src/unknown/C0/C0B149.asm:102 PHA
    case 0xC0B1D9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:103 LDA $0A
    case 0xC0B1DA: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C0/C0B149.asm:104 ASL
    case 0xC0B1DC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:105 ASL
    case 0xC0B1DD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:106 STA $0C
    case 0xC0B1DE: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0B149.asm:107 TYA
    case 0xC0B1E0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:108 CLC
    case 0xC0B1E1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:109 ADC $0C
    case 0xC0B1E2: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // src/unknown/C0/C0B149.asm:110 TAX
    case 0xC0B1E4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:111 PLA
    case 0xC0B1E5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:112 CPX #$01C0
    case 0xC0B1E6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000C0, 2); else cpu.execute_instruction<0xE0>(0x0001C0, 3); return true;
    // src/unknown/C0/C0B149.asm:112 CPX #$01C0
    // Overlapping static entry reached from 0xC0B1E6.
    case 0xC0B1E8: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C0/C0B149.asm:113 BCS @UNKNOWN12
    case 0xC0B1E9: cpu.execute_instruction<0xB0>(0x000003, 2); return true;
    // src/unknown/C0/C0B149.asm:113 BCS @UNKNOWN12
    // Overlapping static entry reached from 0xC0B1E8.
    case 0xC0B1EA: cpu.execute_instruction<0x03>(0x00009D, 2); return true;
    // src/unknown/C0/C0B149.asm:114 STA SWIRL_WINDOW_HDMA_BUFFER,X
    case 0xC0B1EB: cpu.execute_instruction<0x9D>(0x004356, 3); return true;
    // src/unknown/C0/C0B149.asm:114 STA SWIRL_WINDOW_HDMA_BUFFER,X
    // Overlapping static entry reached from 0xC0B1EA.
    case 0xC0B1EC: cpu.execute_instruction<0x56>(0x000043, 2); return true;
    // src/unknown/C0/C0B149.asm:116 INY
    case 0xC0B1EE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:117 INY
    case 0xC0B1EF: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:118 DEC $0A
    case 0xC0B1F0: cpu.execute_instruction<0xC6>(0x00000A, 2); return true;
    // src/unknown/C0/C0B149.asm:119 BMI @UNKNOWN13
    case 0xC0B1F2: cpu.execute_instruction<0x30>(0x000003, 2); return true;
    // src/unknown/C0/C0B149.asm:120 JMP @UNKNOWN4
    case 0xC0B1F4: cpu.execute_instruction<0x4C>(0x00B16E, 3); return true;
    // src/unknown/C0/C0B149.asm:122 TYA
    case 0xC0B1F7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:123 CLC
    case 0xC0B1F8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:124 ADC $06
    case 0xC0B1F9: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0B149.asm:125 ADC $06
    case 0xC0B1FB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0B149.asm:126 TAY
    case 0xC0B1FD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:127 CPY #$01C0
    case 0xC0B1FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000C0, 2); else cpu.execute_instruction<0xC0>(0x0001C0, 3); return true;
    // src/unknown/C0/C0B149.asm:127 CPY #$01C0
    // Overlapping static entry reached from 0xC0B1FE.
    case 0xC0B200: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C0/C0B149.asm:128 BCS @UNKNOWN15
    case 0xC0B201: cpu.execute_instruction<0xB0>(0x00000D, 2); return true;
    // src/unknown/C0/C0B149.asm:128 BCS @UNKNOWN15
    // Overlapping static entry reached from 0xC0B200.
    case 0xC0B202: cpu.execute_instruction<0x0D>(0x00FFA9, 3); return true;
    // src/unknown/C0/C0B149.asm:129 LDA #$00FF
    case 0xC0B203: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C0/C0B149.asm:129 LDA #$00FF
    // Overlapping static entry reached from 0xC0B203.
    case 0xC0B205: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C0B149.asm:131 STA SWIRL_WINDOW_HDMA_BUFFER,Y
    case 0xC0B206: cpu.execute_instruction<0x99>(0x004356, 3); return true;
    // src/unknown/C0/C0B149.asm:132 INY
    case 0xC0B209: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:133 INY
    case 0xC0B20A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:134 CPY #$01C0
    case 0xC0B20B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000C0, 2); else cpu.execute_instruction<0xC0>(0x0001C0, 3); return true;
    // src/unknown/C0/C0B149.asm:134 CPY #$01C0
    // Overlapping static entry reached from 0xC0B20B.
    case 0xC0B20D: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/unknown/C0/C0B149.asm:135 BCC @UNKNOWN14
    case 0xC0B20E: cpu.execute_instruction<0x90>(0x0000F6, 2); return true;
    // src/unknown/C0/C0B149.asm:135 BCC @UNKNOWN14
    // Overlapping static entry reached from 0xC0B20D.
    case 0xC0B20F: cpu.execute_instruction<0xF6>(0x00002B, 2); return true;
    // src/unknown/C0/C0B149.asm:137 PLD
    case 0xC0B210: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:138 RTL
    case 0xC0B211: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:140 LDY #$01BE
    case 0xC0B212: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000BE, 2); else cpu.execute_instruction<0xA0>(0x0001BE, 3); return true;
    // src/unknown/C0/C0B149.asm:140 LDY #$01BE
    // Overlapping static entry reached from 0xC0B212.
    case 0xC0B214: cpu.execute_instruction<0x01>(0x0000A9, 2); return true;
    // src/unknown/C0/C0B149.asm:141 LDA #$00E0
    case 0xC0B215: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // src/unknown/C0/C0B149.asm:141 LDA #$00E0
    // Overlapping static entry reached from 0xC0B214.
    case 0xC0B216: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x003800, 3); return true;
    // src/unknown/C0/C0B149.asm:141 LDA #$00E0
    // Overlapping static entry reached from 0xC0B215.
    case 0xC0B217: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C0/C0B149.asm:142 SEC
    case 0xC0B218: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:143 SBC $02
    case 0xC0B219: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0B149.asm:144 SEC
    case 0xC0B21B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:145 SBC $06
    case 0xC0B21C: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // src/unknown/C0/C0B149.asm:146 BMI @UNKNOWN18
    case 0xC0B21E: cpu.execute_instruction<0x30>(0x000011, 2); return true;
    // src/unknown/C0/C0B149.asm:147 BEQ @UNKNOWN18
    case 0xC0B220: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C0/C0B149.asm:148 TAX
    case 0xC0B222: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:149 LDA #$00FF
    case 0xC0B223: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C0/C0B149.asm:149 LDA #$00FF
    // Overlapping static entry reached from 0xC0B223.
    case 0xC0B225: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C0B149.asm:151 STA SWIRL_WINDOW_HDMA_BUFFER,Y
    case 0xC0B226: cpu.execute_instruction<0x99>(0x004356, 3); return true;
    // src/unknown/C0/C0B149.asm:152 DEY
    case 0xC0B229: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:153 DEY
    case 0xC0B22A: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:154 DEX
    case 0xC0B22B: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:155 BNE @UNKNOWN17
    case 0xC0B22C: cpu.execute_instruction<0xD0>(0x0000F8, 2); return true;
    // src/unknown/C0/C0B149.asm:156 LDA #$0000
    case 0xC0B22E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0B149.asm:156 LDA #$0000
    // Overlapping static entry reached from 0xC0B22E.
    case 0xC0B230: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0B149.asm:158 CLC
    case 0xC0B231: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:159 ADC $06
    case 0xC0B232: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0B149.asm:160 STA $0A
    case 0xC0B234: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C0B149.asm:161 LDA $04
    case 0xC0B236: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0B149.asm:162 STA f:WRMPYA
    case 0xC0B238: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/unknown/C0/C0B149.asm:164 LDA $0A
    case 0xC0B23C: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C0/C0B149.asm:165 BNE @UNKNOWN20
    case 0xC0B23E: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C0/C0B149.asm:166 LDA $04
    case 0xC0B240: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0B149.asm:167 BRA @UNKNOWN21
    case 0xC0B242: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/unknown/C0/C0B149.asm:169 XBA
    case 0xC0B244: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:170 STA f:WRDIVL
    case 0xC0B245: cpu.execute_instruction<0x8F>(0x004204, 4); return true;
    // src/unknown/C0/C0B149.asm:171 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B249: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:172 LDA $06
    case 0xC0B24B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0B149.asm:173 STA f:WRDIVB
    case 0xC0B24D: cpu.execute_instruction<0x8F>(0x004206, 4); return true;
    // src/unknown/C0/C0B149.asm:174 REP #PROC_FLAGS::ACCUM8
    case 0xC0B251: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:175 NOP
    case 0xC0B253: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:176 NOP
    case 0xC0B254: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:177 NOP
    case 0xC0B255: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:178 NOP
    case 0xC0B256: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:179 NOP
    case 0xC0B257: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:180 LDA f:RDDIVL
    case 0xC0B258: cpu.execute_instruction<0xAF>(0x004214, 4); return true;
    // src/unknown/C0/C0B149.asm:181 TAX
    case 0xC0B25C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:182 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B25D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:183 LDA f:UNKNOWN_C0B2FF,X
    case 0xC0B25F: cpu.execute_instruction<0xBF>(0xC0B2DE, 4); return true;
    // src/unknown/C0/C0B149.asm:184 STA f:WRMPYB
    case 0xC0B263: cpu.execute_instruction<0x8F>(0x004203, 4); return true;
    // src/unknown/C0/C0B149.asm:185 REP #PROC_FLAGS::ACCUM8
    case 0xC0B267: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:186 LDA #$0080
    case 0xC0B269: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/unknown/C0/C0B149.asm:186 LDA #$0080
    // Overlapping static entry reached from 0xC0B269.
    case 0xC0B26B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0B149.asm:187 CLC
    case 0xC0B26C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:188 ADC f:RDMPYL
    case 0xC0B26D: cpu.execute_instruction<0x6F>(0x004216, 4); return true;
    // src/unknown/C0/C0B149.asm:189 XBA
    case 0xC0B271: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:190 AND #$00FF
    case 0xC0B272: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0B149.asm:190 AND #$00FF
    // Overlapping static entry reached from 0xC0B272.
    case 0xC0B274: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0B149.asm:192 STA $08
    case 0xC0B275: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0B149.asm:193 CLC
    case 0xC0B277: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:194 ADC $00
    case 0xC0B278: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C0/C0B149.asm:195 BMI @UNKNOWN25
    case 0xC0B27A: cpu.execute_instruction<0x30>(0x000025, 2); return true;
    // src/unknown/C0/C0B149.asm:196 CMP #$0100
    case 0xC0B27C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C0/C0B149.asm:196 CMP #$0100
    // Overlapping static entry reached from 0xC0B27C.
    case 0xC0B27E: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/unknown/C0/C0B149.asm:197 BCC @UNKNOWN22
    case 0xC0B27F: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C0/C0B149.asm:197 BCC @UNKNOWN22
    // Overlapping static entry reached from 0xC0B27E.
    case 0xC0B280: cpu.execute_instruction<0x03>(0x0000A9, 2); return true;
    // src/unknown/C0/C0B149.asm:198 LDA #$00FF
    case 0xC0B281: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C0/C0B149.asm:198 LDA #$00FF
    // Overlapping static entry reached from 0xC0B280.
    case 0xC0B282: cpu.execute_instruction<0xFF>(0x0C8500, 4); return true;
    // src/unknown/C0/C0B149.asm:198 LDA #$00FF
    // Overlapping static entry reached from 0xC0B281.
    case 0xC0B283: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0B149.asm:200 STA $0C
    case 0xC0B284: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0B149.asm:201 LDA $00
    case 0xC0B286: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C0/C0B149.asm:202 SEC
    case 0xC0B288: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:203 SBC $08
    case 0xC0B289: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // src/unknown/C0/C0B149.asm:204 BMI @UNKNOWN23
    case 0xC0B28B: cpu.execute_instruction<0x30>(0x000007, 2); return true;
    // src/unknown/C0/C0B149.asm:205 CMP #$0100
    case 0xC0B28D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C0/C0B149.asm:205 CMP #$0100
    // Overlapping static entry reached from 0xC0B28D.
    case 0xC0B28F: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C0/C0B149.asm:206 BCS @UNKNOWN25
    case 0xC0B290: cpu.execute_instruction<0xB0>(0x00000F, 2); return true;
    // src/unknown/C0/C0B149.asm:206 BCS @UNKNOWN25
    // Overlapping static entry reached from 0xC0B28F.
    case 0xC0B291: cpu.execute_instruction<0x0F>(0xA90380, 4); return true;
    // src/unknown/C0/C0B149.asm:207 BRA @UNKNOWN24
    case 0xC0B292: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0B149.asm:209 LDA #$0000
    case 0xC0B294: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0B149.asm:209 LDA #$0000
    // Overlapping static entry reached from 0xC0B291.
    case 0xC0B295: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0B149.asm:209 LDA #$0000
    // Overlapping static entry reached from 0xC0B294.
    case 0xC0B296: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C0/C0B149.asm:211 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B297: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:212 XBA
    case 0xC0B299: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:213 LDA $0C
    case 0xC0B29A: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/unknown/C0/C0B149.asm:214 XBA
    case 0xC0B29C: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:215 REP #PROC_FLAGS::ACCUM8
    case 0xC0B29D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:216 BRA @UNKNOWN26
    case 0xC0B29F: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0B149.asm:218 LDA #$00FF
    case 0xC0B2A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C0/C0B149.asm:218 LDA #$00FF
    // Overlapping static entry reached from 0xC0B2A1.
    case 0xC0B2A3: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C0B149.asm:220 STA SWIRL_WINDOW_HDMA_BUFFER,Y
    case 0xC0B2A4: cpu.execute_instruction<0x99>(0x004356, 3); return true;
    // src/unknown/C0/C0B149.asm:221 PHA
    case 0xC0B2A7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:222 LDA $0A
    case 0xC0B2A8: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C0/C0B149.asm:223 ASL
    case 0xC0B2AA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:224 ASL
    case 0xC0B2AB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:225 STA $0C
    case 0xC0B2AC: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0B149.asm:226 TYA
    case 0xC0B2AE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:227 SEC
    case 0xC0B2AF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:228 SBC $0C
    case 0xC0B2B0: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // src/unknown/C0/C0B149.asm:229 TAX
    case 0xC0B2B2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:230 PLA
    case 0xC0B2B3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:231 CPX #$0000
    case 0xC0B2B4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C0B149.asm:231 CPX #$0000
    // Overlapping static entry reached from 0xC0B2B4.
    case 0xC0B2B6: cpu.execute_instruction<0x00>(0x000030, 2); return true;
    // src/unknown/C0/C0B149.asm:232 BMI @UNKNOWN27
    case 0xC0B2B7: cpu.execute_instruction<0x30>(0x000003, 2); return true;
    // src/unknown/C0/C0B149.asm:233 STA SWIRL_WINDOW_HDMA_BUFFER,X
    case 0xC0B2B9: cpu.execute_instruction<0x9D>(0x004356, 3); return true;
    // src/unknown/C0/C0B149.asm:235 DEY
    case 0xC0B2BC: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:236 DEY
    case 0xC0B2BD: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:237 DEC $0A
    case 0xC0B2BE: cpu.execute_instruction<0xC6>(0x00000A, 2); return true;
    // src/unknown/C0/C0B149.asm:238 BMI @UNKNOWN28
    case 0xC0B2C0: cpu.execute_instruction<0x30>(0x000003, 2); return true;
    // src/unknown/C0/C0B149.asm:239 JMP @UNKNOWN19
    case 0xC0B2C2: cpu.execute_instruction<0x4C>(0x00B23C, 3); return true;
    // src/unknown/C0/C0B149.asm:241 TYA
    case 0xC0B2C5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:242 SEC
    case 0xC0B2C6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:243 SBC $06
    case 0xC0B2C7: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // src/unknown/C0/C0B149.asm:244 SEC
    case 0xC0B2C9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:245 SBC $06
    case 0xC0B2CA: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // src/unknown/C0/C0B149.asm:246 TAY
    case 0xC0B2CC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:247 CPY #$0000
    case 0xC0B2CD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C0/C0B149.asm:247 CPY #$0000
    // Overlapping static entry reached from 0xC0B2CD.
    case 0xC0B2CF: cpu.execute_instruction<0x00>(0x000030, 2); return true;
    // src/unknown/C0/C0B149.asm:248 BMI @UNKNOWN30
    case 0xC0B2D0: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/unknown/C0/C0B149.asm:249 LDA #$00FF
    case 0xC0B2D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C0/C0B149.asm:249 LDA #$00FF
    // Overlapping static entry reached from 0xC0B2D2.
    case 0xC0B2D4: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C0B149.asm:251 STA SWIRL_WINDOW_HDMA_BUFFER,Y
    case 0xC0B2D5: cpu.execute_instruction<0x99>(0x004356, 3); return true;
    // src/unknown/C0/C0B149.asm:252 DEY
    case 0xC0B2D8: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:253 DEY
    case 0xC0B2D9: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:254 BPL @UNKNOWN29
    case 0xC0B2DA: cpu.execute_instruction<0x10>(0x0000F9, 2); return true;
    // src/unknown/C0/C0B149.asm:256 PLD
    case 0xC0B2DC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:257 RTL
    case 0xC0B2DD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0B65F.asm (unresolved).
bool execute_unresolved_c0_c0b65f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0B65F.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0B632: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0B65F.asm:4 TXY
    case 0xC0B634: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0B65F.asm:5 TAX
    case 0xC0B635: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B65F.asm:6 STX GAME_STATE+game_state::leader_x_coord
    case 0xC0B636: cpu.execute_instruction<0x8E>(0x009B28, 3); return true;
    // src/unknown/C0/C0B65F.asm:7 STY GAME_STATE+game_state::leader_y_coord
    case 0xC0B639: cpu.execute_instruction<0x8C>(0x009B2C, 3); return true;
    // src/unknown/C0/C0B65F.asm:8 LDA #$0002
    case 0xC0B63C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0B65F.asm:8 LDA #$0002
    // Overlapping static entry reached from 0xC0B63C.
    case 0xC0B63E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0B65F.asm:9 STA GAME_STATE+game_state::leader_direction
    case 0xC0B63F: cpu.execute_instruction<0x8D>(0x009B30, 3); return true;
    // src/unknown/C0/C0B65F.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B642: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0B65F.asm:11 LDA #$0001
    case 0xC0B644: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C0/C0B65F.asm:12 STA GAME_STATE + game_state::party_members
    case 0xC0B646: cpu.execute_instruction<0x8D>(0x009B20, 3); return true;
    // src/unknown/C0/C0B65F.asm:12 STA GAME_STATE + game_state::party_members
    // Overlapping static entry reached from 0xC0B644.
    case 0xC0B647: cpu.execute_instruction<0x20>(0x008E9B, 3); return true;
    // src/unknown/C0/C0B65F.asm:13 STX ENTITY_SCREEN_X_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC0B649: cpu.execute_instruction<0x8E>(0x000B3C, 3); return true;
    // src/unknown/C0/C0B65F.asm:13 STX ENTITY_SCREEN_X_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    // Overlapping static entry reached from 0xC0B647.
    case 0xC0B64A: cpu.execute_instruction<0x3C>(0x008C0B, 3); return true;
    // src/unknown/C0/C0B65F.asm:14 STY ENTITY_SCREEN_Y_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC0B64C: cpu.execute_instruction<0x8C>(0x000B78, 3); return true;
    // src/unknown/C0/C0B65F.asm:14 STY ENTITY_SCREEN_Y_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    // Overlapping static entry reached from 0xC0B64A.
    case 0xC0B64D: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // src/unknown/C0/C0B65F.asm:14 STY ENTITY_SCREEN_Y_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    // Overlapping static entry reached from 0xC0B64D.
    case 0xC0B64E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0B65F.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC0B64F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B65F.asm:16 RTL
    case 0xC0B651: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0B67F.asm (unresolved).
bool execute_unresolved_c0_c0b67f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0B67F.asm:3 BEGIN_C_FUNCTION
    case 0xC0B652: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0B67F.asm:10 END_STACK_VARS
    case 0xC0B654: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0B67F.asm:10 END_STACK_VARS
    case 0xC0B655: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0B67F.asm:10 END_STACK_VARS
    case 0xC0B656: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0B67F.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC0B656.
    case 0xC0B658: cpu.execute_instruction<0xFF>(0x5E225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0B67F.asm:10 END_STACK_VARS
    case 0xC0B659: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0B67F.asm:11 JSL UNKNOWN_C0927C
    case 0xC0B65A: cpu.execute_instruction<0x22>(0xC0925E, 4); return true;
    // src/unknown/C0/C0B67F.asm:11 JSL UNKNOWN_C0927C
    // Overlapping static entry reached from 0xC0B658.
    case 0xC0B65C: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/unknown/C0/C0B67F.asm:12 JSL UNKNOWN_C01A86
    case 0xC0B65E: cpu.execute_instruction<0x22>(0xC01A9C, 4); return true;
    // src/unknown/C0/C0B67F.asm:13 LDX #0
    case 0xC0B662: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0B67F.asm:13 LDX #0
    // Overlapping static entry reached from 0xC0B662.
    case 0xC0B664: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C0B67F.asm:14 LDA #$8000
    case 0xC0B665: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/unknown/C0/C0B67F.asm:14 LDA #$8000
    // Overlapping static entry reached from 0xC0B665.
    case 0xC0B667: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/unknown/C0/C0B67F.asm:15 JSL ALLOC_SPRITE_MEM
    case 0xC0B668: cpu.execute_instruction<0x22>(0xC01C27, 4); return true;
    // src/unknown/C0/C0B67F.asm:16 JSL INITIALIZE_MISC_OBJECT_DATA
    case 0xC0B66C: cpu.execute_instruction<0x22>(0xC01A7F, 4); return true;
    // src/unknown/C0/C0B67F.asm:17 STZ BATTLE_MODE
    case 0xC0B670: cpu.execute_instruction<0x9C>(0x005148, 3); return true;
    // src/unknown/C0/C0B67F.asm:18 STZ INPUT_DISABLE_FRAME_COUNTER
    case 0xC0B673: cpu.execute_instruction<0x9C>(0x0060FA, 3); return true;
    // src/unknown/C0/C0B67F.asm:19 LDA #1
    case 0xC0B676: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0B67F.asm:19 LDA #1
    // Overlapping static entry reached from 0xC0B676.
    case 0xC0B678: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0B67F.asm:20 STA NPC_SPAWNS_ENABLED
    case 0xC0B679: cpu.execute_instruction<0x8D>(0x004DDE, 3); return true;
    // src/unknown/C0/C0B67F.asm:21 LDA #.LOWORD(-1)
    case 0xC0B67C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0B67F.asm:21 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0B67C.
    case 0xC0B67E: cpu.execute_instruction<0xFF>(0x4DE08D, 4); return true;
    // src/unknown/C0/C0B67F.asm:22 STA ENEMY_SPAWNS_ENABLED
    case 0xC0B67F: cpu.execute_instruction<0x8D>(0x004DE0, 3); return true;
    // src/unknown/C0/C0B67F.asm:23 LDA #10
    case 0xC0B682: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C0/C0B67F.asm:23 LDA #10
    // Overlapping static entry reached from 0xC0B682.
    case 0xC0B684: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0B67F.asm:24 STA OVERWORLD_ENEMY_MAXIMUM
    case 0xC0B685: cpu.execute_instruction<0x8D>(0x004DE4, 3); return true;
    // src/unknown/C0/C0B67F.asm:25 STZ BATTLE_SWIRL_COUNTDOWN
    case 0xC0B688: cpu.execute_instruction<0x9C>(0x0060E6, 3); return true;
    // src/unknown/C0/C0B67F.asm:26 STZ PENDING_INTERACTIONS
    case 0xC0B68B: cpu.execute_instruction<0x9C>(0x006120, 3); return true;
    // src/unknown/C0/C0B67F.asm:27 LDA #1
    case 0xC0B68E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0B67F.asm:27 LDA #1
    // Overlapping static entry reached from 0xC0B68E.
    case 0xC0B690: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0B67F.asm:28 JSL SET_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC0B691: cpu.execute_instruction<0x22>(0xC4D0E4, 4); return true;
    // src/unknown/C0/C0B67F.asm:29 LDA #1687
    case 0xC0B695: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000097, 2); else cpu.execute_instruction<0xA9>(0x000697, 3); return true;
    // src/unknown/C0/C0B67F.asm:29 LDA #1687
    // Overlapping static entry reached from 0xC0B695.
    case 0xC0B697: cpu.execute_instruction<0x06>(0x00008D, 2); return true;
    // src/unknown/C0/C0B67F.asm:30 STA DAD_PHONE_TIMER
    case 0xC0B698: cpu.execute_instruction<0x8D>(0x00A05A, 3); return true;
    // src/unknown/C0/C0B67F.asm:30 STA DAD_PHONE_TIMER
    // Overlapping static entry reached from 0xC0B697.
    case 0xC0B699: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/unknown/C0/C0B67F.asm:30 STA DAD_PHONE_TIMER
    // Overlapping static entry reached from 0xC0B699.
    case 0xC0B69A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000A9, 2); else cpu.execute_instruction<0xA0>(0x0016A9, 3); return true;
    // src/unknown/C0/C0B67F.asm:31 LDA #.LOWORD(PROCESS_OVERWORLD_TASKS)
    case 0xC0B69B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000016, 2); else cpu.execute_instruction<0xA9>(0x00DC16, 3); return true;
    // src/unknown/C0/C0B67F.asm:31 LDA #.LOWORD(PROCESS_OVERWORLD_TASKS)
    // Overlapping static entry reached from 0xC0B69A.
    case 0xC0B69C: cpu.execute_instruction<0x16>(0x0000DC, 2); return true;
    // src/unknown/C0/C0B67F.asm:31 LDA #.LOWORD(PROCESS_OVERWORLD_TASKS)
    // Overlapping static entry reached from 0xC0B69B.
    case 0xC0B69D: cpu.execute_instruction<0xDC>(0x001C22, 3); return true;
    // src/unknown/C0/C0B67F.asm:32 JSL SET_IRQ_CALLBACK
    case 0xC0B69E: cpu.execute_instruction<0x22>(0xC0851C, 4); return true;
    // src/unknown/C0/C0B67F.asm:33 STZ PSI_TELEPORT_STYLE
    case 0xC0B6A2: cpu.execute_instruction<0x9C>(0x00A143, 3); return true;
    // src/unknown/C0/C0B67F.asm:34 STZ PSI_TELEPORT_DESTINATION
    case 0xC0B6A5: cpu.execute_instruction<0x9C>(0x00A141, 3); return true;
    // src/unknown/C0/C0B67F.asm:35 LDA #.LOWORD(-1)
    case 0xC0B6A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0B67F.asm:35 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0B6A8.
    case 0xC0B6AA: cpu.execute_instruction<0xFF>(0xB67C8D, 4); return true;
    // src/unknown/C0/C0B67F.asm:36 STA ENTITY_FADE_ENTITY
    case 0xC0B6AB: cpu.execute_instruction<0x8D>(0x00B67C, 3); return true;
    // src/unknown/C0/C0B67F.asm:37 LDA #23
    case 0xC0B6AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/unknown/C0/C0B67F.asm:37 LDA #23
    // Overlapping static entry reached from 0xC0B6AE.
    case 0xC0B6B0: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0B67F.asm:38 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC0B6B1: cpu.execute_instruction<0x8D>(0x000A42, 3); return true;
    // src/unknown/C0/C0B67F.asm:39 LDA #24
    case 0xC0B6B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C0B67F.asm:39 LDA #24
    // Overlapping static entry reached from 0xC0B6B4.
    case 0xC0B6B6: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0B67F.asm:40 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC0B6B7: cpu.execute_instruction<0x8D>(0x000A44, 3); return true;
    // src/unknown/C0/C0B67F.asm:41 LDY #0
    case 0xC0B6BA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0B67F.asm:41 LDY #0
    // Overlapping static entry reached from 0xC0B6BA.
    case 0xC0B6BC: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C0/C0B67F.asm:42 TYX
    case 0xC0B6BD: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C0B67F.asm:43 LDA #EVENT_SCRIPT::EVENT_001
    case 0xC0B6BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0B67F.asm:43 LDA #EVENT_SCRIPT::EVENT_001
    // Overlapping static entry reached from 0xC0B6BE.
    case 0xC0B6C0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0B67F.asm:44 JSL INIT_ENTITY
    case 0xC0B6C1: cpu.execute_instruction<0x22>(0xC09300, 4); return true;
    // src/unknown/C0/C0B67F.asm:45 JSL UNKNOWN_C02D29
    case 0xC0B6C5: cpu.execute_instruction<0x22>(0xC02EFE, 4); return true;
    // src/unknown/C0/C0B67F.asm:46 JSL UNKNOWN_C03A24
    case 0xC0B6C9: cpu.execute_instruction<0x22>(0xC03C74, 4); return true;
    // src/unknown/C0/C0B67F.asm:47 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B6CD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/unknown/C0/C0B67F.asm:48 STZ_BADOPT @LOCAL00
    case 0xC0B6CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/C0/C0B67F.asm:48 STZ_BADOPT @LOCAL00
    case 0xC0B6D1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/C0/C0B67F.asm:48 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC0B6CF.
    case 0xC0B6D2: cpu.execute_instruction<0x0E>(0x0000A2, 3); return true;
    // src/unknown/C0/C0B67F.asm:49 LDX #BPP4PALETTE_SIZE * 16
    case 0xC0B6D3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/unknown/C0/C0B67F.asm:49 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC0B6D3.
    case 0xC0B6D5: cpu.execute_instruction<0x02>(0x0000C2, 2); return true;
    // src/unknown/C0/C0B67F.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC0B6D6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B67F.asm:51 LDA #.LOWORD(PALETTES)
    case 0xC0B6D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C0/C0B67F.asm:51 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0B6D8.
    case 0xC0B6DA: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C0/C0B67F.asm:52 JSL MEMSET16
    case 0xC0B6DB: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C0/C0B67F.asm:53 JSL UNKNOWN_C47F87
    case 0xC0B6DF: cpu.execute_instruction<0x22>(0xC45C1A, 4); return true;
    // src/unknown/C0/C0B67F.asm:54 JSL OVERWORLD_INITIALIZE
    case 0xC0B6E3: cpu.execute_instruction<0x22>(0xC0004B, 4); return true;
    // src/unknown/C0/C0B67F.asm:55 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0B6E7: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C0B67F.asm:56 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0B6EA: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C0B67F.asm:57 JSL LOAD_MAP_AT_POSITION
    case 0xC0B6ED: cpu.execute_instruction<0x22>(0xC0140C, 4); return true;
    // src/unknown/C0/C0B67F.asm:58 JSL SPAWN_BUZZ_BUZZ
    case 0xC0B6F1: cpu.execute_instruction<0x22>(0xC06D4F, 4); return true;
    // src/unknown/C0/C0B67F.asm:59 JSL LOAD_WINDOW_GFX
    case 0xC0B6F5: cpu.execute_instruction<0x22>(0xC459AB, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0B67F.asm:61 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC0B6F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0B67F.asm:61 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    // Overlapping static entry reached from 0xC0B6F9.
    case 0xC0B6FB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0B67F.asm:61 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC0B6FC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0B67F.asm:61 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC0B6FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0B67F.asm:61 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    // Overlapping static entry reached from 0xC0B6FE.
    case 0xC0B700: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0B67F.asm:61 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC0B701: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C0/C0B67F.asm:61 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC0B703: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C0/C0B67F.asm:61 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    // Overlapping static entry reached from 0xC0B703.
    case 0xC0B705: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C0/C0B67F.asm:61 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC0B706: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C0/C0B67F.asm:61 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    // Overlapping static entry reached from 0xC0B706.
    case 0xC0B708: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0B67F.asm:61 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC0B709: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C0/C0B67F.asm:61 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC0B70B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0B67F.asm:61 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC0B70D: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0B67F.asm:61 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    // Overlapping static entry reached from 0xC0B70B.
    case 0xC0B70E: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0B67F.asm:61 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    // Overlapping static entry reached from 0xC0B70E.
    case 0xC0B710: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x002B22, 3); return true;
    // src/unknown/C0/C0B67F.asm:66 JSL UNKNOWN_C039E5
    case 0xC0B711: cpu.execute_instruction<0x22>(0xC03C2B, 4); return true;
    // src/unknown/C0/C0B67F.asm:66 JSL UNKNOWN_C039E5
    // Overlapping static entry reached from 0xC0B710.
    case 0xC0B712: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0B67F.asm:66 JSL UNKNOWN_C039E5
    // Overlapping static entry reached from 0xC0B710.
    case 0xC0B713: cpu.execute_instruction<0x3C>(0x002BC0, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0B67F.asm:67 END_C_FUNCTION
    case 0xC0B715: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0B67F.asm:67 END_C_FUNCTION
    case 0xC0B716: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0B9BC.asm (unresolved).
bool execute_unresolved_c0_c0b9bc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0B9BC.asm:3 BEGIN_C_FUNCTION
    case 0xC0B997: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0B9BC.asm:14 END_STACK_VARS
    case 0xC0B999: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0B9BC.asm:14 END_STACK_VARS
    case 0xC0B99A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0B9BC.asm:14 END_STACK_VARS
    case 0xC0B99B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0B9BC.asm:14 END_STACK_VARS
    case 0xC0B99C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0B9BC.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC0B99C.
    case 0xC0B99E: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0B9BC.asm:14 END_STACK_VARS
    case 0xC0B99F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0B9BC.asm:14 END_STACK_VARS
    case 0xC0B9A0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:15 STY @LOCAL04
    case 0xC0B9A1: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C0/C0B9BC.asm:15 STY @LOCAL04
    // Overlapping static entry reached from 0xC0B99E.
    case 0xC0B9A2: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C0/C0B9BC.asm:16 STX @LOCAL03
    case 0xC0B9A3: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C0B9BC.asm:16 STX @LOCAL03
    // Overlapping static entry reached from 0xC0B9A2.
    case 0xC0B9A4: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/unknown/C0/C0B9BC.asm:17 STA @LOCAL02
    case 0xC0B9A5: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0B9BC.asm:17 STA @LOCAL02
    // Overlapping static entry reached from 0xC0B9A4.
    case 0xC0B9A6: cpu.execute_instruction<0x12>(0x0000A6, 2); return true;
    // src/unknown/C0/C0B9BC.asm:18 LDX @PARAM03
    case 0xC0B9A7: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/unknown/C0/C0B9BC.asm:18 LDX @PARAM03
    // Overlapping static entry reached from 0xC0B9A6.
    case 0xC0B9A8: cpu.execute_instruction<0x26>(0x000086, 2); return true;
    // src/unknown/C0/C0B9BC.asm:19 STX @VIRTUAL04
    case 0xC0B9A9: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C0/C0B9BC.asm:19 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC0B9A8.
    case 0xC0B9AA: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/unknown/C0/C0B9BC.asm:20 LDA #0
    case 0xC0B9AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0B9BC.asm:20 LDA #0
    // Overlapping static entry reached from 0xC0B9AA.
    case 0xC0B9AC: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0B9BC.asm:20 LDA #0
    // Overlapping static entry reached from 0xC0B9AB.
    case 0xC0B9AD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0B9BC.asm:21 STA @VIRTUAL02
    case 0xC0B9AE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0B9BC.asm:22 BRA @UNKNOWN1
    case 0xC0B9B0: cpu.execute_instruction<0x80>(0x00005A, 2); return true;
    // src/unknown/C0/C0B9BC.asm:24 LDA @VIRTUAL02
    case 0xC0B9B2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0B9BC.asm:25 ASL
    case 0xC0B9B4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:27 CLC
    case 0xC0B9B5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:28 ADC #.LOWORD(GAME_STATE)
    case 0xC0B9B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C0B9BC.asm:28 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC0B9B6.
    case 0xC0B9B8: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:29 TAX
    case 0xC0B9B9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:30 LDA a:game_state::unknownA2,X
    case 0xC0B9BA: cpu.execute_instruction<0xBD>(0x00009F, 3); return true;
    // src/unknown/C0/C0B9BC.asm:35 ASL
    case 0xC0B9BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:36 TAY
    case 0xC0B9BE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:37 LDA ENTITY_SIZES,Y
    case 0xC0B9BF: cpu.execute_instruction<0xB9>(0x002F6C, 3); return true;
    // src/unknown/C0/C0B9BC.asm:38 STA @LOCAL01
    case 0xC0B9C2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0B9BC.asm:39 LDA @VIRTUAL02
    case 0xC0B9C4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0B9BC.asm:40 ASL
    case 0xC0B9C6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:41 ASL
    case 0xC0B9C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:42 CLC
    case 0xC0B9C8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:43 ADC @LOCAL02
    case 0xC0B9C9: cpu.execute_instruction<0x65>(0x000012, 2); return true;
    // src/unknown/C0/C0B9BC.asm:44 TAX
    case 0xC0B9CB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:45 STX @LOCAL00
    case 0xC0B9CC: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0B9BC.asm:46 LDA @LOCAL01
    case 0xC0B9CE: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0B9BC.asm:47 ASL
    case 0xC0B9D0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:48 STA @LOCAL01
    case 0xC0B9D1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0B9BC.asm:49 TAX
    case 0xC0B9D3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:50 LDA ENTITY_ABS_X_TABLE,Y
    case 0xC0B9D4: cpu.execute_instruction<0xB9>(0x000B84, 3); return true;
    // src/unknown/C0/C0B9BC.asm:51 SEC
    case 0xC0B9D7: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:52 SBC f:UNKNOWN_C42A1F,X
    case 0xC0B9D8: cpu.execute_instruction<0xFF>(0xC4295D, 4); return true;
    // src/unknown/C0/C0B9BC.asm:53 LSR
    case 0xC0B9DC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:54 LSR
    case 0xC0B9DD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:55 LSR
    case 0xC0B9DE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:56 SEC
    case 0xC0B9DF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:57 SBC @LOCAL04
    case 0xC0B9E0: cpu.execute_instruction<0xE5>(0x000016, 2); return true;
    // src/unknown/C0/C0B9BC.asm:58 AND #$003F
    case 0xC0B9E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0B9BC.asm:58 AND #$003F
    // Overlapping static entry reached from 0xC0B9E2.
    case 0xC0B9E4: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C0B9BC.asm:59 LDX @LOCAL00
    case 0xC0B9E5: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0B9BC.asm:60 STA a:pathfinding::targets + 2,X
    case 0xC0B9E7: cpu.execute_instruction<0x9D>(0x00007E, 3); return true;
    // src/unknown/C0/C0B9BC.asm:61 LDA @LOCAL01
    case 0xC0B9EA: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0B9BC.asm:62 PHA
    case 0xC0B9EC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:63 TAX
    case 0xC0B9ED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:64 LDA ENTITY_ABS_Y_TABLE,Y
    case 0xC0B9EE: cpu.execute_instruction<0xB9>(0x000BC0, 3); return true;
    // src/unknown/C0/C0B9BC.asm:65 SEC
    case 0xC0B9F1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:66 SBC f:UNKNOWN_C42A41,X
    case 0xC0B9F2: cpu.execute_instruction<0xFF>(0xC4297F, 4); return true;
    // src/unknown/C0/C0B9BC.asm:67 PLX
    case 0xC0B9F6: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:68 CLC
    case 0xC0B9F7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:69 ADC f:UNKNOWN_C42AEB,X
    case 0xC0B9F8: cpu.execute_instruction<0x7F>(0xC42A29, 4); return true;
    // src/unknown/C0/C0B9BC.asm:70 LSR
    case 0xC0B9FC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:71 LSR
    case 0xC0B9FD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:72 LSR
    case 0xC0B9FE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:73 SEC
    case 0xC0B9FF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:74 SBC @VIRTUAL04
    case 0xC0BA00: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C0/C0B9BC.asm:75 AND #$003F
    case 0xC0BA02: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0B9BC.asm:75 AND #$003F
    // Overlapping static entry reached from 0xC0BA02.
    case 0xC0BA04: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C0B9BC.asm:76 LDX @LOCAL00
    case 0xC0BA05: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0B9BC.asm:77 STA a:pathfinding::targets,X
    case 0xC0BA07: cpu.execute_instruction<0x9D>(0x00007C, 3); return true;
    // src/unknown/C0/C0B9BC.asm:78 INC @VIRTUAL02
    case 0xC0BA0A: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0B9BC.asm:80 LDA @VIRTUAL02
    case 0xC0BA0C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0B9BC.asm:81 CMP @LOCAL03
    case 0xC0BA0E: cpu.execute_instruction<0xC5>(0x000014, 2); return true;
    // src/unknown/C0/C0B9BC.asm:82 BCC @UNKNOWN0
    case 0xC0BA10: cpu.execute_instruction<0x90>(0x0000A0, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0B9BC.asm:83 END_C_FUNCTION
    case 0xC0BA12: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0B9BC.asm:83 END_C_FUNCTION
    case 0xC0BA13: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0BA35.asm (unresolved).
bool execute_unresolved_c0_c0ba35_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0BA35.asm:3 BEGIN_C_FUNCTION
    case 0xC0BA14: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0BA35.asm:33 END_STACK_VARS
    case 0xC0BA16: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0BA35.asm:33 END_STACK_VARS
    case 0xC0BA17: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0BA35.asm:33 END_STACK_VARS
    case 0xC0BA18: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0BA35.asm:33 END_STACK_VARS
    case 0xC0BA19: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C6, 2); else cpu.execute_instruction<0x69>(0x00FFC6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0BA35.asm:33 END_STACK_VARS
    // Overlapping static entry reached from 0xC0BA19.
    case 0xC0BA1B: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0BA35.asm:33 END_STACK_VARS
    case 0xC0BA1C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0BA35.asm:33 END_STACK_VARS
    case 0xC0BA1D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:34 STY @LOCAL13
    case 0xC0BA1E: cpu.execute_instruction<0x84>(0x000038, 2); return true;
    // src/unknown/C0/C0BA35.asm:34 STY @LOCAL13
    // Overlapping static entry reached from 0xC0BA1B.
    case 0xC0BA1F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:35 STX @LOCAL12
    case 0xC0BA20: cpu.execute_instruction<0x86>(0x000036, 2); return true;
    // src/unknown/C0/C0BA35.asm:36 STA @VIRTUAL04
    case 0xC0BA22: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0BA35.asm:37 STA @LOCAL11
    case 0xC0BA24: cpu.execute_instruction<0x85>(0x000034, 2); return true;
    // src/unknown/C0/C0BA35.asm:38 LDA @PARAM06
    case 0xC0BA26: cpu.execute_instruction<0xA5>(0x00004E, 2); return true;
    // src/unknown/C0/C0BA35.asm:39 STA @LOCAL10
    case 0xC0BA28: cpu.execute_instruction<0x85>(0x000032, 2); return true;
    // src/unknown/C0/C0BA35.asm:40 LDA @PARAM05
    case 0xC0BA2A: cpu.execute_instruction<0xA5>(0x00004C, 2); return true;
    // src/unknown/C0/C0BA35.asm:41 STA @LOCAL0F
    case 0xC0BA2C: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // src/unknown/C0/C0BA35.asm:42 LDX @PARAM04
    case 0xC0BA2E: cpu.execute_instruction<0xA6>(0x00004A, 2); return true;
    // src/unknown/C0/C0BA35.asm:43 STX @LOCAL0E
    case 0xC0BA30: cpu.execute_instruction<0x86>(0x00002E, 2); return true;
    // src/unknown/C0/C0BA35.asm:44 LDY @PARAM03
    case 0xC0BA32: cpu.execute_instruction<0xA4>(0x000048, 2); return true;
    // src/unknown/C0/C0BA35.asm:45 STY @LOCAL0D
    case 0xC0BA34: cpu.execute_instruction<0x84>(0x00002C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BA35.asm:46 LOADPTR BUFFER + $3000, @VIRTUAL06
    case 0xC0BA36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x003000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BA35.asm:46 LOADPTR BUFFER + $3000, @VIRTUAL06
    // Overlapping static entry reached from 0xC0BA36.
    case 0xC0BA38: cpu.execute_instruction<0x30>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0BA35.asm:46 LOADPTR BUFFER + $3000, @VIRTUAL06
    case 0xC0BA39: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0BA35.asm:46 LOADPTR BUFFER + $3000, @VIRTUAL06
    // Overlapping static entry reached from 0xC0BA38.
    case 0xC0BA3A: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BA35.asm:46 LOADPTR BUFFER + $3000, @VIRTUAL06
    case 0xC0BA3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BA35.asm:46 LOADPTR BUFFER + $3000, @VIRTUAL06
    // Overlapping static entry reached from 0xC0BA3A.
    case 0xC0BA3C: cpu.execute_instruction<0x7F>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BA35.asm:46 LOADPTR BUFFER + $3000, @VIRTUAL06
    // Overlapping static entry reached from 0xC0BA3B.
    case 0xC0BA3D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0BA35.asm:46 LOADPTR BUFFER + $3000, @VIRTUAL06
    case 0xC0BA3E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0BA35.asm:47 LDA @LOCAL12
    case 0xC0BA40: cpu.execute_instruction<0xA5>(0x000036, 2); return true;
    // src/unknown/C0/C0BA35.asm:48 LDX @VIRTUAL04
    case 0xC0BA42: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0BA35.asm:49 STA a:pathfinding::target_count,X
    case 0xC0BA44: cpu.execute_instruction<0x9D>(0x00009C, 3); return true;
    // src/unknown/C0/C0BA35.asm:50 LDX #0
    case 0xC0BA47: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0BA35.asm:50 LDX #0
    // Overlapping static entry reached from 0xC0BA47.
    case 0xC0BA49: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C0BA35.asm:51 STX @LOCAL0C
    case 0xC0BA4A: cpu.execute_instruction<0x86>(0x00002A, 2); return true;
    // src/unknown/C0/C0BA35.asm:52 BRA @UNKNOWN5
    case 0xC0BA4C: cpu.execute_instruction<0x80>(0x000058, 2); return true;
    // src/unknown/C0/C0BA35.asm:54 LDA #0
    case 0xC0BA4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0BA35.asm:54 LDA #0
    // Overlapping static entry reached from 0xC0BA4E.
    case 0xC0BA50: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BA35.asm:55 STA @LOCAL0B
    case 0xC0BA51: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:56 BRA @UNKNOWN4
    case 0xC0BA53: cpu.execute_instruction<0x80>(0x000045, 2); return true;
    // src/unknown/C0/C0BA35.asm:58 CLC
    case 0xC0BA55: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:59 ADC @LOCAL13
    case 0xC0BA56: cpu.execute_instruction<0x65>(0x000038, 2); return true;
    // src/unknown/C0/C0BA35.asm:60 AND #$003F
    case 0xC0BA58: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0BA35.asm:60 AND #$003F
    // Overlapping static entry reached from 0xC0BA58.
    case 0xC0BA5A: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C0/C0BA35.asm:61 PHA
    case 0xC0BA5B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:62 LDX @LOCAL0C
    case 0xC0BA5C: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // src/unknown/C0/C0BA35.asm:63 STX @VIRTUAL02
    case 0xC0BA5E: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:64 TYA
    case 0xC0BA60: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:65 CLC
    case 0xC0BA61: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:66 ADC @VIRTUAL02
    case 0xC0BA62: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:67 AND #$003F
    case 0xC0BA64: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0BA35.asm:67 AND #$003F
    // Overlapping static entry reached from 0xC0BA64.
    case 0xC0BA66: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C0BA35.asm:68 ASL
    case 0xC0BA67: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:69 ASL
    case 0xC0BA68: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:70 ASL
    case 0xC0BA69: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:71 ASL
    case 0xC0BA6A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:72 ASL
    case 0xC0BA6B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:73 ASL
    case 0xC0BA6C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:74 PLX
    case 0xC0BA6D: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:75 STX @VIRTUAL02
    case 0xC0BA6E: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:76 CLC
    case 0xC0BA70: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:77 ADC @VIRTUAL02
    case 0xC0BA71: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:78 TAX
    case 0xC0BA73: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:79 LDA LOADED_COLLISION_TILES,X
    case 0xC0BA74: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C0BA35.asm:80 AND #$00FF
    case 0xC0BA77: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0BA35.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC0BA77.
    case 0xC0BA79: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C0BA35.asm:81 AND #$00C0
    case 0xC0BA7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/unknown/C0/C0BA35.asm:81 AND #$00C0
    // Overlapping static entry reached from 0xC0BA7A.
    case 0xC0BA7C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0BA35.asm:82 BEQ @UNKNOWN2
    case 0xC0BA7D: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C0BA35.asm:83 SEP #PROC_FLAGS::ACCUM8
    case 0xC0BA7F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0BA35.asm:84 LDA #<-3
    case 0xC0BA81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FD, 2); else cpu.execute_instruction<0xA9>(0x0087FD, 3); return true;
    // src/unknown/C0/C0BA35.asm:85 STA [@VIRTUAL06]
    case 0xC0BA83: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C0/C0BA35.asm:85 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC0BA81.
    case 0xC0BA84: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C0/C0BA35.asm:86 REP #PROC_FLAGS::ACCUM8
    case 0xC0BA85: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0BA35.asm:86 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0BA84.
    case 0xC0BA86: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C0/C0BA35.asm:87 INC @VIRTUAL06
    case 0xC0BA87: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C0/C0BA35.asm:88 BRA @UNKNOWN3
    case 0xC0BA89: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C0/C0BA35.asm:90 SEP #PROC_FLAGS::ACCUM8
    case 0xC0BA8B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0BA35.asm:91 LDA #0
    case 0xC0BA8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/unknown/C0/C0BA35.asm:92 STA [@VIRTUAL06]
    case 0xC0BA8F: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C0/C0BA35.asm:92 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC0BA8D.
    case 0xC0BA90: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C0/C0BA35.asm:93 REP #PROC_FLAGS::ACCUM8
    case 0xC0BA91: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0BA35.asm:93 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0BA90.
    case 0xC0BA92: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C0/C0BA35.asm:94 INC @VIRTUAL06
    case 0xC0BA93: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C0/C0BA35.asm:96 LDA @LOCAL0B
    case 0xC0BA95: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:97 INC
    case 0xC0BA97: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:98 STA @LOCAL0B
    case 0xC0BA98: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:100 LDX @VIRTUAL04
    case 0xC0BA9A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0BA35.asm:101 CMP a:pathfinding::radius,X
    case 0xC0BA9C: cpu.execute_instruction<0xDD>(0x000078, 3); return true;
    // src/unknown/C0/C0BA35.asm:102 BNE @UNKNOWN1
    case 0xC0BA9F: cpu.execute_instruction<0xD0>(0x0000B4, 2); return true;
    // src/unknown/C0/C0BA35.asm:103 LDX @LOCAL0C
    case 0xC0BAA1: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // src/unknown/C0/C0BA35.asm:104 INX
    case 0xC0BAA3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:105 STX @LOCAL0C
    case 0xC0BAA4: cpu.execute_instruction<0x86>(0x00002A, 2); return true;
    // src/unknown/C0/C0BA35.asm:107 TXA
    case 0xC0BAA6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:108 LDX @VIRTUAL04
    case 0xC0BAA7: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0BA35.asm:109 CMP a:pathfinding::radius + 2,X
    case 0xC0BAA9: cpu.execute_instruction<0xDD>(0x00007A, 3); return true;
    // src/unknown/C0/C0BA35.asm:110 BNE @UNKNOWN0
    case 0xC0BAAC: cpu.execute_instruction<0xD0>(0x0000A0, 2); return true;
    // src/unknown/C0/C0BA35.asm:111 LDA #0
    case 0xC0BAAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0BA35.asm:111 LDA #0
    // Overlapping static entry reached from 0xC0BAAE.
    case 0xC0BAB0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BA35.asm:112 STA @VIRTUAL02
    case 0xC0BAB1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:113 STA @LOCAL0A
    case 0xC0BAB3: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C0/C0BA35.asm:114 STA @LOCAL0B
    case 0xC0BAB5: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:115 JMP @UNKNOWN10
    case 0xC0BAB7: cpu.execute_instruction<0x4C>(0x00BB67, 3); return true;
    // src/unknown/C0/C0BA35.asm:117 ASL
    case 0xC0BABA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:118 STA @LOCAL09
    case 0xC0BABB: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C0/C0BA35.asm:119 LDY #.LOWORD(ENTITY_SCRIPT_TABLE)
    case 0xC0BABD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000058, 2); else cpu.execute_instruction<0xA0>(0x000A58, 3); return true;
    // src/unknown/C0/C0BA35.asm:119 LDY #.LOWORD(ENTITY_SCRIPT_TABLE)
    // Overlapping static entry reached from 0xC0BABD.
    case 0xC0BABF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:120 LDA (@LOCAL09),Y
    case 0xC0BAC0: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/unknown/C0/C0BA35.asm:121 CMP #.LOWORD(-1)
    case 0xC0BAC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0BA35.asm:121 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0BAC2.
    case 0xC0BAC4: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0BA35.asm:122 BEQL @UNKNOWN9
    case 0xC0BAC5: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0BA35.asm:122 BEQL @UNKNOWN9
    case 0xC0BAC7: cpu.execute_instruction<0x4C>(0x00BB62, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0BA35.asm:122 BEQL @UNKNOWN9
    // Overlapping static entry reached from 0xC0BAC4.
    case 0xC0BAC8: cpu.execute_instruction<0x62>(0x00A0BB, 3); return true;
    // src/unknown/C0/C0BA35.asm:123 LDY #.LOWORD(ENTITY_PATHFINDING_STATES)
    case 0xC0BACA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005C, 2); else cpu.execute_instruction<0xA0>(0x00305C, 3); return true;
    // src/unknown/C0/C0BA35.asm:123 LDY #.LOWORD(ENTITY_PATHFINDING_STATES)
    // Overlapping static entry reached from 0xC0BAC8.
    case 0xC0BACB: cpu.execute_instruction<0x5C>(0x24B130, 4); return true;
    // src/unknown/C0/C0BA35.asm:123 LDY #.LOWORD(ENTITY_PATHFINDING_STATES)
    // Overlapping static entry reached from 0xC0BACA.
    case 0xC0BACC: cpu.execute_instruction<0x30>(0x0000B1, 2); return true;
    // src/unknown/C0/C0BA35.asm:124 LDA (@LOCAL09),Y
    case 0xC0BACD: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/unknown/C0/C0BA35.asm:124 LDA (@LOCAL09),Y
    // Overlapping static entry reached from 0xC0BACC.
    case 0xC0BACE: cpu.execute_instruction<0x24>(0x0000C9, 2); return true;
    // src/unknown/C0/C0BA35.asm:125 CMP #.LOWORD(-1)
    case 0xC0BACF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0BA35.asm:125 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0BACE.
    case 0xC0BAD0: cpu.execute_instruction<0xFF>(0x03F0FF, 4); return true;
    // src/unknown/C0/C0BA35.asm:125 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0BACF.
    case 0xC0BAD1: cpu.execute_instruction<0xFF>(0x4C03F0, 4); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0BA35.asm:126 BNEL @UNKNOWN9
    case 0xC0BAD2: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0BA35.asm:126 BNEL @UNKNOWN9
    case 0xC0BAD4: cpu.execute_instruction<0x4C>(0x00BB62, 3); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0BA35.asm:126 BNEL @UNKNOWN9
    // Overlapping static entry reached from 0xC0BAD1.
    case 0xC0BAD5: cpu.execute_instruction<0x62>(0x00A0BB, 3); return true;
    // src/unknown/C0/C0BA35.asm:127 LDY #.LOWORD(ENTITY_SIZES)
    case 0xC0BAD7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00006C, 2); else cpu.execute_instruction<0xA0>(0x002F6C, 3); return true;
    // src/unknown/C0/C0BA35.asm:127 LDY #.LOWORD(ENTITY_SIZES)
    // Overlapping static entry reached from 0xC0BAD5.
    case 0xC0BAD8: cpu.execute_instruction<0x6C>(0x00B12F, 3); return true;
    // src/unknown/C0/C0BA35.asm:127 LDY #.LOWORD(ENTITY_SIZES)
    // Overlapping static entry reached from 0xC0BAD7.
    case 0xC0BAD9: cpu.execute_instruction<0x2F>(0x8524B1, 4); return true;
    // src/unknown/C0/C0BA35.asm:128 LDA (@LOCAL09),Y
    case 0xC0BADA: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/unknown/C0/C0BA35.asm:129 STA @LOCAL08
    case 0xC0BADC: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:129 STA @LOCAL08
    // Overlapping static entry reached from 0xC0BAD9.
    case 0xC0BADD: cpu.execute_instruction<0x22>(0x8502A5, 4); return true;
    // src/unknown/C0/C0BA35.asm:130 LDA @VIRTUAL02
    case 0xC0BADE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:601 STA scratch
    // Macro caller: src/unknown/C0/C0BA35.asm:131 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0BAE0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:601 STA scratch
    // Macro caller: src/unknown/C0/C0BA35.asm:131 OPTIMIZED_MULT @VIRTUAL04, 18
    // Overlapping static entry reached from 0xC0BADD.
    case 0xC0BAE1: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:602 ASL
    // Macro caller: src/unknown/C0/C0BA35.asm:131 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0BAE2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:603 ASL
    // Macro caller: src/unknown/C0/C0BA35.asm:131 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0BAE3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:604 ASL
    // Macro caller: src/unknown/C0/C0BA35.asm:131 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0BAE4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:605 ADC scratch
    // Macro caller: src/unknown/C0/C0BA35.asm:131 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0BAE5: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:606 ASL
    // Macro caller: src/unknown/C0/C0BA35.asm:131 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0BAE7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:132 STA @VIRTUAL02
    case 0xC0BAE8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:133 LDA @LOCAL11
    case 0xC0BAEA: cpu.execute_instruction<0xA5>(0x000034, 2); return true;
    // src/unknown/C0/C0BA35.asm:134 STA @VIRTUAL04
    case 0xC0BAEC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0BA35.asm:135 CLC
    case 0xC0BAEE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:136 ADC @VIRTUAL02
    case 0xC0BAEF: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:137 TAX
    case 0xC0BAF1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:138 STX @LOCAL0C
    case 0xC0BAF2: cpu.execute_instruction<0x86>(0x00002A, 2); return true;
    // src/unknown/C0/C0BA35.asm:139 LDA @LOCAL0B
    case 0xC0BAF4: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:140 STA a:pathfinding::pathfinders + pathfinder::object_index,X
    case 0xC0BAF6: cpu.execute_instruction<0x9D>(0x0000B0, 3); return true;
    // src/unknown/C0/C0BA35.asm:141 LDA @LOCAL0E
    case 0xC0BAF9: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/unknown/C0/C0BA35.asm:142 STA a:pathfinding::pathfinders + pathfinder::from_offscreen,X
    case 0xC0BAFB: cpu.execute_instruction<0x9D>(0x0000A0, 3); return true;
    // src/unknown/C0/C0BA35.asm:143 LDA @LOCAL08
    case 0xC0BAFE: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:143 LDA @LOCAL08
    // Overlapping static entry reached from 0xC0BB78.
    case 0xC0BAFF: cpu.execute_instruction<0x22>(0x22850A, 4); return true;
    // src/unknown/C0/C0BA35.asm:144 ASL
    case 0xC0BB00: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:145 STA @LOCAL08
    case 0xC0BB01: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:146 LDX @LOCAL08
    case 0xC0BB03: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:147 LDA f:UNKNOWN_C42AA7,X
    case 0xC0BB05: cpu.execute_instruction<0xBF>(0xC429E5, 4); return true;
    // src/unknown/C0/C0BA35.asm:148 LDX @LOCAL0C
    case 0xC0BB09: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // src/unknown/C0/C0BA35.asm:149 STA a:pathfinding::pathfinders + pathfinder::unknown_hitbox + 2,X
    case 0xC0BB0B: cpu.execute_instruction<0x9D>(0x0000A4, 3); return true;
    // src/unknown/C0/C0BA35.asm:150 LDX @LOCAL08
    case 0xC0BB0E: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:151 LDA f:UNKNOWN_C42AC9,X
    case 0xC0BB10: cpu.execute_instruction<0xBF>(0xC42A07, 4); return true;
    // src/unknown/C0/C0BA35.asm:152 LDX @LOCAL0C
    case 0xC0BB14: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // src/unknown/C0/C0BA35.asm:153 STA a:pathfinding::pathfinders + pathfinder::unknown_hitbox,X
    case 0xC0BB16: cpu.execute_instruction<0x9D>(0x0000A2, 3); return true;
    // src/unknown/C0/C0BA35.asm:154 LDX @LOCAL08
    case 0xC0BB19: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:155 LDY #.LOWORD(ENTITY_ABS_X_TABLE)
    case 0xC0BB1B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000084, 2); else cpu.execute_instruction<0xA0>(0x000B84, 3); return true;
    // src/unknown/C0/C0BA35.asm:155 LDY #.LOWORD(ENTITY_ABS_X_TABLE)
    // Overlapping static entry reached from 0xC0BB1B.
    case 0xC0BB1D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:156 LDA (@LOCAL09),Y
    case 0xC0BB1E: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/unknown/C0/C0BA35.asm:157 SEC
    case 0xC0BB20: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:158 SBC f:UNKNOWN_C42A1F,X
    case 0xC0BB21: cpu.execute_instruction<0xFF>(0xC4295D, 4); return true;
    // src/unknown/C0/C0BA35.asm:159 LSR
    case 0xC0BB25: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:160 LSR
    case 0xC0BB26: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:161 LSR
    case 0xC0BB27: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:162 SEC
    case 0xC0BB28: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:163 SBC @LOCAL13
    case 0xC0BB29: cpu.execute_instruction<0xE5>(0x000038, 2); return true;
    // src/unknown/C0/C0BA35.asm:163 SBC @LOCAL13
    // Overlapping static entry reached from 0xC0BBA3.
    case 0xC0BB2A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:164 AND #$003F
    case 0xC0BB2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0BA35.asm:164 AND #$003F
    // Overlapping static entry reached from 0xC0BB2B.
    case 0xC0BB2D: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C0BA35.asm:165 LDX @LOCAL0C
    case 0xC0BB2E: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // src/unknown/C0/C0BA35.asm:166 STA a:pathfinding::pathfinders + pathfinder::origin + 2,X
    case 0xC0BB30: cpu.execute_instruction<0x9D>(0x0000A8, 3); return true;
    // src/unknown/C0/C0BA35.asm:167 LDY @LOCAL0D
    case 0xC0BB33: cpu.execute_instruction<0xA4>(0x00002C, 2); return true;
    // src/unknown/C0/C0BA35.asm:168 STY @VIRTUAL02
    case 0xC0BB35: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:169 LDX @LOCAL08
    case 0xC0BB37: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:170 LDY #.LOWORD(ENTITY_ABS_Y_TABLE)
    case 0xC0BB39: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000C0, 2); else cpu.execute_instruction<0xA0>(0x000BC0, 3); return true;
    // src/unknown/C0/C0BA35.asm:170 LDY #.LOWORD(ENTITY_ABS_Y_TABLE)
    // Overlapping static entry reached from 0xC0BB39.
    case 0xC0BB3B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:171 LDA (@LOCAL09),Y
    case 0xC0BB3C: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/unknown/C0/C0BA35.asm:172 SEC
    case 0xC0BB3E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:173 SBC f:UNKNOWN_C42A41,X
    case 0xC0BB3F: cpu.execute_instruction<0xFF>(0xC4297F, 4); return true;
    // src/unknown/C0/C0BA35.asm:174 LDX @LOCAL08
    case 0xC0BB43: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:175 CLC
    case 0xC0BB45: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:176 ADC f:UNKNOWN_C42AEB,X
    case 0xC0BB46: cpu.execute_instruction<0x7F>(0xC42A29, 4); return true;
    // src/unknown/C0/C0BA35.asm:177 LSR
    case 0xC0BB4A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:178 LSR
    case 0xC0BB4B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:179 LSR
    case 0xC0BB4C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:180 SEC
    case 0xC0BB4D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:181 SBC @VIRTUAL02
    case 0xC0BB4E: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:182 AND #$003F
    case 0xC0BB50: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0BA35.asm:182 AND #$003F
    // Overlapping static entry reached from 0xC0BB50.
    case 0xC0BB52: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C0BA35.asm:183 LDX @LOCAL0C
    case 0xC0BB53: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // src/unknown/C0/C0BA35.asm:184 STA a:pathfinding::pathfinders + pathfinder::origin,X
    case 0xC0BB55: cpu.execute_instruction<0x9D>(0x0000A6, 3); return true;
    // src/unknown/C0/C0BA35.asm:185 LDA @LOCAL0A
    case 0xC0BB58: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C0/C0BA35.asm:186 STA @VIRTUAL02
    case 0xC0BB5A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:187 INC @VIRTUAL02
    case 0xC0BB5C: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:188 LDA @VIRTUAL02
    case 0xC0BB5E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:189 STA @LOCAL0A
    case 0xC0BB60: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C0/C0BA35.asm:191 LDA @LOCAL0B
    case 0xC0BB62: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:192 INC
    case 0xC0BB64: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:193 STA @LOCAL0B
    case 0xC0BB65: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:195 CMP #MAX_ENTITIES
    case 0xC0BB67: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C0/C0BA35.asm:195 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC0BB67.
    case 0xC0BB69: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0BA35.asm:196 BNEL @UNKNOWN6
    case 0xC0BB6A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0BA35.asm:196 BNEL @UNKNOWN6
    case 0xC0BB6C: cpu.execute_instruction<0x4C>(0x00BABA, 3); return true;
    // src/unknown/C0/C0BA35.asm:197 LDA @VIRTUAL02
    case 0xC0BB6F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:198 LDX @VIRTUAL04
    case 0xC0BB71: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0BA35.asm:199 STA a:pathfinding::pathfinder_count,X
    case 0xC0BB73: cpu.execute_instruction<0x9D>(0x00009E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BA35.asm:200 LOADPTR BUFFER + $3000, @LOCAL00
    case 0xC0BB76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x003000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BA35.asm:200 LOADPTR BUFFER + $3000, @LOCAL00
    // Overlapping static entry reached from 0xC0BB76.
    case 0xC0BB78: cpu.execute_instruction<0x30>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0BA35.asm:200 LOADPTR BUFFER + $3000, @LOCAL00
    case 0xC0BB79: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0BA35.asm:200 LOADPTR BUFFER + $3000, @LOCAL00
    // Overlapping static entry reached from 0xC0BB78.
    case 0xC0BB7A: cpu.execute_instruction<0x0E>(0x007FA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BA35.asm:200 LOADPTR BUFFER + $3000, @LOCAL00
    case 0xC0BB7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BA35.asm:200 LOADPTR BUFFER + $3000, @LOCAL00
    // Overlapping static entry reached from 0xC0BB7B.
    case 0xC0BB7D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0BA35.asm:200 LOADPTR BUFFER + $3000, @LOCAL00
    case 0xC0BB7E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0BA35.asm:201 LDA #4
    case 0xC0BB80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C0/C0BA35.asm:201 LDA #4
    // Overlapping static entry reached from 0xC0BB80.
    case 0xC0BB82: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BA35.asm:202 STA @LOCAL01
    case 0xC0BB83: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0BA35.asm:203 LDA @LOCAL12
    case 0xC0BB85: cpu.execute_instruction<0xA5>(0x000036, 2); return true;
    // src/unknown/C0/C0BA35.asm:204 STA @LOCAL02
    case 0xC0BB87: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0BA35.asm:205 LDA @VIRTUAL04
    case 0xC0BB89: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0BA35.asm:206 CLC
    case 0xC0BB8B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:207 ADC #pathfinding::targets
    case 0xC0BB8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007C, 2); else cpu.execute_instruction<0x69>(0x00007C, 3); return true;
    // src/unknown/C0/C0BA35.asm:207 ADC #pathfinding::targets
    // Overlapping static entry reached from 0xC0BB8C.
    case 0xC0BB8E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BA35.asm:208 STA @LOCAL03
    case 0xC0BB8F: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0BA35.asm:209 LDA @VIRTUAL02
    case 0xC0BB91: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:210 STA @LOCAL04
    case 0xC0BB93: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0BA35.asm:211 LDA @VIRTUAL04
    case 0xC0BB95: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0BA35.asm:212 CLC
    case 0xC0BB97: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:213 ADC #pathfinding::pathfinders
    case 0xC0BB98: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A0, 2); else cpu.execute_instruction<0x69>(0x0000A0, 3); return true;
    // src/unknown/C0/C0BA35.asm:213 ADC #pathfinding::pathfinders
    // Overlapping static entry reached from 0xC0BB98.
    case 0xC0BB9A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BA35.asm:214 STA @LOCAL05
    case 0xC0BB9B: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0BA35.asm:215 LDA #.LOWORD(-1)
    case 0xC0BB9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0BA35.asm:215 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0BB9D.
    case 0xC0BB9F: cpu.execute_instruction<0xFF>(0xA51C85, 4); return true;
    // src/unknown/C0/C0BA35.asm:216 STA @LOCAL06
    case 0xC0BBA0: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0BA35.asm:217 MOVE_INT @LOCAL0F, @LOCAL07
    case 0xC0BBA2: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0BA35.asm:217 MOVE_INT @LOCAL0F, @LOCAL07
    // Overlapping static entry reached from 0xC0BB9F.
    case 0xC0BBA3: cpu.execute_instruction<0x30>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0BA35.asm:217 MOVE_INT @LOCAL0F, @LOCAL07
    case 0xC0BBA4: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0BA35.asm:217 MOVE_INT @LOCAL0F, @LOCAL07
    // Overlapping static entry reached from 0xC0BBA3.
    case 0xC0BBA5: cpu.execute_instruction<0x1E>(0x0032A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0BA35.asm:217 MOVE_INT @LOCAL0F, @LOCAL07
    case 0xC0BBA6: cpu.execute_instruction<0xA5>(0x000032, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0BA35.asm:217 MOVE_INT @LOCAL0F, @LOCAL07
    case 0xC0BBA8: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C0BA35.asm:218 LDA @VIRTUAL04
    case 0xC0BBAA: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0BA35.asm:219 CLC
    case 0xC0BBAC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:220 ADC #pathfinding::radius
    case 0xC0BBAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000078, 2); else cpu.execute_instruction<0x69>(0x000078, 3); return true;
    // src/unknown/C0/C0BA35.asm:220 ADC #pathfinding::radius
    // Overlapping static entry reached from 0xC0BBAD.
    case 0xC0BBAF: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C0BA35.asm:221 TAY
    case 0xC0BBB0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:222 LDX #.LOWORD(PATHFINDING_BUFFER)
    case 0xC0BBB1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x00F400, 3); return true;
    // src/unknown/C0/C0BA35.asm:222 LDX #.LOWORD(PATHFINDING_BUFFER)
    // Overlapping static entry reached from 0xC0BBB1.
    case 0xC0BBB3: cpu.execute_instruction<0xF4>(0x0000A9, 3); return true;
    // src/unknown/C0/C0BA35.asm:223 LDA #$0C00
    case 0xC0BBB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000C00, 3); return true;
    // src/unknown/C0/C0BA35.asm:223 LDA #$0C00
    // Overlapping static entry reached from 0xC0BBB4.
    case 0xC0BBB6: cpu.execute_instruction<0x0C>(0x000C22, 3); return true;
    // src/unknown/C0/C0BA35.asm:224 JSL UNKNOWN_C4B59F
    case 0xC0BBB7: cpu.execute_instruction<0x22>(0xC48A0C, 4); return true;
    // src/unknown/C0/C0BA35.asm:224 JSL UNKNOWN_C4B59F
    // Overlapping static entry reached from 0xC0BBB6.
    case 0xC0BBB9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:224 JSL UNKNOWN_C4B59F
    // Overlapping static entry reached from 0xC0BBB9.
    case 0xC0BBBA: cpu.execute_instruction<0xC4>(0x0000AA, 2); return true;
    // src/unknown/C0/C0BA35.asm:225 TAX
    case 0xC0BBBB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:226 STX @LOCAL0B
    case 0xC0BBBC: cpu.execute_instruction<0x86>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:228 JSL UNKNOWN_C4B595
    case 0xC0BBBE: cpu.execute_instruction<0x22>(0xC48A02, 4); return true;
    // src/unknown/C0/C0BA35.asm:229 CMP #$0C00
    case 0xC0BBC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000C00, 3); return true;
    // src/unknown/C0/C0BA35.asm:229 CMP #$0C00
    // Overlapping static entry reached from 0xC0BBC2.
    case 0xC0BBC4: cpu.execute_instruction<0x0C>(0x0002F0, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C0/C0BA35.asm:230 BGT @UNKNOWN12
    case 0xC0BBC5: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C0BA35.asm:230 BGT @UNKNOWN12
    case 0xC0BBC7: cpu.execute_instruction<0xB0>(0x0000F5, 2); return true;
    // src/unknown/C0/C0BA35.asm:231 LDX @LOCAL0B
    case 0xC0BBC9: cpu.execute_instruction<0xA6>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:232 BNE @UNKNOWN17
    case 0xC0BBCB: cpu.execute_instruction<0xD0>(0x000026, 2); return true;
    // src/unknown/C0/C0BA35.asm:233 LDA #0
    case 0xC0BBCD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0BA35.asm:233 LDA #0
    // Overlapping static entry reached from 0xC0BBCD.
    case 0xC0BBCF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BA35.asm:234 STA @LOCAL0B
    case 0xC0BBD0: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:235 BRA @UNKNOWN16
    case 0xC0BBD2: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C0/C0BA35.asm:237 ASL
    case 0xC0BBD4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:238 TAX
    case 0xC0BBD5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:239 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC0BBD6: cpu.execute_instruction<0xBD>(0x000A58, 3); return true;
    // src/unknown/C0/C0BA35.asm:240 CMP #.LOWORD(-1)
    case 0xC0BBD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0BA35.asm:240 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0BBD9.
    case 0xC0BBDB: cpu.execute_instruction<0xFF>(0xA906F0, 4); return true;
    // src/unknown/C0/C0BA35.asm:241 BEQ @UNKNOWN15
    case 0xC0BBDC: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0BA35.asm:242 LDA #1
    case 0xC0BBDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0BA35.asm:242 LDA #1
    // Overlapping static entry reached from 0xC0BBDB.
    case 0xC0BBDF: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C0BA35.asm:242 LDA #1
    // Overlapping static entry reached from 0xC0BBDE.
    case 0xC0BBE0: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0BA35.asm:243 STA ENTITY_PATHFINDING_STATES,X
    case 0xC0BBE1: cpu.execute_instruction<0x9D>(0x00305C, 3); return true;
    // src/unknown/C0/C0BA35.asm:245 LDA @LOCAL0B
    case 0xC0BBE4: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:246 INC
    case 0xC0BBE6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:247 STA @LOCAL0B
    case 0xC0BBE7: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:249 CMP #MAX_ENTITIES
    case 0xC0BBE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C0/C0BA35.asm:249 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC0BBE9.
    case 0xC0BBEB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0BA35.asm:250 BNE @UNKNOWN14
    case 0xC0BBEC: cpu.execute_instruction<0xD0>(0x0000E6, 2); return true;
    // src/unknown/C0/C0BA35.asm:251 LDA #.LOWORD(-1)
    case 0xC0BBEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0BA35.asm:251 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0BBEE.
    case 0xC0BBF0: cpu.execute_instruction<0xFF>(0xA95E80, 4); return true;
    // src/unknown/C0/C0BA35.asm:252 BRA @UNKNOWN22
    case 0xC0BBF1: cpu.execute_instruction<0x80>(0x00005E, 2); return true;
    // src/unknown/C0/C0BA35.asm:254 LDA #0
    case 0xC0BBF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0BA35.asm:254 LDA #0
    // Overlapping static entry reached from 0xC0BBF0.
    case 0xC0BBF4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0BA35.asm:254 LDA #0
    // Overlapping static entry reached from 0xC0BBF3.
    case 0xC0BBF5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BA35.asm:255 STA @LOCAL0B
    case 0xC0BBF6: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:256 BRA @UNKNOWN21
    case 0xC0BBF8: cpu.execute_instruction<0x80>(0x00004C, 2); return true;
    // include/macros.asm:601 STA scratch
    // Macro caller: src/unknown/C0/C0BA35.asm:258 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0BBFA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:602 ASL
    // Macro caller: src/unknown/C0/C0BA35.asm:258 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0BBFC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:603 ASL
    // Macro caller: src/unknown/C0/C0BA35.asm:258 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0BBFD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:604 ASL
    // Macro caller: src/unknown/C0/C0BA35.asm:258 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0BBFE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:605 ADC scratch
    // Macro caller: src/unknown/C0/C0BA35.asm:258 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0BBFF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:606 ASL
    // Macro caller: src/unknown/C0/C0BA35.asm:258 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0BC01: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:259 STA @VIRTUAL02
    case 0xC0BC02: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:260 LDA @LOCAL11
    case 0xC0BC04: cpu.execute_instruction<0xA5>(0x000034, 2); return true;
    // src/unknown/C0/C0BA35.asm:261 STA @VIRTUAL04
    case 0xC0BC06: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0BA35.asm:262 CLC
    case 0xC0BC08: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:263 ADC @VIRTUAL02
    case 0xC0BC09: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:264 TAX
    case 0xC0BC0B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:265 LDA a:pathfinding::pathfinders + pathfinder::object_index,X
    case 0xC0BC0C: cpu.execute_instruction<0xBD>(0x0000B0, 3); return true;
    // src/unknown/C0/C0BA35.asm:266 STA @LOCAL08
    case 0xC0BC0F: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:267 TXA
    case 0xC0BC11: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:268 CLC
    case 0xC0BC12: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:269 ADC #pathfinding::pathfinders + pathfinder::unknown10;
    case 0xC0BC13: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AA, 2); else cpu.execute_instruction<0x69>(0x0000AA, 3); return true;
    // src/unknown/C0/C0BA35.asm:269 ADC #pathfinding::pathfinders + pathfinder::unknown10;
    // Overlapping static entry reached from 0xC0BC13.
    case 0xC0BC15: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C0BA35.asm:270 TAY
    case 0xC0BC16: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:271 STY @LOCAL0F
    case 0xC0BC17: cpu.execute_instruction<0x84>(0x000030, 2); return true;
    // src/unknown/C0/C0BA35.asm:272 LDA __BSS_START__,Y
    case 0xC0BC19: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0BA35.asm:273 BEQ @UNKNOWN19
    case 0xC0BC1C: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/unknown/C0/C0BA35.asm:274 LDA @LOCAL08
    case 0xC0BC1E: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:275 ASL
    case 0xC0BC20: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:276 STA @LOCAL08
    case 0xC0BC21: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:277 LDA a:pathfinding::pathfinders + pathfinder::unknown12,X
    case 0xC0BC23: cpu.execute_instruction<0xBD>(0x0000AC, 3); return true;
    // src/unknown/C0/C0BA35.asm:278 LDY #.LOWORD(ENTITY_PATH_POINTS)
    case 0xC0BC26: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x003200, 3); return true;
    // src/unknown/C0/C0BA35.asm:278 LDY #.LOWORD(ENTITY_PATH_POINTS)
    // Overlapping static entry reached from 0xC0BC26.
    case 0xC0BC28: cpu.execute_instruction<0x32>(0x000091, 2); return true;
    // src/unknown/C0/C0BA35.asm:279 STA (@LOCAL08),Y
    case 0xC0BC29: cpu.execute_instruction<0x91>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:279 STA (@LOCAL08),Y
    // Overlapping static entry reached from 0xC0BC28.
    case 0xC0BC2A: cpu.execute_instruction<0x22>(0xB930A4, 4); return true;
    // src/unknown/C0/C0BA35.asm:280 LDY @LOCAL0F
    case 0xC0BC2B: cpu.execute_instruction<0xA4>(0x000030, 2); return true;
    // src/unknown/C0/C0BA35.asm:281 LDA __BSS_START__,Y
    case 0xC0BC2D: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0BA35.asm:281 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC0BC2A.
    case 0xC0BC2E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0BA35.asm:282 LDY #.LOWORD(ENTITY_PATH_POINT_COUNTS)
    case 0xC0BC30: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003C, 2); else cpu.execute_instruction<0xA0>(0x00323C, 3); return true;
    // src/unknown/C0/C0BA35.asm:282 LDY #.LOWORD(ENTITY_PATH_POINT_COUNTS)
    // Overlapping static entry reached from 0xC0BC30.
    case 0xC0BC32: cpu.execute_instruction<0x32>(0x000091, 2); return true;
    // src/unknown/C0/C0BA35.asm:283 STA (@LOCAL08),Y
    case 0xC0BC33: cpu.execute_instruction<0x91>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:283 STA (@LOCAL08),Y
    // Overlapping static entry reached from 0xC0BC32.
    case 0xC0BC34: cpu.execute_instruction<0x22>(0xA50A80, 4); return true;
    // src/unknown/C0/C0BA35.asm:284 BRA @UNKNOWN20
    case 0xC0BC35: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C0/C0BA35.asm:286 LDA @LOCAL08
    case 0xC0BC37: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:286 LDA @LOCAL08
    // Overlapping static entry reached from 0xC0BC34.
    case 0xC0BC38: cpu.execute_instruction<0x22>(0xA9AA0A, 4); return true;
    // src/unknown/C0/C0BA35.asm:287 ASL
    case 0xC0BC39: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:288 TAX
    case 0xC0BC3A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:289 LDA #1
    case 0xC0BC3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0BA35.asm:289 LDA #1
    // Overlapping static entry reached from 0xC0BC38.
    case 0xC0BC3C: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C0BA35.asm:289 LDA #1
    // Overlapping static entry reached from 0xC0BC3B.
    case 0xC0BC3D: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0BA35.asm:290 STA ENTITY_PATHFINDING_STATES,X
    case 0xC0BC3E: cpu.execute_instruction<0x9D>(0x00305C, 3); return true;
    // src/unknown/C0/C0BA35.asm:292 LDA @LOCAL0B
    case 0xC0BC41: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:293 INC
    case 0xC0BC43: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:294 STA @LOCAL0B
    case 0xC0BC44: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:296 LDX @LOCAL0A
    case 0xC0BC46: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/unknown/C0/C0BA35.asm:297 STX @VIRTUAL02
    case 0xC0BC48: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:298 CMP @VIRTUAL02
    case 0xC0BC4A: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:299 BCC @UNKNOWN18
    case 0xC0BC4C: cpu.execute_instruction<0x90>(0x0000AC, 2); return true;
    // src/unknown/C0/C0BA35.asm:300 LDA #0
    case 0xC0BC4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0BA35.asm:300 LDA #0
    // Overlapping static entry reached from 0xC0BC4E.
    case 0xC0BC50: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0BA35.asm:302 END_C_FUNCTION
    case 0xC0BC51: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0BA35.asm:302 END_C_FUNCTION
    case 0xC0BC52: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0BD96.asm (unresolved).
bool execute_unresolved_c0_c0bd96_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0BD96.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0BD78: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0BD96.asm:19 END_STACK_VARS
    case 0xC0BD7A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0BD96.asm:19 END_STACK_VARS
    case 0xC0BD7B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0BD96.asm:19 END_STACK_VARS
    case 0xC0BD7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x00FFD4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0BD96.asm:19 END_STACK_VARS
    // Overlapping static entry reached from 0xC0BD7C.
    case 0xC0BD7E: cpu.execute_instruction<0xFF>(0x3AAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0BD96.asm:19 END_STACK_VARS
    case 0xC0BD7F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:20 LDA GAME_STATE+game_state::current_party_members
    case 0xC0BD80: cpu.execute_instruction<0xAD>(0x009B3A, 3); return true;
    // src/unknown/C0/C0BD96.asm:20 LDA GAME_STATE+game_state::current_party_members
    // Overlapping static entry reached from 0xC0BD7E.
    case 0xC0BD82: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:21 STA @LOCAL0C
    case 0xC0BD83: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/unknown/C0/C0BD96.asm:22 LDA #.LOWORD(PATHFINDING_STATE)
    case 0xC0BD85: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00F200, 3); return true;
    // src/unknown/C0/C0BD96.asm:22 LDA #.LOWORD(PATHFINDING_STATE)
    // Overlapping static entry reached from 0xC0BD85.
    case 0xC0BD87: cpu.execute_instruction<0xF2>(0x000085, 2); return true;
    // src/unknown/C0/C0BD96.asm:23 STA @LOCAL0B
    case 0xC0BD88: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0BD96.asm:23 STA @LOCAL0B
    // Overlapping static entry reached from 0xC0BD87.
    case 0xC0BD89: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:24 LDA #56
    case 0xC0BD8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000038, 2); else cpu.execute_instruction<0xA9>(0x000038, 3); return true;
    // src/unknown/C0/C0BD96.asm:24 LDA #56
    // Overlapping static entry reached from 0xC0BD8A.
    case 0xC0BD8C: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0BD96.asm:25 STA PATHFINDING_STATE + pathfinding::radius
    case 0xC0BD8D: cpu.execute_instruction<0x8D>(0x00F278, 3); return true;
    // src/unknown/C0/C0BD96.asm:26 STA PATHFINDING_STATE + pathfinding::radius + 2
    case 0xC0BD90: cpu.execute_instruction<0x8D>(0x00F27A, 3); return true;
    // src/unknown/C0/C0BD96.asm:27 LDA PATHFINDING_STATE + pathfinding::radius
    case 0xC0BD93: cpu.execute_instruction<0xAD>(0x00F278, 3); return true;
    // src/unknown/C0/C0BD96.asm:28 LSR
    case 0xC0BD96: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:29 STA @VIRTUAL04
    case 0xC0BD97: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0BD96.asm:30 STA PATHFINDING_TARGET_WIDTH
    case 0xC0BD99: cpu.execute_instruction<0x8D>(0x004E18, 3); return true;
    // src/unknown/C0/C0BD96.asm:31 LDA PATHFINDING_STATE + pathfinding::radius + 2
    case 0xC0BD9C: cpu.execute_instruction<0xAD>(0x00F27A, 3); return true;
    // src/unknown/C0/C0BD96.asm:32 LSR
    case 0xC0BD9F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:33 STA @VIRTUAL02
    case 0xC0BDA0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:34 STA @LOCAL0A
    case 0xC0BDA2: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C0/C0BD96.asm:35 LDA @VIRTUAL02
    case 0xC0BDA4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:36 STA PATHFINDING_TARGET_HEIGHT
    case 0xC0BDA6: cpu.execute_instruction<0x8D>(0x004E1A, 3); return true;
    // src/unknown/C0/C0BD96.asm:37 LDA @LOCAL0C
    case 0xC0BDA9: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/unknown/C0/C0BD96.asm:38 ASL
    case 0xC0BDAB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:39 STA @LOCAL0C
    case 0xC0BDAC: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/unknown/C0/C0BD96.asm:40 CLC
    case 0xC0BDAE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:41 ADC #.LOWORD(ENTITY_ABS_X_TABLE)
    case 0xC0BDAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000084, 2); else cpu.execute_instruction<0x69>(0x000B84, 3); return true;
    // src/unknown/C0/C0BD96.asm:41 ADC #.LOWORD(ENTITY_ABS_X_TABLE)
    // Overlapping static entry reached from 0xC0BDAF.
    case 0xC0BDB1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:42 TAY
    case 0xC0BDB2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:43 STY @LOCAL09
    case 0xC0BDB3: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BD96.asm:44 LOADPTR UNKNOWN_C42A1F, @LOCAL08
    case 0xC0BDB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005D, 2); else cpu.execute_instruction<0xA9>(0x00295D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BD96.asm:44 LOADPTR UNKNOWN_C42A1F, @LOCAL08
    // Overlapping static entry reached from 0xC0BDB5.
    case 0xC0BDB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000085, 2); else cpu.execute_instruction<0x29>(0x002085, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0BD96.asm:44 LOADPTR UNKNOWN_C42A1F, @LOCAL08
    case 0xC0BDB8: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0BD96.asm:44 LOADPTR UNKNOWN_C42A1F, @LOCAL08
    // Overlapping static entry reached from 0xC0BDB7.
    case 0xC0BDB9: cpu.execute_instruction<0x20>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BD96.asm:44 LOADPTR UNKNOWN_C42A1F, @LOCAL08
    case 0xC0BDBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BD96.asm:44 LOADPTR UNKNOWN_C42A1F, @LOCAL08
    // Overlapping static entry reached from 0xC0BDBA.
    case 0xC0BDBC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0BD96.asm:44 LOADPTR UNKNOWN_C42A1F, @LOCAL08
    case 0xC0BDBD: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C0/C0BD96.asm:45 LDA @LOCAL0C
    case 0xC0BDBF: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/unknown/C0/C0BD96.asm:46 CLC
    case 0xC0BDC1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:47 ADC #.LOWORD(ENTITY_SIZES)
    case 0xC0BDC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006C, 2); else cpu.execute_instruction<0x69>(0x002F6C, 3); return true;
    // src/unknown/C0/C0BD96.asm:47 ADC #.LOWORD(ENTITY_SIZES)
    // Overlapping static entry reached from 0xC0BDC2.
    case 0xC0BDC4: cpu.execute_instruction<0x2F>(0xB21E85, 4); return true;
    // src/unknown/C0/C0BD96.asm:48 STA @LOCAL07
    case 0xC0BDC5: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C0/C0BD96.asm:49 LDA (@LOCAL07)
    case 0xC0BDC7: cpu.execute_instruction<0xB2>(0x00001E, 2); return true;
    // src/unknown/C0/C0BD96.asm:49 LDA (@LOCAL07)
    // Overlapping static entry reached from 0xC0BDC4.
    case 0xC0BDC8: cpu.execute_instruction<0x1E>(0x00480A, 3); return true;
    // src/unknown/C0/C0BD96.asm:50 ASL
    case 0xC0BDC9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:51 PHA
    case 0xC0BDCA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:52 LDA __BSS_START__,Y
    case 0xC0BDCB: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0BD96.asm:53 PLY
    case 0xC0BDCE: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:54 SEC
    case 0xC0BDCF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:55 SBC [@LOCAL08],Y
    case 0xC0BDD0: cpu.execute_instruction<0xF7>(0x000020, 2); return true;
    // src/unknown/C0/C0BD96.asm:56 LSR
    case 0xC0BDD2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:57 LSR
    case 0xC0BDD3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:58 LSR
    case 0xC0BDD4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:59 STA PATHFINDING_TARGET_CENTRE_X
    case 0xC0BDD5: cpu.execute_instruction<0x8D>(0x004E14, 3); return true;
    // src/unknown/C0/C0BD96.asm:60 LDA @LOCAL0C
    case 0xC0BDD8: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/unknown/C0/C0BD96.asm:61 CLC
    case 0xC0BDDA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:62 ADC #.LOWORD(ENTITY_ABS_Y_TABLE)
    case 0xC0BDDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C0, 2); else cpu.execute_instruction<0x69>(0x000BC0, 3); return true;
    // src/unknown/C0/C0BD96.asm:62 ADC #.LOWORD(ENTITY_ABS_Y_TABLE)
    // Overlapping static entry reached from 0xC0BDDB.
    case 0xC0BDDD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:63 TAX
    case 0xC0BDDE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BD96.asm:64 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    case 0xC0BDDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00297F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BD96.asm:64 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0BDDF.
    case 0xC0BDE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000085, 2); else cpu.execute_instruction<0x29>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0BD96.asm:64 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    case 0xC0BDE2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0BD96.asm:64 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0BDE1.
    case 0xC0BDE3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BD96.asm:64 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    case 0xC0BDE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BD96.asm:64 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0BDE4.
    case 0xC0BDE6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0BD96.asm:64 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    case 0xC0BDE7: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0BD96.asm:65 LDA (@LOCAL07)
    case 0xC0BDE9: cpu.execute_instruction<0xB2>(0x00001E, 2); return true;
    // src/unknown/C0/C0BD96.asm:66 ASL
    case 0xC0BDEB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:67 STA @LOCAL06
    case 0xC0BDEC: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BD96.asm:68 LOADPTR UNKNOWN_C42AEB, @VIRTUAL06
    case 0xC0BDEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000029, 2); else cpu.execute_instruction<0xA9>(0x002A29, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BD96.asm:68 LOADPTR UNKNOWN_C42AEB, @VIRTUAL06
    // Overlapping static entry reached from 0xC0BDEE.
    case 0xC0BDF0: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0BD96.asm:68 LOADPTR UNKNOWN_C42AEB, @VIRTUAL06
    case 0xC0BDF1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BD96.asm:68 LOADPTR UNKNOWN_C42AEB, @VIRTUAL06
    case 0xC0BDF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BD96.asm:68 LOADPTR UNKNOWN_C42AEB, @VIRTUAL06
    // Overlapping static entry reached from 0xC0BDF3.
    case 0xC0BDF5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0BD96.asm:68 LOADPTR UNKNOWN_C42AEB, @VIRTUAL06
    case 0xC0BDF6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0BD96.asm:69 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0BDF8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0BD96.asm:69 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0BDFA: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0BD96.asm:69 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0BDFC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0BD96.asm:69 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0BDFE: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0BD96.asm:70 LDA @LOCAL06
    case 0xC0BE00: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0BD96.asm:71 CLC
    case 0xC0BE02: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:72 ADC @VIRTUAL06
    case 0xC0BE03: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:73 STA @VIRTUAL06
    case 0xC0BE05: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:74 LDA [@VIRTUAL06]
    case 0xC0BE07: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:75 PHA
    case 0xC0BE09: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:76 LDA @LOCAL06
    case 0xC0BE0A: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C0/C0BD96.asm:77 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0BE0C: cpu.execute_instruction<0xA4>(0x00000A, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C0/C0BD96.asm:77 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0BE0E: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C0/C0BD96.asm:77 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0BE10: cpu.execute_instruction<0xA4>(0x00000C, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C0/C0BD96.asm:77 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0BE12: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C0BD96.asm:78 CLC
    case 0xC0BE14: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:79 ADC @VIRTUAL06
    case 0xC0BE15: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:80 STA @VIRTUAL06
    case 0xC0BE17: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:81 LDA [@VIRTUAL06]
    case 0xC0BE19: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:82 STA @VIRTUAL02
    case 0xC0BE1B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:83 LDA __BSS_START__,X
    case 0xC0BE1D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0BD96.asm:84 SEC
    case 0xC0BE20: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:85 SBC @VIRTUAL02
    case 0xC0BE21: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:86 PLY
    case 0xC0BE23: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:87 STY @VIRTUAL02
    case 0xC0BE24: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:88 CLC
    case 0xC0BE26: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:89 ADC @VIRTUAL02
    case 0xC0BE27: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:90 LSR
    case 0xC0BE29: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:91 LSR
    case 0xC0BE2A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:92 LSR
    case 0xC0BE2B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:93 STA PATHFINDING_TARGET_CENTRE_Y
    case 0xC0BE2C: cpu.execute_instruction<0x8D>(0x004E16, 3); return true;
    // src/unknown/C0/C0BD96.asm:94 LDA (@LOCAL07)
    case 0xC0BE2F: cpu.execute_instruction<0xB2>(0x00001E, 2); return true;
    // src/unknown/C0/C0BD96.asm:95 ASL
    case 0xC0BE31: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:96 STA @LOCAL06
    case 0xC0BE32: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C0BD96.asm:97 PHA
    case 0xC0BE34: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:98 LDY @LOCAL09
    case 0xC0BE35: cpu.execute_instruction<0xA4>(0x000024, 2); return true;
    // src/unknown/C0/C0BD96.asm:99 LDA __BSS_START__,Y
    case 0xC0BE37: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0BD96.asm:100 PLY
    case 0xC0BE3A: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:101 SEC
    case 0xC0BE3B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:102 SBC [@LOCAL08],Y
    case 0xC0BE3C: cpu.execute_instruction<0xF7>(0x000020, 2); return true;
    // src/unknown/C0/C0BD96.asm:103 LSR
    case 0xC0BE3E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:104 LSR
    case 0xC0BE3F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:105 LSR
    case 0xC0BE40: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:106 SEC
    case 0xC0BE41: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:107 SBC @VIRTUAL04
    case 0xC0BE42: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C0/C0BD96.asm:108 STA @VIRTUAL04
    case 0xC0BE44: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0BD96.asm:109 LDA @LOCAL06
    case 0xC0BE46: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C0/C0BD96.asm:110 MOVE_INTY @LOCAL05, @VIRTUAL06
    case 0xC0BE48: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C0/C0BD96.asm:110 MOVE_INTY @LOCAL05, @VIRTUAL06
    case 0xC0BE4A: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C0/C0BD96.asm:110 MOVE_INTY @LOCAL05, @VIRTUAL06
    case 0xC0BE4C: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C0/C0BD96.asm:110 MOVE_INTY @LOCAL05, @VIRTUAL06
    case 0xC0BE4E: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C0BD96.asm:111 CLC
    case 0xC0BE50: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:112 ADC @VIRTUAL06
    case 0xC0BE51: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:113 STA @VIRTUAL06
    case 0xC0BE53: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:114 LDA [@VIRTUAL06]
    case 0xC0BE55: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:115 PHA
    case 0xC0BE57: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:116 LDA @LOCAL06
    case 0xC0BE58: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C0/C0BD96.asm:117 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0BE5A: cpu.execute_instruction<0xA4>(0x00000A, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C0/C0BD96.asm:117 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0BE5C: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C0/C0BD96.asm:117 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0BE5E: cpu.execute_instruction<0xA4>(0x00000C, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C0/C0BD96.asm:117 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0BE60: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C0BD96.asm:118 CLC
    case 0xC0BE62: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:119 ADC @VIRTUAL06
    case 0xC0BE63: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:120 STA @VIRTUAL06
    case 0xC0BE65: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:121 LDA [@VIRTUAL06]
    case 0xC0BE67: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:122 STA @VIRTUAL02
    case 0xC0BE69: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:123 LDA __BSS_START__,X
    case 0xC0BE6B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0BD96.asm:124 SEC
    case 0xC0BE6E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:125 SBC @VIRTUAL02
    case 0xC0BE6F: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:126 PLY
    case 0xC0BE71: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:127 STY @VIRTUAL02
    case 0xC0BE72: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:128 CLC
    case 0xC0BE74: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:129 ADC @VIRTUAL02
    case 0xC0BE75: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:130 LSR
    case 0xC0BE77: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:131 LSR
    case 0xC0BE78: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:132 LSR
    case 0xC0BE79: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:133 LDX @LOCAL0A
    case 0xC0BE7A: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/unknown/C0/C0BD96.asm:134 STX @VIRTUAL02
    case 0xC0BE7C: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:135 SEC
    case 0xC0BE7E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:136 SBC @VIRTUAL02
    case 0xC0BE7F: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:137 STA @VIRTUAL02
    case 0xC0BE81: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:138 STA @LOCAL00
    case 0xC0BE83: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0BD96.asm:139 LDY @VIRTUAL04
    case 0xC0BE85: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C0/C0BD96.asm:140 LDX #1
    case 0xC0BE87: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C0BD96.asm:140 LDX #1
    // Overlapping static entry reached from 0xC0BE87.
    case 0xC0BE89: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C0BD96.asm:141 LDA @LOCAL0B
    case 0xC0BE8A: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0BD96.asm:142 JSR UNKNOWN_C0B9BC
    case 0xC0BE8C: cpu.execute_instruction<0x20>(0x00B997, 3); return true;
    // src/unknown/C0/C0BD96.asm:143 LDA @VIRTUAL02
    case 0xC0BE8F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:144 STA @LOCAL00
    case 0xC0BE91: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0BD96.asm:145 LDA #1
    case 0xC0BE93: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0BD96.asm:145 LDA #1
    // Overlapping static entry reached from 0xC0BE93.
    case 0xC0BE95: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BD96.asm:146 STA @LOCAL01
    case 0xC0BE96: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0BD96.asm:147 LDA #252
    case 0xC0BE98: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x0000FC, 3); return true;
    // src/unknown/C0/C0BD96.asm:147 LDA #252
    // Overlapping static entry reached from 0xC0BE98.
    case 0xC0BE9A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BD96.asm:148 STA @LOCAL02
    case 0xC0BE9B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0BD96.asm:149 LDA #50
    case 0xC0BE9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000032, 2); else cpu.execute_instruction<0xA9>(0x000032, 3); return true;
    // src/unknown/C0/C0BD96.asm:149 LDA #50
    // Overlapping static entry reached from 0xC0BE9D.
    case 0xC0BE9F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BD96.asm:150 STA @LOCAL03
    case 0xC0BEA0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0BD96.asm:151 LDY @VIRTUAL04
    case 0xC0BEA2: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C0/C0BD96.asm:152 LDX #1
    case 0xC0BEA4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C0BD96.asm:152 LDX #1
    // Overlapping static entry reached from 0xC0BEA4.
    case 0xC0BEA6: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C0BD96.asm:153 LDA @LOCAL0B
    case 0xC0BEA7: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0BD96.asm:154 JSR UNKNOWN_C0BA35
    case 0xC0BEA9: cpu.execute_instruction<0x20>(0x00BA14, 3); return true;
    // src/unknown/C0/C0BD96.asm:155 STA @LOCAL0C
    case 0xC0BEAC: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/unknown/C0/C0BD96.asm:156 CMP #0
    case 0xC0BEAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0BD96.asm:156 CMP #0
    // Overlapping static entry reached from 0xC0BEAE.
    case 0xC0BEB0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0BD96.asm:157 BNEL @UNKNOWN1
    case 0xC0BEB1: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0BD96.asm:157 BNEL @UNKNOWN1
    case 0xC0BEB3: cpu.execute_instruction<0x4C>(0x00BF52, 3); return true;
    // src/unknown/C0/C0BD96.asm:158 LDX PATHFINDING_STATE + pathfinding::pathfinders + pathfinder::object_index
    case 0xC0BEB6: cpu.execute_instruction<0xAE>(0x00F2B0, 3); return true;
    // src/unknown/C0/C0BD96.asm:159 TXA
    case 0xC0BEB9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:160 ASL
    case 0xC0BEBA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:161 STA @VIRTUAL02
    case 0xC0BEBB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:162 STA @LOCAL04
    case 0xC0BEBD: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0BD96.asm:163 LDX @VIRTUAL02
    case 0xC0BEBF: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:164 LDY ENTITY_SIZES,X
    case 0xC0BEC1: cpu.execute_instruction<0xBC>(0x002F6C, 3); return true;
    // src/unknown/C0/C0BD96.asm:165 TYA
    case 0xC0BEC4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:166 ASL
    case 0xC0BEC5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:167 TAX
    case 0xC0BEC6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:168 STX @LOCAL0B
    case 0xC0BEC7: cpu.execute_instruction<0x86>(0x000028, 2); return true;
    // src/unknown/C0/C0BD96.asm:169 TXY
    case 0xC0BEC9: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:170 LDA PATHFINDING_STATE + pathfinding::pathfinders + pathfinder::origin + 2
    case 0xC0BECA: cpu.execute_instruction<0xAD>(0x00F2A8, 3); return true;
    // src/unknown/C0/C0BD96.asm:171 ASL
    case 0xC0BECD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:172 ASL
    case 0xC0BECE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:173 ASL
    case 0xC0BECF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:174 CLC
    case 0xC0BED0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:175 ADC [@LOCAL08],Y
    case 0xC0BED1: cpu.execute_instruction<0x77>(0x000020, 2); return true;
    // src/unknown/C0/C0BD96.asm:176 STA @VIRTUAL04
    case 0xC0BED3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0BD96.asm:177 LDA PATHFINDING_TARGET_CENTRE_X
    case 0xC0BED5: cpu.execute_instruction<0xAD>(0x004E14, 3); return true;
    // src/unknown/C0/C0BD96.asm:178 SEC
    case 0xC0BED8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:179 SBC PATHFINDING_TARGET_WIDTH
    case 0xC0BED9: cpu.execute_instruction<0xED>(0x004E18, 3); return true;
    // src/unknown/C0/C0BD96.asm:180 ASL
    case 0xC0BEDC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:181 ASL
    case 0xC0BEDD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:182 ASL
    case 0xC0BEDE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:183 CLC
    case 0xC0BEDF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:184 ADC @VIRTUAL04
    case 0xC0BEE0: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C0BD96.asm:185 LDX @VIRTUAL02
    case 0xC0BEE2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:186 STA ENTITY_ABS_X_TABLE,X
    case 0xC0BEE4: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/unknown/C0/C0BD96.asm:187 LDX @LOCAL0B
    case 0xC0BEE7: cpu.execute_instruction<0xA6>(0x000028, 2); return true;
    // src/unknown/C0/C0BD96.asm:188 TXA
    case 0xC0BEE9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C0/C0BD96.asm:189 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0BEEA: cpu.execute_instruction<0xA4>(0x00000A, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C0/C0BD96.asm:189 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0BEEC: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C0/C0BD96.asm:189 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0BEEE: cpu.execute_instruction<0xA4>(0x00000C, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C0/C0BD96.asm:189 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0BEF0: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C0BD96.asm:190 CLC
    case 0xC0BEF2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:191 ADC @VIRTUAL06
    case 0xC0BEF3: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:192 STA @VIRTUAL06
    case 0xC0BEF5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:193 LDA [@VIRTUAL06]
    case 0xC0BEF7: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:194 PHA
    case 0xC0BEF9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:195 TXA
    case 0xC0BEFA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C0BD96.asm:196 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC0BEFB: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C0BD96.asm:196 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC0BEFD: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C0BD96.asm:196 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC0BEFF: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C0BD96.asm:196 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC0BF01: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C0/C0BD96.asm:197 CLC
    case 0xC0BF03: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:198 ADC @VIRTUAL06
    case 0xC0BF04: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:199 STA @VIRTUAL06
    case 0xC0BF06: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:200 LDA [@VIRTUAL06]
    case 0xC0BF08: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:201 STA @VIRTUAL02
    case 0xC0BF0A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:202 LDA PATHFINDING_STATE + pathfinding::pathfinders + pathfinder::origin
    case 0xC0BF0C: cpu.execute_instruction<0xAD>(0x00F2A6, 3); return true;
    // src/unknown/C0/C0BD96.asm:203 ASL
    case 0xC0BF0F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:204 ASL
    case 0xC0BF10: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:205 ASL
    case 0xC0BF11: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:206 SEC
    case 0xC0BF12: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:207 SBC @VIRTUAL02
    case 0xC0BF13: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:208 PLY
    case 0xC0BF15: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:209 STY @VIRTUAL02
    case 0xC0BF16: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:210 CLC
    case 0xC0BF18: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:211 ADC @VIRTUAL02
    case 0xC0BF19: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:212 STA @VIRTUAL04
    case 0xC0BF1B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0BD96.asm:213 LDA PATHFINDING_TARGET_CENTRE_Y
    case 0xC0BF1D: cpu.execute_instruction<0xAD>(0x004E16, 3); return true;
    // src/unknown/C0/C0BD96.asm:214 SEC
    case 0xC0BF20: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:215 SBC PATHFINDING_TARGET_HEIGHT
    case 0xC0BF21: cpu.execute_instruction<0xED>(0x004E1A, 3); return true;
    // src/unknown/C0/C0BD96.asm:216 ASL
    case 0xC0BF24: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:217 ASL
    case 0xC0BF25: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:218 ASL
    case 0xC0BF26: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:219 CLC
    case 0xC0BF27: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:220 ADC @VIRTUAL04
    case 0xC0BF28: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C0BD96.asm:221 LDX @LOCAL04
    case 0xC0BF2A: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C0/C0BD96.asm:222 STX @VIRTUAL02
    case 0xC0BF2C: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:223 STA ENTITY_ABS_Y_TABLE,X
    case 0xC0BF2E: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/unknown/C0/C0BD96.asm:224 LDA @VIRTUAL02
    case 0xC0BF31: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:225 CLC
    case 0xC0BF33: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:226 ADC #.LOWORD(ENTITY_PATH_POINTS)
    case 0xC0BF34: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x003200, 3); return true;
    // src/unknown/C0/C0BD96.asm:226 ADC #.LOWORD(ENTITY_PATH_POINTS)
    // Overlapping static entry reached from 0xC0BF34.
    case 0xC0BF36: cpu.execute_instruction<0x32>(0x0000AA, 2); return true;
    // src/unknown/C0/C0BD96.asm:227 TAX
    case 0xC0BF37: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:228 LDA __BSS_START__,X
    case 0xC0BF38: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0BD96.asm:229 INC
    case 0xC0BF3B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:230 INC
    case 0xC0BF3C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:231 INC
    case 0xC0BF3D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:232 INC
    case 0xC0BF3E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:233 STA __BSS_START__,X
    case 0xC0BF3F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0BD96.asm:234 LDA @VIRTUAL02
    case 0xC0BF42: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:235 CLC
    case 0xC0BF44: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:236 ADC #.LOWORD(ENTITY_PATH_POINT_COUNTS)
    case 0xC0BF45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003C, 2); else cpu.execute_instruction<0x69>(0x00323C, 3); return true;
    // src/unknown/C0/C0BD96.asm:236 ADC #.LOWORD(ENTITY_PATH_POINT_COUNTS)
    // Overlapping static entry reached from 0xC0BF45.
    case 0xC0BF47: cpu.execute_instruction<0x32>(0x0000AA, 2); return true;
    // src/unknown/C0/C0BD96.asm:237 TAX
    case 0xC0BF48: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:238 LDA __BSS_START__,X
    case 0xC0BF49: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0BD96.asm:239 DEC
    case 0xC0BF4C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:240 STA __BSS_START__,X
    case 0xC0BF4D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0BD96.asm:241 LDA @LOCAL0C
    case 0xC0BF50: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/unknown/C0/C0BD96.asm:243 PLD
    case 0xC0BF52: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:244 RTL
    case 0xC0BF53: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0BF72.asm (unresolved).
bool execute_unresolved_c0_c0bf72_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0BF72.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0BF54: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0BF72.asm:17 END_STACK_VARS
    case 0xC0BF56: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0BF72.asm:17 END_STACK_VARS
    case 0xC0BF57: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0BF72.asm:17 END_STACK_VARS
    case 0xC0BF58: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x00FFD6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0BF72.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC0BF58.
    case 0xC0BF5A: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0BF72.asm:17 END_STACK_VARS
    case 0xC0BF5B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:18 LDA CURRENT_ENTITY_SLOT
    case 0xC0BF5C: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0BF72.asm:18 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0BF5A.
    case 0xC0BF5E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:19 STA @LOCAL0B
    case 0xC0BF5F: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0BF72.asm:20 LDA #.LOWORD(PATHFINDING_STATE)
    case 0xC0BF61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00F200, 3); return true;
    // src/unknown/C0/C0BF72.asm:20 LDA #.LOWORD(PATHFINDING_STATE)
    // Overlapping static entry reached from 0xC0BF61.
    case 0xC0BF63: cpu.execute_instruction<0xF2>(0x000085, 2); return true;
    // src/unknown/C0/C0BF72.asm:21 STA @LOCAL0A
    case 0xC0BF64: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C0/C0BF72.asm:21 STA @LOCAL0A
    // Overlapping static entry reached from 0xC0BF63.
    case 0xC0BF65: cpu.execute_instruction<0x26>(0x0000A9, 2); return true;
    // src/unknown/C0/C0BF72.asm:22 LDA #56
    case 0xC0BF66: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000038, 2); else cpu.execute_instruction<0xA9>(0x000038, 3); return true;
    // src/unknown/C0/C0BF72.asm:22 LDA #56
    // Overlapping static entry reached from 0xC0BF65.
    case 0xC0BF67: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:22 LDA #56
    // Overlapping static entry reached from 0xC0BF66.
    case 0xC0BF68: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0BF72.asm:23 STA PATHFINDING_STATE + pathfinding::radius
    case 0xC0BF69: cpu.execute_instruction<0x8D>(0x00F278, 3); return true;
    // src/unknown/C0/C0BF72.asm:24 STA PATHFINDING_STATE + pathfinding::radius + 2
    case 0xC0BF6C: cpu.execute_instruction<0x8D>(0x00F27A, 3); return true;
    // src/unknown/C0/C0BF72.asm:25 LDA PATHFINDING_STATE + pathfinding::radius
    case 0xC0BF6F: cpu.execute_instruction<0xAD>(0x00F278, 3); return true;
    // src/unknown/C0/C0BF72.asm:26 LSR
    case 0xC0BF72: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:27 STA @VIRTUAL04
    case 0xC0BF73: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0BF72.asm:28 STA PATHFINDING_TARGET_WIDTH
    case 0xC0BF75: cpu.execute_instruction<0x8D>(0x004E18, 3); return true;
    // src/unknown/C0/C0BF72.asm:29 LDA PATHFINDING_STATE + pathfinding::radius + 2
    case 0xC0BF78: cpu.execute_instruction<0xAD>(0x00F27A, 3); return true;
    // src/unknown/C0/C0BF72.asm:30 LSR
    case 0xC0BF7B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:31 STA @LOCAL09
    case 0xC0BF7C: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C0/C0BF72.asm:32 STA PATHFINDING_TARGET_HEIGHT
    case 0xC0BF7E: cpu.execute_instruction<0x8D>(0x004E1A, 3); return true;
    // src/unknown/C0/C0BF72.asm:33 LDA @LOCAL0B
    case 0xC0BF81: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0BF72.asm:34 ASL
    case 0xC0BF83: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:35 STA @LOCAL0B
    case 0xC0BF84: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0BF72.asm:36 CLC
    case 0xC0BF86: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:37 ADC #.LOWORD(ENTITY_ABS_X_TABLE)
    case 0xC0BF87: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000084, 2); else cpu.execute_instruction<0x69>(0x000B84, 3); return true;
    // src/unknown/C0/C0BF72.asm:37 ADC #.LOWORD(ENTITY_ABS_X_TABLE)
    // Overlapping static entry reached from 0xC0BF87.
    case 0xC0BF89: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:38 STA @VIRTUAL02
    case 0xC0BF8A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BF72.asm:39 STA @LOCAL08
    case 0xC0BF8C: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BF72.asm:40 LOADPTR UNKNOWN_C42A1F, @LOCAL07
    case 0xC0BF8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005D, 2); else cpu.execute_instruction<0xA9>(0x00295D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BF72.asm:40 LOADPTR UNKNOWN_C42A1F, @LOCAL07
    // Overlapping static entry reached from 0xC0BF8E.
    case 0xC0BF90: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000085, 2); else cpu.execute_instruction<0x29>(0x001E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0BF72.asm:40 LOADPTR UNKNOWN_C42A1F, @LOCAL07
    case 0xC0BF91: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0BF72.asm:40 LOADPTR UNKNOWN_C42A1F, @LOCAL07
    // Overlapping static entry reached from 0xC0BF90.
    case 0xC0BF92: cpu.execute_instruction<0x1E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BF72.asm:40 LOADPTR UNKNOWN_C42A1F, @LOCAL07
    case 0xC0BF93: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BF72.asm:40 LOADPTR UNKNOWN_C42A1F, @LOCAL07
    // Overlapping static entry reached from 0xC0BF93.
    case 0xC0BF95: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0BF72.asm:40 LOADPTR UNKNOWN_C42A1F, @LOCAL07
    case 0xC0BF96: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C0BF72.asm:41 LDA @LOCAL0B
    case 0xC0BF98: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0BF72.asm:42 CLC
    case 0xC0BF9A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:43 ADC #.LOWORD(ENTITY_SIZES)
    case 0xC0BF9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006C, 2); else cpu.execute_instruction<0x69>(0x002F6C, 3); return true;
    // src/unknown/C0/C0BF72.asm:43 ADC #.LOWORD(ENTITY_SIZES)
    // Overlapping static entry reached from 0xC0BF9B.
    case 0xC0BF9D: cpu.execute_instruction<0x2F>(0x1C86AA, 4); return true;
    // src/unknown/C0/C0BF72.asm:44 TAX
    case 0xC0BF9E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:45 STX @LOCAL06
    case 0xC0BF9F: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C0BF72.asm:46 LDA __BSS_START__,X
    case 0xC0BFA1: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0BF72.asm:47 ASL
    case 0xC0BFA4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:48 TAY
    case 0xC0BFA5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:49 LDX @VIRTUAL02
    case 0xC0BFA6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0BF72.asm:50 LDA __BSS_START__,X
    case 0xC0BFA8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0BF72.asm:51 SEC
    case 0xC0BFAB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:52 SBC [@LOCAL07],Y
    case 0xC0BFAC: cpu.execute_instruction<0xF7>(0x00001E, 2); return true;
    // src/unknown/C0/C0BF72.asm:53 LSR
    case 0xC0BFAE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:54 LSR
    case 0xC0BFAF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:55 LSR
    case 0xC0BFB0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:56 STA PATHFINDING_TARGET_CENTRE_X
    case 0xC0BFB1: cpu.execute_instruction<0x8D>(0x004E14, 3); return true;
    // src/unknown/C0/C0BF72.asm:57 LDA @LOCAL0B
    case 0xC0BFB4: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0BF72.asm:58 CLC
    case 0xC0BFB6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:59 ADC #.LOWORD(ENTITY_ABS_Y_TABLE)
    case 0xC0BFB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C0, 2); else cpu.execute_instruction<0x69>(0x000BC0, 3); return true;
    // src/unknown/C0/C0BF72.asm:59 ADC #.LOWORD(ENTITY_ABS_Y_TABLE)
    // Overlapping static entry reached from 0xC0BFB7.
    case 0xC0BFB9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:60 TAY
    case 0xC0BFBA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:61 STY @LOCAL0B
    case 0xC0BFBB: cpu.execute_instruction<0x84>(0x000028, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BF72.asm:62 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    case 0xC0BFBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00297F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BF72.asm:62 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0BFBD.
    case 0xC0BFBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000085, 2); else cpu.execute_instruction<0x29>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0BF72.asm:62 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    case 0xC0BFC0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0BF72.asm:62 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0BFBF.
    case 0xC0BFC1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BF72.asm:62 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    case 0xC0BFC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BF72.asm:62 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0BFC2.
    case 0xC0BFC4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0BF72.asm:62 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    case 0xC0BFC5: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0BF72.asm:63 LDX @LOCAL06
    case 0xC0BFC7: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C0/C0BF72.asm:64 LDA __BSS_START__,X
    case 0xC0BFC9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0BF72.asm:65 ASL
    case 0xC0BFCC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:66 STA @LOCAL05
    case 0xC0BFCD: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BF72.asm:67 LOADPTR UNKNOWN_C42AEB, @VIRTUAL06
    case 0xC0BFCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000029, 2); else cpu.execute_instruction<0xA9>(0x002A29, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BF72.asm:67 LOADPTR UNKNOWN_C42AEB, @VIRTUAL06
    // Overlapping static entry reached from 0xC0BFCF.
    case 0xC0BFD1: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0BF72.asm:67 LOADPTR UNKNOWN_C42AEB, @VIRTUAL06
    case 0xC0BFD2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BF72.asm:67 LOADPTR UNKNOWN_C42AEB, @VIRTUAL06
    case 0xC0BFD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BF72.asm:67 LOADPTR UNKNOWN_C42AEB, @VIRTUAL06
    // Overlapping static entry reached from 0xC0BFD4.
    case 0xC0BFD6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0BF72.asm:67 LOADPTR UNKNOWN_C42AEB, @VIRTUAL06
    case 0xC0BFD7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0BF72.asm:68 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0BFD9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0BF72.asm:68 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0BFDB: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0BF72.asm:68 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0BFDD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0BF72.asm:68 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0BFDF: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0BF72.asm:69 LDA @LOCAL05
    case 0xC0BFE1: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0BF72.asm:70 CLC
    case 0xC0BFE3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:71 ADC @VIRTUAL06
    case 0xC0BFE4: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0BF72.asm:72 STA @VIRTUAL06
    case 0xC0BFE6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0BF72.asm:73 LDA [@VIRTUAL06]
    case 0xC0BFE8: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0BF72.asm:74 PHA
    case 0xC0BFEA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:75 LDA @LOCAL05
    case 0xC0BFEB: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0BF72.asm:76 PHA
    case 0xC0BFED: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0BF72.asm:77 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0BFEE: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0BF72.asm:77 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0BFF0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0BF72.asm:77 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0BFF2: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0BF72.asm:77 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0BFF4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0BF72.asm:78 PLA
    case 0xC0BFF6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:79 CLC
    case 0xC0BFF7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:80 ADC @VIRTUAL06
    case 0xC0BFF8: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0BF72.asm:81 STA @VIRTUAL06
    case 0xC0BFFA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0BF72.asm:82 LDA [@VIRTUAL06]
    case 0xC0BFFC: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0BF72.asm:83 STA @VIRTUAL02
    case 0xC0BFFE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BF72.asm:84 LDA __BSS_START__,Y
    case 0xC0C000: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0BF72.asm:85 SEC
    case 0xC0C003: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:86 SBC @VIRTUAL02
    case 0xC0C004: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0BF72.asm:87 PLY
    case 0xC0C006: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:88 STY @VIRTUAL02
    case 0xC0C007: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0BF72.asm:89 CLC
    case 0xC0C009: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:90 ADC @VIRTUAL02
    case 0xC0C00A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0BF72.asm:91 LSR
    case 0xC0C00C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:92 LSR
    case 0xC0C00D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:93 LSR
    case 0xC0C00E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:94 STA PATHFINDING_TARGET_CENTRE_Y
    case 0xC0C00F: cpu.execute_instruction<0x8D>(0x004E16, 3); return true;
    // src/unknown/C0/C0BF72.asm:95 LDA __BSS_START__,X
    case 0xC0C012: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0BF72.asm:96 ASL
    case 0xC0C015: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:97 STA @LOCAL06
    case 0xC0C016: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C0BF72.asm:98 TAY
    case 0xC0C018: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:99 LDA @LOCAL08
    case 0xC0C019: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C0/C0BF72.asm:100 STA @VIRTUAL02
    case 0xC0C01B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BF72.asm:101 LDX @VIRTUAL02
    case 0xC0C01D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0BF72.asm:102 LDA __BSS_START__,X
    case 0xC0C01F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0BF72.asm:103 SEC
    case 0xC0C022: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:104 SBC [@LOCAL07],Y
    case 0xC0C023: cpu.execute_instruction<0xF7>(0x00001E, 2); return true;
    // src/unknown/C0/C0BF72.asm:105 LSR
    case 0xC0C025: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:106 LSR
    case 0xC0C026: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:107 LSR
    case 0xC0C027: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:108 SEC
    case 0xC0C028: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:109 SBC @VIRTUAL04
    case 0xC0C029: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C0/C0BF72.asm:110 TAX
    case 0xC0C02B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:111 LDA @LOCAL06
    case 0xC0C02C: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C0/C0BF72.asm:112 MOVE_INTY @LOCAL04, @VIRTUAL06
    case 0xC0C02E: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C0/C0BF72.asm:112 MOVE_INTY @LOCAL04, @VIRTUAL06
    case 0xC0C030: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C0/C0BF72.asm:112 MOVE_INTY @LOCAL04, @VIRTUAL06
    case 0xC0C032: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C0/C0BF72.asm:112 MOVE_INTY @LOCAL04, @VIRTUAL06
    case 0xC0C034: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C0BF72.asm:113 CLC
    case 0xC0C036: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:114 ADC @VIRTUAL06
    case 0xC0C037: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0BF72.asm:115 STA @VIRTUAL06
    case 0xC0C039: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0BF72.asm:116 LDA [@VIRTUAL06]
    case 0xC0C03B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0BF72.asm:117 PHA
    case 0xC0C03D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:118 LDA @LOCAL06
    case 0xC0C03E: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C0/C0BF72.asm:119 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0C040: cpu.execute_instruction<0xA4>(0x00000A, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C0/C0BF72.asm:119 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0C042: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C0/C0BF72.asm:119 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0C044: cpu.execute_instruction<0xA4>(0x00000C, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C0/C0BF72.asm:119 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0C046: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C0BF72.asm:120 CLC
    case 0xC0C048: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:121 ADC @VIRTUAL06
    case 0xC0C049: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0BF72.asm:122 STA @VIRTUAL06
    case 0xC0C04B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0BF72.asm:123 LDA [@VIRTUAL06]
    case 0xC0C04D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0BF72.asm:124 STA @VIRTUAL02
    case 0xC0C04F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BF72.asm:125 LDY @LOCAL0B
    case 0xC0C051: cpu.execute_instruction<0xA4>(0x000028, 2); return true;
    // src/unknown/C0/C0BF72.asm:126 LDA __BSS_START__,Y
    case 0xC0C053: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0BF72.asm:127 SEC
    case 0xC0C056: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:128 SBC @VIRTUAL02
    case 0xC0C057: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0BF72.asm:129 PLY
    case 0xC0C059: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:130 STY @VIRTUAL02
    case 0xC0C05A: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0BF72.asm:131 CLC
    case 0xC0C05C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:132 ADC @VIRTUAL02
    case 0xC0C05D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0BF72.asm:133 LSR
    case 0xC0C05F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:134 LSR
    case 0xC0C060: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:135 LSR
    case 0xC0C061: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:136 SEC
    case 0xC0C062: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:137 SBC @LOCAL09
    case 0xC0C063: cpu.execute_instruction<0xE5>(0x000024, 2); return true;
    // src/unknown/C0/C0BF72.asm:138 STA @LOCAL0B
    case 0xC0C065: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0BF72.asm:139 LDA @VIRTUAL04
    case 0xC0C067: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0BF72.asm:140 AND #$003F
    case 0xC0C069: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0BF72.asm:140 AND #$003F
    // Overlapping static entry reached from 0xC0C069.
    case 0xC0C06B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0BF72.asm:141 STA PATHFINDING_STATE + pathfinding::targets + 2
    case 0xC0C06C: cpu.execute_instruction<0x8D>(0x00F27E, 3); return true;
    // src/unknown/C0/C0BF72.asm:142 LDA PATHFINDING_TARGET_HEIGHT
    case 0xC0C06F: cpu.execute_instruction<0xAD>(0x004E1A, 3); return true;
    // src/unknown/C0/C0BF72.asm:143 AND #$003F
    case 0xC0C072: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0BF72.asm:143 AND #$003F
    // Overlapping static entry reached from 0xC0C072.
    case 0xC0C074: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0BF72.asm:144 STA PATHFINDING_STATE + pathfinding::targets
    case 0xC0C075: cpu.execute_instruction<0x8D>(0x00F27C, 3); return true;
    // src/unknown/C0/C0BF72.asm:145 LDA @LOCAL0B
    case 0xC0C078: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0BF72.asm:146 STA @LOCAL00
    case 0xC0C07A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0BF72.asm:147 LDA #1
    case 0xC0C07C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0BF72.asm:147 LDA #1
    // Overlapping static entry reached from 0xC0C07C.
    case 0xC0C07E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BF72.asm:148 STA @LOCAL01
    case 0xC0C07F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0BF72.asm:149 LDA #252
    case 0xC0C081: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x0000FC, 3); return true;
    // src/unknown/C0/C0BF72.asm:149 LDA #252
    // Overlapping static entry reached from 0xC0C081.
    case 0xC0C083: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BF72.asm:150 STA @LOCAL02
    case 0xC0C084: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0BF72.asm:151 LDA #50
    case 0xC0C086: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000032, 2); else cpu.execute_instruction<0xA9>(0x000032, 3); return true;
    // src/unknown/C0/C0BF72.asm:151 LDA #50
    // Overlapping static entry reached from 0xC0EA70.
    case 0xC0C087: cpu.execute_instruction<0x32>(0x000000, 2); return true;
    // src/unknown/C0/C0BF72.asm:151 LDA #50
    // Overlapping static entry reached from 0xC0C086.
    case 0xC0C088: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BF72.asm:152 STA @LOCAL03
    case 0xC0C089: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0BF72.asm:153 TXY
    case 0xC0C08B: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:154 LDX #1
    case 0xC0C08C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C0BF72.asm:154 LDX #1
    // Overlapping static entry reached from 0xC0C08C.
    case 0xC0C08E: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C0BF72.asm:155 LDA @LOCAL0A
    case 0xC0C08F: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C0/C0BF72.asm:156 JSR UNKNOWN_C0BA35
    case 0xC0C091: cpu.execute_instruction<0x20>(0x00BA14, 3); return true;
    // src/unknown/C0/C0BF72.asm:156 JSR UNKNOWN_C0BA35
    // Overlapping static entry reached from 0xC0D52D.
    case 0xC0C092: cpu.execute_instruction<0x14>(0x0000BA, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0BF72.asm:157 END_C_FUNCTION
    case 0xC0C094: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0BF72.asm:157 END_C_FUNCTION
    case 0xC0C095: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C0B4.asm (unresolved).
bool execute_unresolved_c0_c0c0b4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C0B4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C096: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C0B4.asm:10 END_STACK_VARS
    case 0xC0C098: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0C0B4.asm:10 END_STACK_VARS
    case 0xC0C099: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C0B4.asm:10 END_STACK_VARS
    case 0xC0C09A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C0B4.asm:10 END_STACK_VARS
    case 0xC0C09B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C0B4.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C09B.
    case 0xC0C09D: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C0B4.asm:10 END_STACK_VARS
    case 0xC0C09E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0C0B4.asm:10 END_STACK_VARS
    case 0xC0C09F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:11 STA @LOCAL02
    case 0xC0C0A0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0C0B4.asm:11 STA @LOCAL02
    // Overlapping static entry reached from 0xC0C09D.
    case 0xC0C0A1: cpu.execute_instruction<0x12>(0x0000AC, 2); return true;
    // src/unknown/C0/C0C0B4.asm:12 LDY CURRENT_ENTITY_SLOT
    case 0xC0C0A2: cpu.execute_instruction<0xAC>(0x001A38, 3); return true;
    // src/unknown/C0/C0C0B4.asm:12 LDY CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C0A1.
    case 0xC0C0A3: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:12 LDY CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C0A3.
    case 0xC0C0A4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:13 STY @LOCAL01
    case 0xC0C0A5: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C0C0B4.asm:14 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0C0A7: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C0C0B4.asm:15 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0C0AA: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C0C0B4.asm:16 JSL LOAD_SECTOR_ATTRS
    case 0xC0C0AD: cpu.execute_instruction<0x22>(0xC00AB3, 4); return true;
    // src/unknown/C0/C0C0B4.asm:17 AND #$0007
    case 0xC0C0B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C0C0B4.asm:17 AND #$0007
    // Overlapping static entry reached from 0xC0C0B1.
    case 0xC0C0B3: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C0C0B4.asm:18 TAX
    case 0xC0C0B4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:19 LDA f:UNKNOWN_C3DFE8,X
    case 0xC0C0B5: cpu.execute_instruction<0xBF>(0xC3DFD2, 4); return true;
    // src/unknown/C0/C0C0B4.asm:20 AND #$00FF
    case 0xC0C0B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0C0B4.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC0C0B9.
    case 0xC0C0BB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0C0B4.asm:21 BEQL @UNKNOWN6
    case 0xC0C0BC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0C0B4.asm:21 BEQL @UNKNOWN6
    case 0xC0C0BE: cpu.execute_instruction<0x4C>(0x00C178, 3); return true;
    // src/unknown/C0/C0C0B4.asm:22 LDY @LOCAL01
    case 0xC0C0C1: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C0C0B4.asm:23 TYA
    case 0xC0C0C3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:24 ASL
    case 0xC0C0C4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:25 STA @VIRTUAL04
    case 0xC0C0C5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C0B4.asm:26 CLC
    case 0xC0C0C7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:27 ADC #.LOWORD(ENTITY_PATHFINDING_STATES)
    case 0xC0C0C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005C, 2); else cpu.execute_instruction<0x69>(0x00305C, 3); return true;
    // src/unknown/C0/C0C0B4.asm:27 ADC #.LOWORD(ENTITY_PATHFINDING_STATES)
    // Overlapping static entry reached from 0xC0C0C8.
    case 0xC0C0CA: cpu.execute_instruction<0x30>(0x000085, 2); return true;
    // src/unknown/C0/C0C0B4.asm:28 STA @VIRTUAL02
    case 0xC0C0CB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C0B4.asm:28 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC0C0CA.
    case 0xC0C0CC: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/C0/C0C0B4.asm:29 LDA #.LOWORD(-1)
    case 0xC0C0CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C0B4.asm:29 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0C0CD.
    case 0xC0C0CF: cpu.execute_instruction<0xFF>(0x9D02A6, 4); return true;
    // src/unknown/C0/C0C0B4.asm:30 LDX @VIRTUAL02
    case 0xC0C0D0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C0B4.asm:31 STA __BSS_START__,X
    case 0xC0C0D2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:31 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0C0CF.
    case 0xC0C0D3: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0C0B4.asm:32 LDY #48
    case 0xC0C0D5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000030, 2); else cpu.execute_instruction<0xA0>(0x000030, 3); return true;
    // src/unknown/C0/C0C0B4.asm:32 LDY #48
    // Overlapping static entry reached from 0xC0C0D5.
    case 0xC0C0D7: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C0/C0C0B4.asm:33 TYX
    case 0xC0C0D8: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:34 LDA #1
    case 0xC0C0D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0C0B4.asm:34 LDA #1
    // Overlapping static entry reached from 0xC0C0D9.
    case 0xC0C0DB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0C0B4.asm:35 JSL FIND_PATH_TO_PARTY
    case 0xC0C0DC: cpu.execute_instruction<0x22>(0xC0BC53, 4); return true;
    // src/unknown/C0/C0C0B4.asm:36 CMP #0
    case 0xC0C0E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:36 CMP #0
    // Overlapping static entry reached from 0xC0C0E0.
    case 0xC0C0E2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0C0B4.asm:37 BNEL @UNKNOWN6
    case 0xC0C0E3: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0C0B4.asm:37 BNEL @UNKNOWN6
    case 0xC0C0E5: cpu.execute_instruction<0x4C>(0x00C178, 3); return true;
    // src/unknown/C0/C0C0B4.asm:38 LDA #0
    case 0xC0C0E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:38 LDA #0
    // Overlapping static entry reached from 0xC0C0E8.
    case 0xC0C0EA: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C0C0B4.asm:39 LDX @VIRTUAL02
    case 0xC0C0EB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C0B4.asm:40 STA __BSS_START__,X
    case 0xC0C0ED: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:41 LDA @VIRTUAL04
    case 0xC0C0F0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0C0B4.asm:42 CLC
    case 0xC0C0F2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:43 ADC #.LOWORD(ENTITY_PATH_POINTS)
    case 0xC0C0F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x003200, 3); return true;
    // src/unknown/C0/C0C0B4.asm:43 ADC #.LOWORD(ENTITY_PATH_POINTS)
    // Overlapping static entry reached from 0xC0C0F3.
    case 0xC0C0F5: cpu.execute_instruction<0x32>(0x0000AA, 2); return true;
    // src/unknown/C0/C0C0B4.asm:44 TAX
    case 0xC0C0F6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:45 LDA __BSS_START__,X
    case 0xC0C0F7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:46 INC
    case 0xC0C0FA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:47 INC
    case 0xC0C0FB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:48 INC
    case 0xC0C0FC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:49 INC
    case 0xC0C0FD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:50 STA __BSS_START__,X
    case 0xC0C0FE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:51 LDA @VIRTUAL04
    case 0xC0C101: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0C0B4.asm:52 CLC
    case 0xC0C103: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:53 ADC #.LOWORD(ENTITY_PATH_POINT_COUNTS)
    case 0xC0C104: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003C, 2); else cpu.execute_instruction<0x69>(0x00323C, 3); return true;
    // src/unknown/C0/C0C0B4.asm:53 ADC #.LOWORD(ENTITY_PATH_POINT_COUNTS)
    // Overlapping static entry reached from 0xC0C104.
    case 0xC0C106: cpu.execute_instruction<0x32>(0x0000A8, 2); return true;
    // src/unknown/C0/C0C0B4.asm:54 TAY
    case 0xC0C107: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:55 LDA __BSS_START__,Y
    case 0xC0C108: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:56 DEC
    case 0xC0C10B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:57 STA __BSS_START__,Y
    case 0xC0C10C: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:58 BNE @UNKNOWN2
    case 0xC0C10F: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0C0B4.asm:59 LDA #1
    case 0xC0C111: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0C0B4.asm:59 LDA #1
    // Overlapping static entry reached from 0xC0C111.
    case 0xC0C113: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C0B4.asm:60 BRA @UNKNOWN7
    case 0xC0C114: cpu.execute_instruction<0x80>(0x000065, 2); return true;
    // src/unknown/C0/C0C0B4.asm:62 LDA __BSS_START__,X
    case 0xC0C116: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:63 STA @VIRTUAL02
    case 0xC0C119: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C0B4.asm:64 LDA @LOCAL02
    case 0xC0C11B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0C0B4.asm:65 STA @VIRTUAL04
    case 0xC0C11D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C0B4.asm:66 ASL
    case 0xC0C11F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:67 ASL
    case 0xC0C120: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:68 ADC @VIRTUAL04
    case 0xC0C121: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C0C0B4.asm:69 ASL
    case 0xC0C123: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:70 ASL
    case 0xC0C124: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:71 ASL
    case 0xC0C125: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:72 ASL
    case 0xC0C126: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:73 CLC
    case 0xC0C127: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:74 ADC #.LOWORD(DELIVERY_PATHS)
    case 0xC0C128: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x004E1C, 3); return true;
    // src/unknown/C0/C0C0B4.asm:74 ADC #.LOWORD(DELIVERY_PATHS)
    // Overlapping static entry reached from 0xC0C128.
    case 0xC0C12A: cpu.execute_instruction<0x4E>(0x000E85, 3); return true;
    // src/unknown/C0/C0C0B4.asm:75 STA @LOCAL00
    case 0xC0C12B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C0B4.asm:76 STA __BSS_START__,X
    case 0xC0C12D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:77 LDA __BSS_START__,Y
    case 0xC0C130: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:78 TAY
    case 0xC0C133: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:79 LDX #0
    case 0xC0C134: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:79 LDX #0
    // Overlapping static entry reached from 0xC0C134.
    case 0xC0C136: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C0C0B4.asm:80 STX @LOCAL01
    case 0xC0C137: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0C0B4.asm:81 BRA @UNKNOWN4
    case 0xC0C139: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/unknown/C0/C0C0B4.asm:83 LDA @LOCAL00
    case 0xC0C13B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C0B4.asm:84 PHA
    case 0xC0C13D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:85 LDX @VIRTUAL02
    case 0xC0C13E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C0B4.asm:86 LDA __BSS_START__,X
    case 0xC0C140: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:87 PLX
    case 0xC0C143: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:88 STA __BSS_START__,X
    case 0xC0C144: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:89 LDA @LOCAL00
    case 0xC0C147: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C0B4.asm:90 PHA
    case 0xC0C149: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:91 LDX @VIRTUAL02
    case 0xC0C14A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C0B4.asm:92 LDA __BSS_START__+2,X
    case 0xC0C14C: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C0/C0C0B4.asm:93 PLX
    case 0xC0C14F: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:94 STA __BSS_START__+2,X
    case 0xC0C150: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/unknown/C0/C0C0B4.asm:95 INC @VIRTUAL02
    case 0xC0C153: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0C0B4.asm:96 INC @VIRTUAL02
    case 0xC0C155: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0C0B4.asm:97 INC @VIRTUAL02
    case 0xC0C157: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0C0B4.asm:98 INC @VIRTUAL02
    case 0xC0C159: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0C0B4.asm:99 LDA @LOCAL00
    case 0xC0C15B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C0B4.asm:100 INC
    case 0xC0C15D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:101 INC
    case 0xC0C15E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:102 INC
    case 0xC0C15F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:103 INC
    case 0xC0C160: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:104 STA @LOCAL00
    case 0xC0C161: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C0B4.asm:105 DEY
    case 0xC0C163: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:106 LDX @LOCAL01
    case 0xC0C164: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0C0B4.asm:107 INX
    case 0xC0C166: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:108 STX @LOCAL01
    case 0xC0C167: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0C0B4.asm:110 CPY #0
    case 0xC0C169: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:110 CPY #0
    // Overlapping static entry reached from 0xC0C169.
    case 0xC0C16B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0C0B4.asm:111 BEQ @UNKNOWN5
    case 0xC0C16C: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0C0B4.asm:112 CPX #20
    case 0xC0C16E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000014, 2); else cpu.execute_instruction<0xE0>(0x000014, 3); return true;
    // src/unknown/C0/C0C0B4.asm:112 CPX #20
    // Overlapping static entry reached from 0xC0C16E.
    case 0xC0C170: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0C0B4.asm:113 BCC @UNKNOWN3
    case 0xC0C171: cpu.execute_instruction<0x90>(0x0000C8, 2); return true;
    // src/unknown/C0/C0C0B4.asm:115 LDA #0
    case 0xC0C173: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:115 LDA #0
    // Overlapping static entry reached from 0xC0C173.
    case 0xC0C175: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C0B4.asm:116 BRA @UNKNOWN7
    case 0xC0C176: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0C0B4.asm:118 LDA #1
    case 0xC0C178: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0C0B4.asm:118 LDA #1
    // Overlapping static entry reached from 0xC0C178.
    case 0xC0C17A: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C0B4.asm:120 END_C_FUNCTION
    case 0xC0C17B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C0B4.asm:120 END_C_FUNCTION
    case 0xC0C17C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C19B.asm (unresolved).
bool execute_unresolved_c0_c0c19b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C19B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C17D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C19B.asm:10 END_STACK_VARS
    case 0xC0C17F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0C19B.asm:10 END_STACK_VARS
    case 0xC0C180: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C19B.asm:10 END_STACK_VARS
    case 0xC0C181: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C19B.asm:10 END_STACK_VARS
    case 0xC0C182: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C19B.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C182.
    case 0xC0C184: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C19B.asm:10 END_STACK_VARS
    case 0xC0C185: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0C19B.asm:10 END_STACK_VARS
    case 0xC0C186: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:11 STA @VIRTUAL04
    case 0xC0C187: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C19B.asm:11 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC0C184.
    case 0xC0C188: cpu.execute_instruction<0x04>(0x0000AC, 2); return true;
    // src/unknown/C0/C0C19B.asm:12 LDY CURRENT_ENTITY_SLOT
    case 0xC0C189: cpu.execute_instruction<0xAC>(0x001A38, 3); return true;
    // src/unknown/C0/C0C19B.asm:12 LDY CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C188.
    case 0xC0C18A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:12 LDY CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C18A.
    case 0xC0C18B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:13 STY @LOCAL02
    case 0xC0C18C: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C0C19B.asm:14 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0C18E: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C0C19B.asm:15 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0C191: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C0C19B.asm:16 JSL LOAD_SECTOR_ATTRS
    case 0xC0C194: cpu.execute_instruction<0x22>(0xC00AB3, 4); return true;
    // src/unknown/C0/C0C19B.asm:17 AND #$0007
    case 0xC0C198: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C0C19B.asm:17 AND #$0007
    // Overlapping static entry reached from 0xC0C198.
    case 0xC0C19A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C0C19B.asm:18 TAX
    case 0xC0C19B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:19 LDA f:UNKNOWN_C3DFE8,X
    case 0xC0C19C: cpu.execute_instruction<0xBF>(0xC3DFD2, 4); return true;
    // src/unknown/C0/C0C19B.asm:20 AND #$00FF
    case 0xC0C1A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0C19B.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC0C1A0.
    case 0xC0C1A2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0C19B.asm:21 BEQL @UNKNOWN4
    case 0xC0C1A3: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0C19B.asm:21 BEQL @UNKNOWN4
    case 0xC0C1A5: cpu.execute_instruction<0x4C>(0x00C22E, 3); return true;
    // src/unknown/C0/C0C19B.asm:22 LDY @LOCAL02
    case 0xC0C1A8: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C0C19B.asm:23 TYA
    case 0xC0C1AA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:24 ASL
    case 0xC0C1AB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:25 STA @LOCAL01
    case 0xC0C1AC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0C19B.asm:26 CLC
    case 0xC0C1AE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:27 ADC #.LOWORD(ENTITY_PATHFINDING_STATES)
    case 0xC0C1AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005C, 2); else cpu.execute_instruction<0x69>(0x00305C, 3); return true;
    // src/unknown/C0/C0C19B.asm:27 ADC #.LOWORD(ENTITY_PATHFINDING_STATES)
    // Overlapping static entry reached from 0xC0C1AF.
    case 0xC0C1B1: cpu.execute_instruction<0x30>(0x0000AA, 2); return true;
    // src/unknown/C0/C0C19B.asm:28 TAX
    case 0xC0C1B2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:29 STX @LOCAL00
    case 0xC0C1B3: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0C19B.asm:30 LDA #.LOWORD(-1)
    case 0xC0C1B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C19B.asm:30 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0C1B5.
    case 0xC0C1B7: cpu.execute_instruction<0xFF>(0x00009D, 4); return true;
    // src/unknown/C0/C0C19B.asm:31 STA __BSS_START__,X
    case 0xC0C1B8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0C19B.asm:32 JSL UNKNOWN_C0BD96
    case 0xC0C1BB: cpu.execute_instruction<0x22>(0xC0BD78, 4); return true;
    // src/unknown/C0/C0C19B.asm:33 TAY
    case 0xC0C1BF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:34 BNE @UNKNOWN4
    case 0xC0C1C0: cpu.execute_instruction<0xD0>(0x00006C, 2); return true;
    // src/unknown/C0/C0C19B.asm:35 LDA #0
    case 0xC0C1C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C19B.asm:35 LDA #0
    // Overlapping static entry reached from 0xC0C1C2.
    case 0xC0C1C4: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C0C19B.asm:36 LDX @LOCAL00
    case 0xC0C1C5: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0C19B.asm:37 STA __BSS_START__,X
    case 0xC0C1C7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0C19B.asm:38 LDA @LOCAL01
    case 0xC0C1CA: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0C19B.asm:39 CLC
    case 0xC0C1CC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:40 ADC #.LOWORD(ENTITY_PATH_POINTS)
    case 0xC0C1CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x003200, 3); return true;
    // src/unknown/C0/C0C19B.asm:40 ADC #.LOWORD(ENTITY_PATH_POINTS)
    // Overlapping static entry reached from 0xC0C1CD.
    case 0xC0C1CF: cpu.execute_instruction<0x32>(0x0000AA, 2); return true;
    // src/unknown/C0/C0C19B.asm:41 TAX
    case 0xC0C1D0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:42 LDA __BSS_START__,X
    case 0xC0C1D1: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0C19B.asm:43 STA @VIRTUAL02
    case 0xC0C1D4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C19B.asm:44 LDA @VIRTUAL04
    case 0xC0C1D6: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0C19B.asm:45 STA @VIRTUAL04
    case 0xC0C1D8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C19B.asm:46 ASL
    case 0xC0C1DA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:47 ASL
    case 0xC0C1DB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:48 ADC @VIRTUAL04
    case 0xC0C1DC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C0C19B.asm:49 ASL
    case 0xC0C1DE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:50 ASL
    case 0xC0C1DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:51 ASL
    case 0xC0C1E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:52 ASL
    case 0xC0C1E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:53 CLC
    case 0xC0C1E2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:54 ADC #.LOWORD(DELIVERY_PATHS)
    case 0xC0C1E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x004E1C, 3); return true;
    // src/unknown/C0/C0C19B.asm:54 ADC #.LOWORD(DELIVERY_PATHS)
    // Overlapping static entry reached from 0xC0C1E3.
    case 0xC0C1E5: cpu.execute_instruction<0x4E>(0x009DA8, 3); return true;
    // src/unknown/C0/C0C19B.asm:55 TAY
    case 0xC0C1E6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:56 STA __BSS_START__,X
    case 0xC0C1E7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0C19B.asm:56 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0C1E5.
    case 0xC0C1E8: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0C19B.asm:57 LDA @LOCAL01
    case 0xC0C1EA: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0C19B.asm:58 TAX
    case 0xC0C1EC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:59 LDA ENTITY_PATH_POINT_COUNTS,X
    case 0xC0C1ED: cpu.execute_instruction<0xBD>(0x00323C, 3); return true;
    // src/unknown/C0/C0C19B.asm:60 STA @LOCAL01
    case 0xC0C1F0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0C19B.asm:61 LDX #0
    case 0xC0C1F2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0C19B.asm:61 LDX #0
    // Overlapping static entry reached from 0xC0C1F2.
    case 0xC0C1F4: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C0C19B.asm:62 STX @LOCAL00
    case 0xC0C1F5: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0C19B.asm:63 BRA @UNKNOWN2
    case 0xC0C1F7: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/unknown/C0/C0C19B.asm:65 LDX @VIRTUAL02
    case 0xC0C1F9: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C19B.asm:66 LDA __BSS_START__,X
    case 0xC0C1FB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0C19B.asm:67 STA __BSS_START__,Y
    case 0xC0C1FE: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0C19B.asm:68 LDX @VIRTUAL02
    case 0xC0C201: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C19B.asm:69 LDA __BSS_START__+2,X
    case 0xC0C203: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C0/C0C19B.asm:70 STA __BSS_START__+2,Y
    case 0xC0C206: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C0/C0C19B.asm:71 INC @VIRTUAL02
    case 0xC0C209: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0C19B.asm:72 INC @VIRTUAL02
    case 0xC0C20B: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0C19B.asm:73 INC @VIRTUAL02
    case 0xC0C20D: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0C19B.asm:74 INC @VIRTUAL02
    case 0xC0C20F: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0C19B.asm:75 INY
    case 0xC0C211: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:76 INY
    case 0xC0C212: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:77 INY
    case 0xC0C213: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:78 INY
    case 0xC0C214: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:79 LDA @LOCAL01
    case 0xC0C215: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0C19B.asm:80 DEC
    case 0xC0C217: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:81 STA @LOCAL01
    case 0xC0C218: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0C19B.asm:82 LDX @LOCAL00
    case 0xC0C21A: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0C19B.asm:83 INX
    case 0xC0C21C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:84 STX @LOCAL00
    case 0xC0C21D: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0C19B.asm:86 CMP #0
    case 0xC0C21F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0C19B.asm:86 CMP #0
    // Overlapping static entry reached from 0xC0C21F.
    case 0xC0C221: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0C19B.asm:87 BEQ @UNKNOWN3
    case 0xC0C222: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0C19B.asm:88 CPX #20
    case 0xC0C224: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000014, 2); else cpu.execute_instruction<0xE0>(0x000014, 3); return true;
    // src/unknown/C0/C0C19B.asm:88 CPX #20
    // Overlapping static entry reached from 0xC0C224.
    case 0xC0C226: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0C19B.asm:89 BCC @UNKNOWN1
    case 0xC0C227: cpu.execute_instruction<0x90>(0x0000D0, 2); return true;
    // src/unknown/C0/C0C19B.asm:91 LDA #0
    case 0xC0C229: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C19B.asm:91 LDA #0
    // Overlapping static entry reached from 0xC0C229.
    case 0xC0C22B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C19B.asm:92 BRA @UNKNOWN5
    case 0xC0C22C: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0C19B.asm:94 LDA #1
    case 0xC0C22E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0C19B.asm:94 LDA #1
    // Overlapping static entry reached from 0xC0C22E.
    case 0xC0C230: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C19B.asm:96 END_C_FUNCTION
    case 0xC0C231: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C19B.asm:96 END_C_FUNCTION
    case 0xC0C232: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C251.asm (unresolved).
bool execute_unresolved_c0_c0c251_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C251.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C233: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C251.asm:11 END_STACK_VARS
    case 0xC0C235: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0C251.asm:11 END_STACK_VARS
    case 0xC0C236: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C251.asm:11 END_STACK_VARS
    case 0xC0C237: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C251.asm:11 END_STACK_VARS
    case 0xC0C238: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C251.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C238.
    case 0xC0C23A: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C251.asm:11 END_STACK_VARS
    case 0xC0C23B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0C251.asm:11 END_STACK_VARS
    case 0xC0C23C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:12 STA @VIRTUAL04
    case 0xC0C23D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C251.asm:12 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC0C23A.
    case 0xC0C23E: cpu.execute_instruction<0x04>(0x0000AD, 2); return true;
    // src/unknown/C0/C0C251.asm:13 LDA CURRENT_ENTITY_SLOT
    case 0xC0C23F: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0C251.asm:13 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C23E.
    case 0xC0C240: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:13 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C240.
    case 0xC0C241: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:14 ASL
    case 0xC0C242: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:15 STA @VIRTUAL02
    case 0xC0C243: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C251.asm:16 CLC
    case 0xC0C245: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:17 ADC #.LOWORD(ENTITY_PATHFINDING_STATES)
    case 0xC0C246: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005C, 2); else cpu.execute_instruction<0x69>(0x00305C, 3); return true;
    // src/unknown/C0/C0C251.asm:17 ADC #.LOWORD(ENTITY_PATHFINDING_STATES)
    // Overlapping static entry reached from 0xC0C246.
    case 0xC0C248: cpu.execute_instruction<0x30>(0x0000AA, 2); return true;
    // src/unknown/C0/C0C251.asm:18 TAX
    case 0xC0C249: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:19 STX @LOCAL03
    case 0xC0C24A: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C0C251.asm:20 LDA #$FFFF
    case 0xC0C24C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C251.asm:20 LDA #$FFFF
    // Overlapping static entry reached from 0xC0C24C.
    case 0xC0C24E: cpu.execute_instruction<0xFF>(0x00009D, 4); return true;
    // src/unknown/C0/C0C251.asm:21 STA __BSS_START__,X
    case 0xC0C24F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:22 JSL UNKNOWN_C0BF72
    case 0xC0C252: cpu.execute_instruction<0x22>(0xC0BF54, 4); return true;
    // src/unknown/C0/C0C251.asm:23 CMP #$0000
    case 0xC0C256: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:23 CMP #$0000
    // Overlapping static entry reached from 0xC0C256.
    case 0xC0C258: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0C251.asm:24 BNEL @UNKNOWN4
    case 0xC0C259: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0C251.asm:24 BNEL @UNKNOWN4
    case 0xC0C25B: cpu.execute_instruction<0x4C>(0x00C2E9, 3); return true;
    // src/unknown/C0/C0C251.asm:25 LDA #$0000
    case 0xC0C25E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:25 LDA #$0000
    // Overlapping static entry reached from 0xC0C25E.
    case 0xC0C260: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C0C251.asm:26 LDX @LOCAL03
    case 0xC0C261: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0C251.asm:27 STA __BSS_START__,X
    case 0xC0C263: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:28 LDA @VIRTUAL02
    case 0xC0C266: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0C251.asm:29 CLC
    case 0xC0C268: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:30 ADC #.LOWORD(ENTITY_PATH_POINT_COUNTS)
    case 0xC0C269: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003C, 2); else cpu.execute_instruction<0x69>(0x00323C, 3); return true;
    // src/unknown/C0/C0C251.asm:30 ADC #.LOWORD(ENTITY_PATH_POINT_COUNTS)
    // Overlapping static entry reached from 0xC0C269.
    case 0xC0C26B: cpu.execute_instruction<0x32>(0x0000A8, 2); return true;
    // src/unknown/C0/C0C251.asm:31 TAY
    case 0xC0C26C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:32 LDA __BSS_START__,Y
    case 0xC0C26D: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:33 DEC
    case 0xC0C270: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:34 STA @LOCAL02
    case 0xC0C271: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0C251.asm:35 STA __BSS_START__,Y
    case 0xC0C273: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:36 LDA @VIRTUAL02
    case 0xC0C276: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0C251.asm:37 CLC
    case 0xC0C278: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:38 ADC #.LOWORD(ENTITY_PATH_POINTS)
    case 0xC0C279: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x003200, 3); return true;
    // src/unknown/C0/C0C251.asm:38 ADC #.LOWORD(ENTITY_PATH_POINTS)
    // Overlapping static entry reached from 0xC0C279.
    case 0xC0C27B: cpu.execute_instruction<0x32>(0x0000AA, 2); return true;
    // src/unknown/C0/C0C251.asm:39 TAX
    case 0xC0C27C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:40 LDA @LOCAL02
    case 0xC0C27D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0C251.asm:41 DEC
    case 0xC0C27F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:42 ASL
    case 0xC0C280: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:43 ASL
    case 0xC0C281: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:44 STA @VIRTUAL02
    case 0xC0C282: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C251.asm:45 LDA __BSS_START__,X
    case 0xC0C284: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:46 CLC
    case 0xC0C287: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:47 ADC @VIRTUAL02
    case 0xC0C288: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0C251.asm:48 STA @VIRTUAL02
    case 0xC0C28A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C251.asm:49 LDA @VIRTUAL04
    case 0xC0C28C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0C251.asm:50 STA @VIRTUAL04
    case 0xC0C28E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C251.asm:51 ASL
    case 0xC0C290: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:52 ASL
    case 0xC0C291: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:53 ADC @VIRTUAL04
    case 0xC0C292: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C0C251.asm:54 ASL
    case 0xC0C294: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:55 ASL
    case 0xC0C295: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:56 ASL
    case 0xC0C296: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:57 ASL
    case 0xC0C297: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:58 CLC
    case 0xC0C298: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:59 ADC #.LOWORD(DELIVERY_PATHS)
    case 0xC0C299: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x004E1C, 3); return true;
    // src/unknown/C0/C0C251.asm:59 ADC #.LOWORD(DELIVERY_PATHS)
    // Overlapping static entry reached from 0xC0C299.
    case 0xC0C29B: cpu.execute_instruction<0x4E>(0x001085, 3); return true;
    // src/unknown/C0/C0C251.asm:60 STA @LOCAL01
    case 0xC0C29C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0C251.asm:61 STA __BSS_START__,X
    case 0xC0C29E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:62 LDA __BSS_START__,Y
    case 0xC0C2A1: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:63 TAY
    case 0xC0C2A4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:64 LDX #0
    case 0xC0C2A5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:64 LDX #0
    // Overlapping static entry reached from 0xC0C2A5.
    case 0xC0C2A7: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C0C251.asm:65 STX @LOCAL00
    case 0xC0C2A8: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0C251.asm:66 BRA @UNKNOWN2
    case 0xC0C2AA: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/unknown/C0/C0C251.asm:68 LDA @LOCAL01
    case 0xC0C2AC: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0C251.asm:69 PHA
    case 0xC0C2AE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:70 LDX @VIRTUAL02
    case 0xC0C2AF: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C251.asm:71 LDA __BSS_START__,X
    case 0xC0C2B1: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:72 PLX
    case 0xC0C2B4: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:73 STA __BSS_START__,X
    case 0xC0C2B5: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:74 LDA @LOCAL01
    case 0xC0C2B8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0C251.asm:75 PHA
    case 0xC0C2BA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:76 LDX @VIRTUAL02
    case 0xC0C2BB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C251.asm:77 LDA __BSS_START__+2,X
    case 0xC0C2BD: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C0/C0C251.asm:78 PLX
    case 0xC0C2C0: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:79 STA __BSS_START__+2,X
    case 0xC0C2C1: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/unknown/C0/C0C251.asm:80 LDA @VIRTUAL02
    case 0xC0C2C4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0C251.asm:81 SEC
    case 0xC0C2C6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:82 SBC #4
    case 0xC0C2C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/unknown/C0/C0C251.asm:82 SBC #4
    // Overlapping static entry reached from 0xC0C2C7.
    case 0xC0C2C9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0C251.asm:83 STA @VIRTUAL02
    case 0xC0C2CA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C251.asm:84 LDA @LOCAL01
    case 0xC0C2CC: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0C251.asm:85 INC
    case 0xC0C2CE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:86 INC
    case 0xC0C2CF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:87 INC
    case 0xC0C2D0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:88 INC
    case 0xC0C2D1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:89 STA @LOCAL01
    case 0xC0C2D2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0C251.asm:90 DEY
    case 0xC0C2D4: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:91 LDX @LOCAL00
    case 0xC0C2D5: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0C251.asm:92 INX
    case 0xC0C2D7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:93 STX @LOCAL00
    case 0xC0C2D8: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0C251.asm:95 CPY #0
    case 0xC0C2DA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:95 CPY #0
    // Overlapping static entry reached from 0xC0C2DA.
    case 0xC0C2DC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0C251.asm:96 BEQ @UNKNOWN3
    case 0xC0C2DD: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0C251.asm:97 CPX #20
    case 0xC0C2DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000014, 2); else cpu.execute_instruction<0xE0>(0x000014, 3); return true;
    // src/unknown/C0/C0C251.asm:97 CPX #20
    // Overlapping static entry reached from 0xC0C2DF.
    case 0xC0C2E1: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0C251.asm:98 BCC @UNKNOWN1
    case 0xC0C2E2: cpu.execute_instruction<0x90>(0x0000C8, 2); return true;
    // src/unknown/C0/C0C251.asm:100 LDA #0
    case 0xC0C2E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:100 LDA #0
    // Overlapping static entry reached from 0xC0C2E4.
    case 0xC0C2E6: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C251.asm:101 BRA @UNKNOWN5
    case 0xC0C2E7: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0C251.asm:103 LDA #1
    case 0xC0C2E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0C251.asm:103 LDA #1
    // Overlapping static entry reached from 0xC0C2E9.
    case 0xC0C2EB: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C251.asm:105 END_C_FUNCTION
    case 0xC0C2EC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C251.asm:105 END_C_FUNCTION
    case 0xC0C2ED: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C30C.asm (unresolved).
bool execute_unresolved_c0_c0c30c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C30C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C2EE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C30C.asm:8 END_STACK_VARS
    case 0xC0C2F0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0C30C.asm:8 END_STACK_VARS
    case 0xC0C2F1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C30C.asm:8 END_STACK_VARS
    case 0xC0C2F2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C30C.asm:8 END_STACK_VARS
    case 0xC0C2F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C30C.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C2F3.
    case 0xC0C2F5: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C30C.asm:8 END_STACK_VARS
    case 0xC0C2F6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0C30C.asm:8 END_STACK_VARS
    case 0xC0C2F7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0C30C.asm:9 TAY
    case 0xC0C2F8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0C30C.asm:10 STY @LOCAL01
    case 0xC0C2F9: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C0C30C.asm:11 TYA
    case 0xC0C2FB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0C30C.asm:12 ASL
    case 0xC0C2FC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C30C.asm:13 TAX
    case 0xC0C2FD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C30C.asm:14 STX @LOCAL00
    case 0xC0C2FE: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0C30C.asm:15 LDA ENTITY_NPC_IDS,X
    case 0xC0C300: cpu.execute_instruction<0xBD>(0x003098, 3); return true;
    // src/unknown/C0/C0C30C.asm:16 STA @VIRTUAL04
    case 0xC0C303: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C30C.asm:17 ASL
    case 0xC0C305: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C30C.asm:18 ASL
    case 0xC0C306: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C30C.asm:19 ASL
    case 0xC0C307: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C30C.asm:20 ASL
    case 0xC0C308: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C30C.asm:21 ADC @VIRTUAL04
    case 0xC0C309: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C0C30C.asm:22 CLC
    case 0xC0C30B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C30C.asm:23 ADC #npc_config::event_flag
    case 0xC0C30C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/unknown/C0/C0C30C.asm:23 ADC #npc_config::event_flag
    // Overlapping static entry reached from 0xC0C30C.
    case 0xC0C30E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C0C30C.asm:24 TAX
    case 0xC0C30F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C30C.asm:25 LDA f:NPC_CONFIG_TABLE,X
    case 0xC0C310: cpu.execute_instruction<0xBF>(0xCF89C1, 4); return true;
    // src/unknown/C0/C0C30C.asm:26 JSL GET_EVENT_FLAG
    case 0xC0C314: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/unknown/C0/C0C30C.asm:27 CMP #0
    case 0xC0C318: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0C30C.asm:27 CMP #0
    // Overlapping static entry reached from 0xC0C318.
    case 0xC0C31A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0C30C.asm:28 BEQ @UNKNOWN0
    case 0xC0C31B: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C0C30C.asm:29 LDX @LOCAL00
    case 0xC0C31D: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0C30C.asm:30 STZ ENTITY_DIRECTIONS,X
    case 0xC0C31F: cpu.execute_instruction<0x9E>(0x002EF4, 3); return true;
    // src/unknown/C0/C0C30C.asm:31 BRA @UNKNOWN1
    case 0xC0C322: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C0/C0C30C.asm:33 LDA #DIRECTION::DOWN
    case 0xC0C324: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C0/C0C30C.asm:33 LDA #DIRECTION::DOWN
    // Overlapping static entry reached from 0xC0C324.
    case 0xC0C326: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C0C30C.asm:34 LDX @LOCAL00
    case 0xC0C327: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0C30C.asm:35 STA ENTITY_DIRECTIONS,X
    case 0xC0C329: cpu.execute_instruction<0x9D>(0x002EF4, 3); return true;
    // src/unknown/C0/C0C30C.asm:37 LDY @LOCAL01
    case 0xC0C32C: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C0C30C.asm:38 TYA
    case 0xC0C32E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0C30C.asm:39 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC0C32F: cpu.execute_instruction<0x22>(0xC0A46E, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C30C.asm:40 END_C_FUNCTION
    case 0xC0C333: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C30C.asm:40 END_C_FUNCTION
    case 0xC0C334: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C353.asm (unresolved).
bool execute_unresolved_c0_c0c353_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0C353.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0C335: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0C353.asm:4 LDA CURRENT_ENTITY_SLOT
    case 0xC0C337: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0C353.asm:5 JSL UNKNOWN_C0C30C
    case 0xC0C33A: cpu.execute_instruction<0x22>(0xC0C2EE, 4); return true;
    // src/unknown/C0/C0C353.asm:6 RTL
    case 0xC0C33E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C35D.asm (unresolved).
bool execute_unresolved_c0_c0c35d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0C35D.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0C33F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0C35D.asm:4 LDA GAME_STATE + game_state::unknown90
    case 0xC0C341: cpu.execute_instruction<0xAD>(0x009B36, 3); return true;
    // src/unknown/C0/C0C35D.asm:5 RTL
    case 0xC0C344: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C363.asm (unresolved).
bool execute_unresolved_c0_c0c363_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C363.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C345: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C363.asm:7 END_STACK_VARS
    case 0xC0C347: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C363.asm:7 END_STACK_VARS
    case 0xC0C348: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C363.asm:7 END_STACK_VARS
    case 0xC0C349: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C363.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C349.
    case 0xC0C34B: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C363.asm:7 END_STACK_VARS
    case 0xC0C34C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC0C34D: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0C363.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C34B.
    case 0xC0C34F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:9 ASL
    case 0xC0C350: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:10 TAX
    case 0xC0C351: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:11 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0C352: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C0C363.asm:12 SEC
    case 0xC0C355: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:13 SBC ENTITY_ABS_X_TABLE,X
    case 0xC0C356: cpu.execute_instruction<0xFD>(0x000B84, 3); return true;
    // src/unknown/C0/C0C363.asm:14 STA @VIRTUAL02
    case 0xC0C359: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C363.asm:15 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC0C35B: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C0/C0C363.asm:16 SEC
    case 0xC0C35E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:17 SBC ENTITY_ABS_Y_TABLE,X
    case 0xC0C35F: cpu.execute_instruction<0xFD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0C363.asm:18 STA @LOCAL00
    case 0xC0C362: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C363.asm:19 STA @VIRTUAL04
    case 0xC0C364: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C363.asm:20 LDA #0
    case 0xC0C366: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C363.asm:20 LDA #0
    // Overlapping static entry reached from 0xC0C366.
    case 0xC0C368: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0C363.asm:21 CLC
    case 0xC0C369: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:22 SBC @VIRTUAL04
    case 0xC0C36A: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0C363.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC0C36C: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0C363.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC0C36E: cpu.execute_instruction<0x10>(0x00000E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0C363.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC0C370: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0C363.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC0C372: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/unknown/C0/C0C363.asm:24 LDA @LOCAL00
    case 0xC0C374: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C363.asm:25 EOR #$FFFF
    case 0xC0C376: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C363.asm:25 EOR #$FFFF
    // Overlapping static entry reached from 0xC0C376.
    case 0xC0C378: cpu.execute_instruction<0xFF>(0x04851A, 4); return true;
    // src/unknown/C0/C0C363.asm:26 INC
    case 0xC0C379: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:27 STA @VIRTUAL04
    case 0xC0C37A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C363.asm:28 BRA @UNKNOWN3
    case 0xC0C37C: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C0/C0C363.asm:30 LDA @LOCAL00
    case 0xC0C37E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C363.asm:31 STA @VIRTUAL04
    case 0xC0C380: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C363.asm:33 LDA #0
    case 0xC0C382: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C363.asm:33 LDA #0
    // Overlapping static entry reached from 0xC0C382.
    case 0xC0C384: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0C363.asm:34 CLC
    case 0xC0C385: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:35 SBC @VIRTUAL02
    case 0xC0C386: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0C363.asm:36 BRANCHLTEQS @UNKNOWN6
    case 0xC0C388: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0C363.asm:36 BRANCHLTEQS @UNKNOWN6
    case 0xC0C38A: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0C363.asm:36 BRANCHLTEQS @UNKNOWN6
    case 0xC0C38C: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0C363.asm:36 BRANCHLTEQS @UNKNOWN6
    case 0xC0C38E: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // src/unknown/C0/C0C363.asm:37 LDA @VIRTUAL02
    case 0xC0C390: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0C363.asm:38 EOR #$FFFF
    case 0xC0C392: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C363.asm:38 EOR #$FFFF
    // Overlapping static entry reached from 0xC0C392.
    case 0xC0C394: cpu.execute_instruction<0xFF>(0x02801A, 4); return true;
    // src/unknown/C0/C0C363.asm:39 INC
    case 0xC0C395: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:40 BRA @UNKNOWN7
    case 0xC0C396: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C0/C0C363.asm:42 LDA @VIRTUAL02
    case 0xC0C398: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0C363.asm:44 CLC
    case 0xC0C39A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:45 ADC @VIRTUAL04
    case 0xC0C39B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C0C363.asm:46 STA @LOCAL00
    case 0xC0C39D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C363.asm:47 CLC
    case 0xC0C39F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:48 SBC #256
    case 0xC0C3A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000100, 3); return true;
    // src/unknown/C0/C0C363.asm:48 SBC #256
    // Overlapping static entry reached from 0xC0C3A0.
    case 0xC0C3A2: cpu.execute_instruction<0x01>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0C363.asm:49 BRANCHLTEQS @UNKNOWN10
    case 0xC0C3A3: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0C363.asm:49 BRANCHLTEQS @UNKNOWN10
    // Overlapping static entry reached from 0xC0C3A2.
    case 0xC0C3A4: cpu.execute_instruction<0x04>(0x000010, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0C363.asm:49 BRANCHLTEQS @UNKNOWN10
    case 0xC0C3A5: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0C363.asm:49 BRANCHLTEQS @UNKNOWN10
    // Overlapping static entry reached from 0xC0C3A4.
    case 0xC0C3A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000080, 2); else cpu.execute_instruction<0x09>(0x000280, 3); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0C363.asm:49 BRANCHLTEQS @UNKNOWN10
    case 0xC0C3A7: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0C363.asm:49 BRANCHLTEQS @UNKNOWN10
    // Overlapping static entry reached from 0xC0C3A6.
    case 0xC0C3A8: cpu.execute_instruction<0x02>(0x000030, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0C363.asm:49 BRANCHLTEQS @UNKNOWN10
    case 0xC0C3A9: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C0/C0C363.asm:50 LDA #3
    case 0xC0C3AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C0C363.asm:50 LDA #3
    // Overlapping static entry reached from 0xC0C3AB.
    case 0xC0C3AD: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C363.asm:51 BRA @UNKNOWN17
    case 0xC0C3AE: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C0/C0C363.asm:53 LDA @LOCAL00
    case 0xC0C3B0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C363.asm:54 CLC
    case 0xC0C3B2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:55 SBC #160
    case 0xC0C3B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000A0, 2); else cpu.execute_instruction<0xE9>(0x0000A0, 3); return true;
    // src/unknown/C0/C0C363.asm:55 SBC #160
    // Overlapping static entry reached from 0xC0C3B3.
    case 0xC0C3B5: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0C363.asm:56 BRANCHLTEQS @UNKNOWN13
    case 0xC0C3B6: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0C363.asm:56 BRANCHLTEQS @UNKNOWN13
    case 0xC0C3B8: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0C363.asm:56 BRANCHLTEQS @UNKNOWN13
    case 0xC0C3BA: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0C363.asm:56 BRANCHLTEQS @UNKNOWN13
    case 0xC0C3BC: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C0/C0C363.asm:57 LDA #2
    case 0xC0C3BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0C363.asm:57 LDA #2
    // Overlapping static entry reached from 0xC0C3BE.
    case 0xC0C3C0: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C363.asm:58 BRA @UNKNOWN17
    case 0xC0C3C1: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C0/C0C363.asm:60 LDA @LOCAL00
    case 0xC0C3C3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C363.asm:61 CLC
    case 0xC0C3C5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:62 SBC #128
    case 0xC0C3C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C0/C0C363.asm:62 SBC #128
    // Overlapping static entry reached from 0xC0C3C6.
    case 0xC0C3C8: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0C363.asm:63 BRANCHLTEQS @UNKNOWN16
    case 0xC0C3C9: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0C363.asm:63 BRANCHLTEQS @UNKNOWN16
    case 0xC0C3CB: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0C363.asm:63 BRANCHLTEQS @UNKNOWN16
    case 0xC0C3CD: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0C363.asm:63 BRANCHLTEQS @UNKNOWN16
    case 0xC0C3CF: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C0/C0C363.asm:64 LDA #1
    case 0xC0C3D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0C363.asm:64 LDA #1
    // Overlapping static entry reached from 0xC0C3D1.
    case 0xC0C3D3: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C363.asm:65 BRA @UNKNOWN17
    case 0xC0C3D4: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0C363.asm:67 LDA #0
    case 0xC0C3D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C363.asm:67 LDA #0
    // Overlapping static entry reached from 0xC0C3D6.
    case 0xC0C3D8: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C363.asm:69 END_C_FUNCTION
    case 0xC0C3D9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C363.asm:69 END_C_FUNCTION
    case 0xC0C3DA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C3F9.asm (unresolved).
bool execute_unresolved_c0_c0c3f9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C3F9.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C3DB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C3F9.asm:7 END_STACK_VARS
    case 0xC0C3DD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C3F9.asm:7 END_STACK_VARS
    case 0xC0C3DE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C3F9.asm:7 END_STACK_VARS
    case 0xC0C3DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C3F9.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C3DF.
    case 0xC0C3E1: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C3F9.asm:7 END_STACK_VARS
    case 0xC0C3E2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC0C3E3: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0C3F9.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C3E1.
    case 0xC0C3E5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:9 ASL
    case 0xC0C3E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:10 TAX
    case 0xC0C3E7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:11 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0C3E8: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C0C3F9.asm:12 SEC
    case 0xC0C3EB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:13 SBC ENTITY_ABS_X_TABLE,X
    case 0xC0C3EC: cpu.execute_instruction<0xFD>(0x000B84, 3); return true;
    // src/unknown/C0/C0C3F9.asm:14 STA @VIRTUAL02
    case 0xC0C3EF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C3F9.asm:15 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC0C3F1: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C0/C0C3F9.asm:16 SEC
    case 0xC0C3F4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:17 SBC ENTITY_ABS_Y_TABLE,X
    case 0xC0C3F5: cpu.execute_instruction<0xFD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0C3F9.asm:18 STA @LOCAL00
    case 0xC0C3F8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C3F9.asm:19 STA @VIRTUAL04
    case 0xC0C3FA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C3F9.asm:20 LDA #0
    case 0xC0C3FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C3F9.asm:20 LDA #0
    // Overlapping static entry reached from 0xC0C3FC.
    case 0xC0C3FE: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0C3F9.asm:21 CLC
    case 0xC0C3FF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:22 SBC @VIRTUAL04
    case 0xC0C400: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0C3F9.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC0C402: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0C3F9.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC0C404: cpu.execute_instruction<0x10>(0x00000E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0C3F9.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC0C406: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0C3F9.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC0C408: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/unknown/C0/C0C3F9.asm:24 LDA @LOCAL00
    case 0xC0C40A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C3F9.asm:25 EOR #$FFFF
    case 0xC0C40C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C3F9.asm:25 EOR #$FFFF
    // Overlapping static entry reached from 0xC0C40C.
    case 0xC0C40E: cpu.execute_instruction<0xFF>(0x04851A, 4); return true;
    // src/unknown/C0/C0C3F9.asm:26 INC
    case 0xC0C40F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:27 STA @VIRTUAL04
    case 0xC0C410: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C3F9.asm:28 BRA @UNKNOWN3
    case 0xC0C412: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C0/C0C3F9.asm:30 LDA @LOCAL00
    case 0xC0C414: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C3F9.asm:31 STA @VIRTUAL04
    case 0xC0C416: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C3F9.asm:33 LDA #0
    case 0xC0C418: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C3F9.asm:33 LDA #0
    // Overlapping static entry reached from 0xC0C418.
    case 0xC0C41A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0C3F9.asm:34 CLC
    case 0xC0C41B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:35 SBC @VIRTUAL02
    case 0xC0C41C: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0C3F9.asm:36 BRANCHLTEQS @UNKNOWN6
    case 0xC0C41E: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0C3F9.asm:36 BRANCHLTEQS @UNKNOWN6
    case 0xC0C420: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0C3F9.asm:36 BRANCHLTEQS @UNKNOWN6
    case 0xC0C422: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0C3F9.asm:36 BRANCHLTEQS @UNKNOWN6
    case 0xC0C424: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // src/unknown/C0/C0C3F9.asm:37 LDA @VIRTUAL02
    case 0xC0C426: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0C3F9.asm:38 EOR #$FFFF
    case 0xC0C428: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C3F9.asm:38 EOR #$FFFF
    // Overlapping static entry reached from 0xC0C428.
    case 0xC0C42A: cpu.execute_instruction<0xFF>(0x02801A, 4); return true;
    // src/unknown/C0/C0C3F9.asm:39 INC
    case 0xC0C42B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:40 BRA @UNKNOWN7
    case 0xC0C42C: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C0/C0C3F9.asm:42 LDA @VIRTUAL02
    case 0xC0C42E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0C3F9.asm:44 CLC
    case 0xC0C430: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:45 ADC @VIRTUAL04
    case 0xC0C431: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C0C3F9.asm:46 STA @LOCAL00
    case 0xC0C433: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C3F9.asm:47 CLC
    case 0xC0C435: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:48 SBC #128
    case 0xC0C436: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C0/C0C3F9.asm:48 SBC #128
    // Overlapping static entry reached from 0xC0C436.
    case 0xC0C438: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0C3F9.asm:49 BRANCHLTEQS @UNKNOWN10
    case 0xC0C439: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0C3F9.asm:49 BRANCHLTEQS @UNKNOWN10
    case 0xC0C43B: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0C3F9.asm:49 BRANCHLTEQS @UNKNOWN10
    case 0xC0C43D: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0C3F9.asm:49 BRANCHLTEQS @UNKNOWN10
    case 0xC0C43F: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C0/C0C3F9.asm:50 LDA #3
    case 0xC0C441: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C0C3F9.asm:50 LDA #3
    // Overlapping static entry reached from 0xC0C441.
    case 0xC0C443: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C3F9.asm:51 BRA @UNKNOWN17
    case 0xC0C444: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C0/C0C3F9.asm:53 LDA @LOCAL00
    case 0xC0C446: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C3F9.asm:54 CLC
    case 0xC0C448: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:55 SBC #80
    case 0xC0C449: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000050, 2); else cpu.execute_instruction<0xE9>(0x000050, 3); return true;
    // src/unknown/C0/C0C3F9.asm:55 SBC #80
    // Overlapping static entry reached from 0xC0C449.
    case 0xC0C44B: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0C3F9.asm:56 BRANCHLTEQS @UNKNOWN13
    case 0xC0C44C: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0C3F9.asm:56 BRANCHLTEQS @UNKNOWN13
    case 0xC0C44E: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0C3F9.asm:56 BRANCHLTEQS @UNKNOWN13
    case 0xC0C450: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0C3F9.asm:56 BRANCHLTEQS @UNKNOWN13
    case 0xC0C452: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C0/C0C3F9.asm:57 LDA #2
    case 0xC0C454: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0C3F9.asm:57 LDA #2
    // Overlapping static entry reached from 0xC0C454.
    case 0xC0C456: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C3F9.asm:58 BRA @UNKNOWN17
    case 0xC0C457: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C0/C0C3F9.asm:60 LDA @LOCAL00
    case 0xC0C459: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C3F9.asm:61 CLC
    case 0xC0C45B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:62 SBC #64
    case 0xC0C45C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000040, 2); else cpu.execute_instruction<0xE9>(0x000040, 3); return true;
    // src/unknown/C0/C0C3F9.asm:62 SBC #64
    // Overlapping static entry reached from 0xC0C45C.
    case 0xC0C45E: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0C3F9.asm:63 BRANCHLTEQS @UNKNOWN16
    case 0xC0C45F: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0C3F9.asm:63 BRANCHLTEQS @UNKNOWN16
    case 0xC0C461: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0C3F9.asm:63 BRANCHLTEQS @UNKNOWN16
    case 0xC0C463: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0C3F9.asm:63 BRANCHLTEQS @UNKNOWN16
    case 0xC0C465: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C0/C0C3F9.asm:64 LDA #1
    case 0xC0C467: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0C3F9.asm:64 LDA #1
    // Overlapping static entry reached from 0xC0C467.
    case 0xC0C469: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C3F9.asm:65 BRA @UNKNOWN17
    case 0xC0C46A: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0C3F9.asm:67 LDA #0
    case 0xC0C46C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C3F9.asm:67 LDA #0
    // Overlapping static entry reached from 0xC0C46C.
    case 0xC0C46E: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C3F9.asm:69 END_C_FUNCTION
    case 0xC0C46F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C3F9.asm:69 END_C_FUNCTION
    case 0xC0C470: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C48F.asm (unresolved).
bool execute_unresolved_c0_c0c48f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0C48F.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0C471: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0C48F.asm:4 LDA CURRENT_ENTITY_SLOT
    case 0xC0C473: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0C48F.asm:5 ASL
    case 0xC0C476: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C48F.asm:6 TAX
    case 0xC0C477: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C48F.asm:7 LDA ENTITY_PATHFINDING_STATES,X
    case 0xC0C478: cpu.execute_instruction<0xBD>(0x00305C, 3); return true;
    // src/unknown/C0/C0C48F.asm:8 BEQ @UNKNOWN0
    case 0xC0C47B: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0C48F.asm:9 LDA #$0000
    case 0xC0C47D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C48F.asm:9 LDA #$0000
    // Overlapping static entry reached from 0xC0C47D.
    case 0xC0C47F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C48F.asm:10 BRA @UNKNOWN2
    case 0xC0C480: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C0/C0C48F.asm:12 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC0C482: cpu.execute_instruction<0xAD>(0x0060DE, 3); return true;
    // src/unknown/C0/C0C48F.asm:13 BNE @UNKNOWN1
    case 0xC0C485: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0C48F.asm:14 JSL UNKNOWN_C0C363
    case 0xC0C487: cpu.execute_instruction<0x22>(0xC0C345, 4); return true;
    // src/unknown/C0/C0C48F.asm:15 BRA @UNKNOWN2
    case 0xC0C48B: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0C48F.asm:17 LDA #$FFFF
    case 0xC0C48D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C48F.asm:17 LDA #$FFFF
    // Overlapping static entry reached from 0xC0C48D.
    case 0xC0C48F: cpu.execute_instruction<0xFF>(0x31C26B, 4); return true;
    // src/unknown/C0/C0C48F.asm:19 RTL
    case 0xC0C490: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C4AF.asm (unresolved).
bool execute_unresolved_c0_c0c4af_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0C4AF.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0C491: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0C4AF.asm:4 LDA CURRENT_ENTITY_SLOT
    case 0xC0C493: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0C4AF.asm:5 ASL
    case 0xC0C496: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C4AF.asm:6 TAX
    case 0xC0C497: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C4AF.asm:7 LDA ENTITY_PATHFINDING_STATES,X
    case 0xC0C498: cpu.execute_instruction<0xBD>(0x00305C, 3); return true;
    // src/unknown/C0/C0C4AF.asm:8 BEQ @UNKNOWN0
    case 0xC0C49B: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0C4AF.asm:9 LDA #$0000
    case 0xC0C49D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C4AF.asm:9 LDA #$0000
    // Overlapping static entry reached from 0xC0C49D.
    case 0xC0C49F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C4AF.asm:10 BRA @UNKNOWN2
    case 0xC0C4A0: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C0/C0C4AF.asm:12 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC0C4A2: cpu.execute_instruction<0xAD>(0x0060DE, 3); return true;
    // src/unknown/C0/C0C4AF.asm:13 BNE @UNKNOWN1
    case 0xC0C4A5: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0C4AF.asm:14 JSL UNKNOWN_C0C3F9
    case 0xC0C4A7: cpu.execute_instruction<0x22>(0xC0C3DB, 4); return true;
    // src/unknown/C0/C0C4AF.asm:14 JSL UNKNOWN_C0C3F9
    // Overlapping static entry reached from 0xC0BDB9.
    case 0xC0C4A9: cpu.execute_instruction<0xC3>(0x0000C0, 2); return true;
    // src/unknown/C0/C0C4AF.asm:15 BRA @UNKNOWN2
    case 0xC0C4AB: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0C4AF.asm:17 LDA #$FFFF
    case 0xC0C4AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C4AF.asm:19 RTL
    case 0xC0C4B0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C524.asm (unresolved).
bool execute_unresolved_c0_c0c524_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C524.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C506: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C524.asm:9 END_STACK_VARS
    case 0xC0C508: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C524.asm:9 END_STACK_VARS
    case 0xC0C509: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C524.asm:9 END_STACK_VARS
    case 0xC0C50A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C524.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C50A.
    case 0xC0C50C: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C524.asm:9 END_STACK_VARS
    case 0xC0C50D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC0C50E: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0C524.asm:10 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C50C.
    case 0xC0C510: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:11 ASL
    case 0xC0C511: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:12 TAX
    case 0xC0C512: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:13 LDA ENTITY_NPC_IDS,X
    case 0xC0C513: cpu.execute_instruction<0xBD>(0x003098, 3); return true;
    // src/unknown/C0/C0C524.asm:14 AND #$7FFF
    case 0xC0C516: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C0C524.asm:14 AND #$7FFF
    // Overlapping static entry reached from 0xC0C516.
    case 0xC0C518: cpu.execute_instruction<0x7F>(0xA91285, 4); return true;
    // src/unknown/C0/C0C524.asm:15 STA @LOCAL02
    case 0xC0C519: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0C524.asm:16 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    case 0xC0C51B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00C60D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0C524.asm:16 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0C518.
    case 0xC0C51C: cpu.execute_instruction<0x0D>(0x0085C6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0C524.asm:16 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0C51B.
    case 0xC0C51D: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0C524.asm:16 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    case 0xC0C51E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0C524.asm:16 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0C51D.
    case 0xC0C51F: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0C524.asm:16 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    case 0xC0C520: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0C524.asm:16 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0C51F.
    case 0xC0C521: cpu.execute_instruction<0xD0>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0C524.asm:16 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0C520.
    case 0xC0C522: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0C524.asm:16 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    case 0xC0C523: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0C524.asm:17 LDA @LOCAL02
    case 0xC0C525: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0C524.asm:18 ASL
    case 0xC0C527: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:19 ASL
    case 0xC0C528: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:20 ASL
    case 0xC0C529: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:21 TAX
    case 0xC0C52A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:22 STX @LOCAL01
    case 0xC0C52B: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0C524.asm:23 TXA
    case 0xC0C52D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:508 INC
    // Macro caller: src/unknown/C0/C0C524.asm:24 OPTIMIZED_ADD battle_entry_ptr_entry::run_away_flag
    case 0xC0C52E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:509 INC
    // Macro caller: src/unknown/C0/C0C524.asm:24 OPTIMIZED_ADD battle_entry_ptr_entry::run_away_flag
    case 0xC0C52F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:510 INC
    // Macro caller: src/unknown/C0/C0C524.asm:24 OPTIMIZED_ADD battle_entry_ptr_entry::run_away_flag
    case 0xC0C530: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:511 INC
    // Macro caller: src/unknown/C0/C0C524.asm:24 OPTIMIZED_ADD battle_entry_ptr_entry::run_away_flag
    case 0xC0C531: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C0C524.asm:25 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC0C532: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C0C524.asm:25 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC0C534: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C0C524.asm:25 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC0C536: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C0C524.asm:25 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC0C538: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C0/C0C524.asm:26 CLC
    case 0xC0C53A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:27 ADC @VIRTUAL0A
    case 0xC0C53B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C0C524.asm:28 STA @VIRTUAL0A
    case 0xC0C53D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C0C524.asm:29 LDA [@VIRTUAL0A]
    case 0xC0C53F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C0/C0C524.asm:30 BEQ @UNKNOWN0
    case 0xC0C541: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/C0/C0C524.asm:31 JSL GET_EVENT_FLAG
    case 0xC0C543: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/unknown/C0/C0C524.asm:32 STA @LOCAL00
    case 0xC0C547: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C524.asm:33 LDX @LOCAL01
    case 0xC0C549: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0C524.asm:34 TXA
    case 0xC0C54B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:35 CLC
    case 0xC0C54C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:36 ADC #battle_entry_ptr_entry::run_away_flag_state
    case 0xC0C54D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/unknown/C0/C0C524.asm:36 ADC #battle_entry_ptr_entry::run_away_flag_state
    // Overlapping static entry reached from 0xC0C54D.
    case 0xC0C54F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0C524.asm:37 CLC
    case 0xC0C550: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:38 ADC @VIRTUAL06
    case 0xC0C551: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0C524.asm:39 STA @VIRTUAL06
    case 0xC0C553: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0C524.asm:40 LDA [@VIRTUAL06]
    case 0xC0C555: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0C524.asm:41 AND #$00FF
    case 0xC0C557: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0C524.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC0C557.
    case 0xC0C559: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0C524.asm:42 STA @VIRTUAL02
    case 0xC0C55A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C524.asm:43 LDA @LOCAL00
    case 0xC0C55C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C524.asm:44 CMP @VIRTUAL02
    case 0xC0C55E: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C0C524.asm:45 BNE @UNKNOWN0
    case 0xC0C560: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0C524.asm:46 LDA #1
    case 0xC0C562: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0C524.asm:46 LDA #1
    // Overlapping static entry reached from 0xC0C562.
    case 0xC0C564: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0C524.asm:47 JMP @UNKNOWN4
    case 0xC0C565: cpu.execute_instruction<0x4C>(0x00C5E8, 3); return true;
    // src/unknown/C0/C0C524.asm:49 JSL UNKNOWN_C0546B
    case 0xC0C568: cpu.execute_instruction<0x22>(0xC05699, 4); return true;
    // src/unknown/C0/C0C524.asm:50 TAY
    case 0xC0C56C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:51 STY @LOCAL00
    case 0xC0C56D: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C0C524.asm:52 LDA CURRENT_ENTITY_SLOT
    case 0xC0C56F: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0C524.asm:53 ASL
    case 0xC0C572: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:54 TAX
    case 0xC0C573: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:55 STX @LOCAL02
    case 0xC0C574: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C0C524.asm:56 LDA ENTITY_ENEMY_IDS,X
    case 0xC0C576: cpu.execute_instruction<0xBD>(0x003110, 3); return true;
    // src/unknown/C0/C0C524.asm:57 LDY #.SIZEOF(enemy_data)
    case 0xC0C579: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/unknown/C0/C0C524.asm:57 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC0C579.
    case 0xC0C57B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0C524.asm:58 JSL MULT168
    case 0xC0C57C: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C0C524.asm:59 CLC
    case 0xC0C580: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:60 ADC #enemy_data::level
    case 0xC0C581: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000025, 2); else cpu.execute_instruction<0x69>(0x000025, 3); return true;
    // src/unknown/C0/C0C524.asm:60 ADC #enemy_data::level
    // Overlapping static entry reached from 0xC0C581.
    case 0xC0C583: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C0C524.asm:61 TAX
    case 0xC0C584: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:62 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC0C585: cpu.execute_instruction<0xBF>(0xD5A440, 4); return true;
    // src/unknown/C0/C0C524.asm:63 AND #$00FF
    case 0xC0C589: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0C524.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC0C589.
    case 0xC0C58B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0C524.asm:64 STA @LOCAL01
    case 0xC0C58C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/unknown/C0/C0C524.asm:65 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC0C58E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/unknown/C0/C0C524.asm:65 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC0C590: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/unknown/C0/C0C524.asm:65 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC0C591: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/unknown/C0/C0C524.asm:65 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC0C592: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/unknown/C0/C0C524.asm:65 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC0C594: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:66 STA @VIRTUAL02
    case 0xC0C595: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C524.asm:67 LDY @LOCAL00
    case 0xC0C597: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C0C524.asm:68 TYA
    case 0xC0C599: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:69 CMP @VIRTUAL02
    case 0xC0C59A: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0C524.asm:70 BLTEQ @UNKNOWN1
    case 0xC0C59C: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0C524.asm:70 BLTEQ @UNKNOWN1
    case 0xC0C59E: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0C524.asm:71 LDA #1
    case 0xC0C5A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0C524.asm:71 LDA #1
    // Overlapping static entry reached from 0xC0C5A0.
    case 0xC0C5A2: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C524.asm:72 BRA @UNKNOWN4
    case 0xC0C5A3: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // src/unknown/C0/C0C524.asm:74 LDA @LOCAL01
    case 0xC0C5A5: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0C524.asm:75 ASL
    case 0xC0C5A7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:76 ASL
    case 0xC0C5A8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:77 ASL
    case 0xC0C5A9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:78 STA @VIRTUAL02
    case 0xC0C5AA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C524.asm:79 TYA
    case 0xC0C5AC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:80 CMP @VIRTUAL02
    case 0xC0C5AD: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0C524.asm:81 BLTEQ @UNKNOWN2
    case 0xC0C5AF: cpu.execute_instruction<0x90>(0x000011, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0C524.asm:81 BLTEQ @UNKNOWN2
    case 0xC0C5B1: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C0/C0C524.asm:82 LDX @LOCAL02
    case 0xC0C5B3: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C0C524.asm:83 LDA ENTITY_WEAK_ENEMY_VALUE,X
    case 0xC0C5B5: cpu.execute_instruction<0xBD>(0x003584, 3); return true;
    // src/unknown/C0/C0C524.asm:84 CMP #192
    case 0xC0C5B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C0, 2); else cpu.execute_instruction<0xC9>(0x0000C0, 3); return true;
    // src/unknown/C0/C0C524.asm:84 CMP #192
    // Overlapping static entry reached from 0xC0C5B8.
    case 0xC0C5BA: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C0C524.asm:85 BCS @UNKNOWN2
    case 0xC0C5BB: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C0C524.asm:86 LDA #1
    case 0xC0C5BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0C524.asm:86 LDA #1
    // Overlapping static entry reached from 0xC0C637.
    case 0xC0C5BE: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C0C524.asm:86 LDA #1
    // Overlapping static entry reached from 0xC0C5BD.
    case 0xC0C5BF: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C524.asm:87 BRA @UNKNOWN4
    case 0xC0C5C0: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/unknown/C0/C0C524.asm:89 LDA @LOCAL01
    case 0xC0C5C2: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0C524.asm:90 STA @VIRTUAL04
    case 0xC0C5C4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C524.asm:91 ASL
    case 0xC0C5C6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:92 ADC @VIRTUAL04
    case 0xC0C5C7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C0C524.asm:93 ASL
    case 0xC0C5C9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:94 STA @VIRTUAL02
    case 0xC0C5CA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C524.asm:95 TYA
    case 0xC0C5CC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:96 CMP @VIRTUAL02
    case 0xC0C5CD: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0C524.asm:97 BLTEQ @UNKNOWN3
    case 0xC0C5CF: cpu.execute_instruction<0x90>(0x000014, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0C524.asm:97 BLTEQ @UNKNOWN3
    case 0xC0C5D1: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/unknown/C0/C0C524.asm:98 LDA CURRENT_ENTITY_SLOT
    case 0xC0C5D3: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0C524.asm:99 ASL
    case 0xC0C5D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:100 TAX
    case 0xC0C5D7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:101 LDA ENTITY_WEAK_ENEMY_VALUE,X
    case 0xC0C5D8: cpu.execute_instruction<0xBD>(0x003584, 3); return true;
    // src/unknown/C0/C0C524.asm:102 CMP #128
    case 0xC0C5DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000080, 3); return true;
    // src/unknown/C0/C0C524.asm:102 CMP #128
    // Overlapping static entry reached from 0xC0C5DB.
    case 0xC0C5DD: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C0C524.asm:103 BCS @UNKNOWN3
    case 0xC0C5DE: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C0C524.asm:104 LDA #1
    case 0xC0C5E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0C524.asm:104 LDA #1
    // Overlapping static entry reached from 0xC0C5E0.
    case 0xC0C5E2: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C524.asm:105 BRA @UNKNOWN4
    case 0xC0C5E3: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0C524.asm:107 LDA #0
    case 0xC0C5E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C524.asm:107 LDA #0
    // Overlapping static entry reached from 0xC0C5E5.
    case 0xC0C5E7: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C524.asm:109 END_C_FUNCTION
    case 0xC0C5E8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C524.asm:109 END_C_FUNCTION
    case 0xC0C5E9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C615.asm (unresolved).
bool execute_unresolved_c0_c0c615_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0C615.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0C5F7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0C615.asm:4 JSL UNKNOWN_C0C524
    case 0xC0C5F9: cpu.execute_instruction<0x22>(0xC0C506, 4); return true;
    // src/unknown/C0/C0C615.asm:5 CMP #$0000
    case 0xC0C5FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0C615.asm:5 CMP #$0000
    // Overlapping static entry reached from 0xC0C5FD.
    case 0xC0C5FF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0C615.asm:6 BEQ @UNKNOWN0
    case 0xC0C600: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0C615.asm:7 JSL GET_OPPOSITE_DIRECTION_FROM_PLAYER_TO_ENTITY
    case 0xC0C602: cpu.execute_instruction<0x22>(0xC0C5EA, 4); return true;
    // src/unknown/C0/C0C615.asm:8 BRA @UNKNOWN1
    case 0xC0C606: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C0/C0C615.asm:10 JSL GET_DIRECTION_FROM_PLAYER_TO_ENTITY
    case 0xC0C608: cpu.execute_instruction<0x22>(0xC0C4D9, 4); return true;
    // src/unknown/C0/C0C615.asm:12 RTL
    case 0xC0C60C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C62B.asm (unresolved).
bool execute_unresolved_c0_c0c62b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C62B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C60D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C62B.asm:9 END_STACK_VARS
    case 0xC0C60F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C62B.asm:9 END_STACK_VARS
    case 0xC0C610: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C62B.asm:9 END_STACK_VARS
    case 0xC0C611: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C62B.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C611.
    case 0xC0C613: cpu.execute_instruction<0xFF>(0x38AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C62B.asm:9 END_STACK_VARS
    case 0xC0C614: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:10 LDX CURRENT_ENTITY_SLOT
    case 0xC0C615: cpu.execute_instruction<0xAE>(0x001A38, 3); return true;
    // src/unknown/C0/C0C62B.asm:10 LDX CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C613.
    case 0xC0C617: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:11 STX @LOCAL02
    case 0xC0C618: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C0C62B.asm:12 LDA #0
    case 0xC0C61A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C62B.asm:12 LDA #0
    // Overlapping static entry reached from 0xC0C61A.
    case 0xC0C61C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0C62B.asm:13 STA @VIRTUAL02
    case 0xC0C61D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C62B.asm:14 TXA
    case 0xC0C61F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:15 ASL
    case 0xC0C620: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:16 TAX
    case 0xC0C621: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:17 LDA ENTITY_NPC_IDS,X
    case 0xC0C622: cpu.execute_instruction<0xBD>(0x003098, 3); return true;
    // src/unknown/C0/C0C62B.asm:18 CMP #$7FFF
    case 0xC0C625: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x007FFF, 3); return true;
    // src/unknown/C0/C0C62B.asm:18 CMP #$7FFF
    // Overlapping static entry reached from 0xC0C625.
    case 0xC0C627: cpu.execute_instruction<0x7F>(0xF01090, 4); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0C62B.asm:19 BLTEQ @UNKNOWN0
    case 0xC0C628: cpu.execute_instruction<0x90>(0x000010, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0C62B.asm:19 BLTEQ @UNKNOWN0
    case 0xC0C62A: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0C62B.asm:19 BLTEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC0C627.
    case 0xC0C62B: cpu.execute_instruction<0x0E>(0x000622, 3); return true;
    // src/unknown/C0/C0C62B.asm:20 JSL UNKNOWN_C0C524
    case 0xC0C62C: cpu.execute_instruction<0x22>(0xC0C506, 4); return true;
    // src/unknown/C0/C0C62B.asm:20 JSL UNKNOWN_C0C524
    // Overlapping static entry reached from 0xC0C62B.
    case 0xC0C62E: cpu.execute_instruction<0xC5>(0x0000C0, 2); return true;
    // src/unknown/C0/C0C62B.asm:21 CMP #0
    case 0xC0C630: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0C62B.asm:21 CMP #0
    // Overlapping static entry reached from 0xC0C630.
    case 0xC0C632: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0C62B.asm:22 BEQ @UNKNOWN0
    case 0xC0C633: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0C62B.asm:23 LDA #$8000
    case 0xC0C635: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/unknown/C0/C0C62B.asm:23 LDA #$8000
    // Overlapping static entry reached from 0xC0C635.
    case 0xC0C637: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // src/unknown/C0/C0C62B.asm:24 STA @VIRTUAL02
    case 0xC0C638: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C62B.asm:26 LDX @LOCAL02
    case 0xC0C63A: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C0C62B.asm:27 TXA
    case 0xC0C63C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:28 ASL
    case 0xC0C63D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:29 STA @LOCAL02
    case 0xC0C63E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0C62B.asm:30 TAX
    case 0xC0C640: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:31 LDA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC0C641: cpu.execute_instruction<0xBD>(0x000FF8, 3); return true;
    // src/unknown/C0/C0C62B.asm:32 STA @LOCAL00
    case 0xC0C644: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C62B.asm:33 LDA @LOCAL02
    case 0xC0C646: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0C62B.asm:34 TAX
    case 0xC0C648: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:35 LDY ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC0C649: cpu.execute_instruction<0xBC>(0x000FBC, 3); return true;
    // src/unknown/C0/C0C62B.asm:36 TAX
    case 0xC0C64C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:37 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0C64D: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0C62B.asm:38 TAX
    case 0xC0C650: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:39 STX @LOCAL01
    case 0xC0C651: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0C62B.asm:40 LDA @LOCAL02
    case 0xC0C653: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0C62B.asm:41 TAX
    case 0xC0C655: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:42 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0C656: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C0C62B.asm:43 LDX @LOCAL01
    case 0xC0C659: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0C62B.asm:44 JSL UNKNOWN_C41EFF
    case 0xC0C65B: cpu.execute_instruction<0x22>(0xC41E4B, 4); return true;
    // src/unknown/C0/C0C62B.asm:45 CLC
    case 0xC0C65F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:46 ADC @VIRTUAL02
    case 0xC0C660: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C62B.asm:47 END_C_FUNCTION
    case 0xC0C662: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C62B.asm:47 END_C_FUNCTION
    case 0xC0C663: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C6B6.asm (unresolved).
bool execute_unresolved_c0_c0c6b6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C6B6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C698: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C6B6.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC0C696.
    case 0xC0C699: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C6B6.asm:7 END_STACK_VARS
    case 0xC0C69A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C6B6.asm:7 END_STACK_VARS
    case 0xC0C69B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C6B6.asm:7 END_STACK_VARS
    case 0xC0C69C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C6B6.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C69C.
    case 0xC0C69E: cpu.execute_instruction<0xFF>(0x49AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C6B6.asm:7 END_STACK_VARS
    case 0xC0C69F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0C6B6.asm:8 LDA PSI_TELEPORT_SPEED + fixed_point::integer
    case 0xC0C6A0: cpu.execute_instruction<0xAD>(0x00A149, 3); return true;
    // src/unknown/C0/C0C6B6.asm:8 LDA PSI_TELEPORT_SPEED + fixed_point::integer
    // Overlapping static entry reached from 0xC0C69E.
    case 0xC0C6A2: cpu.execute_instruction<0xA1>(0x0000C9, 2); return true;
    // src/unknown/C0/C0C6B6.asm:9 CMP #04
    case 0xC0C6A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0C6B6.asm:9 CMP #04
    // Overlapping static entry reached from 0xC0C6A2.
    case 0xC0C6A4: cpu.execute_instruction<0x04>(0x000000, 2); return true;
    // src/unknown/C0/C0C6B6.asm:9 CMP #04
    // Overlapping static entry reached from 0xC0C6A3.
    case 0xC0C6A5: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0C6B6.asm:10 BCC @UNKNOWN0
    case 0xC0C6A6: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/unknown/C0/C0C6B6.asm:11 LDA #.LOWORD(-1)
    case 0xC0C6A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C6B6.asm:11 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0C6A8.
    case 0xC0C6AA: cpu.execute_instruction<0xFF>(0xAD4480, 4); return true;
    // src/unknown/C0/C0C6B6.asm:12 BRA @UNKNOWN4
    case 0xC0C6AB: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/unknown/C0/C0C6B6.asm:14 LDA CURRENT_ENTITY_SLOT
    case 0xC0C6AD: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0C6B6.asm:14 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C6AA.
    case 0xC0C6AE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C6B6.asm:14 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C6AE.
    case 0xC0C6AF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C6B6.asm:15 ASL
    case 0xC0C6B0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C6B6.asm:16 TAX
    case 0xC0C6B1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C6B6.asm:17 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0C6B2: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C0C6B6.asm:18 SEC
    case 0xC0C6B5: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C6B6.asm:19 SBC #128
    case 0xC0C6B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C0/C0C6B6.asm:19 SBC #128
    // Overlapping static entry reached from 0xC0C6B6.
    case 0xC0C6B8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0C6B6.asm:20 STA @VIRTUAL02
    case 0xC0C6B9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C6B6.asm:21 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0C6BB: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C0C6B6.asm:22 SEC
    case 0xC0C6BE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C6B6.asm:23 SBC @VIRTUAL02
    case 0xC0C6BF: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0C6B6.asm:24 STA @LOCAL00
    case 0xC0C6C1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C6B6.asm:25 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC0C6C3: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C0/C0C6B6.asm:26 SEC
    case 0xC0C6C6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C6B6.asm:27 SBC #112
    case 0xC0C6C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000070, 2); else cpu.execute_instruction<0xE9>(0x000070, 3); return true;
    // src/unknown/C0/C0C6B6.asm:27 SBC #112
    // Overlapping static entry reached from 0xC0C6C7.
    case 0xC0C6C9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0C6B6.asm:28 STA @VIRTUAL02
    case 0xC0C6CA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C6B6.asm:29 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0C6CC: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0C6B6.asm:30 SEC
    case 0xC0C6CF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C6B6.asm:31 SBC @VIRTUAL02
    case 0xC0C6D0: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0C6B6.asm:32 TAX
    case 0xC0C6D2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C6B6.asm:33 LDA @LOCAL00
    case 0xC0C6D3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C6B6.asm:33 LDA @LOCAL00
    // Overlapping static entry reached from 0xC0C74D.
    case 0xC0C6D4: cpu.execute_instruction<0x0E>(0x00C0C9, 3); return true;
    // src/unknown/C0/C0C6B6.asm:34 CMP #.LOWORD(-64)
    // Retained frozen presentation override; see program_index.json.
    case 0xC0C6D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x00FF80, 3); return true;
    // src/unknown/C0/C0C6B6.asm:34 CMP #.LOWORD(-64)
    // Overlapping static entry reached from 0xC0C6D5.
    case 0xC0C6D7: cpu.execute_instruction<0xFF>(0xC905B0, 4); return true;
    // src/unknown/C0/C0C6B6.asm:35 BCS @UNKNOWN1
    case 0xC0C6D8: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C0C6B6.asm:36 CMP #320
    // Retained frozen presentation override; see program_index.json.
    case 0xC0C6DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000180, 3); return true;
    // src/unknown/C0/C0C6B6.asm:36 CMP #320
    // Retained frozen presentation override; see program_index.json.
    // Overlapping static entry reached from 0xC0C6D7.
    case 0xC0C6DB: cpu.execute_instruction<0x80>(0x000001, 2); return true;
    // src/unknown/C0/C0C6B6.asm:36 CMP #320
    // Overlapping static entry reached from 0xC0C6DA.
    case 0xC0C6DC: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C0/C0C6B6.asm:37 BCS @UNKNOWN3
    case 0xC0C6DD: cpu.execute_instruction<0xB0>(0x00000F, 2); return true;
    // src/unknown/C0/C0C6B6.asm:37 BCS @UNKNOWN3
    // Overlapping static entry reached from 0xC0C6DC.
    case 0xC0C6DE: cpu.execute_instruction<0x0F>(0xFFC0E0, 4); return true;
    // src/unknown/C0/C0C6B6.asm:39 CPX #.LOWORD(-64)
    // Retained frozen presentation override; see program_index.json.
    case 0xC0C6DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000080, 2); else cpu.execute_instruction<0xE0>(0x00FF80, 3); return true;
    // src/unknown/C0/C0C6B6.asm:39 CPX #.LOWORD(-64)
    // Overlapping static entry reached from 0xC0C6DF.
    case 0xC0C6E1: cpu.execute_instruction<0xFF>(0xE005B0, 4); return true;
    // src/unknown/C0/C0C6B6.asm:40 BCS @UNKNOWN2
    case 0xC0C6E2: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C0C6B6.asm:41 CPX #320
    // Retained frozen presentation override; see program_index.json.
    case 0xC0C6E4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000080, 2); else cpu.execute_instruction<0xE0>(0x000180, 3); return true;
    // src/unknown/C0/C0C6B6.asm:41 CPX #320
    // Retained frozen presentation override; see program_index.json.
    // Overlapping static entry reached from 0xC0C6E1.
    case 0xC0C6E5: cpu.execute_instruction<0x80>(0x000001, 2); return true;
    // src/unknown/C0/C0C6B6.asm:41 CPX #320
    // Overlapping static entry reached from 0xC0C6E4.
    case 0xC0C6E6: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C0/C0C6B6.asm:42 BCS @UNKNOWN3
    case 0xC0C6E7: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C0C6B6.asm:42 BCS @UNKNOWN3
    // Overlapping static entry reached from 0xC0C6E6.
    case 0xC0C6E8: cpu.execute_instruction<0x05>(0x0000A9, 2); return true;
    // src/unknown/C0/C0C6B6.asm:44 LDA #.LOWORD(-1)
    case 0xC0C6E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C6B6.asm:44 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0C6E8.
    case 0xC0C6EA: cpu.execute_instruction<0xFF>(0x0380FF, 4); return true;
    // src/unknown/C0/C0C6B6.asm:44 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0C6E9.
    case 0xC0C6EB: cpu.execute_instruction<0xFF>(0xA90380, 4); return true;
    // src/unknown/C0/C0C6B6.asm:45 BRA @UNKNOWN4
    case 0xC0C6EC: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0C6B6.asm:47 LDA #0
    case 0xC0C6EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C6B6.asm:47 LDA #0
    // Overlapping static entry reached from 0xC0C6EB.
    case 0xC0C6EF: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0C6B6.asm:47 LDA #0
    // Overlapping static entry reached from 0xC0C6EE.
    case 0xC0C6F0: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C6B6.asm:49 END_C_FUNCTION
    case 0xC0C6F1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C6B6.asm:49 END_C_FUNCTION
    case 0xC0C6F2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C711.asm (unresolved).
bool execute_unresolved_c0_c0c711_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C711.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C6F3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C711.asm:7 END_STACK_VARS
    case 0xC0C6F5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C711.asm:7 END_STACK_VARS
    case 0xC0C6F6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C711.asm:7 END_STACK_VARS
    case 0xC0C6F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C711.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C6F7.
    case 0xC0C6F9: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C711.asm:7 END_STACK_VARS
    case 0xC0C6FA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC0C6FB: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0C711.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C6F9.
    case 0xC0C6FD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:9 ASL
    case 0xC0C6FE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:10 TAX
    case 0xC0C6FF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:11 STX @LOCAL00
    case 0xC0C700: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0C711.asm:12 LDA ENTITY_SIZES,X
    case 0xC0C702: cpu.execute_instruction<0xBD>(0x002F6C, 3); return true;
    // src/unknown/C0/C0C711.asm:13 ASL
    case 0xC0C705: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:14 TAY
    case 0xC0C706: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:15 LDA ENTITY_SCREEN_X_TABLE,X
    case 0xC0C707: cpu.execute_instruction<0xBD>(0x000B0C, 3); return true;
    // src/unknown/C0/C0C711.asm:16 TYX
    case 0xC0C70A: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:17 SEC
    case 0xC0C70B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:18 SBC f:UNKNOWN_C42A1F,X
    case 0xC0C70C: cpu.execute_instruction<0xFF>(0xC4295D, 4); return true;
    // src/unknown/C0/C0C711.asm:19 STA @VIRTUAL04
    case 0xC0C710: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C711.asm:20 LDX @LOCAL00
    case 0xC0C712: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0C711.asm:21 LDA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0C714: cpu.execute_instruction<0xBD>(0x000B48, 3); return true;
    // src/unknown/C0/C0C711.asm:22 STA @LOCAL00
    case 0xC0C717: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C711.asm:23 TYX
    case 0xC0C719: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:24 SEC
    case 0xC0C71A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:25 SBC f:UNKNOWN_C42A41,X
    case 0xC0C71B: cpu.execute_instruction<0xFF>(0xC4297F, 4); return true;
    // src/unknown/C0/C0C711.asm:26 STA @VIRTUAL02
    case 0xC0C71F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C711.asm:27 LDA @LOCAL00
    case 0xC0C721: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C711.asm:28 CLC
    case 0xC0C723: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:29 ADC #8
    case 0xC0C724: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C0/C0C711.asm:29 ADC #8
    // Overlapping static entry reached from 0xC0C724.
    case 0xC0C726: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C0/C0C711.asm:30 PHA
    case 0xC0C727: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:31 LDA @VIRTUAL04
    case 0xC0C728: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0C711.asm:32 ORA @VIRTUAL04
    case 0xC0C72A: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/unknown/C0/C0C711.asm:33 ORA @VIRTUAL02
    case 0xC0C72C: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C0C711.asm:34 PLY
    case 0xC0C72E: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:35 STY @VIRTUAL02
    case 0xC0C72F: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0C711.asm:36 ORA @VIRTUAL02
    case 0xC0C731: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C0C711.asm:37 AND #$FF00
    case 0xC0C733: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C0C711.asm:37 AND #$FF00
    // Overlapping static entry reached from 0xC0C733.
    case 0xC0C735: cpu.execute_instruction<0xFF>(0xA905F0, 4); return true;
    // src/unknown/C0/C0C711.asm:38 BEQ @UNKNOWN0
    case 0xC0C736: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0C711.asm:39 LDA #0
    case 0xC0C738: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C711.asm:39 LDA #0
    // Overlapping static entry reached from 0xC0C735.
    case 0xC0C739: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0C711.asm:39 LDA #0
    // Overlapping static entry reached from 0xC0C738.
    case 0xC0C73A: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C711.asm:40 BRA @UNKNOWN1
    case 0xC0C73B: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0C711.asm:42 LDA #.LOWORD(-1)
    case 0xC0C73D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C711.asm:42 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0C73D.
    case 0xC0C73F: cpu.execute_instruction<0xFF>(0xC26B2B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C711.asm:44 END_C_FUNCTION
    case 0xC0C740: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C711.asm:44 END_C_FUNCTION
    case 0xC0C741: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C760.asm (unresolved).
bool execute_unresolved_c0_c0c760_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C760.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C742: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C760.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC0C73F.
    case 0xC0C743: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C760.asm:11 END_STACK_VARS
    case 0xC0C744: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0C760.asm:11 END_STACK_VARS
    case 0xC0C745: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C760.asm:11 END_STACK_VARS
    case 0xC0C746: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C760.asm:11 END_STACK_VARS
    case 0xC0C747: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C760.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C747.
    case 0xC0C749: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C760.asm:11 END_STACK_VARS
    case 0xC0C74A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0C760.asm:11 END_STACK_VARS
    case 0xC0C74B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:12 STX @LOCAL01
    case 0xC0C74C: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0C760.asm:12 STX @LOCAL01
    // Overlapping static entry reached from 0xC0C749.
    case 0xC0C74D: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // src/unknown/C0/C0C760.asm:13 STA @LOCAL00
    case 0xC0C74E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C760.asm:13 STA @LOCAL00
    // Overlapping static entry reached from 0xC0C74D.
    case 0xC0C74F: cpu.execute_instruction<0x0E>(0x000A98, 3); return true;
    // src/unknown/C0/C0C760.asm:14 TYA
    case 0xC0C750: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:15 ASL
    case 0xC0C751: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:16 TAY
    case 0xC0C752: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:17 TYX
    case 0xC0C753: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:18 LDA @LOCAL00
    case 0xC0C754: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C760.asm:19 SEC
    case 0xC0C756: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:20 SBC f:UNKNOWN_C42A1F,X
    case 0xC0C757: cpu.execute_instruction<0xFF>(0xC4295D, 4); return true;
    // src/unknown/C0/C0C760.asm:21 STA @VIRTUAL02
    case 0xC0C75B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C760.asm:22 LDX @LOCAL01
    case 0xC0C75D: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0C760.asm:23 TXA
    case 0xC0C75F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:24 TYX
    case 0xC0C760: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:25 SEC
    case 0xC0C761: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:26 SBC f:UNKNOWN_C42A41,X
    case 0xC0C762: cpu.execute_instruction<0xFF>(0xC4297F, 4); return true;
    // src/unknown/C0/C0C760.asm:27 STA @LOCAL00
    case 0xC0C766: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C760.asm:28 LDX @LOCAL01
    case 0xC0C768: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0C760.asm:29 TXA
    case 0xC0C76A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:30 CLC
    case 0xC0C76B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:31 ADC #8
    case 0xC0C76C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C0/C0C760.asm:31 ADC #8
    // Overlapping static entry reached from 0xC0C76C.
    case 0xC0C76E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0C760.asm:32 STA @VIRTUAL04
    case 0xC0C76F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C760.asm:33 LDA @LOCAL00
    case 0xC0C771: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C760.asm:34 PHA
    case 0xC0C773: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:35 LDA @VIRTUAL02
    case 0xC0C774: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0C760.asm:36 ORA @VIRTUAL02
    case 0xC0C776: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C0C760.asm:37 PLY
    case 0xC0C778: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:38 STY @VIRTUAL02
    case 0xC0C779: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0C760.asm:39 ORA @VIRTUAL02
    case 0xC0C77B: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C0C760.asm:40 ORA @VIRTUAL04
    case 0xC0C77D: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/unknown/C0/C0C760.asm:41 AND #$FF00
    case 0xC0C77F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C0C760.asm:41 AND #$FF00
    // Overlapping static entry reached from 0xC0C77F.
    case 0xC0C781: cpu.execute_instruction<0xFF>(0xA905F0, 4); return true;
    // src/unknown/C0/C0C760.asm:42 BEQ @UNKNOWN0
    case 0xC0C782: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0C760.asm:43 LDA #0
    case 0xC0C784: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C760.asm:43 LDA #0
    // Overlapping static entry reached from 0xC0C781.
    case 0xC0C785: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0C760.asm:43 LDA #0
    // Overlapping static entry reached from 0xC0C784.
    case 0xC0C786: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C760.asm:44 BRA @UNKNOWN1
    case 0xC0C787: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0C760.asm:46 LDA #.LOWORD(-1)
    case 0xC0C789: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C760.asm:46 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0C789.
    case 0xC0C78B: cpu.execute_instruction<0xFF>(0xC26B2B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C760.asm:48 END_C_FUNCTION
    case 0xC0C78C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C760.asm:48 END_C_FUNCTION
    case 0xC0C78D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C7AC.asm (unresolved).
bool execute_unresolved_c0_c0c7ac_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C7AC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C78E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C7AC.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC0C78B.
    case 0xC0C78F: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C7AC.asm:6 END_STACK_VARS
    case 0xC0C790: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C7AC.asm:6 END_STACK_VARS
    case 0xC0C791: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C7AC.asm:6 END_STACK_VARS
    case 0xC0C792: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C7AC.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C792.
    case 0xC0C794: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C7AC.asm:6 END_STACK_VARS
    case 0xC0C795: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0C7AC.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0xC0C796: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0C7AC.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C794.
    case 0xC0C798: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C7AC.asm:8 STA @VIRTUAL02
    case 0xC0C799: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C7AC.asm:9 JSL UNKNOWN_C09EFF
    case 0xC0C79B: cpu.execute_instruction<0x22>(0xC09EDE, 4); return true;
    // src/unknown/C0/C0C7AC.asm:10 CMP #0
    case 0xC0C79F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0C7AC.asm:10 CMP #0
    // Overlapping static entry reached from 0xC0C79F.
    case 0xC0C7A1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0C7AC.asm:11 BEQ @UNKNOWN0
    case 0xC0C7A2: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/unknown/C0/C0C7AC.asm:12 LDY @VIRTUAL02
    case 0xC0C7A4: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C0/C0C7AC.asm:13 LDX ENTITY_MOVEMENT_PROSPECTIVE_Y
    case 0xC0C7A6: cpu.execute_instruction<0xAE>(0x002C4A, 3); return true;
    // src/unknown/C0/C0C7AC.asm:14 LDA ENTITY_MOVEMENT_PROSPECTIVE_X
    case 0xC0C7A9: cpu.execute_instruction<0xAD>(0x002C48, 3); return true;
    // src/unknown/C0/C0C7AC.asm:15 JSL UNKNOWN_C05F33
    case 0xC0C7AC: cpu.execute_instruction<0x22>(0xC06161, 4); return true;
    // src/unknown/C0/C0C7AC.asm:16 STA @LOCAL00
    case 0xC0C7B0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C7AC.asm:17 LDA @VIRTUAL02
    case 0xC0C7B2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0C7AC.asm:18 ASL
    case 0xC0C7B4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C7AC.asm:19 TAX
    case 0xC0C7B5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C7AC.asm:20 LDA @LOCAL00
    case 0xC0C7B6: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C7AC.asm:21 STA ENTITY_SURFACE_FLAGS,X
    case 0xC0C7B8: cpu.execute_instruction<0x9D>(0x002FA8, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C7AC.asm:23 END_C_FUNCTION
    case 0xC0C7BB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C7AC.asm:23 END_C_FUNCTION
    case 0xC0C7BC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C7DB.asm (unresolved).
bool execute_unresolved_c0_c0c7db_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C7DB.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C7BD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C7DB.asm:7 END_STACK_VARS
    case 0xC0C7BF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C7DB.asm:7 END_STACK_VARS
    case 0xC0C7C0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C7DB.asm:7 END_STACK_VARS
    case 0xC0C7C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C7DB.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C7C1.
    case 0xC0C7C3: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C7DB.asm:7 END_STACK_VARS
    case 0xC0C7C4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0C7DB.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC0C7C5: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0C7DB.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C7C3.
    case 0xC0C7C7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C7DB.asm:9 STA @LOCAL01
    case 0xC0C7C8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0C7DB.asm:10 ASL
    case 0xC0C7CA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C7DB.asm:11 STA @VIRTUAL02
    case 0xC0C7CB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C7DB.asm:12 LDA @LOCAL01
    case 0xC0C7CD: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0C7DB.asm:13 TAY
    case 0xC0C7CF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0C7DB.asm:14 LDX @VIRTUAL02
    case 0xC0C7D0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C7DB.asm:15 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0C7D2: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0C7DB.asm:16 TAX
    case 0xC0C7D5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C7DB.asm:17 STX @LOCAL00
    case 0xC0C7D6: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0C7DB.asm:18 LDX @VIRTUAL02
    case 0xC0C7D8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C7DB.asm:19 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0C7DA: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C0C7DB.asm:20 LDX @LOCAL00
    case 0xC0C7DD: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0C7DB.asm:21 JSL UNKNOWN_C05F33
    case 0xC0C7DF: cpu.execute_instruction<0x22>(0xC06161, 4); return true;
    // src/unknown/C0/C0C7DB.asm:22 LDX @VIRTUAL02
    case 0xC0C7E3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C7DB.asm:23 STA ENTITY_SURFACE_FLAGS,X
    case 0xC0C7E5: cpu.execute_instruction<0x9D>(0x002FA8, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C7DB.asm:24 END_C_FUNCTION
    case 0xC0C7E8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C7DB.asm:24 END_C_FUNCTION
    case 0xC0C7E9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C808.asm (unresolved).
bool execute_unresolved_c0_c0c808_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C808.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C7EA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C808.asm:7 END_STACK_VARS
    case 0xC0C7EC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C808.asm:7 END_STACK_VARS
    case 0xC0C7ED: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C808.asm:7 END_STACK_VARS
    case 0xC0C7EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C808.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C7EE.
    case 0xC0C7F0: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C808.asm:7 END_STACK_VARS
    case 0xC0C7F1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0C808.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC0C7F2: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0C808.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C7F0.
    case 0xC0C7F4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C808.asm:9 STA @LOCAL01
    case 0xC0C7F5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0C808.asm:10 ASL
    case 0xC0C7F7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C808.asm:11 STA @VIRTUAL02
    case 0xC0C7F8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C808.asm:12 LDA @LOCAL01
    case 0xC0C7FA: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0C808.asm:13 TAY
    case 0xC0C7FC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0C808.asm:14 LDX @VIRTUAL02
    case 0xC0C7FD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C808.asm:15 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0C7FF: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0C808.asm:16 LDX @VIRTUAL02
    case 0xC0C802: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C808.asm:17 SEC
    case 0xC0C804: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C808.asm:18 SBC ENTITY_ABS_Z_TABLE,X
    case 0xC0C805: cpu.execute_instruction<0xFD>(0x000BFC, 3); return true;
    // src/unknown/C0/C0C808.asm:19 TAX
    case 0xC0C808: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C808.asm:20 STX @LOCAL00
    case 0xC0C809: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0C808.asm:21 LDX @VIRTUAL02
    case 0xC0C80B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C808.asm:22 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0C80D: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C0C808.asm:23 LDX @LOCAL00
    case 0xC0C810: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0C808.asm:24 JSL UNKNOWN_C05F33
    case 0xC0C812: cpu.execute_instruction<0x22>(0xC06161, 4); return true;
    // src/unknown/C0/C0C808.asm:25 LDX @VIRTUAL02
    case 0xC0C816: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C808.asm:26 STA ENTITY_SURFACE_FLAGS,X
    case 0xC0C818: cpu.execute_instruction<0x9D>(0x002FA8, 3); return true;
    // src/unknown/C0/C0C808.asm:26 STA ENTITY_SURFACE_FLAGS,X
    // Overlapping static entry reached from 0xC09824.
    case 0xC0C81A: cpu.execute_instruction<0x2F>(0xC26B2B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C808.asm:27 END_C_FUNCTION
    case 0xC0C81B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C808.asm:27 END_C_FUNCTION
    case 0xC0C81C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C83B.asm (unresolved).
bool execute_unresolved_c0_c0c83b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C83B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C81D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C83B.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC0C81A.
    case 0xC0C81E: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C83B.asm:12 END_STACK_VARS
    case 0xC0C81F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0C83B.asm:12 END_STACK_VARS
    case 0xC0C820: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C83B.asm:12 END_STACK_VARS
    case 0xC0C821: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C83B.asm:12 END_STACK_VARS
    case 0xC0C822: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C83B.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C822.
    case 0xC0C824: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C83B.asm:12 END_STACK_VARS
    case 0xC0C825: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0C83B.asm:12 END_STACK_VARS
    case 0xC0C826: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0C83B.asm:13 STA @LOCAL04
    case 0xC0C827: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C0C83B.asm:13 STA @LOCAL04
    // Overlapping static entry reached from 0xC0C824.
    case 0xC0C828: cpu.execute_instruction<0x1C>(0x0038AC, 3); return true;
    // src/unknown/C0/C0C83B.asm:14 LDY CURRENT_ENTITY_SLOT
    case 0xC0C829: cpu.execute_instruction<0xAC>(0x001A38, 3); return true;
    // src/unknown/C0/C0C83B.asm:14 LDY CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C828.
    case 0xC0C82B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C83B.asm:15 STY @LOCAL03
    case 0xC0C82C: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/unknown/C0/C0C83B.asm:16 TYA
    case 0xC0C82E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0C83B.asm:17 ASL
    case 0xC0C82F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C83B.asm:18 TAX
    case 0xC0C830: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C83B.asm:19 LDA @LOCAL04
    case 0xC0C831: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0C83B.asm:20 STA ENTITY_MOVING_DIRECTIONS,X
    case 0xC0C833: cpu.execute_instruction<0x9D>(0x001A7C, 3); return true;
    // src/unknown/C0/C0C83B.asm:21 AND #$0001
    case 0xC0C836: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0C83B.asm:21 AND #$0001
    // Overlapping static entry reached from 0xC0C836.
    case 0xC0C838: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0C83B.asm:22 BEQ @UNKNOWN1
    case 0xC0C839: cpu.execute_instruction<0xF0>(0x000031, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:23 MOVE_INT_CONSTANT $B505, @VIRTUAL0A ;1.0 / sqrt(2.0)
    case 0xC0C83B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x00B505, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:23 MOVE_INT_CONSTANT $B505, @VIRTUAL0A ;1.0 / sqrt(2.0)
    // Overlapping static entry reached from 0xC0C83B.
    case 0xC0C83D: cpu.execute_instruction<0xB5>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:23 MOVE_INT_CONSTANT $B505, @VIRTUAL0A ;1.0 / sqrt(2.0)
    case 0xC0C83E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:23 MOVE_INT_CONSTANT $B505, @VIRTUAL0A ;1.0 / sqrt(2.0)
    // Overlapping static entry reached from 0xC0C83D.
    case 0xC0C83F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:23 MOVE_INT_CONSTANT $B505, @VIRTUAL0A ;1.0 / sqrt(2.0)
    case 0xC0C840: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:23 MOVE_INT_CONSTANT $B505, @VIRTUAL0A ;1.0 / sqrt(2.0)
    // Overlapping static entry reached from 0xC0C840.
    case 0xC0C842: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:23 MOVE_INT_CONSTANT $B505, @VIRTUAL0A ;1.0 / sqrt(2.0)
    case 0xC0C843: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0C83B.asm:24 LDA ENTITY_MOVEMENT_SPEEDS,X
    case 0xC0C845: cpu.execute_instruction<0xBD>(0x002F30, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC0C848: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC0C84A: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C0/C0C83B.asm:26 JSL MULT32
    case 0xC0C84C: cpu.execute_instruction<0x22>(0xC09068, 4); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/unknown/C0/C0C83B.asm:27 ASR8_INT @VIRTUAL06
    case 0xC0C850: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/unknown/C0/C0C83B.asm:27 ASR8_INT @VIRTUAL06
    case 0xC0C852: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0C83B.asm:27 ASR8_INT @VIRTUAL06
    case 0xC0C854: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:27 ASR8_INT @VIRTUAL06
    case 0xC0C856: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:27 ASR8_INT @VIRTUAL06
    case 0xC0C858: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0C83B.asm:27 ASR8_INT @VIRTUAL06
    case 0xC0C85A: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/unknown/C0/C0C83B.asm:27 ASR8_INT @VIRTUAL06
    case 0xC0C85C: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/unknown/C0/C0C83B.asm:27 ASR8_INT @VIRTUAL06
    case 0xC0C85E: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0C83B.asm:27 ASR8_INT @VIRTUAL06
    case 0xC0C860: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0C862: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0C864: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0C866: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0C868: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0C83B.asm:29 BRA @UNKNOWN3
    case 0xC0C86A: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:31 MOVE_INT_CONSTANT $10000, @VIRTUAL0A ;1.0
    case 0xC0C86C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:31 MOVE_INT_CONSTANT $10000, @VIRTUAL0A ;1.0
    // Overlapping static entry reached from 0xC0C86C.
    case 0xC0C86E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:31 MOVE_INT_CONSTANT $10000, @VIRTUAL0A ;1.0
    case 0xC0C86F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:31 MOVE_INT_CONSTANT $10000, @VIRTUAL0A ;1.0
    case 0xC0C871: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:31 MOVE_INT_CONSTANT $10000, @VIRTUAL0A ;1.0
    // Overlapping static entry reached from 0xC0C871.
    case 0xC0C873: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:31 MOVE_INT_CONSTANT $10000, @VIRTUAL0A ;1.0
    case 0xC0C874: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0C83B.asm:32 LDA ENTITY_MOVEMENT_SPEEDS,X
    case 0xC0C876: cpu.execute_instruction<0xBD>(0x002F30, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xC0C879: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xC0C87B: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C0/C0C83B.asm:34 JSL MULT32
    case 0xC0C87D: cpu.execute_instruction<0x22>(0xC09068, 4); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/unknown/C0/C0C83B.asm:35 ASR8_INT @VIRTUAL06
    case 0xC0C881: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/unknown/C0/C0C83B.asm:35 ASR8_INT @VIRTUAL06
    case 0xC0C883: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0C83B.asm:35 ASR8_INT @VIRTUAL06
    case 0xC0C885: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:35 ASR8_INT @VIRTUAL06
    case 0xC0C887: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:35 ASR8_INT @VIRTUAL06
    case 0xC0C889: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0C83B.asm:35 ASR8_INT @VIRTUAL06
    case 0xC0C88B: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/unknown/C0/C0C83B.asm:35 ASR8_INT @VIRTUAL06
    case 0xC0C88D: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/unknown/C0/C0C83B.asm:35 ASR8_INT @VIRTUAL06
    case 0xC0C88F: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0C83B.asm:35 ASR8_INT @VIRTUAL06
    case 0xC0C891: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0C893: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0C895: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0C897: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0C899: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0C83B.asm:38 LDA @LOCAL04
    case 0xC0C89B: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0C83B.asm:39 BEQ @UNKNOWN10
    case 0xC0C89D: cpu.execute_instruction<0xF0>(0x000038, 2); return true;
    // src/unknown/C0/C0C83B.asm:40 CMP #1
    case 0xC0C89F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0C83B.asm:40 CMP #1
    // Overlapping static entry reached from 0xC0C89F.
    case 0xC0C8A1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0C83B.asm:41 BEQ @UNKNOWN11
    case 0xC0C8A2: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // src/unknown/C0/C0C83B.asm:42 CMP #2
    case 0xC0C8A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0C83B.asm:42 CMP #2
    // Overlapping static entry reached from 0xC0C8A4.
    case 0xC0C8A6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0C83B.asm:43 BEQL @UNKNOWN12
    case 0xC0C8A7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0C83B.asm:43 BEQL @UNKNOWN12
    case 0xC0C8A9: cpu.execute_instruction<0x4C>(0x00C935, 3); return true;
    // src/unknown/C0/C0C83B.asm:44 CMP #3
    case 0xC0C8AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0C83B.asm:44 CMP #3
    // Overlapping static entry reached from 0xC0C8AC.
    case 0xC0C8AE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0C83B.asm:45 BEQL @UNKNOWN13
    case 0xC0C8AF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0C83B.asm:45 BEQL @UNKNOWN13
    case 0xC0C8B1: cpu.execute_instruction<0x4C>(0x00C952, 3); return true;
    // src/unknown/C0/C0C83B.asm:46 CMP #4
    case 0xC0C8B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0C83B.asm:46 CMP #4
    // Overlapping static entry reached from 0xC0C8B4.
    case 0xC0C8B6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0C83B.asm:47 BEQL @UNKNOWN14
    case 0xC0C8B7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0C83B.asm:47 BEQL @UNKNOWN14
    case 0xC0C8B9: cpu.execute_instruction<0x4C>(0x00C975, 3); return true;
    // src/unknown/C0/C0C83B.asm:48 CMP #5
    case 0xC0C8BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C0/C0C83B.asm:48 CMP #5
    // Overlapping static entry reached from 0xC0C8BC.
    case 0xC0C8BE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0C83B.asm:49 BEQL @UNKNOWN15
    case 0xC0C8BF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0C83B.asm:49 BEQL @UNKNOWN15
    case 0xC0C8C1: cpu.execute_instruction<0x4C>(0x00C992, 3); return true;
    // src/unknown/C0/C0C83B.asm:50 CMP #6
    case 0xC0C8C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C0C83B.asm:50 CMP #6
    // Overlapping static entry reached from 0xC0C8C4.
    case 0xC0C8C6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0C83B.asm:51 BEQL @UNKNOWN16
    case 0xC0C8C7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0C83B.asm:51 BEQL @UNKNOWN16
    case 0xC0C8C9: cpu.execute_instruction<0x4C>(0x00C9C3, 3); return true;
    // src/unknown/C0/C0C83B.asm:52 CMP #7
    case 0xC0C8CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C0C83B.asm:52 CMP #7
    // Overlapping static entry reached from 0xC0C8CC.
    case 0xC0C8CE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0C83B.asm:53 BEQL @UNKNOWN17
    case 0xC0C8CF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0C83B.asm:53 BEQL @UNKNOWN17
    case 0xC0C8D1: cpu.execute_instruction<0x4C>(0x00C9EE, 3); return true;
    // src/unknown/C0/C0C83B.asm:54 JMP @UNKNOWN18
    case 0xC0C8D4: cpu.execute_instruction<0x4C>(0x00CA15, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:56 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC0C8D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:56 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC0C8D7.
    case 0xC0C8D9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:56 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC0C8DA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:56 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC0C8DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:56 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC0C8DC.
    case 0xC0C8DE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:56 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC0C8DF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:57 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C8E1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:57 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C8E3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:57 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C8E5: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:57 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C8E7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0C83B.asm:58 SEC
    case 0xC0C8E9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:59 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C8EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:59 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0C8EA.
    case 0xC0C8EC: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0C83B.asm:59 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C8ED: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:59 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C8EF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:59 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C8F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:59 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0C8F1.
    case 0xC0C8F3: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0C83B.asm:59 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C8F4: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:59 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C8F6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:60 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C8F8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:60 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C8FA: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:60 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C8FC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:60 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C8FE: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0C83B.asm:61 JMP @UNKNOWN18
    case 0xC0C900: cpu.execute_instruction<0x4C>(0x00CA15, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:63 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C903: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:63 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C905: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:63 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C907: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:63 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C909: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:64 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C90B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:64 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C90D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:64 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C90F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:64 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C911: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:65 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C913: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:65 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C915: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:65 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C917: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:65 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C919: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0C83B.asm:66 SEC
    case 0xC0C91B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:67 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C91C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:67 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0C91C.
    case 0xC0C91E: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0C83B.asm:67 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C91F: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:67 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C921: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:67 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C923: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:67 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0C923.
    case 0xC0C925: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0C83B.asm:67 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C926: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:67 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C928: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:68 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C92A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:68 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C92C: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:68 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C92E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:68 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C930: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0C83B.asm:69 JMP @UNKNOWN18
    case 0xC0C932: cpu.execute_instruction<0x4C>(0x00CA15, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:71 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C935: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:71 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C937: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:71 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C939: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:71 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C93B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:72 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C93D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:72 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C93F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:72 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C941: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:72 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C943: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:73 MOVE_INT_CONSTANT NULL, @LOCAL02
    case 0xC0C945: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:73 MOVE_INT_CONSTANT NULL, @LOCAL02
    // Overlapping static entry reached from 0xC0C945.
    case 0xC0C947: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:73 MOVE_INT_CONSTANT NULL, @LOCAL02
    case 0xC0C948: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:73 MOVE_INT_CONSTANT NULL, @LOCAL02
    case 0xC0C94A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:73 MOVE_INT_CONSTANT NULL, @LOCAL02
    // Overlapping static entry reached from 0xC0C94A.
    case 0xC0C94C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:73 MOVE_INT_CONSTANT NULL, @LOCAL02
    case 0xC0C94D: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0C83B.asm:74 JMP @UNKNOWN18
    case 0xC0C94F: cpu.execute_instruction<0x4C>(0x00CA15, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:76 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C952: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:76 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C954: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:76 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C956: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:76 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C958: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:77 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C95A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:77 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C95C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:77 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C95E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:77 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C960: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:78 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C962: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:78 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C964: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:78 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C966: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:78 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C968: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:79 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C96A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:79 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C96C: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:79 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C96E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:79 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C970: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0C83B.asm:80 JMP @UNKNOWN18
    case 0xC0C972: cpu.execute_instruction<0x4C>(0x00CA15, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:82 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC0C975: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:82 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC0C975.
    case 0xC0C977: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:82 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC0C978: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:82 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC0C97A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:82 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC0C97A.
    case 0xC0C97C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:82 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC0C97D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:83 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C97F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:83 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C981: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:83 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C983: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:83 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C985: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:84 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C987: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:84 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C989: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:84 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C98B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:84 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C98D: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0C83B.asm:85 JMP @UNKNOWN18
    case 0xC0C98F: cpu.execute_instruction<0x4C>(0x00CA15, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:87 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C992: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:87 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C994: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:87 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C996: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:87 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C998: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0C83B.asm:88 SEC
    case 0xC0C99A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:89 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C99B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:89 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0C99B.
    case 0xC0C99D: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0C83B.asm:89 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C99E: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:89 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9A0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:89 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:89 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0C9A2.
    case 0xC0C9A4: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0C83B.asm:89 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9A5: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:89 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9A7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:90 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C9A9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:90 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C9AB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:90 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C9AD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:90 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C9AF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:91 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9B1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:91 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9B3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:91 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9B5: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:91 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9B7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:92 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C9B9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:92 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C9BB: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:92 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C9BD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:92 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C9BF: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0C83B.asm:93 BRA @UNKNOWN18
    case 0xC0C9C1: cpu.execute_instruction<0x80>(0x000052, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:95 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9C3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:95 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9C5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:95 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9C7: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:95 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9C9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0C83B.asm:96 SEC
    case 0xC0C9CB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:97 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:97 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0C9CC.
    case 0xC0C9CE: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0C83B.asm:97 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9CF: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:97 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9D1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:97 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:97 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0C9D3.
    case 0xC0C9D5: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0C83B.asm:97 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9D6: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:97 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9D8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:98 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C9DA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:98 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C9DC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:98 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C9DE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:98 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C9E0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:99 MOVE_INT_CONSTANT NULL, @LOCAL02
    case 0xC0C9E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:99 MOVE_INT_CONSTANT NULL, @LOCAL02
    // Overlapping static entry reached from 0xC0C9E2.
    case 0xC0C9E4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:99 MOVE_INT_CONSTANT NULL, @LOCAL02
    case 0xC0C9E5: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:99 MOVE_INT_CONSTANT NULL, @LOCAL02
    case 0xC0C9E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:99 MOVE_INT_CONSTANT NULL, @LOCAL02
    // Overlapping static entry reached from 0xC0C9E7.
    case 0xC0C9E9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:99 MOVE_INT_CONSTANT NULL, @LOCAL02
    case 0xC0C9EA: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0C83B.asm:100 BRA @UNKNOWN18
    case 0xC0C9EC: cpu.execute_instruction<0x80>(0x000027, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:102 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9EE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:102 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9F0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:102 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9F2: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:102 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9F4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0C83B.asm:103 SEC
    case 0xC0C9F6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:104 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:104 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0C9F7.
    case 0xC0C9F9: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0C83B.asm:104 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9FA: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:104 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9FC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:104 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:104 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0C9FE.
    case 0xC0CA00: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0C83B.asm:104 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0CA01: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:104 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0CA03: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:105 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0CA05: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:105 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0CA07: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:105 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0CA09: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:105 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0CA0B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:106 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0CA0D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:106 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0CA0F: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:106 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0CA11: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:106 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0CA13: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0C83B.asm:108 LDY @LOCAL03
    case 0xC0CA15: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C0/C0C83B.asm:109 TYA
    case 0xC0CA17: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0C83B.asm:110 ASL
    case 0xC0CA18: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C83B.asm:111 TAX
    case 0xC0CA19: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C83B.asm:112 LDA @LOCAL01 + fixed_point::integer
    case 0xC0CA1A: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0C83B.asm:113 STA ENTITY_DELTA_X_TABLE,X
    case 0xC0CA1C: cpu.execute_instruction<0x9D>(0x000CEC, 3); return true;
    // src/unknown/C0/C0C83B.asm:114 LDA @LOCAL01 + fixed_point::fraction
    case 0xC0CA1F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0C83B.asm:115 STA ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC0CA21: cpu.execute_instruction<0x9D>(0x000DA0, 3); return true;
    // src/unknown/C0/C0C83B.asm:116 LDA @LOCAL02 + fixed_point::integer
    case 0xC0CA24: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0C83B.asm:117 STA ENTITY_DELTA_Y_TABLE,X
    case 0xC0CA26: cpu.execute_instruction<0x9D>(0x000D28, 3); return true;
    // src/unknown/C0/C0C83B.asm:118 LDA @LOCAL02 + fixed_point::fraction
    case 0xC0CA29: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0C83B.asm:119 STA ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC0CA2B: cpu.execute_instruction<0x9D>(0x000DDC, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C83B.asm:120 END_C_FUNCTION
    case 0xC0CA2E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C83B.asm:120 END_C_FUNCTION
    case 0xC0CA2F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0CA4E.asm (unresolved).
bool execute_unresolved_c0_c0ca4e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0CA4E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0CA30: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0CA4E.asm:10 END_STACK_VARS
    case 0xC0CA32: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0CA4E.asm:10 END_STACK_VARS
    case 0xC0CA33: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0CA4E.asm:10 END_STACK_VARS
    case 0xC0CA34: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CA4E.asm:10 END_STACK_VARS
    case 0xC0CA35: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CA4E.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC0CA35.
    case 0xC0CA37: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0CA4E.asm:10 END_STACK_VARS
    case 0xC0CA38: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0CA4E.asm:10 END_STACK_VARS
    case 0xC0CA39: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:11 STA @LOCAL03
    case 0xC0CA3A: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0CA4E.asm:11 STA @LOCAL03
    // Overlapping static entry reached from 0xC0CA37.
    case 0xC0CA3B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:12 LDX CURRENT_ENTITY_SLOT
    case 0xC0CA3C: cpu.execute_instruction<0xAE>(0x001A38, 3); return true;
    // src/unknown/C0/C0CA4E.asm:13 TXA
    case 0xC0CA3F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:14 ASL
    case 0xC0CA40: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:15 TAX
    case 0xC0CA41: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:16 LDA ENTITY_DELTA_X_TABLE,X
    case 0xC0CA42: cpu.execute_instruction<0xBD>(0x000CEC, 3); return true;
    // src/unknown/C0/C0CA4E.asm:17 STA @LOCAL00 + fixed_point::integer
    case 0xC0CA45: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0CA4E.asm:18 LDA ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC0CA47: cpu.execute_instruction<0xBD>(0x000DA0, 3); return true;
    // src/unknown/C0/C0CA4E.asm:19 STA @LOCAL00 + fixed_point::fraction
    case 0xC0CA4A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0CA4E.asm:20 LDA ENTITY_DELTA_Y_TABLE,X
    case 0xC0CA4C: cpu.execute_instruction<0xBD>(0x000D28, 3); return true;
    // src/unknown/C0/C0CA4E.asm:21 STA @LOCAL01 + fixed_point::integer
    case 0xC0CA4F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0CA4E.asm:22 LDA ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC0CA51: cpu.execute_instruction<0xBD>(0x000DDC, 3); return true;
    // src/unknown/C0/C0CA4E.asm:23 STA @LOCAL01
    case 0xC0CA54: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0CA4E.asm:24 STA @VIRTUAL0A
    case 0xC0CA56: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C0CA4E.asm:25 LDA @LOCAL01+2
    case 0xC0CA58: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0CA4E.asm:26 STA @VIRTUAL0A+2
    case 0xC0CA5A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC0CA5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC0CA5C.
    case 0xC0CA5E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC0CA5F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC0CA61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC0CA61.
    case 0xC0CA63: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC0CA64: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0CA4E.asm:28 CLC
    case 0xC0CA66: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:29 LDA @VIRTUAL06
    case 0xC0CA67: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0CA4E.asm:30 SBC @VIRTUAL0A
    case 0xC0CA69: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // src/unknown/C0/C0CA4E.asm:31 LDA @VIRTUAL06+2
    case 0xC0CA6B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C0CA4E.asm:32 SBC @VIRTUAL0A+2
    case 0xC0CA6D: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0CA4E.asm:33 BRANCHLTEQS @UNKNOWN2
    case 0xC0CA6F: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:33 BRANCHLTEQS @UNKNOWN2
    case 0xC0CA71: cpu.execute_instruction<0x10>(0x000025, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0CA4E.asm:33 BRANCHLTEQS @UNKNOWN2
    case 0xC0CA73: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:33 BRANCHLTEQS @UNKNOWN2
    case 0xC0CA75: cpu.execute_instruction<0x30>(0x000021, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:34 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0CA77: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:34 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0CA79: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:34 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0CA7B: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:34 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0CA7D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0CA4E.asm:35 SEC
    case 0xC0CA7F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:36 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0CA80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:36 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0CA80.
    case 0xC0CA82: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0CA4E.asm:36 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0CA83: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:36 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0CA85: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:36 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0CA87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:36 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0CA87.
    case 0xC0CA89: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:36 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0CA8A: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:36 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0CA8C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:37 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0CA8E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:37 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0CA90: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:37 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0CA92: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:37 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0CA94: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0CA4E.asm:38 BRA @UNKNOWN3
    case 0xC0CA96: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:40 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0CA98: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:40 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0CA9A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:40 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0CA9C: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:40 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0CA9E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:41 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0CAA0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:41 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0CAA2: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:41 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0CAA4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:41 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0CAA6: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:43 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0CAA8: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:43 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0CAAA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:43 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0CAAC: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:43 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0CAAE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC0CAB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0CAB0.
    case 0xC0CAB2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC0CAB3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC0CAB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0CAB5.
    case 0xC0CAB7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC0CAB8: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0CA4E.asm:45 CLC
    case 0xC0CABA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:46 LDA @VIRTUAL0A
    case 0xC0CABB: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C0/C0CA4E.asm:47 SBC @VIRTUAL06
    case 0xC0CABD: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // src/unknown/C0/C0CA4E.asm:48 LDA @VIRTUAL0A+2
    case 0xC0CABF: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/unknown/C0/C0CA4E.asm:49 SBC @VIRTUAL06+2
    case 0xC0CAC1: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0CA4E.asm:50 BRANCHLTEQS @UNKNOWN6
    case 0xC0CAC3: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:50 BRANCHLTEQS @UNKNOWN6
    case 0xC0CAC5: cpu.execute_instruction<0x10>(0x00001D, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0CA4E.asm:50 BRANCHLTEQS @UNKNOWN6
    case 0xC0CAC7: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:50 BRANCHLTEQS @UNKNOWN6
    case 0xC0CAC9: cpu.execute_instruction<0x30>(0x000019, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:51 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CACB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:51 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CACD: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:51 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CACF: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:51 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CAD1: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0CA4E.asm:52 SEC
    case 0xC0CAD3: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:53 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CAD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:53 NEGATE_INT_ASSIGN @VIRTUAL0A
    // Overlapping static entry reached from 0xC0CAD4.
    case 0xC0CAD6: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0CA4E.asm:53 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CAD7: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:53 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CAD9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:53 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CADB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:53 NEGATE_INT_ASSIGN @VIRTUAL0A
    // Overlapping static entry reached from 0xC0CADB.
    case 0xC0CADD: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:53 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CADE: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:53 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CAE0: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0CA4E.asm:54 BRA @UNKNOWN7
    case 0xC0CAE2: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:56 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CAE4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:56 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CAE6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:56 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CAE8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:56 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CAEA: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:58 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0CAEC: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:58 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0CAEE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:58 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0CAF0: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:58 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0CAF2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0CA4E.asm:59 CLC
    case 0xC0CAF4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:60 LDA @VIRTUAL0A
    case 0xC0CAF5: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C0/C0CA4E.asm:61 SBC @VIRTUAL06
    case 0xC0CAF7: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // src/unknown/C0/C0CA4E.asm:62 LDA @VIRTUAL0A+2
    case 0xC0CAF9: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/unknown/C0/C0CA4E.asm:63 SBC @VIRTUAL06+2
    case 0xC0CAFB: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0CA4E.asm:64 BRANCHLTEQS @UNKNOWN13
    case 0xC0CAFD: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:64 BRANCHLTEQS @UNKNOWN13
    case 0xC0CAFF: cpu.execute_instruction<0x10>(0x00004A, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0CA4E.asm:64 BRANCHLTEQS @UNKNOWN13
    case 0xC0CB01: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:64 BRANCHLTEQS @UNKNOWN13
    case 0xC0CB03: cpu.execute_instruction<0x30>(0x000046, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:65 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB05: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:65 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB07: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:65 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB09: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:65 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB0B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:66 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC0CB0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:66 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC0CB0D.
    case 0xC0CB0F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:66 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC0CB10: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:66 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC0CB12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:66 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC0CB12.
    case 0xC0CB14: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:66 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC0CB15: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0CA4E.asm:67 CLC
    case 0xC0CB17: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:68 LDA @VIRTUAL06
    case 0xC0CB18: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0CA4E.asm:69 SBC @VIRTUAL0A
    case 0xC0CB1A: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // src/unknown/C0/C0CA4E.asm:70 LDA @VIRTUAL06+2
    case 0xC0CB1C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C0CA4E.asm:71 SBC @VIRTUAL0A+2
    case 0xC0CB1E: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0CA4E.asm:72 BRANCHLTEQS @UNKNOWN12
    case 0xC0CB20: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:72 BRANCHLTEQS @UNKNOWN12
    case 0xC0CB22: cpu.execute_instruction<0x10>(0x00001D, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0CA4E.asm:72 BRANCHLTEQS @UNKNOWN12
    case 0xC0CB24: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:72 BRANCHLTEQS @UNKNOWN12
    case 0xC0CB26: cpu.execute_instruction<0x30>(0x000019, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:73 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB28: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:73 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB2A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:73 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB2C: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:73 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB2E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0CA4E.asm:74 SEC
    case 0xC0CB30: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:75 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CB31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:75 NEGATE_INT_ASSIGN @VIRTUAL0A
    // Overlapping static entry reached from 0xC0CB31.
    case 0xC0CB33: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0CA4E.asm:75 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CB34: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:75 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CB36: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:75 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CB38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:75 NEGATE_INT_ASSIGN @VIRTUAL0A
    // Overlapping static entry reached from 0xC0CB38.
    case 0xC0CB3A: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:75 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CB3B: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:75 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CB3D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0CA4E.asm:76 BRA @UNKNOWN17
    case 0xC0CB3F: cpu.execute_instruction<0x80>(0x00004E, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:78 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB41: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:78 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB43: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:78 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB45: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:78 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB47: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0CA4E.asm:79 BRA @UNKNOWN17
    case 0xC0CB49: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:81 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CB4B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:81 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CB4D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:81 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CB4F: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:81 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CB51: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:82 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC0CB53: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:82 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC0CB53.
    case 0xC0CB55: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:82 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC0CB56: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:82 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC0CB58: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:82 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC0CB58.
    case 0xC0CB5A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:82 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC0CB5B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0CA4E.asm:83 CLC
    case 0xC0CB5D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:84 LDA @VIRTUAL06
    case 0xC0CB5E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0CA4E.asm:85 SBC @VIRTUAL0A
    case 0xC0CB60: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // src/unknown/C0/C0CA4E.asm:86 LDA @VIRTUAL06+2
    case 0xC0CB62: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C0CA4E.asm:87 SBC @VIRTUAL0A+2
    case 0xC0CB64: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0CA4E.asm:88 BRANCHLTEQS @UNKNOWN16
    case 0xC0CB66: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:88 BRANCHLTEQS @UNKNOWN16
    case 0xC0CB68: cpu.execute_instruction<0x10>(0x00001D, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0CA4E.asm:88 BRANCHLTEQS @UNKNOWN16
    case 0xC0CB6A: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:88 BRANCHLTEQS @UNKNOWN16
    case 0xC0CB6C: cpu.execute_instruction<0x30>(0x000019, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:89 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CB6E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:89 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CB70: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:89 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CB72: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:89 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CB74: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0CA4E.asm:90 SEC
    case 0xC0CB76: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:91 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CB77: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:91 NEGATE_INT_ASSIGN @VIRTUAL0A
    // Overlapping static entry reached from 0xC0CB77.
    case 0xC0CB79: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0CA4E.asm:91 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CB7A: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:91 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CB7C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:91 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CB7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:91 NEGATE_INT_ASSIGN @VIRTUAL0A
    // Overlapping static entry reached from 0xC0CB7E.
    case 0xC0CB80: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:91 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CB81: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:91 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CB83: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0CA4E.asm:92 BRA @UNKNOWN17
    case 0xC0CB85: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:94 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CB87: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:94 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CB89: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:94 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CB8B: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:94 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CB8D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0CA4E.asm:96 LDA CURRENT_SCRIPT_SLOT
    case 0xC0CB8F: cpu.execute_instruction<0xAD>(0x001A3C, 3); return true;
    // src/unknown/C0/C0CA4E.asm:97 ASL
    case 0xC0CB92: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:98 PHA
    case 0xC0CB93: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:99 SEP #PROC_FLAGS::ACCUM8
    case 0xC0CB94: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0CA4E.asm:100 LDA #16
    case 0xC0CB96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x00E210, 3); return true;
    // src/unknown/C0/C0CA4E.asm:101 SEP #PROC_FLAGS::INDEX8
    case 0xC0CB98: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C0/C0CA4E.asm:101 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC0CB96.
    case 0xC0CB99: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C0/C0CA4E.asm:102 TAY
    case 0xC0CB9A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:103 REP #PROC_FLAGS::ACCUM8
    case 0xC0CB9B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:104 MOVE_INT1632 @LOCAL03, @VIRTUAL06
    case 0xC0CB9D: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:104 MOVE_INT1632 @LOCAL03, @VIRTUAL06
    case 0xC0CB9F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:104 MOVE_INT1632 @LOCAL03, @VIRTUAL06
    case 0xC0CBA1: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C0/C0CA4E.asm:105 JSL ASL32_ENTRY2
    case 0xC0CBA3: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // src/unknown/C0/C0CA4E.asm:106 REP #PROC_FLAGS::INDEX8
    case 0xC0CBA7: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C0/C0CA4E.asm:107 JSL DIVISION32
    case 0xC0CBA9: cpu.execute_instruction<0x22>(0xC090E1, 4); return true;
    // src/unknown/C0/C0CA4E.asm:108 LDA @VIRTUAL06
    case 0xC0CBAD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0CA4E.asm:109 PLX
    case 0xC0CBAF: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:110 STA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC0CBB0: cpu.execute_instruction<0x9D>(0x001368, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0CA4E.asm:111 END_C_FUNCTION
    case 0xC0CBB3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0CA4E.asm:111 END_C_FUNCTION
    case 0xC0CBB4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0CBD3.asm (unresolved).
bool execute_unresolved_c0_c0cbd3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0CBD3.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0CBB5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0CBD3.asm:7 END_STACK_VARS
    case 0xC0CBB7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0CBD3.asm:7 END_STACK_VARS
    case 0xC0CBB8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0CBD3.asm:7 END_STACK_VARS
    case 0xC0CBB9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CBD3.asm:7 END_STACK_VARS
    case 0xC0CBBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CBD3.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0CBBA.
    case 0xC0CBBC: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0CBD3.asm:7 END_STACK_VARS
    case 0xC0CBBD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0CBD3.asm:7 END_STACK_VARS
    case 0xC0CBBE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0CBD3.asm:8 STA @LOCAL00
    case 0xC0CBBF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0CBD3.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC0CBBC.
    case 0xC0CBC0: cpu.execute_instruction<0x0E>(0x003CAD, 3); return true;
    // src/unknown/C0/C0CBD3.asm:9 LDA CURRENT_SCRIPT_SLOT
    case 0xC0CBC1: cpu.execute_instruction<0xAD>(0x001A3C, 3); return true;
    // src/unknown/C0/C0CBD3.asm:9 LDA CURRENT_SCRIPT_SLOT
    // Overlapping static entry reached from 0xC0CBC0.
    case 0xC0CBC3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0CBD3.asm:10 ASL
    case 0xC0CBC4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CBD3.asm:11 PHA
    case 0xC0CBC5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0CBD3.asm:12 LDA CURRENT_ENTITY_SLOT
    case 0xC0CBC6: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0CBD3.asm:13 ASL
    case 0xC0CBC9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CBD3.asm:14 TAX
    case 0xC0CBCA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CBD3.asm:15 LDA ENTITY_MOVEMENT_SPEEDS,X
    case 0xC0CBCB: cpu.execute_instruction<0xBD>(0x002F30, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C0/C0CBD3.asm:16 STORE_INT1632 @VIRTUAL0A
    case 0xC0CBCE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C0/C0CBD3.asm:16 STORE_INT1632 @VIRTUAL0A
    case 0xC0CBD0: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/unknown/C0/C0CBD3.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC0CBD2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0CBD3.asm:18 LDA #8
    case 0xC0CBD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/unknown/C0/C0CBD3.asm:19 SEP #PROC_FLAGS::INDEX8
    case 0xC0CBD6: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C0/C0CBD3.asm:19 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC0CBD4.
    case 0xC0CBD7: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C0/C0CBD3.asm:20 TAY
    case 0xC0CBD8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0CBD3.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC0CBD9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/unknown/C0/C0CBD3.asm:22 MOVE_INT1632 @LOCAL00, @VIRTUAL06
    case 0xC0CBDB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C0/C0CBD3.asm:22 MOVE_INT1632 @LOCAL00, @VIRTUAL06
    case 0xC0CBDD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C0/C0CBD3.asm:22 MOVE_INT1632 @LOCAL00, @VIRTUAL06
    case 0xC0CBDF: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C0/C0CBD3.asm:23 JSL ASL32_ENTRY2
    case 0xC0CBE1: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // src/unknown/C0/C0CBD3.asm:24 REP #PROC_FLAGS::INDEX8
    case 0xC0CBE5: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C0/C0CBD3.asm:25 JSL DIVISION32
    case 0xC0CBE7: cpu.execute_instruction<0x22>(0xC090E1, 4); return true;
    // src/unknown/C0/C0CBD3.asm:26 LDA @VIRTUAL06
    case 0xC0CBEB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0CBD3.asm:27 PLX
    case 0xC0CBED: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0CBD3.asm:28 STA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC0CBEE: cpu.execute_instruction<0x9D>(0x001368, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0CBD3.asm:29 END_C_FUNCTION
    case 0xC0CBF1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0CBD3.asm:29 END_C_FUNCTION
    case 0xC0CBF2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0CC11.asm (unresolved).
bool execute_unresolved_c0_c0cc11_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0CC11.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0CBF3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0CC11.asm:7 END_STACK_VARS
    case 0xC0CBF5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0CC11.asm:7 END_STACK_VARS
    case 0xC0CBF6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CC11.asm:7 END_STACK_VARS
    case 0xC0CBF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CC11.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0CBF7.
    case 0xC0CBF9: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0CC11.asm:7 END_STACK_VARS
    case 0xC0CBFA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC0CBFB: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0CC11.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0CBF9.
    case 0xC0CBFD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:9 STA @VIRTUAL04
    case 0xC0CBFE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0CC11.asm:10 ASL
    case 0xC0CC00: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:11 TAX
    case 0xC0CC01: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:12 LDA ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC0CC02: cpu.execute_instruction<0xBD>(0x000FBC, 3); return true;
    // src/unknown/C0/C0CC11.asm:13 SEC
    case 0xC0CC05: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:14 SBC ENTITY_ABS_X_TABLE,X
    case 0xC0CC06: cpu.execute_instruction<0xFD>(0x000B84, 3); return true;
    // src/unknown/C0/C0CC11.asm:15 STA @LOCAL01
    case 0xC0CC09: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:16 STA @VIRTUAL02
    case 0xC0CC0B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0CC11.asm:17 LDA #0
    case 0xC0CC0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0CC11.asm:17 LDA #0
    // Overlapping static entry reached from 0xC0CC0D.
    case 0xC0CC0F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0CC11.asm:18 CLC
    case 0xC0CC10: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:19 SBC @VIRTUAL02
    case 0xC0CC11: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0CC11.asm:20 BRANCHLTEQS @UNKNOWN2
    case 0xC0CC13: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0CC11.asm:20 BRANCHLTEQS @UNKNOWN2
    case 0xC0CC15: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0CC11.asm:20 BRANCHLTEQS @UNKNOWN2
    case 0xC0CC17: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0CC11.asm:20 BRANCHLTEQS @UNKNOWN2
    case 0xC0CC19: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // src/unknown/C0/C0CC11.asm:21 LDA @LOCAL01
    case 0xC0CC1B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:22 EOR #.LOWORD(-1)
    case 0xC0CC1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0CC11.asm:22 EOR #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0CC1D.
    case 0xC0CC1F: cpu.execute_instruction<0xFF>(0x02801A, 4); return true;
    // src/unknown/C0/C0CC11.asm:23 INC
    case 0xC0CC20: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:24 BRA @UNKNOWN3
    case 0xC0CC21: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C0/C0CC11.asm:26 LDA @LOCAL01
    case 0xC0CC23: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:28 TAY
    case 0xC0CC25: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:29 LDA @VIRTUAL04
    case 0xC0CC26: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0CC11.asm:30 ASL
    case 0xC0CC28: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:31 TAX
    case 0xC0CC29: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:32 LDA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC0CC2A: cpu.execute_instruction<0xBD>(0x000FF8, 3); return true;
    // src/unknown/C0/C0CC11.asm:33 SEC
    case 0xC0CC2D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:34 SBC ENTITY_ABS_Y_TABLE,X
    case 0xC0CC2E: cpu.execute_instruction<0xFD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0CC11.asm:35 STA @LOCAL01
    case 0xC0CC31: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:36 STA @VIRTUAL02
    case 0xC0CC33: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0CC11.asm:37 LDA #0
    case 0xC0CC35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0CC11.asm:37 LDA #0
    // Overlapping static entry reached from 0xC0CC35.
    case 0xC0CC37: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0CC11.asm:38 CLC
    case 0xC0CC38: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:39 SBC @VIRTUAL02
    case 0xC0CC39: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0CC11.asm:40 BRANCHLTEQS @UNKNOWN6
    case 0xC0CC3B: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0CC11.asm:40 BRANCHLTEQS @UNKNOWN6
    case 0xC0CC3D: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0CC11.asm:40 BRANCHLTEQS @UNKNOWN6
    case 0xC0CC3F: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0CC11.asm:40 BRANCHLTEQS @UNKNOWN6
    case 0xC0CC41: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // src/unknown/C0/C0CC11.asm:41 LDA @LOCAL01
    case 0xC0CC43: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:42 EOR #.LOWORD(-1)
    case 0xC0CC45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0CC11.asm:42 EOR #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0CC45.
    case 0xC0CC47: cpu.execute_instruction<0xFF>(0x02801A, 4); return true;
    // src/unknown/C0/C0CC11.asm:43 INC
    case 0xC0CC48: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:44 BRA @UNKNOWN7
    case 0xC0CC49: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C0/C0CC11.asm:46 LDA @LOCAL01
    case 0xC0CC4B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:48 STA @VIRTUAL02
    case 0xC0CC4D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0CC11.asm:49 TYA
    case 0xC0CC4F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:50 CMP @VIRTUAL02
    case 0xC0CC50: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0CC11.asm:51 BLTEQ @UNKNOWN8
    case 0xC0CC52: cpu.execute_instruction<0x90>(0x000015, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0CC11.asm:51 BLTEQ @UNKNOWN8
    case 0xC0CC54: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C0/C0CC11.asm:52 TYA
    case 0xC0CC56: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:53 STA @LOCAL01
    case 0xC0CC57: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:54 LDA @VIRTUAL04
    case 0xC0CC59: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0CC11.asm:55 ASL
    case 0xC0CC5B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:56 TAX
    case 0xC0CC5C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:57 LDA ENTITY_DELTA_X_TABLE,X
    case 0xC0CC5D: cpu.execute_instruction<0xBD>(0x000CEC, 3); return true;
    // src/unknown/C0/C0CC11.asm:58 STA @LOCAL00 + fixed_point::integer
    case 0xC0CC60: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0CC11.asm:59 LDA ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC0CC62: cpu.execute_instruction<0xBD>(0x000DA0, 3); return true;
    // src/unknown/C0/C0CC11.asm:60 STA @LOCAL00 + fixed_point::fraction
    case 0xC0CC65: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0CC11.asm:61 BRA @UNKNOWN9
    case 0xC0CC67: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:63 LDA @VIRTUAL02
    case 0xC0CC69: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0CC11.asm:64 STA @LOCAL01
    case 0xC0CC6B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:65 LDA @VIRTUAL04
    case 0xC0CC6D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0CC11.asm:66 ASL
    case 0xC0CC6F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:67 TAX
    case 0xC0CC70: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:68 LDA ENTITY_DELTA_Y_TABLE,X
    case 0xC0CC71: cpu.execute_instruction<0xBD>(0x000D28, 3); return true;
    // src/unknown/C0/C0CC11.asm:69 STA @LOCAL00 + fixed_point::integer
    case 0xC0CC74: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0CC11.asm:70 LDA ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC0CC76: cpu.execute_instruction<0xBD>(0x000DDC, 3); return true;
    // src/unknown/C0/C0CC11.asm:71 STA @LOCAL00 + fixed_point::fraction
    case 0xC0CC79: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CC11.asm:73 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CC7B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CC11.asm:73 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CC7D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CC11.asm:73 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CC7F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CC11.asm:73 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CC81: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0CC11.asm:74 SEP #PROC_FLAGS::INDEX8
    case 0xC0CC83: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C0/C0CC11.asm:75 LDY #16
    case 0xC0CC85: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00A510, 3); return true;
    // src/unknown/C0/C0CC11.asm:76 LDA @LOCAL01
    case 0xC0CC87: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:76 LDA @LOCAL01
    // Overlapping static entry reached from 0xC0CC85.
    case 0xC0CC88: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/unknown/C0/C0CC11.asm:77 JSL ASL16_ENTRY2
    case 0xC0CC89: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/unknown/C0/C0CC11.asm:77 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC0CC88.
    case 0xC0CC8A: cpu.execute_instruction<0x20>(0x00C092, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C0/C0CC11.asm:78 STORE_INT1632 @VIRTUAL06
    case 0xC0CC8D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C0/C0CC11.asm:78 STORE_INT1632 @VIRTUAL06
    case 0xC0CC8F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C0/C0CC11.asm:79 REP #PROC_FLAGS::INDEX8
    case 0xC0CC91: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C0/C0CC11.asm:80 JSL DIVISION32
    case 0xC0CC93: cpu.execute_instruction<0x22>(0xC090E1, 4); return true;
    // src/unknown/C0/C0CC11.asm:81 LDA @VIRTUAL06
    case 0xC0CC97: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0CC11.asm:82 STA @LOCAL01
    case 0xC0CC99: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:83 BNE @UNKNOWN10
    case 0xC0CC9B: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0CC11.asm:84 LDA #1
    case 0xC0CC9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0CC11.asm:84 LDA #1
    // Overlapping static entry reached from 0xC0CC9D.
    case 0xC0CC9F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0CC11.asm:85 STA @LOCAL01
    case 0xC0CCA0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:87 LDA CURRENT_SCRIPT_SLOT
    case 0xC0CCA2: cpu.execute_instruction<0xAD>(0x001A3C, 3); return true;
    // src/unknown/C0/C0CC11.asm:88 ASL
    case 0xC0CCA5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:89 TAX
    case 0xC0CCA6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:90 LDA @LOCAL01
    case 0xC0CCA7: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:91 STA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC0CCA9: cpu.execute_instruction<0x9D>(0x001368, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0CC11.asm:92 END_C_FUNCTION
    case 0xC0CCAC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0CC11.asm:92 END_C_FUNCTION
    case 0xC0CCAD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0CCCC.asm (unresolved).
bool execute_unresolved_c0_c0cccc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0CCCC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0CCAE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0CCCC.asm:8 END_STACK_VARS
    case 0xC0CCB0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0CCCC.asm:8 END_STACK_VARS
    case 0xC0CCB1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CCCC.asm:8 END_STACK_VARS
    case 0xC0CCB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CCCC.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0CCB2.
    case 0xC0CCB4: cpu.execute_instruction<0xFF>(0x38AC5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0CCCC.asm:8 END_STACK_VARS
    case 0xC0CCB5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:9 LDY CURRENT_ENTITY_SLOT
    case 0xC0CCB6: cpu.execute_instruction<0xAC>(0x001A38, 3); return true;
    // src/unknown/C0/C0CCCC.asm:9 LDY CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0CCB4.
    case 0xC0CCB8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:10 STY @LOCAL02
    case 0xC0CCB9: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C0CCCC.asm:11 TYA
    case 0xC0CCBB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:12 ASL
    case 0xC0CCBC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:13 TAX
    case 0xC0CCBD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:14 STX @LOCAL01
    case 0xC0CCBE: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C0CCCC.asm:15 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0CCC0: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C0CCCC.asm:16 STA ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC0CCC3: cpu.execute_instruction<0x9D>(0x000FBC, 3); return true;
    // src/unknown/C0/C0CCCC.asm:17 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0CCC6: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0CCCC.asm:18 CLC
    case 0xC0CCC9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:19 ADC #16
    case 0xC0CCCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C0/C0CCCC.asm:19 ADC #16
    // Overlapping static entry reached from 0xC0CCCA.
    case 0xC0CCCC: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0CCCC.asm:20 STA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC0CCCD: cpu.execute_instruction<0x9D>(0x000FF8, 3); return true;
    // src/unknown/C0/C0CCCC.asm:21 STZ @LOCAL00 + fixed_point::fraction
    case 0xC0CCD0: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/unknown/C0/C0CCCC.asm:22 LDA ENTITY_MOVEMENT_SPEEDS,X
    case 0xC0CCD2: cpu.execute_instruction<0xBD>(0x002F30, 3); return true;
    // src/unknown/C0/C0CCCC.asm:23 LSR
    case 0xC0CCD5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:24 LSR
    case 0xC0CCD6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:25 LSR
    case 0xC0CCD7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:26 LSR
    case 0xC0CCD8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:27 STA @LOCAL00 + fixed_point::integer
    case 0xC0CCD9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CCCC.asm:28 MOVE_INT_CONSTANT $64800, @VIRTUAL0A
    case 0xC0CCDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004800, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CCCC.asm:28 MOVE_INT_CONSTANT $64800, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0CCDB.
    case 0xC0CCDD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0CCCC.asm:28 MOVE_INT_CONSTANT $64800, @VIRTUAL0A
    case 0xC0CCDE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CCCC.asm:28 MOVE_INT_CONSTANT $64800, @VIRTUAL0A
    case 0xC0CCE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CCCC.asm:28 MOVE_INT_CONSTANT $64800, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0CCE0.
    case 0xC0CCE2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0CCCC.asm:28 MOVE_INT_CONSTANT $64800, @VIRTUAL0A
    case 0xC0CCE3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CCCC.asm:29 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0CCE5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CCCC.asm:29 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0CCE7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CCCC.asm:29 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0CCE9: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CCCC.asm:29 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0CCEB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0CCCC.asm:30 JSL DIVISION32
    case 0xC0CCED: cpu.execute_instruction<0x22>(0xC090E1, 4); return true;
    // src/unknown/C0/C0CCCC.asm:31 LDA @VIRTUAL06
    case 0xC0CCF1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0CCCC.asm:32 XBA
    case 0xC0CCF3: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:33 AND #$FF00
    case 0xC0CCF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C0CCCC.asm:33 AND #$FF00
    // Overlapping static entry reached from 0xC0CCF4.
    case 0xC0CCF6: cpu.execute_instruction<0xFF>(0x0F809D, 4); return true;
    // src/unknown/C0/C0CCCC.asm:34 STA ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC0CCF7: cpu.execute_instruction<0x9D>(0x000F80, 3); return true;
    // src/unknown/C0/C0CCCC.asm:35 JSL RAND
    case 0xC0CCFA: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/unknown/C0/C0CCCC.asm:36 AND #$0001
    case 0xC0CCFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0CCCC.asm:36 AND #$0001
    // Overlapping static entry reached from 0xC0CCFE.
    case 0xC0CD00: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0CCCC.asm:37 BEQ @UNKNOWN0
    case 0xC0CD01: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C0CCCC.asm:38 LDX @LOCAL01
    case 0xC0CD03: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C0CCCC.asm:39 STZ ENTITY_DIRECTIONS,X
    case 0xC0CD05: cpu.execute_instruction<0x9E>(0x002EF4, 3); return true;
    // src/unknown/C0/C0CCCC.asm:40 BRA @UNKNOWN1
    case 0xC0CD08: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C0/C0CCCC.asm:42 LDA #DIRECTION::DOWN
    case 0xC0CD0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C0/C0CCCC.asm:42 LDA #DIRECTION::DOWN
    // Overlapping static entry reached from 0xC0CD0A.
    case 0xC0CD0C: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C0CCCC.asm:43 LDX @LOCAL01
    case 0xC0CD0D: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C0CCCC.asm:44 STA ENTITY_DIRECTIONS,X
    case 0xC0CD0F: cpu.execute_instruction<0x9D>(0x002EF4, 3); return true;
    // src/unknown/C0/C0CCCC.asm:44 STA ENTITY_DIRECTIONS,X
    // Overlapping static entry reached from 0xC0CD69.
    case 0xC0CD10: cpu.execute_instruction<0xF4>(0x00A42E, 3); return true;
    // src/unknown/C0/C0CCCC.asm:46 LDY @LOCAL02
    case 0xC0CD12: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C0/C0CCCC.asm:46 LDY @LOCAL02
    // Overlapping static entry reached from 0xC0CD10.
    case 0xC0CD13: cpu.execute_instruction<0x14>(0x000098, 2); return true;
    // src/unknown/C0/C0CCCC.asm:47 TYA
    case 0xC0CD14: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:48 ASL
    case 0xC0CD15: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:49 TAX
    case 0xC0CD16: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:50 LDA ENTITY_DIRECTIONS,X
    case 0xC0CD17: cpu.execute_instruction<0xBD>(0x002EF4, 3); return true;
    // src/unknown/C0/C0CCCC.asm:51 CMP #DIRECTION::DOWN
    case 0xC0CD1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0CCCC.asm:51 CMP #DIRECTION::DOWN
    // Overlapping static entry reached from 0xC0CD1A.
    case 0xC0CD1C: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C0CCCC.asm:52 BCS @UNKNOWN2
    case 0xC0CD1D: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C0CCCC.asm:53 STZ ENTITY_UNKNOWN_2DC6,X
    case 0xC0CD1F: cpu.execute_instruction<0x9E>(0x0031C4, 3); return true;
    // src/unknown/C0/C0CCCC.asm:54 BRA @UNKNOWN3
    case 0xC0CD22: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C0CCCC.asm:56 LDA #.LOWORD(-1)
    case 0xC0CD24: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0CCCC.asm:56 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0CD24.
    case 0xC0CD26: cpu.execute_instruction<0xFF>(0x31C49D, 4); return true;
    // src/unknown/C0/C0CCCC.asm:57 STA ENTITY_UNKNOWN_2DC6,X
    case 0xC0CD27: cpu.execute_instruction<0x9D>(0x0031C4, 3); return true;
    // src/unknown/C0/C0CCCC.asm:59 TYA
    case 0xC0CD2A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:60 ASL
    case 0xC0CD2B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:61 TAX
    case 0xC0CD2C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:62 STZ ENTITY_SCRIPT_VAR4_TABLE,X
    case 0xC0CD2D: cpu.execute_instruction<0x9E>(0x000F44, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0CCCC.asm:63 END_C_FUNCTION
    case 0xC0CD30: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0CCCC.asm:63 END_C_FUNCTION
    case 0xC0CD31: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0CD50-jp.asm (unresolved).
bool execute_unresolved_c0_c0cd50_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0CD32: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:16 END_STACK_VARS
    case 0xC0CD34: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:16 END_STACK_VARS
    case 0xC0CD35: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:16 END_STACK_VARS
    case 0xC0CD36: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CC, 2); else cpu.execute_instruction<0x69>(0x00FFCC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC0CD36.
    case 0xC0CD38: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:16 END_STACK_VARS
    case 0xC0CD39: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0CD50-jp.asm:17 LDA CURRENT_ENTITY_SLOT
    case 0xC0CD3A: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0CD50-jp.asm:17 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0CD38.
    case 0xC0CD3C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0CD50-jp.asm:18 STA @LOCAL09
    case 0xC0CD3D: cpu.execute_instruction<0x85>(0x000032, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:19 ASL
    case 0xC0CD3F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CD50-jp.asm:20 TAX
    case 0xC0CD40: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CD50-jp.asm:21 LDA ENTITY_UNKNOWN_2DC6,X
    case 0xC0CD41: cpu.execute_instruction<0xBD>(0x0031C4, 3); return true;
    // src/unknown/C0/C0CD50-jp.asm:22 STA @VIRTUAL04
    case 0xC0CD44: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:23 BNE @UNKNOWN0
    case 0xC0CD46: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:24 LDA ENTITY_SCRIPT_VAR4_TABLE,X
    case 0xC0CD48: cpu.execute_instruction<0xBD>(0x000F44, 3); return true;
    // src/unknown/C0/C0CD50-jp.asm:25 CLC
    case 0xC0CD4B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CD50-jp.asm:26 ADC ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC0CD4C: cpu.execute_instruction<0x7D>(0x000F80, 3); return true;
    // src/unknown/C0/C0CD50-jp.asm:27 STA @VIRTUAL02
    case 0xC0CD4F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:28 BRA @UNKNOWN1
    case 0xC0CD51: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:30 LDA ENTITY_SCRIPT_VAR4_TABLE,X
    case 0xC0CD53: cpu.execute_instruction<0xBD>(0x000F44, 3); return true;
    // src/unknown/C0/C0CD50-jp.asm:31 SEC
    case 0xC0CD56: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CD50-jp.asm:32 SBC ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC0CD57: cpu.execute_instruction<0xFD>(0x000F80, 3); return true;
    // src/unknown/C0/C0CD50-jp.asm:33 STA @VIRTUAL02
    case 0xC0CD5A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:35 LDA @LOCAL09
    case 0xC0CD5C: cpu.execute_instruction<0xA5>(0x000032, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:36 ASL
    case 0xC0CD5E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CD50-jp.asm:37 TAY
    case 0xC0CD5F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0CD50-jp.asm:38 STY @LOCAL09
    case 0xC0CD60: cpu.execute_instruction<0x84>(0x000032, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:39 LDA @VIRTUAL02
    case 0xC0CD62: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:40 STA ENTITY_SCRIPT_VAR4_TABLE,Y
    case 0xC0CD64: cpu.execute_instruction<0x99>(0x000F44, 3); return true;
    // src/unknown/C0/C0CD50-jp.asm:41 LDX #$1000
    case 0xC0CD67: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x001000, 3); return true;
    // src/unknown/C0/C0CD50-jp.asm:41 LDX #$1000
    // Overlapping static entry reached from 0xC0CD67.
    case 0xC0CD69: cpu.execute_instruction<0x10>(0x0000A5, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:42 LDA @VIRTUAL02
    case 0xC0CD6A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:42 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC0CD69.
    case 0xC0CD6B: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:43 JSL UNKNOWN_C41FFF
    case 0xC0CD6C: cpu.execute_instruction<0x22>(0xC41F4B, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:44 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0CD70: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:44 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0CD72: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:44 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0CD74: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:44 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0CD76: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:45 STZ @LOCAL04 + fixed_point::fraction
    case 0xC0CD78: cpu.execute_instruction<0x64>(0x00001E, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:46 STZ @LOCAL03 + fixed_point::fraction
    case 0xC0CD7A: cpu.execute_instruction<0x64>(0x00001A, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:47 LDA @LOCAL00 + fixed_point::integer
    case 0xC0CD7C: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:48 STA @LOCAL03 + fixed_point::integer
    case 0xC0CD7E: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:49 LDA @LOCAL00 + fixed_point::fraction
    case 0xC0CD80: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:50 STA @LOCAL04 + fixed_point::integer
    case 0xC0CD82: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:51 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0CD84: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:51 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0CD86: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:51 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0CD88: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:51 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0CD8A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:52 ASR8_INT @VIRTUAL06
    case 0xC0CD8C: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:52 ASR8_INT @VIRTUAL06
    case 0xC0CD8E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:52 ASR8_INT @VIRTUAL06
    case 0xC0CD90: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:52 ASR8_INT @VIRTUAL06
    case 0xC0CD92: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:52 ASR8_INT @VIRTUAL06
    case 0xC0CD94: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:52 ASR8_INT @VIRTUAL06
    case 0xC0CD96: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:52 ASR8_INT @VIRTUAL06
    case 0xC0CD98: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:52 ASR8_INT @VIRTUAL06
    case 0xC0CD9A: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:52 ASR8_INT @VIRTUAL06
    case 0xC0CD9C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:53 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0CD9E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:53 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0CDA0: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:53 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0CDA2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:53 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0CDA4: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:54 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0CDA6: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:54 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0CDA8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:54 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0CDAA: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:54 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0CDAC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:55 ASR8_INT @VIRTUAL06
    case 0xC0CDAE: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:55 ASR8_INT @VIRTUAL06
    case 0xC0CDB0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:55 ASR8_INT @VIRTUAL06
    case 0xC0CDB2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:55 ASR8_INT @VIRTUAL06
    case 0xC0CDB4: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:55 ASR8_INT @VIRTUAL06
    case 0xC0CDB6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:55 ASR8_INT @VIRTUAL06
    case 0xC0CDB8: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:55 ASR8_INT @VIRTUAL06
    case 0xC0CDBA: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:55 ASR8_INT @VIRTUAL06
    case 0xC0CDBC: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:55 ASR8_INT @VIRTUAL06
    case 0xC0CDBE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:56 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0CDC0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:56 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0CDC2: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:56 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0CDC4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:56 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0CDC6: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:57 STZ @LOCAL06 + fixed_point::fraction
    case 0xC0CDC8: cpu.execute_instruction<0x64>(0x000026, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:58 STZ @LOCAL05 + fixed_point::fraction
    case 0xC0CDCA: cpu.execute_instruction<0x64>(0x000022, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:59 LDY @LOCAL09
    case 0xC0CDCC: cpu.execute_instruction<0xA4>(0x000032, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:60 LDA ENTITY_SCRIPT_VAR6_TABLE,Y
    case 0xC0CDCE: cpu.execute_instruction<0xB9>(0x000FBC, 3); return true;
    // src/unknown/C0/C0CD50-jp.asm:61 STA @LOCAL05 + fixed_point::integer
    case 0xC0CDD1: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:62 LDA ENTITY_SCRIPT_VAR7_TABLE,Y
    case 0xC0CDD3: cpu.execute_instruction<0xB9>(0x000FF8, 3); return true;
    // src/unknown/C0/C0CD50-jp.asm:63 STA @LOCAL06 + fixed_point::integer
    case 0xC0CDD6: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:64 LDA ENTITY_ABS_X_TABLE,Y
    case 0xC0CDD8: cpu.execute_instruction<0xB9>(0x000B84, 3); return true;
    // src/unknown/C0/C0CD50-jp.asm:65 STA @LOCAL01 + fixed_point::integer
    case 0xC0CDDB: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:66 LDA ENTITY_ABS_X_FRACTION_TABLE,Y
    case 0xC0CDDD: cpu.execute_instruction<0xB9>(0x000C38, 3); return true;
    // src/unknown/C0/C0CD50-jp.asm:67 STA @LOCAL01 + fixed_point::fraction
    case 0xC0CDE0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:68 LDA ENTITY_ABS_Y_TABLE,Y
    case 0xC0CDE2: cpu.execute_instruction<0xB9>(0x000BC0, 3); return true;
    // src/unknown/C0/C0CD50-jp.asm:69 STA @LOCAL02 + fixed_point::integer
    case 0xC0CDE5: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:70 LDA ENTITY_ABS_Y_FRACTION_TABLE,Y
    case 0xC0CDE7: cpu.execute_instruction<0xB9>(0x000C74, 3); return true;
    // src/unknown/C0/C0CD50-jp.asm:71 STA @LOCAL02 + fixed_point::fraction
    case 0xC0CDEA: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:72 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC0CDEC: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:72 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC0CDEE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:72 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC0CDF0: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:72 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC0CDF2: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:73 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0CDF4: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:73 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0CDF6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:73 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0CDF8: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:73 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0CDFA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:74 CLC
    case 0xC0CDFC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:75 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CDFD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:75 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CDFF: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:75 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE01: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:75 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE03: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:75 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE05: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:75 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE07: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:76 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CE09: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:76 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CE0B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:76 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CE0D: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:76 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CE0F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:77 SEC
    case 0xC0CE11: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:78 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE12: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:78 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE14: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:78 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE16: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:78 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE18: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:78 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE1A: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:78 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE1C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:79 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC0CE1E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:79 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC0CE20: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:79 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC0CE22: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:79 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC0CE24: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:80 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC0CE26: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:80 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC0CE28: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:80 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC0CE2A: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:80 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC0CE2C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:81 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC0CE2E: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:81 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC0CE30: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:81 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC0CE32: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:81 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC0CE34: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:82 CLC
    case 0xC0CE36: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:83 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE37: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:83 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE39: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:83 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE3B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:83 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE3D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:83 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE3F: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:83 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE41: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:83 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0CE93.
    case 0xC0CE42: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:84 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC0CE43: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:84 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC0CE45: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:84 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC0CE47: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:84 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC0CE49: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:85 SEC
    case 0xC0CE4B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:86 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE4C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:86 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE4E: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:86 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE50: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:86 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE52: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:86 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE54: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:86 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE56: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:87 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC0CE58: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:87 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC0CE5A: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:87 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC0CE5C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:87 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC0CE5E: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:88 LDA @LOCAL07 + fixed_point::integer
    case 0xC0CE60: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:89 STA ENTITY_DELTA_X_TABLE,Y
    case 0xC0CE62: cpu.execute_instruction<0x99>(0x000CEC, 3); return true;
    // src/unknown/C0/C0CD50-jp.asm:90 LDA @LOCAL07 + fixed_point::fraction
    case 0xC0CE65: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:91 STA ENTITY_DELTA_X_FRACTION_TABLE,Y
    case 0xC0CE67: cpu.execute_instruction<0x99>(0x000DA0, 3); return true;
    // src/unknown/C0/C0CD50-jp.asm:92 LDA @LOCAL08 + fixed_point::integer
    case 0xC0CE6A: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:93 STA ENTITY_DELTA_Y_TABLE,Y
    case 0xC0CE6C: cpu.execute_instruction<0x99>(0x000D28, 3); return true;
    // src/unknown/C0/C0CD50-jp.asm:94 LDA @LOCAL08
    case 0xC0CE6F: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:95 STA ENTITY_DELTA_Y_FRACTION_TABLE,Y
    case 0xC0CE71: cpu.execute_instruction<0x99>(0x000DDC, 3); return true;
    // src/unknown/C0/C0CD50-jp.asm:96 LDA @VIRTUAL04
    case 0xC0CE74: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:97 BNE @UNKNOWN4
    case 0xC0CE76: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:98 LDA @VIRTUAL02
    case 0xC0CE78: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:99 CLC
    case 0xC0CE7A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CD50-jp.asm:100 ADC #$4000
    case 0xC0CE7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x004000, 3); return true;
    // src/unknown/C0/C0CD50-jp.asm:100 ADC #$4000
    // Overlapping static entry reached from 0xC0CE7B.
    case 0xC0CE7D: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C0CD50-jp.asm:101 BRA @UNKNOWN5
    case 0xC0CE7E: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:103 LDA @VIRTUAL02
    case 0xC0CE80: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0CD50-jp.asm:104 SEC
    case 0xC0CE82: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CD50-jp.asm:105 SBC #$4000
    case 0xC0CE83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x004000, 3); return true;
    // src/unknown/C0/C0CD50-jp.asm:105 SBC #$4000
    // Overlapping static entry reached from 0xC0CE83.
    case 0xC0CE85: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:107 END_C_FUNCTION
    case 0xC0CE86: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0CD50-jp.asm:107 END_C_FUNCTION
    case 0xC0CE87: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0CEBE.asm (unresolved).
bool execute_unresolved_c0_c0cebe_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0CEBE.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0CE88: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0CEBE.asm:9 END_STACK_VARS
    case 0xC0CE8A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0CEBE.asm:9 END_STACK_VARS
    case 0xC0CE8B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0CEBE.asm:9 END_STACK_VARS
    case 0xC0CE8C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CEBE.asm:9 END_STACK_VARS
    case 0xC0CE8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CEBE.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0CE8D.
    case 0xC0CE8F: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0CEBE.asm:9 END_STACK_VARS
    case 0xC0CE90: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0CEBE.asm:9 END_STACK_VARS
    case 0xC0CE91: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:10 STA @LOCAL01
    case 0xC0CE92: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0CEBE.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xC0CE8F.
    case 0xC0CE93: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/unknown/C0/C0CEBE.asm:11 LDA CURRENT_ENTITY_SLOT
    case 0xC0CE94: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0CEBE.asm:11 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0CE93.
    case 0xC0CE95: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:11 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0CE95.
    case 0xC0CE96: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:12 STA @LOCAL00
    case 0xC0CE97: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0CEBE.asm:13 ASL
    case 0xC0CE99: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:14 TAX
    case 0xC0CE9A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:15 LDA ENTITY_SCRIPT_VAR4_TABLE,X
    case 0xC0CE9B: cpu.execute_instruction<0xBD>(0x000F44, 3); return true;
    // src/unknown/C0/C0CEBE.asm:16 STA @VIRTUAL02
    case 0xC0CE9E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0CEBE.asm:17 STA @VIRTUAL04
    case 0xC0CEA0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0CEBE.asm:18 LDA @LOCAL01
    case 0xC0CEA2: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0CEBE.asm:19 CMP @VIRTUAL02
    case 0xC0CEA4: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C0CEBE.asm:20 BEQ @UNKNOWN5
    case 0xC0CEA6: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // src/unknown/C0/C0CEBE.asm:21 CMP @VIRTUAL02
    case 0xC0CEA8: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0CEBE.asm:22 BLTEQ @UNKNOWN1
    case 0xC0CEAA: cpu.execute_instruction<0x90>(0x000014, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0CEBE.asm:22 BLTEQ @UNKNOWN1
    case 0xC0CEAC: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/unknown/C0/C0CEBE.asm:23 SEC
    case 0xC0CEAE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:24 SBC @VIRTUAL02
    case 0xC0CEAF: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0CEBE.asm:25 CMP #$8000
    case 0xC0CEB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C0CEBE.asm:25 CMP #$8000
    // Overlapping static entry reached from 0xC0CEB1.
    case 0xC0CEB3: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/C0/C0CEBE.asm:26 BCS @UNKNOWN0
    case 0xC0CEB4: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C0CEBE.asm:27 LDX #0
    case 0xC0CEB6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0CEBE.asm:27 LDX #0
    // Overlapping static entry reached from 0xC0CEB6.
    case 0xC0CEB8: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0CEBE.asm:28 BRA @UNKNOWN3
    case 0xC0CEB9: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C0/C0CEBE.asm:30 LDX #.LOWORD(-1)
    case 0xC0CEBB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0CEBE.asm:30 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0CEBB.
    case 0xC0CEBD: cpu.execute_instruction<0xFF>(0x851480, 4); return true;
    // src/unknown/C0/C0CEBE.asm:31 BRA @UNKNOWN3
    case 0xC0CEBE: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C0/C0CEBE.asm:33 STA @VIRTUAL04
    case 0xC0CEC0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0CEBE.asm:33 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC0CEBD.
    case 0xC0CEC1: cpu.execute_instruction<0x04>(0x0000A5, 2); return true;
    // src/unknown/C0/C0CEBE.asm:34 LDA @VIRTUAL02
    case 0xC0CEC2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0CEBE.asm:34 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC0CEC1.
    case 0xC0CEC3: cpu.execute_instruction<0x02>(0x000038, 2); return true;
    // src/unknown/C0/C0CEBE.asm:35 SEC
    case 0xC0CEC4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:36 SBC @VIRTUAL04
    case 0xC0CEC5: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C0/C0CEBE.asm:37 CMP #$8000
    case 0xC0CEC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C0CEBE.asm:37 CMP #$8000
    // Overlapping static entry reached from 0xC0CEC7.
    case 0xC0CEC9: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/C0/C0CEBE.asm:38 BCS @UNKNOWN2
    case 0xC0CECA: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C0CEBE.asm:39 LDX #.LOWORD(-1)
    case 0xC0CECC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0CEBE.asm:39 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0CECC.
    case 0xC0CECE: cpu.execute_instruction<0xFF>(0xA20380, 4); return true;
    // src/unknown/C0/C0CEBE.asm:40 BRA @UNKNOWN3
    case 0xC0CECF: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0CEBE.asm:42 LDX #0
    case 0xC0CED1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0CEBE.asm:42 LDX #0
    // Overlapping static entry reached from 0xC0CECE.
    case 0xC0CED2: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0CEBE.asm:42 LDX #0
    // Overlapping static entry reached from 0xC0CED1.
    case 0xC0CED3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0CEBE.asm:44 BNE @UNKNOWN4
    case 0xC0CED4: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C0/C0CEBE.asm:45 LDA @VIRTUAL02
    case 0xC0CED6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0CEBE.asm:46 CLC
    case 0xC0CED8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:47 ADC #$0800
    case 0xC0CED9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000800, 3); return true;
    // src/unknown/C0/C0CEBE.asm:47 ADC #$0800
    // Overlapping static entry reached from 0xC0CED9.
    case 0xC0CEDB: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:48 STA @VIRTUAL04
    case 0xC0CEDC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0CEBE.asm:49 BRA @UNKNOWN5
    case 0xC0CEDE: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C0/C0CEBE.asm:51 LDA @VIRTUAL02
    case 0xC0CEE0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0CEBE.asm:52 SEC
    case 0xC0CEE2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:53 SBC #$0800
    case 0xC0CEE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000800, 3); return true;
    // src/unknown/C0/C0CEBE.asm:53 SBC #$0800
    // Overlapping static entry reached from 0xC0CEE3.
    case 0xC0CEE5: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:54 STA @VIRTUAL04
    case 0xC0CEE6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0CEBE.asm:56 LDA @LOCAL00
    case 0xC0CEE8: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0CEBE.asm:57 ASL
    case 0xC0CEEA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:58 TAX
    case 0xC0CEEB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:59 CLC
    case 0xC0CEEC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:60 ADC #.LOWORD(ENTITY_MOVEMENT_SPEEDS)
    case 0xC0CEED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x002F30, 3); return true;
    // src/unknown/C0/C0CEBE.asm:60 ADC #.LOWORD(ENTITY_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC0CEED.
    case 0xC0CEEF: cpu.execute_instruction<0x2F>(0x00B9A8, 4); return true;
    // src/unknown/C0/C0CEBE.asm:61 TAY
    case 0xC0CEF0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:62 LDA __BSS_START__,Y
    case 0xC0CEF1: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0CEBE.asm:62 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC0CEEF.
    case 0xC0CEF3: cpu.execute_instruction<0x00>(0x0000DD, 2); return true;
    // src/unknown/C0/C0CEBE.asm:63 CMP ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC0CEF4: cpu.execute_instruction<0xDD>(0x000F08, 3); return true;
    // src/unknown/C0/C0CEBE.asm:64 BCS @UNKNOWN6
    case 0xC0CEF7: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/unknown/C0/C0CEBE.asm:65 CLC
    case 0xC0CEF9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:66 ADC #16
    case 0xC0CEFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C0/C0CEBE.asm:66 ADC #16
    // Overlapping static entry reached from 0xC0CEFA.
    case 0xC0CEFC: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C0CEBE.asm:67 STA __BSS_START__,Y
    case 0xC0CEFD: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0CEBE.asm:69 LDA @VIRTUAL02
    case 0xC0CF00: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0CEBE.asm:70 JSL UNKNOWN_C46B0A
    case 0xC0CF02: cpu.execute_instruction<0x22>(0xC44886, 4); return true;
    // src/unknown/C0/C0CEBE.asm:71 TAX
    case 0xC0CF06: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:72 STX @LOCAL01
    case 0xC0CF07: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0CEBE.asm:73 LDA @VIRTUAL04
    case 0xC0CF09: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0CEBE.asm:74 JSL UNKNOWN_C46B0A
    case 0xC0CF0B: cpu.execute_instruction<0x22>(0xC44886, 4); return true;
    // src/unknown/C0/C0CEBE.asm:75 STA @VIRTUAL02
    case 0xC0CF0F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0CEBE.asm:76 LDX @LOCAL01
    case 0xC0CF11: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0CEBE.asm:77 TXA
    case 0xC0CF13: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:78 CMP @VIRTUAL02
    case 0xC0CF14: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C0CEBE.asm:79 BEQ @UNKNOWN7
    case 0xC0CF16: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0CEBE.asm:80 LDA @LOCAL00
    case 0xC0CF18: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0CEBE.asm:81 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC0CF1A: cpu.execute_instruction<0x22>(0xC0A46E, 4); return true;
    // src/unknown/C0/C0CEBE.asm:83 LDA @VIRTUAL04
    case 0xC0CF1E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0CEBE.asm:84 END_C_FUNCTION
    case 0xC0CF20: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0CEBE.asm:84 END_C_FUNCTION
    case 0xC0CF21: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0CF97.asm (unresolved).
bool execute_unresolved_c0_c0cf97_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0CF97.asm:3 BEGIN_C_FUNCTION
    case 0xC0CF61: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0CF97.asm:16 END_STACK_VARS
    case 0xC0CF63: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0CF97.asm:16 END_STACK_VARS
    case 0xC0CF64: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0CF97.asm:16 END_STACK_VARS
    case 0xC0CF65: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CF97.asm:16 END_STACK_VARS
    case 0xC0CF66: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CF97.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC0CF66.
    case 0xC0CF68: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0CF97.asm:16 END_STACK_VARS
    case 0xC0CF69: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0CF97.asm:16 END_STACK_VARS
    case 0xC0CF6A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:17 STX @LOCAL07
    case 0xC0CF6B: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C0CF97.asm:17 STX @LOCAL07
    // Overlapping static entry reached from 0xC0CF68.
    case 0xC0CF6C: cpu.execute_instruction<0x1C>(0x0020E2, 3); return true;
    // src/unknown/C0/C0CF97.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC0CF6D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0CF97.asm:19 STA @VIRTUAL00
    case 0xC0CF6F: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C0CF97.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC0CF71: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0CF97.asm:21 LDA CURRENT_ENTITY_SLOT
    case 0xC0CF73: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0CF97.asm:22 STA @LOCAL06
    case 0xC0CF76: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0CF97.asm:23 ASL
    case 0xC0CF78: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:24 TAX
    case 0xC0CF79: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:25 STX @LOCAL05
    case 0xC0CF7A: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C0/C0CF97.asm:26 LDA ENTITY_SIZES,X
    case 0xC0CF7C: cpu.execute_instruction<0xBD>(0x002F6C, 3); return true;
    // src/unknown/C0/C0CF97.asm:27 STA @LOCAL04
    case 0xC0CF7F: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0CF97.asm:28 LOADPTR UNKNOWN_C0CF58, @VIRTUAL06
    case 0xC0CF81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x00CF22, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0CF97.asm:28 LOADPTR UNKNOWN_C0CF58, @VIRTUAL06
    // Overlapping static entry reached from 0xC0CF81.
    case 0xC0CF83: cpu.execute_instruction<0xCF>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0CF97.asm:28 LOADPTR UNKNOWN_C0CF58, @VIRTUAL06
    case 0xC0CF84: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0CF97.asm:28 LOADPTR UNKNOWN_C0CF58, @VIRTUAL06
    case 0xC0CF86: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0CF97.asm:28 LOADPTR UNKNOWN_C0CF58, @VIRTUAL06
    // Overlapping static entry reached from 0xC0CF83.
    case 0xC0CF87: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0CF97.asm:28 LOADPTR UNKNOWN_C0CF58, @VIRTUAL06
    // Overlapping static entry reached from 0xC0CF86.
    case 0xC0CF88: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0CF97.asm:28 LOADPTR UNKNOWN_C0CF58, @VIRTUAL06
    case 0xC0CF89: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0CF97.asm:28 LOADPTR UNKNOWN_C0CF58, @VIRTUAL06
    // Overlapping static entry reached from 0xC0CF87.
    case 0xC0CF8A: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:29 LDA @LOCAL04
    case 0xC0CF8B: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0CF97.asm:30 ASL
    case 0xC0CF8D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:31 STA @LOCAL03
    case 0xC0CF8E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0CF97.asm:32 PHA
    case 0xC0CF90: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:33 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0CF91: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C0CF97.asm:34 PLX
    case 0xC0CF94: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:35 SEC
    case 0xC0CF95: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:36 SBC f:UNKNOWN_C42A1F,X
    case 0xC0CF96: cpu.execute_instruction<0xFF>(0xC4295D, 4); return true;
    // src/unknown/C0/C0CF97.asm:37 LSR
    case 0xC0CF9A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:38 LSR
    case 0xC0CF9B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:39 LSR
    case 0xC0CF9C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:40 SEC
    case 0xC0CF9D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:41 SBC #4
    case 0xC0CF9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/unknown/C0/C0CF97.asm:41 SBC #4
    // Overlapping static entry reached from 0xC0CF9E.
    case 0xC0CFA0: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C0CF97.asm:42 TAY
    case 0xC0CFA1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:43 LDA @LOCAL03
    case 0xC0CFA2: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0CF97.asm:44 PHA
    case 0xC0CFA4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:45 PHA
    case 0xC0CFA5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:46 LDX @LOCAL05
    case 0xC0CFA6: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0CF97.asm:47 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0CFA8: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0CF97.asm:48 PLX
    case 0xC0CFAB: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:49 SEC
    case 0xC0CFAC: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:50 SBC f:UNKNOWN_C42A41,X
    case 0xC0CFAD: cpu.execute_instruction<0xFF>(0xC4297F, 4); return true;
    // src/unknown/C0/C0CF97.asm:51 PLX
    case 0xC0CFB1: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:52 CLC
    case 0xC0CFB2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:53 ADC f:UNKNOWN_C42AEB,X
    case 0xC0CFB3: cpu.execute_instruction<0x7F>(0xC42A29, 4); return true;
    // src/unknown/C0/C0CF97.asm:54 LSR
    case 0xC0CFB7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:55 LSR
    case 0xC0CFB8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:56 LSR
    case 0xC0CFB9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:57 SEC
    case 0xC0CFBA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:58 SBC #4
    case 0xC0CFBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/unknown/C0/C0CF97.asm:58 SBC #4
    // Overlapping static entry reached from 0xC0CFBB.
    case 0xC0CFBD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0CF97.asm:59 STA @VIRTUAL02
    case 0xC0CFBE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0CF97.asm:60 STA @LOCAL02
    case 0xC0CFC0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0CF97.asm:61 TYA
    case 0xC0CFC2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:62 AND #$003F
    case 0xC0CFC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0CF97.asm:62 AND #$003F
    // Overlapping static entry reached from 0xC0CFC3.
    case 0xC0CFC5: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C0CF97.asm:63 TAX
    case 0xC0CFC6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:64 STX @LOCAL01
    case 0xC0CFC7: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0CF97.asm:65 LDA @VIRTUAL02
    case 0xC0CFC9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0CF97.asm:66 AND #$003F
    case 0xC0CFCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0CF97.asm:66 AND #$003F
    // Overlapping static entry reached from 0xC0CFCB.
    case 0xC0CFCD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0CF97.asm:67 STA @LOCAL05
    case 0xC0CFCE: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0CF97.asm:68 LDA #0
    case 0xC0CFD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0CF97.asm:68 LDA #0
    // Overlapping static entry reached from 0xC0CFD0.
    case 0xC0CFD2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0CF97.asm:69 STA @VIRTUAL04
    case 0xC0CFD3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0CF97.asm:70 JMP @UNKNOWN7
    case 0xC0CFD5: cpu.execute_instruction<0x4C>(0x00D05B, 3); return true;
    // src/unknown/C0/C0CF97.asm:72 LDX @LOCAL01
    case 0xC0CFD8: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0CF97.asm:73 CPX #64
    case 0xC0CFDA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000040, 2); else cpu.execute_instruction<0xE0>(0x000040, 3); return true;
    // src/unknown/C0/C0CF97.asm:73 CPX #64
    // Overlapping static entry reached from 0xC0CFDA.
    case 0xC0CFDC: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C0CF97.asm:74 BCS @UNKNOWN1
    case 0xC0CFDD: cpu.execute_instruction<0xB0>(0x00002A, 2); return true;
    // src/unknown/C0/C0CF97.asm:75 LDA @LOCAL05
    case 0xC0CFDF: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0CF97.asm:76 CMP #64
    case 0xC0CFE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/unknown/C0/C0CF97.asm:76 CMP #64
    // Overlapping static entry reached from 0xC0CFE1.
    case 0xC0CFE3: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C0CF97.asm:77 BCS @UNKNOWN1
    case 0xC0CFE4: cpu.execute_instruction<0xB0>(0x000023, 2); return true;
    // src/unknown/C0/C0CF97.asm:78 TXA
    case 0xC0CFE6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:79 AND #$003F
    case 0xC0CFE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0CF97.asm:79 AND #$003F
    // Overlapping static entry reached from 0xC0CFE7.
    case 0xC0CFE9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0CF97.asm:80 STA @VIRTUAL02
    case 0xC0CFEA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0CF97.asm:81 LDA @LOCAL05
    case 0xC0CFEC: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0CF97.asm:82 AND #$003F
    case 0xC0CFEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0CF97.asm:82 AND #$003F
    // Overlapping static entry reached from 0xC0CFEE.
    case 0xC0CFF0: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:696 ASL
    // Macro caller: src/unknown/C0/C0CF97.asm:83 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC0CFF1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:697 ASL
    // Macro caller: src/unknown/C0/C0CF97.asm:83 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC0CFF2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:698 ASL
    // Macro caller: src/unknown/C0/C0CF97.asm:83 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC0CFF3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:699 ASL
    // Macro caller: src/unknown/C0/C0CF97.asm:83 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC0CFF4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:700 ASL
    // Macro caller: src/unknown/C0/C0CF97.asm:83 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC0CFF5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:701 ASL
    // Macro caller: src/unknown/C0/C0CF97.asm:83 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC0CFF6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:84 CLC
    case 0xC0CFF7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:85 ADC @VIRTUAL02
    case 0xC0CFF8: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0CF97.asm:86 TAX
    case 0xC0CFFA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:87 SEP #PROC_FLAGS::ACCUM8
    case 0xC0CFFB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0CF97.asm:88 LDA @VIRTUAL00
    case 0xC0CFFD: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C0/C0CF97.asm:89 AND LOADED_COLLISION_TILES,X
    case 0xC0CFFF: cpu.execute_instruction<0x3D>(0x00E000, 3); return true;
    // src/unknown/C0/C0CF97.asm:90 REP #PROC_FLAGS::ACCUM8
    case 0xC0D002: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0CF97.asm:91 AND #$00FF
    case 0xC0D004: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0CF97.asm:91 AND #$00FF
    // Overlapping static entry reached from 0xC0D004.
    case 0xC0D006: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0CF97.asm:92 BNE @UNKNOWN9
    case 0xC0D007: cpu.execute_instruction<0xD0>(0x000060, 2); return true;
    // src/unknown/C0/C0CF97.asm:94 LDA [@VIRTUAL06]
    case 0xC0D009: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0CF97.asm:95 AND #$00FF
    case 0xC0D00B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0CF97.asm:95 AND #$00FF
    // Overlapping static entry reached from 0xC0D00B.
    case 0xC0D00D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0CF97.asm:96 STA @LOCAL00
    case 0xC0D00E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0CF97.asm:97 INC @VIRTUAL06
    case 0xC0D010: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C0/C0CF97.asm:98 LDA @LOCAL00
    case 0xC0D012: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0CF97.asm:99 CMP #1
    case 0xC0D014: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0CF97.asm:99 CMP #1
    // Overlapping static entry reached from 0xC0D014.
    case 0xC0D016: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0CF97.asm:100 BEQ @UNKNOWN2
    case 0xC0D017: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C0CF97.asm:101 CMP #2
    case 0xC0D019: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0CF97.asm:101 CMP #2
    // Overlapping static entry reached from 0xC0D019.
    case 0xC0D01B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0CF97.asm:102 BEQ @UNKNOWN3
    case 0xC0D01C: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C0/C0CF97.asm:103 CMP #3
    case 0xC0D01E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0CF97.asm:103 CMP #3
    // Overlapping static entry reached from 0xC0D01E.
    case 0xC0D020: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0CF97.asm:104 BEQ @UNKNOWN4
    case 0xC0D021: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/unknown/C0/C0CF97.asm:105 CMP #4
    case 0xC0D023: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0CF97.asm:105 CMP #4
    // Overlapping static entry reached from 0xC0D023.
    case 0xC0D025: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0CF97.asm:106 BEQ @UNKNOWN5
    case 0xC0D026: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/unknown/C0/C0CF97.asm:107 BRA @UNKNOWN6
    case 0xC0D028: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C0/C0CF97.asm:109 LDA @LOCAL05
    case 0xC0D02A: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0CF97.asm:110 DEC
    case 0xC0D02C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:111 STA @LOCAL05
    case 0xC0D02D: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0CF97.asm:112 LDA @LOCAL02
    case 0xC0D02F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0CF97.asm:113 STA @VIRTUAL02
    case 0xC0D031: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0CF97.asm:114 DEC
    case 0xC0D033: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:115 STA @VIRTUAL02
    case 0xC0D034: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0CF97.asm:116 STA @LOCAL02
    case 0xC0D036: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0CF97.asm:117 BRA @UNKNOWN6
    case 0xC0D038: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/unknown/C0/C0CF97.asm:119 LDX @LOCAL01
    case 0xC0D03A: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0CF97.asm:120 INX
    case 0xC0D03C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:121 STX @LOCAL01
    case 0xC0D03D: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0CF97.asm:122 INY
    case 0xC0D03F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:123 BRA @UNKNOWN6
    case 0xC0D040: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/unknown/C0/C0CF97.asm:125 LDA @LOCAL05
    case 0xC0D042: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0CF97.asm:126 INC
    case 0xC0D044: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:127 STA @LOCAL05
    case 0xC0D045: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0CF97.asm:128 LDA @LOCAL02
    case 0xC0D047: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0CF97.asm:129 STA @VIRTUAL02
    case 0xC0D049: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0CF97.asm:130 INC @VIRTUAL02
    case 0xC0D04B: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0CF97.asm:131 LDA @VIRTUAL02
    case 0xC0D04D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0CF97.asm:132 STA @LOCAL02
    case 0xC0D04F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0CF97.asm:133 BRA @UNKNOWN6
    case 0xC0D051: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C0CF97.asm:135 LDX @LOCAL01
    case 0xC0D053: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0CF97.asm:136 DEX
    case 0xC0D055: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:137 STX @LOCAL01
    case 0xC0D056: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0CF97.asm:138 DEY
    case 0xC0D058: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:140 INC @VIRTUAL04
    case 0xC0D059: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C0/C0CF97.asm:142 LDA @VIRTUAL04
    case 0xC0D05B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0CF97.asm:143 CMP @LOCAL07
    case 0xC0D05D: cpu.execute_instruction<0xC5>(0x00001C, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0CF97.asm:144 BNEL @UNKNOWN0
    case 0xC0D05F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0CF97.asm:144 BNEL @UNKNOWN0
    case 0xC0D061: cpu.execute_instruction<0x4C>(0x00CFD8, 3); return true;
    // src/unknown/C0/C0CF97.asm:145 LDA #0
    case 0xC0D064: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0CF97.asm:145 LDA #0
    // Overlapping static entry reached from 0xC0D064.
    case 0xC0D066: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0CF97.asm:146 BRA @UNKNOWN10
    case 0xC0D067: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/unknown/C0/C0CF97.asm:148 LDA @LOCAL06
    case 0xC0D069: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0CF97.asm:149 ASL
    case 0xC0D06B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:150 STA @LOCAL07
    case 0xC0D06C: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C0CF97.asm:151 LDA @LOCAL04
    case 0xC0D06E: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0CF97.asm:152 ASL
    case 0xC0D070: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:153 TAX
    case 0xC0D071: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:154 STX @LOCAL03
    case 0xC0D072: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C0CF97.asm:155 LDA @LOCAL07
    case 0xC0D074: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0CF97.asm:156 PHA
    case 0xC0D076: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:157 TYA
    case 0xC0D077: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C0CF97.asm:158 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D078: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C0CF97.asm:158 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D079: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C0CF97.asm:158 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D07A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:159 CLC
    case 0xC0D07B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:160 ADC f:UNKNOWN_C42A1F,X
    case 0xC0D07C: cpu.execute_instruction<0x7F>(0xC4295D, 4); return true;
    // src/unknown/C0/C0CF97.asm:161 PLX
    case 0xC0D080: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:162 STA ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC0D081: cpu.execute_instruction<0x9D>(0x000FBC, 3); return true;
    // src/unknown/C0/C0CF97.asm:163 LDA @LOCAL07
    case 0xC0D084: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0CF97.asm:164 PHA
    case 0xC0D086: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:165 LDX @LOCAL03
    case 0xC0D087: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0CF97.asm:166 LDA @LOCAL02
    case 0xC0D089: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0CF97.asm:167 STA @VIRTUAL02
    case 0xC0D08B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C0CF97.asm:168 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D08D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C0CF97.asm:168 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D08E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C0CF97.asm:168 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D08F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:169 SEC
    case 0xC0D090: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:170 SBC f:UNKNOWN_C42AEB,X
    case 0xC0D091: cpu.execute_instruction<0xFF>(0xC42A29, 4); return true;
    // src/unknown/C0/C0CF97.asm:171 CLC
    case 0xC0D095: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:172 ADC f:UNKNOWN_C42A41,X
    case 0xC0D096: cpu.execute_instruction<0x7F>(0xC4297F, 4); return true;
    // src/unknown/C0/C0CF97.asm:173 PLX
    case 0xC0D09A: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:174 STA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC0D09B: cpu.execute_instruction<0x9D>(0x000FF8, 3); return true;
    // src/unknown/C0/C0CF97.asm:175 LDA #.LOWORD(-1)
    case 0xC0D09E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0CF97.asm:175 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0D09E.
    case 0xC0D0A0: cpu.execute_instruction<0xFF>(0xC2602B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0CF97.asm:177 END_C_FUNCTION
    case 0xC0D0A1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0CF97.asm:177 END_C_FUNCTION
    case 0xC0D0A2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D0D9.asm (unresolved).
bool execute_unresolved_c0_c0d0d9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0D0D9.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0D0A3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0D0D9.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Overlapping static entry reached from 0xC0D0A0.
    case 0xC0D0A4: cpu.execute_instruction<0x31>(0x0000A2, 2); return true;
    // src/unknown/C0/C0D0D9.asm:4 LDX #$003C
    case 0xC0D0A5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003C, 2); else cpu.execute_instruction<0xA2>(0x00003C, 3); return true;
    // src/unknown/C0/C0D0D9.asm:4 LDX #$003C
    // Overlapping static entry reached from 0xC0D0A4.
    case 0xC0D0A6: cpu.execute_instruction<0x3C>(0x00E200, 3); return true;
    // src/unknown/C0/C0D0D9.asm:4 LDX #$003C
    // Overlapping static entry reached from 0xC0D0A5.
    case 0xC0D0A7: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C0/C0D0D9.asm:5 SEP #PROC_FLAGS::ACCUM8
    case 0xC0D0A8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0D0D9.asm:5 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0D0A6.
    case 0xC0D0A9: cpu.execute_instruction<0x20>(0x0003A9, 3); return true;
    // src/unknown/C0/C0D0D9.asm:6 LDA #$0003
    case 0xC0D0AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002003, 3); return true;
    // src/unknown/C0/C0D0D9.asm:7 JSR UNKNOWN_C0CF97
    case 0xC0D0AC: cpu.execute_instruction<0x20>(0x00CF61, 3); return true;
    // src/unknown/C0/C0D0D9.asm:7 JSR UNKNOWN_C0CF97
    // Overlapping static entry reached from 0xC0D0AA.
    case 0xC0D0AD: cpu.execute_instruction<0x61>(0x0000CF, 2); return true;
    // src/unknown/C0/C0D0D9.asm:8 RTL
    case 0xC0D0AF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D0E6.asm (unresolved).
bool execute_unresolved_c0_c0d0e6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0D0E6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0D0B0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0D0E6.asm:7 END_STACK_VARS
    case 0xC0D0B2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0D0E6.asm:7 END_STACK_VARS
    case 0xC0D0B3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D0E6.asm:7 END_STACK_VARS
    case 0xC0D0B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D0E6.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0D0B4.
    case 0xC0D0B6: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0D0E6.asm:7 END_STACK_VARS
    case 0xC0D0B7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0D0E6.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC0D0B8: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0D0E6.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0D0B6.
    case 0xC0D0BA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D0E6.asm:9 STA @VIRTUAL02
    case 0xC0D0BB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D0E6.asm:10 JSL UNKNOWN_C0C363
    case 0xC0D0BD: cpu.execute_instruction<0x22>(0xC0C345, 4); return true;
    // src/unknown/C0/C0D0E6.asm:11 CMP #0
    case 0xC0D0C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0D0E6.asm:11 CMP #0
    // Overlapping static entry reached from 0xC0D0C1.
    case 0xC0D0C3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D0E6.asm:12 BNE @UNKNOWN0
    case 0xC0D0C4: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/unknown/C0/C0D0E6.asm:13 LDA @VIRTUAL02
    case 0xC0D0C6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D0E6.asm:14 ASL
    case 0xC0D0C8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D0E6.asm:15 TAX
    case 0xC0D0C9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D0E6.asm:16 LDA ENTITY_PATHFINDING_STATES,X
    case 0xC0D0CA: cpu.execute_instruction<0xBD>(0x00305C, 3); return true;
    // src/unknown/C0/C0D0E6.asm:17 BEQ @UNKNOWN0
    case 0xC0D0CD: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C0D0E6.asm:18 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0D0CF: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C0D0E6.asm:19 STA ENTITY_ABS_X_TABLE,X
    case 0xC0D0D2: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/unknown/C0/C0D0E6.asm:20 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC0D0D5: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C0/C0D0E6.asm:21 STA ENTITY_ABS_Y_TABLE,X
    case 0xC0D0D8: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/unknown/C0/C0D0E6.asm:22 LDA #.LOWORD(-1)
    case 0xC0D0DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0D0E6.asm:22 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0D0DB.
    case 0xC0D0DD: cpu.execute_instruction<0xFF>(0x224480, 4); return true;
    // src/unknown/C0/C0D0E6.asm:23 BRA @UNKNOWN2
    case 0xC0D0DE: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/unknown/C0/C0D0E6.asm:25 JSL UNKNOWN_C09EFF
    case 0xC0D0E0: cpu.execute_instruction<0x22>(0xC09EDE, 4); return true;
    // src/unknown/C0/C0D0E6.asm:25 JSL UNKNOWN_C09EFF
    // Overlapping static entry reached from 0xC0D0DD.
    case 0xC0D0E1: cpu.execute_instruction<0xDE>(0x00C09E, 3); return true;
    // src/unknown/C0/C0D0E6.asm:26 LDA #4
    case 0xC0D0E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C0/C0D0E6.asm:26 LDA #4
    // Overlapping static entry reached from 0xC0D0E4.
    case 0xC0D0E6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D0E6.asm:27 STA @LOCAL00
    case 0xC0D0E7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0D0E6.asm:28 LDY @VIRTUAL02
    case 0xC0D0E9: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C0/C0D0E6.asm:29 LDX ENTITY_MOVEMENT_PROSPECTIVE_Y
    case 0xC0D0EB: cpu.execute_instruction<0xAE>(0x002C4A, 3); return true;
    // src/unknown/C0/C0D0E6.asm:30 LDA ENTITY_MOVEMENT_PROSPECTIVE_X
    case 0xC0D0EE: cpu.execute_instruction<0xAD>(0x002C48, 3); return true;
    // src/unknown/C0/C0D0E6.asm:31 JSL UNKNOWN_C05CD7
    case 0xC0D0F1: cpu.execute_instruction<0x22>(0xC05F05, 4); return true;
    // src/unknown/C0/C0D0E6.asm:32 AND #$00C0
    case 0xC0D0F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/unknown/C0/C0D0E6.asm:32 AND #$00C0
    // Overlapping static entry reached from 0xC0D0F5.
    case 0xC0D0F7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0D0E6.asm:33 BEQ @UNKNOWN1
    case 0xC0D0F8: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/unknown/C0/C0D0E6.asm:34 LDA @VIRTUAL02
    case 0xC0D0FA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D0E6.asm:35 ASL
    case 0xC0D0FC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D0E6.asm:36 CLC
    case 0xC0D0FD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D0E6.asm:37 ADC #.LOWORD(ENTITY_MOVEMENT_SPEEDS)
    case 0xC0D0FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x002F30, 3); return true;
    // src/unknown/C0/C0D0E6.asm:37 ADC #.LOWORD(ENTITY_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC0D0FE.
    case 0xC0D100: cpu.execute_instruction<0x2F>(0x00BDAA, 4); return true;
    // src/unknown/C0/C0D0E6.asm:38 TAX
    case 0xC0D101: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D0E6.asm:39 LDA __BSS_START__,X
    case 0xC0D102: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D0E6.asm:39 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D100.
    case 0xC0D104: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C0/C0D0E6.asm:40 SEC
    case 0xC0D105: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D0E6.asm:41 SBC #$1000
    case 0xC0D106: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x001000, 3); return true;
    // src/unknown/C0/C0D0E6.asm:41 SBC #$1000
    // Overlapping static entry reached from 0xC0D106.
    case 0xC0D108: cpu.execute_instruction<0x10>(0x00009D, 2); return true;
    // src/unknown/C0/C0D0E6.asm:42 STA __BSS_START__,X
    case 0xC0D109: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D0E6.asm:42 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D108.
    case 0xC0D10A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D0E6.asm:43 LDA #0
    case 0xC0D10C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D0E6.asm:43 LDA #0
    // Overlapping static entry reached from 0xC0D10C.
    case 0xC0D10E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0D0E6.asm:44 BRA @UNKNOWN2
    case 0xC0D10F: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C0/C0D0E6.asm:46 LDA @VIRTUAL02
    case 0xC0D111: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D0E6.asm:47 ASL
    case 0xC0D113: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D0E6.asm:48 TAX
    case 0xC0D114: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D0E6.asm:49 LDA ENTITY_MOVEMENT_PROSPECTIVE_X
    case 0xC0D115: cpu.execute_instruction<0xAD>(0x002C48, 3); return true;
    // src/unknown/C0/C0D0E6.asm:50 STA ENTITY_ABS_X_TABLE,X
    case 0xC0D118: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/unknown/C0/C0D0E6.asm:51 LDA ENTITY_MOVEMENT_PROSPECTIVE_Y
    case 0xC0D11B: cpu.execute_instruction<0xAD>(0x002C4A, 3); return true;
    // src/unknown/C0/C0D0E6.asm:52 STA ENTITY_ABS_Y_TABLE,X
    case 0xC0D11E: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/unknown/C0/C0D0E6.asm:53 LDA #.LOWORD(-1)
    case 0xC0D121: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0D0E6.asm:53 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0D121.
    case 0xC0D123: cpu.execute_instruction<0xFF>(0xC26B2B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0D0E6.asm:55 END_C_FUNCTION
    case 0xC0D124: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0D0E6.asm:55 END_C_FUNCTION
    case 0xC0D125: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D15C.asm (unresolved).
bool execute_unresolved_c0_c0d15c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0D15C.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0D126: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0D15C.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Overlapping static entry reached from 0xC0D123.
    case 0xC0D127: cpu.execute_instruction<0x31>(0x0000AD, 2); return true;
    // src/unknown/C0/C0D15C.asm:4 LDA PLAYER_MOVEMENT_FLAGS
    case 0xC0D128: cpu.execute_instruction<0xAD>(0x0060DC, 3); return true;
    // src/unknown/C0/C0D15C.asm:4 LDA PLAYER_MOVEMENT_FLAGS
    // Overlapping static entry reached from 0xC0D127.
    case 0xC0D129: cpu.execute_instruction<0xDC>(0x002960, 3); return true;
    // src/unknown/C0/C0D15C.asm:5 AND #$0002
    case 0xC0D12B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/unknown/C0/C0D15C.asm:5 AND #$0002
    // Overlapping static entry reached from 0xC0D12B.
    case 0xC0D12D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0D15C.asm:6 BEQ @UNKNOWN0
    case 0xC0D12E: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0D15C.asm:7 LDA #$0000
    case 0xC0D130: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D15C.asm:7 LDA #$0000
    // Overlapping static entry reached from 0xC0D130.
    case 0xC0D132: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0D15C.asm:8 BRA @UNKNOWN5
    case 0xC0D133: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C0/C0D15C.asm:10 LDA ENTITY_COLLIDED_OBJECTS+46
    case 0xC0D135: cpu.execute_instruction<0xAD>(0x002CCA, 3); return true;
    // src/unknown/C0/C0D15C.asm:11 CMP CURRENT_ENTITY_SLOT
    case 0xC0D138: cpu.execute_instruction<0xCD>(0x001A38, 3); return true;
    // src/unknown/C0/C0D15C.asm:12 BNE @UNKNOWN1
    case 0xC0D13B: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0D15C.asm:13 LDA #$FFFF
    case 0xC0D13D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0D15C.asm:13 LDA #$FFFF
    // Overlapping static entry reached from 0xC0D13D.
    case 0xC0D13F: cpu.execute_instruction<0xFF>(0xAD1C80, 4); return true;
    // src/unknown/C0/C0D15C.asm:14 BRA @UNKNOWN5
    case 0xC0D140: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/unknown/C0/C0D15C.asm:16 LDA CURRENT_ENTITY_SLOT
    case 0xC0D142: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0D15C.asm:16 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0D13F.
    case 0xC0D143: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D15C.asm:16 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0D143.
    case 0xC0D144: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D15C.asm:17 ASL
    case 0xC0D145: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D15C.asm:18 TAX
    case 0xC0D146: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D15C.asm:19 LDA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0D147: cpu.execute_instruction<0xBD>(0x002C9C, 3); return true;
    // src/unknown/C0/C0D15C.asm:20 CMP #$7FFF
    case 0xC0D14A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x007FFF, 3); return true;
    // src/unknown/C0/C0D15C.asm:20 CMP #$7FFF
    // Overlapping static entry reached from 0xC0D14A.
    case 0xC0D14C: cpu.execute_instruction<0x7F>(0xB002F0, 4); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C0/C0D15C.asm:21 BGT @UNKNOWN3
    case 0xC0D14D: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C0D15C.asm:21 BGT @UNKNOWN3
    case 0xC0D14F: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C0D15C.asm:21 BGT @UNKNOWN3
    // Overlapping static entry reached from 0xC0D14C.
    case 0xC0D150: cpu.execute_instruction<0x05>(0x0000C9, 2); return true;
    // src/unknown/C0/C0D15C.asm:22 CMP #$0017
    case 0xC0D151: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/unknown/C0/C0D15C.asm:22 CMP #$0017
    // Overlapping static entry reached from 0xC0D150.
    case 0xC0D152: cpu.execute_instruction<0x17>(0x000000, 2); return true;
    // src/unknown/C0/C0D15C.asm:22 CMP #$0017
    // Overlapping static entry reached from 0xC0D151.
    case 0xC0D153: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C0D15C.asm:23 BCS @UNKNOWN4
    case 0xC0D154: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C0D15C.asm:25 LDA #$0000
    case 0xC0D156: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D15C.asm:25 LDA #$0000
    // Overlapping static entry reached from 0xC0D156.
    case 0xC0D158: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0D15C.asm:26 BRA @UNKNOWN5
    case 0xC0D159: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0D15C.asm:28 LDA #$FFFF
    case 0xC0D15B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0D15C.asm:28 LDA #$FFFF
    // Overlapping static entry reached from 0xC0D15B.
    case 0xC0D15D: cpu.execute_instruction<0xFF>(0x31C26B, 4); return true;
    // src/unknown/C0/C0D15C.asm:30 RTL
    case 0xC0D15E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D195.asm (unresolved).
bool execute_unresolved_c0_c0d195_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0D195.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0D15F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0D195.asm:4 LDA #$0000
    case 0xC0D161: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D195.asm:4 LDA #$0000
    // Overlapping static entry reached from 0xC0D161.
    case 0xC0D163: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/unknown/C0/C0D195.asm:5 RTL
    case 0xC0D164: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D19B-jp.asm (unresolved).
bool execute_unresolved_c0_c0d19b_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0D165: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:15 END_STACK_VARS
    case 0xC0D167: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:15 END_STACK_VARS
    case 0xC0D168: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:15 END_STACK_VARS
    case 0xC0D169: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x00FFDE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC0D169.
    case 0xC0D16B: cpu.execute_instruction<0xFF>(0x3CAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:15 END_STACK_VARS
    case 0xC0D16C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:16 LDA TOUCHED_ENEMY
    case 0xC0D16D: cpu.execute_instruction<0xAD>(0x00513C, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:16 LDA TOUCHED_ENEMY
    // Overlapping static entry reached from 0xC0D16B.
    case 0xC0D16F: cpu.execute_instruction<0x51>(0x000085, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:17 STA @LOCAL09
    case 0xC0D170: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:17 STA @LOCAL09
    // Overlapping static entry reached from 0xC0D16F.
    case 0xC0D171: cpu.execute_instruction<0x20>(0x00409C, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:18 STZ ENEMY_HAS_BEEN_TOUCHED
    case 0xC0D172: cpu.execute_instruction<0x9C>(0x005140, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:18 STZ ENEMY_HAS_BEEN_TOUCHED
    // Overlapping static entry reached from 0xC0D171.
    case 0xC0D174: cpu.execute_instruction<0x51>(0x0000A5, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:19 LDA @LOCAL09
    case 0xC0D175: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:19 LDA @LOCAL09
    // Overlapping static entry reached from 0xC0D174.
    case 0xC0D176: cpu.execute_instruction<0x20>(0x00850A, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:20 ASL
    case 0xC0D177: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:21 STA @LOCAL08
    case 0xC0D178: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:21 STA @LOCAL08
    // Overlapping static entry reached from 0xC0D176.
    case 0xC0D179: cpu.execute_instruction<0x1E>(0x006918, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:22 CLC
    case 0xC0D17A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:23 ADC #.LOWORD(ENTITY_MOVING_DIRECTIONS)
    case 0xC0D17B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007C, 2); else cpu.execute_instruction<0x69>(0x001A7C, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:23 ADC #.LOWORD(ENTITY_MOVING_DIRECTIONS)
    // Overlapping static entry reached from 0xC0D179.
    case 0xC0D17C: cpu.execute_instruction<0x7C>(0x00851A, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:23 ADC #.LOWORD(ENTITY_MOVING_DIRECTIONS)
    // Overlapping static entry reached from 0xC0D17B.
    case 0xC0D17D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:24 STA @VIRTUAL02
    case 0xC0D17E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:25 LDX @VIRTUAL02
    case 0xC0D180: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:26 LDA __BSS_START__,X
    case 0xC0D182: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:27 CMP #8
    case 0xC0D185: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:27 CMP #8
    // Overlapping static entry reached from 0xC0D185.
    case 0xC0D187: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:28 BNE @UNKNOWN0
    case 0xC0D188: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:29 LDY #0
    case 0xC0D18A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:29 LDY #0
    // Overlapping static entry reached from 0xC0D18A.
    case 0xC0D18C: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:30 LDX #1
    case 0xC0D18D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:30 LDX #1
    // Overlapping static entry reached from 0xC0D18D.
    case 0xC0D18F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:31 BRA @UNKNOWN6
    case 0xC0D190: cpu.execute_instruction<0x80>(0x00006B, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:33 LDA ENEMY_PATHFINDING_TARGET_ENTITY
    case 0xC0D192: cpu.execute_instruction<0xAD>(0x00513E, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:34 ASL
    case 0xC0D195: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:35 TAX
    case 0xC0D196: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:36 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0D197: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:37 STA @LOCAL00
    case 0xC0D19A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:38 LDY ENTITY_ABS_X_TABLE,X
    case 0xC0D19C: cpu.execute_instruction<0xBC>(0x000B84, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:39 LDA @LOCAL08
    case 0xC0D19F: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:40 TAX
    case 0xC0D1A1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:41 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0D1A2: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:42 TAX
    case 0xC0D1A5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:43 STX @LOCAL07
    case 0xC0D1A6: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:44 LDA @LOCAL08
    case 0xC0D1A8: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:45 TAX
    case 0xC0D1AA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:46 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0D1AB: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:47 LDX @LOCAL07
    case 0xC0D1AE: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:48 JSL UNKNOWN_C41EFF
    case 0xC0D1B0: cpu.execute_instruction<0x22>(0xC41E4B, 4); return true;
    // src/unknown/C0/C0D19B-jp.asm:49 LDY #$2000
    case 0xC0D1B4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:49 LDY #$2000
    // Overlapping static entry reached from 0xC0D1B4.
    case 0xC0D1B6: cpu.execute_instruction<0x20>(0x006918, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:50 CLC
    case 0xC0D1B7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:51 ADC #$1000
    case 0xC0D1B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x001000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:51 ADC #$1000
    // Overlapping static entry reached from 0xC0D1B6.
    case 0xC0D1B9: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:51 ADC #$1000
    // Overlapping static entry reached from 0xC0D1B8.
    case 0xC0D1BA: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:52 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC0D1BB: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/unknown/C0/C0D19B-jp.asm:52 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC0D1BA.
    case 0xC0D1BC: cpu.execute_instruction<0x3D>(0x00C091, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:53 STA @VIRTUAL04
    case 0xC0D1BF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:54 LDX @VIRTUAL02
    case 0xC0D1C1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:55 LDA __BSS_START__,X
    case 0xC0D1C3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:56 SEC
    case 0xC0D1C6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:57 SBC @VIRTUAL04
    case 0xC0D1C7: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:58 AND #$0007
    case 0xC0D1C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:58 AND #$0007
    // Overlapping static entry reached from 0xC0D1C9.
    case 0xC0D1CB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:59 BEQ @UNKNOWN1
    case 0xC0D1CC: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:60 CMP #1
    case 0xC0D1CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:60 CMP #1
    // Overlapping static entry reached from 0xC0D1CE.
    case 0xC0D1D0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:61 BEQ @UNKNOWN1
    case 0xC0D1D1: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:62 CMP #7
    case 0xC0D1D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:62 CMP #7
    // Overlapping static entry reached from 0xC0D1D3.
    case 0xC0D1D5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:63 BNE @UNKNOWN2
    case 0xC0D1D6: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:65 LDY #1
    case 0xC0D1D8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:65 LDY #1
    // Overlapping static entry reached from 0xC0D1D8.
    case 0xC0D1DA: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:66 BRA @UNKNOWN3
    case 0xC0D1DB: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:68 LDY #0
    case 0xC0D1DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:68 LDY #0
    // Overlapping static entry reached from 0xC0D1BA.
    case 0xC0D1DE: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:68 LDY #0
    // Overlapping static entry reached from 0xC0D1DD.
    case 0xC0D1DF: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:70 LDA GAME_STATE+game_state::leader_direction
    case 0xC0D1E0: cpu.execute_instruction<0xAD>(0x009B30, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:71 SEC
    case 0xC0D1E3: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:72 SBC @VIRTUAL04
    case 0xC0D1E4: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:73 AND #$0007
    case 0xC0D1E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:73 AND #$0007
    // Overlapping static entry reached from 0xC0D1E6.
    case 0xC0D1E8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:74 BEQ @UNKNOWN4
    case 0xC0D1E9: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:75 CMP #1
    case 0xC0D1EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:75 CMP #1
    // Overlapping static entry reached from 0xC0D1EB.
    case 0xC0D1ED: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:76 BEQ @UNKNOWN4
    case 0xC0D1EE: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:77 CMP #7
    case 0xC0D1F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:77 CMP #7
    // Overlapping static entry reached from 0xC0D1F0.
    case 0xC0D1F2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:78 BNE @UNKNOWN5
    case 0xC0D1F3: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:80 LDX #0
    case 0xC0D1F5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:80 LDX #0
    // Overlapping static entry reached from 0xC0D1F5.
    case 0xC0D1F7: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:81 BRA @UNKNOWN6
    case 0xC0D1F8: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:83 LDX #1
    case 0xC0D1FA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:83 LDX #1
    // Overlapping static entry reached from 0xC0D1FA.
    case 0xC0D1FC: cpu.execute_instruction<0x00>(0x00009C, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:85 STZ BATTLE_INITIATIVE
    case 0xC0D1FD: cpu.execute_instruction<0x9C>(0x005142, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:86 CPX #1
    case 0xC0D200: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:86 CPX #1
    // Overlapping static entry reached from 0xC0D200.
    case 0xC0D202: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:87 BNE @UNKNOWN7
    case 0xC0D203: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:88 CPY #0
    case 0xC0D205: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:88 CPY #0
    // Overlapping static entry reached from 0xC0D205.
    case 0xC0D207: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:89 BNE @UNKNOWN7
    case 0xC0D208: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:90 LDA #INITIATIVE::PARTY_FIRST
    case 0xC0D20A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:90 LDA #INITIATIVE::PARTY_FIRST
    // Overlapping static entry reached from 0xC0D20A.
    case 0xC0D20C: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:91 STA BATTLE_INITIATIVE
    case 0xC0D20D: cpu.execute_instruction<0x8D>(0x005142, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:93 CPY #1
    case 0xC0D210: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000001, 2); else cpu.execute_instruction<0xC0>(0x000001, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:93 CPY #1
    // Overlapping static entry reached from 0xC0D210.
    case 0xC0D212: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:94 BNE @UNKNOWN8
    case 0xC0D213: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:95 CPX #0
    case 0xC0D215: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:95 CPX #0
    // Overlapping static entry reached from 0xC0D215.
    case 0xC0D217: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:96 BNE @UNKNOWN8
    case 0xC0D218: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:97 LDA #INITIATIVE::ENEMIES_FIRST
    case 0xC0D21A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:97 LDA #INITIATIVE::ENEMIES_FIRST
    // Overlapping static entry reached from 0xC0D21A.
    case 0xC0D21C: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:98 STA BATTLE_INITIATIVE
    case 0xC0D21D: cpu.execute_instruction<0x8D>(0x005142, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:100 LDA #120
    case 0xC0D220: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x000078, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:100 LDA #120
    // Overlapping static entry reached from 0xC0D220.
    case 0xC0D222: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:101 STA BATTLE_SWIRL_COUNTDOWN
    case 0xC0D223: cpu.execute_instruction<0x8D>(0x0060E6, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:102 LDA @LOCAL09
    case 0xC0D226: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:103 ASL
    case 0xC0D228: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:104 TAX
    case 0xC0D229: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:105 LDA ENTITY_NPC_IDS,X
    case 0xC0D22A: cpu.execute_instruction<0xBD>(0x003098, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:106 AND #$7FFF
    case 0xC0D22D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:106 AND #$7FFF
    // Overlapping static entry reached from 0xC0D22D.
    case 0xC0D22F: cpu.execute_instruction<0x7F>(0x8D1A85, 4); return true;
    // src/unknown/C0/C0D19B-jp.asm:107 STA @LOCAL06
    case 0xC0D230: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:108 STA CURRENT_BATTLE_GROUP
    case 0xC0D232: cpu.execute_instruction<0x8D>(0x004E12, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:108 STA CURRENT_BATTLE_GROUP
    // Overlapping static entry reached from 0xC0D22F.
    case 0xC0D233: cpu.execute_instruction<0x12>(0x00004E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:109 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC0D235: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00C60D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:109 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0D235.
    case 0xC0D237: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:109 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC0D238: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:109 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0D237.
    case 0xC0D239: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:109 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC0D23A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:109 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0D23A.
    case 0xC0D23C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:109 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC0D23D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:110 LDA @LOCAL06
    case 0xC0D23F: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:111 ASL
    case 0xC0D241: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:112 ASL
    case 0xC0D242: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:113 ASL
    case 0xC0D243: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:114 CLC
    case 0xC0D244: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:115 ADC @VIRTUAL0A
    case 0xC0D245: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:116 STA @VIRTUAL0A
    case 0xC0D247: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:117 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0D249: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:117 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC0D249.
    case 0xC0D24B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:117 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0D24C: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:117 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0D24E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:117 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0D24F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:117 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0D251: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:117 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0D253: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:118 JSL BATTLE_SWIRL_SEQUENCE
    case 0xC0D255: cpu.execute_instruction<0x22>(0xC2E7F9, 4); return true;
    // src/unknown/C0/C0D19B-jp.asm:119 LDA #0
    case 0xC0D259: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:119 LDA #0
    // Overlapping static entry reached from 0xC0D259.
    case 0xC0D25B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:120 STA @VIRTUAL04
    case 0xC0D25C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:121 JMP @UNKNOWN17
    case 0xC0D25E: cpu.execute_instruction<0x4C>(0x00D2E3, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:123 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0D261: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:123 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0D263: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:123 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0D265: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:123 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0D267: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:124 LDA [@VIRTUAL0A]
    case 0xC0D269: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:125 AND #$00FF
    case 0xC0D26B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:125 AND #$00FF
    // Overlapping static entry reached from 0xC0D26B.
    case 0xC0D26D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:126 STA @VIRTUAL02
    case 0xC0D26E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:127 CMP #$00FF
    case 0xC0D270: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:127 CMP #$00FF
    // Overlapping static entry reached from 0xC0D270.
    case 0xC0D272: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:128 BEQ @UNKNOWN15
    case 0xC0D273: cpu.execute_instruction<0xF0>(0x000059, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:129 LDY #0
    case 0xC0D275: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:129 LDY #0
    // Overlapping static entry reached from 0xC0D275.
    case 0xC0D277: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:130 LDA @VIRTUAL02
    case 0xC0D278: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:131 STA @LOCAL06
    case 0xC0D27A: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:132 BEQ @UNKNOWN14
    case 0xC0D27C: cpu.execute_instruction<0xF0>(0x000046, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:133 LDY #1
    case 0xC0D27E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:133 LDY #1
    // Overlapping static entry reached from 0xC0D27E.
    case 0xC0D280: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:134 LDA [@VIRTUAL06],Y
    case 0xC0D281: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:135 TAY
    case 0xC0D283: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:136 LDA @LOCAL09
    case 0xC0D284: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:137 ASL
    case 0xC0D286: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:138 TAX
    case 0xC0D287: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:139 TYA
    case 0xC0D288: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:140 CMP ENTITY_ENEMY_IDS,X
    case 0xC0D289: cpu.execute_instruction<0xDD>(0x003110, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:141 BNE @UNKNOWN10
    case 0xC0D28C: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:142 LDA #.LOWORD(-1)
    case 0xC0D28E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:142 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0D28E.
    case 0xC0D290: cpu.execute_instruction<0xFF>(0x305C9D, 4); return true;
    // src/unknown/C0/C0D19B-jp.asm:143 STA ENTITY_PATHFINDING_STATES,X
    case 0xC0D291: cpu.execute_instruction<0x9D>(0x00305C, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:144 LDA @LOCAL06
    case 0xC0D294: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:145 DEC
    case 0xC0D296: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:146 STA @LOCAL06
    case 0xC0D297: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:148 LDA @LOCAL06
    case 0xC0D299: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:149 BEQ @UNKNOWN14
    case 0xC0D29B: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:150 LDA #0
    case 0xC0D29D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:150 LDA #0
    // Overlapping static entry reached from 0xC0D29D.
    case 0xC0D29F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:151 STA @LOCAL05
    case 0xC0D2A0: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:152 BRA @UNKNOWN13
    case 0xC0D2A2: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:154 ASL
    case 0xC0D2A4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:155 TAX
    case 0xC0D2A5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:156 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC0D2A6: cpu.execute_instruction<0xBD>(0x000A58, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:157 CMP #.LOWORD(-1)
    case 0xC0D2A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:157 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0D2A9.
    case 0xC0D2AB: cpu.execute_instruction<0xFF>(0x980CF0, 4); return true;
    // src/unknown/C0/C0D19B-jp.asm:158 BEQ @UNKNOWN12
    case 0xC0D2AC: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:159 TYA
    case 0xC0D2AE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:160 CMP ENTITY_ENEMY_IDS,X
    case 0xC0D2AF: cpu.execute_instruction<0xDD>(0x003110, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:161 BNE @UNKNOWN12
    case 0xC0D2B2: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:162 LDA #.LOWORD(-1)
    case 0xC0D2B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:162 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0D2B4.
    case 0xC0D2B6: cpu.execute_instruction<0xFF>(0x305C9D, 4); return true;
    // src/unknown/C0/C0D19B-jp.asm:163 STA ENTITY_PATHFINDING_STATES,X
    case 0xC0D2B7: cpu.execute_instruction<0x9D>(0x00305C, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:165 LDA @LOCAL05
    case 0xC0D2BA: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:166 INC
    case 0xC0D2BC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:167 STA @LOCAL05
    case 0xC0D2BD: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:169 CMP #23
    case 0xC0D2BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:169 CMP #23
    // Overlapping static entry reached from 0xC0D2BF.
    case 0xC0D2C1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:170 BNE @UNKNOWN11
    case 0xC0D2C2: cpu.execute_instruction<0xD0>(0x0000E0, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:172 LDA #3
    case 0xC0D2C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:172 LDA #3
    // Overlapping static entry reached from 0xC0D2C4.
    case 0xC0D2C6: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:173 CLC
    case 0xC0D2C7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:174 ADC @VIRTUAL06
    case 0xC0D2C8: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:175 STA @VIRTUAL06
    case 0xC0D2CA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:176 BRA @UNKNOWN16
    case 0xC0D2CC: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:178 LDY #0
    case 0xC0D2CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:178 LDY #0
    // Overlapping static entry reached from 0xC0D2CE.
    case 0xC0D2D0: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:179 TYA
    case 0xC0D2D1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:180 STA @VIRTUAL02
    case 0xC0D2D2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:182 LDA @VIRTUAL04
    case 0xC0D2D4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:183 ASL
    case 0xC0D2D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:184 TAX
    case 0xC0D2D7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:185 TYA
    case 0xC0D2D8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:186 STA PATHFINDING_ENEMY_IDS,X
    case 0xC0D2D9: cpu.execute_instruction<0x9D>(0x004E02, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:187 LDA @VIRTUAL02
    case 0xC0D2DC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:188 STA PATHFINDING_ENEMY_COUNTS,X
    case 0xC0D2DE: cpu.execute_instruction<0x9D>(0x004E0A, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:189 INC @VIRTUAL04
    case 0xC0D2E1: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:191 LDA @VIRTUAL04
    case 0xC0D2E3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:192 CMP #4
    case 0xC0D2E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:192 CMP #4
    // Overlapping static entry reached from 0xC0D2E5.
    case 0xC0D2E7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:193 BNEL @UNKNOWN9
    case 0xC0D2E8: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:193 BNEL @UNKNOWN9
    case 0xC0D2EA: cpu.execute_instruction<0x4C>(0x00D261, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:194 STZ ENEMIES_IN_BATTLE
    case 0xC0D2ED: cpu.execute_instruction<0x9C>(0x00A18C, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:195 LDY #64
    case 0xC0D2F0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000040, 2); else cpu.execute_instruction<0xA0>(0x000040, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:195 LDY #64
    // Overlapping static entry reached from 0xC0D2F0.
    case 0xC0D2F2: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:196 TYX
    case 0xC0D2F3: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:197 LDA GAME_STATE+game_state::party_count
    case 0xC0D2F4: cpu.execute_instruction<0xAD>(0x009B54, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:198 AND #$00FF
    case 0xC0D2F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:198 AND #$00FF
    // Overlapping static entry reached from 0xC0D2F7.
    case 0xC0D2F9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:199 JSL FIND_PATH_TO_PARTY
    case 0xC0D2FA: cpu.execute_instruction<0x22>(0xC0BC53, 4); return true;
    // src/unknown/C0/C0D19B-jp.asm:200 LDA #.LOWORD(PATHFINDING_STATE)
    case 0xC0D2FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00F200, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:200 LDA #.LOWORD(PATHFINDING_STATE)
    // Overlapping static entry reached from 0xC0D2FE.
    case 0xC0D300: cpu.execute_instruction<0xF2>(0x000085, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:201 STA @LOCAL04
    case 0xC0D301: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:201 STA @LOCAL04
    // Overlapping static entry reached from 0xC0D300.
    case 0xC0D302: cpu.execute_instruction<0x16>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:202 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC0D303: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00C60D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:202 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0D302.
    case 0xC0D304: cpu.execute_instruction<0x0D>(0x0085C6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:202 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0D303.
    case 0xC0D305: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:202 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC0D306: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:202 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0D305.
    case 0xC0D307: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:202 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC0D308: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:202 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0D308.
    case 0xC0D30A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:202 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC0D30B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:203 LDA CURRENT_BATTLE_GROUP
    case 0xC0D30D: cpu.execute_instruction<0xAD>(0x004E12, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:204 ASL
    case 0xC0D310: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:205 ASL
    case 0xC0D311: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:206 ASL
    case 0xC0D312: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:207 CLC
    case 0xC0D313: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:208 ADC @VIRTUAL0A
    case 0xC0D314: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:209 STA @VIRTUAL0A
    case 0xC0D316: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:210 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0D318: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:210 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC0D318.
    case 0xC0D31A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:210 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0D31B: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:210 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0D31D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:210 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0D31E: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:210 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0D320: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:210 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0D322: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:211 STZ @LOCAL08
    case 0xC0D324: cpu.execute_instruction<0x64>(0x00001E, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:212 JMP @UNKNOWN35
    case 0xC0D326: cpu.execute_instruction<0x4C>(0x00D445, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:214 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0D329: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:214 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0D32B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:214 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0D32D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:214 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0D32F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:215 LDA [@VIRTUAL0A]
    case 0xC0D331: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:216 AND #$00FF
    case 0xC0D333: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:216 AND #$00FF
    // Overlapping static entry reached from 0xC0D333.
    case 0xC0D335: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:217 TAX
    case 0xC0D336: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:218 STX @LOCAL03
    case 0xC0D337: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:219 CPX #$00FF
    case 0xC0D339: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x0000FF, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:219 CPX #$00FF
    // Overlapping static entry reached from 0xC0D339.
    case 0xC0D33B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:220 BEQL @UNKNOWN34
    case 0xC0D33C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:220 BEQL @UNKNOWN34
    case 0xC0D33E: cpu.execute_instruction<0x4C>(0x00D443, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:221 CPX #0
    case 0xC0D341: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:221 CPX #0
    // Overlapping static entry reached from 0xC0D341.
    case 0xC0D343: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:222 BEQL @UNKNOWN33
    case 0xC0D344: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:222 BEQL @UNKNOWN33
    case 0xC0D346: cpu.execute_instruction<0x4C>(0x00D43B, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:223 LDY #1
    case 0xC0D349: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:223 LDY #1
    // Overlapping static entry reached from 0xC0D349.
    case 0xC0D34B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:224 LDA [@VIRTUAL06],Y
    case 0xC0D34C: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:225 STA @LOCAL06
    case 0xC0D34E: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:226 CPX #0
    case 0xC0D350: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:226 CPX #0
    // Overlapping static entry reached from 0xC0D350.
    case 0xC0D352: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:227 BEQL @UNKNOWN33
    case 0xC0D353: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:227 BEQL @UNKNOWN33
    case 0xC0D355: cpu.execute_instruction<0x4C>(0x00D43B, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:228 LDA #0
    case 0xC0D358: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:228 LDA #0
    // Overlapping static entry reached from 0xC0D358.
    case 0xC0D35A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:229 STA @LOCAL05
    case 0xC0D35B: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:230 TAY
    case 0xC0D35D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:231 STY @LOCAL02
    case 0xC0D35E: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:232 BRA @UNKNOWN25
    case 0xC0D360: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:234 LDY @LOCAL02
    case 0xC0D362: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:235 TYA
    case 0xC0D364: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:236 STA @VIRTUAL04
    case 0xC0D365: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:237 ASL
    case 0xC0D367: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:238 ASL
    case 0xC0D368: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:239 ASL
    case 0xC0D369: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:240 ADC @VIRTUAL04
    case 0xC0D36A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:241 ASL
    case 0xC0D36C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:242 CLC
    case 0xC0D36D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:243 ADC @LOCAL04
    case 0xC0D36E: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:244 TAX
    case 0xC0D370: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:245 LDA a:pathfinding::pathfinders + pathfinder::object_index,X
    case 0xC0D371: cpu.execute_instruction<0xBD>(0x0000B0, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:246 ASL
    case 0xC0D374: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:247 TAX
    case 0xC0D375: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:248 LDA ENTITY_ENEMY_IDS,X
    case 0xC0D376: cpu.execute_instruction<0xBD>(0x003110, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:249 CMP @LOCAL06
    case 0xC0D379: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:250 BNE @UNKNOWN24
    case 0xC0D37B: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:251 LDA @LOCAL05
    case 0xC0D37D: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:252 INC
    case 0xC0D37F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:253 STA @LOCAL05
    case 0xC0D380: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:255 INY
    case 0xC0D382: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:256 STY @LOCAL02
    case 0xC0D383: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:258 TYA
    case 0xC0D385: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:259 LDY #pathfinding::pathfinder_count
    case 0xC0D386: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00009E, 2); else cpu.execute_instruction<0xA0>(0x00009E, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:259 LDY #pathfinding::pathfinder_count
    // Overlapping static entry reached from 0xC0D386.
    case 0xC0D388: cpu.execute_instruction<0x00>(0x0000D1, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:260 CMP (@LOCAL04),Y
    case 0xC0D389: cpu.execute_instruction<0xD1>(0x000016, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:261 BCC @UNKNOWN23
    case 0xC0D38B: cpu.execute_instruction<0x90>(0x0000D5, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:262 LDX @LOCAL03
    case 0xC0D38D: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:263 STX @VIRTUAL02
    case 0xC0D38F: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:264 LDA @LOCAL05
    case 0xC0D391: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:265 CMP @VIRTUAL02
    case 0xC0D393: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:266 BCS @UNKNOWN27
    case 0xC0D395: cpu.execute_instruction<0xB0>(0x000003, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:267 JMP @UNKNOWN33
    case 0xC0D397: cpu.execute_instruction<0x4C>(0x00D43B, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:269 STX @VIRTUAL02
    case 0xC0D39A: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:270 SEC
    case 0xC0D39C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:271 SBC @VIRTUAL02
    case 0xC0D39D: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:272 STA @VIRTUAL04
    case 0xC0D39F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:273 STA @LOCAL02
    case 0xC0D3A1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:274 JMP @UNKNOWN32
    case 0xC0D3A3: cpu.execute_instruction<0x4C>(0x00D426, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:276 LDA #.LOWORD(-1)
    case 0xC0D3A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:276 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0D3A6.
    case 0xC0D3A8: cpu.execute_instruction<0xFF>(0x850285, 4); return true;
    // src/unknown/C0/C0D19B-jp.asm:277 STA @VIRTUAL02
    case 0xC0D3A9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:278 STA @LOCAL01
    case 0xC0D3AB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:278 STA @LOCAL01
    // Overlapping static entry reached from 0xC0D3A8.
    case 0xC0D3AC: cpu.execute_instruction<0x10>(0x0000A0, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:279 LDY #0
    case 0xC0D3AD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:279 LDY #0
    // Overlapping static entry reached from 0xC0D3AC.
    case 0xC0D3AE: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:279 LDY #0
    // Overlapping static entry reached from 0xC0D3AD.
    case 0xC0D3AF: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:280 STY @LOCAL03
    case 0xC0D3B0: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:281 TYA
    case 0xC0D3B2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:282 STA @LOCAL05
    case 0xC0D3B3: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:283 BRA @UNKNOWN31
    case 0xC0D3B5: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // include/macros.asm:601 STA scratch
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:285 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D3B7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:602 ASL
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:285 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D3B9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:603 ASL
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:285 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D3BA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:604 ASL
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:285 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D3BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:605 ADC scratch
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:285 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D3BC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:606 ASL
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:285 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D3BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:286 CLC
    case 0xC0D3BF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:287 ADC @LOCAL04
    case 0xC0D3C0: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:288 TAX
    case 0xC0D3C2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:289 STX @LOCAL07
    case 0xC0D3C3: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:290 LDA a:pathfinding::pathfinders + pathfinder::object_index,X
    case 0xC0D3C5: cpu.execute_instruction<0xBD>(0x0000B0, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:291 ASL
    case 0xC0D3C8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:292 TAX
    case 0xC0D3C9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:293 LDA ENTITY_ENEMY_IDS,X
    case 0xC0D3CA: cpu.execute_instruction<0xBD>(0x003110, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:294 CMP @LOCAL06
    case 0xC0D3CD: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:295 BNE @UNKNOWN30
    case 0xC0D3CF: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:296 LDX @LOCAL07
    case 0xC0D3D1: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:297 LDA a:pathfinding::pathfinders + pathfinder::unknown14,X
    case 0xC0D3D3: cpu.execute_instruction<0xBD>(0x0000AE, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:298 TAX
    case 0xC0D3D6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:299 LDY @LOCAL03
    case 0xC0D3D7: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:300 STY @VIRTUAL02
    case 0xC0D3D9: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:301 TXA
    case 0xC0D3DB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:302 CMP @VIRTUAL02
    case 0xC0D3DC: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:303 BLTEQ @UNKNOWN30
    case 0xC0D3DE: cpu.execute_instruction<0x90>(0x00000B, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:303 BLTEQ @UNKNOWN30
    case 0xC0D3E0: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:304 LDA @LOCAL05
    case 0xC0D3E2: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:305 STA @VIRTUAL02
    case 0xC0D3E4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:306 STA @LOCAL01
    case 0xC0D3E6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:307 TXY
    case 0xC0D3E8: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:308 STY @LOCAL03
    case 0xC0D3E9: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:310 LDA @LOCAL05
    case 0xC0D3EB: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:311 INC
    case 0xC0D3ED: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:312 STA @LOCAL05
    case 0xC0D3EE: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:314 LDY #pathfinding::pathfinder_count
    case 0xC0D3F0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00009E, 2); else cpu.execute_instruction<0xA0>(0x00009E, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:314 LDY #pathfinding::pathfinder_count
    // Overlapping static entry reached from 0xC0D3F0.
    case 0xC0D3F2: cpu.execute_instruction<0x00>(0x0000D1, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:315 CMP (@LOCAL04),Y
    case 0xC0D3F3: cpu.execute_instruction<0xD1>(0x000016, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:316 BCC @UNKNOWN29
    case 0xC0D3F5: cpu.execute_instruction<0x90>(0x0000C0, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:317 LDA @LOCAL01
    case 0xC0D3F7: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:318 STA @VIRTUAL02
    case 0xC0D3F9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:601 STA scratch
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:319 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D3FB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:602 ASL
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:319 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D3FD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:603 ASL
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:319 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D3FE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:604 ASL
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:319 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D3FF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:605 ADC scratch
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:319 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D400: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:606 ASL
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:319 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D402: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:320 CLC
    case 0xC0D403: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:321 ADC @LOCAL04
    case 0xC0D404: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:322 STA @LOCAL03
    case 0xC0D406: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:323 CLC
    case 0xC0D408: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:324 ADC #pathfinding::pathfinders + pathfinder::object_index
    case 0xC0D409: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B0, 2); else cpu.execute_instruction<0x69>(0x0000B0, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:324 ADC #pathfinding::pathfinders + pathfinder::object_index
    // Overlapping static entry reached from 0xC0D409.
    case 0xC0D40B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:325 TAX
    case 0xC0D40C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:326 STX @LOCAL05
    case 0xC0D40D: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:327 LDA __BSS_START__,X
    case 0xC0D40F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:328 CMP @LOCAL09
    case 0xC0D412: cpu.execute_instruction<0xC5>(0x000020, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:329 BEQ @UNKNOWN32
    case 0xC0D414: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:330 LDA @LOCAL03
    case 0xC0D416: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:331 TAX
    case 0xC0D418: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:332 STZ a:pathfinding::pathfinders + pathfinder::unknown14,X
    case 0xC0D419: cpu.execute_instruction<0x9E>(0x0000AE, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:333 LDX @LOCAL05
    case 0xC0D41C: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:334 LDA __BSS_START__,X
    case 0xC0D41E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:334 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D480.
    case 0xC0D41F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:335 ASL
    case 0xC0D421: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:336 TAX
    case 0xC0D422: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:337 STZ ENTITY_PATHFINDING_STATES,X
    case 0xC0D423: cpu.execute_instruction<0x9E>(0x00305C, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:339 LDA @LOCAL02
    case 0xC0D426: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:340 STA @VIRTUAL04
    case 0xC0D428: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:341 LDX @VIRTUAL04
    case 0xC0D42A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:342 LDA @VIRTUAL04
    case 0xC0D42C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:343 DEC
    case 0xC0D42E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:344 STA @VIRTUAL04
    case 0xC0D42F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:345 STA @LOCAL02
    case 0xC0D431: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:346 CPX #0
    case 0xC0D433: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:346 CPX #0
    // Overlapping static entry reached from 0xC0D433.
    case 0xC0D435: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:347 BNEL @UNKNOWN28
    case 0xC0D436: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:347 BNEL @UNKNOWN28
    case 0xC0D438: cpu.execute_instruction<0x4C>(0x00D3A6, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:349 LDA #3
    case 0xC0D43B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:349 LDA #3
    // Overlapping static entry reached from 0xC0D43B.
    case 0xC0D43D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:350 CLC
    case 0xC0D43E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:351 ADC @VIRTUAL06
    case 0xC0D43F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:352 STA @VIRTUAL06
    case 0xC0D441: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:354 INC @LOCAL08
    case 0xC0D443: cpu.execute_instruction<0xE6>(0x00001E, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:356 LDA @LOCAL08
    case 0xC0D445: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:357 CMP #4
    case 0xC0D447: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:357 CMP #4
    // Overlapping static entry reached from 0xC0D447.
    case 0xC0D449: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:358 BNEL @UNKNOWN19
    case 0xC0D44A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0D19B-jp.asm:358 BNEL @UNKNOWN19
    case 0xC0D44C: cpu.execute_instruction<0x4C>(0x00D329, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:359 LDA #0
    case 0xC0D44F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:359 LDA #0
    // Overlapping static entry reached from 0xC0D44F.
    case 0xC0D451: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:360 STA @LOCAL05
    case 0xC0D452: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:361 BRA @UNKNOWN40
    case 0xC0D454: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:363 CMP @LOCAL09
    case 0xC0D456: cpu.execute_instruction<0xC5>(0x000020, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:364 BEQ @UNKNOWN39
    case 0xC0D458: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:365 ASL
    case 0xC0D45A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:366 TAX
    case 0xC0D45B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:367 LDA ENTITY_PATHFINDING_STATES,X
    case 0xC0D45C: cpu.execute_instruction<0xBD>(0x00305C, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:368 CMP #.LOWORD(-1)
    case 0xC0D45F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:368 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0D45F.
    case 0xC0D461: cpu.execute_instruction<0xFF>(0x8A11D0, 4); return true;
    // src/unknown/C0/C0D19B-jp.asm:369 BNE @UNKNOWN38
    case 0xC0D462: cpu.execute_instruction<0xD0>(0x000011, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:370 TXA
    case 0xC0D464: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:371 CLC
    case 0xC0D465: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:372 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC0D466: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:372 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC0D466.
    case 0xC0D468: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:373 TAX
    case 0xC0D469: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:374 LDA __BSS_START__,X
    case 0xC0D46A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:375 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xC0D46D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x003FFF, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:375 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xC0D46D.
    case 0xC0D46F: cpu.execute_instruction<0x3F>(0x00009D, 4); return true;
    // src/unknown/C0/C0D19B-jp.asm:376 STA __BSS_START__,X
    case 0xC0D470: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:377 BRA @UNKNOWN39
    case 0xC0D473: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:379 TXA
    case 0xC0D475: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:380 CLC
    case 0xC0D476: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:381 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC0D477: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x001160, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:381 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC0D477.
    case 0xC0D479: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:382 TAX
    case 0xC0D47A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:383 LDA __BSS_START__,X
    case 0xC0D47B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:384 ORA #$8000
    case 0xC0D47E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:384 ORA #$8000
    // Overlapping static entry reached from 0xC0D47E.
    case 0xC0D480: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:385 STA __BSS_START__,X
    case 0xC0D481: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:387 LDA @LOCAL05
    case 0xC0D484: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:388 INC
    case 0xC0D486: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:389 STA @LOCAL05
    case 0xC0D487: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:391 CMP #23
    case 0xC0D489: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:391 CMP #23
    // Overlapping static entry reached from 0xC0D489.
    case 0xC0D48B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:392 BNE @UNKNOWN37
    case 0xC0D48C: cpu.execute_instruction<0xD0>(0x0000C8, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:393 LDA @LOCAL09
    case 0xC0D48E: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C0D19B-jp.asm:394 ASL
    case 0xC0D490: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:395 TAX
    case 0xC0D491: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:396 STZ ENTITY_PATHFINDING_STATES,X
    case 0xC0D492: cpu.execute_instruction<0x9E>(0x00305C, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:397 LDA ENEMIES_IN_BATTLE
    case 0xC0D495: cpu.execute_instruction<0xAD>(0x00A18C, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:398 ASL
    case 0xC0D498: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:399 PHA
    case 0xC0D499: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:400 LDA ENTITY_ENEMY_IDS,X
    case 0xC0D49A: cpu.execute_instruction<0xBD>(0x003110, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:401 PLX
    case 0xC0D49D: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:402 STA ENEMIES_IN_BATTLE_IDS,X
    case 0xC0D49E: cpu.execute_instruction<0x9D>(0x00A18E, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:403 INC ENEMIES_IN_BATTLE
    case 0xC0D4A1: cpu.execute_instruction<0xEE>(0x00A18C, 3); return true;
    // src/unknown/C0/C0D19B-jp.asm:404 PLD
    case 0xC0D4A4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B-jp.asm:405 RTL
    case 0xC0D4A5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D4DE.asm (unresolved).
bool execute_unresolved_c0_c0d4de_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0D4DE.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0D4A6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0D4DE.asm:10 END_STACK_VARS
    case 0xC0D4A8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0D4DE.asm:10 END_STACK_VARS
    case 0xC0D4A9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D4DE.asm:10 END_STACK_VARS
    case 0xC0D4AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D4DE.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC0D4AA.
    case 0xC0D4AC: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0D4DE.asm:10 END_STACK_VARS
    case 0xC0D4AD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0D4DE.asm:11 LOADPTR BUFFER + $2000, @LOCAL00
    case 0xC0D4AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0D4DE.asm:11 LOADPTR BUFFER + $2000, @LOCAL00
    // Overlapping static entry reached from 0xC0D4AE.
    case 0xC0D4B0: cpu.execute_instruction<0x20>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0D4DE.asm:11 LOADPTR BUFFER + $2000, @LOCAL00
    case 0xC0D4B1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0D4DE.asm:11 LOADPTR BUFFER + $2000, @LOCAL00
    case 0xC0D4B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0D4DE.asm:11 LOADPTR BUFFER + $2000, @LOCAL00
    // Overlapping static entry reached from 0xC0D4B3.
    case 0xC0D4B5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0D4DE.asm:11 LOADPTR BUFFER + $2000, @LOCAL00
    case 0xC0D4B6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C0/C0D4DE.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0D4B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C0/C0D4DE.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0D4B8.
    case 0xC0D4BA: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C0D4DE.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0D4BB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C0D4DE.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0D4BD: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0D4DE.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0D4BE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C0D4DE.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0D4C0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0D4DE.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0D4C1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0D4DE.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0D4C3: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C0D4DE.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC0D4C5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0D4DE.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0D4C7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0D4DE.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0D4C9: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0D4DE.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0D4CB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0D4DE.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0D4CD: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0D4DE.asm:15 LDA #.LOWORD(PALETTES)
    case 0xC0D4CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C0/C0D4DE.asm:15 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0D4CF.
    case 0xC0D4D1: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C0/C0D4DE.asm:16 JSL MEMCPY24
    case 0xC0D4D2: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // src/unknown/C0/C0D4DE.asm:17 LDA #0
    case 0xC0D4D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D4DE.asm:17 LDA #0
    // Overlapping static entry reached from 0xC0D4D6.
    case 0xC0D4D8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D4DE.asm:18 STA @VIRTUAL04
    case 0xC0D4D9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0D4DE.asm:19 BRA @UNKNOWN1
    case 0xC0D4DB: cpu.execute_instruction<0x80>(0x000071, 2); return true;
    // src/unknown/C0/C0D4DE.asm:21 LDA @VIRTUAL04
    case 0xC0D4DD: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0D4DE.asm:22 ASL
    case 0xC0D4DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:23 CLC
    case 0xC0D4E0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:24 ADC #.LOWORD(PALETTES)
    case 0xC0D4E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000200, 3); return true;
    // src/unknown/C0/C0D4DE.asm:24 ADC #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0D4E1.
    case 0xC0D4E3: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/unknown/C0/C0D4DE.asm:25 TAY
    case 0xC0D4E4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:26 STY @LOCAL04
    case 0xC0D4E5: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/unknown/C0/C0D4DE.asm:27 LDA __BSS_START__,Y
    case 0xC0D4E7: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0D4DE.asm:28 STA @LOCAL03
    case 0xC0D4EA: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0D4DE.asm:29 AND #$001F
    case 0xC0D4EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C0/C0D4DE.asm:29 AND #$001F
    // Overlapping static entry reached from 0xC0D4EC.
    case 0xC0D4EE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C0D4DE.asm:30 TAX
    case 0xC0D4EF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:31 STX @LOCAL02
    case 0xC0D4F0: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C0/C0D4DE.asm:32 LDA @LOCAL03
    case 0xC0D4F2: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0D4DE.asm:33 LSR
    case 0xC0D4F4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:34 LSR
    case 0xC0D4F5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:35 LSR
    case 0xC0D4F6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:36 LSR
    case 0xC0D4F7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:37 LSR
    case 0xC0D4F8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:38 AND #$001F
    case 0xC0D4F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C0/C0D4DE.asm:38 AND #$001F
    // Overlapping static entry reached from 0xC0D4F9.
    case 0xC0D4FB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D4DE.asm:39 STA @VIRTUAL02
    case 0xC0D4FC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D4DE.asm:40 SEP #PROC_FLAGS::ACCUM8
    case 0xC0D4FE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0D4DE.asm:41 LDA #10
    case 0xC0D500: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00E20A, 3); return true;
    // src/unknown/C0/C0D4DE.asm:42 SEP #PROC_FLAGS::INDEX8
    case 0xC0D502: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C0/C0D4DE.asm:42 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC0D500.
    case 0xC0D503: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C0/C0D4DE.asm:43 TAY
    case 0xC0D504: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC0D505: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0D4DE.asm:45 LDA @LOCAL03
    case 0xC0D507: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0D4DE.asm:46 JSL ASR8_UNKNOWN1
    case 0xC0D509: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/unknown/C0/C0D4DE.asm:47 AND #$001F
    case 0xC0D50D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C0/C0D4DE.asm:47 AND #$001F
    // Overlapping static entry reached from 0xC0D50D.
    case 0xC0D50F: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C0/C0D4DE.asm:48 REP #PROC_FLAGS::INDEX8
    case 0xC0D510: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C0/C0D4DE.asm:49 LDY #3
    case 0xC0D512: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C0/C0D4DE.asm:49 LDY #3
    // Overlapping static entry reached from 0xC0D512.
    case 0xC0D514: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C0/C0D4DE.asm:50 PHA
    case 0xC0D515: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:51 LDX @LOCAL02
    case 0xC0D516: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C0/C0D4DE.asm:52 TXA
    case 0xC0D518: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:53 CLC
    case 0xC0D519: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:54 ADC @VIRTUAL02
    case 0xC0D51A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0D4DE.asm:55 PLX
    case 0xC0D51C: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:56 STX @VIRTUAL02
    case 0xC0D51D: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0D4DE.asm:57 CLC
    case 0xC0D51F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:58 ADC @VIRTUAL02
    case 0xC0D520: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0D4DE.asm:59 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC0D522: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/unknown/C0/C0D4DE.asm:60 STA @LOCAL02
    case 0xC0D526: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0D4DE.asm:61 SEP #PROC_FLAGS::INDEX8
    case 0xC0D528: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C0/C0D4DE.asm:62 LDY #10
    case 0xC0D52A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00220A, 3); return true;
    // src/unknown/C0/C0D4DE.asm:63 JSL ASL16_ENTRY2
    case 0xC0D52C: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/unknown/C0/C0D4DE.asm:63 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC0D52A.
    case 0xC0D52D: cpu.execute_instruction<0x20>(0x00C092, 3); return true;
    // src/unknown/C0/C0D4DE.asm:64 PHA
    case 0xC0D530: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:65 LDA @LOCAL02
    case 0xC0D531: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0D4DE.asm:66 ASL
    case 0xC0D533: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:67 ASL
    case 0xC0D534: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:68 ASL
    case 0xC0D535: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:69 ASL
    case 0xC0D536: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:70 ASL
    case 0xC0D537: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:71 STA @VIRTUAL02
    case 0xC0D538: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D4DE.asm:72 LDA @LOCAL02
    case 0xC0D53A: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0D4DE.asm:73 CLC
    case 0xC0D53C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:74 ADC @VIRTUAL02
    case 0xC0D53D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0D4DE.asm:75 REP #PROC_FLAGS::INDEX8
    case 0xC0D53F: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C0/C0D4DE.asm:76 PLY
    case 0xC0D541: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:77 STY @VIRTUAL02
    case 0xC0D542: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0D4DE.asm:78 CLC
    case 0xC0D544: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:79 ADC @VIRTUAL02
    case 0xC0D545: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0D4DE.asm:80 LDY @LOCAL04
    case 0xC0D547: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C0/C0D4DE.asm:81 STA __BSS_START__,Y
    case 0xC0D549: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0D4DE.asm:82 INC @VIRTUAL04
    case 0xC0D54C: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C0/C0D4DE.asm:84 LDA @VIRTUAL04
    case 0xC0D54E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0D4DE.asm:85 CMP #BPP4PALETTE_SIZE * 4
    case 0xC0D550: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000080, 3); return true;
    // src/unknown/C0/C0D4DE.asm:85 CMP #BPP4PALETTE_SIZE * 4
    // Overlapping static entry reached from 0xC0D550.
    case 0xC0D552: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C0D4DE.asm:86 BCCL @UNKNOWN0
    case 0xC0D553: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C0D4DE.asm:86 BCCL @UNKNOWN0
    case 0xC0D555: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C0D4DE.asm:86 BCCL @UNKNOWN0
    case 0xC0D557: cpu.execute_instruction<0x4C>(0x00D4DD, 3); return true;
    // src/unknown/C0/C0D4DE.asm:87 LDA #24
    case 0xC0D55A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C0D4DE.asm:87 LDA #24
    // Overlapping static entry reached from 0xC0D55A.
    case 0xC0D55C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0D4DE.asm:88 JSL UNKNOWN_C0856B
    case 0xC0D55D: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0D4DE.asm:89 END_C_FUNCTION
    case 0xC0D561: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0D4DE.asm:89 END_C_FUNCTION
    case 0xC0D562: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D59B.asm (unresolved).
bool execute_unresolved_c0_c0d59b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0D59B.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0D563: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0D59B.asm:4 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0D565: cpu.execute_instruction<0xAD>(0x0060E6, 3); return true;
    // src/unknown/C0/C0D59B.asm:5 BNE @UNKNOWN0
    case 0xC0D568: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0D59B.asm:6 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC0D56A: cpu.execute_instruction<0xAD>(0x005140, 3); return true;
    // src/unknown/C0/C0D59B.asm:7 BEQ @UNKNOWN1
    case 0xC0D56D: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0D59B.asm:9 LDA #$0001
    case 0xC0D56F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0D59B.asm:9 LDA #$0001
    // Overlapping static entry reached from 0xC0D56F.
    case 0xC0D571: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0D59B.asm:10 BRA @UNKNOWN2
    case 0xC0D572: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0D59B.asm:12 LDA #$0000
    case 0xC0D574: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D59B.asm:12 LDA #$0000
    // Overlapping static entry reached from 0xC0D574.
    case 0xC0D576: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/unknown/C0/C0D59B.asm:14 RTL
    case 0xC0D577: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D5B0.asm (unresolved).
bool execute_unresolved_c0_c0d5b0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0D5B0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0D578: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0D5B0.asm:10 END_STACK_VARS
    case 0xC0D57A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0D5B0.asm:10 END_STACK_VARS
    case 0xC0D57B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D5B0.asm:10 END_STACK_VARS
    case 0xC0D57C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D5B0.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC0D57C.
    case 0xC0D57E: cpu.execute_instruction<0xFF>(0x48AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0D5B0.asm:10 END_STACK_VARS
    case 0xC0D57F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:11 LDA BATTLE_MODE
    case 0xC0D580: cpu.execute_instruction<0xAD>(0x005148, 3); return true;
    // src/unknown/C0/C0D5B0.asm:11 LDA BATTLE_MODE
    // Overlapping static entry reached from 0xC0D57E.
    case 0xC0D582: cpu.execute_instruction<0x51>(0x0000F0, 2); return true;
    // src/unknown/C0/C0D5B0.asm:12 BEQ @UNKNOWN0
    case 0xC0D583: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0D5B0.asm:12 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC0D582.
    case 0xC0D584: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // src/unknown/C0/C0D5B0.asm:13 LDA #0
    case 0xC0D585: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:13 LDA #0
    // Overlapping static entry reached from 0xC0D584.
    case 0xC0D586: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D5B0.asm:13 LDA #0
    // Overlapping static entry reached from 0xC0D585.
    case 0xC0D587: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0D5B0.asm:14 JMP @UNKNOWN25
    case 0xC0D588: cpu.execute_instruction<0x4C>(0x00D745, 3); return true;
    // src/unknown/C0/C0D5B0.asm:16 LDA USING_DOOR
    case 0xC0D58B: cpu.execute_instruction<0xAD>(0x006148, 3); return true;
    // src/unknown/C0/C0D5B0.asm:17 BEQ @UNKNOWN1
    case 0xC0D58E: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0D5B0.asm:18 LDA #0
    case 0xC0D590: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:18 LDA #0
    // Overlapping static entry reached from 0xC0D590.
    case 0xC0D592: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0D5B0.asm:19 JMP @UNKNOWN25
    case 0xC0D593: cpu.execute_instruction<0x4C>(0x00D745, 3); return true;
    // src/unknown/C0/C0D5B0.asm:21 LDA CURRENT_ENTITY_SLOT
    case 0xC0D596: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0D5B0.asm:22 STA @VIRTUAL02
    case 0xC0D599: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D5B0.asm:23 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0D59B: cpu.execute_instruction<0xAD>(0x0060E6, 3); return true;
    // src/unknown/C0/C0D5B0.asm:24 BEQ @UNKNOWN2
    case 0xC0D59E: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C0D5B0.asm:25 LDA @VIRTUAL02
    case 0xC0D5A0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D5B0.asm:26 CMP TOUCHED_ENEMY
    case 0xC0D5A2: cpu.execute_instruction<0xCD>(0x00513C, 3); return true;
    // src/unknown/C0/C0D5B0.asm:27 BEQ @UNKNOWN8
    case 0xC0D5A5: cpu.execute_instruction<0xF0>(0x000052, 2); return true;
    // src/unknown/C0/C0D5B0.asm:29 LDA GAME_STATE + game_state::unknownB0
    case 0xC0D5A7: cpu.execute_instruction<0xAD>(0x009B56, 3); return true;
    // src/unknown/C0/C0D5B0.asm:30 CMP #2
    case 0xC0D5AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0D5B0.asm:30 CMP #2
    // Overlapping static entry reached from 0xC0D5AA.
    case 0xC0D5AC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D5B0.asm:31 BNE @UNKNOWN3
    case 0xC0D5AD: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0D5B0.asm:32 LDA #0
    case 0xC0D5AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:32 LDA #0
    // Overlapping static entry reached from 0xC0D5AF.
    case 0xC0D5B1: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0D5B0.asm:33 JMP @UNKNOWN25
    case 0xC0D5B2: cpu.execute_instruction<0x4C>(0x00D745, 3); return true;
    // src/unknown/C0/C0D5B0.asm:35 LDA PLAYER_MOVEMENT_FLAGS
    case 0xC0D5B5: cpu.execute_instruction<0xAD>(0x0060DC, 3); return true;
    // src/unknown/C0/C0D5B0.asm:36 AND #02
    case 0xC0D5B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/unknown/C0/C0D5B0.asm:36 AND #02
    // Overlapping static entry reached from 0xC0D5B8.
    case 0xC0D5BA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0D5B0.asm:37 BEQ @UNKNOWN4
    case 0xC0D5BB: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0D5B0.asm:38 LDA #0
    case 0xC0D5BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:38 LDA #0
    // Overlapping static entry reached from 0xC0D5BD.
    case 0xC0D5BF: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0D5B0.asm:39 JMP @UNKNOWN25
    case 0xC0D5C0: cpu.execute_instruction<0x4C>(0x00D745, 3); return true;
    // src/unknown/C0/C0D5B0.asm:41 LDA GAME_STATE+game_state::walking_style
    case 0xC0D5C3: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/unknown/C0/C0D5B0.asm:42 CMP #WALKING_STYLE::ESCALATOR
    case 0xC0D5C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/unknown/C0/C0D5B0.asm:42 CMP #WALKING_STYLE::ESCALATOR
    // Overlapping static entry reached from 0xC0D5C6.
    case 0xC0D5C8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D5B0.asm:43 BNE @UNKNOWN5
    case 0xC0D5C9: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0D5B0.asm:44 LDA #0
    case 0xC0D5CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:44 LDA #0
    // Overlapping static entry reached from 0xC0D5CB.
    case 0xC0D5CD: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0D5B0.asm:45 JMP @UNKNOWN25
    case 0xC0D5CE: cpu.execute_instruction<0x4C>(0x00D745, 3); return true;
    // src/unknown/C0/C0D5B0.asm:47 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC0D5D1: cpu.execute_instruction<0xAD>(0x0060DE, 3); return true;
    // src/unknown/C0/C0D5B0.asm:48 BEQ @UNKNOWN6
    case 0xC0D5D4: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0D5B0.asm:49 LDA #0
    case 0xC0D5D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:49 LDA #0
    // Overlapping static entry reached from 0xC0D5D6.
    case 0xC0D5D8: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0D5B0.asm:50 JMP @UNKNOWN25
    case 0xC0D5D9: cpu.execute_instruction<0x4C>(0x00D745, 3); return true;
    // src/unknown/C0/C0D5B0.asm:52 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0D5DC: cpu.execute_instruction<0xAD>(0x0060E6, 3); return true;
    // src/unknown/C0/C0D5B0.asm:53 BEQ @UNKNOWN7
    case 0xC0D5DF: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C0/C0D5B0.asm:54 LDA @VIRTUAL02
    case 0xC0D5E1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D5B0.asm:55 ASL
    case 0xC0D5E3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:56 TAX
    case 0xC0D5E4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:57 LDA ENTITY_PATH_POINT_COUNTS,X
    case 0xC0D5E5: cpu.execute_instruction<0xBD>(0x00323C, 3); return true;
    // src/unknown/C0/C0D5B0.asm:58 BEQ @UNKNOWN8
    case 0xC0D5E8: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C0/C0D5B0.asm:60 JSL UNKNOWN_C0D15C
    case 0xC0D5EA: cpu.execute_instruction<0x22>(0xC0D126, 4); return true;
    // src/unknown/C0/C0D5B0.asm:61 CMP #0
    case 0xC0D5EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:61 CMP #0
    // Overlapping static entry reached from 0xC0D5EE.
    case 0xC0D5F0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D5B0.asm:62 BNE @UNKNOWN8
    case 0xC0D5F1: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0D5B0.asm:63 LDA #0
    case 0xC0D5F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:63 LDA #0
    // Overlapping static entry reached from 0xC0D5F3.
    case 0xC0D5F5: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0D5B0.asm:64 JMP @UNKNOWN25
    case 0xC0D5F6: cpu.execute_instruction<0x4C>(0x00D745, 3); return true;
    // src/unknown/C0/C0D5B0.asm:66 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0D5F9: cpu.execute_instruction<0xAD>(0x0060E6, 3); return true;
    // src/unknown/C0/C0D5B0.asm:67 BNE @UNKNOWN9
    case 0xC0D5FC: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/unknown/C0/C0D5B0.asm:68 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC0D5FE: cpu.execute_instruction<0xAD>(0x005140, 3); return true;
    // src/unknown/C0/C0D5B0.asm:69 BNE @UNKNOWN9
    case 0xC0D601: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/unknown/C0/C0D5B0.asm:70 LDA @VIRTUAL02
    case 0xC0D603: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D5B0.asm:71 ASL
    case 0xC0D605: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:72 TAX
    case 0xC0D606: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:73 LDA ENTITY_ENEMY_IDS,X
    case 0xC0D607: cpu.execute_instruction<0xBD>(0x003110, 3); return true;
    // src/unknown/C0/C0D5B0.asm:74 CMP #ENEMY::MAGIC_BUTTERFLY
    case 0xC0D60A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E1, 2); else cpu.execute_instruction<0xC9>(0x0000E1, 3); return true;
    // src/unknown/C0/C0D5B0.asm:74 CMP #ENEMY::MAGIC_BUTTERFLY
    // Overlapping static entry reached from 0xC0D60A.
    case 0xC0D60C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D5B0.asm:75 BNE @UNKNOWN9
    case 0xC0D60D: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0D5B0.asm:76 LDA #1
    case 0xC0D60F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0D5B0.asm:76 LDA #1
    // Overlapping static entry reached from 0xC0D60F.
    case 0xC0D611: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0D5B0.asm:77 JMP @UNKNOWN25
    case 0xC0D612: cpu.execute_instruction<0x4C>(0x00D745, 3); return true;
    // src/unknown/C0/C0D5B0.asm:79 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0D615: cpu.execute_instruction<0xAD>(0x0060E6, 3); return true;
    // src/unknown/C0/C0D5B0.asm:80 BNE @UNKNOWN15
    case 0xC0D618: cpu.execute_instruction<0xD0>(0x00005C, 2); return true;
    // src/unknown/C0/C0D5B0.asm:81 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC0D61A: cpu.execute_instruction<0xAD>(0x005140, 3); return true;
    // src/unknown/C0/C0D5B0.asm:81 LDA ENEMY_HAS_BEEN_TOUCHED
    // Overlapping static entry reached from 0xC0D67C.
    case 0xC0D61B: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:82 BNE @UNKNOWN15
    case 0xC0D61D: cpu.execute_instruction<0xD0>(0x000057, 2); return true;
    // src/unknown/C0/C0D5B0.asm:83 LDA #1
    case 0xC0D61F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0D5B0.asm:83 LDA #1
    // Overlapping static entry reached from 0xC0D61F.
    case 0xC0D621: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0D5B0.asm:84 STA ENEMY_HAS_BEEN_TOUCHED
    case 0xC0D622: cpu.execute_instruction<0x8D>(0x005140, 3); return true;
    // src/unknown/C0/C0D5B0.asm:85 JSL UNKNOWN_C0D4DE
    case 0xC0D625: cpu.execute_instruction<0x22>(0xC0D4A6, 4); return true;
    // src/unknown/C0/C0D5B0.asm:86 LDA @VIRTUAL02
    case 0xC0D629: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D5B0.asm:87 CMP ENTITY_COLLIDED_OBJECTS+46
    case 0xC0D62B: cpu.execute_instruction<0xCD>(0x002CCA, 3); return true;
    // src/unknown/C0/C0D5B0.asm:88 BNE @UNKNOWN10
    case 0xC0D62E: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C0/C0D5B0.asm:89 LDA #24
    case 0xC0D630: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C0D5B0.asm:89 LDA #24
    // Overlapping static entry reached from 0xC0D630.
    case 0xC0D632: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0D5B0.asm:90 STA ENEMY_PATHFINDING_TARGET_ENTITY
    case 0xC0D633: cpu.execute_instruction<0x8D>(0x00513E, 3); return true;
    // src/unknown/C0/C0D5B0.asm:91 BRA @UNKNOWN11
    case 0xC0D636: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C0/C0D5B0.asm:93 LDA @VIRTUAL02
    case 0xC0D638: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D5B0.asm:94 ASL
    case 0xC0D63A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:95 TAX
    case 0xC0D63B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:96 LDA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0D63C: cpu.execute_instruction<0xBD>(0x002C9C, 3); return true;
    // src/unknown/C0/C0D5B0.asm:97 STA ENEMY_PATHFINDING_TARGET_ENTITY
    case 0xC0D63F: cpu.execute_instruction<0x8D>(0x00513E, 3); return true;
    // src/unknown/C0/C0D5B0.asm:97 STA ENEMY_PATHFINDING_TARGET_ENTITY
    // Overlapping static entry reached from 0xC0D695.
    case 0xC0D641: cpu.execute_instruction<0x51>(0x0000A5, 2); return true;
    // src/unknown/C0/C0D5B0.asm:99 LDA @VIRTUAL02
    case 0xC0D642: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D5B0.asm:99 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC0D641.
    case 0xC0D643: cpu.execute_instruction<0x02>(0x00008D, 2); return true;
    // src/unknown/C0/C0D5B0.asm:100 STA TOUCHED_ENEMY
    case 0xC0D644: cpu.execute_instruction<0x8D>(0x00513C, 3); return true;
    // src/unknown/C0/C0D5B0.asm:101 LDA #0
    case 0xC0D647: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:101 LDA #0
    // Overlapping static entry reached from 0xC0D647.
    case 0xC0D649: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D5B0.asm:102 STA @LOCAL03
    case 0xC0D64A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0D5B0.asm:103 BRA @UNKNOWN14
    case 0xC0D64C: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C0/C0D5B0.asm:105 CMP #23
    case 0xC0D64E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/unknown/C0/C0D5B0.asm:105 CMP #23
    // Overlapping static entry reached from 0xC0D64E.
    case 0xC0D650: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0D5B0.asm:106 BEQ @UNKNOWN13
    case 0xC0D651: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C0/C0D5B0.asm:107 ASL
    case 0xC0D653: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:108 CLC
    case 0xC0D654: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:109 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC0D655: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/unknown/C0/C0D5B0.asm:109 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC0D655.
    case 0xC0D657: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C0/C0D5B0.asm:110 TAX
    case 0xC0D658: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:111 LDA __BSS_START__,X
    case 0xC0D659: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:112 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC0D65C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:112 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC0D65C.
    case 0xC0D65E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C0/C0D5B0.asm:113 STA __BSS_START__,X
    case 0xC0D65F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:113 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D65E.
    case 0xC0D660: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D5B0.asm:113 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D65E.
    case 0xC0D661: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C0D5B0.asm:115 LDA @LOCAL03
    case 0xC0D662: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0D5B0.asm:116 INC
    case 0xC0D664: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:117 STA @LOCAL03
    case 0xC0D665: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0D5B0.asm:119 CMP #MAX_ENTITIES
    case 0xC0D667: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C0/C0D5B0.asm:119 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC0D667.
    case 0xC0D669: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0D5B0.asm:120 BCC @UNKNOWN12
    case 0xC0D66A: cpu.execute_instruction<0x90>(0x0000E2, 2); return true;
    // src/unknown/C0/C0D5B0.asm:121 JSL UNKNOWN_C04A88
    case 0xC0D66C: cpu.execute_instruction<0x22>(0xC04CFE, 4); return true;
    // src/unknown/C0/C0D5B0.asm:122 LDA #1
    case 0xC0D670: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0D5B0.asm:122 LDA #1
    // Overlapping static entry reached from 0xC0D670.
    case 0xC0D672: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0D5B0.asm:123 JMP @UNKNOWN25
    case 0xC0D673: cpu.execute_instruction<0x4C>(0x00D745, 3); return true;
    // src/unknown/C0/C0D5B0.asm:125 LDA @VIRTUAL02
    case 0xC0D676: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D5B0.asm:126 ASL
    case 0xC0D678: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:127 TAX
    case 0xC0D679: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:128 LDA #ENTITY_COLLISION_DISABLED
    case 0xC0D67A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:128 LDA #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC0D67A.
    case 0xC0D67C: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/C0/C0D5B0.asm:129 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0D67D: cpu.execute_instruction<0x9D>(0x002C9C, 3); return true;
    // src/unknown/C0/C0D5B0.asm:130 STZ @LOCAL02
    case 0xC0D680: cpu.execute_instruction<0x64>(0x000012, 2); return true;
    // src/unknown/C0/C0D5B0.asm:131 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0D682: cpu.execute_instruction<0xAD>(0x0060E6, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0D5B0.asm:132 BEQL @UNKNOWN24
    case 0xC0D685: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0D5B0.asm:132 BEQL @UNKNOWN24
    case 0xC0D687: cpu.execute_instruction<0x4C>(0x00D743, 3); return true;
    // src/unknown/C0/C0D5B0.asm:133 LDA @VIRTUAL02
    case 0xC0D68A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D5B0.asm:134 CMP TOUCHED_ENEMY
    case 0xC0D68C: cpu.execute_instruction<0xCD>(0x00513C, 3); return true;
    // src/unknown/C0/C0D5B0.asm:135 BNE @UNKNOWN17
    case 0xC0D68F: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/unknown/C0/C0D5B0.asm:136 TXA
    case 0xC0D691: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:137 CLC
    case 0xC0D692: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:138 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC0D693: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/unknown/C0/C0D5B0.asm:138 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC0D693.
    case 0xC0D695: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C0/C0D5B0.asm:139 TAX
    case 0xC0D696: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:140 LDA __BSS_START__,X
    case 0xC0D697: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:141 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC0D69A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:141 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC0D69A.
    case 0xC0D69C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C0/C0D5B0.asm:142 STA __BSS_START__,X
    case 0xC0D69D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:142 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D69C.
    case 0xC0D69E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D5B0.asm:142 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D69C.
    case 0xC0D69F: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C0D5B0.asm:143 LDA #1
    case 0xC0D6A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0D5B0.asm:143 LDA #1
    // Overlapping static entry reached from 0xC0D6A0.
    case 0xC0D6A2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D5B0.asm:144 STA @LOCAL02
    case 0xC0D6A3: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0D5B0.asm:145 JMP @UNKNOWN24
    case 0xC0D6A5: cpu.execute_instruction<0x4C>(0x00D743, 3); return true;
    // src/unknown/C0/C0D5B0.asm:147 LDA ENTITY_ENEMY_IDS,X
    case 0xC0D6A8: cpu.execute_instruction<0xBD>(0x003110, 3); return true;
    // src/unknown/C0/C0D5B0.asm:148 STA @VIRTUAL04
    case 0xC0D6AB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0D5B0.asm:149 LDY #0
    case 0xC0D6AD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:149 LDY #0
    // Overlapping static entry reached from 0xC0D6AD.
    case 0xC0D6AF: cpu.execute_instruction<0x00>(0x000064, 2); return true;
    // src/unknown/C0/C0D5B0.asm:150 STZ @LOCAL02
    case 0xC0D6B0: cpu.execute_instruction<0x64>(0x000012, 2); return true;
    // src/unknown/C0/C0D5B0.asm:151 TYA
    case 0xC0D6B2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:152 STA @LOCAL01
    case 0xC0D6B3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0D5B0.asm:153 BRA @UNKNOWN20
    case 0xC0D6B5: cpu.execute_instruction<0x80>(0x00004E, 2); return true;
    // src/unknown/C0/C0D5B0.asm:155 ASL
    case 0xC0D6B7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:156 TAX
    case 0xC0D6B8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:157 LDA @VIRTUAL04
    case 0xC0D6B9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0D5B0.asm:158 CMP PATHFINDING_ENEMY_IDS,X
    case 0xC0D6BB: cpu.execute_instruction<0xDD>(0x004E02, 3); return true;
    // src/unknown/C0/C0D5B0.asm:159 BNE @UNKNOWN19
    case 0xC0D6BE: cpu.execute_instruction<0xD0>(0x000036, 2); return true;
    // src/unknown/C0/C0D5B0.asm:160 TXA
    case 0xC0D6C0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:161 CLC
    case 0xC0D6C1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:162 ADC #.LOWORD(PATHFINDING_ENEMY_COUNTS)
    case 0xC0D6C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x004E0A, 3); return true;
    // src/unknown/C0/C0D5B0.asm:162 ADC #.LOWORD(PATHFINDING_ENEMY_COUNTS)
    // Overlapping static entry reached from 0xC0D6C2.
    case 0xC0D6C4: cpu.execute_instruction<0x4E>(0x00BDAA, 3); return true;
    // src/unknown/C0/C0D5B0.asm:163 TAX
    case 0xC0D6C5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:164 LDA __BSS_START__,X
    case 0xC0D6C6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:164 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D6C4.
    case 0xC0D6C7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D5B0.asm:165 STA @LOCAL00
    case 0xC0D6C9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0D5B0.asm:166 BEQ @UNKNOWN19
    case 0xC0D6CB: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/unknown/C0/C0D5B0.asm:167 LDA @LOCAL00
    case 0xC0D6CD: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0D5B0.asm:168 DEC
    case 0xC0D6CF: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:169 STA __BSS_START__,X
    case 0xC0D6D0: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:170 LDA #1
    case 0xC0D6D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0D5B0.asm:170 LDA #1
    // Overlapping static entry reached from 0xC0D728.
    case 0xC0D6D4: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C0D5B0.asm:170 LDA #1
    // Overlapping static entry reached from 0xC0D6D3.
    case 0xC0D6D5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D5B0.asm:171 STA @LOCAL02
    case 0xC0D6D6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0D5B0.asm:172 LDA @VIRTUAL02
    case 0xC0D6D8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D5B0.asm:173 ASL
    case 0xC0D6DA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:174 CLC
    case 0xC0D6DB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:175 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC0D6DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/unknown/C0/C0D5B0.asm:175 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC0D6DC.
    case 0xC0D6DE: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C0/C0D5B0.asm:176 TAX
    case 0xC0D6DF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:177 LDA __BSS_START__,X
    case 0xC0D6E0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:178 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC0D6E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:178 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC0D6E3.
    case 0xC0D6E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C0/C0D5B0.asm:179 STA __BSS_START__,X
    case 0xC0D6E6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:179 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D6E5.
    case 0xC0D6E7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D5B0.asm:179 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D6E5.
    case 0xC0D6E8: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C0/C0D5B0.asm:180 LDA ENEMIES_IN_BATTLE
    case 0xC0D6E9: cpu.execute_instruction<0xAD>(0x00A18C, 3); return true;
    // src/unknown/C0/C0D5B0.asm:181 ASL
    case 0xC0D6EC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:182 TAX
    case 0xC0D6ED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:183 LDA @VIRTUAL04
    case 0xC0D6EE: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0D5B0.asm:184 STA ENEMIES_IN_BATTLE_IDS,X
    case 0xC0D6F0: cpu.execute_instruction<0x9D>(0x00A18E, 3); return true;
    // src/unknown/C0/C0D5B0.asm:185 INC ENEMIES_IN_BATTLE
    case 0xC0D6F3: cpu.execute_instruction<0xEE>(0x00A18C, 3); return true;
    // src/unknown/C0/C0D5B0.asm:187 LDA @LOCAL01
    case 0xC0D6F6: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0D5B0.asm:188 ASL
    case 0xC0D6F8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:189 TAX
    case 0xC0D6F9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:190 TYA
    case 0xC0D6FA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:191 CLC
    case 0xC0D6FB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:192 ADC PATHFINDING_ENEMY_COUNTS,X
    case 0xC0D6FC: cpu.execute_instruction<0x7D>(0x004E0A, 3); return true;
    // src/unknown/C0/C0D5B0.asm:193 TAY
    case 0xC0D6FF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:194 LDA @LOCAL01
    case 0xC0D700: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0D5B0.asm:195 INC
    case 0xC0D702: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:196 STA @LOCAL01
    case 0xC0D703: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0D5B0.asm:198 CMP #4
    case 0xC0D705: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0D5B0.asm:198 CMP #4
    // Overlapping static entry reached from 0xC0D705.
    case 0xC0D707: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D5B0.asm:199 BNE @UNKNOWN18
    case 0xC0D708: cpu.execute_instruction<0xD0>(0x0000AD, 2); return true;
    // src/unknown/C0/C0D5B0.asm:200 CPY #0
    case 0xC0D70A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:200 CPY #0
    // Overlapping static entry reached from 0xC0D70A.
    case 0xC0D70C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D5B0.asm:201 BNE @UNKNOWN24
    case 0xC0D70D: cpu.execute_instruction<0xD0>(0x000034, 2); return true;
    // src/unknown/C0/C0D5B0.asm:202 JSL UNKNOWN_C2E9C8
    case 0xC0D70F: cpu.execute_instruction<0x22>(0xC2E8E1, 4); return true;
    // src/unknown/C0/C0D5B0.asm:202 JSL UNKNOWN_C2E9C8
    // Overlapping static entry reached from 0xC0D764.
    case 0xC0D710: cpu.execute_instruction<0xE1>(0x0000E8, 2); return true;
    // src/unknown/C0/C0D5B0.asm:202 JSL UNKNOWN_C2E9C8
    // Overlapping static entry reached from 0xC0D710.
    case 0xC0D712: cpu.execute_instruction<0xC2>(0x0000C9, 2); return true;
    // src/unknown/C0/C0D5B0.asm:203 CMP #0
    case 0xC0D713: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:203 CMP #0
    // Overlapping static entry reached from 0xC0D712.
    case 0xC0D714: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D5B0.asm:203 CMP #0
    // Overlapping static entry reached from 0xC0D713.
    case 0xC0D715: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D5B0.asm:204 BNE @UNKNOWN24
    case 0xC0D716: cpu.execute_instruction<0xD0>(0x00002B, 2); return true;
    // src/unknown/C0/C0D5B0.asm:205 LDA #0
    case 0xC0D718: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:205 LDA #0
    // Overlapping static entry reached from 0xC0D718.
    case 0xC0D71A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D5B0.asm:206 STA @LOCAL03
    case 0xC0D71B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0D5B0.asm:207 BRA @UNKNOWN23
    case 0xC0D71D: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C0/C0D5B0.asm:209 CMP #23
    case 0xC0D71F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/unknown/C0/C0D5B0.asm:209 CMP #23
    // Overlapping static entry reached from 0xC0D71F.
    case 0xC0D721: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0D5B0.asm:210 BEQ @UNKNOWN22
    case 0xC0D722: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C0/C0D5B0.asm:211 ASL
    case 0xC0D724: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:212 CLC
    case 0xC0D725: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:213 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC0D726: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/unknown/C0/C0D5B0.asm:213 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC0D726.
    case 0xC0D728: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C0/C0D5B0.asm:214 TAX
    case 0xC0D729: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:215 LDA __BSS_START__,X
    case 0xC0D72A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:216 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC0D72D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:216 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC0D72D.
    case 0xC0D72F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C0/C0D5B0.asm:217 STA __BSS_START__,X
    case 0xC0D730: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:217 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D72F.
    case 0xC0D731: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D5B0.asm:217 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D72F.
    case 0xC0D732: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C0D5B0.asm:219 LDA @LOCAL03
    case 0xC0D733: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0D5B0.asm:220 INC
    case 0xC0D735: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:221 STA @LOCAL03
    case 0xC0D736: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0D5B0.asm:223 CMP #MAX_ENTITIES
    case 0xC0D738: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C0/C0D5B0.asm:223 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC0D738.
    case 0xC0D73A: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0D5B0.asm:224 BCC @UNKNOWN21
    case 0xC0D73B: cpu.execute_instruction<0x90>(0x0000E2, 2); return true;
    // src/unknown/C0/C0D5B0.asm:225 LDA #1
    case 0xC0D73D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0D5B0.asm:225 LDA #1
    // Overlapping static entry reached from 0xC0D73D.
    case 0xC0D73F: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0D5B0.asm:226 STA BATTLE_SWIRL_COUNTDOWN
    case 0xC0D740: cpu.execute_instruction<0x8D>(0x0060E6, 3); return true;
    // src/unknown/C0/C0D5B0.asm:228 LDA @LOCAL02
    case 0xC0D743: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0D5B0.asm:230 END_C_FUNCTION
    case 0xC0D745: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0D5B0.asm:230 END_C_FUNCTION
    case 0xC0D746: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D77F.asm (unresolved).
bool execute_unresolved_c0_c0d77f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0D77F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0D747: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0D77F.asm:6 END_STACK_VARS
    case 0xC0D749: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0D77F.asm:6 END_STACK_VARS
    case 0xC0D74A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D77F.asm:6 END_STACK_VARS
    case 0xC0D74B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D77F.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0D74B.
    case 0xC0D74D: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0D77F.asm:6 END_STACK_VARS
    case 0xC0D74E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0D77F.asm:7 LDA #0
    case 0xC0D74F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D77F.asm:7 LDA #0
    // Overlapping static entry reached from 0xC0D74F.
    case 0xC0D751: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D77F.asm:8 STA @LOCAL00
    case 0xC0D752: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0D77F.asm:9 BRA @UNKNOWN2
    case 0xC0D754: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/unknown/C0/C0D77F.asm:11 CMP CURRENT_ENTITY_SLOT
    case 0xC0D756: cpu.execute_instruction<0xCD>(0x001A38, 3); return true;
    // src/unknown/C0/C0D77F.asm:12 BEQ @UNKNOWN1
    case 0xC0D759: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/unknown/C0/C0D77F.asm:13 CMP #23
    case 0xC0D75B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/unknown/C0/C0D77F.asm:13 CMP #23
    // Overlapping static entry reached from 0xC0D75B.
    case 0xC0D75D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0D77F.asm:14 BEQ @UNKNOWN1
    case 0xC0D75E: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C0/C0D77F.asm:15 ASL
    case 0xC0D760: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D77F.asm:16 CLC
    case 0xC0D761: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D77F.asm:17 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC0D762: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/unknown/C0/C0D77F.asm:17 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC0D762.
    case 0xC0D764: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C0/C0D77F.asm:18 TAX
    case 0xC0D765: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D77F.asm:19 LDA __BSS_START__,X
    case 0xC0D766: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D77F.asm:20 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC0D769: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C0/C0D77F.asm:20 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC0D769.
    case 0xC0D76B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C0/C0D77F.asm:21 STA __BSS_START__,X
    case 0xC0D76C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D77F.asm:21 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D76B.
    case 0xC0D76D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D77F.asm:21 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D76B.
    case 0xC0D76E: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C0D77F.asm:23 LDA @LOCAL00
    case 0xC0D76F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0D77F.asm:24 INC
    case 0xC0D771: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D77F.asm:25 STA @LOCAL00
    case 0xC0D772: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0D77F.asm:27 CMP #MAX_ENTITIES
    case 0xC0D774: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C0/C0D77F.asm:27 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC0D774.
    case 0xC0D776: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0D77F.asm:28 BCC @UNKNOWN0
    case 0xC0D777: cpu.execute_instruction<0x90>(0x0000DD, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0D77F.asm:29 END_C_FUNCTION
    case 0xC0D779: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0D77F.asm:29 END_C_FUNCTION
    case 0xC0D77A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D7B3.asm (unresolved).
bool execute_unresolved_c0_c0d7b3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0D7B3.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0D77B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0D7B3.asm:4 LDA CURRENT_ENTITY_SLOT
    case 0xC0D77D: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0D7B3.asm:5 ASL
    case 0xC0D780: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7B3.asm:6 TAX
    case 0xC0D781: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7B3.asm:7 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0D782: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C0D7B3.asm:8 STA ACTIONSCRIPT_BACKUP_X
    case 0xC0D785: cpu.execute_instruction<0x8D>(0x005144, 3); return true;
    // src/unknown/C0/C0D7B3.asm:9 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0D788: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0D7B3.asm:10 STA ACTIONSCRIPT_BACKUP_Y
    case 0xC0D78B: cpu.execute_instruction<0x8D>(0x005146, 3); return true;
    // src/unknown/C0/C0D7B3.asm:11 RTL
    case 0xC0D78E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D7C7.asm (unresolved).
bool execute_unresolved_c0_c0d7c7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0D7C7.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0D78F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0D7C7.asm:4 LDA CURRENT_ENTITY_SLOT
    case 0xC0D791: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0D7C7.asm:5 ASL
    case 0xC0D794: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7C7.asm:6 TAX
    case 0xC0D795: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7C7.asm:7 LDA ACTIONSCRIPT_BACKUP_X
    case 0xC0D796: cpu.execute_instruction<0xAD>(0x005144, 3); return true;
    // src/unknown/C0/C0D7C7.asm:8 STA ENTITY_ABS_X_TABLE,X
    case 0xC0D799: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/unknown/C0/C0D7C7.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xC0D79C: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0D7C7.asm:10 ASL
    case 0xC0D79F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7C7.asm:11 TAX
    case 0xC0D7A0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7C7.asm:12 LDA ACTIONSCRIPT_BACKUP_Y
    case 0xC0D7A1: cpu.execute_instruction<0xAD>(0x005146, 3); return true;
    // src/unknown/C0/C0D7C7.asm:13 STA ENTITY_ABS_Y_TABLE,X
    case 0xC0D7A4: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/unknown/C0/C0D7C7.asm:14 RTL
    case 0xC0D7A7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D7E0.asm (unresolved).
bool execute_unresolved_c0_c0d7e0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0D7E0.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0D7A8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0D7E0.asm:4 LDA CURRENT_ENTITY_SLOT
    case 0xC0D7AA: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0D7E0.asm:5 ASL
    case 0xC0D7AD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7E0.asm:6 CLC
    case 0xC0D7AE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7E0.asm:7 ADC #.LOWORD(ENTITY_PATHFINDING_STATES)
    case 0xC0D7AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005C, 2); else cpu.execute_instruction<0x69>(0x00305C, 3); return true;
    // src/unknown/C0/C0D7E0.asm:7 ADC #.LOWORD(ENTITY_PATHFINDING_STATES)
    // Overlapping static entry reached from 0xC0D7AF.
    case 0xC0D7B1: cpu.execute_instruction<0x30>(0x0000AA, 2); return true;
    // src/unknown/C0/C0D7E0.asm:8 TAX
    case 0xC0D7B2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7E0.asm:9 LDA __BSS_START__,X
    case 0xC0D7B3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D7E0.asm:10 BEQ @UNKNOWN0
    case 0xC0D7B6: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0D7E0.asm:11 LDA #$0001
    case 0xC0D7B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0D7E0.asm:11 LDA #$0001
    // Overlapping static entry reached from 0xC0D7B8.
    case 0xC0D7BA: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0D7E0.asm:12 STA __BSS_START__,X
    case 0xC0D7BB: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D7E0.asm:14 RTL
    case 0xC0D7BE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D7F7.asm (unresolved).
bool execute_unresolved_c0_c0d7f7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0D7F7.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0D7BF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0D7F7.asm:14 END_STACK_VARS
    case 0xC0D7C1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0D7F7.asm:14 END_STACK_VARS
    case 0xC0D7C2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D7F7.asm:14 END_STACK_VARS
    case 0xC0D7C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D7F7.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC0D7C3.
    case 0xC0D7C5: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0D7F7.asm:14 END_STACK_VARS
    case 0xC0D7C6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:15 LDA CURRENT_ENTITY_SLOT
    case 0xC0D7C7: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0D7F7.asm:15 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0D7C5.
    case 0xC0D7C9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:16 STA @LOCAL08
    case 0xC0D7CA: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C0/C0D7F7.asm:17 ASL
    case 0xC0D7CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:18 TAX
    case 0xC0D7CD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:19 LDA ENTITY_PATHFINDING_STATES,X
    case 0xC0D7CE: cpu.execute_instruction<0xBD>(0x00305C, 3); return true;
    // src/unknown/C0/C0D7F7.asm:20 CMP #.LOWORD(-1)
    case 0xC0D7D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0D7F7.asm:20 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0D7D1.
    case 0xC0D7D3: cpu.execute_instruction<0xFF>(0x4C03F0, 4); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0D7F7.asm:21 BNEL @UNKNOWN15
    case 0xC0D7D4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0D7F7.asm:21 BNEL @UNKNOWN15
    case 0xC0D7D6: cpu.execute_instruction<0x4C>(0x00D955, 3); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0D7F7.asm:21 BNEL @UNKNOWN15
    // Overlapping static entry reached from 0xC0D7D3.
    case 0xC0D7D7: cpu.execute_instruction<0x55>(0x0000D9, 2); return true;
    // src/unknown/C0/C0D7F7.asm:22 LDA ENTITY_SIZES,X
    case 0xC0D7D9: cpu.execute_instruction<0xBD>(0x002F6C, 3); return true;
    // src/unknown/C0/C0D7F7.asm:23 STA @LOCAL07
    case 0xC0D7DC: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C0D7F7.asm:24 LDA ENTITY_PATH_POINTS,X
    case 0xC0D7DE: cpu.execute_instruction<0xBD>(0x003200, 3); return true;
    // src/unknown/C0/C0D7F7.asm:25 STA @VIRTUAL02
    case 0xC0D7E1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:26 STA @LOCAL06
    case 0xC0D7E3: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0D7F7.asm:27 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0D7E5: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C0D7F7.asm:28 STA @LOCAL05
    case 0xC0D7E8: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0D7F7.asm:29 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0D7EA: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0D7F7.asm:30 STA @LOCAL04
    case 0xC0D7ED: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0D7F7.asm:31 LDA @LOCAL07
    case 0xC0D7EF: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0D7F7.asm:32 ASL
    case 0xC0D7F1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:33 TAX
    case 0xC0D7F2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:34 STX @LOCAL03
    case 0xC0D7F3: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C0D7F7.asm:35 LDX @VIRTUAL02
    case 0xC0D7F5: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:36 LDA __BSS_START__+2,X
    case 0xC0D7F7: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C0/C0D7F7.asm:37 ASL
    case 0xC0D7FA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:38 ASL
    case 0xC0D7FB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:39 ASL
    case 0xC0D7FC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:40 LDX @LOCAL03
    case 0xC0D7FD: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0D7F7.asm:41 CLC
    case 0xC0D7FF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:42 ADC f:UNKNOWN_C42A1F,X
    case 0xC0D800: cpu.execute_instruction<0x7F>(0xC4295D, 4); return true;
    // src/unknown/C0/C0D7F7.asm:43 STA @VIRTUAL04
    case 0xC0D804: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0D7F7.asm:44 LDA PATHFINDING_TARGET_CENTRE_X
    case 0xC0D806: cpu.execute_instruction<0xAD>(0x004E14, 3); return true;
    // src/unknown/C0/C0D7F7.asm:45 SEC
    case 0xC0D809: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:46 SBC PATHFINDING_TARGET_WIDTH
    case 0xC0D80A: cpu.execute_instruction<0xED>(0x004E18, 3); return true;
    // src/unknown/C0/C0D7F7.asm:47 ASL
    case 0xC0D80D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:48 ASL
    case 0xC0D80E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:49 ASL
    case 0xC0D80F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:50 CLC
    case 0xC0D810: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:51 ADC @VIRTUAL04
    case 0xC0D811: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C0D7F7.asm:52 STA @LOCAL02
    case 0xC0D813: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0D7F7.asm:53 LDX @VIRTUAL02
    case 0xC0D815: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:54 LDA __BSS_START__,X
    case 0xC0D817: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D7F7.asm:55 ASL
    case 0xC0D81A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:56 ASL
    case 0xC0D81B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:57 ASL
    case 0xC0D81C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:58 LDX @LOCAL03
    case 0xC0D81D: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0D7F7.asm:59 SEC
    case 0xC0D81F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:60 SBC f:UNKNOWN_C42AEB,X
    case 0xC0D820: cpu.execute_instruction<0xFF>(0xC42A29, 4); return true;
    // src/unknown/C0/C0D7F7.asm:61 CLC
    case 0xC0D824: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:62 ADC f:UNKNOWN_C42A41,X
    case 0xC0D825: cpu.execute_instruction<0x7F>(0xC4297F, 4); return true;
    // src/unknown/C0/C0D7F7.asm:63 STA @VIRTUAL02
    case 0xC0D829: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:64 LDA PATHFINDING_TARGET_CENTRE_Y
    case 0xC0D82B: cpu.execute_instruction<0xAD>(0x004E16, 3); return true;
    // src/unknown/C0/C0D7F7.asm:65 SEC
    case 0xC0D82E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:66 SBC PATHFINDING_TARGET_HEIGHT
    case 0xC0D82F: cpu.execute_instruction<0xED>(0x004E1A, 3); return true;
    // src/unknown/C0/C0D7F7.asm:67 ASL
    case 0xC0D832: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:68 ASL
    case 0xC0D833: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:69 ASL
    case 0xC0D834: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:70 CLC
    case 0xC0D835: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:71 ADC @VIRTUAL02
    case 0xC0D836: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:72 STA @VIRTUAL04
    case 0xC0D838: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0D7F7.asm:73 LDA @LOCAL05
    case 0xC0D83A: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0D7F7.asm:74 SEC
    case 0xC0D83C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:75 SBC @LOCAL02
    case 0xC0D83D: cpu.execute_instruction<0xE5>(0x000012, 2); return true;
    // src/unknown/C0/C0D7F7.asm:76 STA @LOCAL01
    case 0xC0D83F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0D7F7.asm:77 STA @VIRTUAL02
    case 0xC0D841: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:78 LDA #0
    case 0xC0D843: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D7F7.asm:78 LDA #0
    // Overlapping static entry reached from 0xC0D843.
    case 0xC0D845: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0D7F7.asm:79 CLC
    case 0xC0D846: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:80 SBC @VIRTUAL02
    case 0xC0D847: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0D7F7.asm:81 BRANCHLTEQS @UNKNOWN3
    case 0xC0D849: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0D7F7.asm:81 BRANCHLTEQS @UNKNOWN3
    case 0xC0D84B: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0D7F7.asm:81 BRANCHLTEQS @UNKNOWN3
    case 0xC0D84D: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0D7F7.asm:81 BRANCHLTEQS @UNKNOWN3
    case 0xC0D84F: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // src/unknown/C0/C0D7F7.asm:82 LDA @LOCAL01
    case 0xC0D851: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0D7F7.asm:83 EOR #$FFFF
    case 0xC0D853: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0D7F7.asm:83 EOR #$FFFF
    // Overlapping static entry reached from 0xC0D853.
    case 0xC0D855: cpu.execute_instruction<0xFF>(0x02801A, 4); return true;
    // src/unknown/C0/C0D7F7.asm:84 INC
    case 0xC0D856: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:85 BRA @UNKNOWN4
    case 0xC0D857: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:87 LDA @LOCAL01
    case 0xC0D859: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0D7F7.asm:89 STA @VIRTUAL02
    case 0xC0D85B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:90 LDA #3
    case 0xC0D85D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C0D7F7.asm:90 LDA #3
    // Overlapping static entry reached from 0xC0D85D.
    case 0xC0D85F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0D7F7.asm:91 CLC
    case 0xC0D860: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:92 SBC @VIRTUAL02
    case 0xC0D861: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:826 BVC :+
    // Macro caller: src/unknown/C0/C0D7F7.asm:93 JUMPLTEQS @UNKNOWN13
    case 0xC0D863: cpu.execute_instruction<0x50>(0x000005, 2); return true;
    // include/macros.asm:827 BMI :++
    // Macro caller: src/unknown/C0/C0D7F7.asm:93 JUMPLTEQS @UNKNOWN13
    case 0xC0D865: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:828 JMP dest
    // Macro caller: src/unknown/C0/C0D7F7.asm:93 JUMPLTEQS @UNKNOWN13
    case 0xC0D867: cpu.execute_instruction<0x4C>(0x00D917, 3); return true;
    // include/macros.asm:830 BPL :+
    // Macro caller: src/unknown/C0/C0D7F7.asm:93 JUMPLTEQS @UNKNOWN13
    case 0xC0D86A: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:831 JMP dest
    // Macro caller: src/unknown/C0/C0D7F7.asm:93 JUMPLTEQS @UNKNOWN13
    case 0xC0D86C: cpu.execute_instruction<0x4C>(0x00D917, 3); return true;
    // src/unknown/C0/C0D7F7.asm:94 LDA @LOCAL04
    case 0xC0D86F: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0D7F7.asm:95 SEC
    case 0xC0D871: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:96 SBC @VIRTUAL04
    case 0xC0D872: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C0/C0D7F7.asm:97 STA @LOCAL01
    case 0xC0D874: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0D7F7.asm:98 STA @VIRTUAL02
    case 0xC0D876: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:99 LDA #0
    case 0xC0D878: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D7F7.asm:99 LDA #0
    // Overlapping static entry reached from 0xC0D878.
    case 0xC0D87A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0D7F7.asm:100 CLC
    case 0xC0D87B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:101 SBC @VIRTUAL02
    case 0xC0D87C: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0D7F7.asm:102 BRANCHLTEQS @UNKNOWN9
    case 0xC0D87E: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0D7F7.asm:102 BRANCHLTEQS @UNKNOWN9
    case 0xC0D880: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0D7F7.asm:102 BRANCHLTEQS @UNKNOWN9
    case 0xC0D882: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0D7F7.asm:102 BRANCHLTEQS @UNKNOWN9
    case 0xC0D884: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // src/unknown/C0/C0D7F7.asm:103 LDA @LOCAL01
    case 0xC0D886: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0D7F7.asm:104 EOR #$FFFF
    case 0xC0D888: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0D7F7.asm:104 EOR #$FFFF
    // Overlapping static entry reached from 0xC0D888.
    case 0xC0D88A: cpu.execute_instruction<0xFF>(0x02801A, 4); return true;
    // src/unknown/C0/C0D7F7.asm:105 INC
    case 0xC0D88B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:106 BRA @UNKNOWN10
    case 0xC0D88C: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:108 LDA @LOCAL01
    case 0xC0D88E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0D7F7.asm:110 STA @VIRTUAL02
    case 0xC0D890: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:111 LDA #3
    case 0xC0D892: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C0D7F7.asm:111 LDA #3
    // Overlapping static entry reached from 0xC0D892.
    case 0xC0D894: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0D7F7.asm:112 CLC
    case 0xC0D895: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:113 SBC @VIRTUAL02
    case 0xC0D896: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0D7F7.asm:114 BRANCHLTEQS @UNKNOWN13
    case 0xC0D898: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0D7F7.asm:114 BRANCHLTEQS @UNKNOWN13
    case 0xC0D89A: cpu.execute_instruction<0x10>(0x00007B, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0D7F7.asm:114 BRANCHLTEQS @UNKNOWN13
    case 0xC0D89C: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0D7F7.asm:114 BRANCHLTEQS @UNKNOWN13
    case 0xC0D89E: cpu.execute_instruction<0x30>(0x000077, 2); return true;
    // src/unknown/C0/C0D7F7.asm:115 LDA @LOCAL08
    case 0xC0D8A0: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C0D7F7.asm:116 ASL
    case 0xC0D8A2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:117 STA @LOCAL01
    case 0xC0D8A3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0D7F7.asm:118 CLC
    case 0xC0D8A5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:119 ADC #.LOWORD(ENTITY_PATH_POINT_COUNTS)
    case 0xC0D8A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003C, 2); else cpu.execute_instruction<0x69>(0x00323C, 3); return true;
    // src/unknown/C0/C0D7F7.asm:119 ADC #.LOWORD(ENTITY_PATH_POINT_COUNTS)
    // Overlapping static entry reached from 0xC0D8A6.
    case 0xC0D8A8: cpu.execute_instruction<0x32>(0x0000AA, 2); return true;
    // src/unknown/C0/C0D7F7.asm:120 TAX
    case 0xC0D8A9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:121 LDA __BSS_START__,X
    case 0xC0D8AA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D7F7.asm:122 TAY
    case 0xC0D8AD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:123 DEY
    case 0xC0D8AE: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:124 TYA
    case 0xC0D8AF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:125 STA __BSS_START__,X
    case 0xC0D8B0: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D7F7.asm:126 BEQ @UNKNOWN13
    case 0xC0D8B3: cpu.execute_instruction<0xF0>(0x000062, 2); return true;
    // src/unknown/C0/C0D7F7.asm:127 LDA @LOCAL06
    case 0xC0D8B5: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0D7F7.asm:128 STA @VIRTUAL02
    case 0xC0D8B7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:129 LDX @VIRTUAL02
    case 0xC0D8B9: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:130 INX
    case 0xC0D8BB: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:131 INX
    case 0xC0D8BC: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:132 INX
    case 0xC0D8BD: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:133 INX
    case 0xC0D8BE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:134 STX @LOCAL03
    case 0xC0D8BF: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C0D7F7.asm:135 PHX
    case 0xC0D8C1: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:136 LDA @LOCAL01
    case 0xC0D8C2: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0D7F7.asm:137 TAX
    case 0xC0D8C4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:138 PLA
    case 0xC0D8C5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:139 STA ENTITY_PATH_POINTS,X
    case 0xC0D8C6: cpu.execute_instruction<0x9D>(0x003200, 3); return true;
    // src/unknown/C0/C0D7F7.asm:140 LDA @LOCAL07
    case 0xC0D8C9: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0D7F7.asm:141 ASL
    case 0xC0D8CB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:142 STA @LOCAL07
    case 0xC0D8CC: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C0D7F7.asm:143 PHA
    case 0xC0D8CE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:144 LDX @LOCAL03
    case 0xC0D8CF: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0D7F7.asm:145 LDA __BSS_START__+2,X
    case 0xC0D8D1: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C0/C0D7F7.asm:146 ASL
    case 0xC0D8D4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:147 ASL
    case 0xC0D8D5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:148 ASL
    case 0xC0D8D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:149 PLX
    case 0xC0D8D7: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:150 CLC
    case 0xC0D8D8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:151 ADC f:UNKNOWN_C42A1F,X
    case 0xC0D8D9: cpu.execute_instruction<0x7F>(0xC4295D, 4); return true;
    // src/unknown/C0/C0D7F7.asm:152 STA @VIRTUAL02
    case 0xC0D8DD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:153 LDA PATHFINDING_TARGET_CENTRE_X
    case 0xC0D8DF: cpu.execute_instruction<0xAD>(0x004E14, 3); return true;
    // src/unknown/C0/C0D7F7.asm:154 SEC
    case 0xC0D8E2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:155 SBC PATHFINDING_TARGET_WIDTH
    case 0xC0D8E3: cpu.execute_instruction<0xED>(0x004E18, 3); return true;
    // src/unknown/C0/C0D7F7.asm:156 ASL
    case 0xC0D8E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:157 ASL
    case 0xC0D8E7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:158 ASL
    case 0xC0D8E8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:159 CLC
    case 0xC0D8E9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:160 ADC @VIRTUAL02
    case 0xC0D8EA: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:161 STA @LOCAL02
    case 0xC0D8EC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0D7F7.asm:162 LDA @LOCAL07
    case 0xC0D8EE: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0D7F7.asm:163 PHA
    case 0xC0D8F0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:164 PHA
    case 0xC0D8F1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:165 LDX @LOCAL03
    case 0xC0D8F2: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0D7F7.asm:166 LDA __BSS_START__,X
    case 0xC0D8F4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D7F7.asm:167 ASL
    case 0xC0D8F7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:168 ASL
    case 0xC0D8F8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:169 ASL
    case 0xC0D8F9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:170 PLX
    case 0xC0D8FA: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:171 SEC
    case 0xC0D8FB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:172 SBC f:UNKNOWN_C42AEB,X
    case 0xC0D8FC: cpu.execute_instruction<0xFF>(0xC42A29, 4); return true;
    // src/unknown/C0/C0D7F7.asm:173 PLX
    case 0xC0D900: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:174 CLC
    case 0xC0D901: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:175 ADC f:UNKNOWN_C42A41,X
    case 0xC0D902: cpu.execute_instruction<0x7F>(0xC4297F, 4); return true;
    // src/unknown/C0/C0D7F7.asm:176 STA @VIRTUAL02
    case 0xC0D906: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:177 LDA PATHFINDING_TARGET_CENTRE_Y
    case 0xC0D908: cpu.execute_instruction<0xAD>(0x004E16, 3); return true;
    // src/unknown/C0/C0D7F7.asm:178 SEC
    case 0xC0D90B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:179 SBC PATHFINDING_TARGET_HEIGHT
    case 0xC0D90C: cpu.execute_instruction<0xED>(0x004E1A, 3); return true;
    // src/unknown/C0/C0D7F7.asm:180 ASL
    case 0xC0D90F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:181 ASL
    case 0xC0D910: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:182 ASL
    case 0xC0D911: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:183 CLC
    case 0xC0D912: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:184 ADC @VIRTUAL02
    case 0xC0D913: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:185 STA @VIRTUAL04
    case 0xC0D915: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0D7F7.asm:187 LDA @LOCAL08
    case 0xC0D917: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C0D7F7.asm:188 ASL
    case 0xC0D919: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:189 STA @VIRTUAL02
    case 0xC0D91A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:190 LDX @VIRTUAL02
    case 0xC0D91C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:191 LDA ENTITY_PATH_POINT_COUNTS,X
    case 0xC0D91E: cpu.execute_instruction<0xBD>(0x00323C, 3); return true;
    // src/unknown/C0/C0D7F7.asm:192 BEQ @UNKNOWN14
    case 0xC0D921: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/unknown/C0/C0D7F7.asm:193 LDA @VIRTUAL04
    case 0xC0D923: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0D7F7.asm:194 STA @LOCAL00
    case 0xC0D925: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0D7F7.asm:195 LDY @LOCAL02
    case 0xC0D927: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C0D7F7.asm:196 LDX @LOCAL04
    case 0xC0D929: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C0/C0D7F7.asm:197 LDA @LOCAL05
    case 0xC0D92B: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0D7F7.asm:198 JSL UNKNOWN_C41EFF
    case 0xC0D92D: cpu.execute_instruction<0x22>(0xC41E4B, 4); return true;
    // src/unknown/C0/C0D7F7.asm:199 JSL UNKNOWN_C47044
    case 0xC0D931: cpu.execute_instruction<0x22>(0xC44DC8, 4); return true;
    // src/unknown/C0/C0D7F7.asm:200 JSL UNKNOWN_C46B0A
    case 0xC0D935: cpu.execute_instruction<0x22>(0xC44886, 4); return true;
    // src/unknown/C0/C0D7F7.asm:201 LDX @VIRTUAL02
    case 0xC0D939: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:202 STA ENTITY_DIRECTIONS,X
    case 0xC0D93B: cpu.execute_instruction<0x9D>(0x002EF4, 3); return true;
    // src/unknown/C0/C0D7F7.asm:203 BRA @UNKNOWN15
    case 0xC0D93E: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C0/C0D7F7.asm:205 LDX @VIRTUAL02
    case 0xC0D940: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:206 STZ ENTITY_PATHFINDING_STATES,X
    case 0xC0D942: cpu.execute_instruction<0x9E>(0x00305C, 3); return true;
    // src/unknown/C0/C0D7F7.asm:207 LDA @VIRTUAL02
    case 0xC0D945: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:208 CLC
    case 0xC0D947: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:209 ADC #.LOWORD(ENTITY_OBSTACLE_FLAGS)
    case 0xC0D948: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D8, 2); else cpu.execute_instruction<0x69>(0x002CD8, 3); return true;
    // src/unknown/C0/C0D7F7.asm:209 ADC #.LOWORD(ENTITY_OBSTACLE_FLAGS)
    // Overlapping static entry reached from 0xC0D948.
    case 0xC0D94A: cpu.execute_instruction<0x2C>(0x00BDAA, 3); return true;
    // src/unknown/C0/C0D7F7.asm:210 TAX
    case 0xC0D94B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:211 LDA __BSS_START__,X
    case 0xC0D94C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D7F7.asm:211 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D94A.
    case 0xC0D94D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D7F7.asm:212 ORA #$0080
    case 0xC0D94F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000080, 2); else cpu.execute_instruction<0x09>(0x000080, 3); return true;
    // src/unknown/C0/C0D7F7.asm:212 ORA #$0080
    // Overlapping static entry reached from 0xC0D94F.
    case 0xC0D951: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0D7F7.asm:213 STA __BSS_START__,X
    case 0xC0D952: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D7F7.asm:215 PLD
    case 0xC0D955: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:216 RTL
    case 0xC0D956: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D98F.asm (unresolved).
bool execute_unresolved_c0_c0d98f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0D98F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0D957: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0D98F.asm:9 END_STACK_VARS
    case 0xC0D959: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0D98F.asm:9 END_STACK_VARS
    case 0xC0D95A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D98F.asm:9 END_STACK_VARS
    case 0xC0D95B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D98F.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0D95B.
    case 0xC0D95D: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0D98F.asm:9 END_STACK_VARS
    case 0xC0D95E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC0D95F: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0D98F.asm:10 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0D95D.
    case 0xC0D961: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:11 ASL
    case 0xC0D962: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:12 TAY
    case 0xC0D963: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:13 CLC
    case 0xC0D964: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:14 ADC #.LOWORD(ENTITY_PATH_POINT_COUNTS)
    case 0xC0D965: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003C, 2); else cpu.execute_instruction<0x69>(0x00323C, 3); return true;
    // src/unknown/C0/C0D98F.asm:14 ADC #.LOWORD(ENTITY_PATH_POINT_COUNTS)
    // Overlapping static entry reached from 0xC0D965.
    case 0xC0D967: cpu.execute_instruction<0x32>(0x000085, 2); return true;
    // src/unknown/C0/C0D98F.asm:15 STA @VIRTUAL04
    case 0xC0D968: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0D98F.asm:15 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC0D967.
    case 0xC0D969: cpu.execute_instruction<0x04>(0x0000A6, 2); return true;
    // src/unknown/C0/C0D98F.asm:16 LDX @VIRTUAL04
    case 0xC0D96A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0D98F.asm:16 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC0D969.
    case 0xC0D96B: cpu.execute_instruction<0x04>(0x0000BD, 2); return true;
    // src/unknown/C0/C0D98F.asm:17 LDA __BSS_START__,X
    case 0xC0D96C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D98F.asm:17 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D96B.
    case 0xC0D96D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D98F.asm:18 BNE @UNKNOWN0
    case 0xC0D96F: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0D98F.asm:19 LDA #0
    case 0xC0D971: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D98F.asm:19 LDA #0
    // Overlapping static entry reached from 0xC0D971.
    case 0xC0D973: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0D98F.asm:20 JMP @UNKNOWN1
    case 0xC0D974: cpu.execute_instruction<0x4C>(0x00D9F7, 3); return true;
    // src/unknown/C0/C0D98F.asm:22 LDA ENTITY_SIZES,Y
    case 0xC0D977: cpu.execute_instruction<0xB9>(0x002F6C, 3); return true;
    // src/unknown/C0/C0D98F.asm:23 STA @LOCAL02
    case 0xC0D97A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0D98F.asm:24 TYA
    case 0xC0D97C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:25 CLC
    case 0xC0D97D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:26 ADC #.LOWORD(ENTITY_PATH_POINTS)
    case 0xC0D97E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x003200, 3); return true;
    // src/unknown/C0/C0D98F.asm:26 ADC #.LOWORD(ENTITY_PATH_POINTS)
    // Overlapping static entry reached from 0xC0D97E.
    case 0xC0D980: cpu.execute_instruction<0x32>(0x000085, 2); return true;
    // src/unknown/C0/C0D98F.asm:27 STA @VIRTUAL02
    case 0xC0D981: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D98F.asm:27 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC0D980.
    case 0xC0D982: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C0/C0D98F.asm:28 STA @LOCAL01
    case 0xC0D983: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0D98F.asm:29 LDX @VIRTUAL02
    case 0xC0D985: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0D98F.asm:30 LDA __BSS_START__,X
    case 0xC0D987: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D98F.asm:31 TAX
    case 0xC0D98A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:32 STX @LOCAL00
    case 0xC0D98B: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0D98F.asm:33 LDA @LOCAL02
    case 0xC0D98D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0D98F.asm:34 ASL
    case 0xC0D98F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:35 STA @LOCAL02
    case 0xC0D990: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0D98F.asm:36 PHA
    case 0xC0D992: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:37 LDA __BSS_START__+2,X
    case 0xC0D993: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C0D98F.asm:38 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D996: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C0D98F.asm:38 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D997: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C0D98F.asm:38 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D998: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:39 PLX
    case 0xC0D999: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:40 CLC
    case 0xC0D99A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:41 ADC f:UNKNOWN_C42A1F,X
    case 0xC0D99B: cpu.execute_instruction<0x7F>(0xC4295D, 4); return true;
    // src/unknown/C0/C0D98F.asm:42 STA @VIRTUAL02
    case 0xC0D99F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D98F.asm:43 LDA PATHFINDING_TARGET_CENTRE_X
    case 0xC0D9A1: cpu.execute_instruction<0xAD>(0x004E14, 3); return true;
    // src/unknown/C0/C0D98F.asm:44 SEC
    case 0xC0D9A4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:45 SBC PATHFINDING_TARGET_WIDTH
    case 0xC0D9A5: cpu.execute_instruction<0xED>(0x004E18, 3); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C0D98F.asm:46 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D9A8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C0D98F.asm:46 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D9A9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C0D98F.asm:46 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D9AA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:47 CLC
    case 0xC0D9AB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:48 ADC @VIRTUAL02
    case 0xC0D9AC: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0D98F.asm:49 STA ENTITY_SCRIPT_VAR6_TABLE,Y
    case 0xC0D9AE: cpu.execute_instruction<0x99>(0x000FBC, 3); return true;
    // src/unknown/C0/C0D98F.asm:50 LDA @LOCAL02
    case 0xC0D9B1: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0D98F.asm:51 PHA
    case 0xC0D9B3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:52 PHA
    case 0xC0D9B4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:53 LDX @LOCAL00
    case 0xC0D9B5: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0D98F.asm:54 LDA __BSS_START__,X
    case 0xC0D9B7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C0D98F.asm:55 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D9BA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C0D98F.asm:55 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D9BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C0D98F.asm:55 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D9BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:56 PLX
    case 0xC0D9BD: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:57 SEC
    case 0xC0D9BE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:58 SBC f:UNKNOWN_C42AEB,X
    case 0xC0D9BF: cpu.execute_instruction<0xFF>(0xC42A29, 4); return true;
    // src/unknown/C0/C0D98F.asm:59 PLX
    case 0xC0D9C3: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:60 CLC
    case 0xC0D9C4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:61 ADC f:UNKNOWN_C42A41,X
    case 0xC0D9C5: cpu.execute_instruction<0x7F>(0xC4297F, 4); return true;
    // src/unknown/C0/C0D98F.asm:62 STA @VIRTUAL02
    case 0xC0D9C9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D98F.asm:63 LDA PATHFINDING_TARGET_CENTRE_Y
    case 0xC0D9CB: cpu.execute_instruction<0xAD>(0x004E16, 3); return true;
    // src/unknown/C0/C0D98F.asm:64 SEC
    case 0xC0D9CE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:65 SBC PATHFINDING_TARGET_HEIGHT
    case 0xC0D9CF: cpu.execute_instruction<0xED>(0x004E1A, 3); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C0D98F.asm:66 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D9D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C0D98F.asm:66 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D9D3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C0D98F.asm:66 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D9D4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:67 CLC
    case 0xC0D9D5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:68 ADC @VIRTUAL02
    case 0xC0D9D6: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0D98F.asm:69 STA ENTITY_SCRIPT_VAR7_TABLE,Y
    case 0xC0D9D8: cpu.execute_instruction<0x99>(0x000FF8, 3); return true;
    // src/unknown/C0/C0D98F.asm:70 LDX @VIRTUAL04
    case 0xC0D9DB: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0D98F.asm:71 LDA __BSS_START__,X
    case 0xC0D9DD: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D98F.asm:72 DEC
    case 0xC0D9E0: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:73 LDX @VIRTUAL04
    case 0xC0D9E1: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0D98F.asm:74 STA __BSS_START__,X
    case 0xC0D9E3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D98F.asm:75 LDX @LOCAL00
    case 0xC0D9E6: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0D98F.asm:76 TXA
    case 0xC0D9E8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:77 INC
    case 0xC0D9E9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:78 INC
    case 0xC0D9EA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:79 INC
    case 0xC0D9EB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:80 INC
    case 0xC0D9EC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:81 LDX @LOCAL01
    case 0xC0D9ED: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0D98F.asm:82 STX @VIRTUAL02
    case 0xC0D9EF: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0D98F.asm:83 STA __BSS_START__,X
    case 0xC0D9F1: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D98F.asm:84 LDA #1
    case 0xC0D9F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0D98F.asm:84 LDA #1
    // Overlapping static entry reached from 0xC0D9F4.
    case 0xC0D9F6: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0D98F.asm:86 END_C_FUNCTION
    case 0xC0D9F7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0D98F.asm:86 END_C_FUNCTION
    case 0xC0D9F8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
