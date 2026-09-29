// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/unknown/C0/C0B149.asm (unresolved).
bool execute_unresolved_c0_c0b149_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0B149.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC0B149: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:4 PHD
    case 0xC0B14B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:5 PHA
    case 0xC0B14C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:6 TDC
    case 0xC0B14D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:7 SEC
    case 0xC0B14E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:8 SBC #$000E
    case 0xC0B14F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000E, 2); else cpu.execute_instruction<0xE9>(0x00000E, 3); return true;
    // src/unknown/C0/C0B149.asm:8 SBC #$000E
    // Overlapping static entry reached from 0xC0B14F.
    case 0xC0B151: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C0/C0B149.asm:9 TCD
    case 0xC0B152: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:10 PLA
    case 0xC0B153: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:11 STA $00
    case 0xC0B154: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C0B149.asm:12 STX $02
    case 0xC0B156: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0B149.asm:13 STY $04
    case 0xC0B158: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C0/C0B149.asm:14 LDA $1C
    case 0xC0B15A: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0B149.asm:15 STA $06
    case 0xC0B15C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0B149.asm:16 TXA
    case 0xC0B15E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:17 BMI @UNKNOWN0
    case 0xC0B15F: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C0/C0B149.asm:18 CMP #$0070
    case 0xC0B161: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000070, 2); else cpu.execute_instruction<0xC9>(0x000070, 3); return true;
    // src/unknown/C0/C0B149.asm:18 CMP #$0070
    // Overlapping static entry reached from 0xC0B161.
    case 0xC0B163: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C0B149.asm:19 BCS @UNKNOWN1
    case 0xC0B164: cpu.execute_instruction<0xB0>(0x000003, 2); return true;
    // src/unknown/C0/C0B149.asm:21 JMP @UNKNOWN16
    case 0xC0B166: cpu.execute_instruction<0x4C>(0x00B233, 3); return true;
    // src/unknown/C0/C0B149.asm:23 LDY #$0000
    case 0xC0B169: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0B149.asm:23 LDY #$0000
    // Overlapping static entry reached from 0xC0B169.
    case 0xC0B16B: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C0B149.asm:24 LDA $02
    case 0xC0B16C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0B149.asm:25 SEC
    case 0xC0B16E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:26 SBC $06
    case 0xC0B16F: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // src/unknown/C0/C0B149.asm:27 BMI @UNKNOWN3
    case 0xC0B171: cpu.execute_instruction<0x30>(0x000011, 2); return true;
    // src/unknown/C0/C0B149.asm:28 BEQ @UNKNOWN3
    case 0xC0B173: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C0/C0B149.asm:29 TAX
    case 0xC0B175: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:30 LDA #$00FF
    case 0xC0B176: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C0/C0B149.asm:30 LDA #$00FF
    // Overlapping static entry reached from 0xC0B176.
    case 0xC0B178: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C0B149.asm:32 STA SWIRL_WINDOW_HDMA_BUFFER,Y
    case 0xC0B179: cpu.execute_instruction<0x99>(0x003FD0, 3); return true;
    // src/unknown/C0/C0B149.asm:33 INY
    case 0xC0B17C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:34 INY
    case 0xC0B17D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:35 DEX
    case 0xC0B17E: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:36 BNE @UNKNOWN2
    case 0xC0B17F: cpu.execute_instruction<0xD0>(0x0000F8, 2); return true;
    // src/unknown/C0/C0B149.asm:37 LDA #$0000
    case 0xC0B181: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0B149.asm:37 LDA #$0000
    // Overlapping static entry reached from 0xC0B181.
    case 0xC0B183: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0B149.asm:39 CLC
    case 0xC0B184: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:40 ADC $06
    case 0xC0B185: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0B149.asm:41 STA $0A
    case 0xC0B187: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C0B149.asm:42 LDA $04
    case 0xC0B189: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0B149.asm:43 STA f:WRMPYA
    case 0xC0B18B: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/unknown/C0/C0B149.asm:45 LDA $0A
    case 0xC0B18F: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C0/C0B149.asm:46 BNE @UNKNOWN5
    case 0xC0B191: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C0/C0B149.asm:47 LDA $04
    case 0xC0B193: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0B149.asm:48 BRA @UNKNOWN6
    case 0xC0B195: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/unknown/C0/C0B149.asm:50 XBA
    case 0xC0B197: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:51 STA f:WRDIVL
    case 0xC0B198: cpu.execute_instruction<0x8F>(0x004204, 4); return true;
    // src/unknown/C0/C0B149.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B19C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:53 LDA $06
    case 0xC0B19E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0B149.asm:54 STA f:WRDIVB
    case 0xC0B1A0: cpu.execute_instruction<0x8F>(0x004206, 4); return true;
    // src/unknown/C0/C0B149.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC0B1A4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:56 NOP
    case 0xC0B1A6: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:57 NOP
    case 0xC0B1A7: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:58 NOP
    case 0xC0B1A8: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:59 NOP
    case 0xC0B1A9: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:60 NOP
    case 0xC0B1AA: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:61 LDA f:RDDIVL
    case 0xC0B1AB: cpu.execute_instruction<0xAF>(0x004214, 4); return true;
    // src/unknown/C0/C0B149.asm:62 TAX
    case 0xC0B1AF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:63 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B1B0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:64 LDA f:UNKNOWN_C0B2FF,X
    case 0xC0B1B2: cpu.execute_instruction<0xBF>(0xC0B2FF, 4); return true;
    // src/unknown/C0/C0B149.asm:65 STA f:WRMPYB
    case 0xC0B1B6: cpu.execute_instruction<0x8F>(0x004203, 4); return true;
    // src/unknown/C0/C0B149.asm:66 REP #PROC_FLAGS::ACCUM8
    case 0xC0B1BA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:67 LDA #$0080
    case 0xC0B1BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/unknown/C0/C0B149.asm:67 LDA #$0080
    // Overlapping static entry reached from 0xC0B1BC.
    case 0xC0B1BE: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0B149.asm:68 CLC
    case 0xC0B1BF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:69 ADC f:RDMPYL
    case 0xC0B1C0: cpu.execute_instruction<0x6F>(0x004216, 4); return true;
    // src/unknown/C0/C0B149.asm:70 XBA
    case 0xC0B1C4: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:71 AND #$00FF
    case 0xC0B1C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0B149.asm:71 AND #$00FF
    // Overlapping static entry reached from 0xC0B1C5.
    case 0xC0B1C7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0B149.asm:73 STA $08
    case 0xC0B1C8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0B149.asm:74 CLC
    case 0xC0B1CA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:75 ADC $00
    case 0xC0B1CB: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C0/C0B149.asm:76 BMI @UNKNOWN10
    case 0xC0B1CD: cpu.execute_instruction<0x30>(0x000025, 2); return true;
    // src/unknown/C0/C0B149.asm:77 CMP #$0100
    case 0xC0B1CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C0/C0B149.asm:77 CMP #$0100
    // Overlapping static entry reached from 0xC0B1CF.
    case 0xC0B1D1: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/unknown/C0/C0B149.asm:78 BCC @UNKNOWN7
    case 0xC0B1D2: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C0/C0B149.asm:78 BCC @UNKNOWN7
    // Overlapping static entry reached from 0xC0B1D1.
    case 0xC0B1D3: cpu.execute_instruction<0x03>(0x0000A9, 2); return true;
    // src/unknown/C0/C0B149.asm:79 LDA #$00FF
    case 0xC0B1D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C0/C0B149.asm:79 LDA #$00FF
    // Overlapping static entry reached from 0xC0B1D3.
    case 0xC0B1D5: cpu.execute_instruction<0xFF>(0x0C8500, 4); return true;
    // src/unknown/C0/C0B149.asm:79 LDA #$00FF
    // Overlapping static entry reached from 0xC0B1D4.
    case 0xC0B1D6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0B149.asm:81 STA $0C
    case 0xC0B1D7: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0B149.asm:82 LDA $00
    case 0xC0B1D9: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C0/C0B149.asm:83 SEC
    case 0xC0B1DB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:84 SBC $08
    case 0xC0B1DC: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // src/unknown/C0/C0B149.asm:85 BMI @UNKNOWN8
    case 0xC0B1DE: cpu.execute_instruction<0x30>(0x000007, 2); return true;
    // src/unknown/C0/C0B149.asm:86 CMP #$0100
    case 0xC0B1E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C0/C0B149.asm:86 CMP #$0100
    // Overlapping static entry reached from 0xC0B1E0.
    case 0xC0B1E2: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C0/C0B149.asm:87 BCS @UNKNOWN10
    case 0xC0B1E3: cpu.execute_instruction<0xB0>(0x00000F, 2); return true;
    // src/unknown/C0/C0B149.asm:87 BCS @UNKNOWN10
    // Overlapping static entry reached from 0xC0B1E2.
    case 0xC0B1E4: cpu.execute_instruction<0x0F>(0xA90380, 4); return true;
    // src/unknown/C0/C0B149.asm:88 BRA @UNKNOWN9
    case 0xC0B1E5: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0B149.asm:90 LDA #$0000
    case 0xC0B1E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0B149.asm:90 LDA #$0000
    // Overlapping static entry reached from 0xC0B1E4.
    case 0xC0B1E8: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0B149.asm:90 LDA #$0000
    // Overlapping static entry reached from 0xC0B1E7.
    case 0xC0B1E9: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C0/C0B149.asm:92 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B1EA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:93 XBA
    case 0xC0B1EC: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:94 LDA $0C
    case 0xC0B1ED: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/unknown/C0/C0B149.asm:95 XBA
    case 0xC0B1EF: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:96 REP #PROC_FLAGS::ACCUM8
    case 0xC0B1F0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:97 BRA @UNKNOWN11
    case 0xC0B1F2: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0B149.asm:99 LDA #$00FF
    case 0xC0B1F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C0/C0B149.asm:99 LDA #$00FF
    // Overlapping static entry reached from 0xC0B1F4.
    case 0xC0B1F6: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C0B149.asm:101 STA SWIRL_WINDOW_HDMA_BUFFER,Y
    case 0xC0B1F7: cpu.execute_instruction<0x99>(0x003FD0, 3); return true;
    // src/unknown/C0/C0B149.asm:102 PHA
    case 0xC0B1FA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:103 LDA $0A
    case 0xC0B1FB: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C0/C0B149.asm:104 ASL
    case 0xC0B1FD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:105 ASL
    case 0xC0B1FE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:106 STA $0C
    case 0xC0B1FF: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0B149.asm:107 TYA
    case 0xC0B201: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:108 CLC
    case 0xC0B202: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:109 ADC $0C
    case 0xC0B203: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // src/unknown/C0/C0B149.asm:110 TAX
    case 0xC0B205: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:111 PLA
    case 0xC0B206: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:112 CPX #$01C0
    case 0xC0B207: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000C0, 2); else cpu.execute_instruction<0xE0>(0x0001C0, 3); return true;
    // src/unknown/C0/C0B149.asm:112 CPX #$01C0
    // Overlapping static entry reached from 0xC0B207.
    case 0xC0B209: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C0/C0B149.asm:113 BCS @UNKNOWN12
    case 0xC0B20A: cpu.execute_instruction<0xB0>(0x000003, 2); return true;
    // src/unknown/C0/C0B149.asm:113 BCS @UNKNOWN12
    // Overlapping static entry reached from 0xC0B209.
    case 0xC0B20B: cpu.execute_instruction<0x03>(0x00009D, 2); return true;
    // src/unknown/C0/C0B149.asm:114 STA SWIRL_WINDOW_HDMA_BUFFER,X
    case 0xC0B20C: cpu.execute_instruction<0x9D>(0x003FD0, 3); return true;
    // src/unknown/C0/C0B149.asm:114 STA SWIRL_WINDOW_HDMA_BUFFER,X
    // Overlapping static entry reached from 0xC0B20B.
    case 0xC0B20D: cpu.execute_instruction<0xD0>(0x00003F, 2); return true;
    // src/unknown/C0/C0B149.asm:116 INY
    case 0xC0B20F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:117 INY
    case 0xC0B210: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:118 DEC $0A
    case 0xC0B211: cpu.execute_instruction<0xC6>(0x00000A, 2); return true;
    // src/unknown/C0/C0B149.asm:119 BMI @UNKNOWN13
    case 0xC0B213: cpu.execute_instruction<0x30>(0x000003, 2); return true;
    // src/unknown/C0/C0B149.asm:120 JMP @UNKNOWN4
    case 0xC0B215: cpu.execute_instruction<0x4C>(0x00B18F, 3); return true;
    // src/unknown/C0/C0B149.asm:122 TYA
    case 0xC0B218: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:123 CLC
    case 0xC0B219: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:124 ADC $06
    case 0xC0B21A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0B149.asm:125 ADC $06
    case 0xC0B21C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0B149.asm:126 TAY
    case 0xC0B21E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:127 CPY #$01C0
    case 0xC0B21F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000C0, 2); else cpu.execute_instruction<0xC0>(0x0001C0, 3); return true;
    // src/unknown/C0/C0B149.asm:127 CPY #$01C0
    // Overlapping static entry reached from 0xC0B21F.
    case 0xC0B221: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C0/C0B149.asm:128 BCS @UNKNOWN15
    case 0xC0B222: cpu.execute_instruction<0xB0>(0x00000D, 2); return true;
    // src/unknown/C0/C0B149.asm:128 BCS @UNKNOWN15
    // Overlapping static entry reached from 0xC0B221.
    case 0xC0B223: cpu.execute_instruction<0x0D>(0x00FFA9, 3); return true;
    // src/unknown/C0/C0B149.asm:129 LDA #$00FF
    case 0xC0B224: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C0/C0B149.asm:129 LDA #$00FF
    // Overlapping static entry reached from 0xC0B224.
    case 0xC0B226: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C0B149.asm:131 STA SWIRL_WINDOW_HDMA_BUFFER,Y
    case 0xC0B227: cpu.execute_instruction<0x99>(0x003FD0, 3); return true;
    // src/unknown/C0/C0B149.asm:132 INY
    case 0xC0B22A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:133 INY
    case 0xC0B22B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:134 CPY #$01C0
    case 0xC0B22C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000C0, 2); else cpu.execute_instruction<0xC0>(0x0001C0, 3); return true;
    // src/unknown/C0/C0B149.asm:134 CPY #$01C0
    // Overlapping static entry reached from 0xC0B22C.
    case 0xC0B22E: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/unknown/C0/C0B149.asm:135 BCC @UNKNOWN14
    case 0xC0B22F: cpu.execute_instruction<0x90>(0x0000F6, 2); return true;
    // src/unknown/C0/C0B149.asm:135 BCC @UNKNOWN14
    // Overlapping static entry reached from 0xC0B22E.
    case 0xC0B230: cpu.execute_instruction<0xF6>(0x00002B, 2); return true;
    // src/unknown/C0/C0B149.asm:137 PLD
    case 0xC0B231: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:138 RTL
    case 0xC0B232: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:140 LDY #$01BE
    case 0xC0B233: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000BE, 2); else cpu.execute_instruction<0xA0>(0x0001BE, 3); return true;
    // src/unknown/C0/C0B149.asm:140 LDY #$01BE
    // Overlapping static entry reached from 0xC0B233.
    case 0xC0B235: cpu.execute_instruction<0x01>(0x0000A9, 2); return true;
    // src/unknown/C0/C0B149.asm:141 LDA #$00E0
    case 0xC0B236: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // src/unknown/C0/C0B149.asm:141 LDA #$00E0
    // Overlapping static entry reached from 0xC0B235.
    case 0xC0B237: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x003800, 3); return true;
    // src/unknown/C0/C0B149.asm:141 LDA #$00E0
    // Overlapping static entry reached from 0xC0B236.
    case 0xC0B238: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C0/C0B149.asm:142 SEC
    case 0xC0B239: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:143 SBC $02
    case 0xC0B23A: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0B149.asm:144 SEC
    case 0xC0B23C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:145 SBC $06
    case 0xC0B23D: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // src/unknown/C0/C0B149.asm:146 BMI @UNKNOWN18
    case 0xC0B23F: cpu.execute_instruction<0x30>(0x000011, 2); return true;
    // src/unknown/C0/C0B149.asm:147 BEQ @UNKNOWN18
    case 0xC0B241: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C0/C0B149.asm:148 TAX
    case 0xC0B243: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:149 LDA #$00FF
    case 0xC0B244: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C0/C0B149.asm:149 LDA #$00FF
    // Overlapping static entry reached from 0xC0B244.
    case 0xC0B246: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C0B149.asm:151 STA SWIRL_WINDOW_HDMA_BUFFER,Y
    case 0xC0B247: cpu.execute_instruction<0x99>(0x003FD0, 3); return true;
    // src/unknown/C0/C0B149.asm:152 DEY
    case 0xC0B24A: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:153 DEY
    case 0xC0B24B: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:154 DEX
    case 0xC0B24C: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:155 BNE @UNKNOWN17
    case 0xC0B24D: cpu.execute_instruction<0xD0>(0x0000F8, 2); return true;
    // src/unknown/C0/C0B149.asm:155 BNE @UNKNOWN17
    // Overlapping static entry reached from 0xC0B20D.
    case 0xC0B24E: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:156 LDA #$0000
    case 0xC0B24F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0B149.asm:156 LDA #$0000
    // Overlapping static entry reached from 0xC0B24F.
    case 0xC0B251: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0B149.asm:158 CLC
    case 0xC0B252: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:159 ADC $06
    case 0xC0B253: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0B149.asm:160 STA $0A
    case 0xC0B255: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C0B149.asm:161 LDA $04
    case 0xC0B257: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0B149.asm:162 STA f:WRMPYA
    case 0xC0B259: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/unknown/C0/C0B149.asm:164 LDA $0A
    case 0xC0B25D: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C0/C0B149.asm:165 BNE @UNKNOWN20
    case 0xC0B25F: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C0/C0B149.asm:166 LDA $04
    case 0xC0B261: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0B149.asm:167 BRA @UNKNOWN21
    case 0xC0B263: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/unknown/C0/C0B149.asm:169 XBA
    case 0xC0B265: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:170 STA f:WRDIVL
    case 0xC0B266: cpu.execute_instruction<0x8F>(0x004204, 4); return true;
    // src/unknown/C0/C0B149.asm:171 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B26A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:172 LDA $06
    case 0xC0B26C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0B149.asm:173 STA f:WRDIVB
    case 0xC0B26E: cpu.execute_instruction<0x8F>(0x004206, 4); return true;
    // src/unknown/C0/C0B149.asm:174 REP #PROC_FLAGS::ACCUM8
    case 0xC0B272: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:175 NOP
    case 0xC0B274: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:176 NOP
    case 0xC0B275: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:177 NOP
    case 0xC0B276: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:178 NOP
    case 0xC0B277: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:179 NOP
    case 0xC0B278: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:180 LDA f:RDDIVL
    case 0xC0B279: cpu.execute_instruction<0xAF>(0x004214, 4); return true;
    // src/unknown/C0/C0B149.asm:181 TAX
    case 0xC0B27D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:182 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B27E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:183 LDA f:UNKNOWN_C0B2FF,X
    case 0xC0B280: cpu.execute_instruction<0xBF>(0xC0B2FF, 4); return true;
    // src/unknown/C0/C0B149.asm:184 STA f:WRMPYB
    case 0xC0B284: cpu.execute_instruction<0x8F>(0x004203, 4); return true;
    // src/unknown/C0/C0B149.asm:185 REP #PROC_FLAGS::ACCUM8
    case 0xC0B288: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:186 LDA #$0080
    case 0xC0B28A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/unknown/C0/C0B149.asm:186 LDA #$0080
    // Overlapping static entry reached from 0xC0B28A.
    case 0xC0B28C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0B149.asm:187 CLC
    case 0xC0B28D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:188 ADC f:RDMPYL
    case 0xC0B28E: cpu.execute_instruction<0x6F>(0x004216, 4); return true;
    // src/unknown/C0/C0B149.asm:189 XBA
    case 0xC0B292: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:190 AND #$00FF
    case 0xC0B293: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0B149.asm:190 AND #$00FF
    // Overlapping static entry reached from 0xC0B293.
    case 0xC0B295: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0B149.asm:192 STA $08
    case 0xC0B296: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0B149.asm:193 CLC
    case 0xC0B298: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:194 ADC $00
    case 0xC0B299: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C0/C0B149.asm:195 BMI @UNKNOWN25
    case 0xC0B29B: cpu.execute_instruction<0x30>(0x000025, 2); return true;
    // src/unknown/C0/C0B149.asm:196 CMP #$0100
    case 0xC0B29D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C0/C0B149.asm:196 CMP #$0100
    // Overlapping static entry reached from 0xC0B29D.
    case 0xC0B29F: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/unknown/C0/C0B149.asm:197 BCC @UNKNOWN22
    case 0xC0B2A0: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C0/C0B149.asm:197 BCC @UNKNOWN22
    // Overlapping static entry reached from 0xC0B29F.
    case 0xC0B2A1: cpu.execute_instruction<0x03>(0x0000A9, 2); return true;
    // src/unknown/C0/C0B149.asm:198 LDA #$00FF
    case 0xC0B2A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C0/C0B149.asm:198 LDA #$00FF
    // Overlapping static entry reached from 0xC0B2A1.
    case 0xC0B2A3: cpu.execute_instruction<0xFF>(0x0C8500, 4); return true;
    // src/unknown/C0/C0B149.asm:198 LDA #$00FF
    // Overlapping static entry reached from 0xC0B2A2.
    case 0xC0B2A4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0B149.asm:200 STA $0C
    case 0xC0B2A5: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0B149.asm:201 LDA $00
    case 0xC0B2A7: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C0/C0B149.asm:202 SEC
    case 0xC0B2A9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:203 SBC $08
    case 0xC0B2AA: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // src/unknown/C0/C0B149.asm:204 BMI @UNKNOWN23
    case 0xC0B2AC: cpu.execute_instruction<0x30>(0x000007, 2); return true;
    // src/unknown/C0/C0B149.asm:205 CMP #$0100
    case 0xC0B2AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C0/C0B149.asm:205 CMP #$0100
    // Overlapping static entry reached from 0xC0B2AE.
    case 0xC0B2B0: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C0/C0B149.asm:206 BCS @UNKNOWN25
    case 0xC0B2B1: cpu.execute_instruction<0xB0>(0x00000F, 2); return true;
    // src/unknown/C0/C0B149.asm:206 BCS @UNKNOWN25
    // Overlapping static entry reached from 0xC0B2B0.
    case 0xC0B2B2: cpu.execute_instruction<0x0F>(0xA90380, 4); return true;
    // src/unknown/C0/C0B149.asm:207 BRA @UNKNOWN24
    case 0xC0B2B3: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0B149.asm:209 LDA #$0000
    case 0xC0B2B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0B149.asm:209 LDA #$0000
    // Overlapping static entry reached from 0xC0B2B2.
    case 0xC0B2B6: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0B149.asm:209 LDA #$0000
    // Overlapping static entry reached from 0xC0B2B5.
    case 0xC0B2B7: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C0/C0B149.asm:211 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B2B8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:212 XBA
    case 0xC0B2BA: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:213 LDA $0C
    case 0xC0B2BB: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/unknown/C0/C0B149.asm:214 XBA
    case 0xC0B2BD: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:215 REP #PROC_FLAGS::ACCUM8
    case 0xC0B2BE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B149.asm:216 BRA @UNKNOWN26
    case 0xC0B2C0: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0B149.asm:218 LDA #$00FF
    case 0xC0B2C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C0/C0B149.asm:218 LDA #$00FF
    // Overlapping static entry reached from 0xC0B2C2.
    case 0xC0B2C4: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C0B149.asm:220 STA SWIRL_WINDOW_HDMA_BUFFER,Y
    case 0xC0B2C5: cpu.execute_instruction<0x99>(0x003FD0, 3); return true;
    // src/unknown/C0/C0B149.asm:221 PHA
    case 0xC0B2C8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:222 LDA $0A
    case 0xC0B2C9: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C0/C0B149.asm:223 ASL
    case 0xC0B2CB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:224 ASL
    case 0xC0B2CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:225 STA $0C
    case 0xC0B2CD: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0B149.asm:226 TYA
    case 0xC0B2CF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:227 SEC
    case 0xC0B2D0: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:228 SBC $0C
    case 0xC0B2D1: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // src/unknown/C0/C0B149.asm:229 TAX
    case 0xC0B2D3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:230 PLA
    case 0xC0B2D4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:231 CPX #$0000
    case 0xC0B2D5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C0B149.asm:231 CPX #$0000
    // Overlapping static entry reached from 0xC0B2D5.
    case 0xC0B2D7: cpu.execute_instruction<0x00>(0x000030, 2); return true;
    // src/unknown/C0/C0B149.asm:232 BMI @UNKNOWN27
    case 0xC0B2D8: cpu.execute_instruction<0x30>(0x000003, 2); return true;
    // src/unknown/C0/C0B149.asm:233 STA SWIRL_WINDOW_HDMA_BUFFER,X
    case 0xC0B2DA: cpu.execute_instruction<0x9D>(0x003FD0, 3); return true;
    // src/unknown/C0/C0B149.asm:235 DEY
    case 0xC0B2DD: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:236 DEY
    case 0xC0B2DE: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:237 DEC $0A
    case 0xC0B2DF: cpu.execute_instruction<0xC6>(0x00000A, 2); return true;
    // src/unknown/C0/C0B149.asm:238 BMI @UNKNOWN28
    case 0xC0B2E1: cpu.execute_instruction<0x30>(0x000003, 2); return true;
    // src/unknown/C0/C0B149.asm:239 JMP @UNKNOWN19
    case 0xC0B2E3: cpu.execute_instruction<0x4C>(0x00B25D, 3); return true;
    // src/unknown/C0/C0B149.asm:241 TYA
    case 0xC0B2E6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:242 SEC
    case 0xC0B2E7: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:243 SBC $06
    case 0xC0B2E8: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // src/unknown/C0/C0B149.asm:244 SEC
    case 0xC0B2EA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:245 SBC $06
    case 0xC0B2EB: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // src/unknown/C0/C0B149.asm:246 TAY
    case 0xC0B2ED: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:247 CPY #$0000
    case 0xC0B2EE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C0/C0B149.asm:247 CPY #$0000
    // Overlapping static entry reached from 0xC0B2EE.
    case 0xC0B2F0: cpu.execute_instruction<0x00>(0x000030, 2); return true;
    // src/unknown/C0/C0B149.asm:248 BMI @UNKNOWN30
    case 0xC0B2F1: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/unknown/C0/C0B149.asm:249 LDA #$00FF
    case 0xC0B2F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C0/C0B149.asm:249 LDA #$00FF
    // Overlapping static entry reached from 0xC0B2F3.
    case 0xC0B2F5: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C0B149.asm:251 STA SWIRL_WINDOW_HDMA_BUFFER,Y
    case 0xC0B2F6: cpu.execute_instruction<0x99>(0x003FD0, 3); return true;
    // src/unknown/C0/C0B149.asm:252 DEY
    case 0xC0B2F9: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:253 DEY
    case 0xC0B2FA: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:254 BPL @UNKNOWN29
    case 0xC0B2FB: cpu.execute_instruction<0x10>(0x0000F9, 2); return true;
    // src/unknown/C0/C0B149.asm:256 PLD
    case 0xC0B2FD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0B149.asm:257 RTL
    case 0xC0B2FE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0B65F.asm (unresolved).
bool execute_unresolved_c0_c0b65f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0B65F.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0B65F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0B65F.asm:4 TXY
    case 0xC0B661: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0B65F.asm:5 TAX
    case 0xC0B662: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B65F.asm:6 STX GAME_STATE+game_state::leader_x_coord
    case 0xC0B663: cpu.execute_instruction<0x8E>(0x009877, 3); return true;
    // src/unknown/C0/C0B65F.asm:7 STY GAME_STATE+game_state::leader_y_coord
    case 0xC0B666: cpu.execute_instruction<0x8C>(0x00987B, 3); return true;
    // src/unknown/C0/C0B65F.asm:8 LDA #$0002
    case 0xC0B669: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0B65F.asm:8 LDA #$0002
    // Overlapping static entry reached from 0xC0B669.
    case 0xC0B66B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0B65F.asm:9 STA GAME_STATE+game_state::leader_direction
    case 0xC0B66C: cpu.execute_instruction<0x8D>(0x00987F, 3); return true;
    // src/unknown/C0/C0B65F.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B66F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0B65F.asm:11 LDA #$0001
    case 0xC0B671: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C0/C0B65F.asm:12 STA GAME_STATE + game_state::party_members
    case 0xC0B673: cpu.execute_instruction<0x8D>(0x00986F, 3); return true;
    // src/unknown/C0/C0B65F.asm:12 STA GAME_STATE + game_state::party_members
    // Overlapping static entry reached from 0xC0B671.
    case 0xC0B674: cpu.execute_instruction<0x6F>(0x468E98, 4); return true;
    // src/unknown/C0/C0B65F.asm:13 STX ENTITY_SCREEN_X_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC0B676: cpu.execute_instruction<0x8E>(0x000B46, 3); return true;
    // src/unknown/C0/C0B65F.asm:13 STX ENTITY_SCREEN_X_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    // Overlapping static entry reached from 0xC0B674.
    case 0xC0B678: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0B65F.asm:14 STY ENTITY_SCREEN_Y_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC0B679: cpu.execute_instruction<0x8C>(0x000B82, 3); return true;
    // src/unknown/C0/C0B65F.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC0B67C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B65F.asm:16 RTL
    case 0xC0B67E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0B67F.asm (unresolved).
bool execute_unresolved_c0_c0b67f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0B67F.asm:3 BEGIN_C_FUNCTION
    case 0xC0B67F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0B67F.asm:10 END_STACK_VARS
    case 0xC0B681: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0B67F.asm:10 END_STACK_VARS
    case 0xC0B682: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0B67F.asm:10 END_STACK_VARS
    case 0xC0B683: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0B67F.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC0B683.
    case 0xC0B685: cpu.execute_instruction<0xFF>(0x7C225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0B67F.asm:10 END_STACK_VARS
    case 0xC0B686: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0B67F.asm:11 JSL UNKNOWN_C0927C
    case 0xC0B687: cpu.execute_instruction<0x22>(0xC0927C, 4); return true;
    // src/unknown/C0/C0B67F.asm:11 JSL UNKNOWN_C0927C
    // Overlapping static entry reached from 0xC0B685.
    case 0xC0B689: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/unknown/C0/C0B67F.asm:12 JSL UNKNOWN_C01A86
    case 0xC0B68B: cpu.execute_instruction<0x22>(0xC01A86, 4); return true;
    // src/unknown/C0/C0B67F.asm:13 LDX #0
    case 0xC0B68F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0B67F.asm:13 LDX #0
    // Overlapping static entry reached from 0xC0B68F.
    case 0xC0B691: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C0B67F.asm:14 LDA #$8000
    case 0xC0B692: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/unknown/C0/C0B67F.asm:14 LDA #$8000
    // Overlapping static entry reached from 0xC0B692.
    case 0xC0B694: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/unknown/C0/C0B67F.asm:15 JSL ALLOC_SPRITE_MEM
    case 0xC0B695: cpu.execute_instruction<0x22>(0xC01C11, 4); return true;
    // src/unknown/C0/C0B67F.asm:16 JSL INITIALIZE_MISC_OBJECT_DATA
    case 0xC0B699: cpu.execute_instruction<0x22>(0xC01A69, 4); return true;
    // src/unknown/C0/C0B67F.asm:17 STZ BATTLE_MODE
    case 0xC0B69D: cpu.execute_instruction<0x9C>(0x004DC2, 3); return true;
    // src/unknown/C0/C0B67F.asm:18 STZ INPUT_DISABLE_FRAME_COUNTER
    case 0xC0B6A0: cpu.execute_instruction<0x9C>(0x005D74, 3); return true;
    // src/unknown/C0/C0B67F.asm:19 LDA #1
    case 0xC0B6A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0B67F.asm:19 LDA #1
    // Overlapping static entry reached from 0xC0B6A3.
    case 0xC0B6A5: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0B67F.asm:20 STA NPC_SPAWNS_ENABLED
    case 0xC0B6A6: cpu.execute_instruction<0x8D>(0x004A58, 3); return true;
    // src/unknown/C0/C0B67F.asm:21 LDA #.LOWORD(-1)
    case 0xC0B6A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0B67F.asm:21 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0B6A9.
    case 0xC0B6AB: cpu.execute_instruction<0xFF>(0x4A5A8D, 4); return true;
    // src/unknown/C0/C0B67F.asm:22 STA ENEMY_SPAWNS_ENABLED
    case 0xC0B6AC: cpu.execute_instruction<0x8D>(0x004A5A, 3); return true;
    // src/unknown/C0/C0B67F.asm:23 LDA #10
    case 0xC0B6AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C0/C0B67F.asm:23 LDA #10
    // Overlapping static entry reached from 0xC0B6AF.
    case 0xC0B6B1: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0B67F.asm:24 STA OVERWORLD_ENEMY_MAXIMUM
    case 0xC0B6B2: cpu.execute_instruction<0x8D>(0x004A5E, 3); return true;
    // src/unknown/C0/C0B67F.asm:25 STZ BATTLE_SWIRL_COUNTDOWN
    case 0xC0B6B5: cpu.execute_instruction<0x9C>(0x005D60, 3); return true;
    // src/unknown/C0/C0B67F.asm:26 STZ PENDING_INTERACTIONS
    case 0xC0B6B8: cpu.execute_instruction<0x9C>(0x005D9A, 3); return true;
    // src/unknown/C0/C0B67F.asm:27 LDA #1
    case 0xC0B6BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0B67F.asm:27 LDA #1
    // Overlapping static entry reached from 0xC0B6BB.
    case 0xC0B6BD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0B67F.asm:28 JSL SET_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC0B6BE: cpu.execute_instruction<0x22>(0xC4FD45, 4); return true;
    // src/unknown/C0/C0B67F.asm:29 LDA #1687
    case 0xC0B6C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000097, 2); else cpu.execute_instruction<0xA9>(0x000697, 3); return true;
    // src/unknown/C0/C0B67F.asm:29 LDA #1687
    // Overlapping static entry reached from 0xC0B6C2.
    case 0xC0B6C4: cpu.execute_instruction<0x06>(0x00008D, 2); return true;
    // src/unknown/C0/C0B67F.asm:30 STA DAD_PHONE_TIMER
    case 0xC0B6C5: cpu.execute_instruction<0x8D>(0x009E54, 3); return true;
    // src/unknown/C0/C0B67F.asm:30 STA DAD_PHONE_TIMER
    // Overlapping static entry reached from 0xC0B6C4.
    case 0xC0B6C6: cpu.execute_instruction<0x54>(0x00A99E, 3); return true;
    // src/unknown/C0/C0B67F.asm:31 LDA #.LOWORD(PROCESS_OVERWORLD_TASKS)
    case 0xC0B6C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004E, 2); else cpu.execute_instruction<0xA9>(0x00DC4E, 3); return true;
    // src/unknown/C0/C0B67F.asm:31 LDA #.LOWORD(PROCESS_OVERWORLD_TASKS)
    // Overlapping static entry reached from 0xC0B6C6.
    case 0xC0B6C9: cpu.execute_instruction<0x4E>(0x0022DC, 3); return true;
    // src/unknown/C0/C0B67F.asm:31 LDA #.LOWORD(PROCESS_OVERWORLD_TASKS)
    // Overlapping static entry reached from 0xC0B6C8.
    case 0xC0B6CA: cpu.execute_instruction<0xDC>(0x001C22, 3); return true;
    // src/unknown/C0/C0B67F.asm:32 JSL SET_IRQ_CALLBACK
    case 0xC0B6CB: cpu.execute_instruction<0x22>(0xC0851C, 4); return true;
    // src/unknown/C0/C0B67F.asm:32 JSL SET_IRQ_CALLBACK
    // Overlapping static entry reached from 0xC0B6C9.
    case 0xC0B6CC: cpu.execute_instruction<0x1C>(0x00C085, 3); return true;
    // src/unknown/C0/C0B67F.asm:33 STZ PSI_TELEPORT_STYLE
    case 0xC0B6CF: cpu.execute_instruction<0x9C>(0x009F41, 3); return true;
    // src/unknown/C0/C0B67F.asm:34 STZ PSI_TELEPORT_DESTINATION
    case 0xC0B6D2: cpu.execute_instruction<0x9C>(0x009F3F, 3); return true;
    // src/unknown/C0/C0B67F.asm:35 LDA #.LOWORD(-1)
    case 0xC0B6D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0B67F.asm:35 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0B6D5.
    case 0xC0B6D7: cpu.execute_instruction<0xFF>(0xB4A88D, 4); return true;
    // src/unknown/C0/C0B67F.asm:36 STA ENTITY_FADE_ENTITY
    case 0xC0B6D8: cpu.execute_instruction<0x8D>(0x00B4A8, 3); return true;
    // src/unknown/C0/C0B67F.asm:37 LDA #23
    case 0xC0B6DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/unknown/C0/C0B67F.asm:37 LDA #23
    // Overlapping static entry reached from 0xC0B6DB.
    case 0xC0B6DD: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0B67F.asm:38 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC0B6DE: cpu.execute_instruction<0x8D>(0x000A4C, 3); return true;
    // src/unknown/C0/C0B67F.asm:39 LDA #24
    case 0xC0B6E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C0B67F.asm:39 LDA #24
    // Overlapping static entry reached from 0xC0B6E1.
    case 0xC0B6E3: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0B67F.asm:40 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC0B6E4: cpu.execute_instruction<0x8D>(0x000A4E, 3); return true;
    // src/unknown/C0/C0B67F.asm:41 LDY #0
    case 0xC0B6E7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0B67F.asm:41 LDY #0
    // Overlapping static entry reached from 0xC0B6E7.
    case 0xC0B6E9: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C0/C0B67F.asm:42 TYX
    case 0xC0B6EA: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C0B67F.asm:43 LDA #EVENT_SCRIPT::EVENT_001
    case 0xC0B6EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0B67F.asm:43 LDA #EVENT_SCRIPT::EVENT_001
    // Overlapping static entry reached from 0xC0B6EB.
    case 0xC0B6ED: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0B67F.asm:44 JSL INIT_ENTITY
    case 0xC0B6EE: cpu.execute_instruction<0x22>(0xC09321, 4); return true;
    // src/unknown/C0/C0B67F.asm:45 JSL UNKNOWN_C02D29
    case 0xC0B6F2: cpu.execute_instruction<0x22>(0xC02D29, 4); return true;
    // src/unknown/C0/C0B67F.asm:46 JSL UNKNOWN_C03A24
    case 0xC0B6F6: cpu.execute_instruction<0x22>(0xC03A24, 4); return true;
    // src/unknown/C0/C0B67F.asm:47 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B6FA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/unknown/C0/C0B67F.asm:48 STZ_BADOPT @LOCAL00
    case 0xC0B6FC: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/unknown/C0/C0B67F.asm:49 LDX #BPP4PALETTE_SIZE * 16
    case 0xC0B6FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/unknown/C0/C0B67F.asm:49 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC0B6FE.
    case 0xC0B700: cpu.execute_instruction<0x02>(0x0000C2, 2); return true;
    // src/unknown/C0/C0B67F.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC0B701: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B67F.asm:51 LDA #.LOWORD(PALETTES)
    case 0xC0B703: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C0/C0B67F.asm:51 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0B703.
    case 0xC0B705: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C0/C0B67F.asm:52 JSL MEMSET16
    case 0xC0B706: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C0/C0B67F.asm:53 JSL UNKNOWN_C47F87
    case 0xC0B70A: cpu.execute_instruction<0x22>(0xC47F87, 4); return true;
    // src/unknown/C0/C0B67F.asm:54 JSL OVERWORLD_INITIALIZE
    case 0xC0B70E: cpu.execute_instruction<0x22>(0xC0004B, 4); return true;
    // src/unknown/C0/C0B67F.asm:55 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0B712: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C0B67F.asm:56 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0B715: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C0B67F.asm:57 JSL LOAD_MAP_AT_POSITION
    case 0xC0B718: cpu.execute_instruction<0x22>(0xC013F6, 4); return true;
    // src/unknown/C0/C0B67F.asm:58 JSL SPAWN_BUZZ_BUZZ
    case 0xC0B71C: cpu.execute_instruction<0x22>(0xC06B21, 4); return true;
    // src/unknown/C0/C0B67F.asm:59 JSL LOAD_WINDOW_GFX
    case 0xC0B720: cpu.execute_instruction<0x22>(0xC47C3F, 4); return true;
    // src/unknown/C0/C0B67F.asm:63 LDA #1
    case 0xC0B724: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0B67F.asm:63 LDA #1
    // Overlapping static entry reached from 0xC0B724.
    case 0xC0B726: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0B67F.asm:64 JSL UNKNOWN_C44963
    case 0xC0B727: cpu.execute_instruction<0x22>(0xC44963, 4); return true;
    // src/unknown/C0/C0B67F.asm:66 JSL UNKNOWN_C039E5
    case 0xC0B72B: cpu.execute_instruction<0x22>(0xC039E5, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0B67F.asm:67 END_C_FUNCTION
    case 0xC0B72F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0B67F.asm:67 END_C_FUNCTION
    case 0xC0B730: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0B9BC.asm (unresolved).
bool execute_unresolved_c0_c0b9bc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0B9BC.asm:3 BEGIN_C_FUNCTION
    case 0xC0B9BC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0B9BC.asm:14 END_STACK_VARS
    case 0xC0B9BE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0B9BC.asm:14 END_STACK_VARS
    case 0xC0B9BF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0B9BC.asm:14 END_STACK_VARS
    case 0xC0B9C0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0B9BC.asm:14 END_STACK_VARS
    case 0xC0B9C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0B9BC.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC0B9C1.
    case 0xC0B9C3: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0B9BC.asm:14 END_STACK_VARS
    case 0xC0B9C4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0B9BC.asm:14 END_STACK_VARS
    case 0xC0B9C5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:15 STY @LOCAL04
    case 0xC0B9C6: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C0/C0B9BC.asm:15 STY @LOCAL04
    // Overlapping static entry reached from 0xC0B9C3.
    case 0xC0B9C7: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C0/C0B9BC.asm:16 STX @LOCAL03
    case 0xC0B9C8: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C0B9BC.asm:16 STX @LOCAL03
    // Overlapping static entry reached from 0xC0B9C7.
    case 0xC0B9C9: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/unknown/C0/C0B9BC.asm:17 STA @LOCAL02
    case 0xC0B9CA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0B9BC.asm:17 STA @LOCAL02
    // Overlapping static entry reached from 0xC0B9C9.
    case 0xC0B9CB: cpu.execute_instruction<0x12>(0x0000A6, 2); return true;
    // src/unknown/C0/C0B9BC.asm:18 LDX @PARAM03
    case 0xC0B9CC: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/unknown/C0/C0B9BC.asm:18 LDX @PARAM03
    // Overlapping static entry reached from 0xC0B9CB.
    case 0xC0B9CD: cpu.execute_instruction<0x26>(0x000086, 2); return true;
    // src/unknown/C0/C0B9BC.asm:19 STX @VIRTUAL04
    case 0xC0B9CE: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C0/C0B9BC.asm:19 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC0B9CD.
    case 0xC0B9CF: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/unknown/C0/C0B9BC.asm:20 LDA #0
    case 0xC0B9D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0B9BC.asm:20 LDA #0
    // Overlapping static entry reached from 0xC0B9CF.
    case 0xC0B9D1: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0B9BC.asm:20 LDA #0
    // Overlapping static entry reached from 0xC0B9D0.
    case 0xC0B9D2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0B9BC.asm:21 STA @VIRTUAL02
    case 0xC0B9D3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0B9BC.asm:22 BRA @UNKNOWN1
    case 0xC0B9D5: cpu.execute_instruction<0x80>(0x000056, 2); return true;
    // src/unknown/C0/C0B9BC.asm:24 LDA @VIRTUAL02
    case 0xC0B9D7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0B9BC.asm:25 ASL
    case 0xC0B9D9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:32 TAX
    case 0xC0B9DA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:33 LDA GAME_STATE + game_state::unknownA2,X
    case 0xC0B9DB: cpu.execute_instruction<0xBD>(0x009897, 3); return true;
    // src/unknown/C0/C0B9BC.asm:35 ASL
    case 0xC0B9DE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:36 TAY
    case 0xC0B9DF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:37 LDA ENTITY_SIZES,Y
    case 0xC0B9E0: cpu.execute_instruction<0xB9>(0x002B6E, 3); return true;
    // src/unknown/C0/C0B9BC.asm:38 STA @LOCAL01
    case 0xC0B9E3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0B9BC.asm:39 LDA @VIRTUAL02
    case 0xC0B9E5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0B9BC.asm:40 ASL
    case 0xC0B9E7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:41 ASL
    case 0xC0B9E8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:42 CLC
    case 0xC0B9E9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:43 ADC @LOCAL02
    case 0xC0B9EA: cpu.execute_instruction<0x65>(0x000012, 2); return true;
    // src/unknown/C0/C0B9BC.asm:44 TAX
    case 0xC0B9EC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:45 STX @LOCAL00
    case 0xC0B9ED: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0B9BC.asm:46 LDA @LOCAL01
    case 0xC0B9EF: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0B9BC.asm:47 ASL
    case 0xC0B9F1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:48 STA @LOCAL01
    case 0xC0B9F2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0B9BC.asm:49 TAX
    case 0xC0B9F4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:50 LDA ENTITY_ABS_X_TABLE,Y
    case 0xC0B9F5: cpu.execute_instruction<0xB9>(0x000B8E, 3); return true;
    // src/unknown/C0/C0B9BC.asm:51 SEC
    case 0xC0B9F8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:52 SBC f:UNKNOWN_C42A1F,X
    case 0xC0B9F9: cpu.execute_instruction<0xFF>(0xC42A1F, 4); return true;
    // src/unknown/C0/C0B9BC.asm:53 LSR
    case 0xC0B9FD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:54 LSR
    case 0xC0B9FE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:55 LSR
    case 0xC0B9FF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:56 SEC
    case 0xC0BA00: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:57 SBC @LOCAL04
    case 0xC0BA01: cpu.execute_instruction<0xE5>(0x000016, 2); return true;
    // src/unknown/C0/C0B9BC.asm:58 AND #$003F
    case 0xC0BA03: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0B9BC.asm:58 AND #$003F
    // Overlapping static entry reached from 0xC0BA03.
    case 0xC0BA05: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C0B9BC.asm:59 LDX @LOCAL00
    case 0xC0BA06: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0B9BC.asm:60 STA a:pathfinding::targets + 2,X
    case 0xC0BA08: cpu.execute_instruction<0x9D>(0x00007E, 3); return true;
    // src/unknown/C0/C0B9BC.asm:61 LDA @LOCAL01
    case 0xC0BA0B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0B9BC.asm:62 PHA
    case 0xC0BA0D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:63 TAX
    case 0xC0BA0E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:64 LDA ENTITY_ABS_Y_TABLE,Y
    case 0xC0BA0F: cpu.execute_instruction<0xB9>(0x000BCA, 3); return true;
    // src/unknown/C0/C0B9BC.asm:65 SEC
    case 0xC0BA12: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:66 SBC f:UNKNOWN_C42A41,X
    case 0xC0BA13: cpu.execute_instruction<0xFF>(0xC42A41, 4); return true;
    // src/unknown/C0/C0B9BC.asm:67 PLX
    case 0xC0BA17: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:68 CLC
    case 0xC0BA18: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:69 ADC f:UNKNOWN_C42AEB,X
    case 0xC0BA19: cpu.execute_instruction<0x7F>(0xC42AEB, 4); return true;
    // src/unknown/C0/C0B9BC.asm:70 LSR
    case 0xC0BA1D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:71 LSR
    case 0xC0BA1E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:72 LSR
    case 0xC0BA1F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:73 SEC
    case 0xC0BA20: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0B9BC.asm:74 SBC @VIRTUAL04
    case 0xC0BA21: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C0/C0B9BC.asm:75 AND #$003F
    case 0xC0BA23: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0B9BC.asm:75 AND #$003F
    // Overlapping static entry reached from 0xC0BA23.
    case 0xC0BA25: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C0B9BC.asm:76 LDX @LOCAL00
    case 0xC0BA26: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0B9BC.asm:77 STA a:pathfinding::targets,X
    case 0xC0BA28: cpu.execute_instruction<0x9D>(0x00007C, 3); return true;
    // src/unknown/C0/C0B9BC.asm:78 INC @VIRTUAL02
    case 0xC0BA2B: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0B9BC.asm:80 LDA @VIRTUAL02
    case 0xC0BA2D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0B9BC.asm:81 CMP @LOCAL03
    case 0xC0BA2F: cpu.execute_instruction<0xC5>(0x000014, 2); return true;
    // src/unknown/C0/C0B9BC.asm:82 BCC @UNKNOWN0
    case 0xC0BA31: cpu.execute_instruction<0x90>(0x0000A4, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0B9BC.asm:83 END_C_FUNCTION
    case 0xC0BA33: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0B9BC.asm:83 END_C_FUNCTION
    case 0xC0BA34: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0BA35.asm (unresolved).
bool execute_unresolved_c0_c0ba35_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0BA35.asm:3 BEGIN_C_FUNCTION
    case 0xC0BA35: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0BA35.asm:33 END_STACK_VARS
    case 0xC0BA37: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0BA35.asm:33 END_STACK_VARS
    case 0xC0BA38: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0BA35.asm:33 END_STACK_VARS
    case 0xC0BA39: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0BA35.asm:33 END_STACK_VARS
    case 0xC0BA3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C6, 2); else cpu.execute_instruction<0x69>(0x00FFC6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0BA35.asm:33 END_STACK_VARS
    // Overlapping static entry reached from 0xC0BA3A.
    case 0xC0BA3C: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0BA35.asm:33 END_STACK_VARS
    case 0xC0BA3D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0BA35.asm:33 END_STACK_VARS
    case 0xC0BA3E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:34 STY @LOCAL13
    case 0xC0BA3F: cpu.execute_instruction<0x84>(0x000038, 2); return true;
    // src/unknown/C0/C0BA35.asm:34 STY @LOCAL13
    // Overlapping static entry reached from 0xC0BA3C.
    case 0xC0BA40: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:35 STX @LOCAL12
    case 0xC0BA41: cpu.execute_instruction<0x86>(0x000036, 2); return true;
    // src/unknown/C0/C0BA35.asm:36 STA @VIRTUAL04
    case 0xC0BA43: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0BA35.asm:37 STA @LOCAL11
    case 0xC0BA45: cpu.execute_instruction<0x85>(0x000034, 2); return true;
    // src/unknown/C0/C0BA35.asm:38 LDA @PARAM06
    case 0xC0BA47: cpu.execute_instruction<0xA5>(0x00004E, 2); return true;
    // src/unknown/C0/C0BA35.asm:39 STA @LOCAL10
    case 0xC0BA49: cpu.execute_instruction<0x85>(0x000032, 2); return true;
    // src/unknown/C0/C0BA35.asm:40 LDA @PARAM05
    case 0xC0BA4B: cpu.execute_instruction<0xA5>(0x00004C, 2); return true;
    // src/unknown/C0/C0BA35.asm:41 STA @LOCAL0F
    case 0xC0BA4D: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // src/unknown/C0/C0BA35.asm:42 LDX @PARAM04
    case 0xC0BA4F: cpu.execute_instruction<0xA6>(0x00004A, 2); return true;
    // src/unknown/C0/C0BA35.asm:43 STX @LOCAL0E
    case 0xC0BA51: cpu.execute_instruction<0x86>(0x00002E, 2); return true;
    // src/unknown/C0/C0BA35.asm:44 LDY @PARAM03
    case 0xC0BA53: cpu.execute_instruction<0xA4>(0x000048, 2); return true;
    // src/unknown/C0/C0BA35.asm:45 STY @LOCAL0D
    case 0xC0BA55: cpu.execute_instruction<0x84>(0x00002C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BA35.asm:46 LOADPTR BUFFER + $3000, @VIRTUAL06
    case 0xC0BA57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x003000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BA35.asm:46 LOADPTR BUFFER + $3000, @VIRTUAL06
    // Overlapping static entry reached from 0xC0BA57.
    case 0xC0BA59: cpu.execute_instruction<0x30>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0BA35.asm:46 LOADPTR BUFFER + $3000, @VIRTUAL06
    case 0xC0BA5A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0BA35.asm:46 LOADPTR BUFFER + $3000, @VIRTUAL06
    // Overlapping static entry reached from 0xC0BA59.
    case 0xC0BA5B: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BA35.asm:46 LOADPTR BUFFER + $3000, @VIRTUAL06
    case 0xC0BA5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BA35.asm:46 LOADPTR BUFFER + $3000, @VIRTUAL06
    // Overlapping static entry reached from 0xC0BA5B.
    case 0xC0BA5D: cpu.execute_instruction<0x7F>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BA35.asm:46 LOADPTR BUFFER + $3000, @VIRTUAL06
    // Overlapping static entry reached from 0xC0BA5C.
    case 0xC0BA5E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0BA35.asm:46 LOADPTR BUFFER + $3000, @VIRTUAL06
    case 0xC0BA5F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0BA35.asm:47 LDA @LOCAL12
    case 0xC0BA61: cpu.execute_instruction<0xA5>(0x000036, 2); return true;
    // src/unknown/C0/C0BA35.asm:48 LDX @VIRTUAL04
    case 0xC0BA63: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0BA35.asm:49 STA a:pathfinding::target_count,X
    case 0xC0BA65: cpu.execute_instruction<0x9D>(0x00009C, 3); return true;
    // src/unknown/C0/C0BA35.asm:50 LDX #0
    case 0xC0BA68: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0BA35.asm:50 LDX #0
    // Overlapping static entry reached from 0xC0BA68.
    case 0xC0BA6A: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C0BA35.asm:51 STX @LOCAL0C
    case 0xC0BA6B: cpu.execute_instruction<0x86>(0x00002A, 2); return true;
    // src/unknown/C0/C0BA35.asm:52 BRA @UNKNOWN5
    case 0xC0BA6D: cpu.execute_instruction<0x80>(0x000058, 2); return true;
    // src/unknown/C0/C0BA35.asm:54 LDA #0
    case 0xC0BA6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0BA35.asm:54 LDA #0
    // Overlapping static entry reached from 0xC0BA6F.
    case 0xC0BA71: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BA35.asm:55 STA @LOCAL0B
    case 0xC0BA72: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:56 BRA @UNKNOWN4
    case 0xC0BA74: cpu.execute_instruction<0x80>(0x000045, 2); return true;
    // src/unknown/C0/C0BA35.asm:58 CLC
    case 0xC0BA76: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:59 ADC @LOCAL13
    case 0xC0BA77: cpu.execute_instruction<0x65>(0x000038, 2); return true;
    // src/unknown/C0/C0BA35.asm:60 AND #$003F
    case 0xC0BA79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0BA35.asm:60 AND #$003F
    // Overlapping static entry reached from 0xC0BA79.
    case 0xC0BA7B: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C0/C0BA35.asm:61 PHA
    case 0xC0BA7C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:62 LDX @LOCAL0C
    case 0xC0BA7D: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // src/unknown/C0/C0BA35.asm:63 STX @VIRTUAL02
    case 0xC0BA7F: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:64 TYA
    case 0xC0BA81: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:65 CLC
    case 0xC0BA82: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:66 ADC @VIRTUAL02
    case 0xC0BA83: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:67 AND #$003F
    case 0xC0BA85: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0BA35.asm:67 AND #$003F
    // Overlapping static entry reached from 0xC0BA85.
    case 0xC0BA87: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C0BA35.asm:68 ASL
    case 0xC0BA88: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:69 ASL
    case 0xC0BA89: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:70 ASL
    case 0xC0BA8A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:71 ASL
    case 0xC0BA8B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:72 ASL
    case 0xC0BA8C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:73 ASL
    case 0xC0BA8D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:74 PLX
    case 0xC0BA8E: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:75 STX @VIRTUAL02
    case 0xC0BA8F: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:76 CLC
    case 0xC0BA91: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:77 ADC @VIRTUAL02
    case 0xC0BA92: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:78 TAX
    case 0xC0BA94: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:79 LDA LOADED_COLLISION_TILES,X
    case 0xC0BA95: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C0BA35.asm:80 AND #$00FF
    case 0xC0BA98: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0BA35.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC0BA98.
    case 0xC0BA9A: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C0BA35.asm:81 AND #$00C0
    case 0xC0BA9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/unknown/C0/C0BA35.asm:81 AND #$00C0
    // Overlapping static entry reached from 0xC0BA9B.
    case 0xC0BA9D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0BA35.asm:82 BEQ @UNKNOWN2
    case 0xC0BA9E: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C0BA35.asm:83 SEP #PROC_FLAGS::ACCUM8
    case 0xC0BAA0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0BA35.asm:84 LDA #<-3
    case 0xC0BAA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FD, 2); else cpu.execute_instruction<0xA9>(0x0087FD, 3); return true;
    // src/unknown/C0/C0BA35.asm:85 STA [@VIRTUAL06]
    case 0xC0BAA4: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C0/C0BA35.asm:85 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC0BAA2.
    case 0xC0BAA5: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C0/C0BA35.asm:86 REP #PROC_FLAGS::ACCUM8
    case 0xC0BAA6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0BA35.asm:86 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0BAA5.
    case 0xC0BAA7: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C0/C0BA35.asm:87 INC @VIRTUAL06
    case 0xC0BAA8: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C0/C0BA35.asm:88 BRA @UNKNOWN3
    case 0xC0BAAA: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C0/C0BA35.asm:90 SEP #PROC_FLAGS::ACCUM8
    case 0xC0BAAC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0BA35.asm:91 LDA #0
    case 0xC0BAAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/unknown/C0/C0BA35.asm:92 STA [@VIRTUAL06]
    case 0xC0BAB0: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C0/C0BA35.asm:92 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC0BAAE.
    case 0xC0BAB1: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C0/C0BA35.asm:93 REP #PROC_FLAGS::ACCUM8
    case 0xC0BAB2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0BA35.asm:93 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0BAB1.
    case 0xC0BAB3: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C0/C0BA35.asm:94 INC @VIRTUAL06
    case 0xC0BAB4: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C0/C0BA35.asm:96 LDA @LOCAL0B
    case 0xC0BAB6: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:97 INC
    case 0xC0BAB8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:98 STA @LOCAL0B
    case 0xC0BAB9: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:100 LDX @VIRTUAL04
    case 0xC0BABB: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0BA35.asm:101 CMP a:pathfinding::radius,X
    case 0xC0BABD: cpu.execute_instruction<0xDD>(0x000078, 3); return true;
    // src/unknown/C0/C0BA35.asm:102 BNE @UNKNOWN1
    case 0xC0BAC0: cpu.execute_instruction<0xD0>(0x0000B4, 2); return true;
    // src/unknown/C0/C0BA35.asm:103 LDX @LOCAL0C
    case 0xC0BAC2: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // src/unknown/C0/C0BA35.asm:104 INX
    case 0xC0BAC4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:105 STX @LOCAL0C
    case 0xC0BAC5: cpu.execute_instruction<0x86>(0x00002A, 2); return true;
    // src/unknown/C0/C0BA35.asm:107 TXA
    case 0xC0BAC7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:108 LDX @VIRTUAL04
    case 0xC0BAC8: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0BA35.asm:109 CMP a:pathfinding::radius + 2,X
    case 0xC0BACA: cpu.execute_instruction<0xDD>(0x00007A, 3); return true;
    // src/unknown/C0/C0BA35.asm:110 BNE @UNKNOWN0
    case 0xC0BACD: cpu.execute_instruction<0xD0>(0x0000A0, 2); return true;
    // src/unknown/C0/C0BA35.asm:111 LDA #0
    case 0xC0BACF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0BA35.asm:111 LDA #0
    // Overlapping static entry reached from 0xC0BACF.
    case 0xC0BAD1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BA35.asm:112 STA @VIRTUAL02
    case 0xC0BAD2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:113 STA @LOCAL0A
    case 0xC0BAD4: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C0/C0BA35.asm:114 STA @LOCAL0B
    case 0xC0BAD6: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:115 JMP @UNKNOWN10
    case 0xC0BAD8: cpu.execute_instruction<0x4C>(0x00BB88, 3); return true;
    // src/unknown/C0/C0BA35.asm:117 ASL
    case 0xC0BADB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:118 STA @LOCAL09
    case 0xC0BADC: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C0/C0BA35.asm:119 LDY #.LOWORD(ENTITY_SCRIPT_TABLE)
    case 0xC0BADE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000062, 2); else cpu.execute_instruction<0xA0>(0x000A62, 3); return true;
    // src/unknown/C0/C0BA35.asm:119 LDY #.LOWORD(ENTITY_SCRIPT_TABLE)
    // Overlapping static entry reached from 0xC0BADE.
    case 0xC0BAE0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:120 LDA (@LOCAL09),Y
    case 0xC0BAE1: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/unknown/C0/C0BA35.asm:121 CMP #.LOWORD(-1)
    case 0xC0BAE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0BA35.asm:121 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0BAE3.
    case 0xC0BAE5: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0BA35.asm:122 BEQL @UNKNOWN9
    case 0xC0BAE6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0BA35.asm:122 BEQL @UNKNOWN9
    case 0xC0BAE8: cpu.execute_instruction<0x4C>(0x00BB83, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0BA35.asm:122 BEQL @UNKNOWN9
    // Overlapping static entry reached from 0xC0BAE5.
    case 0xC0BAE9: cpu.execute_instruction<0x83>(0x0000BB, 2); return true;
    // src/unknown/C0/C0BA35.asm:123 LDY #.LOWORD(ENTITY_PATHFINDING_STATES)
    case 0xC0BAEB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x002C5E, 3); return true;
    // src/unknown/C0/C0BA35.asm:123 LDY #.LOWORD(ENTITY_PATHFINDING_STATES)
    // Overlapping static entry reached from 0xC0BAEB.
    case 0xC0BAED: cpu.execute_instruction<0x2C>(0x0024B1, 3); return true;
    // src/unknown/C0/C0BA35.asm:124 LDA (@LOCAL09),Y
    case 0xC0BAEE: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/unknown/C0/C0BA35.asm:125 CMP #.LOWORD(-1)
    case 0xC0BAF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0BA35.asm:125 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0BAF0.
    case 0xC0BAF2: cpu.execute_instruction<0xFF>(0x4C03F0, 4); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0BA35.asm:126 BNEL @UNKNOWN9
    case 0xC0BAF3: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0BA35.asm:126 BNEL @UNKNOWN9
    case 0xC0BAF5: cpu.execute_instruction<0x4C>(0x00BB83, 3); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0BA35.asm:126 BNEL @UNKNOWN9
    // Overlapping static entry reached from 0xC0BAF2.
    case 0xC0BAF6: cpu.execute_instruction<0x83>(0x0000BB, 2); return true;
    // src/unknown/C0/C0BA35.asm:127 LDY #.LOWORD(ENTITY_SIZES)
    case 0xC0BAF8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00006E, 2); else cpu.execute_instruction<0xA0>(0x002B6E, 3); return true;
    // src/unknown/C0/C0BA35.asm:127 LDY #.LOWORD(ENTITY_SIZES)
    // Overlapping static entry reached from 0xC0BAF8.
    case 0xC0BAFA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:128 LDA (@LOCAL09),Y
    case 0xC0BAFB: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/unknown/C0/C0BA35.asm:129 STA @LOCAL08
    case 0xC0BAFD: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:130 LDA @VIRTUAL02
    case 0xC0BAFF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:601 STA scratch
    // Macro caller: src/unknown/C0/C0BA35.asm:131 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0BB01: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:602 ASL
    // Macro caller: src/unknown/C0/C0BA35.asm:131 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0BB03: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:603 ASL
    // Macro caller: src/unknown/C0/C0BA35.asm:131 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0BB04: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:604 ASL
    // Macro caller: src/unknown/C0/C0BA35.asm:131 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0BB05: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:605 ADC scratch
    // Macro caller: src/unknown/C0/C0BA35.asm:131 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0BB06: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:606 ASL
    // Macro caller: src/unknown/C0/C0BA35.asm:131 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0BB08: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:132 STA @VIRTUAL02
    case 0xC0BB09: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:133 LDA @LOCAL11
    case 0xC0BB0B: cpu.execute_instruction<0xA5>(0x000034, 2); return true;
    // src/unknown/C0/C0BA35.asm:134 STA @VIRTUAL04
    case 0xC0BB0D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0BA35.asm:135 CLC
    case 0xC0BB0F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:136 ADC @VIRTUAL02
    case 0xC0BB10: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:137 TAX
    case 0xC0BB12: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:138 STX @LOCAL0C
    case 0xC0BB13: cpu.execute_instruction<0x86>(0x00002A, 2); return true;
    // src/unknown/C0/C0BA35.asm:139 LDA @LOCAL0B
    case 0xC0BB15: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:140 STA a:pathfinding::pathfinders + pathfinder::object_index,X
    case 0xC0BB17: cpu.execute_instruction<0x9D>(0x0000B0, 3); return true;
    // src/unknown/C0/C0BA35.asm:141 LDA @LOCAL0E
    case 0xC0BB1A: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/unknown/C0/C0BA35.asm:142 STA a:pathfinding::pathfinders + pathfinder::from_offscreen,X
    case 0xC0BB1C: cpu.execute_instruction<0x9D>(0x0000A0, 3); return true;
    // src/unknown/C0/C0BA35.asm:143 LDA @LOCAL08
    case 0xC0BB1F: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:143 LDA @LOCAL08
    // Overlapping static entry reached from 0xC0BB99.
    case 0xC0BB20: cpu.execute_instruction<0x22>(0x22850A, 4); return true;
    // src/unknown/C0/C0BA35.asm:144 ASL
    case 0xC0BB21: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:145 STA @LOCAL08
    case 0xC0BB22: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:146 LDX @LOCAL08
    case 0xC0BB24: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:147 LDA f:UNKNOWN_C42AA7,X
    case 0xC0BB26: cpu.execute_instruction<0xBF>(0xC42AA7, 4); return true;
    // src/unknown/C0/C0BA35.asm:148 LDX @LOCAL0C
    case 0xC0BB2A: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // src/unknown/C0/C0BA35.asm:149 STA a:pathfinding::pathfinders + pathfinder::unknown_hitbox + 2,X
    case 0xC0BB2C: cpu.execute_instruction<0x9D>(0x0000A4, 3); return true;
    // src/unknown/C0/C0BA35.asm:150 LDX @LOCAL08
    case 0xC0BB2F: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:151 LDA f:UNKNOWN_C42AC9,X
    case 0xC0BB31: cpu.execute_instruction<0xBF>(0xC42AC9, 4); return true;
    // src/unknown/C0/C0BA35.asm:152 LDX @LOCAL0C
    case 0xC0BB35: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // src/unknown/C0/C0BA35.asm:153 STA a:pathfinding::pathfinders + pathfinder::unknown_hitbox,X
    case 0xC0BB37: cpu.execute_instruction<0x9D>(0x0000A2, 3); return true;
    // src/unknown/C0/C0BA35.asm:154 LDX @LOCAL08
    case 0xC0BB3A: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:155 LDY #.LOWORD(ENTITY_ABS_X_TABLE)
    case 0xC0BB3C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00008E, 2); else cpu.execute_instruction<0xA0>(0x000B8E, 3); return true;
    // src/unknown/C0/C0BA35.asm:155 LDY #.LOWORD(ENTITY_ABS_X_TABLE)
    // Overlapping static entry reached from 0xC0BB3C.
    case 0xC0BB3E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:156 LDA (@LOCAL09),Y
    case 0xC0BB3F: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/unknown/C0/C0BA35.asm:157 SEC
    case 0xC0BB41: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:158 SBC f:UNKNOWN_C42A1F,X
    case 0xC0BB42: cpu.execute_instruction<0xFF>(0xC42A1F, 4); return true;
    // src/unknown/C0/C0BA35.asm:159 LSR
    case 0xC0BB46: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:160 LSR
    case 0xC0BB47: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:161 LSR
    case 0xC0BB48: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:162 SEC
    case 0xC0BB49: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:163 SBC @LOCAL13
    case 0xC0BB4A: cpu.execute_instruction<0xE5>(0x000038, 2); return true;
    // src/unknown/C0/C0BA35.asm:163 SBC @LOCAL13
    // Overlapping static entry reached from 0xC0BBC4.
    case 0xC0BB4B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:164 AND #$003F
    case 0xC0BB4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0BA35.asm:164 AND #$003F
    // Overlapping static entry reached from 0xC0BB4C.
    case 0xC0BB4E: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C0BA35.asm:165 LDX @LOCAL0C
    case 0xC0BB4F: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // src/unknown/C0/C0BA35.asm:166 STA a:pathfinding::pathfinders + pathfinder::origin + 2,X
    case 0xC0BB51: cpu.execute_instruction<0x9D>(0x0000A8, 3); return true;
    // src/unknown/C0/C0BA35.asm:167 LDY @LOCAL0D
    case 0xC0BB54: cpu.execute_instruction<0xA4>(0x00002C, 2); return true;
    // src/unknown/C0/C0BA35.asm:168 STY @VIRTUAL02
    case 0xC0BB56: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:169 LDX @LOCAL08
    case 0xC0BB58: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:170 LDY #.LOWORD(ENTITY_ABS_Y_TABLE)
    case 0xC0BB5A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000CA, 2); else cpu.execute_instruction<0xA0>(0x000BCA, 3); return true;
    // src/unknown/C0/C0BA35.asm:170 LDY #.LOWORD(ENTITY_ABS_Y_TABLE)
    // Overlapping static entry reached from 0xC0BB5A.
    case 0xC0BB5C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:171 LDA (@LOCAL09),Y
    case 0xC0BB5D: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/unknown/C0/C0BA35.asm:172 SEC
    case 0xC0BB5F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:173 SBC f:UNKNOWN_C42A41,X
    case 0xC0BB60: cpu.execute_instruction<0xFF>(0xC42A41, 4); return true;
    // src/unknown/C0/C0BA35.asm:174 LDX @LOCAL08
    case 0xC0BB64: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:175 CLC
    case 0xC0BB66: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:176 ADC f:UNKNOWN_C42AEB,X
    case 0xC0BB67: cpu.execute_instruction<0x7F>(0xC42AEB, 4); return true;
    // src/unknown/C0/C0BA35.asm:177 LSR
    case 0xC0BB6B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:178 LSR
    case 0xC0BB6C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:179 LSR
    case 0xC0BB6D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:180 SEC
    case 0xC0BB6E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:181 SBC @VIRTUAL02
    case 0xC0BB6F: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:182 AND #$003F
    case 0xC0BB71: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0BA35.asm:182 AND #$003F
    // Overlapping static entry reached from 0xC0BB71.
    case 0xC0BB73: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C0BA35.asm:183 LDX @LOCAL0C
    case 0xC0BB74: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // src/unknown/C0/C0BA35.asm:184 STA a:pathfinding::pathfinders + pathfinder::origin,X
    case 0xC0BB76: cpu.execute_instruction<0x9D>(0x0000A6, 3); return true;
    // src/unknown/C0/C0BA35.asm:185 LDA @LOCAL0A
    case 0xC0BB79: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C0/C0BA35.asm:186 STA @VIRTUAL02
    case 0xC0BB7B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:187 INC @VIRTUAL02
    case 0xC0BB7D: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:188 LDA @VIRTUAL02
    case 0xC0BB7F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:189 STA @LOCAL0A
    case 0xC0BB81: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C0/C0BA35.asm:191 LDA @LOCAL0B
    case 0xC0BB83: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:192 INC
    case 0xC0BB85: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:193 STA @LOCAL0B
    case 0xC0BB86: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:195 CMP #MAX_ENTITIES
    case 0xC0BB88: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C0/C0BA35.asm:195 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC0BB88.
    case 0xC0BB8A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0BA35.asm:196 BNEL @UNKNOWN6
    case 0xC0BB8B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0BA35.asm:196 BNEL @UNKNOWN6
    case 0xC0BB8D: cpu.execute_instruction<0x4C>(0x00BADB, 3); return true;
    // src/unknown/C0/C0BA35.asm:197 LDA @VIRTUAL02
    case 0xC0BB90: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:198 LDX @VIRTUAL04
    case 0xC0BB92: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0BA35.asm:199 STA a:pathfinding::pathfinder_count,X
    case 0xC0BB94: cpu.execute_instruction<0x9D>(0x00009E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BA35.asm:200 LOADPTR BUFFER + $3000, @LOCAL00
    case 0xC0BB97: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x003000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BA35.asm:200 LOADPTR BUFFER + $3000, @LOCAL00
    // Overlapping static entry reached from 0xC0BB97.
    case 0xC0BB99: cpu.execute_instruction<0x30>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0BA35.asm:200 LOADPTR BUFFER + $3000, @LOCAL00
    case 0xC0BB9A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0BA35.asm:200 LOADPTR BUFFER + $3000, @LOCAL00
    // Overlapping static entry reached from 0xC0BB99.
    case 0xC0BB9B: cpu.execute_instruction<0x0E>(0x007FA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BA35.asm:200 LOADPTR BUFFER + $3000, @LOCAL00
    case 0xC0BB9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BA35.asm:200 LOADPTR BUFFER + $3000, @LOCAL00
    // Overlapping static entry reached from 0xC0BB9C.
    case 0xC0BB9E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0BA35.asm:200 LOADPTR BUFFER + $3000, @LOCAL00
    case 0xC0BB9F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0BA35.asm:201 LDA #4
    case 0xC0BBA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C0/C0BA35.asm:201 LDA #4
    // Overlapping static entry reached from 0xC0BBA1.
    case 0xC0BBA3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BA35.asm:202 STA @LOCAL01
    case 0xC0BBA4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0BA35.asm:203 LDA @LOCAL12
    case 0xC0BBA6: cpu.execute_instruction<0xA5>(0x000036, 2); return true;
    // src/unknown/C0/C0BA35.asm:204 STA @LOCAL02
    case 0xC0BBA8: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0BA35.asm:205 LDA @VIRTUAL04
    case 0xC0BBAA: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0BA35.asm:206 CLC
    case 0xC0BBAC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:207 ADC #pathfinding::targets
    case 0xC0BBAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007C, 2); else cpu.execute_instruction<0x69>(0x00007C, 3); return true;
    // src/unknown/C0/C0BA35.asm:207 ADC #pathfinding::targets
    // Overlapping static entry reached from 0xC0BBAD.
    case 0xC0BBAF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BA35.asm:208 STA @LOCAL03
    case 0xC0BBB0: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0BA35.asm:209 LDA @VIRTUAL02
    case 0xC0BBB2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:210 STA @LOCAL04
    case 0xC0BBB4: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0BA35.asm:211 LDA @VIRTUAL04
    case 0xC0BBB6: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0BA35.asm:212 CLC
    case 0xC0BBB8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:213 ADC #pathfinding::pathfinders
    case 0xC0BBB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A0, 2); else cpu.execute_instruction<0x69>(0x0000A0, 3); return true;
    // src/unknown/C0/C0BA35.asm:213 ADC #pathfinding::pathfinders
    // Overlapping static entry reached from 0xC0BBB9.
    case 0xC0BBBB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BA35.asm:214 STA @LOCAL05
    case 0xC0BBBC: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0BA35.asm:215 LDA #.LOWORD(-1)
    case 0xC0BBBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0BA35.asm:215 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0BBBE.
    case 0xC0BBC0: cpu.execute_instruction<0xFF>(0xA51C85, 4); return true;
    // src/unknown/C0/C0BA35.asm:216 STA @LOCAL06
    case 0xC0BBC1: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0BA35.asm:217 MOVE_INT @LOCAL0F, @LOCAL07
    case 0xC0BBC3: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0BA35.asm:217 MOVE_INT @LOCAL0F, @LOCAL07
    // Overlapping static entry reached from 0xC0BBC0.
    case 0xC0BBC4: cpu.execute_instruction<0x30>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0BA35.asm:217 MOVE_INT @LOCAL0F, @LOCAL07
    case 0xC0BBC5: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0BA35.asm:217 MOVE_INT @LOCAL0F, @LOCAL07
    // Overlapping static entry reached from 0xC0BBC4.
    case 0xC0BBC6: cpu.execute_instruction<0x1E>(0x0032A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0BA35.asm:217 MOVE_INT @LOCAL0F, @LOCAL07
    case 0xC0BBC7: cpu.execute_instruction<0xA5>(0x000032, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0BA35.asm:217 MOVE_INT @LOCAL0F, @LOCAL07
    case 0xC0BBC9: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C0BA35.asm:218 LDA @VIRTUAL04
    case 0xC0BBCB: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0BA35.asm:219 CLC
    case 0xC0BBCD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:220 ADC #pathfinding::radius
    case 0xC0BBCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000078, 2); else cpu.execute_instruction<0x69>(0x000078, 3); return true;
    // src/unknown/C0/C0BA35.asm:220 ADC #pathfinding::radius
    // Overlapping static entry reached from 0xC0BBCE.
    case 0xC0BBD0: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C0BA35.asm:221 TAY
    case 0xC0BBD1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:222 LDX #.LOWORD(PATHFINDING_BUFFER)
    case 0xC0BBD2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x00F400, 3); return true;
    // src/unknown/C0/C0BA35.asm:222 LDX #.LOWORD(PATHFINDING_BUFFER)
    // Overlapping static entry reached from 0xC0BBD2.
    case 0xC0BBD4: cpu.execute_instruction<0xF4>(0x0000A9, 3); return true;
    // src/unknown/C0/C0BA35.asm:223 LDA #$0C00
    case 0xC0BBD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000C00, 3); return true;
    // src/unknown/C0/C0BA35.asm:223 LDA #$0C00
    // Overlapping static entry reached from 0xC0BBD5.
    case 0xC0BBD7: cpu.execute_instruction<0x0C>(0x009F22, 3); return true;
    // src/unknown/C0/C0BA35.asm:224 JSL UNKNOWN_C4B59F
    case 0xC0BBD8: cpu.execute_instruction<0x22>(0xC4B59F, 4); return true;
    // src/unknown/C0/C0BA35.asm:224 JSL UNKNOWN_C4B59F
    // Overlapping static entry reached from 0xC0BBD7.
    case 0xC0BBDA: cpu.execute_instruction<0xB5>(0x0000C4, 2); return true;
    // src/unknown/C0/C0BA35.asm:225 TAX
    case 0xC0BBDC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:226 STX @LOCAL0B
    case 0xC0BBDD: cpu.execute_instruction<0x86>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:228 JSL UNKNOWN_C4B595
    case 0xC0BBDF: cpu.execute_instruction<0x22>(0xC4B595, 4); return true;
    // src/unknown/C0/C0BA35.asm:229 CMP #$0C00
    case 0xC0BBE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000C00, 3); return true;
    // src/unknown/C0/C0BA35.asm:229 CMP #$0C00
    // Overlapping static entry reached from 0xC0BBE3.
    case 0xC0BBE5: cpu.execute_instruction<0x0C>(0x0002F0, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C0/C0BA35.asm:230 BGT @UNKNOWN12
    case 0xC0BBE6: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C0BA35.asm:230 BGT @UNKNOWN12
    case 0xC0BBE8: cpu.execute_instruction<0xB0>(0x0000F5, 2); return true;
    // src/unknown/C0/C0BA35.asm:231 LDX @LOCAL0B
    case 0xC0BBEA: cpu.execute_instruction<0xA6>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:232 BNE @UNKNOWN17
    case 0xC0BBEC: cpu.execute_instruction<0xD0>(0x000026, 2); return true;
    // src/unknown/C0/C0BA35.asm:233 LDA #0
    case 0xC0BBEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0BA35.asm:233 LDA #0
    // Overlapping static entry reached from 0xC0BBEE.
    case 0xC0BBF0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BA35.asm:234 STA @LOCAL0B
    case 0xC0BBF1: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:235 BRA @UNKNOWN16
    case 0xC0BBF3: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C0/C0BA35.asm:237 ASL
    case 0xC0BBF5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:238 TAX
    case 0xC0BBF6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:239 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC0BBF7: cpu.execute_instruction<0xBD>(0x000A62, 3); return true;
    // src/unknown/C0/C0BA35.asm:240 CMP #.LOWORD(-1)
    case 0xC0BBFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0BA35.asm:240 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0BBFA.
    case 0xC0BBFC: cpu.execute_instruction<0xFF>(0xA906F0, 4); return true;
    // src/unknown/C0/C0BA35.asm:241 BEQ @UNKNOWN15
    case 0xC0BBFD: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0BA35.asm:242 LDA #1
    case 0xC0BBFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0BA35.asm:242 LDA #1
    // Overlapping static entry reached from 0xC0BBFC.
    case 0xC0BC00: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C0BA35.asm:242 LDA #1
    // Overlapping static entry reached from 0xC0BBFF.
    case 0xC0BC01: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0BA35.asm:243 STA ENTITY_PATHFINDING_STATES,X
    case 0xC0BC02: cpu.execute_instruction<0x9D>(0x002C5E, 3); return true;
    // src/unknown/C0/C0BA35.asm:245 LDA @LOCAL0B
    case 0xC0BC05: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:246 INC
    case 0xC0BC07: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:247 STA @LOCAL0B
    case 0xC0BC08: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:249 CMP #MAX_ENTITIES
    case 0xC0BC0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C0/C0BA35.asm:249 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC0BC0A.
    case 0xC0BC0C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0BA35.asm:250 BNE @UNKNOWN14
    case 0xC0BC0D: cpu.execute_instruction<0xD0>(0x0000E6, 2); return true;
    // src/unknown/C0/C0BA35.asm:251 LDA #.LOWORD(-1)
    case 0xC0BC0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0BA35.asm:251 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0BC0F.
    case 0xC0BC11: cpu.execute_instruction<0xFF>(0xA95E80, 4); return true;
    // src/unknown/C0/C0BA35.asm:252 BRA @UNKNOWN22
    case 0xC0BC12: cpu.execute_instruction<0x80>(0x00005E, 2); return true;
    // src/unknown/C0/C0BA35.asm:254 LDA #0
    case 0xC0BC14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0BA35.asm:254 LDA #0
    // Overlapping static entry reached from 0xC0BC11.
    case 0xC0BC15: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0BA35.asm:254 LDA #0
    // Overlapping static entry reached from 0xC0BC14.
    case 0xC0BC16: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BA35.asm:255 STA @LOCAL0B
    case 0xC0BC17: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:256 BRA @UNKNOWN21
    case 0xC0BC19: cpu.execute_instruction<0x80>(0x00004C, 2); return true;
    // include/macros.asm:601 STA scratch
    // Macro caller: src/unknown/C0/C0BA35.asm:258 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0BC1B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:602 ASL
    // Macro caller: src/unknown/C0/C0BA35.asm:258 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0BC1D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:603 ASL
    // Macro caller: src/unknown/C0/C0BA35.asm:258 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0BC1E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:604 ASL
    // Macro caller: src/unknown/C0/C0BA35.asm:258 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0BC1F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:605 ADC scratch
    // Macro caller: src/unknown/C0/C0BA35.asm:258 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0BC20: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:606 ASL
    // Macro caller: src/unknown/C0/C0BA35.asm:258 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0BC22: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:259 STA @VIRTUAL02
    case 0xC0BC23: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:260 LDA @LOCAL11
    case 0xC0BC25: cpu.execute_instruction<0xA5>(0x000034, 2); return true;
    // src/unknown/C0/C0BA35.asm:261 STA @VIRTUAL04
    case 0xC0BC27: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0BA35.asm:262 CLC
    case 0xC0BC29: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:263 ADC @VIRTUAL02
    case 0xC0BC2A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:264 TAX
    case 0xC0BC2C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:265 LDA a:pathfinding::pathfinders + pathfinder::object_index,X
    case 0xC0BC2D: cpu.execute_instruction<0xBD>(0x0000B0, 3); return true;
    // src/unknown/C0/C0BA35.asm:266 STA @LOCAL08
    case 0xC0BC30: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:267 TXA
    case 0xC0BC32: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:268 CLC
    case 0xC0BC33: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:269 ADC #pathfinding::pathfinders + pathfinder::unknown10;
    case 0xC0BC34: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AA, 2); else cpu.execute_instruction<0x69>(0x0000AA, 3); return true;
    // src/unknown/C0/C0BA35.asm:269 ADC #pathfinding::pathfinders + pathfinder::unknown10;
    // Overlapping static entry reached from 0xC0BC34.
    case 0xC0BC36: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C0BA35.asm:270 TAY
    case 0xC0BC37: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:271 STY @LOCAL0F
    case 0xC0BC38: cpu.execute_instruction<0x84>(0x000030, 2); return true;
    // src/unknown/C0/C0BA35.asm:272 LDA __BSS_START__,Y
    case 0xC0BC3A: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0BA35.asm:273 BEQ @UNKNOWN19
    case 0xC0BC3D: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/unknown/C0/C0BA35.asm:274 LDA @LOCAL08
    case 0xC0BC3F: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:275 ASL
    case 0xC0BC41: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:276 STA @LOCAL08
    case 0xC0BC42: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:277 LDA a:pathfinding::pathfinders + pathfinder::unknown12,X
    case 0xC0BC44: cpu.execute_instruction<0xBD>(0x0000AC, 3); return true;
    // src/unknown/C0/C0BA35.asm:278 LDY #.LOWORD(ENTITY_PATH_POINTS)
    case 0xC0BC47: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x002E02, 3); return true;
    // src/unknown/C0/C0BA35.asm:278 LDY #.LOWORD(ENTITY_PATH_POINTS)
    // Overlapping static entry reached from 0xC0BC47.
    case 0xC0BC49: cpu.execute_instruction<0x2E>(0x002291, 3); return true;
    // src/unknown/C0/C0BA35.asm:279 STA (@LOCAL08),Y
    case 0xC0BC4A: cpu.execute_instruction<0x91>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:280 LDY @LOCAL0F
    case 0xC0BC4C: cpu.execute_instruction<0xA4>(0x000030, 2); return true;
    // src/unknown/C0/C0BA35.asm:281 LDA __BSS_START__,Y
    case 0xC0BC4E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0BA35.asm:282 LDY #.LOWORD(ENTITY_PATH_POINT_COUNTS)
    case 0xC0BC51: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003E, 2); else cpu.execute_instruction<0xA0>(0x002E3E, 3); return true;
    // src/unknown/C0/C0BA35.asm:282 LDY #.LOWORD(ENTITY_PATH_POINT_COUNTS)
    // Overlapping static entry reached from 0xC0BC51.
    case 0xC0BC53: cpu.execute_instruction<0x2E>(0x002291, 3); return true;
    // src/unknown/C0/C0BA35.asm:283 STA (@LOCAL08),Y
    case 0xC0BC54: cpu.execute_instruction<0x91>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:284 BRA @UNKNOWN20
    case 0xC0BC56: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C0/C0BA35.asm:286 LDA @LOCAL08
    case 0xC0BC58: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C0/C0BA35.asm:287 ASL
    case 0xC0BC5A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:288 TAX
    case 0xC0BC5B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:289 LDA #1
    case 0xC0BC5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0BA35.asm:289 LDA #1
    // Overlapping static entry reached from 0xC0BC5C.
    case 0xC0BC5E: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0BA35.asm:290 STA ENTITY_PATHFINDING_STATES,X
    case 0xC0BC5F: cpu.execute_instruction<0x9D>(0x002C5E, 3); return true;
    // src/unknown/C0/C0BA35.asm:292 LDA @LOCAL0B
    case 0xC0BC62: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:293 INC
    case 0xC0BC64: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0BA35.asm:294 STA @LOCAL0B
    case 0xC0BC65: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0BA35.asm:296 LDX @LOCAL0A
    case 0xC0BC67: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/unknown/C0/C0BA35.asm:297 STX @VIRTUAL02
    case 0xC0BC69: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:298 CMP @VIRTUAL02
    case 0xC0BC6B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C0BA35.asm:299 BCC @UNKNOWN18
    case 0xC0BC6D: cpu.execute_instruction<0x90>(0x0000AC, 2); return true;
    // src/unknown/C0/C0BA35.asm:300 LDA #0
    case 0xC0BC6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0BA35.asm:300 LDA #0
    // Overlapping static entry reached from 0xC0BC6F.
    case 0xC0BC71: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0BA35.asm:302 END_C_FUNCTION
    case 0xC0BC72: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0BA35.asm:302 END_C_FUNCTION
    case 0xC0BC73: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0BD96.asm (unresolved).
bool execute_unresolved_c0_c0bd96_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0BD96.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0BD96: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0BD96.asm:19 END_STACK_VARS
    case 0xC0BD98: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0BD96.asm:19 END_STACK_VARS
    case 0xC0BD99: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0BD96.asm:19 END_STACK_VARS
    case 0xC0BD9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x00FFD4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0BD96.asm:19 END_STACK_VARS
    // Overlapping static entry reached from 0xC0BD9A.
    case 0xC0BD9C: cpu.execute_instruction<0xFF>(0x89AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0BD96.asm:19 END_STACK_VARS
    case 0xC0BD9D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:20 LDA GAME_STATE+game_state::current_party_members
    case 0xC0BD9E: cpu.execute_instruction<0xAD>(0x009889, 3); return true;
    // src/unknown/C0/C0BD96.asm:20 LDA GAME_STATE+game_state::current_party_members
    // Overlapping static entry reached from 0xC0BD9C.
    case 0xC0BDA0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:21 STA @LOCAL0C
    case 0xC0BDA1: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/unknown/C0/C0BD96.asm:22 LDA #.LOWORD(PATHFINDING_STATE)
    case 0xC0BDA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00F200, 3); return true;
    // src/unknown/C0/C0BD96.asm:22 LDA #.LOWORD(PATHFINDING_STATE)
    // Overlapping static entry reached from 0xC0BDA3.
    case 0xC0BDA5: cpu.execute_instruction<0xF2>(0x000085, 2); return true;
    // src/unknown/C0/C0BD96.asm:23 STA @LOCAL0B
    case 0xC0BDA6: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0BD96.asm:23 STA @LOCAL0B
    // Overlapping static entry reached from 0xC0BDA5.
    case 0xC0BDA7: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:24 LDA #56
    case 0xC0BDA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000038, 2); else cpu.execute_instruction<0xA9>(0x000038, 3); return true;
    // src/unknown/C0/C0BD96.asm:24 LDA #56
    // Overlapping static entry reached from 0xC0BDA8.
    case 0xC0BDAA: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0BD96.asm:25 STA PATHFINDING_STATE + pathfinding::radius
    case 0xC0BDAB: cpu.execute_instruction<0x8D>(0x00F278, 3); return true;
    // src/unknown/C0/C0BD96.asm:26 STA PATHFINDING_STATE + pathfinding::radius + 2
    case 0xC0BDAE: cpu.execute_instruction<0x8D>(0x00F27A, 3); return true;
    // src/unknown/C0/C0BD96.asm:27 LDA PATHFINDING_STATE + pathfinding::radius
    case 0xC0BDB1: cpu.execute_instruction<0xAD>(0x00F278, 3); return true;
    // src/unknown/C0/C0BD96.asm:28 LSR
    case 0xC0BDB4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:29 STA @VIRTUAL04
    case 0xC0BDB5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0BD96.asm:30 STA PATHFINDING_TARGET_WIDTH
    case 0xC0BDB7: cpu.execute_instruction<0x8D>(0x004A92, 3); return true;
    // src/unknown/C0/C0BD96.asm:31 LDA PATHFINDING_STATE + pathfinding::radius + 2
    case 0xC0BDBA: cpu.execute_instruction<0xAD>(0x00F27A, 3); return true;
    // src/unknown/C0/C0BD96.asm:32 LSR
    case 0xC0BDBD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:33 STA @VIRTUAL02
    case 0xC0BDBE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:34 STA @LOCAL0A
    case 0xC0BDC0: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C0/C0BD96.asm:35 LDA @VIRTUAL02
    case 0xC0BDC2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:36 STA PATHFINDING_TARGET_HEIGHT
    case 0xC0BDC4: cpu.execute_instruction<0x8D>(0x004A94, 3); return true;
    // src/unknown/C0/C0BD96.asm:37 LDA @LOCAL0C
    case 0xC0BDC7: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/unknown/C0/C0BD96.asm:38 ASL
    case 0xC0BDC9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:39 STA @LOCAL0C
    case 0xC0BDCA: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/unknown/C0/C0BD96.asm:40 CLC
    case 0xC0BDCC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:41 ADC #.LOWORD(ENTITY_ABS_X_TABLE)
    case 0xC0BDCD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008E, 2); else cpu.execute_instruction<0x69>(0x000B8E, 3); return true;
    // src/unknown/C0/C0BD96.asm:41 ADC #.LOWORD(ENTITY_ABS_X_TABLE)
    // Overlapping static entry reached from 0xC0BDCD.
    case 0xC0BDCF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:42 TAY
    case 0xC0BDD0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:43 STY @LOCAL09
    case 0xC0BDD1: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BD96.asm:44 LOADPTR UNKNOWN_C42A1F, @LOCAL08
    case 0xC0BDD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x002A1F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BD96.asm:44 LOADPTR UNKNOWN_C42A1F, @LOCAL08
    // Overlapping static entry reached from 0xC0BDD3.
    case 0xC0BDD5: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0BD96.asm:44 LOADPTR UNKNOWN_C42A1F, @LOCAL08
    case 0xC0BDD6: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BD96.asm:44 LOADPTR UNKNOWN_C42A1F, @LOCAL08
    case 0xC0BDD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BD96.asm:44 LOADPTR UNKNOWN_C42A1F, @LOCAL08
    // Overlapping static entry reached from 0xC0BDD8.
    case 0xC0BDDA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0BD96.asm:44 LOADPTR UNKNOWN_C42A1F, @LOCAL08
    case 0xC0BDDB: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C0/C0BD96.asm:45 LDA @LOCAL0C
    case 0xC0BDDD: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/unknown/C0/C0BD96.asm:46 CLC
    case 0xC0BDDF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:47 ADC #.LOWORD(ENTITY_SIZES)
    case 0xC0BDE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006E, 2); else cpu.execute_instruction<0x69>(0x002B6E, 3); return true;
    // src/unknown/C0/C0BD96.asm:47 ADC #.LOWORD(ENTITY_SIZES)
    // Overlapping static entry reached from 0xC0BDE0.
    case 0xC0BDE2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:48 STA @LOCAL07
    case 0xC0BDE3: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C0/C0BD96.asm:49 LDA (@LOCAL07)
    case 0xC0BDE5: cpu.execute_instruction<0xB2>(0x00001E, 2); return true;
    // src/unknown/C0/C0BD96.asm:50 ASL
    case 0xC0BDE7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:51 PHA
    case 0xC0BDE8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:52 LDA __BSS_START__,Y
    case 0xC0BDE9: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0BD96.asm:53 PLY
    case 0xC0BDEC: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:54 SEC
    case 0xC0BDED: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:55 SBC [@LOCAL08],Y
    case 0xC0BDEE: cpu.execute_instruction<0xF7>(0x000020, 2); return true;
    // src/unknown/C0/C0BD96.asm:56 LSR
    case 0xC0BDF0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:57 LSR
    case 0xC0BDF1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:58 LSR
    case 0xC0BDF2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:59 STA PATHFINDING_TARGET_CENTRE_X
    case 0xC0BDF3: cpu.execute_instruction<0x8D>(0x004A8E, 3); return true;
    // src/unknown/C0/C0BD96.asm:60 LDA @LOCAL0C
    case 0xC0BDF6: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/unknown/C0/C0BD96.asm:61 CLC
    case 0xC0BDF8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:62 ADC #.LOWORD(ENTITY_ABS_Y_TABLE)
    case 0xC0BDF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CA, 2); else cpu.execute_instruction<0x69>(0x000BCA, 3); return true;
    // src/unknown/C0/C0BD96.asm:62 ADC #.LOWORD(ENTITY_ABS_Y_TABLE)
    // Overlapping static entry reached from 0xC0BDF9.
    case 0xC0BDFB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:63 TAX
    case 0xC0BDFC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BD96.asm:64 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    case 0xC0BDFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000041, 2); else cpu.execute_instruction<0xA9>(0x002A41, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BD96.asm:64 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0BDFD.
    case 0xC0BDFF: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0BD96.asm:64 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    case 0xC0BE00: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BD96.asm:64 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    case 0xC0BE02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BD96.asm:64 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0BE02.
    case 0xC0BE04: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0BD96.asm:64 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    case 0xC0BE05: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0BD96.asm:65 LDA (@LOCAL07)
    case 0xC0BE07: cpu.execute_instruction<0xB2>(0x00001E, 2); return true;
    // src/unknown/C0/C0BD96.asm:66 ASL
    case 0xC0BE09: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:67 STA @LOCAL06
    case 0xC0BE0A: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BD96.asm:68 LOADPTR UNKNOWN_C42AEB, @VIRTUAL06
    case 0xC0BE0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EB, 2); else cpu.execute_instruction<0xA9>(0x002AEB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BD96.asm:68 LOADPTR UNKNOWN_C42AEB, @VIRTUAL06
    // Overlapping static entry reached from 0xC0BE0C.
    case 0xC0BE0E: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0BD96.asm:68 LOADPTR UNKNOWN_C42AEB, @VIRTUAL06
    case 0xC0BE0F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BD96.asm:68 LOADPTR UNKNOWN_C42AEB, @VIRTUAL06
    case 0xC0BE11: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BD96.asm:68 LOADPTR UNKNOWN_C42AEB, @VIRTUAL06
    // Overlapping static entry reached from 0xC0BE11.
    case 0xC0BE13: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0BD96.asm:68 LOADPTR UNKNOWN_C42AEB, @VIRTUAL06
    case 0xC0BE14: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0BD96.asm:69 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0BE16: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0BD96.asm:69 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0BE18: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0BD96.asm:69 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0BE1A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0BD96.asm:69 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0BE1C: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0BD96.asm:70 LDA @LOCAL06
    case 0xC0BE1E: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0BD96.asm:71 CLC
    case 0xC0BE20: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:72 ADC @VIRTUAL06
    case 0xC0BE21: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:73 STA @VIRTUAL06
    case 0xC0BE23: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:74 LDA [@VIRTUAL06]
    case 0xC0BE25: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:75 PHA
    case 0xC0BE27: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:76 LDA @LOCAL06
    case 0xC0BE28: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C0/C0BD96.asm:77 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0BE2A: cpu.execute_instruction<0xA4>(0x00000A, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C0/C0BD96.asm:77 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0BE2C: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C0/C0BD96.asm:77 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0BE2E: cpu.execute_instruction<0xA4>(0x00000C, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C0/C0BD96.asm:77 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0BE30: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C0BD96.asm:78 CLC
    case 0xC0BE32: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:79 ADC @VIRTUAL06
    case 0xC0BE33: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:80 STA @VIRTUAL06
    case 0xC0BE35: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:81 LDA [@VIRTUAL06]
    case 0xC0BE37: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:82 STA @VIRTUAL02
    case 0xC0BE39: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:83 LDA __BSS_START__,X
    case 0xC0BE3B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0BD96.asm:84 SEC
    case 0xC0BE3E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:85 SBC @VIRTUAL02
    case 0xC0BE3F: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:86 PLY
    case 0xC0BE41: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:87 STY @VIRTUAL02
    case 0xC0BE42: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:88 CLC
    case 0xC0BE44: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:89 ADC @VIRTUAL02
    case 0xC0BE45: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:90 LSR
    case 0xC0BE47: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:91 LSR
    case 0xC0BE48: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:92 LSR
    case 0xC0BE49: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:93 STA PATHFINDING_TARGET_CENTRE_Y
    case 0xC0BE4A: cpu.execute_instruction<0x8D>(0x004A90, 3); return true;
    // src/unknown/C0/C0BD96.asm:94 LDA (@LOCAL07)
    case 0xC0BE4D: cpu.execute_instruction<0xB2>(0x00001E, 2); return true;
    // src/unknown/C0/C0BD96.asm:95 ASL
    case 0xC0BE4F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:96 STA @LOCAL06
    case 0xC0BE50: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C0BD96.asm:97 PHA
    case 0xC0BE52: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:98 LDY @LOCAL09
    case 0xC0BE53: cpu.execute_instruction<0xA4>(0x000024, 2); return true;
    // src/unknown/C0/C0BD96.asm:99 LDA __BSS_START__,Y
    case 0xC0BE55: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0BD96.asm:100 PLY
    case 0xC0BE58: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:101 SEC
    case 0xC0BE59: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:102 SBC [@LOCAL08],Y
    case 0xC0BE5A: cpu.execute_instruction<0xF7>(0x000020, 2); return true;
    // src/unknown/C0/C0BD96.asm:103 LSR
    case 0xC0BE5C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:104 LSR
    case 0xC0BE5D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:105 LSR
    case 0xC0BE5E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:106 SEC
    case 0xC0BE5F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:107 SBC @VIRTUAL04
    case 0xC0BE60: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C0/C0BD96.asm:108 STA @VIRTUAL04
    case 0xC0BE62: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0BD96.asm:109 LDA @LOCAL06
    case 0xC0BE64: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C0/C0BD96.asm:110 MOVE_INTY @LOCAL05, @VIRTUAL06
    case 0xC0BE66: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C0/C0BD96.asm:110 MOVE_INTY @LOCAL05, @VIRTUAL06
    case 0xC0BE68: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C0/C0BD96.asm:110 MOVE_INTY @LOCAL05, @VIRTUAL06
    case 0xC0BE6A: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C0/C0BD96.asm:110 MOVE_INTY @LOCAL05, @VIRTUAL06
    case 0xC0BE6C: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C0BD96.asm:111 CLC
    case 0xC0BE6E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:112 ADC @VIRTUAL06
    case 0xC0BE6F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:113 STA @VIRTUAL06
    case 0xC0BE71: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:114 LDA [@VIRTUAL06]
    case 0xC0BE73: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:115 PHA
    case 0xC0BE75: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:116 LDA @LOCAL06
    case 0xC0BE76: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C0/C0BD96.asm:117 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0BE78: cpu.execute_instruction<0xA4>(0x00000A, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C0/C0BD96.asm:117 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0BE7A: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C0/C0BD96.asm:117 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0BE7C: cpu.execute_instruction<0xA4>(0x00000C, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C0/C0BD96.asm:117 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0BE7E: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C0BD96.asm:118 CLC
    case 0xC0BE80: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:119 ADC @VIRTUAL06
    case 0xC0BE81: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:120 STA @VIRTUAL06
    case 0xC0BE83: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:121 LDA [@VIRTUAL06]
    case 0xC0BE85: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:122 STA @VIRTUAL02
    case 0xC0BE87: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:123 LDA __BSS_START__,X
    case 0xC0BE89: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0BD96.asm:124 SEC
    case 0xC0BE8C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:125 SBC @VIRTUAL02
    case 0xC0BE8D: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:126 PLY
    case 0xC0BE8F: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:127 STY @VIRTUAL02
    case 0xC0BE90: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:128 CLC
    case 0xC0BE92: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:129 ADC @VIRTUAL02
    case 0xC0BE93: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:130 LSR
    case 0xC0BE95: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:131 LSR
    case 0xC0BE96: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:132 LSR
    case 0xC0BE97: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:133 LDX @LOCAL0A
    case 0xC0BE98: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/unknown/C0/C0BD96.asm:134 STX @VIRTUAL02
    case 0xC0BE9A: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:135 SEC
    case 0xC0BE9C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:136 SBC @VIRTUAL02
    case 0xC0BE9D: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:137 STA @VIRTUAL02
    case 0xC0BE9F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:138 STA @LOCAL00
    case 0xC0BEA1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0BD96.asm:139 LDY @VIRTUAL04
    case 0xC0BEA3: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C0/C0BD96.asm:140 LDX #1
    case 0xC0BEA5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C0BD96.asm:140 LDX #1
    // Overlapping static entry reached from 0xC0BEA5.
    case 0xC0BEA7: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C0BD96.asm:141 LDA @LOCAL0B
    case 0xC0BEA8: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0BD96.asm:142 JSR UNKNOWN_C0B9BC
    case 0xC0BEAA: cpu.execute_instruction<0x20>(0x00B9BC, 3); return true;
    // src/unknown/C0/C0BD96.asm:143 LDA @VIRTUAL02
    case 0xC0BEAD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:144 STA @LOCAL00
    case 0xC0BEAF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0BD96.asm:145 LDA #1
    case 0xC0BEB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0BD96.asm:145 LDA #1
    // Overlapping static entry reached from 0xC0BEB1.
    case 0xC0BEB3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BD96.asm:146 STA @LOCAL01
    case 0xC0BEB4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0BD96.asm:147 LDA #252
    case 0xC0BEB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x0000FC, 3); return true;
    // src/unknown/C0/C0BD96.asm:147 LDA #252
    // Overlapping static entry reached from 0xC0BEB6.
    case 0xC0BEB8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BD96.asm:148 STA @LOCAL02
    case 0xC0BEB9: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0BD96.asm:149 LDA #50
    case 0xC0BEBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000032, 2); else cpu.execute_instruction<0xA9>(0x000032, 3); return true;
    // src/unknown/C0/C0BD96.asm:149 LDA #50
    // Overlapping static entry reached from 0xC0BEBB.
    case 0xC0BEBD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BD96.asm:150 STA @LOCAL03
    case 0xC0BEBE: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0BD96.asm:151 LDY @VIRTUAL04
    case 0xC0BEC0: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C0/C0BD96.asm:152 LDX #1
    case 0xC0BEC2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C0BD96.asm:152 LDX #1
    // Overlapping static entry reached from 0xC0BEC2.
    case 0xC0BEC4: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C0BD96.asm:153 LDA @LOCAL0B
    case 0xC0BEC5: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0BD96.asm:154 JSR UNKNOWN_C0BA35
    case 0xC0BEC7: cpu.execute_instruction<0x20>(0x00BA35, 3); return true;
    // src/unknown/C0/C0BD96.asm:155 STA @LOCAL0C
    case 0xC0BECA: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/unknown/C0/C0BD96.asm:156 CMP #0
    case 0xC0BECC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0BD96.asm:156 CMP #0
    // Overlapping static entry reached from 0xC0BECC.
    case 0xC0BECE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0BD96.asm:157 BNEL @UNKNOWN1
    case 0xC0BECF: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0BD96.asm:157 BNEL @UNKNOWN1
    case 0xC0BED1: cpu.execute_instruction<0x4C>(0x00BF70, 3); return true;
    // src/unknown/C0/C0BD96.asm:158 LDX PATHFINDING_STATE + pathfinding::pathfinders + pathfinder::object_index
    case 0xC0BED4: cpu.execute_instruction<0xAE>(0x00F2B0, 3); return true;
    // src/unknown/C0/C0BD96.asm:159 TXA
    case 0xC0BED7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:160 ASL
    case 0xC0BED8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:161 STA @VIRTUAL02
    case 0xC0BED9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:162 STA @LOCAL04
    case 0xC0BEDB: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0BD96.asm:163 LDX @VIRTUAL02
    case 0xC0BEDD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:164 LDY ENTITY_SIZES,X
    case 0xC0BEDF: cpu.execute_instruction<0xBC>(0x002B6E, 3); return true;
    // src/unknown/C0/C0BD96.asm:165 TYA
    case 0xC0BEE2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:166 ASL
    case 0xC0BEE3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:167 TAX
    case 0xC0BEE4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:168 STX @LOCAL0B
    case 0xC0BEE5: cpu.execute_instruction<0x86>(0x000028, 2); return true;
    // src/unknown/C0/C0BD96.asm:169 TXY
    case 0xC0BEE7: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:170 LDA PATHFINDING_STATE + pathfinding::pathfinders + pathfinder::origin + 2
    case 0xC0BEE8: cpu.execute_instruction<0xAD>(0x00F2A8, 3); return true;
    // src/unknown/C0/C0BD96.asm:171 ASL
    case 0xC0BEEB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:172 ASL
    case 0xC0BEEC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:173 ASL
    case 0xC0BEED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:174 CLC
    case 0xC0BEEE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:175 ADC [@LOCAL08],Y
    case 0xC0BEEF: cpu.execute_instruction<0x77>(0x000020, 2); return true;
    // src/unknown/C0/C0BD96.asm:176 STA @VIRTUAL04
    case 0xC0BEF1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0BD96.asm:177 LDA PATHFINDING_TARGET_CENTRE_X
    case 0xC0BEF3: cpu.execute_instruction<0xAD>(0x004A8E, 3); return true;
    // src/unknown/C0/C0BD96.asm:178 SEC
    case 0xC0BEF6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:179 SBC PATHFINDING_TARGET_WIDTH
    case 0xC0BEF7: cpu.execute_instruction<0xED>(0x004A92, 3); return true;
    // src/unknown/C0/C0BD96.asm:180 ASL
    case 0xC0BEFA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:181 ASL
    case 0xC0BEFB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:182 ASL
    case 0xC0BEFC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:183 CLC
    case 0xC0BEFD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:184 ADC @VIRTUAL04
    case 0xC0BEFE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C0BD96.asm:185 LDX @VIRTUAL02
    case 0xC0BF00: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:186 STA ENTITY_ABS_X_TABLE,X
    case 0xC0BF02: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/unknown/C0/C0BD96.asm:187 LDX @LOCAL0B
    case 0xC0BF05: cpu.execute_instruction<0xA6>(0x000028, 2); return true;
    // src/unknown/C0/C0BD96.asm:188 TXA
    case 0xC0BF07: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C0/C0BD96.asm:189 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0BF08: cpu.execute_instruction<0xA4>(0x00000A, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C0/C0BD96.asm:189 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0BF0A: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C0/C0BD96.asm:189 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0BF0C: cpu.execute_instruction<0xA4>(0x00000C, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C0/C0BD96.asm:189 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0BF0E: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C0BD96.asm:190 CLC
    case 0xC0BF10: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:191 ADC @VIRTUAL06
    case 0xC0BF11: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:192 STA @VIRTUAL06
    case 0xC0BF13: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:193 LDA [@VIRTUAL06]
    case 0xC0BF15: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:194 PHA
    case 0xC0BF17: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:195 TXA
    case 0xC0BF18: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C0BD96.asm:196 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC0BF19: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C0BD96.asm:196 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC0BF1B: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C0BD96.asm:196 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC0BF1D: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C0BD96.asm:196 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC0BF1F: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C0/C0BD96.asm:197 CLC
    case 0xC0BF21: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:198 ADC @VIRTUAL06
    case 0xC0BF22: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:199 STA @VIRTUAL06
    case 0xC0BF24: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:200 LDA [@VIRTUAL06]
    case 0xC0BF26: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0BD96.asm:201 STA @VIRTUAL02
    case 0xC0BF28: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:202 LDA PATHFINDING_STATE + pathfinding::pathfinders + pathfinder::origin
    case 0xC0BF2A: cpu.execute_instruction<0xAD>(0x00F2A6, 3); return true;
    // src/unknown/C0/C0BD96.asm:203 ASL
    case 0xC0BF2D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:204 ASL
    case 0xC0BF2E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:205 ASL
    case 0xC0BF2F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:206 SEC
    case 0xC0BF30: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:207 SBC @VIRTUAL02
    case 0xC0BF31: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:208 PLY
    case 0xC0BF33: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:209 STY @VIRTUAL02
    case 0xC0BF34: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:210 CLC
    case 0xC0BF36: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:211 ADC @VIRTUAL02
    case 0xC0BF37: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:212 STA @VIRTUAL04
    case 0xC0BF39: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0BD96.asm:213 LDA PATHFINDING_TARGET_CENTRE_Y
    case 0xC0BF3B: cpu.execute_instruction<0xAD>(0x004A90, 3); return true;
    // src/unknown/C0/C0BD96.asm:214 SEC
    case 0xC0BF3E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:215 SBC PATHFINDING_TARGET_HEIGHT
    case 0xC0BF3F: cpu.execute_instruction<0xED>(0x004A94, 3); return true;
    // src/unknown/C0/C0BD96.asm:216 ASL
    case 0xC0BF42: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:217 ASL
    case 0xC0BF43: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:218 ASL
    case 0xC0BF44: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:219 CLC
    case 0xC0BF45: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:220 ADC @VIRTUAL04
    case 0xC0BF46: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C0BD96.asm:221 LDX @LOCAL04
    case 0xC0BF48: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C0/C0BD96.asm:222 STX @VIRTUAL02
    case 0xC0BF4A: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:223 STA ENTITY_ABS_Y_TABLE,X
    case 0xC0BF4C: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/unknown/C0/C0BD96.asm:224 LDA @VIRTUAL02
    case 0xC0BF4F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:225 CLC
    case 0xC0BF51: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:226 ADC #.LOWORD(ENTITY_PATH_POINTS)
    case 0xC0BF52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x002E02, 3); return true;
    // src/unknown/C0/C0BD96.asm:226 ADC #.LOWORD(ENTITY_PATH_POINTS)
    // Overlapping static entry reached from 0xC0BF52.
    case 0xC0BF54: cpu.execute_instruction<0x2E>(0x00BDAA, 3); return true;
    // src/unknown/C0/C0BD96.asm:227 TAX
    case 0xC0BF55: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:228 LDA __BSS_START__,X
    case 0xC0BF56: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0BD96.asm:228 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC0BF54.
    case 0xC0BF57: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0BD96.asm:229 INC
    case 0xC0BF59: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:230 INC
    case 0xC0BF5A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:231 INC
    case 0xC0BF5B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:232 INC
    case 0xC0BF5C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:233 STA __BSS_START__,X
    case 0xC0BF5D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0BD96.asm:234 LDA @VIRTUAL02
    case 0xC0BF60: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0BD96.asm:235 CLC
    case 0xC0BF62: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:236 ADC #.LOWORD(ENTITY_PATH_POINT_COUNTS)
    case 0xC0BF63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003E, 2); else cpu.execute_instruction<0x69>(0x002E3E, 3); return true;
    // src/unknown/C0/C0BD96.asm:236 ADC #.LOWORD(ENTITY_PATH_POINT_COUNTS)
    // Overlapping static entry reached from 0xC0BF63.
    case 0xC0BF65: cpu.execute_instruction<0x2E>(0x00BDAA, 3); return true;
    // src/unknown/C0/C0BD96.asm:237 TAX
    case 0xC0BF66: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:238 LDA __BSS_START__,X
    case 0xC0BF67: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0BD96.asm:238 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC0BF65.
    case 0xC0BF68: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0BD96.asm:239 DEC
    case 0xC0BF6A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:240 STA __BSS_START__,X
    case 0xC0BF6B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0BD96.asm:241 LDA @LOCAL0C
    case 0xC0BF6E: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/unknown/C0/C0BD96.asm:243 PLD
    case 0xC0BF70: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0BD96.asm:244 RTL
    case 0xC0BF71: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0BF72.asm (unresolved).
bool execute_unresolved_c0_c0bf72_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0BF72.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0BF72: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0BF72.asm:17 END_STACK_VARS
    case 0xC0BF74: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0BF72.asm:17 END_STACK_VARS
    case 0xC0BF75: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0BF72.asm:17 END_STACK_VARS
    case 0xC0BF76: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x00FFD6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0BF72.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC0BF76.
    case 0xC0BF78: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0BF72.asm:17 END_STACK_VARS
    case 0xC0BF79: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:18 LDA CURRENT_ENTITY_SLOT
    case 0xC0BF7A: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0BF72.asm:18 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0BF78.
    case 0xC0BF7C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:19 STA @LOCAL0B
    case 0xC0BF7D: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0BF72.asm:20 LDA #.LOWORD(PATHFINDING_STATE)
    case 0xC0BF7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00F200, 3); return true;
    // src/unknown/C0/C0BF72.asm:20 LDA #.LOWORD(PATHFINDING_STATE)
    // Overlapping static entry reached from 0xC0BF7F.
    case 0xC0BF81: cpu.execute_instruction<0xF2>(0x000085, 2); return true;
    // src/unknown/C0/C0BF72.asm:21 STA @LOCAL0A
    case 0xC0BF82: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C0/C0BF72.asm:21 STA @LOCAL0A
    // Overlapping static entry reached from 0xC0BF81.
    case 0xC0BF83: cpu.execute_instruction<0x26>(0x0000A9, 2); return true;
    // src/unknown/C0/C0BF72.asm:22 LDA #56
    case 0xC0BF84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000038, 2); else cpu.execute_instruction<0xA9>(0x000038, 3); return true;
    // src/unknown/C0/C0BF72.asm:22 LDA #56
    // Overlapping static entry reached from 0xC0BF83.
    case 0xC0BF85: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:22 LDA #56
    // Overlapping static entry reached from 0xC0BF84.
    case 0xC0BF86: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0BF72.asm:23 STA PATHFINDING_STATE + pathfinding::radius
    case 0xC0BF87: cpu.execute_instruction<0x8D>(0x00F278, 3); return true;
    // src/unknown/C0/C0BF72.asm:24 STA PATHFINDING_STATE + pathfinding::radius + 2
    case 0xC0BF8A: cpu.execute_instruction<0x8D>(0x00F27A, 3); return true;
    // src/unknown/C0/C0BF72.asm:25 LDA PATHFINDING_STATE + pathfinding::radius
    case 0xC0BF8D: cpu.execute_instruction<0xAD>(0x00F278, 3); return true;
    // src/unknown/C0/C0BF72.asm:26 LSR
    case 0xC0BF90: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:27 STA @VIRTUAL04
    case 0xC0BF91: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0BF72.asm:28 STA PATHFINDING_TARGET_WIDTH
    case 0xC0BF93: cpu.execute_instruction<0x8D>(0x004A92, 3); return true;
    // src/unknown/C0/C0BF72.asm:29 LDA PATHFINDING_STATE + pathfinding::radius + 2
    case 0xC0BF96: cpu.execute_instruction<0xAD>(0x00F27A, 3); return true;
    // src/unknown/C0/C0BF72.asm:30 LSR
    case 0xC0BF99: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:31 STA @LOCAL09
    case 0xC0BF9A: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C0/C0BF72.asm:32 STA PATHFINDING_TARGET_HEIGHT
    case 0xC0BF9C: cpu.execute_instruction<0x8D>(0x004A94, 3); return true;
    // src/unknown/C0/C0BF72.asm:33 LDA @LOCAL0B
    case 0xC0BF9F: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0BF72.asm:34 ASL
    case 0xC0BFA1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:35 STA @LOCAL0B
    case 0xC0BFA2: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0BF72.asm:36 CLC
    case 0xC0BFA4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:37 ADC #.LOWORD(ENTITY_ABS_X_TABLE)
    case 0xC0BFA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008E, 2); else cpu.execute_instruction<0x69>(0x000B8E, 3); return true;
    // src/unknown/C0/C0BF72.asm:37 ADC #.LOWORD(ENTITY_ABS_X_TABLE)
    // Overlapping static entry reached from 0xC0BFA5.
    case 0xC0BFA7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:38 STA @VIRTUAL02
    case 0xC0BFA8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BF72.asm:39 STA @LOCAL08
    case 0xC0BFAA: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BF72.asm:40 LOADPTR UNKNOWN_C42A1F, @LOCAL07
    case 0xC0BFAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x002A1F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BF72.asm:40 LOADPTR UNKNOWN_C42A1F, @LOCAL07
    // Overlapping static entry reached from 0xC0BFAC.
    case 0xC0BFAE: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0BF72.asm:40 LOADPTR UNKNOWN_C42A1F, @LOCAL07
    case 0xC0BFAF: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BF72.asm:40 LOADPTR UNKNOWN_C42A1F, @LOCAL07
    case 0xC0BFB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BF72.asm:40 LOADPTR UNKNOWN_C42A1F, @LOCAL07
    // Overlapping static entry reached from 0xC0BFB1.
    case 0xC0BFB3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0BF72.asm:40 LOADPTR UNKNOWN_C42A1F, @LOCAL07
    case 0xC0BFB4: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C0BF72.asm:41 LDA @LOCAL0B
    case 0xC0BFB6: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0BF72.asm:42 CLC
    case 0xC0BFB8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:43 ADC #.LOWORD(ENTITY_SIZES)
    case 0xC0BFB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006E, 2); else cpu.execute_instruction<0x69>(0x002B6E, 3); return true;
    // src/unknown/C0/C0BF72.asm:43 ADC #.LOWORD(ENTITY_SIZES)
    // Overlapping static entry reached from 0xC0BFB9.
    case 0xC0BFBB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:44 TAX
    case 0xC0BFBC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:45 STX @LOCAL06
    case 0xC0BFBD: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C0BF72.asm:46 LDA __BSS_START__,X
    case 0xC0BFBF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0BF72.asm:47 ASL
    case 0xC0BFC2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:48 TAY
    case 0xC0BFC3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:49 LDX @VIRTUAL02
    case 0xC0BFC4: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0BF72.asm:50 LDA __BSS_START__,X
    case 0xC0BFC6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0BF72.asm:51 SEC
    case 0xC0BFC9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:52 SBC [@LOCAL07],Y
    case 0xC0BFCA: cpu.execute_instruction<0xF7>(0x00001E, 2); return true;
    // src/unknown/C0/C0BF72.asm:53 LSR
    case 0xC0BFCC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:54 LSR
    case 0xC0BFCD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:55 LSR
    case 0xC0BFCE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:56 STA PATHFINDING_TARGET_CENTRE_X
    case 0xC0BFCF: cpu.execute_instruction<0x8D>(0x004A8E, 3); return true;
    // src/unknown/C0/C0BF72.asm:57 LDA @LOCAL0B
    case 0xC0BFD2: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0BF72.asm:58 CLC
    case 0xC0BFD4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:59 ADC #.LOWORD(ENTITY_ABS_Y_TABLE)
    case 0xC0BFD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CA, 2); else cpu.execute_instruction<0x69>(0x000BCA, 3); return true;
    // src/unknown/C0/C0BF72.asm:59 ADC #.LOWORD(ENTITY_ABS_Y_TABLE)
    // Overlapping static entry reached from 0xC0BFD5.
    case 0xC0BFD7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:60 TAY
    case 0xC0BFD8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:61 STY @LOCAL0B
    case 0xC0BFD9: cpu.execute_instruction<0x84>(0x000028, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BF72.asm:62 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    case 0xC0BFDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000041, 2); else cpu.execute_instruction<0xA9>(0x002A41, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BF72.asm:62 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0BFDB.
    case 0xC0BFDD: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0BF72.asm:62 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    case 0xC0BFDE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BF72.asm:62 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    case 0xC0BFE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BF72.asm:62 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0BFE0.
    case 0xC0BFE2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0BF72.asm:62 LOADPTR UNKNOWN_C42A41, @VIRTUAL0A
    case 0xC0BFE3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0BF72.asm:63 LDX @LOCAL06
    case 0xC0BFE5: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C0/C0BF72.asm:64 LDA __BSS_START__,X
    case 0xC0BFE7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0BF72.asm:65 ASL
    case 0xC0BFEA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:66 STA @LOCAL05
    case 0xC0BFEB: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BF72.asm:67 LOADPTR UNKNOWN_C42AEB, @VIRTUAL06
    case 0xC0BFED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EB, 2); else cpu.execute_instruction<0xA9>(0x002AEB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0BF72.asm:67 LOADPTR UNKNOWN_C42AEB, @VIRTUAL06
    // Overlapping static entry reached from 0xC0BFED.
    case 0xC0BFEF: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0BF72.asm:67 LOADPTR UNKNOWN_C42AEB, @VIRTUAL06
    case 0xC0BFF0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BF72.asm:67 LOADPTR UNKNOWN_C42AEB, @VIRTUAL06
    case 0xC0BFF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0BF72.asm:67 LOADPTR UNKNOWN_C42AEB, @VIRTUAL06
    // Overlapping static entry reached from 0xC0BFF2.
    case 0xC0BFF4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0BF72.asm:67 LOADPTR UNKNOWN_C42AEB, @VIRTUAL06
    case 0xC0BFF5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0BF72.asm:68 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0BFF7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0BF72.asm:68 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0BFF9: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0BF72.asm:68 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0BFFB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0BF72.asm:68 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0BFFD: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0BF72.asm:69 LDA @LOCAL05
    case 0xC0BFFF: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0BF72.asm:70 CLC
    case 0xC0C001: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:71 ADC @VIRTUAL06
    case 0xC0C002: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0BF72.asm:72 STA @VIRTUAL06
    case 0xC0C004: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0BF72.asm:73 LDA [@VIRTUAL06]
    case 0xC0C006: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0BF72.asm:74 PHA
    case 0xC0C008: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:75 LDA @LOCAL05
    case 0xC0C009: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0BF72.asm:76 PHA
    case 0xC0C00B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0BF72.asm:77 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0C00C: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0BF72.asm:77 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0C00E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0BF72.asm:77 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0C010: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0BF72.asm:77 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0C012: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0BF72.asm:78 PLA
    case 0xC0C014: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:79 CLC
    case 0xC0C015: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:80 ADC @VIRTUAL06
    case 0xC0C016: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0BF72.asm:81 STA @VIRTUAL06
    case 0xC0C018: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0BF72.asm:82 LDA [@VIRTUAL06]
    case 0xC0C01A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0BF72.asm:83 STA @VIRTUAL02
    case 0xC0C01C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BF72.asm:84 LDA __BSS_START__,Y
    case 0xC0C01E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0BF72.asm:85 SEC
    case 0xC0C021: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:86 SBC @VIRTUAL02
    case 0xC0C022: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0BF72.asm:87 PLY
    case 0xC0C024: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:88 STY @VIRTUAL02
    case 0xC0C025: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0BF72.asm:89 CLC
    case 0xC0C027: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:90 ADC @VIRTUAL02
    case 0xC0C028: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0BF72.asm:91 LSR
    case 0xC0C02A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:92 LSR
    case 0xC0C02B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:93 LSR
    case 0xC0C02C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:94 STA PATHFINDING_TARGET_CENTRE_Y
    case 0xC0C02D: cpu.execute_instruction<0x8D>(0x004A90, 3); return true;
    // src/unknown/C0/C0BF72.asm:95 LDA __BSS_START__,X
    case 0xC0C030: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0BF72.asm:96 ASL
    case 0xC0C033: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:97 STA @LOCAL06
    case 0xC0C034: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C0BF72.asm:98 TAY
    case 0xC0C036: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:99 LDA @LOCAL08
    case 0xC0C037: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C0/C0BF72.asm:100 STA @VIRTUAL02
    case 0xC0C039: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BF72.asm:101 LDX @VIRTUAL02
    case 0xC0C03B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0BF72.asm:102 LDA __BSS_START__,X
    case 0xC0C03D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0BF72.asm:103 SEC
    case 0xC0C040: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:104 SBC [@LOCAL07],Y
    case 0xC0C041: cpu.execute_instruction<0xF7>(0x00001E, 2); return true;
    // src/unknown/C0/C0BF72.asm:105 LSR
    case 0xC0C043: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:106 LSR
    case 0xC0C044: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:107 LSR
    case 0xC0C045: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:108 SEC
    case 0xC0C046: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:109 SBC @VIRTUAL04
    case 0xC0C047: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C0/C0BF72.asm:110 TAX
    case 0xC0C049: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:111 LDA @LOCAL06
    case 0xC0C04A: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C0/C0BF72.asm:112 MOVE_INTY @LOCAL04, @VIRTUAL06
    case 0xC0C04C: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C0/C0BF72.asm:112 MOVE_INTY @LOCAL04, @VIRTUAL06
    case 0xC0C04E: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C0/C0BF72.asm:112 MOVE_INTY @LOCAL04, @VIRTUAL06
    case 0xC0C050: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C0/C0BF72.asm:112 MOVE_INTY @LOCAL04, @VIRTUAL06
    case 0xC0C052: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C0BF72.asm:113 CLC
    case 0xC0C054: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:114 ADC @VIRTUAL06
    case 0xC0C055: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0BF72.asm:115 STA @VIRTUAL06
    case 0xC0C057: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0BF72.asm:116 LDA [@VIRTUAL06]
    case 0xC0C059: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0BF72.asm:117 PHA
    case 0xC0C05B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:118 LDA @LOCAL06
    case 0xC0C05C: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C0/C0BF72.asm:119 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0C05E: cpu.execute_instruction<0xA4>(0x00000A, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C0/C0BF72.asm:119 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0C060: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C0/C0BF72.asm:119 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0C062: cpu.execute_instruction<0xA4>(0x00000C, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C0/C0BF72.asm:119 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0C064: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C0BF72.asm:120 CLC
    case 0xC0C066: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:121 ADC @VIRTUAL06
    case 0xC0C067: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0BF72.asm:122 STA @VIRTUAL06
    case 0xC0C069: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0BF72.asm:123 LDA [@VIRTUAL06]
    case 0xC0C06B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0BF72.asm:124 STA @VIRTUAL02
    case 0xC0C06D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0BF72.asm:125 LDY @LOCAL0B
    case 0xC0C06F: cpu.execute_instruction<0xA4>(0x000028, 2); return true;
    // src/unknown/C0/C0BF72.asm:126 LDA __BSS_START__,Y
    case 0xC0C071: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0BF72.asm:127 SEC
    case 0xC0C074: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:128 SBC @VIRTUAL02
    case 0xC0C075: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0BF72.asm:129 PLY
    case 0xC0C077: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:130 STY @VIRTUAL02
    case 0xC0C078: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0BF72.asm:131 CLC
    case 0xC0C07A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:132 ADC @VIRTUAL02
    case 0xC0C07B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0BF72.asm:133 LSR
    case 0xC0C07D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:134 LSR
    case 0xC0C07E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:135 LSR
    case 0xC0C07F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:136 SEC
    case 0xC0C080: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:137 SBC @LOCAL09
    case 0xC0C081: cpu.execute_instruction<0xE5>(0x000024, 2); return true;
    // src/unknown/C0/C0BF72.asm:138 STA @LOCAL0B
    case 0xC0C083: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0BF72.asm:139 LDA @VIRTUAL04
    case 0xC0C085: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0BF72.asm:140 AND #$003F
    case 0xC0C087: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0BF72.asm:140 AND #$003F
    // Overlapping static entry reached from 0xC0C087.
    case 0xC0C089: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0BF72.asm:141 STA PATHFINDING_STATE + pathfinding::targets + 2
    case 0xC0C08A: cpu.execute_instruction<0x8D>(0x00F27E, 3); return true;
    // src/unknown/C0/C0BF72.asm:142 LDA PATHFINDING_TARGET_HEIGHT
    case 0xC0C08D: cpu.execute_instruction<0xAD>(0x004A94, 3); return true;
    // src/unknown/C0/C0BF72.asm:143 AND #$003F
    case 0xC0C090: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0BF72.asm:143 AND #$003F
    // Overlapping static entry reached from 0xC0C090.
    case 0xC0C092: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0BF72.asm:144 STA PATHFINDING_STATE + pathfinding::targets
    case 0xC0C093: cpu.execute_instruction<0x8D>(0x00F27C, 3); return true;
    // src/unknown/C0/C0BF72.asm:145 LDA @LOCAL0B
    case 0xC0C096: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0BF72.asm:146 STA @LOCAL00
    case 0xC0C098: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0BF72.asm:147 LDA #1
    case 0xC0C09A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0BF72.asm:147 LDA #1
    // Overlapping static entry reached from 0xC0C09A.
    case 0xC0C09C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BF72.asm:148 STA @LOCAL01
    case 0xC0C09D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0BF72.asm:149 LDA #252
    case 0xC0C09F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x0000FC, 3); return true;
    // src/unknown/C0/C0BF72.asm:149 LDA #252
    // Overlapping static entry reached from 0xC0C09F.
    case 0xC0C0A1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BF72.asm:150 STA @LOCAL02
    case 0xC0C0A2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0BF72.asm:151 LDA #50
    case 0xC0C0A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000032, 2); else cpu.execute_instruction<0xA9>(0x000032, 3); return true;
    // src/unknown/C0/C0BF72.asm:151 LDA #50
    // Overlapping static entry reached from 0xC0C0A4.
    case 0xC0C0A6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0BF72.asm:152 STA @LOCAL03
    case 0xC0C0A7: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0BF72.asm:153 TXY
    case 0xC0C0A9: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0BF72.asm:154 LDX #1
    case 0xC0C0AA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C0BF72.asm:154 LDX #1
    // Overlapping static entry reached from 0xC0C0AA.
    case 0xC0C0AC: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C0BF72.asm:155 LDA @LOCAL0A
    case 0xC0C0AD: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C0/C0BF72.asm:156 JSR UNKNOWN_C0BA35
    case 0xC0C0AF: cpu.execute_instruction<0x20>(0x00BA35, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0BF72.asm:157 END_C_FUNCTION
    case 0xC0C0B2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0BF72.asm:157 END_C_FUNCTION
    case 0xC0C0B3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C0B4.asm (unresolved).
bool execute_unresolved_c0_c0c0b4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C0B4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C0B4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C0B4.asm:10 END_STACK_VARS
    case 0xC0C0B6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0C0B4.asm:10 END_STACK_VARS
    case 0xC0C0B7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C0B4.asm:10 END_STACK_VARS
    case 0xC0C0B8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C0B4.asm:10 END_STACK_VARS
    case 0xC0C0B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C0B4.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C0B9.
    case 0xC0C0BB: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C0B4.asm:10 END_STACK_VARS
    case 0xC0C0BC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0C0B4.asm:10 END_STACK_VARS
    case 0xC0C0BD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:11 STA @LOCAL02
    case 0xC0C0BE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0C0B4.asm:11 STA @LOCAL02
    // Overlapping static entry reached from 0xC0C0BB.
    case 0xC0C0BF: cpu.execute_instruction<0x12>(0x0000AC, 2); return true;
    // src/unknown/C0/C0C0B4.asm:12 LDY CURRENT_ENTITY_SLOT
    case 0xC0C0C0: cpu.execute_instruction<0xAC>(0x001A42, 3); return true;
    // src/unknown/C0/C0C0B4.asm:12 LDY CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C0BF.
    case 0xC0C0C1: cpu.execute_instruction<0x42>(0x00001A, 2); return true;
    // src/unknown/C0/C0C0B4.asm:13 STY @LOCAL01
    case 0xC0C0C3: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C0C0B4.asm:14 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0C0C5: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C0C0B4.asm:15 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0C0C8: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C0C0B4.asm:16 JSL LOAD_SECTOR_ATTRS
    case 0xC0C0CB: cpu.execute_instruction<0x22>(0xC00AA1, 4); return true;
    // src/unknown/C0/C0C0B4.asm:17 AND #$0007
    case 0xC0C0CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C0C0B4.asm:17 AND #$0007
    // Overlapping static entry reached from 0xC0C0CF.
    case 0xC0C0D1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C0C0B4.asm:18 TAX
    case 0xC0C0D2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:19 LDA f:UNKNOWN_C3DFE8,X
    case 0xC0C0D3: cpu.execute_instruction<0xBF>(0xC3DFE8, 4); return true;
    // src/unknown/C0/C0C0B4.asm:20 AND #$00FF
    case 0xC0C0D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0C0B4.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC0C0D7.
    case 0xC0C0D9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0C0B4.asm:21 BEQL @UNKNOWN6
    case 0xC0C0DA: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0C0B4.asm:21 BEQL @UNKNOWN6
    case 0xC0C0DC: cpu.execute_instruction<0x4C>(0x00C196, 3); return true;
    // src/unknown/C0/C0C0B4.asm:22 LDY @LOCAL01
    case 0xC0C0DF: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C0C0B4.asm:23 TYA
    case 0xC0C0E1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:24 ASL
    case 0xC0C0E2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:25 STA @VIRTUAL04
    case 0xC0C0E3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C0B4.asm:26 CLC
    case 0xC0C0E5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:27 ADC #.LOWORD(ENTITY_PATHFINDING_STATES)
    case 0xC0C0E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005E, 2); else cpu.execute_instruction<0x69>(0x002C5E, 3); return true;
    // src/unknown/C0/C0C0B4.asm:27 ADC #.LOWORD(ENTITY_PATHFINDING_STATES)
    // Overlapping static entry reached from 0xC0C0E6.
    case 0xC0C0E8: cpu.execute_instruction<0x2C>(0x000285, 3); return true;
    // src/unknown/C0/C0C0B4.asm:28 STA @VIRTUAL02
    case 0xC0C0E9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C0B4.asm:29 LDA #.LOWORD(-1)
    case 0xC0C0EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C0B4.asm:29 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0C0EB.
    case 0xC0C0ED: cpu.execute_instruction<0xFF>(0x9D02A6, 4); return true;
    // src/unknown/C0/C0C0B4.asm:30 LDX @VIRTUAL02
    case 0xC0C0EE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C0B4.asm:31 STA __BSS_START__,X
    case 0xC0C0F0: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:31 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0C0ED.
    case 0xC0C0F1: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0C0B4.asm:32 LDY #48
    case 0xC0C0F3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000030, 2); else cpu.execute_instruction<0xA0>(0x000030, 3); return true;
    // src/unknown/C0/C0C0B4.asm:32 LDY #48
    // Overlapping static entry reached from 0xC0C0F3.
    case 0xC0C0F5: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C0/C0C0B4.asm:33 TYX
    case 0xC0C0F6: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:34 LDA #1
    case 0xC0C0F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0C0B4.asm:34 LDA #1
    // Overlapping static entry reached from 0xC0C0F7.
    case 0xC0C0F9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0C0B4.asm:35 JSL FIND_PATH_TO_PARTY
    case 0xC0C0FA: cpu.execute_instruction<0x22>(0xC0BC74, 4); return true;
    // src/unknown/C0/C0C0B4.asm:36 CMP #0
    case 0xC0C0FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:36 CMP #0
    // Overlapping static entry reached from 0xC0C0FE.
    case 0xC0C100: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0C0B4.asm:37 BNEL @UNKNOWN6
    case 0xC0C101: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0C0B4.asm:37 BNEL @UNKNOWN6
    case 0xC0C103: cpu.execute_instruction<0x4C>(0x00C196, 3); return true;
    // src/unknown/C0/C0C0B4.asm:38 LDA #0
    case 0xC0C106: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:38 LDA #0
    // Overlapping static entry reached from 0xC0C106.
    case 0xC0C108: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C0C0B4.asm:39 LDX @VIRTUAL02
    case 0xC0C109: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C0B4.asm:40 STA __BSS_START__,X
    case 0xC0C10B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:41 LDA @VIRTUAL04
    case 0xC0C10E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0C0B4.asm:42 CLC
    case 0xC0C110: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:43 ADC #.LOWORD(ENTITY_PATH_POINTS)
    case 0xC0C111: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x002E02, 3); return true;
    // src/unknown/C0/C0C0B4.asm:43 ADC #.LOWORD(ENTITY_PATH_POINTS)
    // Overlapping static entry reached from 0xC0C111.
    case 0xC0C113: cpu.execute_instruction<0x2E>(0x00BDAA, 3); return true;
    // src/unknown/C0/C0C0B4.asm:44 TAX
    case 0xC0C114: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:45 LDA __BSS_START__,X
    case 0xC0C115: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:45 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC0C113.
    case 0xC0C116: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0C0B4.asm:46 INC
    case 0xC0C118: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:47 INC
    case 0xC0C119: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:48 INC
    case 0xC0C11A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:49 INC
    case 0xC0C11B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:50 STA __BSS_START__,X
    case 0xC0C11C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:51 LDA @VIRTUAL04
    case 0xC0C11F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0C0B4.asm:52 CLC
    case 0xC0C121: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:53 ADC #.LOWORD(ENTITY_PATH_POINT_COUNTS)
    case 0xC0C122: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003E, 2); else cpu.execute_instruction<0x69>(0x002E3E, 3); return true;
    // src/unknown/C0/C0C0B4.asm:53 ADC #.LOWORD(ENTITY_PATH_POINT_COUNTS)
    // Overlapping static entry reached from 0xC0C122.
    case 0xC0C124: cpu.execute_instruction<0x2E>(0x00B9A8, 3); return true;
    // src/unknown/C0/C0C0B4.asm:54 TAY
    case 0xC0C125: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:55 LDA __BSS_START__,Y
    case 0xC0C126: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:55 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC0C124.
    case 0xC0C127: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0C0B4.asm:56 DEC
    case 0xC0C129: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:57 STA __BSS_START__,Y
    case 0xC0C12A: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:58 BNE @UNKNOWN2
    case 0xC0C12D: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0C0B4.asm:59 LDA #1
    case 0xC0C12F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0C0B4.asm:59 LDA #1
    // Overlapping static entry reached from 0xC0C12F.
    case 0xC0C131: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C0B4.asm:60 BRA @UNKNOWN7
    case 0xC0C132: cpu.execute_instruction<0x80>(0x000065, 2); return true;
    // src/unknown/C0/C0C0B4.asm:62 LDA __BSS_START__,X
    case 0xC0C134: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:63 STA @VIRTUAL02
    case 0xC0C137: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C0B4.asm:64 LDA @LOCAL02
    case 0xC0C139: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0C0B4.asm:65 STA @VIRTUAL04
    case 0xC0C13B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C0B4.asm:66 ASL
    case 0xC0C13D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:67 ASL
    case 0xC0C13E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:68 ADC @VIRTUAL04
    case 0xC0C13F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C0C0B4.asm:69 ASL
    case 0xC0C141: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:70 ASL
    case 0xC0C142: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:71 ASL
    case 0xC0C143: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:72 ASL
    case 0xC0C144: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:73 CLC
    case 0xC0C145: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:74 ADC #.LOWORD(DELIVERY_PATHS)
    case 0xC0C146: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000096, 2); else cpu.execute_instruction<0x69>(0x004A96, 3); return true;
    // src/unknown/C0/C0C0B4.asm:74 ADC #.LOWORD(DELIVERY_PATHS)
    // Overlapping static entry reached from 0xC0C146.
    case 0xC0C148: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:75 STA @LOCAL00
    case 0xC0C149: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C0B4.asm:76 STA __BSS_START__,X
    case 0xC0C14B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:77 LDA __BSS_START__,Y
    case 0xC0C14E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:78 TAY
    case 0xC0C151: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:79 LDX #0
    case 0xC0C152: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:79 LDX #0
    // Overlapping static entry reached from 0xC0C152.
    case 0xC0C154: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C0C0B4.asm:80 STX @LOCAL01
    case 0xC0C155: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0C0B4.asm:81 BRA @UNKNOWN4
    case 0xC0C157: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/unknown/C0/C0C0B4.asm:83 LDA @LOCAL00
    case 0xC0C159: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C0B4.asm:84 PHA
    case 0xC0C15B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:85 LDX @VIRTUAL02
    case 0xC0C15C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C0B4.asm:86 LDA __BSS_START__,X
    case 0xC0C15E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:87 PLX
    case 0xC0C161: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:88 STA __BSS_START__,X
    case 0xC0C162: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:89 LDA @LOCAL00
    case 0xC0C165: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C0B4.asm:90 PHA
    case 0xC0C167: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:91 LDX @VIRTUAL02
    case 0xC0C168: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C0B4.asm:92 LDA __BSS_START__+2,X
    case 0xC0C16A: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C0/C0C0B4.asm:93 PLX
    case 0xC0C16D: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:94 STA __BSS_START__+2,X
    case 0xC0C16E: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/unknown/C0/C0C0B4.asm:95 INC @VIRTUAL02
    case 0xC0C171: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0C0B4.asm:96 INC @VIRTUAL02
    case 0xC0C173: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0C0B4.asm:97 INC @VIRTUAL02
    case 0xC0C175: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0C0B4.asm:98 INC @VIRTUAL02
    case 0xC0C177: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0C0B4.asm:99 LDA @LOCAL00
    case 0xC0C179: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C0B4.asm:100 INC
    case 0xC0C17B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:101 INC
    case 0xC0C17C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:102 INC
    case 0xC0C17D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:103 INC
    case 0xC0C17E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:104 STA @LOCAL00
    case 0xC0C17F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C0B4.asm:105 DEY
    case 0xC0C181: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:106 LDX @LOCAL01
    case 0xC0C182: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0C0B4.asm:107 INX
    case 0xC0C184: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0C0B4.asm:108 STX @LOCAL01
    case 0xC0C185: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0C0B4.asm:110 CPY #0
    case 0xC0C187: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:110 CPY #0
    // Overlapping static entry reached from 0xC0C187.
    case 0xC0C189: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0C0B4.asm:111 BEQ @UNKNOWN5
    case 0xC0C18A: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0C0B4.asm:112 CPX #20
    case 0xC0C18C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000014, 2); else cpu.execute_instruction<0xE0>(0x000014, 3); return true;
    // src/unknown/C0/C0C0B4.asm:112 CPX #20
    // Overlapping static entry reached from 0xC0C18C.
    case 0xC0C18E: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0C0B4.asm:113 BCC @UNKNOWN3
    case 0xC0C18F: cpu.execute_instruction<0x90>(0x0000C8, 2); return true;
    // src/unknown/C0/C0C0B4.asm:115 LDA #0
    case 0xC0C191: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C0B4.asm:115 LDA #0
    // Overlapping static entry reached from 0xC0C191.
    case 0xC0C193: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C0B4.asm:116 BRA @UNKNOWN7
    case 0xC0C194: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0C0B4.asm:118 LDA #1
    case 0xC0C196: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0C0B4.asm:118 LDA #1
    // Overlapping static entry reached from 0xC0C196.
    case 0xC0C198: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C0B4.asm:120 END_C_FUNCTION
    case 0xC0C199: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C0B4.asm:120 END_C_FUNCTION
    case 0xC0C19A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C19B.asm (unresolved).
bool execute_unresolved_c0_c0c19b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C19B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C19B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C19B.asm:10 END_STACK_VARS
    case 0xC0C19D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0C19B.asm:10 END_STACK_VARS
    case 0xC0C19E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C19B.asm:10 END_STACK_VARS
    case 0xC0C19F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C19B.asm:10 END_STACK_VARS
    case 0xC0C1A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C19B.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C1A0.
    case 0xC0C1A2: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C19B.asm:10 END_STACK_VARS
    case 0xC0C1A3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0C19B.asm:10 END_STACK_VARS
    case 0xC0C1A4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:11 STA @VIRTUAL04
    case 0xC0C1A5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C19B.asm:11 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC0C1A2.
    case 0xC0C1A6: cpu.execute_instruction<0x04>(0x0000AC, 2); return true;
    // src/unknown/C0/C0C19B.asm:12 LDY CURRENT_ENTITY_SLOT
    case 0xC0C1A7: cpu.execute_instruction<0xAC>(0x001A42, 3); return true;
    // src/unknown/C0/C0C19B.asm:12 LDY CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C1A6.
    case 0xC0C1A8: cpu.execute_instruction<0x42>(0x00001A, 2); return true;
    // src/unknown/C0/C0C19B.asm:13 STY @LOCAL02
    case 0xC0C1AA: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C0C19B.asm:14 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0C1AC: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C0C19B.asm:15 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0C1AF: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C0C19B.asm:16 JSL LOAD_SECTOR_ATTRS
    case 0xC0C1B2: cpu.execute_instruction<0x22>(0xC00AA1, 4); return true;
    // src/unknown/C0/C0C19B.asm:17 AND #$0007
    case 0xC0C1B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C0C19B.asm:17 AND #$0007
    // Overlapping static entry reached from 0xC0C1B6.
    case 0xC0C1B8: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C0C19B.asm:18 TAX
    case 0xC0C1B9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:19 LDA f:UNKNOWN_C3DFE8,X
    case 0xC0C1BA: cpu.execute_instruction<0xBF>(0xC3DFE8, 4); return true;
    // src/unknown/C0/C0C19B.asm:20 AND #$00FF
    case 0xC0C1BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0C19B.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC0C1BE.
    case 0xC0C1C0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0C19B.asm:21 BEQL @UNKNOWN4
    case 0xC0C1C1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0C19B.asm:21 BEQL @UNKNOWN4
    case 0xC0C1C3: cpu.execute_instruction<0x4C>(0x00C24C, 3); return true;
    // src/unknown/C0/C0C19B.asm:22 LDY @LOCAL02
    case 0xC0C1C6: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C0C19B.asm:23 TYA
    case 0xC0C1C8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:24 ASL
    case 0xC0C1C9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:25 STA @LOCAL01
    case 0xC0C1CA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0C19B.asm:26 CLC
    case 0xC0C1CC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:27 ADC #.LOWORD(ENTITY_PATHFINDING_STATES)
    case 0xC0C1CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005E, 2); else cpu.execute_instruction<0x69>(0x002C5E, 3); return true;
    // src/unknown/C0/C0C19B.asm:27 ADC #.LOWORD(ENTITY_PATHFINDING_STATES)
    // Overlapping static entry reached from 0xC0C1CD.
    case 0xC0C1CF: cpu.execute_instruction<0x2C>(0x0086AA, 3); return true;
    // src/unknown/C0/C0C19B.asm:28 TAX
    case 0xC0C1D0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:29 STX @LOCAL00
    case 0xC0C1D1: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0C19B.asm:29 STX @LOCAL00
    // Overlapping static entry reached from 0xC0C1CF.
    case 0xC0C1D2: cpu.execute_instruction<0x0E>(0x00FFA9, 3); return true;
    // src/unknown/C0/C0C19B.asm:30 LDA #.LOWORD(-1)
    case 0xC0C1D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C19B.asm:30 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0C1D3.
    case 0xC0C1D5: cpu.execute_instruction<0xFF>(0x00009D, 4); return true;
    // src/unknown/C0/C0C19B.asm:31 STA __BSS_START__,X
    case 0xC0C1D6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0C19B.asm:32 JSL UNKNOWN_C0BD96
    case 0xC0C1D9: cpu.execute_instruction<0x22>(0xC0BD96, 4); return true;
    // src/unknown/C0/C0C19B.asm:33 TAY
    case 0xC0C1DD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:34 BNE @UNKNOWN4
    case 0xC0C1DE: cpu.execute_instruction<0xD0>(0x00006C, 2); return true;
    // src/unknown/C0/C0C19B.asm:35 LDA #0
    case 0xC0C1E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C19B.asm:35 LDA #0
    // Overlapping static entry reached from 0xC0C1E0.
    case 0xC0C1E2: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C0C19B.asm:36 LDX @LOCAL00
    case 0xC0C1E3: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0C19B.asm:37 STA __BSS_START__,X
    case 0xC0C1E5: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0C19B.asm:38 LDA @LOCAL01
    case 0xC0C1E8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0C19B.asm:39 CLC
    case 0xC0C1EA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:40 ADC #.LOWORD(ENTITY_PATH_POINTS)
    case 0xC0C1EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x002E02, 3); return true;
    // src/unknown/C0/C0C19B.asm:40 ADC #.LOWORD(ENTITY_PATH_POINTS)
    // Overlapping static entry reached from 0xC0C1EB.
    case 0xC0C1ED: cpu.execute_instruction<0x2E>(0x00BDAA, 3); return true;
    // src/unknown/C0/C0C19B.asm:41 TAX
    case 0xC0C1EE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:42 LDA __BSS_START__,X
    case 0xC0C1EF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0C19B.asm:42 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC0C1ED.
    case 0xC0C1F0: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0C19B.asm:43 STA @VIRTUAL02
    case 0xC0C1F2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C19B.asm:44 LDA @VIRTUAL04
    case 0xC0C1F4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0C19B.asm:45 STA @VIRTUAL04
    case 0xC0C1F6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C19B.asm:46 ASL
    case 0xC0C1F8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:47 ASL
    case 0xC0C1F9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:48 ADC @VIRTUAL04
    case 0xC0C1FA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C0C19B.asm:49 ASL
    case 0xC0C1FC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:50 ASL
    case 0xC0C1FD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:51 ASL
    case 0xC0C1FE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:52 ASL
    case 0xC0C1FF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:53 CLC
    case 0xC0C200: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:54 ADC #.LOWORD(DELIVERY_PATHS)
    case 0xC0C201: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000096, 2); else cpu.execute_instruction<0x69>(0x004A96, 3); return true;
    // src/unknown/C0/C0C19B.asm:54 ADC #.LOWORD(DELIVERY_PATHS)
    // Overlapping static entry reached from 0xC0C201.
    case 0xC0C203: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:55 TAY
    case 0xC0C204: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:56 STA __BSS_START__,X
    case 0xC0C205: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0C19B.asm:57 LDA @LOCAL01
    case 0xC0C208: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0C19B.asm:58 TAX
    case 0xC0C20A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:59 LDA ENTITY_PATH_POINT_COUNTS,X
    case 0xC0C20B: cpu.execute_instruction<0xBD>(0x002E3E, 3); return true;
    // src/unknown/C0/C0C19B.asm:60 STA @LOCAL01
    case 0xC0C20E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0C19B.asm:61 LDX #0
    case 0xC0C210: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0C19B.asm:61 LDX #0
    // Overlapping static entry reached from 0xC0C210.
    case 0xC0C212: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C0C19B.asm:62 STX @LOCAL00
    case 0xC0C213: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0C19B.asm:63 BRA @UNKNOWN2
    case 0xC0C215: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/unknown/C0/C0C19B.asm:65 LDX @VIRTUAL02
    case 0xC0C217: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C19B.asm:66 LDA __BSS_START__,X
    case 0xC0C219: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0C19B.asm:67 STA __BSS_START__,Y
    case 0xC0C21C: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0C19B.asm:68 LDX @VIRTUAL02
    case 0xC0C21F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C19B.asm:69 LDA __BSS_START__+2,X
    case 0xC0C221: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C0/C0C19B.asm:70 STA __BSS_START__+2,Y
    case 0xC0C224: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C0/C0C19B.asm:71 INC @VIRTUAL02
    case 0xC0C227: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0C19B.asm:72 INC @VIRTUAL02
    case 0xC0C229: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0C19B.asm:73 INC @VIRTUAL02
    case 0xC0C22B: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0C19B.asm:74 INC @VIRTUAL02
    case 0xC0C22D: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0C19B.asm:75 INY
    case 0xC0C22F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:76 INY
    case 0xC0C230: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:77 INY
    case 0xC0C231: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:78 INY
    case 0xC0C232: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:79 LDA @LOCAL01
    case 0xC0C233: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0C19B.asm:80 DEC
    case 0xC0C235: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:81 STA @LOCAL01
    case 0xC0C236: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0C19B.asm:82 LDX @LOCAL00
    case 0xC0C238: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0C19B.asm:83 INX
    case 0xC0C23A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0C19B.asm:84 STX @LOCAL00
    case 0xC0C23B: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0C19B.asm:86 CMP #0
    case 0xC0C23D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0C19B.asm:86 CMP #0
    // Overlapping static entry reached from 0xC0C23D.
    case 0xC0C23F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0C19B.asm:87 BEQ @UNKNOWN3
    case 0xC0C240: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0C19B.asm:88 CPX #20
    case 0xC0C242: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000014, 2); else cpu.execute_instruction<0xE0>(0x000014, 3); return true;
    // src/unknown/C0/C0C19B.asm:88 CPX #20
    // Overlapping static entry reached from 0xC0C242.
    case 0xC0C244: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0C19B.asm:89 BCC @UNKNOWN1
    case 0xC0C245: cpu.execute_instruction<0x90>(0x0000D0, 2); return true;
    // src/unknown/C0/C0C19B.asm:91 LDA #0
    case 0xC0C247: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C19B.asm:91 LDA #0
    // Overlapping static entry reached from 0xC0C247.
    case 0xC0C249: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C19B.asm:92 BRA @UNKNOWN5
    case 0xC0C24A: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0C19B.asm:94 LDA #1
    case 0xC0C24C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0C19B.asm:94 LDA #1
    // Overlapping static entry reached from 0xC0C24C.
    case 0xC0C24E: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C19B.asm:96 END_C_FUNCTION
    case 0xC0C24F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C19B.asm:96 END_C_FUNCTION
    case 0xC0C250: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C251.asm (unresolved).
bool execute_unresolved_c0_c0c251_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C251.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C251: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C251.asm:11 END_STACK_VARS
    case 0xC0C253: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0C251.asm:11 END_STACK_VARS
    case 0xC0C254: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C251.asm:11 END_STACK_VARS
    case 0xC0C255: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C251.asm:11 END_STACK_VARS
    case 0xC0C256: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C251.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C256.
    case 0xC0C258: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C251.asm:11 END_STACK_VARS
    case 0xC0C259: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0C251.asm:11 END_STACK_VARS
    case 0xC0C25A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:12 STA @VIRTUAL04
    case 0xC0C25B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C251.asm:12 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC0C258.
    case 0xC0C25C: cpu.execute_instruction<0x04>(0x0000AD, 2); return true;
    // src/unknown/C0/C0C251.asm:13 LDA CURRENT_ENTITY_SLOT
    case 0xC0C25D: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0C251.asm:13 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C25C.
    case 0xC0C25E: cpu.execute_instruction<0x42>(0x00001A, 2); return true;
    // src/unknown/C0/C0C251.asm:14 ASL
    case 0xC0C260: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:15 STA @VIRTUAL02
    case 0xC0C261: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C251.asm:16 CLC
    case 0xC0C263: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:17 ADC #.LOWORD(ENTITY_PATHFINDING_STATES)
    case 0xC0C264: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005E, 2); else cpu.execute_instruction<0x69>(0x002C5E, 3); return true;
    // src/unknown/C0/C0C251.asm:17 ADC #.LOWORD(ENTITY_PATHFINDING_STATES)
    // Overlapping static entry reached from 0xC0C264.
    case 0xC0C266: cpu.execute_instruction<0x2C>(0x0086AA, 3); return true;
    // src/unknown/C0/C0C251.asm:18 TAX
    case 0xC0C267: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:19 STX @LOCAL03
    case 0xC0C268: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C0C251.asm:19 STX @LOCAL03
    // Overlapping static entry reached from 0xC0C266.
    case 0xC0C269: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // src/unknown/C0/C0C251.asm:20 LDA #$FFFF
    case 0xC0C26A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C251.asm:20 LDA #$FFFF
    // Overlapping static entry reached from 0xC0C269.
    case 0xC0C26B: cpu.execute_instruction<0xFF>(0x009DFF, 4); return true;
    // src/unknown/C0/C0C251.asm:20 LDA #$FFFF
    // Overlapping static entry reached from 0xC0C26A.
    case 0xC0C26C: cpu.execute_instruction<0xFF>(0x00009D, 4); return true;
    // src/unknown/C0/C0C251.asm:21 STA __BSS_START__,X
    case 0xC0C26D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:21 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0C26B.
    case 0xC0C26F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0C251.asm:22 JSL UNKNOWN_C0BF72
    case 0xC0C270: cpu.execute_instruction<0x22>(0xC0BF72, 4); return true;
    // src/unknown/C0/C0C251.asm:23 CMP #$0000
    case 0xC0C274: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:23 CMP #$0000
    // Overlapping static entry reached from 0xC0C274.
    case 0xC0C276: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0C251.asm:24 BNEL @UNKNOWN4
    case 0xC0C277: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0C251.asm:24 BNEL @UNKNOWN4
    case 0xC0C279: cpu.execute_instruction<0x4C>(0x00C307, 3); return true;
    // src/unknown/C0/C0C251.asm:25 LDA #$0000
    case 0xC0C27C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:25 LDA #$0000
    // Overlapping static entry reached from 0xC0C27C.
    case 0xC0C27E: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C0C251.asm:26 LDX @LOCAL03
    case 0xC0C27F: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0C251.asm:27 STA __BSS_START__,X
    case 0xC0C281: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:28 LDA @VIRTUAL02
    case 0xC0C284: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0C251.asm:29 CLC
    case 0xC0C286: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:30 ADC #.LOWORD(ENTITY_PATH_POINT_COUNTS)
    case 0xC0C287: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003E, 2); else cpu.execute_instruction<0x69>(0x002E3E, 3); return true;
    // src/unknown/C0/C0C251.asm:30 ADC #.LOWORD(ENTITY_PATH_POINT_COUNTS)
    // Overlapping static entry reached from 0xC0C287.
    case 0xC0C289: cpu.execute_instruction<0x2E>(0x00B9A8, 3); return true;
    // src/unknown/C0/C0C251.asm:31 TAY
    case 0xC0C28A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:32 LDA __BSS_START__,Y
    case 0xC0C28B: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:32 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC0C289.
    case 0xC0C28C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0C251.asm:33 DEC
    case 0xC0C28E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:34 STA @LOCAL02
    case 0xC0C28F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0C251.asm:35 STA __BSS_START__,Y
    case 0xC0C291: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:36 LDA @VIRTUAL02
    case 0xC0C294: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0C251.asm:37 CLC
    case 0xC0C296: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:38 ADC #.LOWORD(ENTITY_PATH_POINTS)
    case 0xC0C297: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x002E02, 3); return true;
    // src/unknown/C0/C0C251.asm:38 ADC #.LOWORD(ENTITY_PATH_POINTS)
    // Overlapping static entry reached from 0xC0C297.
    case 0xC0C299: cpu.execute_instruction<0x2E>(0x00A5AA, 3); return true;
    // src/unknown/C0/C0C251.asm:39 TAX
    case 0xC0C29A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:40 LDA @LOCAL02
    case 0xC0C29B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0C251.asm:40 LDA @LOCAL02
    // Overlapping static entry reached from 0xC0C299.
    case 0xC0C29C: cpu.execute_instruction<0x12>(0x00003A, 2); return true;
    // src/unknown/C0/C0C251.asm:41 DEC
    case 0xC0C29D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:42 ASL
    case 0xC0C29E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:43 ASL
    case 0xC0C29F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:44 STA @VIRTUAL02
    case 0xC0C2A0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C251.asm:45 LDA __BSS_START__,X
    case 0xC0C2A2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:46 CLC
    case 0xC0C2A5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:47 ADC @VIRTUAL02
    case 0xC0C2A6: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0C251.asm:48 STA @VIRTUAL02
    case 0xC0C2A8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C251.asm:49 LDA @VIRTUAL04
    case 0xC0C2AA: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0C251.asm:50 STA @VIRTUAL04
    case 0xC0C2AC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C251.asm:51 ASL
    case 0xC0C2AE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:52 ASL
    case 0xC0C2AF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:53 ADC @VIRTUAL04
    case 0xC0C2B0: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C0C251.asm:54 ASL
    case 0xC0C2B2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:55 ASL
    case 0xC0C2B3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:56 ASL
    case 0xC0C2B4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:57 ASL
    case 0xC0C2B5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:58 CLC
    case 0xC0C2B6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:59 ADC #.LOWORD(DELIVERY_PATHS)
    case 0xC0C2B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000096, 2); else cpu.execute_instruction<0x69>(0x004A96, 3); return true;
    // src/unknown/C0/C0C251.asm:59 ADC #.LOWORD(DELIVERY_PATHS)
    // Overlapping static entry reached from 0xC0C2B7.
    case 0xC0C2B9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:60 STA @LOCAL01
    case 0xC0C2BA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0C251.asm:61 STA __BSS_START__,X
    case 0xC0C2BC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:62 LDA __BSS_START__,Y
    case 0xC0C2BF: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:63 TAY
    case 0xC0C2C2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:64 LDX #0
    case 0xC0C2C3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:64 LDX #0
    // Overlapping static entry reached from 0xC0C2C3.
    case 0xC0C2C5: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C0C251.asm:65 STX @LOCAL00
    case 0xC0C2C6: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0C251.asm:66 BRA @UNKNOWN2
    case 0xC0C2C8: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/unknown/C0/C0C251.asm:68 LDA @LOCAL01
    case 0xC0C2CA: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0C251.asm:69 PHA
    case 0xC0C2CC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:70 LDX @VIRTUAL02
    case 0xC0C2CD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C251.asm:71 LDA __BSS_START__,X
    case 0xC0C2CF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:72 PLX
    case 0xC0C2D2: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:73 STA __BSS_START__,X
    case 0xC0C2D3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:74 LDA @LOCAL01
    case 0xC0C2D6: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0C251.asm:75 PHA
    case 0xC0C2D8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:76 LDX @VIRTUAL02
    case 0xC0C2D9: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C251.asm:77 LDA __BSS_START__+2,X
    case 0xC0C2DB: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C0/C0C251.asm:78 PLX
    case 0xC0C2DE: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:79 STA __BSS_START__+2,X
    case 0xC0C2DF: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/unknown/C0/C0C251.asm:80 LDA @VIRTUAL02
    case 0xC0C2E2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0C251.asm:81 SEC
    case 0xC0C2E4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:82 SBC #4
    case 0xC0C2E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/unknown/C0/C0C251.asm:82 SBC #4
    // Overlapping static entry reached from 0xC0C2E5.
    case 0xC0C2E7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0C251.asm:83 STA @VIRTUAL02
    case 0xC0C2E8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C251.asm:84 LDA @LOCAL01
    case 0xC0C2EA: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0C251.asm:85 INC
    case 0xC0C2EC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:86 INC
    case 0xC0C2ED: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:87 INC
    case 0xC0C2EE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:88 INC
    case 0xC0C2EF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:89 STA @LOCAL01
    case 0xC0C2F0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0C251.asm:90 DEY
    case 0xC0C2F2: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:91 LDX @LOCAL00
    case 0xC0C2F3: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0C251.asm:92 INX
    case 0xC0C2F5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0C251.asm:93 STX @LOCAL00
    case 0xC0C2F6: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0C251.asm:95 CPY #0
    case 0xC0C2F8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:95 CPY #0
    // Overlapping static entry reached from 0xC0C2F8.
    case 0xC0C2FA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0C251.asm:96 BEQ @UNKNOWN3
    case 0xC0C2FB: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0C251.asm:97 CPX #20
    case 0xC0C2FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000014, 2); else cpu.execute_instruction<0xE0>(0x000014, 3); return true;
    // src/unknown/C0/C0C251.asm:97 CPX #20
    // Overlapping static entry reached from 0xC0C2FD.
    case 0xC0C2FF: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0C251.asm:98 BCC @UNKNOWN1
    case 0xC0C300: cpu.execute_instruction<0x90>(0x0000C8, 2); return true;
    // src/unknown/C0/C0C251.asm:100 LDA #0
    case 0xC0C302: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C251.asm:100 LDA #0
    // Overlapping static entry reached from 0xC0C302.
    case 0xC0C304: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C251.asm:101 BRA @UNKNOWN5
    case 0xC0C305: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0C251.asm:103 LDA #1
    case 0xC0C307: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0C251.asm:103 LDA #1
    // Overlapping static entry reached from 0xC0C307.
    case 0xC0C309: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C251.asm:105 END_C_FUNCTION
    case 0xC0C30A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C251.asm:105 END_C_FUNCTION
    case 0xC0C30B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C30C.asm (unresolved).
bool execute_unresolved_c0_c0c30c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C30C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C30C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C30C.asm:8 END_STACK_VARS
    case 0xC0C30E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0C30C.asm:8 END_STACK_VARS
    case 0xC0C30F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C30C.asm:8 END_STACK_VARS
    case 0xC0C310: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C30C.asm:8 END_STACK_VARS
    case 0xC0C311: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C30C.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C311.
    case 0xC0C313: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C30C.asm:8 END_STACK_VARS
    case 0xC0C314: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0C30C.asm:8 END_STACK_VARS
    case 0xC0C315: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0C30C.asm:9 TAY
    case 0xC0C316: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0C30C.asm:10 STY @LOCAL01
    case 0xC0C317: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C0C30C.asm:11 TYA
    case 0xC0C319: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0C30C.asm:12 ASL
    case 0xC0C31A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C30C.asm:13 TAX
    case 0xC0C31B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C30C.asm:14 STX @LOCAL00
    case 0xC0C31C: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0C30C.asm:15 LDA ENTITY_NPC_IDS,X
    case 0xC0C31E: cpu.execute_instruction<0xBD>(0x002C9A, 3); return true;
    // src/unknown/C0/C0C30C.asm:16 STA @VIRTUAL04
    case 0xC0C321: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C30C.asm:17 ASL
    case 0xC0C323: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C30C.asm:18 ASL
    case 0xC0C324: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C30C.asm:19 ASL
    case 0xC0C325: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C30C.asm:20 ASL
    case 0xC0C326: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C30C.asm:21 ADC @VIRTUAL04
    case 0xC0C327: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C0C30C.asm:22 CLC
    case 0xC0C329: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C30C.asm:23 ADC #npc_config::event_flag
    case 0xC0C32A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/unknown/C0/C0C30C.asm:23 ADC #npc_config::event_flag
    // Overlapping static entry reached from 0xC0C32A.
    case 0xC0C32C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C0C30C.asm:24 TAX
    case 0xC0C32D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C30C.asm:25 LDA f:NPC_CONFIG_TABLE,X
    case 0xC0C32E: cpu.execute_instruction<0xBF>(0xCF8985, 4); return true;
    // src/unknown/C0/C0C30C.asm:26 JSL GET_EVENT_FLAG
    case 0xC0C332: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/unknown/C0/C0C30C.asm:27 CMP #0
    case 0xC0C336: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0C30C.asm:27 CMP #0
    // Overlapping static entry reached from 0xC0C336.
    case 0xC0C338: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0C30C.asm:28 BEQ @UNKNOWN0
    case 0xC0C339: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C0C30C.asm:29 LDX @LOCAL00
    case 0xC0C33B: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0C30C.asm:30 STZ ENTITY_DIRECTIONS,X
    case 0xC0C33D: cpu.execute_instruction<0x9E>(0x002AF6, 3); return true;
    // src/unknown/C0/C0C30C.asm:31 BRA @UNKNOWN1
    case 0xC0C340: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C0/C0C30C.asm:33 LDA #DIRECTION::DOWN
    case 0xC0C342: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C0/C0C30C.asm:33 LDA #DIRECTION::DOWN
    // Overlapping static entry reached from 0xC0C342.
    case 0xC0C344: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C0C30C.asm:34 LDX @LOCAL00
    case 0xC0C345: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0C30C.asm:35 STA ENTITY_DIRECTIONS,X
    case 0xC0C347: cpu.execute_instruction<0x9D>(0x002AF6, 3); return true;
    // src/unknown/C0/C0C30C.asm:37 LDY @LOCAL01
    case 0xC0C34A: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C0C30C.asm:38 TYA
    case 0xC0C34C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0C30C.asm:39 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC0C34D: cpu.execute_instruction<0x22>(0xC0A48F, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C30C.asm:40 END_C_FUNCTION
    case 0xC0C351: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C30C.asm:40 END_C_FUNCTION
    case 0xC0C352: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C353.asm (unresolved).
bool execute_unresolved_c0_c0c353_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0C353.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0C353: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0C353.asm:4 LDA CURRENT_ENTITY_SLOT
    case 0xC0C355: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0C353.asm:5 JSL UNKNOWN_C0C30C
    case 0xC0C358: cpu.execute_instruction<0x22>(0xC0C30C, 4); return true;
    // src/unknown/C0/C0C353.asm:6 RTL
    case 0xC0C35C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C35D.asm (unresolved).
bool execute_unresolved_c0_c0c35d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0C35D.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0C35D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0C35D.asm:4 LDA GAME_STATE + game_state::unknown90
    case 0xC0C35F: cpu.execute_instruction<0xAD>(0x009885, 3); return true;
    // src/unknown/C0/C0C35D.asm:5 RTL
    case 0xC0C362: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C363.asm (unresolved).
bool execute_unresolved_c0_c0c363_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C363.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C363: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C363.asm:7 END_STACK_VARS
    case 0xC0C365: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C363.asm:7 END_STACK_VARS
    case 0xC0C366: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C363.asm:7 END_STACK_VARS
    case 0xC0C367: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C363.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C367.
    case 0xC0C369: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C363.asm:7 END_STACK_VARS
    case 0xC0C36A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC0C36B: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0C363.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C369.
    case 0xC0C36D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:9 ASL
    case 0xC0C36E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:10 TAX
    case 0xC0C36F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:11 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0C370: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C0C363.asm:12 SEC
    case 0xC0C373: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:13 SBC ENTITY_ABS_X_TABLE,X
    case 0xC0C374: cpu.execute_instruction<0xFD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0C363.asm:14 STA @VIRTUAL02
    case 0xC0C377: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C363.asm:15 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC0C379: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C0/C0C363.asm:16 SEC
    case 0xC0C37C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:17 SBC ENTITY_ABS_Y_TABLE,X
    case 0xC0C37D: cpu.execute_instruction<0xFD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0C363.asm:18 STA @LOCAL00
    case 0xC0C380: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C363.asm:19 STA @VIRTUAL04
    case 0xC0C382: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C363.asm:20 LDA #0
    case 0xC0C384: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C363.asm:20 LDA #0
    // Overlapping static entry reached from 0xC0C384.
    case 0xC0C386: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0C363.asm:21 CLC
    case 0xC0C387: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:22 SBC @VIRTUAL04
    case 0xC0C388: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0C363.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC0C38A: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0C363.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC0C38C: cpu.execute_instruction<0x10>(0x00000E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0C363.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC0C38E: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0C363.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC0C390: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/unknown/C0/C0C363.asm:24 LDA @LOCAL00
    case 0xC0C392: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C363.asm:25 EOR #$FFFF
    case 0xC0C394: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C363.asm:25 EOR #$FFFF
    // Overlapping static entry reached from 0xC0C394.
    case 0xC0C396: cpu.execute_instruction<0xFF>(0x04851A, 4); return true;
    // src/unknown/C0/C0C363.asm:26 INC
    case 0xC0C397: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:27 STA @VIRTUAL04
    case 0xC0C398: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C363.asm:28 BRA @UNKNOWN3
    case 0xC0C39A: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C0/C0C363.asm:30 LDA @LOCAL00
    case 0xC0C39C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C363.asm:31 STA @VIRTUAL04
    case 0xC0C39E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C363.asm:33 LDA #0
    case 0xC0C3A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C363.asm:33 LDA #0
    // Overlapping static entry reached from 0xC0C3A0.
    case 0xC0C3A2: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0C363.asm:34 CLC
    case 0xC0C3A3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:35 SBC @VIRTUAL02
    case 0xC0C3A4: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0C363.asm:36 BRANCHLTEQS @UNKNOWN6
    case 0xC0C3A6: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0C363.asm:36 BRANCHLTEQS @UNKNOWN6
    case 0xC0C3A8: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0C363.asm:36 BRANCHLTEQS @UNKNOWN6
    // Overlapping static entry reached from 0xC4E597.
    case 0xC0C3A9: cpu.execute_instruction<0x0C>(0x000280, 3); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0C363.asm:36 BRANCHLTEQS @UNKNOWN6
    case 0xC0C3AA: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0C363.asm:36 BRANCHLTEQS @UNKNOWN6
    case 0xC0C3AC: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // src/unknown/C0/C0C363.asm:37 LDA @VIRTUAL02
    case 0xC0C3AE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0C363.asm:38 EOR #$FFFF
    case 0xC0C3B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C363.asm:38 EOR #$FFFF
    // Overlapping static entry reached from 0xC0C3B0.
    case 0xC0C3B2: cpu.execute_instruction<0xFF>(0x02801A, 4); return true;
    // src/unknown/C0/C0C363.asm:39 INC
    case 0xC0C3B3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:40 BRA @UNKNOWN7
    case 0xC0C3B4: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C0/C0C363.asm:42 LDA @VIRTUAL02
    case 0xC0C3B6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0C363.asm:44 CLC
    case 0xC0C3B8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:45 ADC @VIRTUAL04
    case 0xC0C3B9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C0C363.asm:46 STA @LOCAL00
    case 0xC0C3BB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C363.asm:47 CLC
    case 0xC0C3BD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:48 SBC #256
    case 0xC0C3BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000100, 3); return true;
    // src/unknown/C0/C0C363.asm:48 SBC #256
    // Overlapping static entry reached from 0xC0C3BE.
    case 0xC0C3C0: cpu.execute_instruction<0x01>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0C363.asm:49 BRANCHLTEQS @UNKNOWN10
    case 0xC0C3C1: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0C363.asm:49 BRANCHLTEQS @UNKNOWN10
    // Overlapping static entry reached from 0xC0C3C0.
    case 0xC0C3C2: cpu.execute_instruction<0x04>(0x000010, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0C363.asm:49 BRANCHLTEQS @UNKNOWN10
    case 0xC0C3C3: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0C363.asm:49 BRANCHLTEQS @UNKNOWN10
    // Overlapping static entry reached from 0xC0C3C2.
    case 0xC0C3C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000080, 2); else cpu.execute_instruction<0x09>(0x000280, 3); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0C363.asm:49 BRANCHLTEQS @UNKNOWN10
    case 0xC0C3C5: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0C363.asm:49 BRANCHLTEQS @UNKNOWN10
    // Overlapping static entry reached from 0xC0C3C4.
    case 0xC0C3C6: cpu.execute_instruction<0x02>(0x000030, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0C363.asm:49 BRANCHLTEQS @UNKNOWN10
    case 0xC0C3C7: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C0/C0C363.asm:50 LDA #3
    case 0xC0C3C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C0C363.asm:50 LDA #3
    // Overlapping static entry reached from 0xC0C3C9.
    case 0xC0C3CB: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C363.asm:51 BRA @UNKNOWN17
    case 0xC0C3CC: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C0/C0C363.asm:53 LDA @LOCAL00
    case 0xC0C3CE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C363.asm:54 CLC
    case 0xC0C3D0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:55 SBC #160
    case 0xC0C3D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000A0, 2); else cpu.execute_instruction<0xE9>(0x0000A0, 3); return true;
    // src/unknown/C0/C0C363.asm:55 SBC #160
    // Overlapping static entry reached from 0xC0C3D1.
    case 0xC0C3D3: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0C363.asm:56 BRANCHLTEQS @UNKNOWN13
    case 0xC0C3D4: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0C363.asm:56 BRANCHLTEQS @UNKNOWN13
    case 0xC0C3D6: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0C363.asm:56 BRANCHLTEQS @UNKNOWN13
    case 0xC0C3D8: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0C363.asm:56 BRANCHLTEQS @UNKNOWN13
    case 0xC0C3DA: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C0/C0C363.asm:57 LDA #2
    case 0xC0C3DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0C363.asm:57 LDA #2
    // Overlapping static entry reached from 0xC0C3DC.
    case 0xC0C3DE: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C363.asm:58 BRA @UNKNOWN17
    case 0xC0C3DF: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C0/C0C363.asm:60 LDA @LOCAL00
    case 0xC0C3E1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C363.asm:61 CLC
    case 0xC0C3E3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C363.asm:62 SBC #128
    case 0xC0C3E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C0/C0C363.asm:62 SBC #128
    // Overlapping static entry reached from 0xC0C3E4.
    case 0xC0C3E6: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0C363.asm:63 BRANCHLTEQS @UNKNOWN16
    case 0xC0C3E7: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0C363.asm:63 BRANCHLTEQS @UNKNOWN16
    case 0xC0C3E9: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0C363.asm:63 BRANCHLTEQS @UNKNOWN16
    case 0xC0C3EB: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0C363.asm:63 BRANCHLTEQS @UNKNOWN16
    case 0xC0C3ED: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C0/C0C363.asm:64 LDA #1
    case 0xC0C3EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0C363.asm:64 LDA #1
    // Overlapping static entry reached from 0xC0C3EF.
    case 0xC0C3F1: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C363.asm:65 BRA @UNKNOWN17
    case 0xC0C3F2: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0C363.asm:67 LDA #0
    case 0xC0C3F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C363.asm:67 LDA #0
    // Overlapping static entry reached from 0xC0C3F4.
    case 0xC0C3F6: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C363.asm:69 END_C_FUNCTION
    case 0xC0C3F7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C363.asm:69 END_C_FUNCTION
    case 0xC0C3F8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C3F9.asm (unresolved).
bool execute_unresolved_c0_c0c3f9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C3F9.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C3F9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C3F9.asm:7 END_STACK_VARS
    case 0xC0C3FB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C3F9.asm:7 END_STACK_VARS
    case 0xC0C3FC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C3F9.asm:7 END_STACK_VARS
    case 0xC0C3FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C3F9.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C3FD.
    case 0xC0C3FF: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C3F9.asm:7 END_STACK_VARS
    case 0xC0C400: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC0C401: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0C3F9.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C3FF.
    case 0xC0C403: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:9 ASL
    case 0xC0C404: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:10 TAX
    case 0xC0C405: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:11 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0C406: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C0C3F9.asm:12 SEC
    case 0xC0C409: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:13 SBC ENTITY_ABS_X_TABLE,X
    case 0xC0C40A: cpu.execute_instruction<0xFD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0C3F9.asm:14 STA @VIRTUAL02
    case 0xC0C40D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C3F9.asm:15 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC0C40F: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C0/C0C3F9.asm:16 SEC
    case 0xC0C412: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:17 SBC ENTITY_ABS_Y_TABLE,X
    case 0xC0C413: cpu.execute_instruction<0xFD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0C3F9.asm:18 STA @LOCAL00
    case 0xC0C416: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C3F9.asm:19 STA @VIRTUAL04
    case 0xC0C418: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C3F9.asm:20 LDA #0
    case 0xC0C41A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C3F9.asm:20 LDA #0
    // Overlapping static entry reached from 0xC0C41A.
    case 0xC0C41C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0C3F9.asm:21 CLC
    case 0xC0C41D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:22 SBC @VIRTUAL04
    case 0xC0C41E: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0C3F9.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC0C420: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0C3F9.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC0C422: cpu.execute_instruction<0x10>(0x00000E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0C3F9.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC0C424: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0C3F9.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC0C426: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/unknown/C0/C0C3F9.asm:24 LDA @LOCAL00
    case 0xC0C428: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C3F9.asm:25 EOR #$FFFF
    case 0xC0C42A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C3F9.asm:25 EOR #$FFFF
    // Overlapping static entry reached from 0xC0C42A.
    case 0xC0C42C: cpu.execute_instruction<0xFF>(0x04851A, 4); return true;
    // src/unknown/C0/C0C3F9.asm:26 INC
    case 0xC0C42D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:27 STA @VIRTUAL04
    case 0xC0C42E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C3F9.asm:28 BRA @UNKNOWN3
    case 0xC0C430: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C0/C0C3F9.asm:30 LDA @LOCAL00
    case 0xC0C432: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C3F9.asm:31 STA @VIRTUAL04
    case 0xC0C434: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C3F9.asm:33 LDA #0
    case 0xC0C436: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C3F9.asm:33 LDA #0
    // Overlapping static entry reached from 0xC0C436.
    case 0xC0C438: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0C3F9.asm:34 CLC
    case 0xC0C439: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:35 SBC @VIRTUAL02
    case 0xC0C43A: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0C3F9.asm:36 BRANCHLTEQS @UNKNOWN6
    case 0xC0C43C: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0C3F9.asm:36 BRANCHLTEQS @UNKNOWN6
    case 0xC0C43E: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0C3F9.asm:36 BRANCHLTEQS @UNKNOWN6
    case 0xC0C440: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0C3F9.asm:36 BRANCHLTEQS @UNKNOWN6
    case 0xC0C442: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // src/unknown/C0/C0C3F9.asm:37 LDA @VIRTUAL02
    case 0xC0C444: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0C3F9.asm:38 EOR #$FFFF
    case 0xC0C446: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C3F9.asm:38 EOR #$FFFF
    // Overlapping static entry reached from 0xC0C446.
    case 0xC0C448: cpu.execute_instruction<0xFF>(0x02801A, 4); return true;
    // src/unknown/C0/C0C3F9.asm:39 INC
    case 0xC0C449: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:40 BRA @UNKNOWN7
    case 0xC0C44A: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C0/C0C3F9.asm:42 LDA @VIRTUAL02
    case 0xC0C44C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0C3F9.asm:44 CLC
    case 0xC0C44E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:45 ADC @VIRTUAL04
    case 0xC0C44F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C0C3F9.asm:46 STA @LOCAL00
    case 0xC0C451: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C3F9.asm:47 CLC
    case 0xC0C453: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:48 SBC #128
    case 0xC0C454: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C0/C0C3F9.asm:48 SBC #128
    // Overlapping static entry reached from 0xC0C454.
    case 0xC0C456: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0C3F9.asm:49 BRANCHLTEQS @UNKNOWN10
    case 0xC0C457: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0C3F9.asm:49 BRANCHLTEQS @UNKNOWN10
    case 0xC0C459: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0C3F9.asm:49 BRANCHLTEQS @UNKNOWN10
    case 0xC0C45B: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0C3F9.asm:49 BRANCHLTEQS @UNKNOWN10
    case 0xC0C45D: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C0/C0C3F9.asm:50 LDA #3
    case 0xC0C45F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C0C3F9.asm:50 LDA #3
    // Overlapping static entry reached from 0xC0C45F.
    case 0xC0C461: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C3F9.asm:51 BRA @UNKNOWN17
    case 0xC0C462: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C0/C0C3F9.asm:53 LDA @LOCAL00
    case 0xC0C464: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C3F9.asm:54 CLC
    case 0xC0C466: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:55 SBC #80
    case 0xC0C467: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000050, 2); else cpu.execute_instruction<0xE9>(0x000050, 3); return true;
    // src/unknown/C0/C0C3F9.asm:55 SBC #80
    // Overlapping static entry reached from 0xC0C467.
    case 0xC0C469: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0C3F9.asm:56 BRANCHLTEQS @UNKNOWN13
    case 0xC0C46A: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0C3F9.asm:56 BRANCHLTEQS @UNKNOWN13
    case 0xC0C46C: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0C3F9.asm:56 BRANCHLTEQS @UNKNOWN13
    case 0xC0C46E: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0C3F9.asm:56 BRANCHLTEQS @UNKNOWN13
    case 0xC0C470: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C0/C0C3F9.asm:57 LDA #2
    case 0xC0C472: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0C3F9.asm:57 LDA #2
    // Overlapping static entry reached from 0xC0C472.
    case 0xC0C474: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C3F9.asm:58 BRA @UNKNOWN17
    case 0xC0C475: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C0/C0C3F9.asm:60 LDA @LOCAL00
    case 0xC0C477: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C3F9.asm:61 CLC
    case 0xC0C479: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C3F9.asm:62 SBC #64
    case 0xC0C47A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000040, 2); else cpu.execute_instruction<0xE9>(0x000040, 3); return true;
    // src/unknown/C0/C0C3F9.asm:62 SBC #64
    // Overlapping static entry reached from 0xC0C47A.
    case 0xC0C47C: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0C3F9.asm:63 BRANCHLTEQS @UNKNOWN16
    case 0xC0C47D: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0C3F9.asm:63 BRANCHLTEQS @UNKNOWN16
    case 0xC0C47F: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0C3F9.asm:63 BRANCHLTEQS @UNKNOWN16
    case 0xC0C481: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0C3F9.asm:63 BRANCHLTEQS @UNKNOWN16
    case 0xC0C483: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C0/C0C3F9.asm:64 LDA #1
    case 0xC0C485: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0C3F9.asm:64 LDA #1
    // Overlapping static entry reached from 0xC0C485.
    case 0xC0C487: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C3F9.asm:65 BRA @UNKNOWN17
    case 0xC0C488: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0C3F9.asm:67 LDA #0
    case 0xC0C48A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C3F9.asm:67 LDA #0
    // Overlapping static entry reached from 0xC0C48A.
    case 0xC0C48C: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C3F9.asm:69 END_C_FUNCTION
    case 0xC0C48D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C3F9.asm:69 END_C_FUNCTION
    case 0xC0C48E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C48F.asm (unresolved).
bool execute_unresolved_c0_c0c48f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0C48F.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0C48F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0C48F.asm:4 LDA CURRENT_ENTITY_SLOT
    case 0xC0C491: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0C48F.asm:5 ASL
    case 0xC0C494: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C48F.asm:6 TAX
    case 0xC0C495: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C48F.asm:7 LDA ENTITY_PATHFINDING_STATES,X
    case 0xC0C496: cpu.execute_instruction<0xBD>(0x002C5E, 3); return true;
    // src/unknown/C0/C0C48F.asm:8 BEQ @UNKNOWN0
    case 0xC0C499: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0C48F.asm:9 LDA #$0000
    case 0xC0C49B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C48F.asm:9 LDA #$0000
    // Overlapping static entry reached from 0xC0C49B.
    case 0xC0C49D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C48F.asm:10 BRA @UNKNOWN2
    case 0xC0C49E: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C0/C0C48F.asm:12 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC0C4A0: cpu.execute_instruction<0xAD>(0x005D58, 3); return true;
    // src/unknown/C0/C0C48F.asm:13 BNE @UNKNOWN1
    case 0xC0C4A3: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0C48F.asm:14 JSL UNKNOWN_C0C363
    case 0xC0C4A5: cpu.execute_instruction<0x22>(0xC0C363, 4); return true;
    // src/unknown/C0/C0C48F.asm:15 BRA @UNKNOWN2
    case 0xC0C4A9: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0C48F.asm:17 LDA #$FFFF
    case 0xC0C4AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C48F.asm:17 LDA #$FFFF
    // Overlapping static entry reached from 0xC0C4AB.
    case 0xC0C4AD: cpu.execute_instruction<0xFF>(0x31C26B, 4); return true;
    // src/unknown/C0/C0C48F.asm:19 RTL
    case 0xC0C4AE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C4AF.asm (unresolved).
bool execute_unresolved_c0_c0c4af_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0C4AF.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0C4AF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0C4AF.asm:4 LDA CURRENT_ENTITY_SLOT
    case 0xC0C4B1: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0C4AF.asm:5 ASL
    case 0xC0C4B4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C4AF.asm:6 TAX
    case 0xC0C4B5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C4AF.asm:7 LDA ENTITY_PATHFINDING_STATES,X
    case 0xC0C4B6: cpu.execute_instruction<0xBD>(0x002C5E, 3); return true;
    // src/unknown/C0/C0C4AF.asm:8 BEQ @UNKNOWN0
    case 0xC0C4B9: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0C4AF.asm:9 LDA #$0000
    case 0xC0C4BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C4AF.asm:9 LDA #$0000
    // Overlapping static entry reached from 0xC0C4BB.
    case 0xC0C4BD: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C4AF.asm:10 BRA @UNKNOWN2
    case 0xC0C4BE: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C0/C0C4AF.asm:12 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC0C4C0: cpu.execute_instruction<0xAD>(0x005D58, 3); return true;
    // src/unknown/C0/C0C4AF.asm:13 BNE @UNKNOWN1
    case 0xC0C4C3: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0C4AF.asm:14 JSL UNKNOWN_C0C3F9
    case 0xC0C4C5: cpu.execute_instruction<0x22>(0xC0C3F9, 4); return true;
    // src/unknown/C0/C0C4AF.asm:15 BRA @UNKNOWN2
    case 0xC0C4C9: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0C4AF.asm:17 LDA #$FFFF
    case 0xC0C4CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C4AF.asm:19 RTL
    case 0xC0C4CE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C524.asm (unresolved).
bool execute_unresolved_c0_c0c524_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C524.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C524: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C524.asm:9 END_STACK_VARS
    case 0xC0C526: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C524.asm:9 END_STACK_VARS
    case 0xC0C527: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C524.asm:9 END_STACK_VARS
    case 0xC0C528: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C524.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C528.
    case 0xC0C52A: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C524.asm:9 END_STACK_VARS
    case 0xC0C52B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC0C52C: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0C524.asm:10 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C52A.
    case 0xC0C52E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:11 ASL
    case 0xC0C52F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:12 TAX
    case 0xC0C530: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:13 LDA ENTITY_NPC_IDS,X
    case 0xC0C531: cpu.execute_instruction<0xBD>(0x002C9A, 3); return true;
    // src/unknown/C0/C0C524.asm:14 AND #$7FFF
    case 0xC0C534: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C0C524.asm:14 AND #$7FFF
    // Overlapping static entry reached from 0xC0C534.
    case 0xC0C536: cpu.execute_instruction<0x7F>(0xA91285, 4); return true;
    // src/unknown/C0/C0C524.asm:15 STA @LOCAL02
    case 0xC0C537: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0C524.asm:16 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    case 0xC0C539: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00C60D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0C524.asm:16 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0C536.
    case 0xC0C53A: cpu.execute_instruction<0x0D>(0x0085C6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0C524.asm:16 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0C539.
    case 0xC0C53B: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0C524.asm:16 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    case 0xC0C53C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0C524.asm:16 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0C53B.
    case 0xC0C53D: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0C524.asm:16 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    case 0xC0C53E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0C524.asm:16 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0C53D.
    case 0xC0C53F: cpu.execute_instruction<0xD0>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0C524.asm:16 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0C53E.
    case 0xC0C540: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0C524.asm:16 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    case 0xC0C541: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0C524.asm:17 LDA @LOCAL02
    case 0xC0C543: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0C524.asm:18 ASL
    case 0xC0C545: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:19 ASL
    case 0xC0C546: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:20 ASL
    case 0xC0C547: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:21 TAX
    case 0xC0C548: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:22 STX @LOCAL01
    case 0xC0C549: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0C524.asm:23 TXA
    case 0xC0C54B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:508 INC
    // Macro caller: src/unknown/C0/C0C524.asm:24 OPTIMIZED_ADD battle_entry_ptr_entry::run_away_flag
    case 0xC0C54C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:509 INC
    // Macro caller: src/unknown/C0/C0C524.asm:24 OPTIMIZED_ADD battle_entry_ptr_entry::run_away_flag
    case 0xC0C54D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:510 INC
    // Macro caller: src/unknown/C0/C0C524.asm:24 OPTIMIZED_ADD battle_entry_ptr_entry::run_away_flag
    case 0xC0C54E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:511 INC
    // Macro caller: src/unknown/C0/C0C524.asm:24 OPTIMIZED_ADD battle_entry_ptr_entry::run_away_flag
    case 0xC0C54F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C0C524.asm:25 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC0C550: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C0C524.asm:25 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC0C552: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C0C524.asm:25 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC0C554: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C0C524.asm:25 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC0C556: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C0/C0C524.asm:26 CLC
    case 0xC0C558: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:27 ADC @VIRTUAL0A
    case 0xC0C559: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C0C524.asm:28 STA @VIRTUAL0A
    case 0xC0C55B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C0C524.asm:29 LDA [@VIRTUAL0A]
    case 0xC0C55D: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C0/C0C524.asm:30 BEQ @UNKNOWN0
    case 0xC0C55F: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/C0/C0C524.asm:31 JSL GET_EVENT_FLAG
    case 0xC0C561: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/unknown/C0/C0C524.asm:32 STA @LOCAL00
    case 0xC0C565: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C524.asm:33 LDX @LOCAL01
    case 0xC0C567: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0C524.asm:34 TXA
    case 0xC0C569: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:35 CLC
    case 0xC0C56A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:36 ADC #battle_entry_ptr_entry::run_away_flag_state
    case 0xC0C56B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/unknown/C0/C0C524.asm:36 ADC #battle_entry_ptr_entry::run_away_flag_state
    // Overlapping static entry reached from 0xC0C56B.
    case 0xC0C56D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0C524.asm:37 CLC
    case 0xC0C56E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:38 ADC @VIRTUAL06
    case 0xC0C56F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0C524.asm:39 STA @VIRTUAL06
    case 0xC0C571: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0C524.asm:40 LDA [@VIRTUAL06]
    case 0xC0C573: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0C524.asm:41 AND #$00FF
    case 0xC0C575: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0C524.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC0C575.
    case 0xC0C577: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0C524.asm:42 STA @VIRTUAL02
    case 0xC0C578: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C524.asm:43 LDA @LOCAL00
    case 0xC0C57A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C524.asm:44 CMP @VIRTUAL02
    case 0xC0C57C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C0C524.asm:45 BNE @UNKNOWN0
    case 0xC0C57E: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0C524.asm:46 LDA #1
    case 0xC0C580: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0C524.asm:46 LDA #1
    // Overlapping static entry reached from 0xC0C580.
    case 0xC0C582: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0C524.asm:47 JMP @UNKNOWN4
    case 0xC0C583: cpu.execute_instruction<0x4C>(0x00C606, 3); return true;
    // src/unknown/C0/C0C524.asm:49 JSL UNKNOWN_C0546B
    case 0xC0C586: cpu.execute_instruction<0x22>(0xC0546B, 4); return true;
    // src/unknown/C0/C0C524.asm:50 TAY
    case 0xC0C58A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:51 STY @LOCAL00
    case 0xC0C58B: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C0C524.asm:52 LDA CURRENT_ENTITY_SLOT
    case 0xC0C58D: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0C524.asm:53 ASL
    case 0xC0C590: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:54 TAX
    case 0xC0C591: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:55 STX @LOCAL02
    case 0xC0C592: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C0C524.asm:56 LDA ENTITY_ENEMY_IDS,X
    case 0xC0C594: cpu.execute_instruction<0xBD>(0x002D12, 3); return true;
    // src/unknown/C0/C0C524.asm:57 LDY #.SIZEOF(enemy_data)
    case 0xC0C597: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C0C524.asm:57 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC0C597.
    case 0xC0C599: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0C524.asm:58 JSL MULT168
    case 0xC0C59A: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C0C524.asm:59 CLC
    case 0xC0C59E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:60 ADC #enemy_data::level
    case 0xC0C59F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000036, 2); else cpu.execute_instruction<0x69>(0x000036, 3); return true;
    // src/unknown/C0/C0C524.asm:60 ADC #enemy_data::level
    // Overlapping static entry reached from 0xC0C59F.
    case 0xC0C5A1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C0C524.asm:61 TAX
    case 0xC0C5A2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:62 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC0C5A3: cpu.execute_instruction<0xBF>(0xD59589, 4); return true;
    // src/unknown/C0/C0C524.asm:63 AND #$00FF
    case 0xC0C5A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0C524.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC0C5A7.
    case 0xC0C5A9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0C524.asm:64 STA @LOCAL01
    case 0xC0C5AA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/unknown/C0/C0C524.asm:65 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC0C5AC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/unknown/C0/C0C524.asm:65 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC0C5AE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/unknown/C0/C0C524.asm:65 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC0C5AF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/unknown/C0/C0C524.asm:65 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC0C5B0: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/unknown/C0/C0C524.asm:65 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC0C5B2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:66 STA @VIRTUAL02
    case 0xC0C5B3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C524.asm:67 LDY @LOCAL00
    case 0xC0C5B5: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C0C524.asm:68 TYA
    case 0xC0C5B7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:69 CMP @VIRTUAL02
    case 0xC0C5B8: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0C524.asm:70 BLTEQ @UNKNOWN1
    case 0xC0C5BA: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0C524.asm:70 BLTEQ @UNKNOWN1
    case 0xC0C5BC: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0C524.asm:71 LDA #1
    case 0xC0C5BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0C524.asm:71 LDA #1
    // Overlapping static entry reached from 0xC0C5BE.
    case 0xC0C5C0: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C524.asm:72 BRA @UNKNOWN4
    case 0xC0C5C1: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // src/unknown/C0/C0C524.asm:74 LDA @LOCAL01
    case 0xC0C5C3: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0C524.asm:75 ASL
    case 0xC0C5C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:76 ASL
    case 0xC0C5C6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:77 ASL
    case 0xC0C5C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:78 STA @VIRTUAL02
    case 0xC0C5C8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C524.asm:79 TYA
    case 0xC0C5CA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:80 CMP @VIRTUAL02
    case 0xC0C5CB: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0C524.asm:81 BLTEQ @UNKNOWN2
    case 0xC0C5CD: cpu.execute_instruction<0x90>(0x000011, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0C524.asm:81 BLTEQ @UNKNOWN2
    case 0xC0C5CF: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C0/C0C524.asm:82 LDX @LOCAL02
    case 0xC0C5D1: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C0C524.asm:83 LDA ENTITY_WEAK_ENEMY_VALUE,X
    case 0xC0C5D3: cpu.execute_instruction<0xBD>(0x003186, 3); return true;
    // src/unknown/C0/C0C524.asm:84 CMP #192
    case 0xC0C5D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C0, 2); else cpu.execute_instruction<0xC9>(0x0000C0, 3); return true;
    // src/unknown/C0/C0C524.asm:84 CMP #192
    // Overlapping static entry reached from 0xC0C5D6.
    case 0xC0C5D8: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C0C524.asm:85 BCS @UNKNOWN2
    case 0xC0C5D9: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C0C524.asm:86 LDA #1
    case 0xC0C5DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0C524.asm:86 LDA #1
    // Overlapping static entry reached from 0xC0C655.
    case 0xC0C5DC: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C0C524.asm:86 LDA #1
    // Overlapping static entry reached from 0xC0C5DB.
    case 0xC0C5DD: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C524.asm:87 BRA @UNKNOWN4
    case 0xC0C5DE: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/unknown/C0/C0C524.asm:89 LDA @LOCAL01
    case 0xC0C5E0: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0C524.asm:90 STA @VIRTUAL04
    case 0xC0C5E2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C524.asm:91 ASL
    case 0xC0C5E4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:92 ADC @VIRTUAL04
    case 0xC0C5E5: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C0C524.asm:93 ASL
    case 0xC0C5E7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:94 STA @VIRTUAL02
    case 0xC0C5E8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C524.asm:95 TYA
    case 0xC0C5EA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:96 CMP @VIRTUAL02
    case 0xC0C5EB: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0C524.asm:97 BLTEQ @UNKNOWN3
    case 0xC0C5ED: cpu.execute_instruction<0x90>(0x000014, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0C524.asm:97 BLTEQ @UNKNOWN3
    case 0xC0C5EF: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/unknown/C0/C0C524.asm:98 LDA CURRENT_ENTITY_SLOT
    case 0xC0C5F1: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0C524.asm:99 ASL
    case 0xC0C5F4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:100 TAX
    case 0xC0C5F5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C524.asm:101 LDA ENTITY_WEAK_ENEMY_VALUE,X
    case 0xC0C5F6: cpu.execute_instruction<0xBD>(0x003186, 3); return true;
    // src/unknown/C0/C0C524.asm:102 CMP #128
    case 0xC0C5F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000080, 3); return true;
    // src/unknown/C0/C0C524.asm:102 CMP #128
    // Overlapping static entry reached from 0xC0C5F9.
    case 0xC0C5FB: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C0C524.asm:103 BCS @UNKNOWN3
    case 0xC0C5FC: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C0C524.asm:104 LDA #1
    case 0xC0C5FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0C524.asm:104 LDA #1
    // Overlapping static entry reached from 0xC0C5FE.
    case 0xC0C600: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C524.asm:105 BRA @UNKNOWN4
    case 0xC0C601: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0C524.asm:107 LDA #0
    case 0xC0C603: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C524.asm:107 LDA #0
    // Overlapping static entry reached from 0xC0C603.
    case 0xC0C605: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C524.asm:109 END_C_FUNCTION
    case 0xC0C606: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C524.asm:109 END_C_FUNCTION
    case 0xC0C607: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C615.asm (unresolved).
bool execute_unresolved_c0_c0c615_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0C615.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0C615: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0C615.asm:4 JSL UNKNOWN_C0C524
    case 0xC0C617: cpu.execute_instruction<0x22>(0xC0C524, 4); return true;
    // src/unknown/C0/C0C615.asm:5 CMP #$0000
    case 0xC0C61B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0C615.asm:5 CMP #$0000
    // Overlapping static entry reached from 0xC0C61B.
    case 0xC0C61D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0C615.asm:6 BEQ @UNKNOWN0
    case 0xC0C61E: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0C615.asm:7 JSL GET_OPPOSITE_DIRECTION_FROM_PLAYER_TO_ENTITY
    case 0xC0C620: cpu.execute_instruction<0x22>(0xC0C608, 4); return true;
    // src/unknown/C0/C0C615.asm:8 BRA @UNKNOWN1
    case 0xC0C624: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C0/C0C615.asm:10 JSL GET_DIRECTION_FROM_PLAYER_TO_ENTITY
    case 0xC0C626: cpu.execute_instruction<0x22>(0xC0C4F7, 4); return true;
    // src/unknown/C0/C0C615.asm:12 RTL
    case 0xC0C62A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C62B.asm (unresolved).
bool execute_unresolved_c0_c0c62b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C62B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C62B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C62B.asm:9 END_STACK_VARS
    case 0xC0C62D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C62B.asm:9 END_STACK_VARS
    case 0xC0C62E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C62B.asm:9 END_STACK_VARS
    case 0xC0C62F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C62B.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C62F.
    case 0xC0C631: cpu.execute_instruction<0xFF>(0x42AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C62B.asm:9 END_STACK_VARS
    case 0xC0C632: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:10 LDX CURRENT_ENTITY_SLOT
    case 0xC0C633: cpu.execute_instruction<0xAE>(0x001A42, 3); return true;
    // src/unknown/C0/C0C62B.asm:10 LDX CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C631.
    case 0xC0C635: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:11 STX @LOCAL02
    case 0xC0C636: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C0C62B.asm:12 LDA #0
    case 0xC0C638: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C62B.asm:12 LDA #0
    // Overlapping static entry reached from 0xC0C638.
    case 0xC0C63A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0C62B.asm:13 STA @VIRTUAL02
    case 0xC0C63B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C62B.asm:14 TXA
    case 0xC0C63D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:15 ASL
    case 0xC0C63E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:16 TAX
    case 0xC0C63F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:17 LDA ENTITY_NPC_IDS,X
    case 0xC0C640: cpu.execute_instruction<0xBD>(0x002C9A, 3); return true;
    // src/unknown/C0/C0C62B.asm:18 CMP #$7FFF
    case 0xC0C643: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x007FFF, 3); return true;
    // src/unknown/C0/C0C62B.asm:18 CMP #$7FFF
    // Overlapping static entry reached from 0xC0C643.
    case 0xC0C645: cpu.execute_instruction<0x7F>(0xF01090, 4); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0C62B.asm:19 BLTEQ @UNKNOWN0
    case 0xC0C646: cpu.execute_instruction<0x90>(0x000010, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0C62B.asm:19 BLTEQ @UNKNOWN0
    case 0xC0C648: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0C62B.asm:19 BLTEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC0C645.
    case 0xC0C649: cpu.execute_instruction<0x0E>(0x002422, 3); return true;
    // src/unknown/C0/C0C62B.asm:20 JSL UNKNOWN_C0C524
    case 0xC0C64A: cpu.execute_instruction<0x22>(0xC0C524, 4); return true;
    // src/unknown/C0/C0C62B.asm:20 JSL UNKNOWN_C0C524
    // Overlapping static entry reached from 0xC0C649.
    case 0xC0C64C: cpu.execute_instruction<0xC5>(0x0000C0, 2); return true;
    // src/unknown/C0/C0C62B.asm:21 CMP #0
    case 0xC0C64E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0C62B.asm:21 CMP #0
    // Overlapping static entry reached from 0xC0C64E.
    case 0xC0C650: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0C62B.asm:22 BEQ @UNKNOWN0
    case 0xC0C651: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0C62B.asm:23 LDA #$8000
    case 0xC0C653: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/unknown/C0/C0C62B.asm:23 LDA #$8000
    // Overlapping static entry reached from 0xC0C653.
    case 0xC0C655: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // src/unknown/C0/C0C62B.asm:24 STA @VIRTUAL02
    case 0xC0C656: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C62B.asm:26 LDX @LOCAL02
    case 0xC0C658: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C0C62B.asm:27 TXA
    case 0xC0C65A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:28 ASL
    case 0xC0C65B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:29 STA @LOCAL02
    case 0xC0C65C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0C62B.asm:30 TAX
    case 0xC0C65E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:31 LDA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC0C65F: cpu.execute_instruction<0xBD>(0x001002, 3); return true;
    // src/unknown/C0/C0C62B.asm:32 STA @LOCAL00
    case 0xC0C662: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C62B.asm:33 LDA @LOCAL02
    case 0xC0C664: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0C62B.asm:34 TAX
    case 0xC0C666: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:35 LDY ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC0C667: cpu.execute_instruction<0xBC>(0x000FC6, 3); return true;
    // src/unknown/C0/C0C62B.asm:36 TAX
    case 0xC0C66A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:37 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0C66B: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0C62B.asm:38 TAX
    case 0xC0C66E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:39 STX @LOCAL01
    case 0xC0C66F: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0C62B.asm:40 LDA @LOCAL02
    case 0xC0C671: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0C62B.asm:41 TAX
    case 0xC0C673: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:42 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0C674: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0C62B.asm:43 LDX @LOCAL01
    case 0xC0C677: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0C62B.asm:44 JSL UNKNOWN_C41EFF
    case 0xC0C679: cpu.execute_instruction<0x22>(0xC41EFF, 4); return true;
    // src/unknown/C0/C0C62B.asm:45 CLC
    case 0xC0C67D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C62B.asm:46 ADC @VIRTUAL02
    case 0xC0C67E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C62B.asm:47 END_C_FUNCTION
    case 0xC0C680: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C62B.asm:47 END_C_FUNCTION
    case 0xC0C681: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C6B6.asm (unresolved).
bool execute_unresolved_c0_c0c6b6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C6B6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C6B6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C6B6.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC0AB61.
    case 0xC0C6B7: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C6B6.asm:7 END_STACK_VARS
    case 0xC0C6B8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C6B6.asm:7 END_STACK_VARS
    case 0xC0C6B9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C6B6.asm:7 END_STACK_VARS
    case 0xC0C6BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C6B6.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C6BA.
    case 0xC0C6BC: cpu.execute_instruction<0xFF>(0x47AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C6B6.asm:7 END_STACK_VARS
    case 0xC0C6BD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0C6B6.asm:8 LDA PSI_TELEPORT_SPEED + fixed_point::integer
    case 0xC0C6BE: cpu.execute_instruction<0xAD>(0x009F47, 3); return true;
    // src/unknown/C0/C0C6B6.asm:8 LDA PSI_TELEPORT_SPEED + fixed_point::integer
    // Overlapping static entry reached from 0xC0C6BC.
    case 0xC0C6C0: cpu.execute_instruction<0x9F>(0x0004C9, 4); return true;
    // src/unknown/C0/C0C6B6.asm:9 CMP #04
    case 0xC0C6C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0C6B6.asm:9 CMP #04
    // Overlapping static entry reached from 0xC0C6C1.
    case 0xC0C6C3: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0C6B6.asm:10 BCC @UNKNOWN0
    case 0xC0C6C4: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/unknown/C0/C0C6B6.asm:11 LDA #.LOWORD(-1)
    case 0xC0C6C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C6B6.asm:11 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0C6C6.
    case 0xC0C6C8: cpu.execute_instruction<0xFF>(0xAD4480, 4); return true;
    // src/unknown/C0/C0C6B6.asm:12 BRA @UNKNOWN4
    case 0xC0C6C9: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/unknown/C0/C0C6B6.asm:14 LDA CURRENT_ENTITY_SLOT
    case 0xC0C6CB: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0C6B6.asm:14 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C6C8.
    case 0xC0C6CC: cpu.execute_instruction<0x42>(0x00001A, 2); return true;
    // src/unknown/C0/C0C6B6.asm:15 ASL
    case 0xC0C6CE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C6B6.asm:16 TAX
    case 0xC0C6CF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C6B6.asm:17 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0C6D0: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C0C6B6.asm:18 SEC
    case 0xC0C6D3: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C6B6.asm:19 SBC #128
    case 0xC0C6D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C0/C0C6B6.asm:19 SBC #128
    // Overlapping static entry reached from 0xC0C6D4.
    case 0xC0C6D6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0C6B6.asm:20 STA @VIRTUAL02
    case 0xC0C6D7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C6B6.asm:21 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0C6D9: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0C6B6.asm:22 SEC
    case 0xC0C6DC: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C6B6.asm:23 SBC @VIRTUAL02
    case 0xC0C6DD: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0C6B6.asm:24 STA @LOCAL00
    case 0xC0C6DF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C6B6.asm:25 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC0C6E1: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C0/C0C6B6.asm:26 SEC
    case 0xC0C6E4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C6B6.asm:27 SBC #112
    case 0xC0C6E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000070, 2); else cpu.execute_instruction<0xE9>(0x000070, 3); return true;
    // src/unknown/C0/C0C6B6.asm:27 SBC #112
    // Overlapping static entry reached from 0xC0C6E5.
    case 0xC0C6E7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0C6B6.asm:28 STA @VIRTUAL02
    case 0xC0C6E8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C6B6.asm:29 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0C6EA: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0C6B6.asm:30 SEC
    case 0xC0C6ED: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C6B6.asm:31 SBC @VIRTUAL02
    case 0xC0C6EE: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0C6B6.asm:32 TAX
    case 0xC0C6F0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C6B6.asm:33 LDA @LOCAL00
    case 0xC0C6F1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C6B6.asm:33 LDA @LOCAL00
    // Overlapping static entry reached from 0xC0C76B.
    case 0xC0C6F2: cpu.execute_instruction<0x0E>(0x00C0C9, 3); return true;
    // src/unknown/C0/C0C6B6.asm:34 CMP #.LOWORD(-64)
    // Retained frozen presentation override; see program_index.json.
    case 0xC0C6F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x00FF80, 3); return true;
    // src/unknown/C0/C0C6B6.asm:34 CMP #.LOWORD(-64)
    // Overlapping static entry reached from 0xC0C6F3.
    case 0xC0C6F5: cpu.execute_instruction<0xFF>(0xC905B0, 4); return true;
    // src/unknown/C0/C0C6B6.asm:35 BCS @UNKNOWN1
    case 0xC0C6F6: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C0C6B6.asm:36 CMP #320
    // Retained frozen presentation override; see program_index.json.
    case 0xC0C6F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000180, 3); return true;
    // src/unknown/C0/C0C6B6.asm:36 CMP #320
    // Retained frozen presentation override; see program_index.json.
    // Overlapping static entry reached from 0xC0C6F5.
    case 0xC0C6F9: cpu.execute_instruction<0x80>(0x000001, 2); return true;
    // src/unknown/C0/C0C6B6.asm:36 CMP #320
    // Overlapping static entry reached from 0xC0C6F8.
    case 0xC0C6FA: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C0/C0C6B6.asm:37 BCS @UNKNOWN3
    case 0xC0C6FB: cpu.execute_instruction<0xB0>(0x00000F, 2); return true;
    // src/unknown/C0/C0C6B6.asm:37 BCS @UNKNOWN3
    // Overlapping static entry reached from 0xC0C6FA.
    case 0xC0C6FC: cpu.execute_instruction<0x0F>(0xFFC0E0, 4); return true;
    // src/unknown/C0/C0C6B6.asm:39 CPX #.LOWORD(-64)
    // Retained frozen presentation override; see program_index.json.
    case 0xC0C6FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000080, 2); else cpu.execute_instruction<0xE0>(0x00FF80, 3); return true;
    // src/unknown/C0/C0C6B6.asm:39 CPX #.LOWORD(-64)
    // Overlapping static entry reached from 0xC0C6FD.
    case 0xC0C6FF: cpu.execute_instruction<0xFF>(0xE005B0, 4); return true;
    // src/unknown/C0/C0C6B6.asm:40 BCS @UNKNOWN2
    case 0xC0C700: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C0C6B6.asm:41 CPX #320
    // Retained frozen presentation override; see program_index.json.
    case 0xC0C702: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000080, 2); else cpu.execute_instruction<0xE0>(0x000180, 3); return true;
    // src/unknown/C0/C0C6B6.asm:41 CPX #320
    // Retained frozen presentation override; see program_index.json.
    // Overlapping static entry reached from 0xC0C6FF.
    case 0xC0C703: cpu.execute_instruction<0x80>(0x000001, 2); return true;
    // src/unknown/C0/C0C6B6.asm:41 CPX #320
    // Overlapping static entry reached from 0xC0C702.
    case 0xC0C704: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C0/C0C6B6.asm:42 BCS @UNKNOWN3
    case 0xC0C705: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C0C6B6.asm:42 BCS @UNKNOWN3
    // Overlapping static entry reached from 0xC0C704.
    case 0xC0C706: cpu.execute_instruction<0x05>(0x0000A9, 2); return true;
    // src/unknown/C0/C0C6B6.asm:44 LDA #.LOWORD(-1)
    case 0xC0C707: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C6B6.asm:44 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0C706.
    case 0xC0C708: cpu.execute_instruction<0xFF>(0x0380FF, 4); return true;
    // src/unknown/C0/C0C6B6.asm:44 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0C707.
    case 0xC0C709: cpu.execute_instruction<0xFF>(0xA90380, 4); return true;
    // src/unknown/C0/C0C6B6.asm:45 BRA @UNKNOWN4
    case 0xC0C70A: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0C6B6.asm:47 LDA #0
    case 0xC0C70C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C6B6.asm:47 LDA #0
    // Overlapping static entry reached from 0xC0C709.
    case 0xC0C70D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0C6B6.asm:47 LDA #0
    // Overlapping static entry reached from 0xC0C70C.
    case 0xC0C70E: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C6B6.asm:49 END_C_FUNCTION
    case 0xC0C70F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C6B6.asm:49 END_C_FUNCTION
    case 0xC0C710: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C711.asm (unresolved).
bool execute_unresolved_c0_c0c711_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C711.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C711: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C711.asm:7 END_STACK_VARS
    case 0xC0C713: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C711.asm:7 END_STACK_VARS
    case 0xC0C714: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C711.asm:7 END_STACK_VARS
    case 0xC0C715: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C711.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C715.
    case 0xC0C717: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C711.asm:7 END_STACK_VARS
    case 0xC0C718: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC0C719: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0C711.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C717.
    case 0xC0C71B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:9 ASL
    case 0xC0C71C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:10 TAX
    case 0xC0C71D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:11 STX @LOCAL00
    case 0xC0C71E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0C711.asm:12 LDA ENTITY_SIZES,X
    case 0xC0C720: cpu.execute_instruction<0xBD>(0x002B6E, 3); return true;
    // src/unknown/C0/C0C711.asm:13 ASL
    case 0xC0C723: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:14 TAY
    case 0xC0C724: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:15 LDA ENTITY_SCREEN_X_TABLE,X
    case 0xC0C725: cpu.execute_instruction<0xBD>(0x000B16, 3); return true;
    // src/unknown/C0/C0C711.asm:16 TYX
    case 0xC0C728: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:17 SEC
    case 0xC0C729: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:18 SBC f:UNKNOWN_C42A1F,X
    case 0xC0C72A: cpu.execute_instruction<0xFF>(0xC42A1F, 4); return true;
    // src/unknown/C0/C0C711.asm:19 STA @VIRTUAL04
    case 0xC0C72E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C711.asm:20 LDX @LOCAL00
    case 0xC0C730: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0C711.asm:21 LDA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0C732: cpu.execute_instruction<0xBD>(0x000B52, 3); return true;
    // src/unknown/C0/C0C711.asm:22 STA @LOCAL00
    case 0xC0C735: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C711.asm:23 TYX
    case 0xC0C737: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:24 SEC
    case 0xC0C738: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:25 SBC f:UNKNOWN_C42A41,X
    case 0xC0C739: cpu.execute_instruction<0xFF>(0xC42A41, 4); return true;
    // src/unknown/C0/C0C711.asm:26 STA @VIRTUAL02
    case 0xC0C73D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C711.asm:27 LDA @LOCAL00
    case 0xC0C73F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C711.asm:28 CLC
    case 0xC0C741: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:29 ADC #8
    case 0xC0C742: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C0/C0C711.asm:29 ADC #8
    // Overlapping static entry reached from 0xC0C742.
    case 0xC0C744: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C0/C0C711.asm:30 PHA
    case 0xC0C745: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:31 LDA @VIRTUAL04
    case 0xC0C746: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0C711.asm:32 ORA @VIRTUAL04
    case 0xC0C748: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/unknown/C0/C0C711.asm:33 ORA @VIRTUAL02
    case 0xC0C74A: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C0C711.asm:34 PLY
    case 0xC0C74C: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C0C711.asm:35 STY @VIRTUAL02
    case 0xC0C74D: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0C711.asm:36 ORA @VIRTUAL02
    case 0xC0C74F: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C0C711.asm:37 AND #$FF00
    case 0xC0C751: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C0C711.asm:37 AND #$FF00
    // Overlapping static entry reached from 0xC0C751.
    case 0xC0C753: cpu.execute_instruction<0xFF>(0xA905F0, 4); return true;
    // src/unknown/C0/C0C711.asm:38 BEQ @UNKNOWN0
    case 0xC0C754: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0C711.asm:39 LDA #0
    case 0xC0C756: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C711.asm:39 LDA #0
    // Overlapping static entry reached from 0xC0C753.
    case 0xC0C757: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0C711.asm:39 LDA #0
    // Overlapping static entry reached from 0xC0C756.
    case 0xC0C758: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C711.asm:40 BRA @UNKNOWN1
    case 0xC0C759: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0C711.asm:42 LDA #.LOWORD(-1)
    case 0xC0C75B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C711.asm:42 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0C75B.
    case 0xC0C75D: cpu.execute_instruction<0xFF>(0xC26B2B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C711.asm:44 END_C_FUNCTION
    case 0xC0C75E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C711.asm:44 END_C_FUNCTION
    case 0xC0C75F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C760.asm (unresolved).
bool execute_unresolved_c0_c0c760_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C760.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C760: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C760.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC0C75D.
    case 0xC0C761: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C760.asm:11 END_STACK_VARS
    case 0xC0C762: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0C760.asm:11 END_STACK_VARS
    case 0xC0C763: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C760.asm:11 END_STACK_VARS
    case 0xC0C764: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C760.asm:11 END_STACK_VARS
    case 0xC0C765: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C760.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C765.
    case 0xC0C767: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C760.asm:11 END_STACK_VARS
    case 0xC0C768: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0C760.asm:11 END_STACK_VARS
    case 0xC0C769: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:12 STX @LOCAL01
    case 0xC0C76A: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0C760.asm:12 STX @LOCAL01
    // Overlapping static entry reached from 0xC0C767.
    case 0xC0C76B: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // src/unknown/C0/C0C760.asm:13 STA @LOCAL00
    case 0xC0C76C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C760.asm:13 STA @LOCAL00
    // Overlapping static entry reached from 0xC0C76B.
    case 0xC0C76D: cpu.execute_instruction<0x0E>(0x000A98, 3); return true;
    // src/unknown/C0/C0C760.asm:14 TYA
    case 0xC0C76E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:15 ASL
    case 0xC0C76F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:16 TAY
    case 0xC0C770: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:17 TYX
    case 0xC0C771: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:18 LDA @LOCAL00
    case 0xC0C772: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C760.asm:19 SEC
    case 0xC0C774: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:20 SBC f:UNKNOWN_C42A1F,X
    case 0xC0C775: cpu.execute_instruction<0xFF>(0xC42A1F, 4); return true;
    // src/unknown/C0/C0C760.asm:21 STA @VIRTUAL02
    case 0xC0C779: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C760.asm:22 LDX @LOCAL01
    case 0xC0C77B: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0C760.asm:23 TXA
    case 0xC0C77D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:24 TYX
    case 0xC0C77E: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:25 SEC
    case 0xC0C77F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:26 SBC f:UNKNOWN_C42A41,X
    case 0xC0C780: cpu.execute_instruction<0xFF>(0xC42A41, 4); return true;
    // src/unknown/C0/C0C760.asm:27 STA @LOCAL00
    case 0xC0C784: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C760.asm:28 LDX @LOCAL01
    case 0xC0C786: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0C760.asm:29 TXA
    case 0xC0C788: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:30 CLC
    case 0xC0C789: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:31 ADC #8
    case 0xC0C78A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C0/C0C760.asm:31 ADC #8
    // Overlapping static entry reached from 0xC0C78A.
    case 0xC0C78C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0C760.asm:32 STA @VIRTUAL04
    case 0xC0C78D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0C760.asm:33 LDA @LOCAL00
    case 0xC0C78F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C760.asm:34 PHA
    case 0xC0C791: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:35 LDA @VIRTUAL02
    case 0xC0C792: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0C760.asm:36 ORA @VIRTUAL02
    case 0xC0C794: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C0C760.asm:37 PLY
    case 0xC0C796: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C0C760.asm:38 STY @VIRTUAL02
    case 0xC0C797: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0C760.asm:39 ORA @VIRTUAL02
    case 0xC0C799: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C0C760.asm:40 ORA @VIRTUAL04
    case 0xC0C79B: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/unknown/C0/C0C760.asm:41 AND #$FF00
    case 0xC0C79D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C0C760.asm:41 AND #$FF00
    // Overlapping static entry reached from 0xC0C79D.
    case 0xC0C79F: cpu.execute_instruction<0xFF>(0xA905F0, 4); return true;
    // src/unknown/C0/C0C760.asm:42 BEQ @UNKNOWN0
    case 0xC0C7A0: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0C760.asm:43 LDA #0
    case 0xC0C7A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0C760.asm:43 LDA #0
    // Overlapping static entry reached from 0xC0C79F.
    case 0xC0C7A3: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0C760.asm:43 LDA #0
    // Overlapping static entry reached from 0xC0C7A2.
    case 0xC0C7A4: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0C760.asm:44 BRA @UNKNOWN1
    case 0xC0C7A5: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0C760.asm:46 LDA #.LOWORD(-1)
    case 0xC0C7A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0C760.asm:46 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0C7A7.
    case 0xC0C7A9: cpu.execute_instruction<0xFF>(0xC26B2B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C760.asm:48 END_C_FUNCTION
    case 0xC0C7AA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C760.asm:48 END_C_FUNCTION
    case 0xC0C7AB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C7AC.asm (unresolved).
bool execute_unresolved_c0_c0c7ac_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C7AC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C7AC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C7AC.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC0C7A9.
    case 0xC0C7AD: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C7AC.asm:6 END_STACK_VARS
    case 0xC0C7AE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C7AC.asm:6 END_STACK_VARS
    case 0xC0C7AF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C7AC.asm:6 END_STACK_VARS
    case 0xC0C7B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C7AC.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C7B0.
    case 0xC0C7B2: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C7AC.asm:6 END_STACK_VARS
    case 0xC0C7B3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0C7AC.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0xC0C7B4: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0C7AC.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C7B2.
    case 0xC0C7B6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C7AC.asm:8 STA @VIRTUAL02
    case 0xC0C7B7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C7AC.asm:9 JSL UNKNOWN_C09EFF
    case 0xC0C7B9: cpu.execute_instruction<0x22>(0xC09EFF, 4); return true;
    // src/unknown/C0/C0C7AC.asm:10 CMP #0
    case 0xC0C7BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0C7AC.asm:10 CMP #0
    // Overlapping static entry reached from 0xC0C7BD.
    case 0xC0C7BF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0C7AC.asm:11 BEQ @UNKNOWN0
    case 0xC0C7C0: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/unknown/C0/C0C7AC.asm:12 LDY @VIRTUAL02
    case 0xC0C7C2: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C0/C0C7AC.asm:13 LDX ENTITY_MOVEMENT_PROSPECTIVE_Y
    case 0xC0C7C4: cpu.execute_instruction<0xAE>(0x00284A, 3); return true;
    // src/unknown/C0/C0C7AC.asm:14 LDA ENTITY_MOVEMENT_PROSPECTIVE_X
    case 0xC0C7C7: cpu.execute_instruction<0xAD>(0x002848, 3); return true;
    // src/unknown/C0/C0C7AC.asm:15 JSL UNKNOWN_C05F33
    case 0xC0C7CA: cpu.execute_instruction<0x22>(0xC05F33, 4); return true;
    // src/unknown/C0/C0C7AC.asm:16 STA @LOCAL00
    case 0xC0C7CE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0C7AC.asm:17 LDA @VIRTUAL02
    case 0xC0C7D0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0C7AC.asm:18 ASL
    case 0xC0C7D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C7AC.asm:19 TAX
    case 0xC0C7D3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C7AC.asm:20 LDA @LOCAL00
    case 0xC0C7D4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0C7AC.asm:21 STA ENTITY_SURFACE_FLAGS,X
    case 0xC0C7D6: cpu.execute_instruction<0x9D>(0x002BAA, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C7AC.asm:23 END_C_FUNCTION
    case 0xC0C7D9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C7AC.asm:23 END_C_FUNCTION
    case 0xC0C7DA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C7DB.asm (unresolved).
bool execute_unresolved_c0_c0c7db_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C7DB.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C7DB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C7DB.asm:7 END_STACK_VARS
    case 0xC0C7DD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C7DB.asm:7 END_STACK_VARS
    case 0xC0C7DE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C7DB.asm:7 END_STACK_VARS
    case 0xC0C7DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C7DB.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C7DF.
    case 0xC0C7E1: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C7DB.asm:7 END_STACK_VARS
    case 0xC0C7E2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0C7DB.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC0C7E3: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0C7DB.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C7E1.
    case 0xC0C7E5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C7DB.asm:9 STA @LOCAL01
    case 0xC0C7E6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0C7DB.asm:10 ASL
    case 0xC0C7E8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C7DB.asm:11 STA @VIRTUAL02
    case 0xC0C7E9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C7DB.asm:12 LDA @LOCAL01
    case 0xC0C7EB: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0C7DB.asm:13 TAY
    case 0xC0C7ED: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0C7DB.asm:14 LDX @VIRTUAL02
    case 0xC0C7EE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C7DB.asm:15 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0C7F0: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0C7DB.asm:16 TAX
    case 0xC0C7F3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C7DB.asm:17 STX @LOCAL00
    case 0xC0C7F4: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0C7DB.asm:18 LDX @VIRTUAL02
    case 0xC0C7F6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C7DB.asm:19 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0C7F8: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0C7DB.asm:20 LDX @LOCAL00
    case 0xC0C7FB: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0C7DB.asm:21 JSL UNKNOWN_C05F33
    case 0xC0C7FD: cpu.execute_instruction<0x22>(0xC05F33, 4); return true;
    // src/unknown/C0/C0C7DB.asm:22 LDX @VIRTUAL02
    case 0xC0C801: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C7DB.asm:23 STA ENTITY_SURFACE_FLAGS,X
    case 0xC0C803: cpu.execute_instruction<0x9D>(0x002BAA, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C7DB.asm:24 END_C_FUNCTION
    case 0xC0C806: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C7DB.asm:24 END_C_FUNCTION
    case 0xC0C807: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C808.asm (unresolved).
bool execute_unresolved_c0_c0c808_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C808.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C808: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C808.asm:7 END_STACK_VARS
    case 0xC0C80A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C808.asm:7 END_STACK_VARS
    case 0xC0C80B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C808.asm:7 END_STACK_VARS
    case 0xC0C80C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C808.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C80C.
    case 0xC0C80E: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C808.asm:7 END_STACK_VARS
    case 0xC0C80F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0C808.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC0C810: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0C808.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C80E.
    case 0xC0C812: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C808.asm:9 STA @LOCAL01
    case 0xC0C813: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0C808.asm:10 ASL
    case 0xC0C815: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C808.asm:11 STA @VIRTUAL02
    case 0xC0C816: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0C808.asm:12 LDA @LOCAL01
    case 0xC0C818: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0C808.asm:13 TAY
    case 0xC0C81A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0C808.asm:14 LDX @VIRTUAL02
    case 0xC0C81B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C808.asm:15 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0C81D: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0C808.asm:16 LDX @VIRTUAL02
    case 0xC0C820: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C808.asm:17 SEC
    case 0xC0C822: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0C808.asm:18 SBC ENTITY_ABS_Z_TABLE,X
    case 0xC0C823: cpu.execute_instruction<0xFD>(0x000C06, 3); return true;
    // src/unknown/C0/C0C808.asm:19 TAX
    case 0xC0C826: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C808.asm:20 STX @LOCAL00
    case 0xC0C827: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0C808.asm:21 LDX @VIRTUAL02
    case 0xC0C829: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C808.asm:22 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0C82B: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0C808.asm:23 LDX @LOCAL00
    case 0xC0C82E: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0C808.asm:24 JSL UNKNOWN_C05F33
    case 0xC0C830: cpu.execute_instruction<0x22>(0xC05F33, 4); return true;
    // src/unknown/C0/C0C808.asm:25 LDX @VIRTUAL02
    case 0xC0C834: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0C808.asm:26 STA ENTITY_SURFACE_FLAGS,X
    case 0xC0C836: cpu.execute_instruction<0x9D>(0x002BAA, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C808.asm:27 END_C_FUNCTION
    case 0xC0C839: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C808.asm:27 END_C_FUNCTION
    case 0xC0C83A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0C83B.asm (unresolved).
bool execute_unresolved_c0_c0c83b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C83B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C83B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C83B.asm:12 END_STACK_VARS
    case 0xC0C83D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0C83B.asm:12 END_STACK_VARS
    case 0xC0C83E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C83B.asm:12 END_STACK_VARS
    case 0xC0C83F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C83B.asm:12 END_STACK_VARS
    case 0xC0C840: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C83B.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C840.
    case 0xC0C842: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C83B.asm:12 END_STACK_VARS
    case 0xC0C843: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0C83B.asm:12 END_STACK_VARS
    case 0xC0C844: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0C83B.asm:13 STA @LOCAL04
    case 0xC0C845: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C0C83B.asm:13 STA @LOCAL04
    // Overlapping static entry reached from 0xC0C842.
    case 0xC0C846: cpu.execute_instruction<0x1C>(0x0042AC, 3); return true;
    // src/unknown/C0/C0C83B.asm:14 LDY CURRENT_ENTITY_SLOT
    case 0xC0C847: cpu.execute_instruction<0xAC>(0x001A42, 3); return true;
    // src/unknown/C0/C0C83B.asm:14 LDY CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C846.
    case 0xC0C849: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0C83B.asm:15 STY @LOCAL03
    case 0xC0C84A: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/unknown/C0/C0C83B.asm:16 TYA
    case 0xC0C84C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0C83B.asm:17 ASL
    case 0xC0C84D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C83B.asm:18 TAX
    case 0xC0C84E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C83B.asm:19 LDA @LOCAL04
    case 0xC0C84F: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0C83B.asm:20 STA ENTITY_MOVING_DIRECTIONS,X
    case 0xC0C851: cpu.execute_instruction<0x9D>(0x001A86, 3); return true;
    // src/unknown/C0/C0C83B.asm:21 AND #$0001
    case 0xC0C854: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0C83B.asm:21 AND #$0001
    // Overlapping static entry reached from 0xC0C854.
    case 0xC0C856: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0C83B.asm:22 BEQ @UNKNOWN1
    case 0xC0C857: cpu.execute_instruction<0xF0>(0x000031, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:23 MOVE_INT_CONSTANT $B505, @VIRTUAL0A ;1.0 / sqrt(2.0)
    case 0xC0C859: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x00B505, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:23 MOVE_INT_CONSTANT $B505, @VIRTUAL0A ;1.0 / sqrt(2.0)
    // Overlapping static entry reached from 0xC0C859.
    case 0xC0C85B: cpu.execute_instruction<0xB5>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:23 MOVE_INT_CONSTANT $B505, @VIRTUAL0A ;1.0 / sqrt(2.0)
    case 0xC0C85C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:23 MOVE_INT_CONSTANT $B505, @VIRTUAL0A ;1.0 / sqrt(2.0)
    // Overlapping static entry reached from 0xC0C85B.
    case 0xC0C85D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:23 MOVE_INT_CONSTANT $B505, @VIRTUAL0A ;1.0 / sqrt(2.0)
    case 0xC0C85E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:23 MOVE_INT_CONSTANT $B505, @VIRTUAL0A ;1.0 / sqrt(2.0)
    // Overlapping static entry reached from 0xC0C85E.
    case 0xC0C860: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:23 MOVE_INT_CONSTANT $B505, @VIRTUAL0A ;1.0 / sqrt(2.0)
    case 0xC0C861: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0C83B.asm:24 LDA ENTITY_MOVEMENT_SPEEDS,X
    case 0xC0C863: cpu.execute_instruction<0xBD>(0x002B32, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC0C866: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC0C868: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C0/C0C83B.asm:26 JSL MULT32
    case 0xC0C86A: cpu.execute_instruction<0x22>(0xC09086, 4); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/unknown/C0/C0C83B.asm:27 ASR8_INT @VIRTUAL06
    case 0xC0C86E: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/unknown/C0/C0C83B.asm:27 ASR8_INT @VIRTUAL06
    case 0xC0C870: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0C83B.asm:27 ASR8_INT @VIRTUAL06
    case 0xC0C872: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:27 ASR8_INT @VIRTUAL06
    case 0xC0C874: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:27 ASR8_INT @VIRTUAL06
    case 0xC0C876: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0C83B.asm:27 ASR8_INT @VIRTUAL06
    case 0xC0C878: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/unknown/C0/C0C83B.asm:27 ASR8_INT @VIRTUAL06
    case 0xC0C87A: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/unknown/C0/C0C83B.asm:27 ASR8_INT @VIRTUAL06
    case 0xC0C87C: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0C83B.asm:27 ASR8_INT @VIRTUAL06
    case 0xC0C87E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0C880: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0C882: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0C884: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0C886: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0C83B.asm:29 BRA @UNKNOWN3
    case 0xC0C888: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:31 MOVE_INT_CONSTANT $10000, @VIRTUAL0A ;1.0
    case 0xC0C88A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:31 MOVE_INT_CONSTANT $10000, @VIRTUAL0A ;1.0
    // Overlapping static entry reached from 0xC0C88A.
    case 0xC0C88C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:31 MOVE_INT_CONSTANT $10000, @VIRTUAL0A ;1.0
    case 0xC0C88D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:31 MOVE_INT_CONSTANT $10000, @VIRTUAL0A ;1.0
    case 0xC0C88F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:31 MOVE_INT_CONSTANT $10000, @VIRTUAL0A ;1.0
    // Overlapping static entry reached from 0xC0C88F.
    case 0xC0C891: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:31 MOVE_INT_CONSTANT $10000, @VIRTUAL0A ;1.0
    case 0xC0C892: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0C83B.asm:32 LDA ENTITY_MOVEMENT_SPEEDS,X
    case 0xC0C894: cpu.execute_instruction<0xBD>(0x002B32, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xC0C897: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xC0C899: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C0/C0C83B.asm:34 JSL MULT32
    case 0xC0C89B: cpu.execute_instruction<0x22>(0xC09086, 4); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/unknown/C0/C0C83B.asm:35 ASR8_INT @VIRTUAL06
    case 0xC0C89F: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/unknown/C0/C0C83B.asm:35 ASR8_INT @VIRTUAL06
    case 0xC0C8A1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0C83B.asm:35 ASR8_INT @VIRTUAL06
    case 0xC0C8A3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:35 ASR8_INT @VIRTUAL06
    case 0xC0C8A5: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:35 ASR8_INT @VIRTUAL06
    case 0xC0C8A7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0C83B.asm:35 ASR8_INT @VIRTUAL06
    case 0xC0C8A9: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/unknown/C0/C0C83B.asm:35 ASR8_INT @VIRTUAL06
    case 0xC0C8AB: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/unknown/C0/C0C83B.asm:35 ASR8_INT @VIRTUAL06
    case 0xC0C8AD: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0C83B.asm:35 ASR8_INT @VIRTUAL06
    case 0xC0C8AF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0C8B1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0C8B3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0C8B5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0C8B7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0C83B.asm:38 LDA @LOCAL04
    case 0xC0C8B9: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0C83B.asm:39 BEQ @UNKNOWN10
    case 0xC0C8BB: cpu.execute_instruction<0xF0>(0x000038, 2); return true;
    // src/unknown/C0/C0C83B.asm:40 CMP #1
    case 0xC0C8BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0C83B.asm:40 CMP #1
    // Overlapping static entry reached from 0xC0C8BD.
    case 0xC0C8BF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0C83B.asm:41 BEQ @UNKNOWN11
    case 0xC0C8C0: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // src/unknown/C0/C0C83B.asm:42 CMP #2
    case 0xC0C8C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0C83B.asm:42 CMP #2
    // Overlapping static entry reached from 0xC0C8C2.
    case 0xC0C8C4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0C83B.asm:43 BEQL @UNKNOWN12
    case 0xC0C8C5: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0C83B.asm:43 BEQL @UNKNOWN12
    case 0xC0C8C7: cpu.execute_instruction<0x4C>(0x00C953, 3); return true;
    // src/unknown/C0/C0C83B.asm:44 CMP #3
    case 0xC0C8CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0C83B.asm:44 CMP #3
    // Overlapping static entry reached from 0xC0C8CA.
    case 0xC0C8CC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0C83B.asm:45 BEQL @UNKNOWN13
    case 0xC0C8CD: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0C83B.asm:45 BEQL @UNKNOWN13
    case 0xC0C8CF: cpu.execute_instruction<0x4C>(0x00C970, 3); return true;
    // src/unknown/C0/C0C83B.asm:46 CMP #4
    case 0xC0C8D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0C83B.asm:46 CMP #4
    // Overlapping static entry reached from 0xC0C8D2.
    case 0xC0C8D4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0C83B.asm:47 BEQL @UNKNOWN14
    case 0xC0C8D5: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0C83B.asm:47 BEQL @UNKNOWN14
    case 0xC0C8D7: cpu.execute_instruction<0x4C>(0x00C993, 3); return true;
    // src/unknown/C0/C0C83B.asm:48 CMP #5
    case 0xC0C8DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C0/C0C83B.asm:48 CMP #5
    // Overlapping static entry reached from 0xC0C8DA.
    case 0xC0C8DC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0C83B.asm:49 BEQL @UNKNOWN15
    case 0xC0C8DD: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0C83B.asm:49 BEQL @UNKNOWN15
    case 0xC0C8DF: cpu.execute_instruction<0x4C>(0x00C9B0, 3); return true;
    // src/unknown/C0/C0C83B.asm:50 CMP #6
    case 0xC0C8E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C0C83B.asm:50 CMP #6
    // Overlapping static entry reached from 0xC0C8E2.
    case 0xC0C8E4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0C83B.asm:51 BEQL @UNKNOWN16
    case 0xC0C8E5: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0C83B.asm:51 BEQL @UNKNOWN16
    case 0xC0C8E7: cpu.execute_instruction<0x4C>(0x00C9E1, 3); return true;
    // src/unknown/C0/C0C83B.asm:52 CMP #7
    case 0xC0C8EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C0C83B.asm:52 CMP #7
    // Overlapping static entry reached from 0xC0C8EA.
    case 0xC0C8EC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0C83B.asm:53 BEQL @UNKNOWN17
    case 0xC0C8ED: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0C83B.asm:53 BEQL @UNKNOWN17
    case 0xC0C8EF: cpu.execute_instruction<0x4C>(0x00CA0C, 3); return true;
    // src/unknown/C0/C0C83B.asm:54 JMP @UNKNOWN18
    case 0xC0C8F2: cpu.execute_instruction<0x4C>(0x00CA33, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:56 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC0C8F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:56 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC0C8F5.
    case 0xC0C8F7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:56 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC0C8F8: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:56 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC0C8FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:56 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC0C8FA.
    case 0xC0C8FC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:56 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC0C8FD: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:57 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C8FF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:57 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C901: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:57 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C903: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:57 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C905: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0C83B.asm:58 SEC
    case 0xC0C907: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:59 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C908: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:59 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0C908.
    case 0xC0C90A: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0C83B.asm:59 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C90B: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:59 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C90D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:59 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C90F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:59 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0C90F.
    case 0xC0C911: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0C83B.asm:59 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C912: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:59 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C914: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:60 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C916: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:60 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C918: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:60 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C91A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:60 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C91C: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0C83B.asm:61 JMP @UNKNOWN18
    case 0xC0C91E: cpu.execute_instruction<0x4C>(0x00CA33, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:63 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C921: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:63 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C923: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:63 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C925: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:63 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C927: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:64 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C929: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:64 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C92B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:64 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C92D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:64 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C92F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:65 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C931: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:65 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C933: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:65 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C935: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:65 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C937: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0C83B.asm:66 SEC
    case 0xC0C939: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:67 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C93A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:67 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0C93A.
    case 0xC0C93C: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0C83B.asm:67 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C93D: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:67 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C93F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:67 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C941: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:67 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0C941.
    case 0xC0C943: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0C83B.asm:67 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C944: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:67 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C946: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:68 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C948: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:68 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C94A: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:68 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C94C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:68 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C94E: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0C83B.asm:69 JMP @UNKNOWN18
    case 0xC0C950: cpu.execute_instruction<0x4C>(0x00CA33, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:71 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C953: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:71 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C955: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:71 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C957: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:71 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C959: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:72 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C95B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:72 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C95D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:72 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C95F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:72 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C961: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:73 MOVE_INT_CONSTANT NULL, @LOCAL02
    case 0xC0C963: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:73 MOVE_INT_CONSTANT NULL, @LOCAL02
    // Overlapping static entry reached from 0xC0C963.
    case 0xC0C965: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:73 MOVE_INT_CONSTANT NULL, @LOCAL02
    case 0xC0C966: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:73 MOVE_INT_CONSTANT NULL, @LOCAL02
    case 0xC0C968: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:73 MOVE_INT_CONSTANT NULL, @LOCAL02
    // Overlapping static entry reached from 0xC0C968.
    case 0xC0C96A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:73 MOVE_INT_CONSTANT NULL, @LOCAL02
    case 0xC0C96B: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0C83B.asm:74 JMP @UNKNOWN18
    case 0xC0C96D: cpu.execute_instruction<0x4C>(0x00CA33, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:76 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C970: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:76 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C972: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:76 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C974: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:76 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C976: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:77 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C978: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:77 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C97A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:77 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C97C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:77 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C97E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:78 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C980: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:78 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C982: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:78 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C984: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:78 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C986: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:79 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C988: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:79 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C98A: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:79 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C98C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:79 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C98E: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0C83B.asm:80 JMP @UNKNOWN18
    case 0xC0C990: cpu.execute_instruction<0x4C>(0x00CA33, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:82 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC0C993: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:82 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC0C993.
    case 0xC0C995: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:82 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC0C996: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:82 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC0C998: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:82 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC0C998.
    case 0xC0C99A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:82 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC0C99B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:83 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C99D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:83 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C99F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:83 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9A1: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:83 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9A3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:84 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C9A5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:84 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C9A7: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:84 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C9A9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:84 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C9AB: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0C83B.asm:85 JMP @UNKNOWN18
    case 0xC0C9AD: cpu.execute_instruction<0x4C>(0x00CA33, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:87 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9B0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:87 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9B2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:87 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9B4: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:87 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9B6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0C83B.asm:88 SEC
    case 0xC0C9B8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:89 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:89 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0C9B9.
    case 0xC0C9BB: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0C83B.asm:89 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9BC: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:89 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9BE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:89 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:89 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0C9C0.
    case 0xC0C9C2: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0C83B.asm:89 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9C3: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:89 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9C5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:90 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C9C7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:90 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C9C9: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:90 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C9CB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:90 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C9CD: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:91 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9CF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:91 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9D1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:91 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9D3: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:91 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9D5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:92 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C9D7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:92 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C9D9: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:92 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C9DB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:92 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0C9DD: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0C83B.asm:93 BRA @UNKNOWN18
    case 0xC0C9DF: cpu.execute_instruction<0x80>(0x000052, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:95 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9E1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:95 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9E3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:95 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9E5: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:95 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0C9E7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0C83B.asm:96 SEC
    case 0xC0C9E9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:97 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:97 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0C9EA.
    case 0xC0C9EC: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0C83B.asm:97 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9ED: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:97 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9EF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:97 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:97 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0C9F1.
    case 0xC0C9F3: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0C83B.asm:97 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9F4: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:97 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0C9F6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:98 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C9F8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:98 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C9FA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:98 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C9FC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:98 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0C9FE: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:99 MOVE_INT_CONSTANT NULL, @LOCAL02
    case 0xC0CA00: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:99 MOVE_INT_CONSTANT NULL, @LOCAL02
    // Overlapping static entry reached from 0xC0CA00.
    case 0xC0CA02: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:99 MOVE_INT_CONSTANT NULL, @LOCAL02
    case 0xC0CA03: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:99 MOVE_INT_CONSTANT NULL, @LOCAL02
    case 0xC0CA05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:99 MOVE_INT_CONSTANT NULL, @LOCAL02
    // Overlapping static entry reached from 0xC0CA05.
    case 0xC0CA07: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:99 MOVE_INT_CONSTANT NULL, @LOCAL02
    case 0xC0CA08: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0C83B.asm:100 BRA @UNKNOWN18
    case 0xC0CA0A: cpu.execute_instruction<0x80>(0x000027, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:102 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0CA0C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:102 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0CA0E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:102 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0CA10: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:102 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0CA12: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0C83B.asm:103 SEC
    case 0xC0CA14: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:104 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0CA15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:104 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0CA15.
    case 0xC0CA17: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0C83B.asm:104 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0CA18: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:104 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0CA1A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:104 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0CA1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0C83B.asm:104 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0CA1C.
    case 0xC0CA1E: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0C83B.asm:104 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0CA1F: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:104 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0CA21: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:105 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0CA23: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:105 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0CA25: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:105 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0CA27: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:105 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0CA29: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0C83B.asm:106 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0CA2B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0C83B.asm:106 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0CA2D: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0C83B.asm:106 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0CA2F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0C83B.asm:106 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0CA31: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0C83B.asm:108 LDY @LOCAL03
    case 0xC0CA33: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C0/C0C83B.asm:109 TYA
    case 0xC0CA35: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0C83B.asm:110 ASL
    case 0xC0CA36: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0C83B.asm:111 TAX
    case 0xC0CA37: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0C83B.asm:112 LDA @LOCAL01 + fixed_point::integer
    case 0xC0CA38: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0C83B.asm:113 STA ENTITY_DELTA_X_TABLE,X
    case 0xC0CA3A: cpu.execute_instruction<0x9D>(0x000CF6, 3); return true;
    // src/unknown/C0/C0C83B.asm:114 LDA @LOCAL01 + fixed_point::fraction
    case 0xC0CA3D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0C83B.asm:115 STA ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC0CA3F: cpu.execute_instruction<0x9D>(0x000DAA, 3); return true;
    // src/unknown/C0/C0C83B.asm:116 LDA @LOCAL02 + fixed_point::integer
    case 0xC0CA42: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0C83B.asm:117 STA ENTITY_DELTA_Y_TABLE,X
    case 0xC0CA44: cpu.execute_instruction<0x9D>(0x000D32, 3); return true;
    // src/unknown/C0/C0C83B.asm:118 LDA @LOCAL02 + fixed_point::fraction
    case 0xC0CA47: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0C83B.asm:119 STA ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC0CA49: cpu.execute_instruction<0x9D>(0x000DE6, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C83B.asm:120 END_C_FUNCTION
    case 0xC0CA4C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C83B.asm:120 END_C_FUNCTION
    case 0xC0CA4D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0CA4E.asm (unresolved).
bool execute_unresolved_c0_c0ca4e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0CA4E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0CA4E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0CA4E.asm:10 END_STACK_VARS
    case 0xC0CA50: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0CA4E.asm:10 END_STACK_VARS
    case 0xC0CA51: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0CA4E.asm:10 END_STACK_VARS
    case 0xC0CA52: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CA4E.asm:10 END_STACK_VARS
    case 0xC0CA53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CA4E.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC0CA53.
    case 0xC0CA55: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0CA4E.asm:10 END_STACK_VARS
    case 0xC0CA56: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0CA4E.asm:10 END_STACK_VARS
    case 0xC0CA57: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:11 STA @LOCAL03
    case 0xC0CA58: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0CA4E.asm:11 STA @LOCAL03
    // Overlapping static entry reached from 0xC0CA55.
    case 0xC0CA59: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:12 LDX CURRENT_ENTITY_SLOT
    case 0xC0CA5A: cpu.execute_instruction<0xAE>(0x001A42, 3); return true;
    // src/unknown/C0/C0CA4E.asm:13 TXA
    case 0xC0CA5D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:14 ASL
    case 0xC0CA5E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:15 TAX
    case 0xC0CA5F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:16 LDA ENTITY_DELTA_X_TABLE,X
    case 0xC0CA60: cpu.execute_instruction<0xBD>(0x000CF6, 3); return true;
    // src/unknown/C0/C0CA4E.asm:17 STA @LOCAL00 + fixed_point::integer
    case 0xC0CA63: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0CA4E.asm:18 LDA ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC0CA65: cpu.execute_instruction<0xBD>(0x000DAA, 3); return true;
    // src/unknown/C0/C0CA4E.asm:19 STA @LOCAL00 + fixed_point::fraction
    case 0xC0CA68: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0CA4E.asm:20 LDA ENTITY_DELTA_Y_TABLE,X
    case 0xC0CA6A: cpu.execute_instruction<0xBD>(0x000D32, 3); return true;
    // src/unknown/C0/C0CA4E.asm:21 STA @LOCAL01 + fixed_point::integer
    case 0xC0CA6D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0CA4E.asm:22 LDA ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC0CA6F: cpu.execute_instruction<0xBD>(0x000DE6, 3); return true;
    // src/unknown/C0/C0CA4E.asm:23 STA @LOCAL01
    case 0xC0CA72: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0CA4E.asm:24 STA @VIRTUAL0A
    case 0xC0CA74: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C0CA4E.asm:25 LDA @LOCAL01+2
    case 0xC0CA76: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0CA4E.asm:26 STA @VIRTUAL0A+2
    case 0xC0CA78: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC0CA7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC0CA7A.
    case 0xC0CA7C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC0CA7D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC0CA7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC0CA7F.
    case 0xC0CA81: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC0CA82: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0CA4E.asm:28 CLC
    case 0xC0CA84: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:29 LDA @VIRTUAL06
    case 0xC0CA85: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0CA4E.asm:30 SBC @VIRTUAL0A
    case 0xC0CA87: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // src/unknown/C0/C0CA4E.asm:31 LDA @VIRTUAL06+2
    case 0xC0CA89: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C0CA4E.asm:32 SBC @VIRTUAL0A+2
    case 0xC0CA8B: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0CA4E.asm:33 BRANCHLTEQS @UNKNOWN2
    case 0xC0CA8D: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:33 BRANCHLTEQS @UNKNOWN2
    case 0xC0CA8F: cpu.execute_instruction<0x10>(0x000025, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0CA4E.asm:33 BRANCHLTEQS @UNKNOWN2
    case 0xC0CA91: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:33 BRANCHLTEQS @UNKNOWN2
    case 0xC0CA93: cpu.execute_instruction<0x30>(0x000021, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:34 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0CA95: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:34 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0CA97: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:34 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0CA99: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:34 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0CA9B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0CA4E.asm:35 SEC
    case 0xC0CA9D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:36 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0CA9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:36 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0CA9E.
    case 0xC0CAA0: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0CA4E.asm:36 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0CAA1: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:36 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0CAA3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:36 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0CAA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:36 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0CAA5.
    case 0xC0CAA7: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:36 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0CAA8: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:36 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0CAAA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:37 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0CAAC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:37 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0CAAE: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:37 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0CAB0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:37 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0CAB2: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0CA4E.asm:38 BRA @UNKNOWN3
    case 0xC0CAB4: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:40 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0CAB6: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:40 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0CAB8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:40 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0CABA: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:40 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0CABC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:41 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0CABE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:41 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0CAC0: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:41 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0CAC2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:41 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0CAC4: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:43 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0CAC6: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:43 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0CAC8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:43 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0CACA: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:43 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0CACC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC0CACE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0CACE.
    case 0xC0CAD0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC0CAD1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC0CAD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0CAD3.
    case 0xC0CAD5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC0CAD6: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0CA4E.asm:45 CLC
    case 0xC0CAD8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:46 LDA @VIRTUAL0A
    case 0xC0CAD9: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C0/C0CA4E.asm:47 SBC @VIRTUAL06
    case 0xC0CADB: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // src/unknown/C0/C0CA4E.asm:48 LDA @VIRTUAL0A+2
    case 0xC0CADD: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/unknown/C0/C0CA4E.asm:49 SBC @VIRTUAL06+2
    case 0xC0CADF: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0CA4E.asm:50 BRANCHLTEQS @UNKNOWN6
    case 0xC0CAE1: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:50 BRANCHLTEQS @UNKNOWN6
    case 0xC0CAE3: cpu.execute_instruction<0x10>(0x00001D, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0CA4E.asm:50 BRANCHLTEQS @UNKNOWN6
    case 0xC0CAE5: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:50 BRANCHLTEQS @UNKNOWN6
    case 0xC0CAE7: cpu.execute_instruction<0x30>(0x000019, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:51 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CAE9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:51 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CAEB: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:51 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CAED: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:51 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CAEF: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0CA4E.asm:52 SEC
    case 0xC0CAF1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:53 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CAF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:53 NEGATE_INT_ASSIGN @VIRTUAL0A
    // Overlapping static entry reached from 0xC0CAF2.
    case 0xC0CAF4: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0CA4E.asm:53 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CAF5: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:53 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CAF7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:53 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CAF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:53 NEGATE_INT_ASSIGN @VIRTUAL0A
    // Overlapping static entry reached from 0xC0CAF9.
    case 0xC0CAFB: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:53 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CAFC: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:53 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CAFE: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0CA4E.asm:54 BRA @UNKNOWN7
    case 0xC0CB00: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:56 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB02: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:56 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB04: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:56 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB06: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:56 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB08: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:58 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0CB0A: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:58 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0CB0C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:58 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0CB0E: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:58 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0CB10: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0CA4E.asm:59 CLC
    case 0xC0CB12: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:60 LDA @VIRTUAL0A
    case 0xC0CB13: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C0/C0CA4E.asm:61 SBC @VIRTUAL06
    case 0xC0CB15: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // src/unknown/C0/C0CA4E.asm:62 LDA @VIRTUAL0A+2
    case 0xC0CB17: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/unknown/C0/C0CA4E.asm:63 SBC @VIRTUAL06+2
    case 0xC0CB19: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0CA4E.asm:64 BRANCHLTEQS @UNKNOWN13
    case 0xC0CB1B: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:64 BRANCHLTEQS @UNKNOWN13
    case 0xC0CB1D: cpu.execute_instruction<0x10>(0x00004A, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0CA4E.asm:64 BRANCHLTEQS @UNKNOWN13
    case 0xC0CB1F: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:64 BRANCHLTEQS @UNKNOWN13
    case 0xC0CB21: cpu.execute_instruction<0x30>(0x000046, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:65 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB23: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:65 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB25: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:65 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB27: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:65 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB29: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:66 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC0CB2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:66 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC0CB2B.
    case 0xC0CB2D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:66 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC0CB2E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:66 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC0CB30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:66 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC0CB30.
    case 0xC0CB32: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:66 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC0CB33: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0CA4E.asm:67 CLC
    case 0xC0CB35: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:68 LDA @VIRTUAL06
    case 0xC0CB36: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0CA4E.asm:69 SBC @VIRTUAL0A
    case 0xC0CB38: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // src/unknown/C0/C0CA4E.asm:70 LDA @VIRTUAL06+2
    case 0xC0CB3A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C0CA4E.asm:71 SBC @VIRTUAL0A+2
    case 0xC0CB3C: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0CA4E.asm:72 BRANCHLTEQS @UNKNOWN12
    case 0xC0CB3E: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:72 BRANCHLTEQS @UNKNOWN12
    case 0xC0CB40: cpu.execute_instruction<0x10>(0x00001D, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0CA4E.asm:72 BRANCHLTEQS @UNKNOWN12
    case 0xC0CB42: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:72 BRANCHLTEQS @UNKNOWN12
    case 0xC0CB44: cpu.execute_instruction<0x30>(0x000019, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:73 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB46: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:73 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB48: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:73 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB4A: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:73 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB4C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0CA4E.asm:74 SEC
    case 0xC0CB4E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:75 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CB4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:75 NEGATE_INT_ASSIGN @VIRTUAL0A
    // Overlapping static entry reached from 0xC0CB4F.
    case 0xC0CB51: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0CA4E.asm:75 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CB52: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:75 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CB54: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:75 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CB56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:75 NEGATE_INT_ASSIGN @VIRTUAL0A
    // Overlapping static entry reached from 0xC0CB56.
    case 0xC0CB58: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:75 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CB59: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:75 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CB5B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0CA4E.asm:76 BRA @UNKNOWN17
    case 0xC0CB5D: cpu.execute_instruction<0x80>(0x00004E, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:78 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB5F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:78 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB61: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:78 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB63: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:78 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CB65: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0CA4E.asm:79 BRA @UNKNOWN17
    case 0xC0CB67: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:81 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CB69: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:81 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CB6B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:81 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CB6D: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:81 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CB6F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:82 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC0CB71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:82 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC0CB71.
    case 0xC0CB73: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:82 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC0CB74: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:82 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC0CB76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:82 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC0CB76.
    case 0xC0CB78: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:82 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC0CB79: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0CA4E.asm:83 CLC
    case 0xC0CB7B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:84 LDA @VIRTUAL06
    case 0xC0CB7C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0CA4E.asm:85 SBC @VIRTUAL0A
    case 0xC0CB7E: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // src/unknown/C0/C0CA4E.asm:86 LDA @VIRTUAL06+2
    case 0xC0CB80: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C0CA4E.asm:87 SBC @VIRTUAL0A+2
    case 0xC0CB82: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0CA4E.asm:88 BRANCHLTEQS @UNKNOWN16
    case 0xC0CB84: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:88 BRANCHLTEQS @UNKNOWN16
    case 0xC0CB86: cpu.execute_instruction<0x10>(0x00001D, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0CA4E.asm:88 BRANCHLTEQS @UNKNOWN16
    case 0xC0CB88: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:88 BRANCHLTEQS @UNKNOWN16
    case 0xC0CB8A: cpu.execute_instruction<0x30>(0x000019, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:89 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CB8C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:89 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CB8E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:89 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CB90: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:89 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CB92: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0CA4E.asm:90 SEC
    case 0xC0CB94: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:91 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CB95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:91 NEGATE_INT_ASSIGN @VIRTUAL0A
    // Overlapping static entry reached from 0xC0CB95.
    case 0xC0CB97: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0CA4E.asm:91 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CB98: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:91 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CB9A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:91 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CB9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CA4E.asm:91 NEGATE_INT_ASSIGN @VIRTUAL0A
    // Overlapping static entry reached from 0xC0CB9C.
    case 0xC0CB9E: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:91 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CB9F: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:91 NEGATE_INT_ASSIGN @VIRTUAL0A
    case 0xC0CBA1: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0CA4E.asm:92 BRA @UNKNOWN17
    case 0xC0CBA3: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:94 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CBA5: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:94 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CBA7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:94 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CBA9: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:94 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CBAB: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0CA4E.asm:96 LDA CURRENT_SCRIPT_SLOT
    case 0xC0CBAD: cpu.execute_instruction<0xAD>(0x001A46, 3); return true;
    // src/unknown/C0/C0CA4E.asm:97 ASL
    case 0xC0CBB0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:98 PHA
    case 0xC0CBB1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:99 SEP #PROC_FLAGS::ACCUM8
    case 0xC0CBB2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0CA4E.asm:100 LDA #16
    case 0xC0CBB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x00E210, 3); return true;
    // src/unknown/C0/C0CA4E.asm:101 SEP #PROC_FLAGS::INDEX8
    case 0xC0CBB6: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C0/C0CA4E.asm:101 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC0CBB4.
    case 0xC0CBB7: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C0/C0CA4E.asm:102 TAY
    case 0xC0CBB8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:103 REP #PROC_FLAGS::ACCUM8
    case 0xC0CBB9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/unknown/C0/C0CA4E.asm:104 MOVE_INT1632 @LOCAL03, @VIRTUAL06
    case 0xC0CBBB: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C0/C0CA4E.asm:104 MOVE_INT1632 @LOCAL03, @VIRTUAL06
    case 0xC0CBBD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C0/C0CA4E.asm:104 MOVE_INT1632 @LOCAL03, @VIRTUAL06
    case 0xC0CBBF: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C0/C0CA4E.asm:105 JSL ASL32_ENTRY2
    case 0xC0CBC1: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // src/unknown/C0/C0CA4E.asm:106 REP #PROC_FLAGS::INDEX8
    case 0xC0CBC5: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C0/C0CA4E.asm:107 JSL DIVISION32
    case 0xC0CBC7: cpu.execute_instruction<0x22>(0xC090FF, 4); return true;
    // src/unknown/C0/C0CA4E.asm:108 LDA @VIRTUAL06
    case 0xC0CBCB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0CA4E.asm:109 PLX
    case 0xC0CBCD: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0CA4E.asm:110 STA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC0CBCE: cpu.execute_instruction<0x9D>(0x001372, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0CA4E.asm:111 END_C_FUNCTION
    case 0xC0CBD1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0CA4E.asm:111 END_C_FUNCTION
    case 0xC0CBD2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0CBD3.asm (unresolved).
bool execute_unresolved_c0_c0cbd3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0CBD3.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0CBD3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0CBD3.asm:7 END_STACK_VARS
    case 0xC0CBD5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0CBD3.asm:7 END_STACK_VARS
    case 0xC0CBD6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0CBD3.asm:7 END_STACK_VARS
    case 0xC0CBD7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CBD3.asm:7 END_STACK_VARS
    case 0xC0CBD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CBD3.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0CBD8.
    case 0xC0CBDA: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0CBD3.asm:7 END_STACK_VARS
    case 0xC0CBDB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0CBD3.asm:7 END_STACK_VARS
    case 0xC0CBDC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0CBD3.asm:8 STA @LOCAL00
    case 0xC0CBDD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0CBD3.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC0CBDA.
    case 0xC0CBDE: cpu.execute_instruction<0x0E>(0x0046AD, 3); return true;
    // src/unknown/C0/C0CBD3.asm:9 LDA CURRENT_SCRIPT_SLOT
    case 0xC0CBDF: cpu.execute_instruction<0xAD>(0x001A46, 3); return true;
    // src/unknown/C0/C0CBD3.asm:9 LDA CURRENT_SCRIPT_SLOT
    // Overlapping static entry reached from 0xC0CBDE.
    case 0xC0CBE1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0CBD3.asm:10 ASL
    case 0xC0CBE2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CBD3.asm:11 PHA
    case 0xC0CBE3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0CBD3.asm:12 LDA CURRENT_ENTITY_SLOT
    case 0xC0CBE4: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0CBD3.asm:13 ASL
    case 0xC0CBE7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CBD3.asm:14 TAX
    case 0xC0CBE8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CBD3.asm:15 LDA ENTITY_MOVEMENT_SPEEDS,X
    case 0xC0CBE9: cpu.execute_instruction<0xBD>(0x002B32, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C0/C0CBD3.asm:16 STORE_INT1632 @VIRTUAL0A
    case 0xC0CBEC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C0/C0CBD3.asm:16 STORE_INT1632 @VIRTUAL0A
    case 0xC0CBEE: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/unknown/C0/C0CBD3.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC0CBF0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0CBD3.asm:18 LDA #8
    case 0xC0CBF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/unknown/C0/C0CBD3.asm:19 SEP #PROC_FLAGS::INDEX8
    case 0xC0CBF4: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C0/C0CBD3.asm:19 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC0CBF2.
    case 0xC0CBF5: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C0/C0CBD3.asm:20 TAY
    case 0xC0CBF6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0CBD3.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC0CBF7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/unknown/C0/C0CBD3.asm:22 MOVE_INT1632 @LOCAL00, @VIRTUAL06
    case 0xC0CBF9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C0/C0CBD3.asm:22 MOVE_INT1632 @LOCAL00, @VIRTUAL06
    case 0xC0CBFB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C0/C0CBD3.asm:22 MOVE_INT1632 @LOCAL00, @VIRTUAL06
    case 0xC0CBFD: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C0/C0CBD3.asm:23 JSL ASL32_ENTRY2
    case 0xC0CBFF: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // src/unknown/C0/C0CBD3.asm:24 REP #PROC_FLAGS::INDEX8
    case 0xC0CC03: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C0/C0CBD3.asm:25 JSL DIVISION32
    case 0xC0CC05: cpu.execute_instruction<0x22>(0xC090FF, 4); return true;
    // src/unknown/C0/C0CBD3.asm:26 LDA @VIRTUAL06
    case 0xC0CC09: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0CBD3.asm:27 PLX
    case 0xC0CC0B: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0CBD3.asm:28 STA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC0CC0C: cpu.execute_instruction<0x9D>(0x001372, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0CBD3.asm:29 END_C_FUNCTION
    case 0xC0CC0F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0CBD3.asm:29 END_C_FUNCTION
    case 0xC0CC10: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0CC11.asm (unresolved).
bool execute_unresolved_c0_c0cc11_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0CC11.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0CC11: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0CC11.asm:7 END_STACK_VARS
    case 0xC0CC13: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0CC11.asm:7 END_STACK_VARS
    case 0xC0CC14: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CC11.asm:7 END_STACK_VARS
    case 0xC0CC15: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CC11.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0CC15.
    case 0xC0CC17: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0CC11.asm:7 END_STACK_VARS
    case 0xC0CC18: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC0CC19: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0CC11.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0CC17.
    case 0xC0CC1B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:9 STA @VIRTUAL04
    case 0xC0CC1C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0CC11.asm:10 ASL
    case 0xC0CC1E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:11 TAX
    case 0xC0CC1F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:12 LDA ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC0CC20: cpu.execute_instruction<0xBD>(0x000FC6, 3); return true;
    // src/unknown/C0/C0CC11.asm:13 SEC
    case 0xC0CC23: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:14 SBC ENTITY_ABS_X_TABLE,X
    case 0xC0CC24: cpu.execute_instruction<0xFD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0CC11.asm:15 STA @LOCAL01
    case 0xC0CC27: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:16 STA @VIRTUAL02
    case 0xC0CC29: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0CC11.asm:17 LDA #0
    case 0xC0CC2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0CC11.asm:17 LDA #0
    // Overlapping static entry reached from 0xC0CC2B.
    case 0xC0CC2D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0CC11.asm:18 CLC
    case 0xC0CC2E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:19 SBC @VIRTUAL02
    case 0xC0CC2F: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0CC11.asm:20 BRANCHLTEQS @UNKNOWN2
    case 0xC0CC31: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0CC11.asm:20 BRANCHLTEQS @UNKNOWN2
    case 0xC0CC33: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0CC11.asm:20 BRANCHLTEQS @UNKNOWN2
    case 0xC0CC35: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0CC11.asm:20 BRANCHLTEQS @UNKNOWN2
    case 0xC0CC37: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // src/unknown/C0/C0CC11.asm:21 LDA @LOCAL01
    case 0xC0CC39: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:22 EOR #.LOWORD(-1)
    case 0xC0CC3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0CC11.asm:22 EOR #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0CC3B.
    case 0xC0CC3D: cpu.execute_instruction<0xFF>(0x02801A, 4); return true;
    // src/unknown/C0/C0CC11.asm:23 INC
    case 0xC0CC3E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:24 BRA @UNKNOWN3
    case 0xC0CC3F: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C0/C0CC11.asm:26 LDA @LOCAL01
    case 0xC0CC41: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:28 TAY
    case 0xC0CC43: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:29 LDA @VIRTUAL04
    case 0xC0CC44: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0CC11.asm:30 ASL
    case 0xC0CC46: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:31 TAX
    case 0xC0CC47: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:32 LDA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC0CC48: cpu.execute_instruction<0xBD>(0x001002, 3); return true;
    // src/unknown/C0/C0CC11.asm:33 SEC
    case 0xC0CC4B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:34 SBC ENTITY_ABS_Y_TABLE,X
    case 0xC0CC4C: cpu.execute_instruction<0xFD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0CC11.asm:35 STA @LOCAL01
    case 0xC0CC4F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:36 STA @VIRTUAL02
    case 0xC0CC51: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0CC11.asm:37 LDA #0
    case 0xC0CC53: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0CC11.asm:37 LDA #0
    // Overlapping static entry reached from 0xC0CC53.
    case 0xC0CC55: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0CC11.asm:38 CLC
    case 0xC0CC56: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:39 SBC @VIRTUAL02
    case 0xC0CC57: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0CC11.asm:40 BRANCHLTEQS @UNKNOWN6
    case 0xC0CC59: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0CC11.asm:40 BRANCHLTEQS @UNKNOWN6
    case 0xC0CC5B: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0CC11.asm:40 BRANCHLTEQS @UNKNOWN6
    case 0xC0CC5D: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0CC11.asm:40 BRANCHLTEQS @UNKNOWN6
    case 0xC0CC5F: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // src/unknown/C0/C0CC11.asm:41 LDA @LOCAL01
    case 0xC0CC61: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:42 EOR #.LOWORD(-1)
    case 0xC0CC63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0CC11.asm:42 EOR #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0CC63.
    case 0xC0CC65: cpu.execute_instruction<0xFF>(0x02801A, 4); return true;
    // src/unknown/C0/C0CC11.asm:43 INC
    case 0xC0CC66: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:44 BRA @UNKNOWN7
    case 0xC0CC67: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C0/C0CC11.asm:46 LDA @LOCAL01
    case 0xC0CC69: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:48 STA @VIRTUAL02
    case 0xC0CC6B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0CC11.asm:49 TYA
    case 0xC0CC6D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:50 CMP @VIRTUAL02
    case 0xC0CC6E: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0CC11.asm:51 BLTEQ @UNKNOWN8
    case 0xC0CC70: cpu.execute_instruction<0x90>(0x000015, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0CC11.asm:51 BLTEQ @UNKNOWN8
    case 0xC0CC72: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C0/C0CC11.asm:52 TYA
    case 0xC0CC74: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:53 STA @LOCAL01
    case 0xC0CC75: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:54 LDA @VIRTUAL04
    case 0xC0CC77: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0CC11.asm:55 ASL
    case 0xC0CC79: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:56 TAX
    case 0xC0CC7A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:57 LDA ENTITY_DELTA_X_TABLE,X
    case 0xC0CC7B: cpu.execute_instruction<0xBD>(0x000CF6, 3); return true;
    // src/unknown/C0/C0CC11.asm:58 STA @LOCAL00 + fixed_point::integer
    case 0xC0CC7E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0CC11.asm:59 LDA ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC0CC80: cpu.execute_instruction<0xBD>(0x000DAA, 3); return true;
    // src/unknown/C0/C0CC11.asm:60 STA @LOCAL00 + fixed_point::fraction
    case 0xC0CC83: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0CC11.asm:61 BRA @UNKNOWN9
    case 0xC0CC85: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:63 LDA @VIRTUAL02
    case 0xC0CC87: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0CC11.asm:64 STA @LOCAL01
    case 0xC0CC89: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:65 LDA @VIRTUAL04
    case 0xC0CC8B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0CC11.asm:66 ASL
    case 0xC0CC8D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:67 TAX
    case 0xC0CC8E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:68 LDA ENTITY_DELTA_Y_TABLE,X
    case 0xC0CC8F: cpu.execute_instruction<0xBD>(0x000D32, 3); return true;
    // src/unknown/C0/C0CC11.asm:69 STA @LOCAL00 + fixed_point::integer
    case 0xC0CC92: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0CC11.asm:70 LDA ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC0CC94: cpu.execute_instruction<0xBD>(0x000DE6, 3); return true;
    // src/unknown/C0/C0CC11.asm:71 STA @LOCAL00 + fixed_point::fraction
    case 0xC0CC97: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CC11.asm:73 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CC99: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CC11.asm:73 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CC9B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CC11.asm:73 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CC9D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CC11.asm:73 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC0CC9F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0CC11.asm:74 SEP #PROC_FLAGS::INDEX8
    case 0xC0CCA1: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C0/C0CC11.asm:75 LDY #16
    case 0xC0CCA3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00A510, 3); return true;
    // src/unknown/C0/C0CC11.asm:76 LDA @LOCAL01
    case 0xC0CCA5: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:76 LDA @LOCAL01
    // Overlapping static entry reached from 0xC0CCA3.
    case 0xC0CCA6: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/unknown/C0/C0CC11.asm:77 JSL ASL16_ENTRY2
    case 0xC0CCA7: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/unknown/C0/C0CC11.asm:77 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC0CCA6.
    case 0xC0CCA8: cpu.execute_instruction<0x3E>(0x00C092, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C0/C0CC11.asm:78 STORE_INT1632 @VIRTUAL06
    case 0xC0CCAB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C0/C0CC11.asm:78 STORE_INT1632 @VIRTUAL06
    case 0xC0CCAD: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C0/C0CC11.asm:79 REP #PROC_FLAGS::INDEX8
    case 0xC0CCAF: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C0/C0CC11.asm:80 JSL DIVISION32
    case 0xC0CCB1: cpu.execute_instruction<0x22>(0xC090FF, 4); return true;
    // src/unknown/C0/C0CC11.asm:81 LDA @VIRTUAL06
    case 0xC0CCB5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0CC11.asm:82 STA @LOCAL01
    case 0xC0CCB7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:83 BNE @UNKNOWN10
    case 0xC0CCB9: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0CC11.asm:84 LDA #1
    case 0xC0CCBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0CC11.asm:84 LDA #1
    // Overlapping static entry reached from 0xC0CCBB.
    case 0xC0CCBD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0CC11.asm:85 STA @LOCAL01
    case 0xC0CCBE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:87 LDA CURRENT_SCRIPT_SLOT
    case 0xC0CCC0: cpu.execute_instruction<0xAD>(0x001A46, 3); return true;
    // src/unknown/C0/C0CC11.asm:88 ASL
    case 0xC0CCC3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:89 TAX
    case 0xC0CCC4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CC11.asm:90 LDA @LOCAL01
    case 0xC0CCC5: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0CC11.asm:91 STA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC0CCC7: cpu.execute_instruction<0x9D>(0x001372, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0CC11.asm:92 END_C_FUNCTION
    case 0xC0CCCA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0CC11.asm:92 END_C_FUNCTION
    case 0xC0CCCB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0CCCC.asm (unresolved).
bool execute_unresolved_c0_c0cccc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0CCCC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0CCCC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0CCCC.asm:8 END_STACK_VARS
    case 0xC0CCCE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0CCCC.asm:8 END_STACK_VARS
    case 0xC0CCCF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CCCC.asm:8 END_STACK_VARS
    case 0xC0CCD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CCCC.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0CCD0.
    case 0xC0CCD2: cpu.execute_instruction<0xFF>(0x42AC5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0CCCC.asm:8 END_STACK_VARS
    case 0xC0CCD3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:9 LDY CURRENT_ENTITY_SLOT
    case 0xC0CCD4: cpu.execute_instruction<0xAC>(0x001A42, 3); return true;
    // src/unknown/C0/C0CCCC.asm:9 LDY CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0CCD2.
    case 0xC0CCD6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:10 STY @LOCAL02
    case 0xC0CCD7: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C0CCCC.asm:11 TYA
    case 0xC0CCD9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:12 ASL
    case 0xC0CCDA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:13 TAX
    case 0xC0CCDB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:14 STX @LOCAL01
    case 0xC0CCDC: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C0CCCC.asm:15 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0CCDE: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0CCCC.asm:16 STA ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC0CCE1: cpu.execute_instruction<0x9D>(0x000FC6, 3); return true;
    // src/unknown/C0/C0CCCC.asm:17 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0CCE4: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0CCCC.asm:18 CLC
    case 0xC0CCE7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:19 ADC #16
    case 0xC0CCE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C0/C0CCCC.asm:19 ADC #16
    // Overlapping static entry reached from 0xC0CCE8.
    case 0xC0CCEA: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0CCCC.asm:20 STA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC0CCEB: cpu.execute_instruction<0x9D>(0x001002, 3); return true;
    // src/unknown/C0/C0CCCC.asm:21 STZ @LOCAL00 + fixed_point::fraction
    case 0xC0CCEE: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/unknown/C0/C0CCCC.asm:22 LDA ENTITY_MOVEMENT_SPEEDS,X
    case 0xC0CCF0: cpu.execute_instruction<0xBD>(0x002B32, 3); return true;
    // src/unknown/C0/C0CCCC.asm:23 LSR
    case 0xC0CCF3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:24 LSR
    case 0xC0CCF4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:25 LSR
    case 0xC0CCF5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:26 LSR
    case 0xC0CCF6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:27 STA @LOCAL00 + fixed_point::integer
    case 0xC0CCF7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CCCC.asm:28 MOVE_INT_CONSTANT $64800, @VIRTUAL0A
    case 0xC0CCF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004800, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0CCCC.asm:28 MOVE_INT_CONSTANT $64800, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0CCF9.
    case 0xC0CCFB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0CCCC.asm:28 MOVE_INT_CONSTANT $64800, @VIRTUAL0A
    case 0xC0CCFC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CCCC.asm:28 MOVE_INT_CONSTANT $64800, @VIRTUAL0A
    case 0xC0CCFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0CCCC.asm:28 MOVE_INT_CONSTANT $64800, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0CCFE.
    case 0xC0CD00: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0CCCC.asm:28 MOVE_INT_CONSTANT $64800, @VIRTUAL0A
    case 0xC0CD01: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CCCC.asm:29 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0CD03: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CCCC.asm:29 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0CD05: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CCCC.asm:29 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0CD07: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CCCC.asm:29 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0CD09: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0CCCC.asm:30 JSL DIVISION32
    case 0xC0CD0B: cpu.execute_instruction<0x22>(0xC090FF, 4); return true;
    // src/unknown/C0/C0CCCC.asm:31 LDA @VIRTUAL06
    case 0xC0CD0F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0CCCC.asm:32 XBA
    case 0xC0CD11: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:33 AND #$FF00
    case 0xC0CD12: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C0CCCC.asm:33 AND #$FF00
    // Overlapping static entry reached from 0xC0CD12.
    case 0xC0CD14: cpu.execute_instruction<0xFF>(0x0F8A9D, 4); return true;
    // src/unknown/C0/C0CCCC.asm:34 STA ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC0CD15: cpu.execute_instruction<0x9D>(0x000F8A, 3); return true;
    // src/unknown/C0/C0CCCC.asm:35 JSL RAND
    case 0xC0CD18: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/unknown/C0/C0CCCC.asm:36 AND #$0001
    case 0xC0CD1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0CCCC.asm:36 AND #$0001
    // Overlapping static entry reached from 0xC0CD1C.
    case 0xC0CD1E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0CCCC.asm:37 BEQ @UNKNOWN0
    case 0xC0CD1F: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C0CCCC.asm:38 LDX @LOCAL01
    case 0xC0CD21: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C0CCCC.asm:39 STZ ENTITY_DIRECTIONS,X
    case 0xC0CD23: cpu.execute_instruction<0x9E>(0x002AF6, 3); return true;
    // src/unknown/C0/C0CCCC.asm:40 BRA @UNKNOWN1
    case 0xC0CD26: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C0/C0CCCC.asm:42 LDA #DIRECTION::DOWN
    case 0xC0CD28: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C0/C0CCCC.asm:42 LDA #DIRECTION::DOWN
    // Overlapping static entry reached from 0xC0CD28.
    case 0xC0CD2A: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C0CCCC.asm:43 LDX @LOCAL01
    case 0xC0CD2B: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C0CCCC.asm:44 STA ENTITY_DIRECTIONS,X
    case 0xC0CD2D: cpu.execute_instruction<0x9D>(0x002AF6, 3); return true;
    // src/unknown/C0/C0CCCC.asm:44 STA ENTITY_DIRECTIONS,X
    // Overlapping static entry reached from 0xC0CD87.
    case 0xC0CD2E: cpu.execute_instruction<0xF6>(0x00002A, 2); return true;
    // src/unknown/C0/C0CCCC.asm:46 LDY @LOCAL02
    case 0xC0CD30: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C0/C0CCCC.asm:47 TYA
    case 0xC0CD32: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:48 ASL
    case 0xC0CD33: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:49 TAX
    case 0xC0CD34: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:50 LDA ENTITY_DIRECTIONS,X
    case 0xC0CD35: cpu.execute_instruction<0xBD>(0x002AF6, 3); return true;
    // src/unknown/C0/C0CCCC.asm:51 CMP #DIRECTION::DOWN
    case 0xC0CD38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0CCCC.asm:51 CMP #DIRECTION::DOWN
    // Overlapping static entry reached from 0xC0CD38.
    case 0xC0CD3A: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C0CCCC.asm:52 BCS @UNKNOWN2
    case 0xC0CD3B: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C0CCCC.asm:53 STZ ENTITY_UNKNOWN_2DC6,X
    case 0xC0CD3D: cpu.execute_instruction<0x9E>(0x002DC6, 3); return true;
    // src/unknown/C0/C0CCCC.asm:54 BRA @UNKNOWN3
    case 0xC0CD40: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C0CCCC.asm:56 LDA #.LOWORD(-1)
    case 0xC0CD42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0CCCC.asm:56 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0CD42.
    case 0xC0CD44: cpu.execute_instruction<0xFF>(0x2DC69D, 4); return true;
    // src/unknown/C0/C0CCCC.asm:57 STA ENTITY_UNKNOWN_2DC6,X
    case 0xC0CD45: cpu.execute_instruction<0x9D>(0x002DC6, 3); return true;
    // src/unknown/C0/C0CCCC.asm:59 TYA
    case 0xC0CD48: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:60 ASL
    case 0xC0CD49: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:61 TAX
    case 0xC0CD4A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CCCC.asm:62 STZ ENTITY_SCRIPT_VAR4_TABLE,X
    case 0xC0CD4B: cpu.execute_instruction<0x9E>(0x000F4E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0CCCC.asm:63 END_C_FUNCTION
    case 0xC0CD4E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0CCCC.asm:63 END_C_FUNCTION
    case 0xC0CD4F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0CD50.asm (unresolved).
bool execute_unresolved_c0_c0cd50_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0CD50.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0CD50: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0CD50.asm:17 END_STACK_VARS
    case 0xC0CD52: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0CD50.asm:17 END_STACK_VARS
    case 0xC0CD53: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CD50.asm:17 END_STACK_VARS
    case 0xC0CD54: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C8, 2); else cpu.execute_instruction<0x69>(0x00FFC8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CD50.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC0CD54.
    case 0xC0CD56: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0CD50.asm:17 END_STACK_VARS
    case 0xC0CD57: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0CD50.asm:18 LDA CURRENT_ENTITY_SLOT
    case 0xC0CD58: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0CD50.asm:18 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0CD56.
    case 0xC0CD5A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0CD50.asm:19 STA @LOCAL0A
    case 0xC0CD5B: cpu.execute_instruction<0x85>(0x000036, 2); return true;
    // src/unknown/C0/C0CD50.asm:20 ASL
    case 0xC0CD5D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CD50.asm:21 TAX
    case 0xC0CD5E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CD50.asm:22 LDA ENTITY_UNKNOWN_2DC6,X
    case 0xC0CD5F: cpu.execute_instruction<0xBD>(0x002DC6, 3); return true;
    // src/unknown/C0/C0CD50.asm:23 STA @VIRTUAL04
    case 0xC0CD62: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0CD50.asm:24 BNE @UNKNOWN0
    case 0xC0CD64: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C0/C0CD50.asm:25 LDA ENTITY_SCRIPT_VAR4_TABLE,X
    case 0xC0CD66: cpu.execute_instruction<0xBD>(0x000F4E, 3); return true;
    // src/unknown/C0/C0CD50.asm:26 CLC
    case 0xC0CD69: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CD50.asm:27 ADC ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC0CD6A: cpu.execute_instruction<0x7D>(0x000F8A, 3); return true;
    // src/unknown/C0/C0CD50.asm:28 STA @VIRTUAL02
    case 0xC0CD6D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0CD50.asm:29 BRA @UNKNOWN1
    case 0xC0CD6F: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C0/C0CD50.asm:31 LDA ENTITY_SCRIPT_VAR4_TABLE,X
    case 0xC0CD71: cpu.execute_instruction<0xBD>(0x000F4E, 3); return true;
    // src/unknown/C0/C0CD50.asm:32 SEC
    case 0xC0CD74: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CD50.asm:33 SBC ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC0CD75: cpu.execute_instruction<0xFD>(0x000F8A, 3); return true;
    // src/unknown/C0/C0CD50.asm:34 STA @VIRTUAL02
    case 0xC0CD78: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0CD50.asm:36 LDA @LOCAL0A
    case 0xC0CD7A: cpu.execute_instruction<0xA5>(0x000036, 2); return true;
    // src/unknown/C0/C0CD50.asm:37 ASL
    case 0xC0CD7C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CD50.asm:38 TAY
    case 0xC0CD7D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0CD50.asm:39 STY @LOCAL0A
    case 0xC0CD7E: cpu.execute_instruction<0x84>(0x000036, 2); return true;
    // src/unknown/C0/C0CD50.asm:40 LDA @VIRTUAL02
    case 0xC0CD80: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0CD50.asm:41 STA ENTITY_SCRIPT_VAR4_TABLE,Y
    case 0xC0CD82: cpu.execute_instruction<0x99>(0x000F4E, 3); return true;
    // src/unknown/C0/C0CD50.asm:42 LDX #$1000
    case 0xC0CD85: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x001000, 3); return true;
    // src/unknown/C0/C0CD50.asm:42 LDX #$1000
    // Overlapping static entry reached from 0xC0CD85.
    case 0xC0CD87: cpu.execute_instruction<0x10>(0x0000A5, 2); return true;
    // src/unknown/C0/C0CD50.asm:43 LDA @VIRTUAL02
    case 0xC0CD88: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0CD50.asm:43 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC0CD87.
    case 0xC0CD89: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C0/C0CD50.asm:44 JSL UNKNOWN_C41FFF
    case 0xC0CD8A: cpu.execute_instruction<0x22>(0xC41FFF, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50.asm:45 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0CD8E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50.asm:45 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0CD90: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50.asm:45 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0CD92: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50.asm:45 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0CD94: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0CD50.asm:46 STZ @LOCAL04 + fixed_point::fraction
    case 0xC0CD96: cpu.execute_instruction<0x64>(0x00001E, 2); return true;
    // src/unknown/C0/C0CD50.asm:47 STZ @LOCAL03 + fixed_point::fraction
    case 0xC0CD98: cpu.execute_instruction<0x64>(0x00001A, 2); return true;
    // src/unknown/C0/C0CD50.asm:48 LDA @LOCAL00 + fixed_point::integer
    case 0xC0CD9A: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0CD50.asm:49 STA @LOCAL03 + fixed_point::integer
    case 0xC0CD9C: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C0CD50.asm:50 LDA @LOCAL00 + fixed_point::fraction
    case 0xC0CD9E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0CD50.asm:51 STA @LOCAL04 + fixed_point::integer
    case 0xC0CDA0: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50.asm:52 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0CDA2: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50.asm:52 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0CDA4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50.asm:52 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0CDA6: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50.asm:52 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0CDA8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/unknown/C0/C0CD50.asm:53 ASR8_INT @VIRTUAL06
    case 0xC0CDAA: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/unknown/C0/C0CD50.asm:53 ASR8_INT @VIRTUAL06
    case 0xC0CDAC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0CD50.asm:53 ASR8_INT @VIRTUAL06
    case 0xC0CDAE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/unknown/C0/C0CD50.asm:53 ASR8_INT @VIRTUAL06
    case 0xC0CDB0: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0CD50.asm:53 ASR8_INT @VIRTUAL06
    case 0xC0CDB2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0CD50.asm:53 ASR8_INT @VIRTUAL06
    case 0xC0CDB4: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/unknown/C0/C0CD50.asm:53 ASR8_INT @VIRTUAL06
    case 0xC0CDB6: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/unknown/C0/C0CD50.asm:53 ASR8_INT @VIRTUAL06
    case 0xC0CDB8: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0CD50.asm:53 ASR8_INT @VIRTUAL06
    case 0xC0CDBA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50.asm:54 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0CDBC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50.asm:54 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0CDBE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50.asm:54 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0CDC0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50.asm:54 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0CDC2: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50.asm:55 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0CDC4: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50.asm:55 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0CDC6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50.asm:55 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0CDC8: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50.asm:55 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0CDCA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50.asm:56 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0CDCC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50.asm:56 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0CDCE: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50.asm:56 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0CDD0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50.asm:56 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0CDD2: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50.asm:57 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0CDD4: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50.asm:57 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0CDD6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50.asm:57 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0CDD8: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50.asm:57 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0CDDA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/unknown/C0/C0CD50.asm:58 ASR8_INT @VIRTUAL06
    case 0xC0CDDC: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/unknown/C0/C0CD50.asm:58 ASR8_INT @VIRTUAL06
    case 0xC0CDDE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0CD50.asm:58 ASR8_INT @VIRTUAL06
    case 0xC0CDE0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/unknown/C0/C0CD50.asm:58 ASR8_INT @VIRTUAL06
    case 0xC0CDE2: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0CD50.asm:58 ASR8_INT @VIRTUAL06
    case 0xC0CDE4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0CD50.asm:58 ASR8_INT @VIRTUAL06
    case 0xC0CDE6: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/unknown/C0/C0CD50.asm:58 ASR8_INT @VIRTUAL06
    case 0xC0CDE8: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/unknown/C0/C0CD50.asm:58 ASR8_INT @VIRTUAL06
    case 0xC0CDEA: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0CD50.asm:58 ASR8_INT @VIRTUAL06
    case 0xC0CDEC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50.asm:59 MOVE_INT @VIRTUAL06, @LOCAL09
    case 0xC0CDEE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50.asm:59 MOVE_INT @VIRTUAL06, @LOCAL09
    case 0xC0CDF0: cpu.execute_instruction<0x85>(0x000032, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50.asm:59 MOVE_INT @VIRTUAL06, @LOCAL09
    case 0xC0CDF2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50.asm:59 MOVE_INT @VIRTUAL06, @LOCAL09
    case 0xC0CDF4: cpu.execute_instruction<0x85>(0x000034, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50.asm:60 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0CDF6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50.asm:60 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0CDF8: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50.asm:60 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0CDFA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50.asm:60 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0CDFC: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C0CD50.asm:61 STZ @LOCAL06 + fixed_point::fraction
    case 0xC0CDFE: cpu.execute_instruction<0x64>(0x000026, 2); return true;
    // src/unknown/C0/C0CD50.asm:62 STZ @LOCAL05 + fixed_point::fraction
    case 0xC0CE00: cpu.execute_instruction<0x64>(0x000022, 2); return true;
    // src/unknown/C0/C0CD50.asm:63 LDY @LOCAL0A
    case 0xC0CE02: cpu.execute_instruction<0xA4>(0x000036, 2); return true;
    // src/unknown/C0/C0CD50.asm:64 LDA ENTITY_SCRIPT_VAR6_TABLE,Y
    case 0xC0CE04: cpu.execute_instruction<0xB9>(0x000FC6, 3); return true;
    // src/unknown/C0/C0CD50.asm:65 STA @LOCAL05 + fixed_point::integer
    case 0xC0CE07: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C0/C0CD50.asm:66 LDA ENTITY_SCRIPT_VAR7_TABLE,Y
    case 0xC0CE09: cpu.execute_instruction<0xB9>(0x001002, 3); return true;
    // src/unknown/C0/C0CD50.asm:67 STA @LOCAL06 + fixed_point::integer
    case 0xC0CE0C: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C0CD50.asm:68 LDA ENTITY_ABS_X_TABLE,Y
    case 0xC0CE0E: cpu.execute_instruction<0xB9>(0x000B8E, 3); return true;
    // src/unknown/C0/C0CD50.asm:69 STA @LOCAL01 + fixed_point::integer
    case 0xC0CE11: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0CD50.asm:70 LDA ENTITY_ABS_X_FRACTION_TABLE,Y
    case 0xC0CE13: cpu.execute_instruction<0xB9>(0x000C42, 3); return true;
    // src/unknown/C0/C0CD50.asm:71 STA @LOCAL01 + fixed_point::fraction
    case 0xC0CE16: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0CD50.asm:72 LDA ENTITY_ABS_Y_TABLE,Y
    case 0xC0CE18: cpu.execute_instruction<0xB9>(0x000BCA, 3); return true;
    // src/unknown/C0/C0CD50.asm:73 STA @LOCAL02 + fixed_point::integer
    case 0xC0CE1B: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0CD50.asm:74 LDA ENTITY_ABS_Y_FRACTION_TABLE,Y
    case 0xC0CE1D: cpu.execute_instruction<0xB9>(0x000C7E, 3); return true;
    // src/unknown/C0/C0CD50.asm:75 STA @LOCAL02 + fixed_point::fraction
    case 0xC0CE20: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50.asm:76 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0CE22: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50.asm:76 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0CE24: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50.asm:76 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0CE26: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50.asm:76 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0CE28: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0CD50.asm:77 CLC
    case 0xC0CE2A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C0CD50.asm:78 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE2B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C0CD50.asm:78 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE2D: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C0CD50.asm:78 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE2F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C0CD50.asm:78 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE31: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C0CD50.asm:78 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE33: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50.asm:78 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE35: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50.asm:79 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CE37: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50.asm:79 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CE39: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50.asm:79 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CE3B: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50.asm:79 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0CE3D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0CD50.asm:80 SEC
    case 0xC0CE3F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/unknown/C0/C0CD50.asm:81 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE40: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/unknown/C0/C0CD50.asm:81 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE42: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/unknown/C0/C0CD50.asm:81 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE44: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/unknown/C0/C0CD50.asm:81 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE46: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/unknown/C0/C0CD50.asm:81 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE48: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50.asm:81 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE4A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50.asm:82 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC0CE4C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50.asm:82 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC0CE4E: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50.asm:82 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC0CE50: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50.asm:82 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC0CE52: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50.asm:83 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC0CE54: cpu.execute_instruction<0xA5>(0x000032, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50.asm:83 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC0CE56: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50.asm:83 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC0CE58: cpu.execute_instruction<0xA5>(0x000034, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50.asm:83 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC0CE5A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50.asm:84 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE5C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50.asm:84 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE5E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50.asm:84 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE60: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50.asm:84 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE62: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50.asm:85 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC0CE64: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50.asm:85 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC0CE66: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50.asm:85 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC0CE68: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50.asm:85 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC0CE6A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0CD50.asm:86 CLC
    case 0xC0CE6C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C0CD50.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE6D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C0CD50.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE6F: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C0CD50.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE71: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C0CD50.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE73: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C0CD50.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE75: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE77: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50.asm:87 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0CEC9.
    case 0xC0CE78: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50.asm:88 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC0CE79: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50.asm:88 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC0CE7B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50.asm:88 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC0CE7D: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50.asm:88 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC0CE7F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0CD50.asm:89 SEC
    case 0xC0CE81: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/unknown/C0/C0CD50.asm:90 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE82: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/unknown/C0/C0CD50.asm:90 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE84: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/unknown/C0/C0CD50.asm:90 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE86: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/unknown/C0/C0CD50.asm:90 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE88: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/unknown/C0/C0CD50.asm:90 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE8A: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50.asm:90 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0CE8C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0CD50.asm:91 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC0CE8E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0CD50.asm:91 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC0CE90: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0CD50.asm:91 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC0CE92: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0CD50.asm:91 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC0CE94: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // src/unknown/C0/C0CD50.asm:92 LDA @LOCAL07 + fixed_point::integer
    case 0xC0CE96: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/unknown/C0/C0CD50.asm:93 STA ENTITY_DELTA_X_TABLE,Y
    case 0xC0CE98: cpu.execute_instruction<0x99>(0x000CF6, 3); return true;
    // src/unknown/C0/C0CD50.asm:94 LDA @LOCAL07 + fixed_point::fraction
    case 0xC0CE9B: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/unknown/C0/C0CD50.asm:95 STA ENTITY_DELTA_X_FRACTION_TABLE,Y
    case 0xC0CE9D: cpu.execute_instruction<0x99>(0x000DAA, 3); return true;
    // src/unknown/C0/C0CD50.asm:96 LDA @LOCAL08 + fixed_point::integer
    case 0xC0CEA0: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/unknown/C0/C0CD50.asm:97 STA ENTITY_DELTA_Y_TABLE,Y
    case 0xC0CEA2: cpu.execute_instruction<0x99>(0x000D32, 3); return true;
    // src/unknown/C0/C0CD50.asm:98 LDA @LOCAL08 + fixed_point::fraction
    case 0xC0CEA5: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/unknown/C0/C0CD50.asm:99 STA ENTITY_DELTA_Y_FRACTION_TABLE,Y
    case 0xC0CEA7: cpu.execute_instruction<0x99>(0x000DE6, 3); return true;
    // src/unknown/C0/C0CD50.asm:100 LDA @VIRTUAL04
    case 0xC0CEAA: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0CD50.asm:101 BNE @UNKNOWN4
    case 0xC0CEAC: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C0/C0CD50.asm:102 LDA @VIRTUAL02
    case 0xC0CEAE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0CD50.asm:103 CLC
    case 0xC0CEB0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CD50.asm:104 ADC #$4000
    case 0xC0CEB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x004000, 3); return true;
    // src/unknown/C0/C0CD50.asm:104 ADC #$4000
    // Overlapping static entry reached from 0xC0CEB1.
    case 0xC0CEB3: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C0CD50.asm:105 BRA @UNKNOWN5
    case 0xC0CEB4: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C0CD50.asm:107 LDA @VIRTUAL02
    case 0xC0CEB6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0CD50.asm:108 SEC
    case 0xC0CEB8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CD50.asm:109 SBC #$4000
    case 0xC0CEB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x004000, 3); return true;
    // src/unknown/C0/C0CD50.asm:109 SBC #$4000
    // Overlapping static entry reached from 0xC0CEB9.
    case 0xC0CEBB: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0CD50.asm:111 END_C_FUNCTION
    case 0xC0CEBC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0CD50.asm:111 END_C_FUNCTION
    case 0xC0CEBD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0CEBE.asm (unresolved).
bool execute_unresolved_c0_c0cebe_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0CEBE.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0CEBE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0CEBE.asm:9 END_STACK_VARS
    case 0xC0CEC0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0CEBE.asm:9 END_STACK_VARS
    case 0xC0CEC1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0CEBE.asm:9 END_STACK_VARS
    case 0xC0CEC2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CEBE.asm:9 END_STACK_VARS
    case 0xC0CEC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CEBE.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0CEC3.
    case 0xC0CEC5: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0CEBE.asm:9 END_STACK_VARS
    case 0xC0CEC6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0CEBE.asm:9 END_STACK_VARS
    case 0xC0CEC7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:10 STA @LOCAL01
    case 0xC0CEC8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0CEBE.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xC0CEC5.
    case 0xC0CEC9: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/unknown/C0/C0CEBE.asm:11 LDA CURRENT_ENTITY_SLOT
    case 0xC0CECA: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0CEBE.asm:11 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0CEC9.
    case 0xC0CECB: cpu.execute_instruction<0x42>(0x00001A, 2); return true;
    // src/unknown/C0/C0CEBE.asm:12 STA @LOCAL00
    case 0xC0CECD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0CEBE.asm:13 ASL
    case 0xC0CECF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:14 TAX
    case 0xC0CED0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:15 LDA ENTITY_SCRIPT_VAR4_TABLE,X
    case 0xC0CED1: cpu.execute_instruction<0xBD>(0x000F4E, 3); return true;
    // src/unknown/C0/C0CEBE.asm:16 STA @VIRTUAL02
    case 0xC0CED4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0CEBE.asm:17 STA @VIRTUAL04
    case 0xC0CED6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0CEBE.asm:18 LDA @LOCAL01
    case 0xC0CED8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0CEBE.asm:19 CMP @VIRTUAL02
    case 0xC0CEDA: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C0CEBE.asm:20 BEQ @UNKNOWN5
    case 0xC0CEDC: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // src/unknown/C0/C0CEBE.asm:21 CMP @VIRTUAL02
    case 0xC0CEDE: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0CEBE.asm:22 BLTEQ @UNKNOWN1
    case 0xC0CEE0: cpu.execute_instruction<0x90>(0x000014, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0CEBE.asm:22 BLTEQ @UNKNOWN1
    case 0xC0CEE2: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/unknown/C0/C0CEBE.asm:23 SEC
    case 0xC0CEE4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:24 SBC @VIRTUAL02
    case 0xC0CEE5: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0CEBE.asm:25 CMP #$8000
    case 0xC0CEE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C0CEBE.asm:25 CMP #$8000
    // Overlapping static entry reached from 0xC0CEE7.
    case 0xC0CEE9: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/C0/C0CEBE.asm:26 BCS @UNKNOWN0
    case 0xC0CEEA: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C0CEBE.asm:27 LDX #0
    case 0xC0CEEC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0CEBE.asm:27 LDX #0
    // Overlapping static entry reached from 0xC0CEEC.
    case 0xC0CEEE: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0CEBE.asm:28 BRA @UNKNOWN3
    case 0xC0CEEF: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C0/C0CEBE.asm:30 LDX #.LOWORD(-1)
    case 0xC0CEF1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0CEBE.asm:30 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0CEF1.
    case 0xC0CEF3: cpu.execute_instruction<0xFF>(0x851480, 4); return true;
    // src/unknown/C0/C0CEBE.asm:31 BRA @UNKNOWN3
    case 0xC0CEF4: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C0/C0CEBE.asm:33 STA @VIRTUAL04
    case 0xC0CEF6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0CEBE.asm:33 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC0CEF3.
    case 0xC0CEF7: cpu.execute_instruction<0x04>(0x0000A5, 2); return true;
    // src/unknown/C0/C0CEBE.asm:34 LDA @VIRTUAL02
    case 0xC0CEF8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0CEBE.asm:34 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC0CEF7.
    case 0xC0CEF9: cpu.execute_instruction<0x02>(0x000038, 2); return true;
    // src/unknown/C0/C0CEBE.asm:35 SEC
    case 0xC0CEFA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:36 SBC @VIRTUAL04
    case 0xC0CEFB: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C0/C0CEBE.asm:37 CMP #$8000
    case 0xC0CEFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C0CEBE.asm:37 CMP #$8000
    // Overlapping static entry reached from 0xC0CEFD.
    case 0xC0CEFF: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/C0/C0CEBE.asm:38 BCS @UNKNOWN2
    case 0xC0CF00: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C0CEBE.asm:39 LDX #.LOWORD(-1)
    case 0xC0CF02: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0CEBE.asm:39 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0CF02.
    case 0xC0CF04: cpu.execute_instruction<0xFF>(0xA20380, 4); return true;
    // src/unknown/C0/C0CEBE.asm:40 BRA @UNKNOWN3
    case 0xC0CF05: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0CEBE.asm:42 LDX #0
    case 0xC0CF07: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0CEBE.asm:42 LDX #0
    // Overlapping static entry reached from 0xC0CF04.
    case 0xC0CF08: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0CEBE.asm:42 LDX #0
    // Overlapping static entry reached from 0xC0CF07.
    case 0xC0CF09: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0CEBE.asm:44 BNE @UNKNOWN4
    case 0xC0CF0A: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C0/C0CEBE.asm:45 LDA @VIRTUAL02
    case 0xC0CF0C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0CEBE.asm:46 CLC
    case 0xC0CF0E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:47 ADC #$0800
    case 0xC0CF0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000800, 3); return true;
    // src/unknown/C0/C0CEBE.asm:47 ADC #$0800
    // Overlapping static entry reached from 0xC0CF0F.
    case 0xC0CF11: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:48 STA @VIRTUAL04
    case 0xC0CF12: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0CEBE.asm:49 BRA @UNKNOWN5
    case 0xC0CF14: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C0/C0CEBE.asm:51 LDA @VIRTUAL02
    case 0xC0CF16: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0CEBE.asm:52 SEC
    case 0xC0CF18: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:53 SBC #$0800
    case 0xC0CF19: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000800, 3); return true;
    // src/unknown/C0/C0CEBE.asm:53 SBC #$0800
    // Overlapping static entry reached from 0xC0CF19.
    case 0xC0CF1B: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:54 STA @VIRTUAL04
    case 0xC0CF1C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0CEBE.asm:56 LDA @LOCAL00
    case 0xC0CF1E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0CEBE.asm:57 ASL
    case 0xC0CF20: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:58 TAX
    case 0xC0CF21: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:59 CLC
    case 0xC0CF22: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:60 ADC #.LOWORD(ENTITY_MOVEMENT_SPEEDS)
    case 0xC0CF23: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000032, 2); else cpu.execute_instruction<0x69>(0x002B32, 3); return true;
    // src/unknown/C0/C0CEBE.asm:60 ADC #.LOWORD(ENTITY_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC0CF23.
    case 0xC0CF25: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:61 TAY
    case 0xC0CF26: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:62 LDA __BSS_START__,Y
    case 0xC0CF27: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0CEBE.asm:63 CMP ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC0CF2A: cpu.execute_instruction<0xDD>(0x000F12, 3); return true;
    // src/unknown/C0/C0CEBE.asm:64 BCS @UNKNOWN6
    case 0xC0CF2D: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/unknown/C0/C0CEBE.asm:65 CLC
    case 0xC0CF2F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:66 ADC #16
    case 0xC0CF30: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C0/C0CEBE.asm:66 ADC #16
    // Overlapping static entry reached from 0xC0CF30.
    case 0xC0CF32: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C0CEBE.asm:67 STA __BSS_START__,Y
    case 0xC0CF33: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0CEBE.asm:69 LDA @VIRTUAL02
    case 0xC0CF36: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0CEBE.asm:70 JSL UNKNOWN_C46B0A
    case 0xC0CF38: cpu.execute_instruction<0x22>(0xC46B0A, 4); return true;
    // src/unknown/C0/C0CEBE.asm:71 TAX
    case 0xC0CF3C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:72 STX @LOCAL01
    case 0xC0CF3D: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0CEBE.asm:73 LDA @VIRTUAL04
    case 0xC0CF3F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0CEBE.asm:74 JSL UNKNOWN_C46B0A
    case 0xC0CF41: cpu.execute_instruction<0x22>(0xC46B0A, 4); return true;
    // src/unknown/C0/C0CEBE.asm:75 STA @VIRTUAL02
    case 0xC0CF45: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0CEBE.asm:76 LDX @LOCAL01
    case 0xC0CF47: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0CEBE.asm:77 TXA
    case 0xC0CF49: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0CEBE.asm:78 CMP @VIRTUAL02
    case 0xC0CF4A: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C0CEBE.asm:79 BEQ @UNKNOWN7
    case 0xC0CF4C: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0CEBE.asm:80 LDA @LOCAL00
    case 0xC0CF4E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0CEBE.asm:81 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC0CF50: cpu.execute_instruction<0x22>(0xC0A48F, 4); return true;
    // src/unknown/C0/C0CEBE.asm:83 LDA @VIRTUAL04
    case 0xC0CF54: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0CEBE.asm:84 END_C_FUNCTION
    case 0xC0CF56: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0CEBE.asm:84 END_C_FUNCTION
    case 0xC0CF57: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0CF97.asm (unresolved).
bool execute_unresolved_c0_c0cf97_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0CF97.asm:3 BEGIN_C_FUNCTION
    case 0xC0CF97: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0CF97.asm:16 END_STACK_VARS
    case 0xC0CF99: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0CF97.asm:16 END_STACK_VARS
    case 0xC0CF9A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0CF97.asm:16 END_STACK_VARS
    case 0xC0CF9B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CF97.asm:16 END_STACK_VARS
    case 0xC0CF9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0CF97.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC0CF9C.
    case 0xC0CF9E: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0CF97.asm:16 END_STACK_VARS
    case 0xC0CF9F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0CF97.asm:16 END_STACK_VARS
    case 0xC0CFA0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:17 STX @LOCAL07
    case 0xC0CFA1: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C0CF97.asm:17 STX @LOCAL07
    // Overlapping static entry reached from 0xC0CF9E.
    case 0xC0CFA2: cpu.execute_instruction<0x1C>(0x0020E2, 3); return true;
    // src/unknown/C0/C0CF97.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC0CFA3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0CF97.asm:19 STA @VIRTUAL00
    case 0xC0CFA5: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C0CF97.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC0CFA7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0CF97.asm:21 LDA CURRENT_ENTITY_SLOT
    case 0xC0CFA9: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0CF97.asm:22 STA @LOCAL06
    case 0xC0CFAC: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0CF97.asm:23 ASL
    case 0xC0CFAE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:24 TAX
    case 0xC0CFAF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:25 STX @LOCAL05
    case 0xC0CFB0: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C0/C0CF97.asm:26 LDA ENTITY_SIZES,X
    case 0xC0CFB2: cpu.execute_instruction<0xBD>(0x002B6E, 3); return true;
    // src/unknown/C0/C0CF97.asm:27 STA @LOCAL04
    case 0xC0CFB5: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0CF97.asm:28 LOADPTR UNKNOWN_C0CF58, @VIRTUAL06
    case 0xC0CFB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000058, 2); else cpu.execute_instruction<0xA9>(0x00CF58, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0CF97.asm:28 LOADPTR UNKNOWN_C0CF58, @VIRTUAL06
    // Overlapping static entry reached from 0xC0CFB7.
    case 0xC0CFB9: cpu.execute_instruction<0xCF>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0CF97.asm:28 LOADPTR UNKNOWN_C0CF58, @VIRTUAL06
    case 0xC0CFBA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0CF97.asm:28 LOADPTR UNKNOWN_C0CF58, @VIRTUAL06
    case 0xC0CFBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0CF97.asm:28 LOADPTR UNKNOWN_C0CF58, @VIRTUAL06
    // Overlapping static entry reached from 0xC0CFB9.
    case 0xC0CFBD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0CF97.asm:28 LOADPTR UNKNOWN_C0CF58, @VIRTUAL06
    // Overlapping static entry reached from 0xC0CFBC.
    case 0xC0CFBE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0CF97.asm:28 LOADPTR UNKNOWN_C0CF58, @VIRTUAL06
    case 0xC0CFBF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0CF97.asm:28 LOADPTR UNKNOWN_C0CF58, @VIRTUAL06
    // Overlapping static entry reached from 0xC0CFBD.
    case 0xC0CFC0: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:29 LDA @LOCAL04
    case 0xC0CFC1: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0CF97.asm:30 ASL
    case 0xC0CFC3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:31 STA @LOCAL03
    case 0xC0CFC4: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0CF97.asm:32 PHA
    case 0xC0CFC6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:33 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0CFC7: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0CF97.asm:34 PLX
    case 0xC0CFCA: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:35 SEC
    case 0xC0CFCB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:36 SBC f:UNKNOWN_C42A1F,X
    case 0xC0CFCC: cpu.execute_instruction<0xFF>(0xC42A1F, 4); return true;
    // src/unknown/C0/C0CF97.asm:37 LSR
    case 0xC0CFD0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:38 LSR
    case 0xC0CFD1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:39 LSR
    case 0xC0CFD2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:40 SEC
    case 0xC0CFD3: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:41 SBC #4
    case 0xC0CFD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/unknown/C0/C0CF97.asm:41 SBC #4
    // Overlapping static entry reached from 0xC0CFD4.
    case 0xC0CFD6: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C0CF97.asm:42 TAY
    case 0xC0CFD7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:43 LDA @LOCAL03
    case 0xC0CFD8: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0CF97.asm:44 PHA
    case 0xC0CFDA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:45 PHA
    case 0xC0CFDB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:46 LDX @LOCAL05
    case 0xC0CFDC: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0CF97.asm:47 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0CFDE: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0CF97.asm:48 PLX
    case 0xC0CFE1: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:49 SEC
    case 0xC0CFE2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:50 SBC f:UNKNOWN_C42A41,X
    case 0xC0CFE3: cpu.execute_instruction<0xFF>(0xC42A41, 4); return true;
    // src/unknown/C0/C0CF97.asm:51 PLX
    case 0xC0CFE7: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:52 CLC
    case 0xC0CFE8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:53 ADC f:UNKNOWN_C42AEB,X
    case 0xC0CFE9: cpu.execute_instruction<0x7F>(0xC42AEB, 4); return true;
    // src/unknown/C0/C0CF97.asm:54 LSR
    case 0xC0CFED: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:55 LSR
    case 0xC0CFEE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:56 LSR
    case 0xC0CFEF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:57 SEC
    case 0xC0CFF0: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:58 SBC #4
    case 0xC0CFF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/unknown/C0/C0CF97.asm:58 SBC #4
    // Overlapping static entry reached from 0xC0CFF1.
    case 0xC0CFF3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0CF97.asm:59 STA @VIRTUAL02
    case 0xC0CFF4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0CF97.asm:60 STA @LOCAL02
    case 0xC0CFF6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0CF97.asm:61 TYA
    case 0xC0CFF8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:62 AND #$003F
    case 0xC0CFF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0CF97.asm:62 AND #$003F
    // Overlapping static entry reached from 0xC0CFF9.
    case 0xC0CFFB: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C0CF97.asm:63 TAX
    case 0xC0CFFC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:64 STX @LOCAL01
    case 0xC0CFFD: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0CF97.asm:65 LDA @VIRTUAL02
    case 0xC0CFFF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0CF97.asm:66 AND #$003F
    case 0xC0D001: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0CF97.asm:66 AND #$003F
    // Overlapping static entry reached from 0xC0D001.
    case 0xC0D003: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0CF97.asm:67 STA @LOCAL05
    case 0xC0D004: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0CF97.asm:68 LDA #0
    case 0xC0D006: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0CF97.asm:68 LDA #0
    // Overlapping static entry reached from 0xC0D006.
    case 0xC0D008: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0CF97.asm:69 STA @VIRTUAL04
    case 0xC0D009: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0CF97.asm:70 JMP @UNKNOWN7
    case 0xC0D00B: cpu.execute_instruction<0x4C>(0x00D091, 3); return true;
    // src/unknown/C0/C0CF97.asm:72 LDX @LOCAL01
    case 0xC0D00E: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0CF97.asm:73 CPX #64
    case 0xC0D010: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000040, 2); else cpu.execute_instruction<0xE0>(0x000040, 3); return true;
    // src/unknown/C0/C0CF97.asm:73 CPX #64
    // Overlapping static entry reached from 0xC0D010.
    case 0xC0D012: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C0CF97.asm:74 BCS @UNKNOWN1
    case 0xC0D013: cpu.execute_instruction<0xB0>(0x00002A, 2); return true;
    // src/unknown/C0/C0CF97.asm:75 LDA @LOCAL05
    case 0xC0D015: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0CF97.asm:76 CMP #64
    case 0xC0D017: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/unknown/C0/C0CF97.asm:76 CMP #64
    // Overlapping static entry reached from 0xC0D017.
    case 0xC0D019: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C0CF97.asm:77 BCS @UNKNOWN1
    case 0xC0D01A: cpu.execute_instruction<0xB0>(0x000023, 2); return true;
    // src/unknown/C0/C0CF97.asm:78 TXA
    case 0xC0D01C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:79 AND #$003F
    case 0xC0D01D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0CF97.asm:79 AND #$003F
    // Overlapping static entry reached from 0xC0D01D.
    case 0xC0D01F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0CF97.asm:80 STA @VIRTUAL02
    case 0xC0D020: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0CF97.asm:81 LDA @LOCAL05
    case 0xC0D022: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0CF97.asm:82 AND #$003F
    case 0xC0D024: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0CF97.asm:82 AND #$003F
    // Overlapping static entry reached from 0xC0D024.
    case 0xC0D026: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:696 ASL
    // Macro caller: src/unknown/C0/C0CF97.asm:83 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC0D027: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:697 ASL
    // Macro caller: src/unknown/C0/C0CF97.asm:83 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC0D028: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:698 ASL
    // Macro caller: src/unknown/C0/C0CF97.asm:83 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC0D029: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:699 ASL
    // Macro caller: src/unknown/C0/C0CF97.asm:83 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC0D02A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:700 ASL
    // Macro caller: src/unknown/C0/C0CF97.asm:83 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC0D02B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:701 ASL
    // Macro caller: src/unknown/C0/C0CF97.asm:83 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC0D02C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:84 CLC
    case 0xC0D02D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:85 ADC @VIRTUAL02
    case 0xC0D02E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0CF97.asm:86 TAX
    case 0xC0D030: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:87 SEP #PROC_FLAGS::ACCUM8
    case 0xC0D031: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0CF97.asm:88 LDA @VIRTUAL00
    case 0xC0D033: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C0/C0CF97.asm:89 AND LOADED_COLLISION_TILES,X
    case 0xC0D035: cpu.execute_instruction<0x3D>(0x00E000, 3); return true;
    // src/unknown/C0/C0CF97.asm:90 REP #PROC_FLAGS::ACCUM8
    case 0xC0D038: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0CF97.asm:91 AND #$00FF
    case 0xC0D03A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0CF97.asm:91 AND #$00FF
    // Overlapping static entry reached from 0xC0D03A.
    case 0xC0D03C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0CF97.asm:92 BNE @UNKNOWN9
    case 0xC0D03D: cpu.execute_instruction<0xD0>(0x000060, 2); return true;
    // src/unknown/C0/C0CF97.asm:94 LDA [@VIRTUAL06]
    case 0xC0D03F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0CF97.asm:95 AND #$00FF
    case 0xC0D041: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0CF97.asm:95 AND #$00FF
    // Overlapping static entry reached from 0xC0D041.
    case 0xC0D043: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0CF97.asm:96 STA @LOCAL00
    case 0xC0D044: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0CF97.asm:97 INC @VIRTUAL06
    case 0xC0D046: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C0/C0CF97.asm:98 LDA @LOCAL00
    case 0xC0D048: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0CF97.asm:99 CMP #1
    case 0xC0D04A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0CF97.asm:99 CMP #1
    // Overlapping static entry reached from 0xC0D04A.
    case 0xC0D04C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0CF97.asm:100 BEQ @UNKNOWN2
    case 0xC0D04D: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C0CF97.asm:101 CMP #2
    case 0xC0D04F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0CF97.asm:101 CMP #2
    // Overlapping static entry reached from 0xC0D04F.
    case 0xC0D051: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0CF97.asm:102 BEQ @UNKNOWN3
    case 0xC0D052: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C0/C0CF97.asm:103 CMP #3
    case 0xC0D054: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0CF97.asm:103 CMP #3
    // Overlapping static entry reached from 0xC0D054.
    case 0xC0D056: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0CF97.asm:104 BEQ @UNKNOWN4
    case 0xC0D057: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/unknown/C0/C0CF97.asm:105 CMP #4
    case 0xC0D059: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0CF97.asm:105 CMP #4
    // Overlapping static entry reached from 0xC0D059.
    case 0xC0D05B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0CF97.asm:106 BEQ @UNKNOWN5
    case 0xC0D05C: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/unknown/C0/C0CF97.asm:107 BRA @UNKNOWN6
    case 0xC0D05E: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C0/C0CF97.asm:109 LDA @LOCAL05
    case 0xC0D060: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0CF97.asm:110 DEC
    case 0xC0D062: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:111 STA @LOCAL05
    case 0xC0D063: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0CF97.asm:112 LDA @LOCAL02
    case 0xC0D065: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0CF97.asm:113 STA @VIRTUAL02
    case 0xC0D067: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0CF97.asm:114 DEC
    case 0xC0D069: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:115 STA @VIRTUAL02
    case 0xC0D06A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0CF97.asm:116 STA @LOCAL02
    case 0xC0D06C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0CF97.asm:117 BRA @UNKNOWN6
    case 0xC0D06E: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/unknown/C0/C0CF97.asm:119 LDX @LOCAL01
    case 0xC0D070: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0CF97.asm:120 INX
    case 0xC0D072: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:121 STX @LOCAL01
    case 0xC0D073: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0CF97.asm:122 INY
    case 0xC0D075: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:123 BRA @UNKNOWN6
    case 0xC0D076: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/unknown/C0/C0CF97.asm:125 LDA @LOCAL05
    case 0xC0D078: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0CF97.asm:126 INC
    case 0xC0D07A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:127 STA @LOCAL05
    case 0xC0D07B: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0CF97.asm:128 LDA @LOCAL02
    case 0xC0D07D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0CF97.asm:129 STA @VIRTUAL02
    case 0xC0D07F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0CF97.asm:130 INC @VIRTUAL02
    case 0xC0D081: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0CF97.asm:131 LDA @VIRTUAL02
    case 0xC0D083: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0CF97.asm:132 STA @LOCAL02
    case 0xC0D085: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0CF97.asm:133 BRA @UNKNOWN6
    case 0xC0D087: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C0CF97.asm:135 LDX @LOCAL01
    case 0xC0D089: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0CF97.asm:136 DEX
    case 0xC0D08B: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:137 STX @LOCAL01
    case 0xC0D08C: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0CF97.asm:138 DEY
    case 0xC0D08E: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:140 INC @VIRTUAL04
    case 0xC0D08F: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C0/C0CF97.asm:142 LDA @VIRTUAL04
    case 0xC0D091: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0CF97.asm:143 CMP @LOCAL07
    case 0xC0D093: cpu.execute_instruction<0xC5>(0x00001C, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0CF97.asm:144 BNEL @UNKNOWN0
    case 0xC0D095: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0CF97.asm:144 BNEL @UNKNOWN0
    case 0xC0D097: cpu.execute_instruction<0x4C>(0x00D00E, 3); return true;
    // src/unknown/C0/C0CF97.asm:145 LDA #0
    case 0xC0D09A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0CF97.asm:145 LDA #0
    // Overlapping static entry reached from 0xC0D09A.
    case 0xC0D09C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0CF97.asm:146 BRA @UNKNOWN10
    case 0xC0D09D: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/unknown/C0/C0CF97.asm:148 LDA @LOCAL06
    case 0xC0D09F: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0CF97.asm:149 ASL
    case 0xC0D0A1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:150 STA @LOCAL07
    case 0xC0D0A2: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C0CF97.asm:151 LDA @LOCAL04
    case 0xC0D0A4: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0CF97.asm:152 ASL
    case 0xC0D0A6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:153 TAX
    case 0xC0D0A7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:154 STX @LOCAL03
    case 0xC0D0A8: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C0CF97.asm:155 LDA @LOCAL07
    case 0xC0D0AA: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0CF97.asm:156 PHA
    case 0xC0D0AC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:157 TYA
    case 0xC0D0AD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C0CF97.asm:158 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D0AE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C0CF97.asm:158 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D0AF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C0CF97.asm:158 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D0B0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:159 CLC
    case 0xC0D0B1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:160 ADC f:UNKNOWN_C42A1F,X
    case 0xC0D0B2: cpu.execute_instruction<0x7F>(0xC42A1F, 4); return true;
    // src/unknown/C0/C0CF97.asm:161 PLX
    case 0xC0D0B6: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:162 STA ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC0D0B7: cpu.execute_instruction<0x9D>(0x000FC6, 3); return true;
    // src/unknown/C0/C0CF97.asm:163 LDA @LOCAL07
    case 0xC0D0BA: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0CF97.asm:164 PHA
    case 0xC0D0BC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:165 LDX @LOCAL03
    case 0xC0D0BD: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0CF97.asm:166 LDA @LOCAL02
    case 0xC0D0BF: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0CF97.asm:167 STA @VIRTUAL02
    case 0xC0D0C1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C0CF97.asm:168 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D0C3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C0CF97.asm:168 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D0C4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C0CF97.asm:168 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D0C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:169 SEC
    case 0xC0D0C6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:170 SBC f:UNKNOWN_C42AEB,X
    case 0xC0D0C7: cpu.execute_instruction<0xFF>(0xC42AEB, 4); return true;
    // src/unknown/C0/C0CF97.asm:171 CLC
    case 0xC0D0CB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:172 ADC f:UNKNOWN_C42A41,X
    case 0xC0D0CC: cpu.execute_instruction<0x7F>(0xC42A41, 4); return true;
    // src/unknown/C0/C0CF97.asm:173 PLX
    case 0xC0D0D0: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0CF97.asm:174 STA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC0D0D1: cpu.execute_instruction<0x9D>(0x001002, 3); return true;
    // src/unknown/C0/C0CF97.asm:175 LDA #.LOWORD(-1)
    case 0xC0D0D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0CF97.asm:175 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0D0D4.
    case 0xC0D0D6: cpu.execute_instruction<0xFF>(0xC2602B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0CF97.asm:177 END_C_FUNCTION
    case 0xC0D0D7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0CF97.asm:177 END_C_FUNCTION
    case 0xC0D0D8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D0D9.asm (unresolved).
bool execute_unresolved_c0_c0d0d9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0D0D9.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0D0D9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0D0D9.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Overlapping static entry reached from 0xC0D0D6.
    case 0xC0D0DA: cpu.execute_instruction<0x31>(0x0000A2, 2); return true;
    // src/unknown/C0/C0D0D9.asm:4 LDX #$003C
    case 0xC0D0DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003C, 2); else cpu.execute_instruction<0xA2>(0x00003C, 3); return true;
    // src/unknown/C0/C0D0D9.asm:4 LDX #$003C
    // Overlapping static entry reached from 0xC0D0DA.
    case 0xC0D0DC: cpu.execute_instruction<0x3C>(0x00E200, 3); return true;
    // src/unknown/C0/C0D0D9.asm:4 LDX #$003C
    // Overlapping static entry reached from 0xC0D0DB.
    case 0xC0D0DD: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C0/C0D0D9.asm:5 SEP #PROC_FLAGS::ACCUM8
    case 0xC0D0DE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0D0D9.asm:5 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0D0DC.
    case 0xC0D0DF: cpu.execute_instruction<0x20>(0x0003A9, 3); return true;
    // src/unknown/C0/C0D0D9.asm:6 LDA #$0003
    case 0xC0D0E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002003, 3); return true;
    // src/unknown/C0/C0D0D9.asm:7 JSR UNKNOWN_C0CF97
    case 0xC0D0E2: cpu.execute_instruction<0x20>(0x00CF97, 3); return true;
    // src/unknown/C0/C0D0D9.asm:7 JSR UNKNOWN_C0CF97
    // Overlapping static entry reached from 0xC0D0E0.
    case 0xC0D0E3: cpu.execute_instruction<0x97>(0x0000CF, 2); return true;
    // src/unknown/C0/C0D0D9.asm:8 RTL
    case 0xC0D0E5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D0E6.asm (unresolved).
bool execute_unresolved_c0_c0d0e6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0D0E6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0D0E6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0D0E6.asm:7 END_STACK_VARS
    case 0xC0D0E8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0D0E6.asm:7 END_STACK_VARS
    case 0xC0D0E9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D0E6.asm:7 END_STACK_VARS
    case 0xC0D0EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D0E6.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0D0EA.
    case 0xC0D0EC: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0D0E6.asm:7 END_STACK_VARS
    case 0xC0D0ED: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0D0E6.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC0D0EE: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0D0E6.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0D0EC.
    case 0xC0D0F0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D0E6.asm:9 STA @VIRTUAL02
    case 0xC0D0F1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D0E6.asm:10 JSL UNKNOWN_C0C363
    case 0xC0D0F3: cpu.execute_instruction<0x22>(0xC0C363, 4); return true;
    // src/unknown/C0/C0D0E6.asm:11 CMP #0
    case 0xC0D0F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0D0E6.asm:11 CMP #0
    // Overlapping static entry reached from 0xC0D0F7.
    case 0xC0D0F9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D0E6.asm:12 BNE @UNKNOWN0
    case 0xC0D0FA: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/unknown/C0/C0D0E6.asm:13 LDA @VIRTUAL02
    case 0xC0D0FC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D0E6.asm:14 ASL
    case 0xC0D0FE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D0E6.asm:15 TAX
    case 0xC0D0FF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D0E6.asm:16 LDA ENTITY_PATHFINDING_STATES,X
    case 0xC0D100: cpu.execute_instruction<0xBD>(0x002C5E, 3); return true;
    // src/unknown/C0/C0D0E6.asm:17 BEQ @UNKNOWN0
    case 0xC0D103: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C0D0E6.asm:18 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0D105: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C0D0E6.asm:19 STA ENTITY_ABS_X_TABLE,X
    case 0xC0D108: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/unknown/C0/C0D0E6.asm:20 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC0D10B: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C0/C0D0E6.asm:21 STA ENTITY_ABS_Y_TABLE,X
    case 0xC0D10E: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/unknown/C0/C0D0E6.asm:22 LDA #.LOWORD(-1)
    case 0xC0D111: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0D0E6.asm:22 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0D111.
    case 0xC0D113: cpu.execute_instruction<0xFF>(0x224480, 4); return true;
    // src/unknown/C0/C0D0E6.asm:23 BRA @UNKNOWN2
    case 0xC0D114: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/unknown/C0/C0D0E6.asm:25 JSL UNKNOWN_C09EFF
    case 0xC0D116: cpu.execute_instruction<0x22>(0xC09EFF, 4); return true;
    // src/unknown/C0/C0D0E6.asm:25 JSL UNKNOWN_C09EFF
    // Overlapping static entry reached from 0xC0D113.
    case 0xC0D117: cpu.execute_instruction<0xFF>(0xA9C09E, 4); return true;
    // src/unknown/C0/C0D0E6.asm:26 LDA #4
    case 0xC0D11A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C0/C0D0E6.asm:26 LDA #4
    // Overlapping static entry reached from 0xC0D117.
    case 0xC0D11B: cpu.execute_instruction<0x04>(0x000000, 2); return true;
    // src/unknown/C0/C0D0E6.asm:26 LDA #4
    // Overlapping static entry reached from 0xC0D11A.
    case 0xC0D11C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D0E6.asm:27 STA @LOCAL00
    case 0xC0D11D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0D0E6.asm:28 LDY @VIRTUAL02
    case 0xC0D11F: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C0/C0D0E6.asm:29 LDX ENTITY_MOVEMENT_PROSPECTIVE_Y
    case 0xC0D121: cpu.execute_instruction<0xAE>(0x00284A, 3); return true;
    // src/unknown/C0/C0D0E6.asm:30 LDA ENTITY_MOVEMENT_PROSPECTIVE_X
    case 0xC0D124: cpu.execute_instruction<0xAD>(0x002848, 3); return true;
    // src/unknown/C0/C0D0E6.asm:31 JSL UNKNOWN_C05CD7
    case 0xC0D127: cpu.execute_instruction<0x22>(0xC05CD7, 4); return true;
    // src/unknown/C0/C0D0E6.asm:32 AND #$00C0
    case 0xC0D12B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/unknown/C0/C0D0E6.asm:32 AND #$00C0
    // Overlapping static entry reached from 0xC0D12B.
    case 0xC0D12D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0D0E6.asm:33 BEQ @UNKNOWN1
    case 0xC0D12E: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/unknown/C0/C0D0E6.asm:34 LDA @VIRTUAL02
    case 0xC0D130: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D0E6.asm:35 ASL
    case 0xC0D132: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D0E6.asm:36 CLC
    case 0xC0D133: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D0E6.asm:37 ADC #.LOWORD(ENTITY_MOVEMENT_SPEEDS)
    case 0xC0D134: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000032, 2); else cpu.execute_instruction<0x69>(0x002B32, 3); return true;
    // src/unknown/C0/C0D0E6.asm:37 ADC #.LOWORD(ENTITY_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC0D134.
    case 0xC0D136: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0D0E6.asm:38 TAX
    case 0xC0D137: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D0E6.asm:39 LDA __BSS_START__,X
    case 0xC0D138: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D0E6.asm:40 SEC
    case 0xC0D13B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D0E6.asm:41 SBC #$1000
    case 0xC0D13C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x001000, 3); return true;
    // src/unknown/C0/C0D0E6.asm:41 SBC #$1000
    // Overlapping static entry reached from 0xC0D13C.
    case 0xC0D13E: cpu.execute_instruction<0x10>(0x00009D, 2); return true;
    // src/unknown/C0/C0D0E6.asm:42 STA __BSS_START__,X
    case 0xC0D13F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D0E6.asm:42 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D13E.
    case 0xC0D140: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D0E6.asm:43 LDA #0
    case 0xC0D142: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D0E6.asm:43 LDA #0
    // Overlapping static entry reached from 0xC0D142.
    case 0xC0D144: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0D0E6.asm:44 BRA @UNKNOWN2
    case 0xC0D145: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C0/C0D0E6.asm:46 LDA @VIRTUAL02
    case 0xC0D147: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D0E6.asm:47 ASL
    case 0xC0D149: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D0E6.asm:48 TAX
    case 0xC0D14A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D0E6.asm:49 LDA ENTITY_MOVEMENT_PROSPECTIVE_X
    case 0xC0D14B: cpu.execute_instruction<0xAD>(0x002848, 3); return true;
    // src/unknown/C0/C0D0E6.asm:50 STA ENTITY_ABS_X_TABLE,X
    case 0xC0D14E: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/unknown/C0/C0D0E6.asm:51 LDA ENTITY_MOVEMENT_PROSPECTIVE_Y
    case 0xC0D151: cpu.execute_instruction<0xAD>(0x00284A, 3); return true;
    // src/unknown/C0/C0D0E6.asm:52 STA ENTITY_ABS_Y_TABLE,X
    case 0xC0D154: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/unknown/C0/C0D0E6.asm:53 LDA #.LOWORD(-1)
    case 0xC0D157: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0D0E6.asm:53 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0D157.
    case 0xC0D159: cpu.execute_instruction<0xFF>(0xC26B2B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0D0E6.asm:55 END_C_FUNCTION
    case 0xC0D15A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0D0E6.asm:55 END_C_FUNCTION
    case 0xC0D15B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D15C.asm (unresolved).
bool execute_unresolved_c0_c0d15c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0D15C.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0D15C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0D15C.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Overlapping static entry reached from 0xC0D159.
    case 0xC0D15D: cpu.execute_instruction<0x31>(0x0000AD, 2); return true;
    // src/unknown/C0/C0D15C.asm:4 LDA PLAYER_MOVEMENT_FLAGS
    case 0xC0D15E: cpu.execute_instruction<0xAD>(0x005D56, 3); return true;
    // src/unknown/C0/C0D15C.asm:4 LDA PLAYER_MOVEMENT_FLAGS
    // Overlapping static entry reached from 0xC0D15D.
    case 0xC0D15F: cpu.execute_instruction<0x56>(0x00005D, 2); return true;
    // src/unknown/C0/C0D15C.asm:5 AND #$0002
    case 0xC0D161: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/unknown/C0/C0D15C.asm:5 AND #$0002
    // Overlapping static entry reached from 0xC0D161.
    case 0xC0D163: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0D15C.asm:6 BEQ @UNKNOWN0
    case 0xC0D164: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0D15C.asm:7 LDA #$0000
    case 0xC0D166: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D15C.asm:7 LDA #$0000
    // Overlapping static entry reached from 0xC0D166.
    case 0xC0D168: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0D15C.asm:8 BRA @UNKNOWN5
    case 0xC0D169: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C0/C0D15C.asm:10 LDA ENTITY_COLLIDED_OBJECTS+46
    case 0xC0D16B: cpu.execute_instruction<0xAD>(0x0028CC, 3); return true;
    // src/unknown/C0/C0D15C.asm:11 CMP CURRENT_ENTITY_SLOT
    case 0xC0D16E: cpu.execute_instruction<0xCD>(0x001A42, 3); return true;
    // src/unknown/C0/C0D15C.asm:12 BNE @UNKNOWN1
    case 0xC0D171: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0D15C.asm:13 LDA #$FFFF
    case 0xC0D173: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0D15C.asm:13 LDA #$FFFF
    // Overlapping static entry reached from 0xC0D173.
    case 0xC0D175: cpu.execute_instruction<0xFF>(0xAD1C80, 4); return true;
    // src/unknown/C0/C0D15C.asm:14 BRA @UNKNOWN5
    case 0xC0D176: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/unknown/C0/C0D15C.asm:16 LDA CURRENT_ENTITY_SLOT
    case 0xC0D178: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0D15C.asm:16 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0D175.
    case 0xC0D179: cpu.execute_instruction<0x42>(0x00001A, 2); return true;
    // src/unknown/C0/C0D15C.asm:17 ASL
    case 0xC0D17B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D15C.asm:18 TAX
    case 0xC0D17C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D15C.asm:19 LDA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0D17D: cpu.execute_instruction<0xBD>(0x00289E, 3); return true;
    // src/unknown/C0/C0D15C.asm:20 CMP #$7FFF
    case 0xC0D180: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x007FFF, 3); return true;
    // src/unknown/C0/C0D15C.asm:20 CMP #$7FFF
    // Overlapping static entry reached from 0xC0D180.
    case 0xC0D182: cpu.execute_instruction<0x7F>(0xB002F0, 4); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C0/C0D15C.asm:21 BGT @UNKNOWN3
    case 0xC0D183: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C0D15C.asm:21 BGT @UNKNOWN3
    case 0xC0D185: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C0D15C.asm:21 BGT @UNKNOWN3
    // Overlapping static entry reached from 0xC0D182.
    case 0xC0D186: cpu.execute_instruction<0x05>(0x0000C9, 2); return true;
    // src/unknown/C0/C0D15C.asm:22 CMP #$0017
    case 0xC0D187: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/unknown/C0/C0D15C.asm:22 CMP #$0017
    // Overlapping static entry reached from 0xC0D186.
    case 0xC0D188: cpu.execute_instruction<0x17>(0x000000, 2); return true;
    // src/unknown/C0/C0D15C.asm:22 CMP #$0017
    // Overlapping static entry reached from 0xC0D187.
    case 0xC0D189: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C0D15C.asm:23 BCS @UNKNOWN4
    case 0xC0D18A: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C0D15C.asm:25 LDA #$0000
    case 0xC0D18C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D15C.asm:25 LDA #$0000
    // Overlapping static entry reached from 0xC0D18C.
    case 0xC0D18E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0D15C.asm:26 BRA @UNKNOWN5
    case 0xC0D18F: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0D15C.asm:28 LDA #$FFFF
    case 0xC0D191: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0D15C.asm:28 LDA #$FFFF
    // Overlapping static entry reached from 0xC0D191.
    case 0xC0D193: cpu.execute_instruction<0xFF>(0x31C26B, 4); return true;
    // src/unknown/C0/C0D15C.asm:30 RTL
    case 0xC0D194: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D195.asm (unresolved).
bool execute_unresolved_c0_c0d195_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0D195.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0D195: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0D195.asm:4 LDA #$0000
    case 0xC0D197: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D195.asm:4 LDA #$0000
    // Overlapping static entry reached from 0xC0D197.
    case 0xC0D199: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/unknown/C0/C0D195.asm:5 RTL
    case 0xC0D19A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D19B.asm (unresolved).
bool execute_unresolved_c0_c0d19b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0D19B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0D19B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0D19B.asm:16 END_STACK_VARS
    case 0xC0D19D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0D19B.asm:16 END_STACK_VARS
    case 0xC0D19E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D19B.asm:16 END_STACK_VARS
    case 0xC0D19F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x00FFDE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D19B.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC0D19F.
    case 0xC0D1A1: cpu.execute_instruction<0xFF>(0xB6AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0D19B.asm:16 END_STACK_VARS
    case 0xC0D1A2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:17 LDA TOUCHED_ENEMY
    case 0xC0D1A3: cpu.execute_instruction<0xAD>(0x004DB6, 3); return true;
    // src/unknown/C0/C0D19B.asm:17 LDA TOUCHED_ENEMY
    // Overlapping static entry reached from 0xC0D1A1.
    case 0xC0D1A5: cpu.execute_instruction<0x4D>(0x002085, 3); return true;
    // src/unknown/C0/C0D19B.asm:18 STA @LOCAL09
    case 0xC0D1A6: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C0D19B.asm:19 STZ ENEMY_HAS_BEEN_TOUCHED
    case 0xC0D1A8: cpu.execute_instruction<0x9C>(0x004DBA, 3); return true;
    // src/unknown/C0/C0D19B.asm:20 LDA @LOCAL09
    case 0xC0D1AB: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C0D19B.asm:21 ASL
    case 0xC0D1AD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:22 STA @LOCAL08
    case 0xC0D1AE: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C0/C0D19B.asm:23 CLC
    case 0xC0D1B0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:24 ADC #.LOWORD(ENTITY_MOVING_DIRECTIONS)
    case 0xC0D1B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000086, 2); else cpu.execute_instruction<0x69>(0x001A86, 3); return true;
    // src/unknown/C0/C0D19B.asm:24 ADC #.LOWORD(ENTITY_MOVING_DIRECTIONS)
    // Overlapping static entry reached from 0xC0D1B1.
    case 0xC0D1B3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:25 STA @VIRTUAL02
    case 0xC0D1B4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B.asm:26 LDX @VIRTUAL02
    case 0xC0D1B6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B.asm:27 LDA __BSS_START__,X
    case 0xC0D1B8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B.asm:28 CMP #8
    case 0xC0D1BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C0/C0D19B.asm:28 CMP #8
    // Overlapping static entry reached from 0xC0D1BB.
    case 0xC0D1BD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D19B.asm:29 BNE @UNKNOWN0
    case 0xC0D1BE: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C0/C0D19B.asm:30 LDY #0
    case 0xC0D1C0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B.asm:30 LDY #0
    // Overlapping static entry reached from 0xC0D1C0.
    case 0xC0D1C2: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C0/C0D19B.asm:31 LDX #1
    case 0xC0D1C3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C0D19B.asm:31 LDX #1
    // Overlapping static entry reached from 0xC0D1C3.
    case 0xC0D1C5: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0D19B.asm:32 BRA @UNKNOWN6
    case 0xC0D1C6: cpu.execute_instruction<0x80>(0x00006B, 2); return true;
    // src/unknown/C0/C0D19B.asm:34 LDA ENEMY_PATHFINDING_TARGET_ENTITY
    case 0xC0D1C8: cpu.execute_instruction<0xAD>(0x004DB8, 3); return true;
    // src/unknown/C0/C0D19B.asm:35 ASL
    case 0xC0D1CB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:36 TAX
    case 0xC0D1CC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:37 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0D1CD: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0D19B.asm:38 STA @LOCAL00
    case 0xC0D1D0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0D19B.asm:39 LDY ENTITY_ABS_X_TABLE,X
    case 0xC0D1D2: cpu.execute_instruction<0xBC>(0x000B8E, 3); return true;
    // src/unknown/C0/C0D19B.asm:40 LDA @LOCAL08
    case 0xC0D1D5: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C0D19B.asm:41 TAX
    case 0xC0D1D7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:42 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0D1D8: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0D19B.asm:43 TAX
    case 0xC0D1DB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:44 STX @LOCAL07
    case 0xC0D1DC: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C0D19B.asm:45 LDA @LOCAL08
    case 0xC0D1DE: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C0D19B.asm:46 TAX
    case 0xC0D1E0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:47 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0D1E1: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0D19B.asm:48 LDX @LOCAL07
    case 0xC0D1E4: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C0/C0D19B.asm:49 JSL UNKNOWN_C41EFF
    case 0xC0D1E6: cpu.execute_instruction<0x22>(0xC41EFF, 4); return true;
    // src/unknown/C0/C0D19B.asm:50 LDY #$2000
    case 0xC0D1EA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/unknown/C0/C0D19B.asm:50 LDY #$2000
    // Overlapping static entry reached from 0xC0D1EA.
    case 0xC0D1EC: cpu.execute_instruction<0x20>(0x006918, 3); return true;
    // src/unknown/C0/C0D19B.asm:51 CLC
    case 0xC0D1ED: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:52 ADC #$1000
    case 0xC0D1EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x001000, 3); return true;
    // src/unknown/C0/C0D19B.asm:52 ADC #$1000
    // Overlapping static entry reached from 0xC0D1EC.
    case 0xC0D1EF: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // src/unknown/C0/C0D19B.asm:52 ADC #$1000
    // Overlapping static entry reached from 0xC0D1EE.
    case 0xC0D1F0: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/unknown/C0/C0D19B.asm:53 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC0D1F1: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/unknown/C0/C0D19B.asm:53 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC0D1F0.
    case 0xC0D1F2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:53 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC0D1F2.
    case 0xC0D1F3: cpu.execute_instruction<0x91>(0x0000C0, 2); return true;
    // src/unknown/C0/C0D19B.asm:54 STA @VIRTUAL04
    case 0xC0D1F5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B.asm:55 LDX @VIRTUAL02
    case 0xC0D1F7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B.asm:56 LDA __BSS_START__,X
    case 0xC0D1F9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B.asm:57 SEC
    case 0xC0D1FC: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:58 SBC @VIRTUAL04
    case 0xC0D1FD: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B.asm:59 AND #$0007
    case 0xC0D1FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C0D19B.asm:59 AND #$0007
    // Overlapping static entry reached from 0xC0D1FF.
    case 0xC0D201: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0D19B.asm:60 BEQ @UNKNOWN1
    case 0xC0D202: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C0D19B.asm:61 CMP #1
    case 0xC0D204: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0D19B.asm:61 CMP #1
    // Overlapping static entry reached from 0xC0D204.
    case 0xC0D206: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0D19B.asm:62 BEQ @UNKNOWN1
    case 0xC0D207: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0D19B.asm:63 CMP #7
    case 0xC0D209: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C0D19B.asm:63 CMP #7
    // Overlapping static entry reached from 0xC0D209.
    case 0xC0D20B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D19B.asm:64 BNE @UNKNOWN2
    case 0xC0D20C: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0D19B.asm:66 LDY #1
    case 0xC0D20E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C0D19B.asm:66 LDY #1
    // Overlapping static entry reached from 0xC0D20E.
    case 0xC0D210: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0D19B.asm:67 BRA @UNKNOWN3
    case 0xC0D211: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0D19B.asm:69 LDY #0
    case 0xC0D213: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B.asm:69 LDY #0
    // Overlapping static entry reached from 0xC0D1F0.
    case 0xC0D214: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D19B.asm:69 LDY #0
    // Overlapping static entry reached from 0xC0D213.
    case 0xC0D215: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C0/C0D19B.asm:71 LDA GAME_STATE+game_state::leader_direction
    case 0xC0D216: cpu.execute_instruction<0xAD>(0x00987F, 3); return true;
    // src/unknown/C0/C0D19B.asm:72 SEC
    case 0xC0D219: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:73 SBC @VIRTUAL04
    case 0xC0D21A: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B.asm:74 AND #$0007
    case 0xC0D21C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C0D19B.asm:74 AND #$0007
    // Overlapping static entry reached from 0xC0D21C.
    case 0xC0D21E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0D19B.asm:75 BEQ @UNKNOWN4
    case 0xC0D21F: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C0D19B.asm:76 CMP #1
    case 0xC0D221: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0D19B.asm:76 CMP #1
    // Overlapping static entry reached from 0xC0D221.
    case 0xC0D223: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0D19B.asm:77 BEQ @UNKNOWN4
    case 0xC0D224: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0D19B.asm:78 CMP #7
    case 0xC0D226: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C0D19B.asm:78 CMP #7
    // Overlapping static entry reached from 0xC0D226.
    case 0xC0D228: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D19B.asm:79 BNE @UNKNOWN5
    case 0xC0D229: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0D19B.asm:81 LDX #0
    case 0xC0D22B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B.asm:81 LDX #0
    // Overlapping static entry reached from 0xC0D22B.
    case 0xC0D22D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0D19B.asm:82 BRA @UNKNOWN6
    case 0xC0D22E: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0D19B.asm:84 LDX #1
    case 0xC0D230: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C0D19B.asm:84 LDX #1
    // Overlapping static entry reached from 0xC0D230.
    case 0xC0D232: cpu.execute_instruction<0x00>(0x00009C, 2); return true;
    // src/unknown/C0/C0D19B.asm:86 STZ BATTLE_INITIATIVE
    case 0xC0D233: cpu.execute_instruction<0x9C>(0x004DBC, 3); return true;
    // src/unknown/C0/C0D19B.asm:87 CPX #1
    case 0xC0D236: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/unknown/C0/C0D19B.asm:87 CPX #1
    // Overlapping static entry reached from 0xC0D236.
    case 0xC0D238: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D19B.asm:88 BNE @UNKNOWN7
    case 0xC0D239: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C0/C0D19B.asm:89 CPY #0
    case 0xC0D23B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B.asm:89 CPY #0
    // Overlapping static entry reached from 0xC0D23B.
    case 0xC0D23D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D19B.asm:90 BNE @UNKNOWN7
    case 0xC0D23E: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0D19B.asm:91 LDA #INITIATIVE::PARTY_FIRST
    case 0xC0D240: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0D19B.asm:91 LDA #INITIATIVE::PARTY_FIRST
    // Overlapping static entry reached from 0xC0D240.
    case 0xC0D242: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0D19B.asm:92 STA BATTLE_INITIATIVE
    case 0xC0D243: cpu.execute_instruction<0x8D>(0x004DBC, 3); return true;
    // src/unknown/C0/C0D19B.asm:94 CPY #1
    case 0xC0D246: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000001, 2); else cpu.execute_instruction<0xC0>(0x000001, 3); return true;
    // src/unknown/C0/C0D19B.asm:94 CPY #1
    // Overlapping static entry reached from 0xC0D246.
    case 0xC0D248: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D19B.asm:95 BNE @UNKNOWN8
    case 0xC0D249: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C0/C0D19B.asm:96 CPX #0
    case 0xC0D24B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B.asm:96 CPX #0
    // Overlapping static entry reached from 0xC0D24B.
    case 0xC0D24D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D19B.asm:97 BNE @UNKNOWN8
    case 0xC0D24E: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0D19B.asm:98 LDA #INITIATIVE::ENEMIES_FIRST
    case 0xC0D250: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0D19B.asm:98 LDA #INITIATIVE::ENEMIES_FIRST
    // Overlapping static entry reached from 0xC0D250.
    case 0xC0D252: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0D19B.asm:99 STA BATTLE_INITIATIVE
    case 0xC0D253: cpu.execute_instruction<0x8D>(0x004DBC, 3); return true;
    // src/unknown/C0/C0D19B.asm:101 LDA #120
    case 0xC0D256: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x000078, 3); return true;
    // src/unknown/C0/C0D19B.asm:101 LDA #120
    // Overlapping static entry reached from 0xC0D256.
    case 0xC0D258: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0D19B.asm:102 STA BATTLE_SWIRL_COUNTDOWN
    case 0xC0D259: cpu.execute_instruction<0x8D>(0x005D60, 3); return true;
    // src/unknown/C0/C0D19B.asm:103 LDA @LOCAL09
    case 0xC0D25C: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C0D19B.asm:104 ASL
    case 0xC0D25E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:105 TAX
    case 0xC0D25F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:106 LDA ENTITY_NPC_IDS,X
    case 0xC0D260: cpu.execute_instruction<0xBD>(0x002C9A, 3); return true;
    // src/unknown/C0/C0D19B.asm:107 AND #$7FFF
    case 0xC0D263: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C0D19B.asm:107 AND #$7FFF
    // Overlapping static entry reached from 0xC0D263.
    case 0xC0D265: cpu.execute_instruction<0x7F>(0x8D1A85, 4); return true;
    // src/unknown/C0/C0D19B.asm:108 STA @LOCAL06
    case 0xC0D266: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0D19B.asm:109 STA CURRENT_BATTLE_GROUP
    case 0xC0D268: cpu.execute_instruction<0x8D>(0x004A8C, 3); return true;
    // src/unknown/C0/C0D19B.asm:109 STA CURRENT_BATTLE_GROUP
    // Overlapping static entry reached from 0xC0D265.
    case 0xC0D269: cpu.execute_instruction<0x8C>(0x00A94A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0D19B.asm:110 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC0D26B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00C60D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0D19B.asm:110 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0D269.
    case 0xC0D26C: cpu.execute_instruction<0x0D>(0x0085C6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0D19B.asm:110 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0D26B.
    case 0xC0D26D: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0D19B.asm:110 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC0D26E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0D19B.asm:110 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0D26D.
    case 0xC0D26F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0D19B.asm:110 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC0D270: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0D19B.asm:110 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0D270.
    case 0xC0D272: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0D19B.asm:110 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC0D273: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0D19B.asm:111 LDA @LOCAL06
    case 0xC0D275: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0D19B.asm:112 ASL
    case 0xC0D277: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:113 ASL
    case 0xC0D278: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:114 ASL
    case 0xC0D279: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:115 CLC
    case 0xC0D27A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:116 ADC @VIRTUAL0A
    case 0xC0D27B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C0D19B.asm:117 STA @VIRTUAL0A
    case 0xC0D27D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C0D19B.asm:118 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0D27F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C0D19B.asm:118 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC0D27F.
    case 0xC0D281: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C0/C0D19B.asm:118 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0D282: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C0/C0D19B.asm:118 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0D284: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C0/C0D19B.asm:118 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0D285: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C0/C0D19B.asm:118 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0D287: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C0/C0D19B.asm:118 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0D289: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C0D19B.asm:119 JSL BATTLE_SWIRL_SEQUENCE
    case 0xC0D28B: cpu.execute_instruction<0x22>(0xC2E8E0, 4); return true;
    // src/unknown/C0/C0D19B.asm:120 LDA #0
    case 0xC0D28F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B.asm:120 LDA #0
    // Overlapping static entry reached from 0xC0D28F.
    case 0xC0D291: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D19B.asm:121 STA @VIRTUAL04
    case 0xC0D292: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B.asm:122 JMP @UNKNOWN17
    case 0xC0D294: cpu.execute_instruction<0x4C>(0x00D319, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0D19B.asm:124 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0D297: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0D19B.asm:124 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0D299: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0D19B.asm:124 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0D29B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0D19B.asm:124 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0D29D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0D19B.asm:125 LDA [@VIRTUAL0A]
    case 0xC0D29F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C0/C0D19B.asm:126 AND #$00FF
    case 0xC0D2A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0D19B.asm:126 AND #$00FF
    // Overlapping static entry reached from 0xC0D2A1.
    case 0xC0D2A3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D19B.asm:127 STA @VIRTUAL02
    case 0xC0D2A4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B.asm:128 CMP #$00FF
    case 0xC0D2A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/unknown/C0/C0D19B.asm:128 CMP #$00FF
    // Overlapping static entry reached from 0xC0D2A6.
    case 0xC0D2A8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0D19B.asm:129 BEQ @UNKNOWN15
    case 0xC0D2A9: cpu.execute_instruction<0xF0>(0x000059, 2); return true;
    // src/unknown/C0/C0D19B.asm:130 LDY #0
    case 0xC0D2AB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B.asm:130 LDY #0
    // Overlapping static entry reached from 0xC0D2AB.
    case 0xC0D2AD: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C0D19B.asm:131 LDA @VIRTUAL02
    case 0xC0D2AE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B.asm:132 STA @LOCAL06
    case 0xC0D2B0: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0D19B.asm:133 BEQ @UNKNOWN14
    case 0xC0D2B2: cpu.execute_instruction<0xF0>(0x000046, 2); return true;
    // src/unknown/C0/C0D19B.asm:134 LDY #1
    case 0xC0D2B4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C0D19B.asm:134 LDY #1
    // Overlapping static entry reached from 0xC0D2B4.
    case 0xC0D2B6: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0D19B.asm:135 LDA [@VIRTUAL06],Y
    case 0xC0D2B7: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0D19B.asm:136 TAY
    case 0xC0D2B9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:137 LDA @LOCAL09
    case 0xC0D2BA: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C0D19B.asm:138 ASL
    case 0xC0D2BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:139 TAX
    case 0xC0D2BD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:140 TYA
    case 0xC0D2BE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:141 CMP ENTITY_ENEMY_IDS,X
    case 0xC0D2BF: cpu.execute_instruction<0xDD>(0x002D12, 3); return true;
    // src/unknown/C0/C0D19B.asm:142 BNE @UNKNOWN10
    case 0xC0D2C2: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C0/C0D19B.asm:143 LDA #.LOWORD(-1)
    case 0xC0D2C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0D19B.asm:143 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0D2C4.
    case 0xC0D2C6: cpu.execute_instruction<0xFF>(0x2C5E9D, 4); return true;
    // src/unknown/C0/C0D19B.asm:144 STA ENTITY_PATHFINDING_STATES,X
    case 0xC0D2C7: cpu.execute_instruction<0x9D>(0x002C5E, 3); return true;
    // src/unknown/C0/C0D19B.asm:145 LDA @LOCAL06
    case 0xC0D2CA: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0D19B.asm:146 DEC
    case 0xC0D2CC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:147 STA @LOCAL06
    case 0xC0D2CD: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0D19B.asm:149 LDA @LOCAL06
    case 0xC0D2CF: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0D19B.asm:150 BEQ @UNKNOWN14
    case 0xC0D2D1: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/unknown/C0/C0D19B.asm:151 LDA #0
    case 0xC0D2D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B.asm:151 LDA #0
    // Overlapping static entry reached from 0xC0D2D3.
    case 0xC0D2D5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D19B.asm:152 STA @LOCAL05
    case 0xC0D2D6: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B.asm:153 BRA @UNKNOWN13
    case 0xC0D2D8: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C0/C0D19B.asm:155 ASL
    case 0xC0D2DA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:156 TAX
    case 0xC0D2DB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:157 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC0D2DC: cpu.execute_instruction<0xBD>(0x000A62, 3); return true;
    // src/unknown/C0/C0D19B.asm:158 CMP #.LOWORD(-1)
    case 0xC0D2DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0D19B.asm:158 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0D2DF.
    case 0xC0D2E1: cpu.execute_instruction<0xFF>(0x980CF0, 4); return true;
    // src/unknown/C0/C0D19B.asm:159 BEQ @UNKNOWN12
    case 0xC0D2E2: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C0D19B.asm:160 TYA
    case 0xC0D2E4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:161 CMP ENTITY_ENEMY_IDS,X
    case 0xC0D2E5: cpu.execute_instruction<0xDD>(0x002D12, 3); return true;
    // src/unknown/C0/C0D19B.asm:162 BNE @UNKNOWN12
    case 0xC0D2E8: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0D19B.asm:163 LDA #.LOWORD(-1)
    case 0xC0D2EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0D19B.asm:163 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0D2EA.
    case 0xC0D2EC: cpu.execute_instruction<0xFF>(0x2C5E9D, 4); return true;
    // src/unknown/C0/C0D19B.asm:164 STA ENTITY_PATHFINDING_STATES,X
    case 0xC0D2ED: cpu.execute_instruction<0x9D>(0x002C5E, 3); return true;
    // src/unknown/C0/C0D19B.asm:166 LDA @LOCAL05
    case 0xC0D2F0: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B.asm:167 INC
    case 0xC0D2F2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:168 STA @LOCAL05
    case 0xC0D2F3: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B.asm:170 CMP #23
    case 0xC0D2F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/unknown/C0/C0D19B.asm:170 CMP #23
    // Overlapping static entry reached from 0xC0D2F5.
    case 0xC0D2F7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D19B.asm:171 BNE @UNKNOWN11
    case 0xC0D2F8: cpu.execute_instruction<0xD0>(0x0000E0, 2); return true;
    // src/unknown/C0/C0D19B.asm:173 LDA #3
    case 0xC0D2FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C0D19B.asm:173 LDA #3
    // Overlapping static entry reached from 0xC0D2FA.
    case 0xC0D2FC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B.asm:174 CLC
    case 0xC0D2FD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:175 ADC @VIRTUAL06
    case 0xC0D2FE: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0D19B.asm:176 STA @VIRTUAL06
    case 0xC0D300: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0D19B.asm:177 BRA @UNKNOWN16
    case 0xC0D302: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C0D19B.asm:179 LDY #0
    case 0xC0D304: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B.asm:179 LDY #0
    // Overlapping static entry reached from 0xC0D304.
    case 0xC0D306: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C0/C0D19B.asm:180 TYA
    case 0xC0D307: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:181 STA @VIRTUAL02
    case 0xC0D308: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B.asm:183 LDA @VIRTUAL04
    case 0xC0D30A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B.asm:184 ASL
    case 0xC0D30C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:185 TAX
    case 0xC0D30D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:186 TYA
    case 0xC0D30E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:187 STA PATHFINDING_ENEMY_IDS,X
    case 0xC0D30F: cpu.execute_instruction<0x9D>(0x004A7C, 3); return true;
    // src/unknown/C0/C0D19B.asm:188 LDA @VIRTUAL02
    case 0xC0D312: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B.asm:189 STA PATHFINDING_ENEMY_COUNTS,X
    case 0xC0D314: cpu.execute_instruction<0x9D>(0x004A84, 3); return true;
    // src/unknown/C0/C0D19B.asm:190 INC @VIRTUAL04
    case 0xC0D317: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B.asm:192 LDA @VIRTUAL04
    case 0xC0D319: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B.asm:193 CMP #4
    case 0xC0D31B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0D19B.asm:193 CMP #4
    // Overlapping static entry reached from 0xC0D31B.
    case 0xC0D31D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0D19B.asm:194 BNEL @UNKNOWN9
    case 0xC0D31E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0D19B.asm:194 BNEL @UNKNOWN9
    case 0xC0D320: cpu.execute_instruction<0x4C>(0x00D297, 3); return true;
    // src/unknown/C0/C0D19B.asm:195 STZ ENEMIES_IN_BATTLE
    case 0xC0D323: cpu.execute_instruction<0x9C>(0x009F8A, 3); return true;
    // src/unknown/C0/C0D19B.asm:196 LDY #64
    case 0xC0D326: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000040, 2); else cpu.execute_instruction<0xA0>(0x000040, 3); return true;
    // src/unknown/C0/C0D19B.asm:196 LDY #64
    // Overlapping static entry reached from 0xC0D326.
    case 0xC0D328: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C0/C0D19B.asm:197 TYX
    case 0xC0D329: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:198 LDA GAME_STATE+game_state::party_count
    case 0xC0D32A: cpu.execute_instruction<0xAD>(0x0098A3, 3); return true;
    // src/unknown/C0/C0D19B.asm:199 AND #$00FF
    case 0xC0D32D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0D19B.asm:199 AND #$00FF
    // Overlapping static entry reached from 0xC0D32D.
    case 0xC0D32F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0D19B.asm:200 JSL FIND_PATH_TO_PARTY
    case 0xC0D330: cpu.execute_instruction<0x22>(0xC0BC74, 4); return true;
    // src/unknown/C0/C0D19B.asm:201 LDA #.LOWORD(PATHFINDING_STATE)
    case 0xC0D334: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00F200, 3); return true;
    // src/unknown/C0/C0D19B.asm:201 LDA #.LOWORD(PATHFINDING_STATE)
    // Overlapping static entry reached from 0xC0D334.
    case 0xC0D336: cpu.execute_instruction<0xF2>(0x000085, 2); return true;
    // src/unknown/C0/C0D19B.asm:202 STA @LOCAL04
    case 0xC0D337: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0D19B.asm:202 STA @LOCAL04
    // Overlapping static entry reached from 0xC0D336.
    case 0xC0D338: cpu.execute_instruction<0x16>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0D19B.asm:203 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC0D339: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00C60D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0D19B.asm:203 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0D338.
    case 0xC0D33A: cpu.execute_instruction<0x0D>(0x0085C6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0D19B.asm:203 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0D339.
    case 0xC0D33B: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0D19B.asm:203 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC0D33C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0D19B.asm:203 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0D33B.
    case 0xC0D33D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0D19B.asm:203 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC0D33E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0D19B.asm:203 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0D33E.
    case 0xC0D340: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0D19B.asm:203 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC0D341: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0D19B.asm:204 LDA CURRENT_BATTLE_GROUP
    case 0xC0D343: cpu.execute_instruction<0xAD>(0x004A8C, 3); return true;
    // src/unknown/C0/C0D19B.asm:205 ASL
    case 0xC0D346: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:206 ASL
    case 0xC0D347: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:207 ASL
    case 0xC0D348: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:208 CLC
    case 0xC0D349: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:209 ADC @VIRTUAL0A
    case 0xC0D34A: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C0D19B.asm:210 STA @VIRTUAL0A
    case 0xC0D34C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C0D19B.asm:211 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0D34E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C0D19B.asm:211 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC0D34E.
    case 0xC0D350: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C0/C0D19B.asm:211 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0D351: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C0/C0D19B.asm:211 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0D353: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C0/C0D19B.asm:211 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0D354: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C0/C0D19B.asm:211 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0D356: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C0/C0D19B.asm:211 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0D358: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C0D19B.asm:212 STZ @LOCAL08
    case 0xC0D35A: cpu.execute_instruction<0x64>(0x00001E, 2); return true;
    // src/unknown/C0/C0D19B.asm:213 JMP @UNKNOWN35
    case 0xC0D35C: cpu.execute_instruction<0x4C>(0x00D47D, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0D19B.asm:215 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0D35F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0D19B.asm:215 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0D361: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0D19B.asm:215 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0D363: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0D19B.asm:215 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0D365: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0D19B.asm:216 LDA [@VIRTUAL0A]
    case 0xC0D367: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C0/C0D19B.asm:217 AND #$00FF
    case 0xC0D369: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0D19B.asm:217 AND #$00FF
    // Overlapping static entry reached from 0xC0D369.
    case 0xC0D36B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C0D19B.asm:218 TAX
    case 0xC0D36C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:219 STX @LOCAL03
    case 0xC0D36D: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C0D19B.asm:220 CPX #$00FF
    case 0xC0D36F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x0000FF, 3); return true;
    // src/unknown/C0/C0D19B.asm:220 CPX #$00FF
    // Overlapping static entry reached from 0xC0D36F.
    case 0xC0D371: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0D19B.asm:221 BEQL @UNKNOWN34
    case 0xC0D372: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0D19B.asm:221 BEQL @UNKNOWN34
    case 0xC0D374: cpu.execute_instruction<0x4C>(0x00D47B, 3); return true;
    // src/unknown/C0/C0D19B.asm:222 CPX #0
    case 0xC0D377: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B.asm:222 CPX #0
    // Overlapping static entry reached from 0xC0D377.
    case 0xC0D379: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0D19B.asm:223 BEQL @UNKNOWN33
    case 0xC0D37A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0D19B.asm:223 BEQL @UNKNOWN33
    case 0xC0D37C: cpu.execute_instruction<0x4C>(0x00D473, 3); return true;
    // src/unknown/C0/C0D19B.asm:224 LDY #1
    case 0xC0D37F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C0D19B.asm:224 LDY #1
    // Overlapping static entry reached from 0xC0D37F.
    case 0xC0D381: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0D19B.asm:225 LDA [@VIRTUAL06],Y
    case 0xC0D382: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0D19B.asm:226 STA @LOCAL06
    case 0xC0D384: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0D19B.asm:227 CPX #0
    case 0xC0D386: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B.asm:227 CPX #0
    // Overlapping static entry reached from 0xC0D386.
    case 0xC0D388: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0D19B.asm:228 BEQL @UNKNOWN33
    case 0xC0D389: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0D19B.asm:228 BEQL @UNKNOWN33
    case 0xC0D38B: cpu.execute_instruction<0x4C>(0x00D473, 3); return true;
    // src/unknown/C0/C0D19B.asm:229 LDA #0
    case 0xC0D38E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B.asm:229 LDA #0
    // Overlapping static entry reached from 0xC0D38E.
    case 0xC0D390: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D19B.asm:230 STA @LOCAL05
    case 0xC0D391: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B.asm:231 TAY
    case 0xC0D393: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:232 STY @LOCAL02
    case 0xC0D394: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C0D19B.asm:233 BRA @UNKNOWN25
    case 0xC0D396: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/unknown/C0/C0D19B.asm:235 LDY @LOCAL02
    case 0xC0D398: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C0D19B.asm:236 TYA
    case 0xC0D39A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:601 STA scratch
    // Macro caller: src/unknown/C0/C0D19B.asm:237 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D39B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:602 ASL
    // Macro caller: src/unknown/C0/C0D19B.asm:237 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D39D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:603 ASL
    // Macro caller: src/unknown/C0/C0D19B.asm:237 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D39E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:604 ASL
    // Macro caller: src/unknown/C0/C0D19B.asm:237 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D39F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:605 ADC scratch
    // Macro caller: src/unknown/C0/C0D19B.asm:237 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D3A0: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:606 ASL
    // Macro caller: src/unknown/C0/C0D19B.asm:237 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D3A2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:238 CLC
    case 0xC0D3A3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:239 ADC @LOCAL04
    case 0xC0D3A4: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/unknown/C0/C0D19B.asm:240 TAX
    case 0xC0D3A6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:241 LDA a:pathfinding::pathfinders + pathfinder::object_index,X
    case 0xC0D3A7: cpu.execute_instruction<0xBD>(0x0000B0, 3); return true;
    // src/unknown/C0/C0D19B.asm:242 ASL
    case 0xC0D3AA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:243 TAX
    case 0xC0D3AB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:244 LDA ENTITY_ENEMY_IDS,X
    case 0xC0D3AC: cpu.execute_instruction<0xBD>(0x002D12, 3); return true;
    // src/unknown/C0/C0D19B.asm:245 CMP @LOCAL06
    case 0xC0D3AF: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // src/unknown/C0/C0D19B.asm:246 BNE @UNKNOWN24
    case 0xC0D3B1: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0D19B.asm:247 LDA @LOCAL05
    case 0xC0D3B3: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B.asm:248 INC
    case 0xC0D3B5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:249 STA @LOCAL05
    case 0xC0D3B6: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B.asm:251 INY
    case 0xC0D3B8: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:252 STY @LOCAL02
    case 0xC0D3B9: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C0D19B.asm:254 TYA
    case 0xC0D3BB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:255 LDY #pathfinding::pathfinder_count
    case 0xC0D3BC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00009E, 2); else cpu.execute_instruction<0xA0>(0x00009E, 3); return true;
    // src/unknown/C0/C0D19B.asm:255 LDY #pathfinding::pathfinder_count
    // Overlapping static entry reached from 0xC0D3BC.
    case 0xC0D3BE: cpu.execute_instruction<0x00>(0x0000D1, 2); return true;
    // src/unknown/C0/C0D19B.asm:256 CMP (@LOCAL04),Y
    case 0xC0D3BF: cpu.execute_instruction<0xD1>(0x000016, 2); return true;
    // src/unknown/C0/C0D19B.asm:257 BCC @UNKNOWN23
    case 0xC0D3C1: cpu.execute_instruction<0x90>(0x0000D5, 2); return true;
    // src/unknown/C0/C0D19B.asm:258 LDX @LOCAL03
    case 0xC0D3C3: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0D19B.asm:259 STX @VIRTUAL02
    case 0xC0D3C5: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B.asm:260 LDA @LOCAL05
    case 0xC0D3C7: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B.asm:261 CMP @VIRTUAL02
    case 0xC0D3C9: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C0/C0D19B.asm:262 BGT @UNKNOWN27
    case 0xC0D3CB: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C0D19B.asm:262 BGT @UNKNOWN27
    case 0xC0D3CD: cpu.execute_instruction<0xB0>(0x000003, 2); return true;
    // src/unknown/C0/C0D19B.asm:263 JMP @UNKNOWN33
    case 0xC0D3CF: cpu.execute_instruction<0x4C>(0x00D473, 3); return true;
    // src/unknown/C0/C0D19B.asm:265 STX @VIRTUAL02
    case 0xC0D3D2: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B.asm:266 SEC
    case 0xC0D3D4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:267 SBC @VIRTUAL02
    case 0xC0D3D5: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B.asm:268 STA @VIRTUAL04
    case 0xC0D3D7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B.asm:269 STA @LOCAL02
    case 0xC0D3D9: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0D19B.asm:270 JMP @UNKNOWN32
    case 0xC0D3DB: cpu.execute_instruction<0x4C>(0x00D45E, 3); return true;
    // src/unknown/C0/C0D19B.asm:272 LDA #.LOWORD(-1)
    case 0xC0D3DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0D19B.asm:272 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0D3DE.
    case 0xC0D3E0: cpu.execute_instruction<0xFF>(0x850285, 4); return true;
    // src/unknown/C0/C0D19B.asm:273 STA @VIRTUAL02
    case 0xC0D3E1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B.asm:274 STA @LOCAL01
    case 0xC0D3E3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0D19B.asm:274 STA @LOCAL01
    // Overlapping static entry reached from 0xC0D3E0.
    case 0xC0D3E4: cpu.execute_instruction<0x10>(0x0000A0, 2); return true;
    // src/unknown/C0/C0D19B.asm:275 LDY #0
    case 0xC0D3E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B.asm:275 LDY #0
    // Overlapping static entry reached from 0xC0D3E4.
    case 0xC0D3E6: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D19B.asm:275 LDY #0
    // Overlapping static entry reached from 0xC0D3E5.
    case 0xC0D3E7: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C0D19B.asm:276 STY @LOCAL07
    case 0xC0D3E8: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/unknown/C0/C0D19B.asm:277 TYA
    case 0xC0D3EA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:278 STA @LOCAL05
    case 0xC0D3EB: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B.asm:279 BRA @UNKNOWN31
    case 0xC0D3ED: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // include/macros.asm:601 STA scratch
    // Macro caller: src/unknown/C0/C0D19B.asm:281 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D3EF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:602 ASL
    // Macro caller: src/unknown/C0/C0D19B.asm:281 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D3F1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:603 ASL
    // Macro caller: src/unknown/C0/C0D19B.asm:281 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D3F2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:604 ASL
    // Macro caller: src/unknown/C0/C0D19B.asm:281 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D3F3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:605 ADC scratch
    // Macro caller: src/unknown/C0/C0D19B.asm:281 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D3F4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:606 ASL
    // Macro caller: src/unknown/C0/C0D19B.asm:281 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D3F6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:282 CLC
    case 0xC0D3F7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:283 ADC @LOCAL04
    case 0xC0D3F8: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/unknown/C0/C0D19B.asm:284 TAX
    case 0xC0D3FA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:285 STX @LOCAL03
    case 0xC0D3FB: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C0D19B.asm:286 LDA a:pathfinding::pathfinders + pathfinder::object_index,X
    case 0xC0D3FD: cpu.execute_instruction<0xBD>(0x0000B0, 3); return true;
    // src/unknown/C0/C0D19B.asm:287 ASL
    case 0xC0D400: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:288 TAX
    case 0xC0D401: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:289 LDA ENTITY_ENEMY_IDS,X
    case 0xC0D402: cpu.execute_instruction<0xBD>(0x002D12, 3); return true;
    // src/unknown/C0/C0D19B.asm:290 CMP @LOCAL06
    case 0xC0D405: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // src/unknown/C0/C0D19B.asm:291 BNE @UNKNOWN30
    case 0xC0D407: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/unknown/C0/C0D19B.asm:292 LDX @LOCAL03
    case 0xC0D409: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0D19B.asm:293 LDA a:pathfinding::pathfinders + pathfinder::unknown14,X
    case 0xC0D40B: cpu.execute_instruction<0xBD>(0x0000AE, 3); return true;
    // src/unknown/C0/C0D19B.asm:294 TAX
    case 0xC0D40E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:295 LDY @LOCAL07
    case 0xC0D40F: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C0/C0D19B.asm:296 STY @VIRTUAL02
    case 0xC0D411: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B.asm:297 TXA
    case 0xC0D413: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:298 CMP @VIRTUAL02
    case 0xC0D414: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0D19B.asm:299 BLTEQ @UNKNOWN30
    case 0xC0D416: cpu.execute_instruction<0x90>(0x00000B, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0D19B.asm:299 BLTEQ @UNKNOWN30
    case 0xC0D418: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C0/C0D19B.asm:300 LDA @LOCAL05
    case 0xC0D41A: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B.asm:301 STA @VIRTUAL02
    case 0xC0D41C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D19B.asm:302 STA @LOCAL01
    case 0xC0D41E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0D19B.asm:303 TXY
    case 0xC0D420: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:304 STY @LOCAL07
    case 0xC0D421: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/unknown/C0/C0D19B.asm:306 LDA @LOCAL05
    case 0xC0D423: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B.asm:307 INC
    case 0xC0D425: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:308 STA @LOCAL05
    case 0xC0D426: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B.asm:310 LDY #pathfinding::pathfinder_count
    case 0xC0D428: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00009E, 2); else cpu.execute_instruction<0xA0>(0x00009E, 3); return true;
    // src/unknown/C0/C0D19B.asm:310 LDY #pathfinding::pathfinder_count
    // Overlapping static entry reached from 0xC0D428.
    case 0xC0D42A: cpu.execute_instruction<0x00>(0x0000D1, 2); return true;
    // src/unknown/C0/C0D19B.asm:311 CMP (@LOCAL04),Y
    case 0xC0D42B: cpu.execute_instruction<0xD1>(0x000016, 2); return true;
    // src/unknown/C0/C0D19B.asm:312 BCC @UNKNOWN29
    case 0xC0D42D: cpu.execute_instruction<0x90>(0x0000C0, 2); return true;
    // src/unknown/C0/C0D19B.asm:313 LDA @LOCAL01
    case 0xC0D42F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0D19B.asm:314 STA @VIRTUAL02
    case 0xC0D431: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:601 STA scratch
    // Macro caller: src/unknown/C0/C0D19B.asm:315 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D433: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:602 ASL
    // Macro caller: src/unknown/C0/C0D19B.asm:315 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D435: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:603 ASL
    // Macro caller: src/unknown/C0/C0D19B.asm:315 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D436: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:604 ASL
    // Macro caller: src/unknown/C0/C0D19B.asm:315 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D437: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:605 ADC scratch
    // Macro caller: src/unknown/C0/C0D19B.asm:315 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D438: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:606 ASL
    // Macro caller: src/unknown/C0/C0D19B.asm:315 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC0D43A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:316 CLC
    case 0xC0D43B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:317 ADC @LOCAL04
    case 0xC0D43C: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/unknown/C0/C0D19B.asm:318 STA @LOCAL05
    case 0xC0D43E: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B.asm:319 CLC
    case 0xC0D440: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:320 ADC #pathfinding::pathfinders + pathfinder::object_index
    case 0xC0D441: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B0, 2); else cpu.execute_instruction<0x69>(0x0000B0, 3); return true;
    // src/unknown/C0/C0D19B.asm:320 ADC #pathfinding::pathfinders + pathfinder::object_index
    // Overlapping static entry reached from 0xC0D441.
    case 0xC0D443: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C0D19B.asm:321 TAX
    case 0xC0D444: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:322 STX @LOCAL03
    case 0xC0D445: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C0D19B.asm:323 LDA __BSS_START__,X
    case 0xC0D447: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B.asm:324 CMP @LOCAL09
    case 0xC0D44A: cpu.execute_instruction<0xC5>(0x000020, 2); return true;
    // src/unknown/C0/C0D19B.asm:325 BEQ @UNKNOWN32
    case 0xC0D44C: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C0/C0D19B.asm:326 LDA @LOCAL05
    case 0xC0D44E: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B.asm:327 TAX
    case 0xC0D450: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:328 STZ a:pathfinding::pathfinders + pathfinder::unknown14,X
    case 0xC0D451: cpu.execute_instruction<0x9E>(0x0000AE, 3); return true;
    // src/unknown/C0/C0D19B.asm:329 LDX @LOCAL03
    case 0xC0D454: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0D19B.asm:330 LDA __BSS_START__,X
    case 0xC0D456: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B.asm:330 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D4B8.
    case 0xC0D457: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D19B.asm:331 ASL
    case 0xC0D459: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:332 TAX
    case 0xC0D45A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:333 STZ ENTITY_PATHFINDING_STATES,X
    case 0xC0D45B: cpu.execute_instruction<0x9E>(0x002C5E, 3); return true;
    // src/unknown/C0/C0D19B.asm:335 LDA @LOCAL02
    case 0xC0D45E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0D19B.asm:336 STA @VIRTUAL04
    case 0xC0D460: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B.asm:337 LDX @VIRTUAL04
    case 0xC0D462: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B.asm:338 LDA @VIRTUAL04
    case 0xC0D464: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B.asm:339 DEC
    case 0xC0D466: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:340 STA @VIRTUAL04
    case 0xC0D467: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0D19B.asm:341 STA @LOCAL02
    case 0xC0D469: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0D19B.asm:342 CPX #0
    case 0xC0D46B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B.asm:342 CPX #0
    // Overlapping static entry reached from 0xC0D46B.
    case 0xC0D46D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0D19B.asm:343 BNEL @UNKNOWN28
    case 0xC0D46E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0D19B.asm:343 BNEL @UNKNOWN28
    case 0xC0D470: cpu.execute_instruction<0x4C>(0x00D3DE, 3); return true;
    // src/unknown/C0/C0D19B.asm:345 LDA #3
    case 0xC0D473: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C0D19B.asm:345 LDA #3
    // Overlapping static entry reached from 0xC0D473.
    case 0xC0D475: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B.asm:346 CLC
    case 0xC0D476: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:347 ADC @VIRTUAL06
    case 0xC0D477: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0D19B.asm:348 STA @VIRTUAL06
    case 0xC0D479: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0D19B.asm:350 INC @LOCAL08
    case 0xC0D47B: cpu.execute_instruction<0xE6>(0x00001E, 2); return true;
    // src/unknown/C0/C0D19B.asm:352 LDA @LOCAL08
    case 0xC0D47D: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C0D19B.asm:353 CMP #4
    case 0xC0D47F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0D19B.asm:353 CMP #4
    // Overlapping static entry reached from 0xC0D47F.
    case 0xC0D481: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0D19B.asm:354 BNEL @UNKNOWN19
    case 0xC0D482: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0D19B.asm:354 BNEL @UNKNOWN19
    case 0xC0D484: cpu.execute_instruction<0x4C>(0x00D35F, 3); return true;
    // src/unknown/C0/C0D19B.asm:355 LDA #0
    case 0xC0D487: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B.asm:355 LDA #0
    // Overlapping static entry reached from 0xC0D487.
    case 0xC0D489: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D19B.asm:356 STA @LOCAL05
    case 0xC0D48A: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B.asm:357 BRA @UNKNOWN40
    case 0xC0D48C: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/unknown/C0/C0D19B.asm:359 CMP @LOCAL09
    case 0xC0D48E: cpu.execute_instruction<0xC5>(0x000020, 2); return true;
    // src/unknown/C0/C0D19B.asm:360 BEQ @UNKNOWN39
    case 0xC0D490: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/unknown/C0/C0D19B.asm:361 ASL
    case 0xC0D492: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:362 TAX
    case 0xC0D493: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:363 LDA ENTITY_PATHFINDING_STATES,X
    case 0xC0D494: cpu.execute_instruction<0xBD>(0x002C5E, 3); return true;
    // src/unknown/C0/C0D19B.asm:364 CMP #.LOWORD(-1)
    case 0xC0D497: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0D19B.asm:364 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0D497.
    case 0xC0D499: cpu.execute_instruction<0xFF>(0x8A11D0, 4); return true;
    // src/unknown/C0/C0D19B.asm:365 BNE @UNKNOWN38
    case 0xC0D49A: cpu.execute_instruction<0xD0>(0x000011, 2); return true;
    // src/unknown/C0/C0D19B.asm:366 TXA
    case 0xC0D49C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:367 CLC
    case 0xC0D49D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:368 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC0D49E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/unknown/C0/C0D19B.asm:368 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC0D49E.
    case 0xC0D4A0: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C0/C0D19B.asm:369 TAX
    case 0xC0D4A1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:370 LDA __BSS_START__,X
    case 0xC0D4A2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B.asm:371 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xC0D4A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x003FFF, 3); return true;
    // src/unknown/C0/C0D19B.asm:371 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xC0D4A5.
    case 0xC0D4A7: cpu.execute_instruction<0x3F>(0x00009D, 4); return true;
    // src/unknown/C0/C0D19B.asm:372 STA __BSS_START__,X
    case 0xC0D4A8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B.asm:373 BRA @UNKNOWN39
    case 0xC0D4AB: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/C0/C0D19B.asm:375 TXA
    case 0xC0D4AD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:376 CLC
    case 0xC0D4AE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:377 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC0D4AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006A, 2); else cpu.execute_instruction<0x69>(0x00116A, 3); return true;
    // src/unknown/C0/C0D19B.asm:377 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC0D4AF.
    case 0xC0D4B1: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/C0/C0D19B.asm:378 TAX
    case 0xC0D4B2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:379 LDA __BSS_START__,X
    case 0xC0D4B3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B.asm:380 ORA #$8000
    case 0xC0D4B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/unknown/C0/C0D19B.asm:380 ORA #$8000
    // Overlapping static entry reached from 0xC0D4B6.
    case 0xC0D4B8: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/C0/C0D19B.asm:381 STA __BSS_START__,X
    case 0xC0D4B9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D19B.asm:383 LDA @LOCAL05
    case 0xC0D4BC: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B.asm:384 INC
    case 0xC0D4BE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:385 STA @LOCAL05
    case 0xC0D4BF: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0D19B.asm:387 CMP #23
    case 0xC0D4C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/unknown/C0/C0D19B.asm:387 CMP #23
    // Overlapping static entry reached from 0xC0D4C1.
    case 0xC0D4C3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D19B.asm:388 BNE @UNKNOWN37
    case 0xC0D4C4: cpu.execute_instruction<0xD0>(0x0000C8, 2); return true;
    // src/unknown/C0/C0D19B.asm:389 LDA @LOCAL09
    case 0xC0D4C6: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C0D19B.asm:390 ASL
    case 0xC0D4C8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:391 TAX
    case 0xC0D4C9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:392 STZ ENTITY_PATHFINDING_STATES,X
    case 0xC0D4CA: cpu.execute_instruction<0x9E>(0x002C5E, 3); return true;
    // src/unknown/C0/C0D19B.asm:393 LDA ENEMIES_IN_BATTLE
    case 0xC0D4CD: cpu.execute_instruction<0xAD>(0x009F8A, 3); return true;
    // src/unknown/C0/C0D19B.asm:394 ASL
    case 0xC0D4D0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:395 PHA
    case 0xC0D4D1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:396 LDA ENTITY_ENEMY_IDS,X
    case 0xC0D4D2: cpu.execute_instruction<0xBD>(0x002D12, 3); return true;
    // src/unknown/C0/C0D19B.asm:397 PLX
    case 0xC0D4D5: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0D19B.asm:398 STA ENEMIES_IN_BATTLE_IDS,X
    case 0xC0D4D6: cpu.execute_instruction<0x9D>(0x009F8C, 3); return true;
    // src/unknown/C0/C0D19B.asm:399 INC ENEMIES_IN_BATTLE
    case 0xC0D4D9: cpu.execute_instruction<0xEE>(0x009F8A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0D19B.asm:400 END_C_FUNCTION
    case 0xC0D4DC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0D19B.asm:400 END_C_FUNCTION
    case 0xC0D4DD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D4DE.asm (unresolved).
bool execute_unresolved_c0_c0d4de_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0D4DE.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0D4DE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0D4DE.asm:10 END_STACK_VARS
    case 0xC0D4E0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0D4DE.asm:10 END_STACK_VARS
    case 0xC0D4E1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D4DE.asm:10 END_STACK_VARS
    case 0xC0D4E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D4DE.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC0D4E2.
    case 0xC0D4E4: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0D4DE.asm:10 END_STACK_VARS
    case 0xC0D4E5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0D4DE.asm:11 LOADPTR BUFFER + $2000, @LOCAL00
    case 0xC0D4E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0D4DE.asm:11 LOADPTR BUFFER + $2000, @LOCAL00
    // Overlapping static entry reached from 0xC0D4E6.
    case 0xC0D4E8: cpu.execute_instruction<0x20>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0D4DE.asm:11 LOADPTR BUFFER + $2000, @LOCAL00
    case 0xC0D4E9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0D4DE.asm:11 LOADPTR BUFFER + $2000, @LOCAL00
    case 0xC0D4EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0D4DE.asm:11 LOADPTR BUFFER + $2000, @LOCAL00
    // Overlapping static entry reached from 0xC0D4EB.
    case 0xC0D4ED: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0D4DE.asm:11 LOADPTR BUFFER + $2000, @LOCAL00
    case 0xC0D4EE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C0/C0D4DE.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0D4F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C0/C0D4DE.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0D4F0.
    case 0xC0D4F2: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C0D4DE.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0D4F3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C0D4DE.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0D4F5: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0D4DE.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0D4F6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C0D4DE.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0D4F8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0D4DE.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0D4F9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0D4DE.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0D4FB: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C0D4DE.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC0D4FD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0D4DE.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0D4FF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0D4DE.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0D501: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0D4DE.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0D503: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0D4DE.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0D505: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0D4DE.asm:15 LDA #.LOWORD(PALETTES)
    case 0xC0D507: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C0/C0D4DE.asm:15 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0D507.
    case 0xC0D509: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C0/C0D4DE.asm:16 JSL MEMCPY24
    case 0xC0D50A: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C0/C0D4DE.asm:17 LDA #0
    case 0xC0D50E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D4DE.asm:17 LDA #0
    // Overlapping static entry reached from 0xC0D50E.
    case 0xC0D510: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D4DE.asm:18 STA @VIRTUAL04
    case 0xC0D511: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0D4DE.asm:19 BRA @UNKNOWN1
    case 0xC0D513: cpu.execute_instruction<0x80>(0x000071, 2); return true;
    // src/unknown/C0/C0D4DE.asm:21 LDA @VIRTUAL04
    case 0xC0D515: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0D4DE.asm:22 ASL
    case 0xC0D517: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:23 CLC
    case 0xC0D518: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:24 ADC #.LOWORD(PALETTES)
    case 0xC0D519: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000200, 3); return true;
    // src/unknown/C0/C0D4DE.asm:24 ADC #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0D519.
    case 0xC0D51B: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/unknown/C0/C0D4DE.asm:25 TAY
    case 0xC0D51C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:26 STY @LOCAL04
    case 0xC0D51D: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/unknown/C0/C0D4DE.asm:27 LDA __BSS_START__,Y
    case 0xC0D51F: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0D4DE.asm:28 STA @LOCAL03
    case 0xC0D522: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0D4DE.asm:29 AND #$001F
    case 0xC0D524: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C0/C0D4DE.asm:29 AND #$001F
    // Overlapping static entry reached from 0xC0D524.
    case 0xC0D526: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C0D4DE.asm:30 TAX
    case 0xC0D527: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:31 STX @LOCAL02
    case 0xC0D528: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C0/C0D4DE.asm:32 LDA @LOCAL03
    case 0xC0D52A: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0D4DE.asm:33 LSR
    case 0xC0D52C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:34 LSR
    case 0xC0D52D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:35 LSR
    case 0xC0D52E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:36 LSR
    case 0xC0D52F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:37 LSR
    case 0xC0D530: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:38 AND #$001F
    case 0xC0D531: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C0/C0D4DE.asm:38 AND #$001F
    // Overlapping static entry reached from 0xC0D531.
    case 0xC0D533: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D4DE.asm:39 STA @VIRTUAL02
    case 0xC0D534: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D4DE.asm:40 SEP #PROC_FLAGS::ACCUM8
    case 0xC0D536: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0D4DE.asm:41 LDA #10
    case 0xC0D538: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00E20A, 3); return true;
    // src/unknown/C0/C0D4DE.asm:42 SEP #PROC_FLAGS::INDEX8
    case 0xC0D53A: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C0/C0D4DE.asm:42 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC0D538.
    case 0xC0D53B: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C0/C0D4DE.asm:43 TAY
    case 0xC0D53C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC0D53D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0D4DE.asm:45 LDA @LOCAL03
    case 0xC0D53F: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0D4DE.asm:46 JSL ASR8_UNKNOWN1
    case 0xC0D541: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/unknown/C0/C0D4DE.asm:47 AND #$001F
    case 0xC0D545: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C0/C0D4DE.asm:47 AND #$001F
    // Overlapping static entry reached from 0xC0D545.
    case 0xC0D547: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C0/C0D4DE.asm:48 REP #PROC_FLAGS::INDEX8
    case 0xC0D548: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C0/C0D4DE.asm:49 LDY #3
    case 0xC0D54A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C0/C0D4DE.asm:49 LDY #3
    // Overlapping static entry reached from 0xC0D54A.
    case 0xC0D54C: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C0/C0D4DE.asm:50 PHA
    case 0xC0D54D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:51 LDX @LOCAL02
    case 0xC0D54E: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C0/C0D4DE.asm:52 TXA
    case 0xC0D550: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:53 CLC
    case 0xC0D551: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:54 ADC @VIRTUAL02
    case 0xC0D552: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0D4DE.asm:55 PLX
    case 0xC0D554: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:56 STX @VIRTUAL02
    case 0xC0D555: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0D4DE.asm:57 CLC
    case 0xC0D557: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:58 ADC @VIRTUAL02
    case 0xC0D558: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0D4DE.asm:59 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC0D55A: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/unknown/C0/C0D4DE.asm:60 STA @LOCAL02
    case 0xC0D55E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0D4DE.asm:61 SEP #PROC_FLAGS::INDEX8
    case 0xC0D560: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C0/C0D4DE.asm:62 LDY #10
    case 0xC0D562: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00220A, 3); return true;
    // src/unknown/C0/C0D4DE.asm:63 JSL ASL16_ENTRY2
    case 0xC0D564: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/unknown/C0/C0D4DE.asm:63 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC0D562.
    case 0xC0D565: cpu.execute_instruction<0x3E>(0x00C092, 3); return true;
    // src/unknown/C0/C0D4DE.asm:64 PHA
    case 0xC0D568: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:65 LDA @LOCAL02
    case 0xC0D569: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0D4DE.asm:66 ASL
    case 0xC0D56B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:67 ASL
    case 0xC0D56C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:68 ASL
    case 0xC0D56D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:69 ASL
    case 0xC0D56E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:70 ASL
    case 0xC0D56F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:71 STA @VIRTUAL02
    case 0xC0D570: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D4DE.asm:72 LDA @LOCAL02
    case 0xC0D572: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0D4DE.asm:73 CLC
    case 0xC0D574: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:74 ADC @VIRTUAL02
    case 0xC0D575: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0D4DE.asm:75 REP #PROC_FLAGS::INDEX8
    case 0xC0D577: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C0/C0D4DE.asm:76 PLY
    case 0xC0D579: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:77 STY @VIRTUAL02
    case 0xC0D57A: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0D4DE.asm:78 CLC
    case 0xC0D57C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D4DE.asm:79 ADC @VIRTUAL02
    case 0xC0D57D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0D4DE.asm:80 LDY @LOCAL04
    case 0xC0D57F: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C0/C0D4DE.asm:81 STA __BSS_START__,Y
    case 0xC0D581: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0D4DE.asm:82 INC @VIRTUAL04
    case 0xC0D584: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C0/C0D4DE.asm:84 LDA @VIRTUAL04
    case 0xC0D586: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0D4DE.asm:85 CMP #BPP4PALETTE_SIZE * 4
    case 0xC0D588: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000080, 3); return true;
    // src/unknown/C0/C0D4DE.asm:85 CMP #BPP4PALETTE_SIZE * 4
    // Overlapping static entry reached from 0xC0D588.
    case 0xC0D58A: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C0D4DE.asm:86 BCCL @UNKNOWN0
    case 0xC0D58B: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C0D4DE.asm:86 BCCL @UNKNOWN0
    case 0xC0D58D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C0D4DE.asm:86 BCCL @UNKNOWN0
    case 0xC0D58F: cpu.execute_instruction<0x4C>(0x00D515, 3); return true;
    // src/unknown/C0/C0D4DE.asm:87 LDA #24
    case 0xC0D592: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C0D4DE.asm:87 LDA #24
    // Overlapping static entry reached from 0xC0D592.
    case 0xC0D594: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0D4DE.asm:88 JSL UNKNOWN_C0856B
    case 0xC0D595: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0D4DE.asm:89 END_C_FUNCTION
    case 0xC0D599: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0D4DE.asm:89 END_C_FUNCTION
    case 0xC0D59A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D59B.asm (unresolved).
bool execute_unresolved_c0_c0d59b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0D59B.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0D59B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0D59B.asm:4 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0D59D: cpu.execute_instruction<0xAD>(0x005D60, 3); return true;
    // src/unknown/C0/C0D59B.asm:5 BNE @UNKNOWN0
    case 0xC0D5A0: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0D59B.asm:6 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC0D5A2: cpu.execute_instruction<0xAD>(0x004DBA, 3); return true;
    // src/unknown/C0/C0D59B.asm:7 BEQ @UNKNOWN1
    case 0xC0D5A5: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0D59B.asm:9 LDA #$0001
    case 0xC0D5A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0D59B.asm:9 LDA #$0001
    // Overlapping static entry reached from 0xC0D5A7.
    case 0xC0D5A9: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0D59B.asm:10 BRA @UNKNOWN2
    case 0xC0D5AA: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0D59B.asm:12 LDA #$0000
    case 0xC0D5AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D59B.asm:12 LDA #$0000
    // Overlapping static entry reached from 0xC0D5AC.
    case 0xC0D5AE: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/unknown/C0/C0D59B.asm:14 RTL
    case 0xC0D5AF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D5B0.asm (unresolved).
bool execute_unresolved_c0_c0d5b0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0D5B0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0D5B0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0D5B0.asm:10 END_STACK_VARS
    case 0xC0D5B2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0D5B0.asm:10 END_STACK_VARS
    case 0xC0D5B3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D5B0.asm:10 END_STACK_VARS
    case 0xC0D5B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D5B0.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC0D5B4.
    case 0xC0D5B6: cpu.execute_instruction<0xFF>(0xC2AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0D5B0.asm:10 END_STACK_VARS
    case 0xC0D5B7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:11 LDA BATTLE_MODE
    case 0xC0D5B8: cpu.execute_instruction<0xAD>(0x004DC2, 3); return true;
    // src/unknown/C0/C0D5B0.asm:11 LDA BATTLE_MODE
    // Overlapping static entry reached from 0xC0D5B6.
    case 0xC0D5BA: cpu.execute_instruction<0x4D>(0x0006F0, 3); return true;
    // src/unknown/C0/C0D5B0.asm:12 BEQ @UNKNOWN0
    case 0xC0D5BB: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0D5B0.asm:13 LDA #0
    case 0xC0D5BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:13 LDA #0
    // Overlapping static entry reached from 0xC0D5BD.
    case 0xC0D5BF: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0D5B0.asm:14 JMP @UNKNOWN25
    case 0xC0D5C0: cpu.execute_instruction<0x4C>(0x00D77D, 3); return true;
    // src/unknown/C0/C0D5B0.asm:16 LDA USING_DOOR
    case 0xC0D5C3: cpu.execute_instruction<0xAD>(0x005DC2, 3); return true;
    // src/unknown/C0/C0D5B0.asm:17 BEQ @UNKNOWN1
    case 0xC0D5C6: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0D5B0.asm:18 LDA #0
    case 0xC0D5C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:18 LDA #0
    // Overlapping static entry reached from 0xC0D5C8.
    case 0xC0D5CA: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0D5B0.asm:19 JMP @UNKNOWN25
    case 0xC0D5CB: cpu.execute_instruction<0x4C>(0x00D77D, 3); return true;
    // src/unknown/C0/C0D5B0.asm:21 LDA CURRENT_ENTITY_SLOT
    case 0xC0D5CE: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0D5B0.asm:22 STA @VIRTUAL02
    case 0xC0D5D1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D5B0.asm:23 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0D5D3: cpu.execute_instruction<0xAD>(0x005D60, 3); return true;
    // src/unknown/C0/C0D5B0.asm:24 BEQ @UNKNOWN2
    case 0xC0D5D6: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C0D5B0.asm:25 LDA @VIRTUAL02
    case 0xC0D5D8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D5B0.asm:26 CMP TOUCHED_ENEMY
    case 0xC0D5DA: cpu.execute_instruction<0xCD>(0x004DB6, 3); return true;
    // src/unknown/C0/C0D5B0.asm:27 BEQ @UNKNOWN8
    case 0xC0D5DD: cpu.execute_instruction<0xF0>(0x000052, 2); return true;
    // src/unknown/C0/C0D5B0.asm:29 LDA GAME_STATE + game_state::unknownB0
    case 0xC0D5DF: cpu.execute_instruction<0xAD>(0x0098A5, 3); return true;
    // src/unknown/C0/C0D5B0.asm:30 CMP #2
    case 0xC0D5E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0D5B0.asm:30 CMP #2
    // Overlapping static entry reached from 0xC0D5E2.
    case 0xC0D5E4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D5B0.asm:31 BNE @UNKNOWN3
    case 0xC0D5E5: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0D5B0.asm:32 LDA #0
    case 0xC0D5E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:32 LDA #0
    // Overlapping static entry reached from 0xC0D5E7.
    case 0xC0D5E9: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0D5B0.asm:33 JMP @UNKNOWN25
    case 0xC0D5EA: cpu.execute_instruction<0x4C>(0x00D77D, 3); return true;
    // src/unknown/C0/C0D5B0.asm:35 LDA PLAYER_MOVEMENT_FLAGS
    case 0xC0D5ED: cpu.execute_instruction<0xAD>(0x005D56, 3); return true;
    // src/unknown/C0/C0D5B0.asm:36 AND #02
    case 0xC0D5F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/unknown/C0/C0D5B0.asm:36 AND #02
    // Overlapping static entry reached from 0xC0D5F0.
    case 0xC0D5F2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0D5B0.asm:37 BEQ @UNKNOWN4
    case 0xC0D5F3: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0D5B0.asm:38 LDA #0
    case 0xC0D5F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:38 LDA #0
    // Overlapping static entry reached from 0xC0D5F5.
    case 0xC0D5F7: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0D5B0.asm:39 JMP @UNKNOWN25
    case 0xC0D5F8: cpu.execute_instruction<0x4C>(0x00D77D, 3); return true;
    // src/unknown/C0/C0D5B0.asm:41 LDA GAME_STATE+game_state::walking_style
    case 0xC0D5FB: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/unknown/C0/C0D5B0.asm:42 CMP #WALKING_STYLE::ESCALATOR
    case 0xC0D5FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/unknown/C0/C0D5B0.asm:42 CMP #WALKING_STYLE::ESCALATOR
    // Overlapping static entry reached from 0xC0D5FE.
    case 0xC0D600: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D5B0.asm:43 BNE @UNKNOWN5
    case 0xC0D601: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0D5B0.asm:44 LDA #0
    case 0xC0D603: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:44 LDA #0
    // Overlapping static entry reached from 0xC0D603.
    case 0xC0D605: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0D5B0.asm:45 JMP @UNKNOWN25
    case 0xC0D606: cpu.execute_instruction<0x4C>(0x00D77D, 3); return true;
    // src/unknown/C0/C0D5B0.asm:47 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC0D609: cpu.execute_instruction<0xAD>(0x005D58, 3); return true;
    // src/unknown/C0/C0D5B0.asm:48 BEQ @UNKNOWN6
    case 0xC0D60C: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0D5B0.asm:49 LDA #0
    case 0xC0D60E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:49 LDA #0
    // Overlapping static entry reached from 0xC0D60E.
    case 0xC0D610: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0D5B0.asm:50 JMP @UNKNOWN25
    case 0xC0D611: cpu.execute_instruction<0x4C>(0x00D77D, 3); return true;
    // src/unknown/C0/C0D5B0.asm:52 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0D614: cpu.execute_instruction<0xAD>(0x005D60, 3); return true;
    // src/unknown/C0/C0D5B0.asm:53 BEQ @UNKNOWN7
    case 0xC0D617: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C0/C0D5B0.asm:54 LDA @VIRTUAL02
    case 0xC0D619: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D5B0.asm:55 ASL
    case 0xC0D61B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:56 TAX
    case 0xC0D61C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:57 LDA ENTITY_PATH_POINT_COUNTS,X
    case 0xC0D61D: cpu.execute_instruction<0xBD>(0x002E3E, 3); return true;
    // src/unknown/C0/C0D5B0.asm:58 BEQ @UNKNOWN8
    case 0xC0D620: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C0/C0D5B0.asm:60 JSL UNKNOWN_C0D15C
    case 0xC0D622: cpu.execute_instruction<0x22>(0xC0D15C, 4); return true;
    // src/unknown/C0/C0D5B0.asm:61 CMP #0
    case 0xC0D626: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:61 CMP #0
    // Overlapping static entry reached from 0xC0D626.
    case 0xC0D628: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D5B0.asm:62 BNE @UNKNOWN8
    case 0xC0D629: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0D5B0.asm:63 LDA #0
    case 0xC0D62B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:63 LDA #0
    // Overlapping static entry reached from 0xC0D62B.
    case 0xC0D62D: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0D5B0.asm:64 JMP @UNKNOWN25
    case 0xC0D62E: cpu.execute_instruction<0x4C>(0x00D77D, 3); return true;
    // src/unknown/C0/C0D5B0.asm:66 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0D631: cpu.execute_instruction<0xAD>(0x005D60, 3); return true;
    // src/unknown/C0/C0D5B0.asm:67 BNE @UNKNOWN9
    case 0xC0D634: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/unknown/C0/C0D5B0.asm:68 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC0D636: cpu.execute_instruction<0xAD>(0x004DBA, 3); return true;
    // src/unknown/C0/C0D5B0.asm:69 BNE @UNKNOWN9
    case 0xC0D639: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/unknown/C0/C0D5B0.asm:70 LDA @VIRTUAL02
    case 0xC0D63B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D5B0.asm:71 ASL
    case 0xC0D63D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:72 TAX
    case 0xC0D63E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:73 LDA ENTITY_ENEMY_IDS,X
    case 0xC0D63F: cpu.execute_instruction<0xBD>(0x002D12, 3); return true;
    // src/unknown/C0/C0D5B0.asm:74 CMP #ENEMY::MAGIC_BUTTERFLY
    case 0xC0D642: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E1, 2); else cpu.execute_instruction<0xC9>(0x0000E1, 3); return true;
    // src/unknown/C0/C0D5B0.asm:74 CMP #ENEMY::MAGIC_BUTTERFLY
    // Overlapping static entry reached from 0xC0D642.
    case 0xC0D644: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D5B0.asm:75 BNE @UNKNOWN9
    case 0xC0D645: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0D5B0.asm:76 LDA #1
    case 0xC0D647: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0D5B0.asm:76 LDA #1
    // Overlapping static entry reached from 0xC0D647.
    case 0xC0D649: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0D5B0.asm:77 JMP @UNKNOWN25
    case 0xC0D64A: cpu.execute_instruction<0x4C>(0x00D77D, 3); return true;
    // src/unknown/C0/C0D5B0.asm:79 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0D64D: cpu.execute_instruction<0xAD>(0x005D60, 3); return true;
    // src/unknown/C0/C0D5B0.asm:80 BNE @UNKNOWN15
    case 0xC0D650: cpu.execute_instruction<0xD0>(0x00005C, 2); return true;
    // src/unknown/C0/C0D5B0.asm:81 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC0D652: cpu.execute_instruction<0xAD>(0x004DBA, 3); return true;
    // src/unknown/C0/C0D5B0.asm:81 LDA ENEMY_HAS_BEEN_TOUCHED
    // Overlapping static entry reached from 0xC0D6B4.
    case 0xC0D653: cpu.execute_instruction<0xBA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:81 LDA ENEMY_HAS_BEEN_TOUCHED
    // Overlapping static entry reached from 0xC0D653.
    case 0xC0D654: cpu.execute_instruction<0x4D>(0x0057D0, 3); return true;
    // src/unknown/C0/C0D5B0.asm:82 BNE @UNKNOWN15
    case 0xC0D655: cpu.execute_instruction<0xD0>(0x000057, 2); return true;
    // src/unknown/C0/C0D5B0.asm:83 LDA #1
    case 0xC0D657: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0D5B0.asm:83 LDA #1
    // Overlapping static entry reached from 0xC0D657.
    case 0xC0D659: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0D5B0.asm:84 STA ENEMY_HAS_BEEN_TOUCHED
    case 0xC0D65A: cpu.execute_instruction<0x8D>(0x004DBA, 3); return true;
    // src/unknown/C0/C0D5B0.asm:85 JSL UNKNOWN_C0D4DE
    case 0xC0D65D: cpu.execute_instruction<0x22>(0xC0D4DE, 4); return true;
    // src/unknown/C0/C0D5B0.asm:86 LDA @VIRTUAL02
    case 0xC0D661: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D5B0.asm:87 CMP ENTITY_COLLIDED_OBJECTS+46
    case 0xC0D663: cpu.execute_instruction<0xCD>(0x0028CC, 3); return true;
    // src/unknown/C0/C0D5B0.asm:88 BNE @UNKNOWN10
    case 0xC0D666: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C0/C0D5B0.asm:89 LDA #24
    case 0xC0D668: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C0D5B0.asm:89 LDA #24
    // Overlapping static entry reached from 0xC0D668.
    case 0xC0D66A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0D5B0.asm:90 STA ENEMY_PATHFINDING_TARGET_ENTITY
    case 0xC0D66B: cpu.execute_instruction<0x8D>(0x004DB8, 3); return true;
    // src/unknown/C0/C0D5B0.asm:91 BRA @UNKNOWN11
    case 0xC0D66E: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C0/C0D5B0.asm:93 LDA @VIRTUAL02
    case 0xC0D670: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D5B0.asm:94 ASL
    case 0xC0D672: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:95 TAX
    case 0xC0D673: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:96 LDA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0D674: cpu.execute_instruction<0xBD>(0x00289E, 3); return true;
    // src/unknown/C0/C0D5B0.asm:97 STA ENEMY_PATHFINDING_TARGET_ENTITY
    case 0xC0D677: cpu.execute_instruction<0x8D>(0x004DB8, 3); return true;
    // src/unknown/C0/C0D5B0.asm:97 STA ENEMY_PATHFINDING_TARGET_ENTITY
    // Overlapping static entry reached from 0xC0D6CD.
    case 0xC0D679: cpu.execute_instruction<0x4D>(0x0002A5, 3); return true;
    // src/unknown/C0/C0D5B0.asm:99 LDA @VIRTUAL02
    case 0xC0D67A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D5B0.asm:100 STA TOUCHED_ENEMY
    case 0xC0D67C: cpu.execute_instruction<0x8D>(0x004DB6, 3); return true;
    // src/unknown/C0/C0D5B0.asm:101 LDA #0
    case 0xC0D67F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:101 LDA #0
    // Overlapping static entry reached from 0xC0D67F.
    case 0xC0D681: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D5B0.asm:102 STA @LOCAL03
    case 0xC0D682: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0D5B0.asm:103 BRA @UNKNOWN14
    case 0xC0D684: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C0/C0D5B0.asm:105 CMP #23
    case 0xC0D686: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/unknown/C0/C0D5B0.asm:105 CMP #23
    // Overlapping static entry reached from 0xC0D686.
    case 0xC0D688: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0D5B0.asm:106 BEQ @UNKNOWN13
    case 0xC0D689: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C0/C0D5B0.asm:107 ASL
    case 0xC0D68B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:108 CLC
    case 0xC0D68C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:109 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC0D68D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/unknown/C0/C0D5B0.asm:109 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC0D68D.
    case 0xC0D68F: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C0/C0D5B0.asm:110 TAX
    case 0xC0D690: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:111 LDA __BSS_START__,X
    case 0xC0D691: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:112 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC0D694: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:112 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC0D694.
    case 0xC0D696: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C0/C0D5B0.asm:113 STA __BSS_START__,X
    case 0xC0D697: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:113 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D696.
    case 0xC0D698: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D5B0.asm:113 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D696.
    case 0xC0D699: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C0D5B0.asm:115 LDA @LOCAL03
    case 0xC0D69A: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0D5B0.asm:116 INC
    case 0xC0D69C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:117 STA @LOCAL03
    case 0xC0D69D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0D5B0.asm:119 CMP #MAX_ENTITIES
    case 0xC0D69F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C0/C0D5B0.asm:119 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC0D69F.
    case 0xC0D6A1: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0D5B0.asm:120 BCC @UNKNOWN12
    case 0xC0D6A2: cpu.execute_instruction<0x90>(0x0000E2, 2); return true;
    // src/unknown/C0/C0D5B0.asm:121 JSL UNKNOWN_C04A88
    case 0xC0D6A4: cpu.execute_instruction<0x22>(0xC04A88, 4); return true;
    // src/unknown/C0/C0D5B0.asm:122 LDA #1
    case 0xC0D6A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0D5B0.asm:122 LDA #1
    // Overlapping static entry reached from 0xC0D6A8.
    case 0xC0D6AA: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0D5B0.asm:123 JMP @UNKNOWN25
    case 0xC0D6AB: cpu.execute_instruction<0x4C>(0x00D77D, 3); return true;
    // src/unknown/C0/C0D5B0.asm:125 LDA @VIRTUAL02
    case 0xC0D6AE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D5B0.asm:126 ASL
    case 0xC0D6B0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:127 TAX
    case 0xC0D6B1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:128 LDA #ENTITY_COLLISION_DISABLED
    case 0xC0D6B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:128 LDA #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC0D6B2.
    case 0xC0D6B4: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/C0/C0D5B0.asm:129 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0D6B5: cpu.execute_instruction<0x9D>(0x00289E, 3); return true;
    // src/unknown/C0/C0D5B0.asm:130 STZ @LOCAL02
    case 0xC0D6B8: cpu.execute_instruction<0x64>(0x000012, 2); return true;
    // src/unknown/C0/C0D5B0.asm:131 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0D6BA: cpu.execute_instruction<0xAD>(0x005D60, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0D5B0.asm:132 BEQL @UNKNOWN24
    case 0xC0D6BD: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0D5B0.asm:132 BEQL @UNKNOWN24
    case 0xC0D6BF: cpu.execute_instruction<0x4C>(0x00D77B, 3); return true;
    // src/unknown/C0/C0D5B0.asm:133 LDA @VIRTUAL02
    case 0xC0D6C2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D5B0.asm:134 CMP TOUCHED_ENEMY
    case 0xC0D6C4: cpu.execute_instruction<0xCD>(0x004DB6, 3); return true;
    // src/unknown/C0/C0D5B0.asm:135 BNE @UNKNOWN17
    case 0xC0D6C7: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/unknown/C0/C0D5B0.asm:136 TXA
    case 0xC0D6C9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:137 CLC
    case 0xC0D6CA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:138 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC0D6CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/unknown/C0/C0D5B0.asm:138 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC0D6CB.
    case 0xC0D6CD: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C0/C0D5B0.asm:139 TAX
    case 0xC0D6CE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:140 LDA __BSS_START__,X
    case 0xC0D6CF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:141 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC0D6D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:141 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC0D6D2.
    case 0xC0D6D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C0/C0D5B0.asm:142 STA __BSS_START__,X
    case 0xC0D6D5: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:142 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D6D4.
    case 0xC0D6D6: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D5B0.asm:142 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D6D4.
    case 0xC0D6D7: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C0D5B0.asm:143 LDA #1
    case 0xC0D6D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0D5B0.asm:143 LDA #1
    // Overlapping static entry reached from 0xC0D6D8.
    case 0xC0D6DA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D5B0.asm:144 STA @LOCAL02
    case 0xC0D6DB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0D5B0.asm:145 JMP @UNKNOWN24
    case 0xC0D6DD: cpu.execute_instruction<0x4C>(0x00D77B, 3); return true;
    // src/unknown/C0/C0D5B0.asm:147 LDA ENTITY_ENEMY_IDS,X
    case 0xC0D6E0: cpu.execute_instruction<0xBD>(0x002D12, 3); return true;
    // src/unknown/C0/C0D5B0.asm:148 STA @VIRTUAL04
    case 0xC0D6E3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0D5B0.asm:149 LDY #0
    case 0xC0D6E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:149 LDY #0
    // Overlapping static entry reached from 0xC0D6E5.
    case 0xC0D6E7: cpu.execute_instruction<0x00>(0x000064, 2); return true;
    // src/unknown/C0/C0D5B0.asm:150 STZ @LOCAL02
    case 0xC0D6E8: cpu.execute_instruction<0x64>(0x000012, 2); return true;
    // src/unknown/C0/C0D5B0.asm:151 TYA
    case 0xC0D6EA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:152 STA @LOCAL01
    case 0xC0D6EB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0D5B0.asm:153 BRA @UNKNOWN20
    case 0xC0D6ED: cpu.execute_instruction<0x80>(0x00004E, 2); return true;
    // src/unknown/C0/C0D5B0.asm:155 ASL
    case 0xC0D6EF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:156 TAX
    case 0xC0D6F0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:157 LDA @VIRTUAL04
    case 0xC0D6F1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0D5B0.asm:158 CMP PATHFINDING_ENEMY_IDS,X
    case 0xC0D6F3: cpu.execute_instruction<0xDD>(0x004A7C, 3); return true;
    // src/unknown/C0/C0D5B0.asm:159 BNE @UNKNOWN19
    case 0xC0D6F6: cpu.execute_instruction<0xD0>(0x000036, 2); return true;
    // src/unknown/C0/C0D5B0.asm:160 TXA
    case 0xC0D6F8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:161 CLC
    case 0xC0D6F9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:162 ADC #.LOWORD(PATHFINDING_ENEMY_COUNTS)
    case 0xC0D6FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000084, 2); else cpu.execute_instruction<0x69>(0x004A84, 3); return true;
    // src/unknown/C0/C0D5B0.asm:162 ADC #.LOWORD(PATHFINDING_ENEMY_COUNTS)
    // Overlapping static entry reached from 0xC0D6FA.
    case 0xC0D6FC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:163 TAX
    case 0xC0D6FD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:164 LDA __BSS_START__,X
    case 0xC0D6FE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:165 STA @LOCAL00
    case 0xC0D701: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0D5B0.asm:166 BEQ @UNKNOWN19
    case 0xC0D703: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/unknown/C0/C0D5B0.asm:167 LDA @LOCAL00
    case 0xC0D705: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0D5B0.asm:168 DEC
    case 0xC0D707: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:169 STA __BSS_START__,X
    case 0xC0D708: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:170 LDA #1
    case 0xC0D70B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0D5B0.asm:170 LDA #1
    // Overlapping static entry reached from 0xC0D760.
    case 0xC0D70C: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C0D5B0.asm:170 LDA #1
    // Overlapping static entry reached from 0xC0D70B.
    case 0xC0D70D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D5B0.asm:171 STA @LOCAL02
    case 0xC0D70E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0D5B0.asm:172 LDA @VIRTUAL02
    case 0xC0D710: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D5B0.asm:173 ASL
    case 0xC0D712: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:174 CLC
    case 0xC0D713: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:175 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC0D714: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/unknown/C0/C0D5B0.asm:175 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC0D714.
    case 0xC0D716: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C0/C0D5B0.asm:176 TAX
    case 0xC0D717: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:177 LDA __BSS_START__,X
    case 0xC0D718: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:178 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC0D71B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:178 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC0D71B.
    case 0xC0D71D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C0/C0D5B0.asm:179 STA __BSS_START__,X
    case 0xC0D71E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:179 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D71D.
    case 0xC0D71F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D5B0.asm:179 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D71D.
    case 0xC0D720: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C0/C0D5B0.asm:180 LDA ENEMIES_IN_BATTLE
    case 0xC0D721: cpu.execute_instruction<0xAD>(0x009F8A, 3); return true;
    // src/unknown/C0/C0D5B0.asm:181 ASL
    case 0xC0D724: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:182 TAX
    case 0xC0D725: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:183 LDA @VIRTUAL04
    case 0xC0D726: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0D5B0.asm:184 STA ENEMIES_IN_BATTLE_IDS,X
    case 0xC0D728: cpu.execute_instruction<0x9D>(0x009F8C, 3); return true;
    // src/unknown/C0/C0D5B0.asm:185 INC ENEMIES_IN_BATTLE
    case 0xC0D72B: cpu.execute_instruction<0xEE>(0x009F8A, 3); return true;
    // src/unknown/C0/C0D5B0.asm:187 LDA @LOCAL01
    case 0xC0D72E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0D5B0.asm:188 ASL
    case 0xC0D730: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:189 TAX
    case 0xC0D731: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:190 TYA
    case 0xC0D732: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:191 CLC
    case 0xC0D733: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:192 ADC PATHFINDING_ENEMY_COUNTS,X
    case 0xC0D734: cpu.execute_instruction<0x7D>(0x004A84, 3); return true;
    // src/unknown/C0/C0D5B0.asm:193 TAY
    case 0xC0D737: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:194 LDA @LOCAL01
    case 0xC0D738: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0D5B0.asm:195 INC
    case 0xC0D73A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:196 STA @LOCAL01
    case 0xC0D73B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0D5B0.asm:198 CMP #4
    case 0xC0D73D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0D5B0.asm:198 CMP #4
    // Overlapping static entry reached from 0xC0D73D.
    case 0xC0D73F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D5B0.asm:199 BNE @UNKNOWN18
    case 0xC0D740: cpu.execute_instruction<0xD0>(0x0000AD, 2); return true;
    // src/unknown/C0/C0D5B0.asm:200 CPY #0
    case 0xC0D742: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:200 CPY #0
    // Overlapping static entry reached from 0xC0D742.
    case 0xC0D744: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D5B0.asm:201 BNE @UNKNOWN24
    case 0xC0D745: cpu.execute_instruction<0xD0>(0x000034, 2); return true;
    // src/unknown/C0/C0D5B0.asm:202 JSL UNKNOWN_C2E9C8
    case 0xC0D747: cpu.execute_instruction<0x22>(0xC2E9C8, 4); return true;
    // src/unknown/C0/C0D5B0.asm:202 JSL UNKNOWN_C2E9C8
    // Overlapping static entry reached from 0xC0D79C.
    case 0xC0D748: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:202 JSL UNKNOWN_C2E9C8
    // Overlapping static entry reached from 0xC0D748.
    case 0xC0D749: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000C2, 2); else cpu.execute_instruction<0xE9>(0x00C9C2, 3); return true;
    // src/unknown/C0/C0D5B0.asm:203 CMP #0
    case 0xC0D74B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:203 CMP #0
    // Overlapping static entry reached from 0xC0D749.
    case 0xC0D74C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D5B0.asm:203 CMP #0
    // Overlapping static entry reached from 0xC0D74B.
    case 0xC0D74D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0D5B0.asm:204 BNE @UNKNOWN24
    case 0xC0D74E: cpu.execute_instruction<0xD0>(0x00002B, 2); return true;
    // src/unknown/C0/C0D5B0.asm:205 LDA #0
    case 0xC0D750: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:205 LDA #0
    // Overlapping static entry reached from 0xC0D750.
    case 0xC0D752: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D5B0.asm:206 STA @LOCAL03
    case 0xC0D753: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0D5B0.asm:207 BRA @UNKNOWN23
    case 0xC0D755: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C0/C0D5B0.asm:209 CMP #23
    case 0xC0D757: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/unknown/C0/C0D5B0.asm:209 CMP #23
    // Overlapping static entry reached from 0xC0D757.
    case 0xC0D759: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0D5B0.asm:210 BEQ @UNKNOWN22
    case 0xC0D75A: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C0/C0D5B0.asm:211 ASL
    case 0xC0D75C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:212 CLC
    case 0xC0D75D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:213 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC0D75E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/unknown/C0/C0D5B0.asm:213 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC0D75E.
    case 0xC0D760: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C0/C0D5B0.asm:214 TAX
    case 0xC0D761: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:215 LDA __BSS_START__,X
    case 0xC0D762: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:216 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC0D765: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:216 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC0D765.
    case 0xC0D767: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C0/C0D5B0.asm:217 STA __BSS_START__,X
    case 0xC0D768: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D5B0.asm:217 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D767.
    case 0xC0D769: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D5B0.asm:217 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D767.
    case 0xC0D76A: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C0D5B0.asm:219 LDA @LOCAL03
    case 0xC0D76B: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0D5B0.asm:220 INC
    case 0xC0D76D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D5B0.asm:221 STA @LOCAL03
    case 0xC0D76E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0D5B0.asm:223 CMP #MAX_ENTITIES
    case 0xC0D770: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C0/C0D5B0.asm:223 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC0D770.
    case 0xC0D772: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0D5B0.asm:224 BCC @UNKNOWN21
    case 0xC0D773: cpu.execute_instruction<0x90>(0x0000E2, 2); return true;
    // src/unknown/C0/C0D5B0.asm:225 LDA #1
    case 0xC0D775: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0D5B0.asm:225 LDA #1
    // Overlapping static entry reached from 0xC0D775.
    case 0xC0D777: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0D5B0.asm:226 STA BATTLE_SWIRL_COUNTDOWN
    case 0xC0D778: cpu.execute_instruction<0x8D>(0x005D60, 3); return true;
    // src/unknown/C0/C0D5B0.asm:228 LDA @LOCAL02
    case 0xC0D77B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0D5B0.asm:230 END_C_FUNCTION
    case 0xC0D77D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0D5B0.asm:230 END_C_FUNCTION
    case 0xC0D77E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D77F.asm (unresolved).
bool execute_unresolved_c0_c0d77f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0D77F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0D77F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0D77F.asm:6 END_STACK_VARS
    case 0xC0D781: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0D77F.asm:6 END_STACK_VARS
    case 0xC0D782: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D77F.asm:6 END_STACK_VARS
    case 0xC0D783: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D77F.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0D783.
    case 0xC0D785: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0D77F.asm:6 END_STACK_VARS
    case 0xC0D786: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0D77F.asm:7 LDA #0
    case 0xC0D787: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D77F.asm:7 LDA #0
    // Overlapping static entry reached from 0xC0D787.
    case 0xC0D789: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0D77F.asm:8 STA @LOCAL00
    case 0xC0D78A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0D77F.asm:9 BRA @UNKNOWN2
    case 0xC0D78C: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/unknown/C0/C0D77F.asm:11 CMP CURRENT_ENTITY_SLOT
    case 0xC0D78E: cpu.execute_instruction<0xCD>(0x001A42, 3); return true;
    // src/unknown/C0/C0D77F.asm:12 BEQ @UNKNOWN1
    case 0xC0D791: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/unknown/C0/C0D77F.asm:13 CMP #23
    case 0xC0D793: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/unknown/C0/C0D77F.asm:13 CMP #23
    // Overlapping static entry reached from 0xC0D793.
    case 0xC0D795: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0D77F.asm:14 BEQ @UNKNOWN1
    case 0xC0D796: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C0/C0D77F.asm:15 ASL
    case 0xC0D798: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D77F.asm:16 CLC
    case 0xC0D799: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D77F.asm:17 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC0D79A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/unknown/C0/C0D77F.asm:17 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC0D79A.
    case 0xC0D79C: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C0/C0D77F.asm:18 TAX
    case 0xC0D79D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D77F.asm:19 LDA __BSS_START__,X
    case 0xC0D79E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D77F.asm:20 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC0D7A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C0/C0D77F.asm:20 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC0D7A1.
    case 0xC0D7A3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C0/C0D77F.asm:21 STA __BSS_START__,X
    case 0xC0D7A4: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D77F.asm:21 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D7A3.
    case 0xC0D7A5: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D77F.asm:21 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D7A3.
    case 0xC0D7A6: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C0D77F.asm:23 LDA @LOCAL00
    case 0xC0D7A7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0D77F.asm:24 INC
    case 0xC0D7A9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D77F.asm:25 STA @LOCAL00
    case 0xC0D7AA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0D77F.asm:27 CMP #MAX_ENTITIES
    case 0xC0D7AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C0/C0D77F.asm:27 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC0D7AC.
    case 0xC0D7AE: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0D77F.asm:28 BCC @UNKNOWN0
    case 0xC0D7AF: cpu.execute_instruction<0x90>(0x0000DD, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0D77F.asm:29 END_C_FUNCTION
    case 0xC0D7B1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0D77F.asm:29 END_C_FUNCTION
    case 0xC0D7B2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D7B3.asm (unresolved).
bool execute_unresolved_c0_c0d7b3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0D7B3.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0D7B3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0D7B3.asm:4 LDA CURRENT_ENTITY_SLOT
    case 0xC0D7B5: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0D7B3.asm:5 ASL
    case 0xC0D7B8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7B3.asm:6 TAX
    case 0xC0D7B9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7B3.asm:7 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0D7BA: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0D7B3.asm:8 STA ACTIONSCRIPT_BACKUP_X
    case 0xC0D7BD: cpu.execute_instruction<0x8D>(0x004DBE, 3); return true;
    // src/unknown/C0/C0D7B3.asm:9 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0D7C0: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0D7B3.asm:10 STA ACTIONSCRIPT_BACKUP_Y
    case 0xC0D7C3: cpu.execute_instruction<0x8D>(0x004DC0, 3); return true;
    // src/unknown/C0/C0D7B3.asm:11 RTL
    case 0xC0D7C6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D7C7.asm (unresolved).
bool execute_unresolved_c0_c0d7c7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0D7C7.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0D7C7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0D7C7.asm:4 LDA CURRENT_ENTITY_SLOT
    case 0xC0D7C9: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0D7C7.asm:5 ASL
    case 0xC0D7CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7C7.asm:6 TAX
    case 0xC0D7CD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7C7.asm:7 LDA ACTIONSCRIPT_BACKUP_X
    case 0xC0D7CE: cpu.execute_instruction<0xAD>(0x004DBE, 3); return true;
    // src/unknown/C0/C0D7C7.asm:8 STA ENTITY_ABS_X_TABLE,X
    case 0xC0D7D1: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/unknown/C0/C0D7C7.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xC0D7D4: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0D7C7.asm:10 ASL
    case 0xC0D7D7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7C7.asm:11 TAX
    case 0xC0D7D8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7C7.asm:12 LDA ACTIONSCRIPT_BACKUP_Y
    case 0xC0D7D9: cpu.execute_instruction<0xAD>(0x004DC0, 3); return true;
    // src/unknown/C0/C0D7C7.asm:13 STA ENTITY_ABS_Y_TABLE,X
    case 0xC0D7DC: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/unknown/C0/C0D7C7.asm:14 RTL
    case 0xC0D7DF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D7E0.asm (unresolved).
bool execute_unresolved_c0_c0d7e0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0D7E0.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0D7E0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0D7E0.asm:4 LDA CURRENT_ENTITY_SLOT
    case 0xC0D7E2: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0D7E0.asm:5 ASL
    case 0xC0D7E5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7E0.asm:6 CLC
    case 0xC0D7E6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7E0.asm:7 ADC #.LOWORD(ENTITY_PATHFINDING_STATES)
    case 0xC0D7E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005E, 2); else cpu.execute_instruction<0x69>(0x002C5E, 3); return true;
    // src/unknown/C0/C0D7E0.asm:7 ADC #.LOWORD(ENTITY_PATHFINDING_STATES)
    // Overlapping static entry reached from 0xC0D7E7.
    case 0xC0D7E9: cpu.execute_instruction<0x2C>(0x00BDAA, 3); return true;
    // src/unknown/C0/C0D7E0.asm:8 TAX
    case 0xC0D7EA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7E0.asm:9 LDA __BSS_START__,X
    case 0xC0D7EB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D7E0.asm:9 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D7E9.
    case 0xC0D7EC: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D7E0.asm:10 BEQ @UNKNOWN0
    case 0xC0D7EE: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0D7E0.asm:11 LDA #$0001
    case 0xC0D7F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0D7E0.asm:11 LDA #$0001
    // Overlapping static entry reached from 0xC0D7F0.
    case 0xC0D7F2: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0D7E0.asm:12 STA __BSS_START__,X
    case 0xC0D7F3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D7E0.asm:14 RTL
    case 0xC0D7F6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D7F7.asm (unresolved).
bool execute_unresolved_c0_c0d7f7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0D7F7.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0D7F7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0D7F7.asm:14 END_STACK_VARS
    case 0xC0D7F9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0D7F7.asm:14 END_STACK_VARS
    case 0xC0D7FA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D7F7.asm:14 END_STACK_VARS
    case 0xC0D7FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D7F7.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC0D7FB.
    case 0xC0D7FD: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0D7F7.asm:14 END_STACK_VARS
    case 0xC0D7FE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:15 LDA CURRENT_ENTITY_SLOT
    case 0xC0D7FF: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0D7F7.asm:15 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0D7FD.
    case 0xC0D801: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:16 STA @LOCAL08
    case 0xC0D802: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C0/C0D7F7.asm:17 ASL
    case 0xC0D804: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:18 TAX
    case 0xC0D805: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:19 LDA ENTITY_PATHFINDING_STATES,X
    case 0xC0D806: cpu.execute_instruction<0xBD>(0x002C5E, 3); return true;
    // src/unknown/C0/C0D7F7.asm:20 CMP #.LOWORD(-1)
    case 0xC0D809: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0D7F7.asm:20 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0D809.
    case 0xC0D80B: cpu.execute_instruction<0xFF>(0x4C03F0, 4); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0D7F7.asm:21 BNEL @UNKNOWN15
    case 0xC0D80C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0D7F7.asm:21 BNEL @UNKNOWN15
    case 0xC0D80E: cpu.execute_instruction<0x4C>(0x00D98D, 3); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0D7F7.asm:21 BNEL @UNKNOWN15
    // Overlapping static entry reached from 0xC0D80B.
    case 0xC0D80F: cpu.execute_instruction<0x8D>(0x00BDD9, 3); return true;
    // src/unknown/C0/C0D7F7.asm:22 LDA ENTITY_SIZES,X
    case 0xC0D811: cpu.execute_instruction<0xBD>(0x002B6E, 3); return true;
    // src/unknown/C0/C0D7F7.asm:22 LDA ENTITY_SIZES,X
    // Overlapping static entry reached from 0xC0D80F.
    case 0xC0D812: cpu.execute_instruction<0x6E>(0x00852B, 3); return true;
    // src/unknown/C0/C0D7F7.asm:23 STA @LOCAL07
    case 0xC0D814: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C0D7F7.asm:23 STA @LOCAL07
    // Overlapping static entry reached from 0xC0D812.
    case 0xC0D815: cpu.execute_instruction<0x1C>(0x0002BD, 3); return true;
    // src/unknown/C0/C0D7F7.asm:24 LDA ENTITY_PATH_POINTS,X
    case 0xC0D816: cpu.execute_instruction<0xBD>(0x002E02, 3); return true;
    // src/unknown/C0/C0D7F7.asm:24 LDA ENTITY_PATH_POINTS,X
    // Overlapping static entry reached from 0xC0D815.
    case 0xC0D818: cpu.execute_instruction<0x2E>(0x000285, 3); return true;
    // src/unknown/C0/C0D7F7.asm:25 STA @VIRTUAL02
    case 0xC0D819: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:26 STA @LOCAL06
    case 0xC0D81B: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0D7F7.asm:27 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0D81D: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0D7F7.asm:28 STA @LOCAL05
    case 0xC0D820: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0D7F7.asm:29 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0D822: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0D7F7.asm:30 STA @LOCAL04
    case 0xC0D825: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0D7F7.asm:31 LDA @LOCAL07
    case 0xC0D827: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0D7F7.asm:32 ASL
    case 0xC0D829: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:33 TAX
    case 0xC0D82A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:34 STX @LOCAL03
    case 0xC0D82B: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C0D7F7.asm:35 LDX @VIRTUAL02
    case 0xC0D82D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:36 LDA __BSS_START__+2,X
    case 0xC0D82F: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C0/C0D7F7.asm:37 ASL
    case 0xC0D832: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:38 ASL
    case 0xC0D833: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:39 ASL
    case 0xC0D834: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:40 LDX @LOCAL03
    case 0xC0D835: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0D7F7.asm:41 CLC
    case 0xC0D837: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:42 ADC f:UNKNOWN_C42A1F,X
    case 0xC0D838: cpu.execute_instruction<0x7F>(0xC42A1F, 4); return true;
    // src/unknown/C0/C0D7F7.asm:43 STA @VIRTUAL04
    case 0xC0D83C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0D7F7.asm:44 LDA PATHFINDING_TARGET_CENTRE_X
    case 0xC0D83E: cpu.execute_instruction<0xAD>(0x004A8E, 3); return true;
    // src/unknown/C0/C0D7F7.asm:45 SEC
    case 0xC0D841: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:46 SBC PATHFINDING_TARGET_WIDTH
    case 0xC0D842: cpu.execute_instruction<0xED>(0x004A92, 3); return true;
    // src/unknown/C0/C0D7F7.asm:47 ASL
    case 0xC0D845: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:48 ASL
    case 0xC0D846: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:49 ASL
    case 0xC0D847: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:50 CLC
    case 0xC0D848: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:51 ADC @VIRTUAL04
    case 0xC0D849: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C0D7F7.asm:52 STA @LOCAL02
    case 0xC0D84B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0D7F7.asm:53 LDX @VIRTUAL02
    case 0xC0D84D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:54 LDA __BSS_START__,X
    case 0xC0D84F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D7F7.asm:55 ASL
    case 0xC0D852: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:56 ASL
    case 0xC0D853: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:57 ASL
    case 0xC0D854: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:58 LDX @LOCAL03
    case 0xC0D855: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0D7F7.asm:59 SEC
    case 0xC0D857: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:60 SBC f:UNKNOWN_C42AEB,X
    case 0xC0D858: cpu.execute_instruction<0xFF>(0xC42AEB, 4); return true;
    // src/unknown/C0/C0D7F7.asm:61 CLC
    case 0xC0D85C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:62 ADC f:UNKNOWN_C42A41,X
    case 0xC0D85D: cpu.execute_instruction<0x7F>(0xC42A41, 4); return true;
    // src/unknown/C0/C0D7F7.asm:63 STA @VIRTUAL02
    case 0xC0D861: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:64 LDA PATHFINDING_TARGET_CENTRE_Y
    case 0xC0D863: cpu.execute_instruction<0xAD>(0x004A90, 3); return true;
    // src/unknown/C0/C0D7F7.asm:65 SEC
    case 0xC0D866: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:66 SBC PATHFINDING_TARGET_HEIGHT
    case 0xC0D867: cpu.execute_instruction<0xED>(0x004A94, 3); return true;
    // src/unknown/C0/C0D7F7.asm:67 ASL
    case 0xC0D86A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:68 ASL
    case 0xC0D86B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:69 ASL
    case 0xC0D86C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:70 CLC
    case 0xC0D86D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:71 ADC @VIRTUAL02
    case 0xC0D86E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:72 STA @VIRTUAL04
    case 0xC0D870: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0D7F7.asm:73 LDA @LOCAL05
    case 0xC0D872: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0D7F7.asm:74 SEC
    case 0xC0D874: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:75 SBC @LOCAL02
    case 0xC0D875: cpu.execute_instruction<0xE5>(0x000012, 2); return true;
    // src/unknown/C0/C0D7F7.asm:76 STA @LOCAL01
    case 0xC0D877: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0D7F7.asm:77 STA @VIRTUAL02
    case 0xC0D879: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:78 LDA #0
    case 0xC0D87B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D7F7.asm:78 LDA #0
    // Overlapping static entry reached from 0xC0D87B.
    case 0xC0D87D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0D7F7.asm:79 CLC
    case 0xC0D87E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:80 SBC @VIRTUAL02
    case 0xC0D87F: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0D7F7.asm:81 BRANCHLTEQS @UNKNOWN3
    case 0xC0D881: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0D7F7.asm:81 BRANCHLTEQS @UNKNOWN3
    case 0xC0D883: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0D7F7.asm:81 BRANCHLTEQS @UNKNOWN3
    case 0xC0D885: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0D7F7.asm:81 BRANCHLTEQS @UNKNOWN3
    case 0xC0D887: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // src/unknown/C0/C0D7F7.asm:82 LDA @LOCAL01
    case 0xC0D889: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0D7F7.asm:83 EOR #$FFFF
    case 0xC0D88B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0D7F7.asm:83 EOR #$FFFF
    // Overlapping static entry reached from 0xC0D88B.
    case 0xC0D88D: cpu.execute_instruction<0xFF>(0x02801A, 4); return true;
    // src/unknown/C0/C0D7F7.asm:84 INC
    case 0xC0D88E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:85 BRA @UNKNOWN4
    case 0xC0D88F: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:87 LDA @LOCAL01
    case 0xC0D891: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0D7F7.asm:89 STA @VIRTUAL02
    case 0xC0D893: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:90 LDA #3
    case 0xC0D895: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C0D7F7.asm:90 LDA #3
    // Overlapping static entry reached from 0xC0D895.
    case 0xC0D897: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0D7F7.asm:91 CLC
    case 0xC0D898: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:92 SBC @VIRTUAL02
    case 0xC0D899: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:826 BVC :+
    // Macro caller: src/unknown/C0/C0D7F7.asm:93 JUMPLTEQS @UNKNOWN13
    case 0xC0D89B: cpu.execute_instruction<0x50>(0x000005, 2); return true;
    // include/macros.asm:827 BMI :++
    // Macro caller: src/unknown/C0/C0D7F7.asm:93 JUMPLTEQS @UNKNOWN13
    case 0xC0D89D: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:828 JMP dest
    // Macro caller: src/unknown/C0/C0D7F7.asm:93 JUMPLTEQS @UNKNOWN13
    case 0xC0D89F: cpu.execute_instruction<0x4C>(0x00D94F, 3); return true;
    // include/macros.asm:830 BPL :+
    // Macro caller: src/unknown/C0/C0D7F7.asm:93 JUMPLTEQS @UNKNOWN13
    case 0xC0D8A2: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:831 JMP dest
    // Macro caller: src/unknown/C0/C0D7F7.asm:93 JUMPLTEQS @UNKNOWN13
    case 0xC0D8A4: cpu.execute_instruction<0x4C>(0x00D94F, 3); return true;
    // src/unknown/C0/C0D7F7.asm:94 LDA @LOCAL04
    case 0xC0D8A7: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0D7F7.asm:95 SEC
    case 0xC0D8A9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:96 SBC @VIRTUAL04
    case 0xC0D8AA: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C0/C0D7F7.asm:97 STA @LOCAL01
    case 0xC0D8AC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0D7F7.asm:98 STA @VIRTUAL02
    case 0xC0D8AE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:99 LDA #0
    case 0xC0D8B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D7F7.asm:99 LDA #0
    // Overlapping static entry reached from 0xC0D8B0.
    case 0xC0D8B2: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0D7F7.asm:100 CLC
    case 0xC0D8B3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:101 SBC @VIRTUAL02
    case 0xC0D8B4: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0D7F7.asm:102 BRANCHLTEQS @UNKNOWN9
    case 0xC0D8B6: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0D7F7.asm:102 BRANCHLTEQS @UNKNOWN9
    case 0xC0D8B8: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0D7F7.asm:102 BRANCHLTEQS @UNKNOWN9
    case 0xC0D8BA: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0D7F7.asm:102 BRANCHLTEQS @UNKNOWN9
    case 0xC0D8BC: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // src/unknown/C0/C0D7F7.asm:103 LDA @LOCAL01
    case 0xC0D8BE: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0D7F7.asm:104 EOR #$FFFF
    case 0xC0D8C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0D7F7.asm:104 EOR #$FFFF
    // Overlapping static entry reached from 0xC0D8C0.
    case 0xC0D8C2: cpu.execute_instruction<0xFF>(0x02801A, 4); return true;
    // src/unknown/C0/C0D7F7.asm:105 INC
    case 0xC0D8C3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:106 BRA @UNKNOWN10
    case 0xC0D8C4: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:108 LDA @LOCAL01
    case 0xC0D8C6: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0D7F7.asm:110 STA @VIRTUAL02
    case 0xC0D8C8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:111 LDA #3
    case 0xC0D8CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C0D7F7.asm:111 LDA #3
    // Overlapping static entry reached from 0xC0D8CA.
    case 0xC0D8CC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0D7F7.asm:112 CLC
    case 0xC0D8CD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:113 SBC @VIRTUAL02
    case 0xC0D8CE: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0D7F7.asm:114 BRANCHLTEQS @UNKNOWN13
    case 0xC0D8D0: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0D7F7.asm:114 BRANCHLTEQS @UNKNOWN13
    case 0xC0D8D2: cpu.execute_instruction<0x10>(0x00007B, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0D7F7.asm:114 BRANCHLTEQS @UNKNOWN13
    case 0xC0D8D4: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0D7F7.asm:114 BRANCHLTEQS @UNKNOWN13
    case 0xC0D8D6: cpu.execute_instruction<0x30>(0x000077, 2); return true;
    // src/unknown/C0/C0D7F7.asm:115 LDA @LOCAL08
    case 0xC0D8D8: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C0D7F7.asm:116 ASL
    case 0xC0D8DA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:117 STA @LOCAL01
    case 0xC0D8DB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0D7F7.asm:118 CLC
    case 0xC0D8DD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:119 ADC #.LOWORD(ENTITY_PATH_POINT_COUNTS)
    case 0xC0D8DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003E, 2); else cpu.execute_instruction<0x69>(0x002E3E, 3); return true;
    // src/unknown/C0/C0D7F7.asm:119 ADC #.LOWORD(ENTITY_PATH_POINT_COUNTS)
    // Overlapping static entry reached from 0xC0D8DE.
    case 0xC0D8E0: cpu.execute_instruction<0x2E>(0x00BDAA, 3); return true;
    // src/unknown/C0/C0D7F7.asm:120 TAX
    case 0xC0D8E1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:121 LDA __BSS_START__,X
    case 0xC0D8E2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D7F7.asm:121 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC0D8E0.
    case 0xC0D8E3: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0D7F7.asm:122 TAY
    case 0xC0D8E5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:123 DEY
    case 0xC0D8E6: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:124 TYA
    case 0xC0D8E7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:125 STA __BSS_START__,X
    case 0xC0D8E8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D7F7.asm:126 BEQ @UNKNOWN13
    case 0xC0D8EB: cpu.execute_instruction<0xF0>(0x000062, 2); return true;
    // src/unknown/C0/C0D7F7.asm:127 LDA @LOCAL06
    case 0xC0D8ED: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0D7F7.asm:128 STA @VIRTUAL02
    case 0xC0D8EF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:129 LDX @VIRTUAL02
    case 0xC0D8F1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:130 INX
    case 0xC0D8F3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:131 INX
    case 0xC0D8F4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:132 INX
    case 0xC0D8F5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:133 INX
    case 0xC0D8F6: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:134 STX @LOCAL03
    case 0xC0D8F7: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C0D7F7.asm:135 PHX
    case 0xC0D8F9: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:136 LDA @LOCAL01
    case 0xC0D8FA: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0D7F7.asm:137 TAX
    case 0xC0D8FC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:138 PLA
    case 0xC0D8FD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:139 STA ENTITY_PATH_POINTS,X
    case 0xC0D8FE: cpu.execute_instruction<0x9D>(0x002E02, 3); return true;
    // src/unknown/C0/C0D7F7.asm:140 LDA @LOCAL07
    case 0xC0D901: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0D7F7.asm:141 ASL
    case 0xC0D903: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:142 STA @LOCAL07
    case 0xC0D904: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C0D7F7.asm:143 PHA
    case 0xC0D906: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:144 LDX @LOCAL03
    case 0xC0D907: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0D7F7.asm:145 LDA __BSS_START__+2,X
    case 0xC0D909: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C0/C0D7F7.asm:146 ASL
    case 0xC0D90C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:147 ASL
    case 0xC0D90D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:148 ASL
    case 0xC0D90E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:149 PLX
    case 0xC0D90F: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:150 CLC
    case 0xC0D910: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:151 ADC f:UNKNOWN_C42A1F,X
    case 0xC0D911: cpu.execute_instruction<0x7F>(0xC42A1F, 4); return true;
    // src/unknown/C0/C0D7F7.asm:152 STA @VIRTUAL02
    case 0xC0D915: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:153 LDA PATHFINDING_TARGET_CENTRE_X
    case 0xC0D917: cpu.execute_instruction<0xAD>(0x004A8E, 3); return true;
    // src/unknown/C0/C0D7F7.asm:154 SEC
    case 0xC0D91A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:155 SBC PATHFINDING_TARGET_WIDTH
    case 0xC0D91B: cpu.execute_instruction<0xED>(0x004A92, 3); return true;
    // src/unknown/C0/C0D7F7.asm:156 ASL
    case 0xC0D91E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:157 ASL
    case 0xC0D91F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:158 ASL
    case 0xC0D920: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:159 CLC
    case 0xC0D921: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:160 ADC @VIRTUAL02
    case 0xC0D922: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:161 STA @LOCAL02
    case 0xC0D924: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0D7F7.asm:162 LDA @LOCAL07
    case 0xC0D926: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0D7F7.asm:163 PHA
    case 0xC0D928: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:164 PHA
    case 0xC0D929: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:165 LDX @LOCAL03
    case 0xC0D92A: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0D7F7.asm:166 LDA __BSS_START__,X
    case 0xC0D92C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D7F7.asm:167 ASL
    case 0xC0D92F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:168 ASL
    case 0xC0D930: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:169 ASL
    case 0xC0D931: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:170 PLX
    case 0xC0D932: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:171 SEC
    case 0xC0D933: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:172 SBC f:UNKNOWN_C42AEB,X
    case 0xC0D934: cpu.execute_instruction<0xFF>(0xC42AEB, 4); return true;
    // src/unknown/C0/C0D7F7.asm:173 PLX
    case 0xC0D938: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:174 CLC
    case 0xC0D939: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:175 ADC f:UNKNOWN_C42A41,X
    case 0xC0D93A: cpu.execute_instruction<0x7F>(0xC42A41, 4); return true;
    // src/unknown/C0/C0D7F7.asm:176 STA @VIRTUAL02
    case 0xC0D93E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:177 LDA PATHFINDING_TARGET_CENTRE_Y
    case 0xC0D940: cpu.execute_instruction<0xAD>(0x004A90, 3); return true;
    // src/unknown/C0/C0D7F7.asm:178 SEC
    case 0xC0D943: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:179 SBC PATHFINDING_TARGET_HEIGHT
    case 0xC0D944: cpu.execute_instruction<0xED>(0x004A94, 3); return true;
    // src/unknown/C0/C0D7F7.asm:180 ASL
    case 0xC0D947: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:181 ASL
    case 0xC0D948: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:182 ASL
    case 0xC0D949: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:183 CLC
    case 0xC0D94A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:184 ADC @VIRTUAL02
    case 0xC0D94B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:185 STA @VIRTUAL04
    case 0xC0D94D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0D7F7.asm:187 LDA @LOCAL08
    case 0xC0D94F: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C0D7F7.asm:188 ASL
    case 0xC0D951: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:189 STA @VIRTUAL02
    case 0xC0D952: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:190 LDX @VIRTUAL02
    case 0xC0D954: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:191 LDA ENTITY_PATH_POINT_COUNTS,X
    case 0xC0D956: cpu.execute_instruction<0xBD>(0x002E3E, 3); return true;
    // src/unknown/C0/C0D7F7.asm:192 BEQ @UNKNOWN14
    case 0xC0D959: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/unknown/C0/C0D7F7.asm:193 LDA @VIRTUAL04
    case 0xC0D95B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0D7F7.asm:194 STA @LOCAL00
    case 0xC0D95D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0D7F7.asm:195 LDY @LOCAL02
    case 0xC0D95F: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C0D7F7.asm:196 LDX @LOCAL04
    case 0xC0D961: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C0/C0D7F7.asm:197 LDA @LOCAL05
    case 0xC0D963: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0D7F7.asm:198 JSL UNKNOWN_C41EFF
    case 0xC0D965: cpu.execute_instruction<0x22>(0xC41EFF, 4); return true;
    // src/unknown/C0/C0D7F7.asm:199 JSL UNKNOWN_C47044
    case 0xC0D969: cpu.execute_instruction<0x22>(0xC47044, 4); return true;
    // src/unknown/C0/C0D7F7.asm:200 JSL UNKNOWN_C46B0A
    case 0xC0D96D: cpu.execute_instruction<0x22>(0xC46B0A, 4); return true;
    // src/unknown/C0/C0D7F7.asm:201 LDX @VIRTUAL02
    case 0xC0D971: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:202 STA ENTITY_DIRECTIONS,X
    case 0xC0D973: cpu.execute_instruction<0x9D>(0x002AF6, 3); return true;
    // src/unknown/C0/C0D7F7.asm:203 BRA @UNKNOWN15
    case 0xC0D976: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C0/C0D7F7.asm:205 LDX @VIRTUAL02
    case 0xC0D978: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:206 STZ ENTITY_PATHFINDING_STATES,X
    case 0xC0D97A: cpu.execute_instruction<0x9E>(0x002C5E, 3); return true;
    // src/unknown/C0/C0D7F7.asm:207 LDA @VIRTUAL02
    case 0xC0D97D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0D7F7.asm:208 CLC
    case 0xC0D97F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:209 ADC #.LOWORD(ENTITY_OBSTACLE_FLAGS)
    case 0xC0D980: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DA, 2); else cpu.execute_instruction<0x69>(0x0028DA, 3); return true;
    // src/unknown/C0/C0D7F7.asm:209 ADC #.LOWORD(ENTITY_OBSTACLE_FLAGS)
    // Overlapping static entry reached from 0xC0D980.
    case 0xC0D982: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:210 TAX
    case 0xC0D983: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:211 LDA __BSS_START__,X
    case 0xC0D984: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D7F7.asm:212 ORA #$0080
    case 0xC0D987: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000080, 2); else cpu.execute_instruction<0x09>(0x000080, 3); return true;
    // src/unknown/C0/C0D7F7.asm:212 ORA #$0080
    // Overlapping static entry reached from 0xC0D987.
    case 0xC0D989: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0D7F7.asm:213 STA __BSS_START__,X
    case 0xC0D98A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D7F7.asm:215 PLD
    case 0xC0D98D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0D7F7.asm:216 RTL
    case 0xC0D98E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0D98F.asm (unresolved).
bool execute_unresolved_c0_c0d98f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0D98F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0D98F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0D98F.asm:9 END_STACK_VARS
    case 0xC0D991: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0D98F.asm:9 END_STACK_VARS
    case 0xC0D992: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D98F.asm:9 END_STACK_VARS
    case 0xC0D993: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0D98F.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0D993.
    case 0xC0D995: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0D98F.asm:9 END_STACK_VARS
    case 0xC0D996: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC0D997: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0D98F.asm:10 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0D995.
    case 0xC0D999: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:11 ASL
    case 0xC0D99A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:12 TAY
    case 0xC0D99B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:13 CLC
    case 0xC0D99C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:14 ADC #.LOWORD(ENTITY_PATH_POINT_COUNTS)
    case 0xC0D99D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003E, 2); else cpu.execute_instruction<0x69>(0x002E3E, 3); return true;
    // src/unknown/C0/C0D98F.asm:14 ADC #.LOWORD(ENTITY_PATH_POINT_COUNTS)
    // Overlapping static entry reached from 0xC0D99D.
    case 0xC0D99F: cpu.execute_instruction<0x2E>(0x000485, 3); return true;
    // src/unknown/C0/C0D98F.asm:15 STA @VIRTUAL04
    case 0xC0D9A0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0D98F.asm:16 LDX @VIRTUAL04
    case 0xC0D9A2: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0D98F.asm:17 LDA __BSS_START__,X
    case 0xC0D9A4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D98F.asm:18 BNE @UNKNOWN0
    case 0xC0D9A7: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0D98F.asm:19 LDA #0
    case 0xC0D9A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0D98F.asm:19 LDA #0
    // Overlapping static entry reached from 0xC0D9A9.
    case 0xC0D9AB: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0D98F.asm:20 JMP @UNKNOWN1
    case 0xC0D9AC: cpu.execute_instruction<0x4C>(0x00DA2F, 3); return true;
    // src/unknown/C0/C0D98F.asm:22 LDA ENTITY_SIZES,Y
    case 0xC0D9AF: cpu.execute_instruction<0xB9>(0x002B6E, 3); return true;
    // src/unknown/C0/C0D98F.asm:23 STA @LOCAL02
    case 0xC0D9B2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0D98F.asm:24 TYA
    case 0xC0D9B4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:25 CLC
    case 0xC0D9B5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:26 ADC #.LOWORD(ENTITY_PATH_POINTS)
    case 0xC0D9B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x002E02, 3); return true;
    // src/unknown/C0/C0D98F.asm:26 ADC #.LOWORD(ENTITY_PATH_POINTS)
    // Overlapping static entry reached from 0xC0D9B6.
    case 0xC0D9B8: cpu.execute_instruction<0x2E>(0x000285, 3); return true;
    // src/unknown/C0/C0D98F.asm:27 STA @VIRTUAL02
    case 0xC0D9B9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D98F.asm:28 STA @LOCAL01
    case 0xC0D9BB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0D98F.asm:29 LDX @VIRTUAL02
    case 0xC0D9BD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0D98F.asm:30 LDA __BSS_START__,X
    case 0xC0D9BF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D98F.asm:31 TAX
    case 0xC0D9C2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:32 STX @LOCAL00
    case 0xC0D9C3: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0D98F.asm:33 LDA @LOCAL02
    case 0xC0D9C5: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0D98F.asm:34 ASL
    case 0xC0D9C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:35 STA @LOCAL02
    case 0xC0D9C8: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0D98F.asm:36 PHA
    case 0xC0D9CA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:37 LDA __BSS_START__+2,X
    case 0xC0D9CB: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C0D98F.asm:38 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D9CE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C0D98F.asm:38 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D9CF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C0D98F.asm:38 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D9D0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:39 PLX
    case 0xC0D9D1: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:40 CLC
    case 0xC0D9D2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:41 ADC f:UNKNOWN_C42A1F,X
    case 0xC0D9D3: cpu.execute_instruction<0x7F>(0xC42A1F, 4); return true;
    // src/unknown/C0/C0D98F.asm:42 STA @VIRTUAL02
    case 0xC0D9D7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D98F.asm:43 LDA PATHFINDING_TARGET_CENTRE_X
    case 0xC0D9D9: cpu.execute_instruction<0xAD>(0x004A8E, 3); return true;
    // src/unknown/C0/C0D98F.asm:44 SEC
    case 0xC0D9DC: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:45 SBC PATHFINDING_TARGET_WIDTH
    case 0xC0D9DD: cpu.execute_instruction<0xED>(0x004A92, 3); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C0D98F.asm:46 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D9E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C0D98F.asm:46 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D9E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C0D98F.asm:46 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D9E2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:47 CLC
    case 0xC0D9E3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:48 ADC @VIRTUAL02
    case 0xC0D9E4: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0D98F.asm:49 STA ENTITY_SCRIPT_VAR6_TABLE,Y
    case 0xC0D9E6: cpu.execute_instruction<0x99>(0x000FC6, 3); return true;
    // src/unknown/C0/C0D98F.asm:50 LDA @LOCAL02
    case 0xC0D9E9: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0D98F.asm:51 PHA
    case 0xC0D9EB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:52 PHA
    case 0xC0D9EC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:53 LDX @LOCAL00
    case 0xC0D9ED: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0D98F.asm:54 LDA __BSS_START__,X
    case 0xC0D9EF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C0D98F.asm:55 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D9F2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C0D98F.asm:55 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D9F3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C0D98F.asm:55 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0D9F4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:56 PLX
    case 0xC0D9F5: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:57 SEC
    case 0xC0D9F6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:58 SBC f:UNKNOWN_C42AEB,X
    case 0xC0D9F7: cpu.execute_instruction<0xFF>(0xC42AEB, 4); return true;
    // src/unknown/C0/C0D98F.asm:59 PLX
    case 0xC0D9FB: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:60 CLC
    case 0xC0D9FC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:61 ADC f:UNKNOWN_C42A41,X
    case 0xC0D9FD: cpu.execute_instruction<0x7F>(0xC42A41, 4); return true;
    // src/unknown/C0/C0D98F.asm:62 STA @VIRTUAL02
    case 0xC0DA01: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0D98F.asm:63 LDA PATHFINDING_TARGET_CENTRE_Y
    case 0xC0DA03: cpu.execute_instruction<0xAD>(0x004A90, 3); return true;
    // src/unknown/C0/C0D98F.asm:64 SEC
    case 0xC0DA06: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:65 SBC PATHFINDING_TARGET_HEIGHT
    case 0xC0DA07: cpu.execute_instruction<0xED>(0x004A94, 3); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C0D98F.asm:66 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0DA0A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C0D98F.asm:66 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0DA0B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C0D98F.asm:66 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0DA0C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:67 CLC
    case 0xC0DA0D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:68 ADC @VIRTUAL02
    case 0xC0DA0E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0D98F.asm:69 STA ENTITY_SCRIPT_VAR7_TABLE,Y
    case 0xC0DA10: cpu.execute_instruction<0x99>(0x001002, 3); return true;
    // src/unknown/C0/C0D98F.asm:70 LDX @VIRTUAL04
    case 0xC0DA13: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0D98F.asm:71 LDA __BSS_START__,X
    case 0xC0DA15: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0D98F.asm:72 DEC
    case 0xC0DA18: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:73 LDX @VIRTUAL04
    case 0xC0DA19: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0D98F.asm:74 STA __BSS_START__,X
    case 0xC0DA1B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D98F.asm:75 LDX @LOCAL00
    case 0xC0DA1E: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0D98F.asm:76 TXA
    case 0xC0DA20: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:77 INC
    case 0xC0DA21: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:78 INC
    case 0xC0DA22: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:79 INC
    case 0xC0DA23: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:80 INC
    case 0xC0DA24: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0D98F.asm:81 LDX @LOCAL01
    case 0xC0DA25: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0D98F.asm:82 STX @VIRTUAL02
    case 0xC0DA27: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0D98F.asm:83 STA __BSS_START__,X
    case 0xC0DA29: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0D98F.asm:84 LDA #1
    case 0xC0DA2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0D98F.asm:84 LDA #1
    // Overlapping static entry reached from 0xC0DA2C.
    case 0xC0DA2E: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0D98F.asm:86 END_C_FUNCTION
    case 0xC0DA2F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0D98F.asm:86 END_C_FUNCTION
    case 0xC0DA30: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0DA31.asm (unresolved).
bool execute_unresolved_c0_c0da31_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0DA31.asm:3 BEGIN_C_FUNCTION
    case 0xC0DA31: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0DA31.asm:9 END_STACK_VARS
    case 0xC0DA33: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0DA31.asm:9 END_STACK_VARS
    case 0xC0DA34: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DA31.asm:9 END_STACK_VARS
    case 0xC0DA35: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DA31.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DA35.
    case 0xC0DA37: cpu.execute_instruction<0xFF>(0x50AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0DA31.asm:9 END_STACK_VARS
    case 0xC0DA38: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:10 LDA FIRST_ENTITY
    case 0xC0DA39: cpu.execute_instruction<0xAD>(0x000A50, 3); return true;
    // src/unknown/C0/C0DA31.asm:10 LDA FIRST_ENTITY
    // Overlapping static entry reached from 0xC0DA37.
    case 0xC0DA3B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:11 INC
    case 0xC0DA3C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0DA31.asm:12 BEQL @UNKNOWN11
    case 0xC0DA3D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0DA31.asm:12 BEQL @UNKNOWN11
    case 0xC0DA3F: cpu.execute_instruction<0x4C>(0x00DB0D, 3); return true;
    // src/unknown/C0/C0DA31.asm:13 LDA #0
    case 0xC0DA42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0DA31.asm:13 LDA #0
    // Overlapping static entry reached from 0xC0DA42.
    case 0xC0DA44: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0DA31.asm:14 STA @VIRTUAL02
    case 0xC0DA45: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0DA31.asm:15 TAY
    case 0xC0DA47: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:16 STY @LOCAL03
    case 0xC0DA48: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C0DA31.asm:17 BRA @UNKNOWN4
    case 0xC0DA4A: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/unknown/C0/C0DA31.asm:19 TYA
    case 0xC0DA4C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:20 ASL
    case 0xC0DA4D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:21 TAX
    case 0xC0DA4E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:22 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC0DA4F: cpu.execute_instruction<0xBD>(0x000A62, 3); return true;
    // src/unknown/C0/C0DA31.asm:23 INC
    case 0xC0DA52: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:24 BEQ @UNKNOWN3
    case 0xC0DA53: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/unknown/C0/C0DA31.asm:25 LDA ENTITY_DRAW_PRIORITY,X
    case 0xC0DA55: cpu.execute_instruction<0xBD>(0x00103E, 3); return true;
    // src/unknown/C0/C0DA31.asm:26 DEC
    case 0xC0DA58: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:27 BNE @UNKNOWN2
    case 0xC0DA59: cpu.execute_instruction<0xD0>(0x000019, 2); return true;
    // src/unknown/C0/C0DA31.asm:28 LDA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0DA5B: cpu.execute_instruction<0xBD>(0x000B52, 3); return true;
    // src/unknown/C0/C0DA31.asm:29 CLC
    case 0xC0DA5E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:30 ADC #8
    case 0xC0DA5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C0/C0DA31.asm:30 ADC #8
    // Overlapping static entry reached from 0xC0DA5F.
    case 0xC0DA61: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C0DA31.asm:31 AND #$FE00
    case 0xC0DA62: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FE00, 3); return true;
    // src/unknown/C0/C0DA31.asm:31 AND #$FE00
    // Overlapping static entry reached from 0xC0DA62.
    case 0xC0DA64: cpu.execute_instruction<0xFE>(0x000DD0, 3); return true;
    // src/unknown/C0/C0DA31.asm:32 BNE @UNKNOWN2
    case 0xC0DA65: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C0/C0DA31.asm:33 LDA @VIRTUAL02
    case 0xC0DA67: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0DA31.asm:34 ASL
    case 0xC0DA69: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:35 TAX
    case 0xC0DA6A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:36 TYA
    case 0xC0DA6B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:37 INC
    case 0xC0DA6C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:38 STA ENTITY_DRAW_SORTING,X
    case 0xC0DA6D: cpu.execute_instruction<0x9D>(0x00280C, 3); return true;
    // src/unknown/C0/C0DA31.asm:39 INC @VIRTUAL02
    case 0xC0DA70: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0DA31.asm:40 BRA @UNKNOWN3
    case 0xC0DA72: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C0/C0DA31.asm:42 TYA
    case 0xC0DA74: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:43 JSR UNKNOWN_C0A0CA
    case 0xC0DA75: cpu.execute_instruction<0x20>(0x00A0CA, 3); return true;
    // src/unknown/C0/C0DA31.asm:45 LDY @LOCAL03
    case 0xC0DA78: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C0/C0DA31.asm:46 INY
    case 0xC0DA7A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:47 STY @LOCAL03
    case 0xC0DA7B: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C0DA31.asm:49 CPY #MAX_ENTITIES
    case 0xC0DA7D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00001E, 2); else cpu.execute_instruction<0xC0>(0x00001E, 3); return true;
    // src/unknown/C0/C0DA31.asm:49 CPY #MAX_ENTITIES
    // Overlapping static entry reached from 0xC0DA7D.
    case 0xC0DA7F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0DA31.asm:50 BNE @UNKNOWN1
    case 0xC0DA80: cpu.execute_instruction<0xD0>(0x0000CA, 2); return true;
    // src/unknown/C0/C0DA31.asm:51 LDA @VIRTUAL02
    case 0xC0DA82: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0DA31.asm:52 ASL
    case 0xC0DA84: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:53 TAX
    case 0xC0DA85: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:54 LDA #.LOWORD(-1)
    case 0xC0DA86: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0DA31.asm:54 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0DA86.
    case 0xC0DA88: cpu.execute_instruction<0xFF>(0x280C9D, 4); return true;
    // src/unknown/C0/C0DA31.asm:55 STA ENTITY_DRAW_SORTING,X
    case 0xC0DA89: cpu.execute_instruction<0x9D>(0x00280C, 3); return true;
    // src/unknown/C0/C0DA31.asm:56 LDA @VIRTUAL02
    case 0xC0DA8C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0DA31.asm:57 STA @VIRTUAL04
    case 0xC0DA8E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0DA31.asm:58 BRA @UNKNOWN10
    case 0xC0DA90: cpu.execute_instruction<0x80>(0x00006B, 2); return true;
    // src/unknown/C0/C0DA31.asm:60 LDX #0
    case 0xC0DA92: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0DA31.asm:60 LDX #0
    // Overlapping static entry reached from 0xC0DA92.
    case 0xC0DA94: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C0DA31.asm:61 STX @LOCAL03
    case 0xC0DA95: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C0DA31.asm:62 BRA @UNKNOWN7
    case 0xC0DA97: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C0/C0DA31.asm:64 LDX @LOCAL03
    case 0xC0DA99: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0DA31.asm:65 INX
    case 0xC0DA9B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:66 STX @LOCAL03
    case 0xC0DA9C: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C0DA31.asm:68 TXA
    case 0xC0DA9E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:69 ASL
    case 0xC0DA9F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:70 TAX
    case 0xC0DAA0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:71 LDA ENTITY_DRAW_SORTING,X
    case 0xC0DAA1: cpu.execute_instruction<0xBD>(0x00280C, 3); return true;
    // src/unknown/C0/C0DA31.asm:72 BEQ @UNKNOWN6
    case 0xC0DAA4: cpu.execute_instruction<0xF0>(0x0000F3, 2); return true;
    // src/unknown/C0/C0DA31.asm:73 LDX @LOCAL03
    case 0xC0DAA6: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0DA31.asm:74 STX @VIRTUAL02
    case 0xC0DAA8: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0DA31.asm:75 STX @LOCAL02
    case 0xC0DAAA: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C0DA31.asm:76 DEC
    case 0xC0DAAC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:77 ASL
    case 0xC0DAAD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:78 TAX
    case 0xC0DAAE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:79 LDY ENTITY_ABS_Y_TABLE,X
    case 0xC0DAAF: cpu.execute_instruction<0xBC>(0x000BCA, 3); return true;
    // src/unknown/C0/C0DA31.asm:80 BRA @UNKNOWN9
    case 0xC0DAB2: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/unknown/C0/C0DA31.asm:82 LDA @LOCAL01
    case 0xC0DAB4: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0DA31.asm:83 BEQ @UNKNOWN9
    case 0xC0DAB6: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/unknown/C0/C0DA31.asm:84 DEC
    case 0xC0DAB8: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:85 ASL
    case 0xC0DAB9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:86 TAX
    case 0xC0DABA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:87 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0DABB: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0DA31.asm:88 STA @LOCAL00
    case 0xC0DABE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0DA31.asm:89 STA @VIRTUAL02
    case 0xC0DAC0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0DA31.asm:90 TYA
    case 0xC0DAC2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:91 CMP @VIRTUAL02
    case 0xC0DAC3: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C0DA31.asm:92 BCS @UNKNOWN9
    case 0xC0DAC5: cpu.execute_instruction<0xB0>(0x00000B, 2); return true;
    // src/unknown/C0/C0DA31.asm:93 LDA @LOCAL00
    case 0xC0DAC7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0DA31.asm:94 TAY
    case 0xC0DAC9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:95 LDX @LOCAL03
    case 0xC0DACA: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0DA31.asm:96 STX @VIRTUAL02
    case 0xC0DACC: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0DA31.asm:97 LDA @VIRTUAL02
    case 0xC0DACE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0DA31.asm:98 STA @LOCAL02
    case 0xC0DAD0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0DA31.asm:100 LDX @LOCAL03
    case 0xC0DAD2: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0DA31.asm:101 INX
    case 0xC0DAD4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:102 STX @LOCAL03
    case 0xC0DAD5: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C0DA31.asm:103 TXA
    case 0xC0DAD7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:104 ASL
    case 0xC0DAD8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:105 TAX
    case 0xC0DAD9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:106 LDA ENTITY_DRAW_SORTING,X
    case 0xC0DADA: cpu.execute_instruction<0xBD>(0x00280C, 3); return true;
    // src/unknown/C0/C0DA31.asm:107 STA @LOCAL01
    case 0xC0DADD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0DA31.asm:108 INC
    case 0xC0DADF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:109 BNE @UNKNOWN8
    case 0xC0DAE0: cpu.execute_instruction<0xD0>(0x0000D2, 2); return true;
    // src/unknown/C0/C0DA31.asm:110 LDA @LOCAL02
    case 0xC0DAE2: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0DA31.asm:111 STA @VIRTUAL02
    case 0xC0DAE4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0DA31.asm:112 ASL
    case 0xC0DAE6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:113 CLC
    case 0xC0DAE7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:114 ADC #.LOWORD(ENTITY_DRAW_SORTING)
    case 0xC0DAE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000C, 2); else cpu.execute_instruction<0x69>(0x00280C, 3); return true;
    // src/unknown/C0/C0DA31.asm:114 ADC #.LOWORD(ENTITY_DRAW_SORTING)
    // Overlapping static entry reached from 0xC0DAE8.
    case 0xC0DAEA: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:115 TAX
    case 0xC0DAEB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:116 STX @LOCAL01
    case 0xC0DAEC: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0DA31.asm:117 LDA __BSS_START__,X
    case 0xC0DAEE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0DA31.asm:118 DEC
    case 0xC0DAF1: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:119 JSR UNKNOWN_C0A0CA
    case 0xC0DAF2: cpu.execute_instruction<0x20>(0x00A0CA, 3); return true;
    // src/unknown/C0/C0DA31.asm:120 LDA #0
    case 0xC0DAF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0DA31.asm:120 LDA #0
    // Overlapping static entry reached from 0xC0DAF5.
    case 0xC0DAF7: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C0DA31.asm:121 LDX @LOCAL01
    case 0xC0DAF8: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0DA31.asm:122 STA __BSS_START__,X
    case 0xC0DAFA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0DA31.asm:124 LDA @VIRTUAL04
    case 0xC0DAFD: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0DA31.asm:125 STA @LOCAL00
    case 0xC0DAFF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0DA31.asm:126 LDA @VIRTUAL04
    case 0xC0DB01: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0DA31.asm:127 DEC
    case 0xC0DB03: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:128 STA @VIRTUAL04
    case 0xC0DB04: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0DA31.asm:129 LDA @LOCAL00
    case 0xC0DB06: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0DA31.asm:130 BNEL @UNKNOWN5
    case 0xC0DB08: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0DA31.asm:130 BNEL @UNKNOWN5
    case 0xC0DB0A: cpu.execute_instruction<0x4C>(0x00DA92, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0DA31.asm:132 END_C_FUNCTION
    case 0xC0DB0D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0DA31.asm:132 END_C_FUNCTION
    case 0xC0DB0E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
