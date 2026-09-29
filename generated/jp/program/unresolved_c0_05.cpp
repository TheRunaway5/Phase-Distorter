// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/unknown/C0/C0DA31.asm (unresolved).
bool execute_unresolved_c0_c0da31_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0DA31.asm:3 BEGIN_C_FUNCTION
    case 0xC0D9F9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0DA31.asm:9 END_STACK_VARS
    case 0xC0D9FB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0DA31.asm:9 END_STACK_VARS
    case 0xC0D9FC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DA31.asm:9 END_STACK_VARS
    case 0xC0D9FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DA31.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0D9FD.
    case 0xC0D9FF: cpu.execute_instruction<0xFF>(0x46AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0DA31.asm:9 END_STACK_VARS
    case 0xC0DA00: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:10 LDA FIRST_ENTITY
    case 0xC0DA01: cpu.execute_instruction<0xAD>(0x000A46, 3); return true;
    // src/unknown/C0/C0DA31.asm:10 LDA FIRST_ENTITY
    // Overlapping static entry reached from 0xC0D9FF.
    case 0xC0DA03: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:11 INC
    case 0xC0DA04: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0DA31.asm:12 BEQL @UNKNOWN11
    case 0xC0DA05: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0DA31.asm:12 BEQL @UNKNOWN11
    case 0xC0DA07: cpu.execute_instruction<0x4C>(0x00DAD5, 3); return true;
    // src/unknown/C0/C0DA31.asm:13 LDA #0
    case 0xC0DA0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0DA31.asm:13 LDA #0
    // Overlapping static entry reached from 0xC0DA0A.
    case 0xC0DA0C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0DA31.asm:14 STA @VIRTUAL02
    case 0xC0DA0D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0DA31.asm:15 TAY
    case 0xC0DA0F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:16 STY @LOCAL03
    case 0xC0DA10: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C0DA31.asm:17 BRA @UNKNOWN4
    case 0xC0DA12: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/unknown/C0/C0DA31.asm:19 TYA
    case 0xC0DA14: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:20 ASL
    case 0xC0DA15: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:21 TAX
    case 0xC0DA16: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:22 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC0DA17: cpu.execute_instruction<0xBD>(0x000A58, 3); return true;
    // src/unknown/C0/C0DA31.asm:23 INC
    case 0xC0DA1A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:24 BEQ @UNKNOWN3
    case 0xC0DA1B: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/unknown/C0/C0DA31.asm:25 LDA ENTITY_DRAW_PRIORITY,X
    case 0xC0DA1D: cpu.execute_instruction<0xBD>(0x001034, 3); return true;
    // src/unknown/C0/C0DA31.asm:26 DEC
    case 0xC0DA20: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:27 BNE @UNKNOWN2
    case 0xC0DA21: cpu.execute_instruction<0xD0>(0x000019, 2); return true;
    // src/unknown/C0/C0DA31.asm:28 LDA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0DA23: cpu.execute_instruction<0xBD>(0x000B48, 3); return true;
    // src/unknown/C0/C0DA31.asm:29 CLC
    case 0xC0DA26: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:30 ADC #8
    case 0xC0DA27: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C0/C0DA31.asm:30 ADC #8
    // Overlapping static entry reached from 0xC0DA27.
    case 0xC0DA29: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C0DA31.asm:31 AND #$FE00
    case 0xC0DA2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FE00, 3); return true;
    // src/unknown/C0/C0DA31.asm:31 AND #$FE00
    // Overlapping static entry reached from 0xC0DA2A.
    case 0xC0DA2C: cpu.execute_instruction<0xFE>(0x000DD0, 3); return true;
    // src/unknown/C0/C0DA31.asm:32 BNE @UNKNOWN2
    case 0xC0DA2D: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C0/C0DA31.asm:33 LDA @VIRTUAL02
    case 0xC0DA2F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0DA31.asm:34 ASL
    case 0xC0DA31: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:35 TAX
    case 0xC0DA32: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:36 TYA
    case 0xC0DA33: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:37 INC
    case 0xC0DA34: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:38 STA ENTITY_DRAW_SORTING,X
    case 0xC0DA35: cpu.execute_instruction<0x9D>(0x002C0C, 3); return true;
    // src/unknown/C0/C0DA31.asm:39 INC @VIRTUAL02
    case 0xC0DA38: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0DA31.asm:40 BRA @UNKNOWN3
    case 0xC0DA3A: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C0/C0DA31.asm:42 TYA
    case 0xC0DA3C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:43 JSR UNKNOWN_C0A0CA
    case 0xC0DA3D: cpu.execute_instruction<0x20>(0x00A0A9, 3); return true;
    // src/unknown/C0/C0DA31.asm:45 LDY @LOCAL03
    case 0xC0DA40: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C0/C0DA31.asm:46 INY
    case 0xC0DA42: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:47 STY @LOCAL03
    case 0xC0DA43: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C0DA31.asm:49 CPY #MAX_ENTITIES
    case 0xC0DA45: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00001E, 2); else cpu.execute_instruction<0xC0>(0x00001E, 3); return true;
    // src/unknown/C0/C0DA31.asm:49 CPY #MAX_ENTITIES
    // Overlapping static entry reached from 0xC0DA45.
    case 0xC0DA47: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0DA31.asm:50 BNE @UNKNOWN1
    case 0xC0DA48: cpu.execute_instruction<0xD0>(0x0000CA, 2); return true;
    // src/unknown/C0/C0DA31.asm:51 LDA @VIRTUAL02
    case 0xC0DA4A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0DA31.asm:52 ASL
    case 0xC0DA4C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:53 TAX
    case 0xC0DA4D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:54 LDA #.LOWORD(-1)
    case 0xC0DA4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0DA31.asm:54 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0DA4E.
    case 0xC0DA50: cpu.execute_instruction<0xFF>(0x2C0C9D, 4); return true;
    // src/unknown/C0/C0DA31.asm:55 STA ENTITY_DRAW_SORTING,X
    case 0xC0DA51: cpu.execute_instruction<0x9D>(0x002C0C, 3); return true;
    // src/unknown/C0/C0DA31.asm:56 LDA @VIRTUAL02
    case 0xC0DA54: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0DA31.asm:57 STA @VIRTUAL04
    case 0xC0DA56: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0DA31.asm:58 BRA @UNKNOWN10
    case 0xC0DA58: cpu.execute_instruction<0x80>(0x00006B, 2); return true;
    // src/unknown/C0/C0DA31.asm:60 LDX #0
    case 0xC0DA5A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0DA31.asm:60 LDX #0
    // Overlapping static entry reached from 0xC0DA5A.
    case 0xC0DA5C: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C0DA31.asm:61 STX @LOCAL03
    case 0xC0DA5D: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C0DA31.asm:62 BRA @UNKNOWN7
    case 0xC0DA5F: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C0/C0DA31.asm:64 LDX @LOCAL03
    case 0xC0DA61: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0DA31.asm:65 INX
    case 0xC0DA63: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:66 STX @LOCAL03
    case 0xC0DA64: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C0DA31.asm:68 TXA
    case 0xC0DA66: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:69 ASL
    case 0xC0DA67: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:70 TAX
    case 0xC0DA68: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:71 LDA ENTITY_DRAW_SORTING,X
    case 0xC0DA69: cpu.execute_instruction<0xBD>(0x002C0C, 3); return true;
    // src/unknown/C0/C0DA31.asm:72 BEQ @UNKNOWN6
    case 0xC0DA6C: cpu.execute_instruction<0xF0>(0x0000F3, 2); return true;
    // src/unknown/C0/C0DA31.asm:73 LDX @LOCAL03
    case 0xC0DA6E: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0DA31.asm:74 STX @VIRTUAL02
    case 0xC0DA70: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0DA31.asm:75 STX @LOCAL02
    case 0xC0DA72: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C0DA31.asm:76 DEC
    case 0xC0DA74: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:77 ASL
    case 0xC0DA75: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:78 TAX
    case 0xC0DA76: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:79 LDY ENTITY_ABS_Y_TABLE,X
    case 0xC0DA77: cpu.execute_instruction<0xBC>(0x000BC0, 3); return true;
    // src/unknown/C0/C0DA31.asm:80 BRA @UNKNOWN9
    case 0xC0DA7A: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/unknown/C0/C0DA31.asm:82 LDA @LOCAL01
    case 0xC0DA7C: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0DA31.asm:83 BEQ @UNKNOWN9
    case 0xC0DA7E: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/unknown/C0/C0DA31.asm:84 DEC
    case 0xC0DA80: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:85 ASL
    case 0xC0DA81: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:86 TAX
    case 0xC0DA82: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:87 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0DA83: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0DA31.asm:88 STA @LOCAL00
    case 0xC0DA86: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0DA31.asm:89 STA @VIRTUAL02
    case 0xC0DA88: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0DA31.asm:90 TYA
    case 0xC0DA8A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:91 CMP @VIRTUAL02
    case 0xC0DA8B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C0DA31.asm:92 BCS @UNKNOWN9
    case 0xC0DA8D: cpu.execute_instruction<0xB0>(0x00000B, 2); return true;
    // src/unknown/C0/C0DA31.asm:93 LDA @LOCAL00
    case 0xC0DA8F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0DA31.asm:94 TAY
    case 0xC0DA91: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:95 LDX @LOCAL03
    case 0xC0DA92: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0DA31.asm:96 STX @VIRTUAL02
    case 0xC0DA94: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0DA31.asm:97 LDA @VIRTUAL02
    case 0xC0DA96: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0DA31.asm:98 STA @LOCAL02
    case 0xC0DA98: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0DA31.asm:100 LDX @LOCAL03
    case 0xC0DA9A: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0DA31.asm:101 INX
    case 0xC0DA9C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:102 STX @LOCAL03
    case 0xC0DA9D: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C0DA31.asm:103 TXA
    case 0xC0DA9F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:104 ASL
    case 0xC0DAA0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:105 TAX
    case 0xC0DAA1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:106 LDA ENTITY_DRAW_SORTING,X
    case 0xC0DAA2: cpu.execute_instruction<0xBD>(0x002C0C, 3); return true;
    // src/unknown/C0/C0DA31.asm:107 STA @LOCAL01
    case 0xC0DAA5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0DA31.asm:108 INC
    case 0xC0DAA7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:109 BNE @UNKNOWN8
    case 0xC0DAA8: cpu.execute_instruction<0xD0>(0x0000D2, 2); return true;
    // src/unknown/C0/C0DA31.asm:110 LDA @LOCAL02
    case 0xC0DAAA: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0DA31.asm:111 STA @VIRTUAL02
    case 0xC0DAAC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0DA31.asm:112 ASL
    case 0xC0DAAE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:113 CLC
    case 0xC0DAAF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:114 ADC #.LOWORD(ENTITY_DRAW_SORTING)
    case 0xC0DAB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000C, 2); else cpu.execute_instruction<0x69>(0x002C0C, 3); return true;
    // src/unknown/C0/C0DA31.asm:114 ADC #.LOWORD(ENTITY_DRAW_SORTING)
    // Overlapping static entry reached from 0xC0DAB0.
    case 0xC0DAB2: cpu.execute_instruction<0x2C>(0x0086AA, 3); return true;
    // src/unknown/C0/C0DA31.asm:115 TAX
    case 0xC0DAB3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:116 STX @LOCAL01
    case 0xC0DAB4: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0DA31.asm:116 STX @LOCAL01
    // Overlapping static entry reached from 0xC0DAB2.
    case 0xC0DAB5: cpu.execute_instruction<0x10>(0x0000BD, 2); return true;
    // src/unknown/C0/C0DA31.asm:117 LDA __BSS_START__,X
    case 0xC0DAB6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0DA31.asm:117 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC0DAB5.
    case 0xC0DAB7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0DA31.asm:118 DEC
    case 0xC0DAB9: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:119 JSR UNKNOWN_C0A0CA
    case 0xC0DABA: cpu.execute_instruction<0x20>(0x00A0A9, 3); return true;
    // src/unknown/C0/C0DA31.asm:120 LDA #0
    case 0xC0DABD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0DA31.asm:120 LDA #0
    // Overlapping static entry reached from 0xC0DABD.
    case 0xC0DABF: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C0DA31.asm:121 LDX @LOCAL01
    case 0xC0DAC0: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0DA31.asm:122 STA __BSS_START__,X
    case 0xC0DAC2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0DA31.asm:124 LDA @VIRTUAL04
    case 0xC0DAC5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0DA31.asm:125 STA @LOCAL00
    case 0xC0DAC7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0DA31.asm:126 LDA @VIRTUAL04
    case 0xC0DAC9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0DA31.asm:127 DEC
    case 0xC0DACB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0DA31.asm:128 STA @VIRTUAL04
    case 0xC0DACC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0DA31.asm:129 LDA @LOCAL00
    case 0xC0DACE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0DA31.asm:130 BNEL @UNKNOWN5
    case 0xC0DAD0: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0DA31.asm:130 BNEL @UNKNOWN5
    case 0xC0DAD2: cpu.execute_instruction<0x4C>(0x00DA5A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0DA31.asm:132 END_C_FUNCTION
    case 0xC0DAD5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0DA31.asm:132 END_C_FUNCTION
    case 0xC0DAD6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0DB0F.asm (unresolved).
bool execute_unresolved_c0_c0db0f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0DB0F.asm:3 BEGIN_C_FUNCTION
    case 0xC0DAD7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0DB0F.asm:10 END_STACK_VARS
    case 0xC0DAD9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0DB0F.asm:10 END_STACK_VARS
    case 0xC0DADA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DB0F.asm:10 END_STACK_VARS
    case 0xC0DADB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DB0F.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DADB.
    case 0xC0DADD: cpu.execute_instruction<0xFF>(0x67AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0DB0F.asm:10 END_STACK_VARS
    case 0xC0DADE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:11 LDA PAD_STATE + 2
    case 0xC0DADF: cpu.execute_instruction<0xAD>(0x000067, 3); return true;
    // src/unknown/C0/C0DB0F.asm:11 LDA PAD_STATE + 2
    // Overlapping static entry reached from 0xC0DADD.
    case 0xC0DAE1: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C0DB0F.asm:12 AND #PAD::SELECT_BUTTON
    case 0xC0DAE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x002000, 3); return true;
    // src/unknown/C0/C0DB0F.asm:12 AND #PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC0DAE2.
    case 0xC0DAE4: cpu.execute_instruction<0x20>(0x0006F0, 3); return true;
    // src/unknown/C0/C0DB0F.asm:13 BEQ @UNKNOWN0
    case 0xC0DAE5: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0DB0F.asm:14 JSR UNKNOWN_C0DA31
    case 0xC0DAE7: cpu.execute_instruction<0x20>(0x00D9F9, 3); return true;
    // src/unknown/C0/C0DB0F.asm:15 JMP @UNKNOWN13
    case 0xC0DAEA: cpu.execute_instruction<0x4C>(0x00DBAC, 3); return true;
    // src/unknown/C0/C0DB0F.asm:17 LDA #.LOWORD(-1)
    case 0xC0DAED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0DB0F.asm:17 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0DAED.
    case 0xC0DAEF: cpu.execute_instruction<0xFF>(0xAC1685, 4); return true;
    // src/unknown/C0/C0DB0F.asm:18 STA @LOCAL04
    case 0xC0DAF0: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0DB0F.asm:19 LDY FIRST_ENTITY
    case 0xC0DAF2: cpu.execute_instruction<0xAC>(0x000A46, 3); return true;
    // src/unknown/C0/C0DB0F.asm:19 LDY FIRST_ENTITY
    // Overlapping static entry reached from 0xC0DAEF.
    case 0xC0DAF3: cpu.execute_instruction<0x46>(0x00000A, 2); return true;
    // src/unknown/C0/C0DB0F.asm:20 STY @LOCAL03
    case 0xC0DAF5: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C0DB0F.asm:21 BRA @UNKNOWN6
    case 0xC0DAF7: cpu.execute_instruction<0x80>(0x00004B, 2); return true;
    // src/unknown/C0/C0DB0F.asm:23 TYA
    case 0xC0DAF9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:24 LSR
    case 0xC0DAFA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:25 ASL
    case 0xC0DAFB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:26 TAX
    case 0xC0DAFC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:27 LDA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0DAFD: cpu.execute_instruction<0xBD>(0x000B48, 3); return true;
    // src/unknown/C0/C0DB0F.asm:28 CMP #256
    case 0xC0DB00: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C0/C0DB0F.asm:28 CMP #256
    // Overlapping static entry reached from 0xC0DB00.
    case 0xC0DB02: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/unknown/C0/C0DB0F.asm:29 BCC @UNKNOWN2
    case 0xC0DB03: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/unknown/C0/C0DB0F.asm:29 BCC @UNKNOWN2
    // Overlapping static entry reached from 0xC0DB02.
    case 0xC0DB04: cpu.execute_instruction<0x05>(0x0000C9, 2); return true;
    // src/unknown/C0/C0DB0F.asm:30 CMP #.LOWORD(-64)
    case 0xC0DB05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C0, 2); else cpu.execute_instruction<0xC9>(0x00FFC0, 3); return true;
    // src/unknown/C0/C0DB0F.asm:30 CMP #.LOWORD(-64)
    // Overlapping static entry reached from 0xC0DB04.
    case 0xC0DB06: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x0090FF, 3); return true;
    // src/unknown/C0/C0DB0F.asm:30 CMP #.LOWORD(-64)
    // Overlapping static entry reached from 0xC0DB05.
    case 0xC0DB07: cpu.execute_instruction<0xFF>(0x982F90, 4); return true;
    // src/unknown/C0/C0DB0F.asm:31 BCC @UNKNOWN5
    case 0xC0DB08: cpu.execute_instruction<0x90>(0x00002F, 2); return true;
    // src/unknown/C0/C0DB0F.asm:31 BCC @UNKNOWN5
    // Overlapping static entry reached from 0xC0DB06.
    case 0xC0DB09: cpu.execute_instruction<0x2F>(0x0A4A98, 4); return true;
    // src/unknown/C0/C0DB0F.asm:33 TYA
    case 0xC0DB0A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:34 LSR
    case 0xC0DB0B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:35 ASL
    case 0xC0DB0C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:36 TAX
    case 0xC0DB0D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:37 LDA ENTITY_SCREEN_X_TABLE,X
    case 0xC0DB0E: cpu.execute_instruction<0xBD>(0x000B0C, 3); return true;
    // src/unknown/C0/C0DB0F.asm:38 CMP #320
    // Retained frozen presentation override; see program_index.json.
    case 0xC0DB11: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000180, 3); return true;
    // src/unknown/C0/C0DB0F.asm:38 CMP #320
    // Overlapping static entry reached from 0xC0DB11.
    case 0xC0DB13: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/unknown/C0/C0DB0F.asm:39 BCC @UNKNOWN3
    case 0xC0DB14: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/unknown/C0/C0DB0F.asm:39 BCC @UNKNOWN3
    // Overlapping static entry reached from 0xC0DB13.
    case 0xC0DB15: cpu.execute_instruction<0x05>(0x0000C9, 2); return true;
    // src/unknown/C0/C0DB0F.asm:40 CMP #.LOWORD(-64)
    // Retained frozen presentation override; see program_index.json.
    case 0xC0DB16: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x00FF80, 3); return true;
    // src/unknown/C0/C0DB0F.asm:40 CMP #.LOWORD(-64)
    // Retained frozen presentation override; see program_index.json.
    // Overlapping static entry reached from 0xC0DB15.
    case 0xC0DB17: if (cpu.status_register & 0x10) cpu.execute_instruction<0x80>(0x0000FF, 2); else cpu.execute_instruction<0x80>(0x0090FF, 3); return true;
    // src/unknown/C0/C0DB0F.asm:40 CMP #.LOWORD(-64)
    // Overlapping static entry reached from 0xC0DB16.
    case 0xC0DB18: cpu.execute_instruction<0xFF>(0x981E90, 4); return true;
    // src/unknown/C0/C0DB0F.asm:41 BCC @UNKNOWN5
    case 0xC0DB19: cpu.execute_instruction<0x90>(0x00001E, 2); return true;
    // src/unknown/C0/C0DB0F.asm:41 BCC @UNKNOWN5
    // Overlapping static entry reached from 0xC0DB17.
    case 0xC0DB1A: cpu.execute_instruction<0x1E>(0x004A98, 3); return true;
    // src/unknown/C0/C0DB0F.asm:43 TYA
    case 0xC0DB1B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:44 LSR
    case 0xC0DB1C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:45 STA @LOCAL02
    case 0xC0DB1D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0DB0F.asm:46 ASL
    case 0xC0DB1F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:47 TAX
    case 0xC0DB20: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:48 LDA ENTITY_DRAW_PRIORITY,X
    case 0xC0DB21: cpu.execute_instruction<0xBD>(0x001034, 3); return true;
    // src/unknown/C0/C0DB0F.asm:49 CMP #1
    case 0xC0DB24: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0DB0F.asm:49 CMP #1
    // Overlapping static entry reached from 0xC0DB24.
    case 0xC0DB26: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0DB0F.asm:50 BNE @UNKNOWN4
    case 0xC0DB27: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C0/C0DB0F.asm:51 LDA @LOCAL04
    case 0xC0DB29: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0DB0F.asm:52 STA ENTITY_DRAW_SORTING,X
    case 0xC0DB2B: cpu.execute_instruction<0x9D>(0x002C0C, 3); return true;
    // src/unknown/C0/C0DB0F.asm:53 LDA @LOCAL02
    case 0xC0DB2E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0DB0F.asm:54 STA @LOCAL04
    case 0xC0DB30: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0DB0F.asm:55 BRA @UNKNOWN5
    case 0xC0DB32: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C0/C0DB0F.asm:57 LDA @LOCAL02
    case 0xC0DB34: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0DB0F.asm:58 JSR UNKNOWN_C0A0CA
    case 0xC0DB36: cpu.execute_instruction<0x20>(0x00A0A9, 3); return true;
    // src/unknown/C0/C0DB0F.asm:60 LDY @LOCAL03
    case 0xC0DB39: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C0/C0DB0F.asm:61 TYA
    case 0xC0DB3B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:62 LSR
    case 0xC0DB3C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:63 ASL
    case 0xC0DB3D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:64 TAX
    case 0xC0DB3E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:65 LDY ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC0DB3F: cpu.execute_instruction<0xBC>(0x000A94, 3); return true;
    // src/unknown/C0/C0DB0F.asm:66 STY @LOCAL03
    case 0xC0DB42: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C0DB0F.asm:68 TYA
    case 0xC0DB44: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:69 INC
    case 0xC0DB45: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:70 BNE @UNKNOWN1
    case 0xC0DB46: cpu.execute_instruction<0xD0>(0x0000B1, 2); return true;
    // src/unknown/C0/C0DB0F.asm:71 BRA @UNKNOWN12
    case 0xC0DB48: cpu.execute_instruction<0x80>(0x00005D, 2); return true;
    // src/unknown/C0/C0DB0F.asm:73 LDA @LOCAL04
    case 0xC0DB4A: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0DB0F.asm:74 STA @LOCAL01
    case 0xC0DB4C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0DB0F.asm:75 LDA @LOCAL04
    case 0xC0DB4E: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0DB0F.asm:76 ASL
    case 0xC0DB50: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:77 TAX
    case 0xC0DB51: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:78 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0DB52: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0DB0F.asm:79 STA @LOCAL00
    case 0xC0DB55: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0DB0F.asm:80 LDA #.LOWORD(-1)
    case 0xC0DB57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0DB0F.asm:80 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0DB57.
    case 0xC0DB59: cpu.execute_instruction<0xFF>(0xA50485, 4); return true;
    // src/unknown/C0/C0DB0F.asm:81 STA @VIRTUAL04
    case 0xC0DB5A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0DB0F.asm:82 LDA @LOCAL04
    case 0xC0DB5C: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0DB0F.asm:82 LDA @LOCAL04
    // Overlapping static entry reached from 0xC0DB59.
    case 0xC0DB5D: cpu.execute_instruction<0x16>(0x000085, 2); return true;
    // src/unknown/C0/C0DB0F.asm:83 STA @VIRTUAL02
    case 0xC0DB5E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0DB0F.asm:83 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC0DB5D.
    case 0xC0DB5F: cpu.execute_instruction<0x02>(0x0000BC, 2); return true;
    // src/unknown/C0/C0DB0F.asm:84 LDY ENTITY_DRAW_SORTING,X
    case 0xC0DB60: cpu.execute_instruction<0xBC>(0x002C0C, 3); return true;
    // src/unknown/C0/C0DB0F.asm:85 BRA @UNKNOWN10
    case 0xC0DB63: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C0/C0DB0F.asm:87 TYA
    case 0xC0DB65: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:88 ASL
    case 0xC0DB66: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:89 TAX
    case 0xC0DB67: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:90 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0DB68: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0DB0F.asm:90 LDA ENTITY_ABS_Y_TABLE,X
    // Overlapping static entry reached from 0xC0DBC5.
    case 0xC0DB69: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00000B, 2); else cpu.execute_instruction<0xC0>(0x00C50B, 3); return true;
    // src/unknown/C0/C0DB0F.asm:91 CMP @LOCAL00
    case 0xC0DB6B: cpu.execute_instruction<0xC5>(0x00000E, 2); return true;
    // src/unknown/C0/C0DB0F.asm:91 CMP @LOCAL00
    // Overlapping static entry reached from 0xC0DB69.
    case 0xC0DB6C: cpu.execute_instruction<0x0E>(0x000890, 3); return true;
    // src/unknown/C0/C0DB0F.asm:92 BCC @UNKNOWN9
    case 0xC0DB6D: cpu.execute_instruction<0x90>(0x000008, 2); return true;
    // src/unknown/C0/C0DB0F.asm:93 STA @LOCAL00
    case 0xC0DB6F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0DB0F.asm:94 STY @LOCAL01
    case 0xC0DB71: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C0DB0F.asm:95 LDA @VIRTUAL02
    case 0xC0DB73: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0DB0F.asm:96 STA @VIRTUAL04
    case 0xC0DB75: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0DB0F.asm:98 STY @VIRTUAL02
    case 0xC0DB77: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0DB0F.asm:99 TYA
    case 0xC0DB79: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:100 ASL
    case 0xC0DB7A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:101 TAX
    case 0xC0DB7B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:102 LDY ENTITY_DRAW_SORTING,X
    case 0xC0DB7C: cpu.execute_instruction<0xBC>(0x002C0C, 3); return true;
    // src/unknown/C0/C0DB0F.asm:104 TYA
    case 0xC0DB7F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:105 INC
    case 0xC0DB80: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:106 BNE @UNKNOWN8
    case 0xC0DB81: cpu.execute_instruction<0xD0>(0x0000E2, 2); return true;
    // src/unknown/C0/C0DB0F.asm:107 LDA @LOCAL01
    case 0xC0DB83: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0DB0F.asm:108 JSR UNKNOWN_C0A0CA
    case 0xC0DB85: cpu.execute_instruction<0x20>(0x00A0A9, 3); return true;
    // src/unknown/C0/C0DB0F.asm:109 LDA @VIRTUAL04
    case 0xC0DB88: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0DB0F.asm:110 INC
    case 0xC0DB8A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:111 BEQ @UNKNOWN11
    case 0xC0DB8B: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C0DB0F.asm:112 LDA @VIRTUAL04
    case 0xC0DB8D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0DB0F.asm:113 ASL
    case 0xC0DB8F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:114 PHA
    case 0xC0DB90: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:115 LDA @LOCAL01
    case 0xC0DB91: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0DB0F.asm:116 ASL
    case 0xC0DB93: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:117 TAX
    case 0xC0DB94: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:118 LDA ENTITY_DRAW_SORTING,X
    case 0xC0DB95: cpu.execute_instruction<0xBD>(0x002C0C, 3); return true;
    // src/unknown/C0/C0DB0F.asm:119 PLX
    case 0xC0DB98: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:120 STA ENTITY_DRAW_SORTING,X
    case 0xC0DB99: cpu.execute_instruction<0x9D>(0x002C0C, 3); return true;
    // src/unknown/C0/C0DB0F.asm:121 BRA @UNKNOWN12
    case 0xC0DB9C: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C0/C0DB0F.asm:123 LDA @LOCAL01
    case 0xC0DB9E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0DB0F.asm:124 ASL
    case 0xC0DBA0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:125 TAX
    case 0xC0DBA1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:126 LDA ENTITY_DRAW_SORTING,X
    case 0xC0DBA2: cpu.execute_instruction<0xBD>(0x002C0C, 3); return true;
    // src/unknown/C0/C0DB0F.asm:127 STA @LOCAL04
    case 0xC0DBA5: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0DB0F.asm:129 LDA @LOCAL04
    case 0xC0DBA7: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0DB0F.asm:130 INC
    case 0xC0DBA9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:131 BNE @UNKNOWN7
    case 0xC0DBAA: cpu.execute_instruction<0xD0>(0x00009E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0DB0F.asm:133 END_C_FUNCTION
    case 0xC0DBAC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0DB0F.asm:133 END_C_FUNCTION
    case 0xC0DBAD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0DC38.asm (unresolved).
bool execute_unresolved_c0_c0dc38_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0DC38.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0DC00: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0DC38.asm:6 END_STACK_VARS
    case 0xC0DC02: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0DC38.asm:6 END_STACK_VARS
    case 0xC0DC03: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0DC38.asm:6 END_STACK_VARS
    case 0xC0DC04: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DC38.asm:6 END_STACK_VARS
    case 0xC0DC05: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DC38.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DC05.
    case 0xC0DC07: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0DC38.asm:6 END_STACK_VARS
    case 0xC0DC08: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0DC38.asm:6 END_STACK_VARS
    case 0xC0DC09: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C0/C0DC38.asm:7 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC0DC0A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C0/C0DC38.asm:7 OPTIMIZED_MULT @VIRTUAL04, 6
    // Overlapping static entry reached from 0xC0DC07.
    case 0xC0DC0B: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C0/C0DC38.asm:7 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC0DC0C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C0/C0DC38.asm:7 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC0DC0D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C0/C0DC38.asm:7 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC0DC0F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DC38.asm:8 TAX
    case 0xC0DC10: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DC38.asm:9 STZ OVERWORLD_TASKS,X
    case 0xC0DC11: cpu.execute_instruction<0x9E>(0x00A042, 3); return true;
    // src/unknown/C0/C0DC38.asm:10 PLD
    case 0xC0DC14: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0DC38.asm:11 RTL
    case 0xC0DC15: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0DD0F.asm (unresolved).
bool execute_unresolved_c0_c0dd0f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0DD0F.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0DCD7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0DD0F.asm:4 BRA @UNKNOWN1
    case 0xC0DCD9: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C0/C0DD0F.asm:6 JSL OAM_CLEAR
    case 0xC0DCDB: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/unknown/C0/C0DD0F.asm:7 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC0DCDF: cpu.execute_instruction<0x22>(0xC09445, 4); return true;
    // src/unknown/C0/C0DD0F.asm:8 JSL UPDATE_SCREEN
    case 0xC0DCE3: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/unknown/C0/C0DD0F.asm:9 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0DCE7: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/C0/C0DD0F.asm:11 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC0DCEB: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/unknown/C0/C0DD0F.asm:12 AND #$00FF
    case 0xC0DCEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0DD0F.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC0DCEE.
    case 0xC0DCF0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0DD0F.asm:13 BNE @UNKNOWN0
    case 0xC0DCF1: cpu.execute_instruction<0xD0>(0x0000E8, 2); return true;
    // src/unknown/C0/C0DD0F.asm:14 RTS
    case 0xC0DCF3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0DD2C.asm (unresolved).
bool execute_unresolved_c0_c0dd2c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0DD2C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0DCF4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0DD2C.asm:7 END_STACK_VARS
    case 0xC0DCF6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0DD2C.asm:7 END_STACK_VARS
    case 0xC0DCF7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0DD2C.asm:7 END_STACK_VARS
    case 0xC0DCF8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DD2C.asm:7 END_STACK_VARS
    case 0xC0DCF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DD2C.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DCF9.
    case 0xC0DCFB: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0DD2C.asm:7 END_STACK_VARS
    case 0xC0DCFC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0DD2C.asm:7 END_STACK_VARS
    case 0xC0DCFD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0DD2C.asm:8 STA @LOCAL00
    case 0xC0DCFE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0DD2C.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC0DCFB.
    case 0xC0DCFF: cpu.execute_instruction<0x0E>(0x001580, 3); return true;
    // src/unknown/C0/C0DD2C.asm:9 BRA @UNKNOWN1
    case 0xC0DD00: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C0/C0DD2C.asm:11 JSL OAM_CLEAR
    case 0xC0DD02: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/unknown/C0/C0DD2C.asm:12 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC0DD06: cpu.execute_instruction<0x22>(0xC09445, 4); return true;
    // src/unknown/C0/C0DD2C.asm:13 JSL UPDATE_SCREEN
    case 0xC0DD0A: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/unknown/C0/C0DD2C.asm:14 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0DD0E: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/C0/C0DD2C.asm:15 LDA @LOCAL00
    case 0xC0DD12: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0DD2C.asm:16 DEC
    case 0xC0DD14: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0DD2C.asm:17 STA @LOCAL00
    case 0xC0DD15: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0DD2C.asm:19 BNE @UNKNOWN0
    case 0xC0DD17: cpu.execute_instruction<0xD0>(0x0000E9, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0DD2C.asm:20 END_C_FUNCTION
    case 0xC0DD19: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0DD2C.asm:20 END_C_FUNCTION
    case 0xC0DD1A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0DD79.asm (unresolved).
bool execute_unresolved_c0_c0dd79_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0DD79.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0DD41: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0DD79.asm:7 END_STACK_VARS
    case 0xC0DD43: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0DD79.asm:7 END_STACK_VARS
    case 0xC0DD44: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DD79.asm:7 END_STACK_VARS
    case 0xC0DD45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DD79.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DD45.
    case 0xC0DD47: cpu.execute_instruction<0xFF>(0x41AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0DD79.asm:7 END_STACK_VARS
    case 0xC0DD48: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:8 LDA PSI_TELEPORT_DESTINATION
    case 0xC0DD49: cpu.execute_instruction<0xAD>(0x00A141, 3); return true;
    // src/unknown/C0/C0DD79.asm:8 LDA PSI_TELEPORT_DESTINATION
    // Overlapping static entry reached from 0xC0DD47.
    case 0xC0DD4B: cpu.execute_instruction<0xA1>(0x000085, 2); return true;
    // src/unknown/C0/C0DD79.asm:9 STA @VIRTUAL02
    case 0xC0DD4C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0DD79.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC0DD4B.
    case 0xC0DD4D: cpu.execute_instruction<0x02>(0x0000A0, 2); return true;
    // src/unknown/C0/C0DD79.asm:10 LDY #1
    case 0xC0DD4E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C0DD79.asm:10 LDY #1
    // Overlapping static entry reached from 0xC0DD4E.
    case 0xC0DD50: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C0DD79.asm:11 STY @LOCAL01
    case 0xC0DD51: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C0DD79.asm:12 BRA @UNKNOWN1
    case 0xC0DD53: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C0DD79.asm:14 LDX #0
    case 0xC0DD55: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0DD79.asm:14 LDX #0
    // Overlapping static entry reached from 0xC0DD55.
    case 0xC0DD57: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C0/C0DD79.asm:15 TYA
    case 0xC0DD58: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:16 JSL SET_EVENT_FLAG
    case 0xC0DD59: cpu.execute_instruction<0x22>(0xC21506, 4); return true;
    // src/unknown/C0/C0DD79.asm:17 LDY @LOCAL01
    case 0xC0DD5D: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C0DD79.asm:18 INY
    case 0xC0DD5F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:19 STY @LOCAL01
    case 0xC0DD60: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C0DD79.asm:21 CPY #10
    case 0xC0DD62: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00000A, 2); else cpu.execute_instruction<0xC0>(0x00000A, 3); return true;
    // src/unknown/C0/C0DD79.asm:21 CPY #10
    // Overlapping static entry reached from 0xC0DD62.
    case 0xC0DD64: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0DD79.asm:22 BLTEQ @UNKNOWN0
    case 0xC0DD65: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0DD79.asm:22 BLTEQ @UNKNOWN0
    case 0xC0DD67: cpu.execute_instruction<0xF0>(0x0000EC, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0DD79.asm:23 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC0DD69: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009E, 2); else cpu.execute_instruction<0xA9>(0x00899E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0DD79.asm:23 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0DD69.
    case 0xC0DD6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0DD79.asm:23 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC0DD6C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0DD79.asm:23 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0DD6B.
    case 0xC0DD6D: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0DD79.asm:23 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC0DD6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0DD79.asm:23 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0DD6D.
    case 0xC0DD6F: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0DD79.asm:23 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0DD6E.
    case 0xC0DD70: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0DD79.asm:23 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC0DD71: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0DD79.asm:24 LDA @VIRTUAL02
    case 0xC0DD73: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:589 ASL
    // Macro caller: src/unknown/C0/C0DD79.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    case 0xC0DD75: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:590 ASL
    // Macro caller: src/unknown/C0/C0DD79.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    case 0xC0DD76: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:591 ASL
    // Macro caller: src/unknown/C0/C0DD79.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    case 0xC0DD77: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:592 ASL
    // Macro caller: src/unknown/C0/C0DD79.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    case 0xC0DD78: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:26 STA @LOCAL01
    case 0xC0DD79: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0DD79.asm:27 CLC
    case 0xC0DD7B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:28 ADC #psi_teleport_destination::dest_x
    case 0xC0DD7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000C, 2); else cpu.execute_instruction<0x69>(0x00000C, 3); return true;
    // src/unknown/C0/C0DD79.asm:28 ADC #psi_teleport_destination::dest_x
    // Overlapping static entry reached from 0xC0DD7C.
    case 0xC0DD7E: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C0DD79.asm:29 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC0DD7F: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C0DD79.asm:29 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC0DD81: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C0DD79.asm:29 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC0DD83: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C0DD79.asm:29 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC0DD85: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C0/C0DD79.asm:30 CLC
    case 0xC0DD87: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:31 ADC @VIRTUAL0A
    case 0xC0DD88: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C0DD79.asm:32 STA @VIRTUAL0A
    case 0xC0DD8A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C0DD79.asm:33 LDA [@VIRTUAL0A]
    case 0xC0DD8C: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C0/C0DD79.asm:34 TAX
    case 0xC0DD8E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:35 STX CURRENT_TELEPORT_DESTINATION_X
    case 0xC0DD8F: cpu.execute_instruction<0x8E>(0x004710, 3); return true;
    // src/unknown/C0/C0DD79.asm:36 LDA @LOCAL01
    case 0xC0DD92: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0DD79.asm:37 CLC
    case 0xC0DD94: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:38 ADC #psi_teleport_destination::dest_y
    case 0xC0DD95: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000E, 2); else cpu.execute_instruction<0x69>(0x00000E, 3); return true;
    // src/unknown/C0/C0DD79.asm:38 ADC #psi_teleport_destination::dest_y
    // Overlapping static entry reached from 0xC0DD95.
    case 0xC0DD97: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0DD79.asm:39 CLC
    case 0xC0DD98: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:40 ADC @VIRTUAL06
    case 0xC0DD99: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0DD79.asm:41 STA @VIRTUAL06
    case 0xC0DD9B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0DD79.asm:42 LDA [@VIRTUAL06]
    case 0xC0DD9D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0DD79.asm:43 STA @LOCAL01
    case 0xC0DD9F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0DD79.asm:44 STA CURRENT_TELEPORT_DESTINATION_Y
    case 0xC0DDA1: cpu.execute_instruction<0x8D>(0x004712, 3); return true;
    // src/unknown/C0/C0DD79.asm:45 TXA
    case 0xC0DDA4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:46 ASL
    case 0xC0DDA5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:47 ASL
    case 0xC0DDA6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:48 ASL
    case 0xC0DDA7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:49 STA @VIRTUAL02
    case 0xC0DDA8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0DD79.asm:50 LDA @LOCAL01
    case 0xC0DDAA: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0DD79.asm:51 ASL
    case 0xC0DDAC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:52 ASL
    case 0xC0DDAD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:53 ASL
    case 0xC0DDAE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:54 STA @LOCAL00
    case 0xC0DDAF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0DD79.asm:55 LDA PSI_TELEPORT_STYLE
    case 0xC0DDB1: cpu.execute_instruction<0xAD>(0x00A143, 3); return true;
    // src/unknown/C0/C0DD79.asm:56 CMP #TELEPORT_STYLE::INSTANT
    case 0xC0DDB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0DD79.asm:56 CMP #TELEPORT_STYLE::INSTANT
    // Overlapping static entry reached from 0xC0DDB4.
    case 0xC0DDB6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0DD79.asm:57 BEQ @UNKNOWN2
    case 0xC0DDB7: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C0DD79.asm:58 LDA @VIRTUAL02
    case 0xC0DDB9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0DD79.asm:59 CLC
    case 0xC0DDBB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:60 ADC #316
    case 0xC0DDBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003C, 2); else cpu.execute_instruction<0x69>(0x00013C, 3); return true;
    // src/unknown/C0/C0DD79.asm:60 ADC #316
    // Overlapping static entry reached from 0xC0DDBC.
    case 0xC0DDBE: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/unknown/C0/C0DD79.asm:61 STA @VIRTUAL02
    case 0xC0DDBF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0DD79.asm:61 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC0DDBE.
    case 0xC0DDC0: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/C0/C0DD79.asm:63 LDA #.LOWORD(-1)
    case 0xC0DDC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0DD79.asm:63 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0DDC1.
    case 0xC0DDC3: cpu.execute_instruction<0xFF>(0x615A8D, 4); return true;
    // src/unknown/C0/C0DD79.asm:64 STA CURRENT_MAP_MUSIC_TRACK
    case 0xC0DDC4: cpu.execute_instruction<0x8D>(0x00615A, 3); return true;
    // src/unknown/C0/C0DD79.asm:65 STA LOADED_MAP_PALETTE
    case 0xC0DDC7: cpu.execute_instruction<0x8D>(0x0046F6, 3); return true;
    // src/unknown/C0/C0DD79.asm:66 STA LOADED_MAP_TILE_COMBO
    case 0xC0DDCA: cpu.execute_instruction<0x8D>(0x0046F4, 3); return true;
    // src/unknown/C0/C0DD79.asm:67 LDY #6
    case 0xC0DDCD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C0/C0DD79.asm:67 LDY #6
    // Overlapping static entry reached from 0xC0DDCD.
    case 0xC0DDCF: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C0DD79.asm:68 LDA @LOCAL00
    case 0xC0DDD0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0DD79.asm:69 TAX
    case 0xC0DDD2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:70 LDA @VIRTUAL02
    case 0xC0DDD3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0DD79.asm:71 JSL INITIALIZE_MAP
    case 0xC0DDD5: cpu.execute_instruction<0x22>(0xC019C8, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0DD79.asm:72 END_C_FUNCTION
    case 0xC0DDD9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0DD79.asm:72 END_C_FUNCTION
    case 0xC0DDDA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0DE16.asm (unresolved).
bool execute_unresolved_c0_c0de16_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0DE16.asm:3 BEGIN_C_FUNCTION
    case 0xC0DDDB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0DE16.asm:6 END_STACK_VARS
    case 0xC0DDDD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0DE16.asm:6 END_STACK_VARS
    case 0xC0DDDE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DE16.asm:6 END_STACK_VARS
    case 0xC0DDDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DE16.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DDDF.
    case 0xC0DDE1: cpu.execute_instruction<0xFF>(0x18A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0DE16.asm:6 END_STACK_VARS
    case 0xC0DDE2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0DE16.asm:7 LDY #24
    case 0xC0DDE3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x000018, 3); return true;
    // src/unknown/C0/C0DE16.asm:7 LDY #24
    // Overlapping static entry reached from 0xC0DDE3.
    case 0xC0DDE5: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0DE16.asm:8 BRA @UNKNOWN1
    case 0xC0DDE6: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/unknown/C0/C0DE16.asm:10 TYA
    case 0xC0DDE8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DE16.asm:11 ASL
    case 0xC0DDE9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DE16.asm:12 STA @LOCAL00
    case 0xC0DDEA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0DE16.asm:13 TAX
    case 0xC0DDEC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DE16.asm:14 LDA #8
    case 0xC0DDED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C0/C0DE16.asm:14 LDA #8
    // Overlapping static entry reached from 0xC0DDED.
    case 0xC0DDEF: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0DE16.asm:15 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC0DDF0: cpu.execute_instruction<0x9D>(0x000F08, 3); return true;
    // src/unknown/C0/C0DE16.asm:16 LDA @LOCAL00
    case 0xC0DDF3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0DE16.asm:17 CLC
    case 0xC0DDF5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DE16.asm:18 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC0DDF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F8, 2); else cpu.execute_instruction<0x69>(0x000FF8, 3); return true;
    // src/unknown/C0/C0DE16.asm:18 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC0DDF6.
    case 0xC0DDF8: cpu.execute_instruction<0x0F>(0x00BDAA, 4); return true;
    // src/unknown/C0/C0DE16.asm:19 TAX
    case 0xC0DDF9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DE16.asm:20 LDA __BSS_START__,X
    case 0xC0DDFA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0DE16.asm:20 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC0DDF8.
    case 0xC0DDFC: cpu.execute_instruction<0x00>(0x000009, 2); return true;
    // src/unknown/C0/C0DE16.asm:21 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN11
    case 0xC0DDFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x000800, 3); return true;
    // src/unknown/C0/C0DE16.asm:21 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN11
    // Overlapping static entry reached from 0xC0DDFD.
    case 0xC0DDFF: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C0DE16.asm:22 STA __BSS_START__,X
    case 0xC0DE00: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0DE16.asm:23 INY
    case 0xC0DE03: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0DE16.asm:25 CPY #MAX_ENTITIES
    case 0xC0DE04: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00001E, 2); else cpu.execute_instruction<0xC0>(0x00001E, 3); return true;
    // src/unknown/C0/C0DE16.asm:25 CPY #MAX_ENTITIES
    // Overlapping static entry reached from 0xC0DE04.
    case 0xC0DE06: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0DE16.asm:26 BCC @UNKNOWN0
    case 0xC0DE07: cpu.execute_instruction<0x90>(0x0000DF, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0DE16.asm:27 END_C_FUNCTION
    case 0xC0DE09: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0DE16.asm:27 END_C_FUNCTION
    case 0xC0DE0A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0DE46.asm (unresolved).
bool execute_unresolved_c0_c0de46_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0DE46.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0DE0B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0DE46.asm:4 JSR UNKNOWN_C0DE16
    case 0xC0DE0D: cpu.execute_instruction<0x20>(0x00DDDB, 3); return true;
    // src/unknown/C0/C0DE46.asm:5 JSL RAND
    case 0xC0DE10: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/unknown/C0/C0DE46.asm:6 XBA
    case 0xC0DE14: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0DE46.asm:7 AND #$FF00
    case 0xC0DE15: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C0DE46.asm:7 AND #$FF00
    // Overlapping static entry reached from 0xC0DE15.
    case 0xC0DE17: cpu.execute_instruction<0xFF>(0xA1638D, 4); return true;
    // src/unknown/C0/C0DE46.asm:8 STA PSI_TELEPORT_BETA_ANGLE
    case 0xC0DE18: cpu.execute_instruction<0x8D>(0x00A163, 3); return true;
    // src/unknown/C0/C0DE46.asm:9 LDA PSI_TELEPORT_STYLE
    case 0xC0DE1B: cpu.execute_instruction<0xAD>(0x00A143, 3); return true;
    // src/unknown/C0/C0DE46.asm:10 CMP #TELEPORT_STYLE::PSI_BETA
    case 0xC0DE1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0DE46.asm:10 CMP #TELEPORT_STYLE::PSI_BETA
    // Overlapping static entry reached from 0xC0DE1E.
    case 0xC0DE20: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0DE46.asm:11 BNE @UNKNOWN0
    case 0xC0DE21: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C0/C0DE46.asm:12 LDA #$0004
    case 0xC0DE23: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C0/C0DE46.asm:12 LDA #$0004
    // Overlapping static entry reached from 0xC0DE23.
    case 0xC0DE25: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0DE46.asm:13 STA PSI_TELEPORT_BETA_PROGRESS
    case 0xC0DE26: cpu.execute_instruction<0x8D>(0x00A165, 3); return true;
    // src/unknown/C0/C0DE46.asm:14 BRA @UNKNOWN1
    case 0xC0DE29: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C0/C0DE46.asm:16 LDA #$0008
    case 0xC0DE2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C0/C0DE46.asm:16 LDA #$0008
    // Overlapping static entry reached from 0xC0DE2B.
    case 0xC0DE2D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0DE46.asm:17 STA PSI_TELEPORT_BETA_PROGRESS
    case 0xC0DE2E: cpu.execute_instruction<0x8D>(0x00A165, 3); return true;
    // src/unknown/C0/C0DE46.asm:18 STZ PSI_TELEPORT_BETTER_PROGRESS
    case 0xC0DE31: cpu.execute_instruction<0x9C>(0x00A167, 3); return true;
    // src/unknown/C0/C0DE46.asm:20 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0DE34: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C0DE46.asm:21 STA PSI_TELEPORT_BETA_X_ADJUSTMENT
    case 0xC0DE37: cpu.execute_instruction<0x8D>(0x00A169, 3); return true;
    // src/unknown/C0/C0DE46.asm:22 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC0DE3A: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C0/C0DE46.asm:23 STA PSI_TELEPORT_BETA_Y_ADJUSTMENT
    case 0xC0DE3D: cpu.execute_instruction<0x8D>(0x00A16B, 3); return true;
    // src/unknown/C0/C0DE46.asm:24 RTS
    case 0xC0DE40: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0DE7C.asm (unresolved).
bool execute_unresolved_c0_c0de7c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0DE7C.asm:3 BEGIN_C_FUNCTION
    case 0xC0DE41: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0DE7C.asm:6 END_STACK_VARS
    case 0xC0DE43: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0DE7C.asm:6 END_STACK_VARS
    case 0xC0DE44: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DE7C.asm:6 END_STACK_VARS
    case 0xC0DE45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DE7C.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DE45.
    case 0xC0DE47: cpu.execute_instruction<0xFF>(0x7FA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0DE7C.asm:6 END_STACK_VARS
    case 0xC0DE48: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0DE7C.asm:7 LDA #.LOWORD(PARTY_CHARACTERS)
    case 0xC0DE49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x009C7F, 3); return true;
    // src/unknown/C0/C0DE7C.asm:7 LDA #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC0DE49.
    case 0xC0DE4B: cpu.execute_instruction<0x9C>(0x004C8D, 3); return true;
    // src/unknown/C0/C0DE7C.asm:8 STA CURRENT_PARTY_MEMBER_TICK
    case 0xC0DE4C: cpu.execute_instruction<0x8D>(0x00514C, 3); return true;
    // src/unknown/C0/C0DE7C.asm:8 STA CURRENT_PARTY_MEMBER_TICK
    // Overlapping static entry reached from 0xC0DE4B.
    case 0xC0DE4E: cpu.execute_instruction<0x51>(0x0000A0, 2); return true;
    // src/unknown/C0/C0DE7C.asm:9 LDY #24
    case 0xC0DE4F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x000018, 3); return true;
    // src/unknown/C0/C0DE7C.asm:9 LDY #24
    // Overlapping static entry reached from 0xC0DE4E.
    case 0xC0DE50: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DE7C.asm:9 LDY #24
    // Overlapping static entry reached from 0xC0DE4F.
    case 0xC0DE51: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0DE7C.asm:10 BRA @UNKNOWN1
    case 0xC0DE52: cpu.execute_instruction<0x80>(0x00003F, 2); return true;
    // src/unknown/C0/C0DE7C.asm:12 TYA
    case 0xC0DE54: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DE7C.asm:13 ASL
    case 0xC0DE55: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DE7C.asm:14 STA @LOCAL00
    case 0xC0DE56: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0DE7C.asm:15 TAX
    case 0xC0DE58: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DE7C.asm:16 LDA #8
    case 0xC0DE59: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C0/C0DE7C.asm:16 LDA #8
    // Overlapping static entry reached from 0xC0DE59.
    case 0xC0DE5B: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0DE7C.asm:17 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC0DE5C: cpu.execute_instruction<0x9D>(0x000F08, 3); return true;
    // src/unknown/C0/C0DE7C.asm:18 LDA @LOCAL00
    case 0xC0DE5F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0DE7C.asm:19 CLC
    case 0xC0DE61: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DE7C.asm:20 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC0DE62: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F8, 2); else cpu.execute_instruction<0x69>(0x000FF8, 3); return true;
    // src/unknown/C0/C0DE7C.asm:20 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC0DE62.
    case 0xC0DE64: cpu.execute_instruction<0x0F>(0x00BDAA, 4); return true;
    // src/unknown/C0/C0DE7C.asm:21 TAX
    case 0xC0DE65: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DE7C.asm:22 LDA __BSS_START__,X
    case 0xC0DE66: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0DE7C.asm:22 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC0DE64.
    case 0xC0DE68: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C0DE7C.asm:23 AND #$FFFF ^ SPRITE_TABLE_10_FLAGS::UNKNOWN11
    case 0xC0DE69: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x00F7FF, 3); return true;
    // src/unknown/C0/C0DE7C.asm:23 AND #$FFFF ^ SPRITE_TABLE_10_FLAGS::UNKNOWN11
    // Overlapping static entry reached from 0xC0DE69.
    case 0xC0DE6B: cpu.execute_instruction<0xF7>(0x00009D, 2); return true;
    // src/unknown/C0/C0DE7C.asm:24 STA __BSS_START__,X
    case 0xC0DE6C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0DE7C.asm:24 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0DE6B.
    case 0xC0DE6D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0DE7C.asm:25 LDA @LOCAL00
    case 0xC0DE6F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0DE7C.asm:26 CLC
    case 0xC0DE71: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DE7C.asm:27 ADC #.LOWORD(ENTITY_COLLIDED_OBJECTS)
    case 0xC0DE72: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00009C, 2); else cpu.execute_instruction<0x69>(0x002C9C, 3); return true;
    // src/unknown/C0/C0DE7C.asm:27 ADC #.LOWORD(ENTITY_COLLIDED_OBJECTS)
    // Overlapping static entry reached from 0xC0DE72.
    case 0xC0DE74: cpu.execute_instruction<0x2C>(0x00BDAA, 3); return true;
    // src/unknown/C0/C0DE7C.asm:28 TAX
    case 0xC0DE75: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DE7C.asm:29 LDA __BSS_START__,X
    case 0xC0DE76: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0DE7C.asm:29 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC0DE74.
    case 0xC0DE77: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0DE7C.asm:30 AND #$7FFF
    case 0xC0DE79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C0DE7C.asm:30 AND #$7FFF
    // Overlapping static entry reached from 0xC0DE79.
    case 0xC0DE7B: cpu.execute_instruction<0x7F>(0x00009D, 4); return true;
    // src/unknown/C0/C0DE7C.asm:31 STA __BSS_START__,X
    case 0xC0DE7C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0DE7C.asm:32 LDA #.LOWORD(-1)
    case 0xC0DE7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0DE7C.asm:32 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0DE7F.
    case 0xC0DE81: cpu.execute_instruction<0xFF>(0x514CAE, 4); return true;
    // src/unknown/C0/C0DE7C.asm:33 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC0DE82: cpu.execute_instruction<0xAE>(0x00514C, 3); return true;
    // src/unknown/C0/C0DE7C.asm:34 STA a:char_struct::unknown55,X
    case 0xC0DE85: cpu.execute_instruction<0x9D>(0x000036, 3); return true;
    // src/unknown/C0/C0DE7C.asm:35 LDA CURRENT_PARTY_MEMBER_TICK
    case 0xC0DE88: cpu.execute_instruction<0xAD>(0x00514C, 3); return true;
    // src/unknown/C0/C0DE7C.asm:36 CLC
    case 0xC0DE8B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DE7C.asm:37 ADC #.SIZEOF(char_struct)
    case 0xC0DE8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005E, 2); else cpu.execute_instruction<0x69>(0x00005E, 3); return true;
    // src/unknown/C0/C0DE7C.asm:37 ADC #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC0DE8C.
    case 0xC0DE8E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0DE7C.asm:38 STA CURRENT_PARTY_MEMBER_TICK
    case 0xC0DE8F: cpu.execute_instruction<0x8D>(0x00514C, 3); return true;
    // src/unknown/C0/C0DE7C.asm:39 INY
    case 0xC0DE92: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0DE7C.asm:41 CPY #MAX_ENTITIES
    case 0xC0DE93: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00001E, 2); else cpu.execute_instruction<0xC0>(0x00001E, 3); return true;
    // src/unknown/C0/C0DE7C.asm:41 CPY #MAX_ENTITIES
    // Overlapping static entry reached from 0xC0DE93.
    case 0xC0DE95: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0DE7C.asm:42 BCC @UNKNOWN0
    case 0xC0DE96: cpu.execute_instruction<0x90>(0x0000BC, 2); return true;
    // src/unknown/C0/C0DE7C.asm:43 JSL CHANGE_MUSIC_5DD6
    case 0xC0DE98: cpu.execute_instruction<0x22>(0xC06C1B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0DE7C.asm:44 END_C_FUNCTION
    case 0xC0DE9C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0DE7C.asm:44 END_C_FUNCTION
    case 0xC0DE9D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0DED9.asm (unresolved).
bool execute_unresolved_c0_c0ded9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0DED9.asm:3 BEGIN_C_FUNCTION
    case 0xC0DE9E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0DED9.asm:13 END_STACK_VARS
    case 0xC0DEA0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0DED9.asm:13 END_STACK_VARS
    case 0xC0DEA1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0DED9.asm:13 END_STACK_VARS
    case 0xC0DEA2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DED9.asm:13 END_STACK_VARS
    case 0xC0DEA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DED9.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DEA3.
    case 0xC0DEA5: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0DED9.asm:13 END_STACK_VARS
    case 0xC0DEA6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0DED9.asm:13 END_STACK_VARS
    case 0xC0DEA7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0DED9.asm:14 STY @LOCAL02
    case 0xC0DEA8: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C0DED9.asm:14 STY @LOCAL02
    // Overlapping static entry reached from 0xC0DEA5.
    case 0xC0DEA9: cpu.execute_instruction<0x12>(0x000086, 2); return true;
    // src/unknown/C0/C0DED9.asm:15 STX @VIRTUAL04
    case 0xC0DEAA: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C0/C0DED9.asm:15 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC0DEA9.
    case 0xC0DEAB: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C0/C0DED9.asm:16 STA @LOCAL01
    case 0xC0DEAC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0DED9.asm:16 STA @LOCAL01
    // Overlapping static entry reached from 0xC0DEAB.
    case 0xC0DEAD: cpu.execute_instruction<0x10>(0x0000A6, 2); return true;
    // src/unknown/C0/C0DED9.asm:17 LDX @PARAM03
    case 0xC0DEAE: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C0/C0DED9.asm:17 LDX @PARAM03
    // Overlapping static entry reached from 0xC0DEAD.
    case 0xC0DEAF: cpu.execute_instruction<0x22>(0xAD0E86, 4); return true;
    // src/unknown/C0/C0DED9.asm:18 STX @LOCAL00
    case 0xC0DEB0: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0DED9.asm:19 LDA PSI_TELEPORT_STATE
    case 0xC0DEB2: cpu.execute_instruction<0xAD>(0x00A145, 3); return true;
    // src/unknown/C0/C0DED9.asm:19 LDA PSI_TELEPORT_STATE
    // Overlapping static entry reached from 0xC0DEAF.
    case 0xC0DEB3: cpu.execute_instruction<0x45>(0x0000A1, 2); return true;
    // src/unknown/C0/C0DED9.asm:20 BEQ @UNKNOWN0
    case 0xC0DEB5: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0DED9.asm:21 LDA #0
    case 0xC0DEB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0DED9.asm:21 LDA #0
    // Overlapping static entry reached from 0xC0DEB7.
    case 0xC0DEB9: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0DED9.asm:22 BRA @UNKNOWN1
    case 0xC0DEBA: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C0/C0DED9.asm:24 LDA #.LOWORD(GAME_STATE) + game_state::current_party_members
    case 0xC0DEBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003A, 2); else cpu.execute_instruction<0xA9>(0x009B3A, 3); return true;
    // src/unknown/C0/C0DED9.asm:24 LDA #.LOWORD(GAME_STATE) + game_state::current_party_members
    // Overlapping static entry reached from 0xC0DEBC.
    case 0xC0DEBE: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0DED9.asm:25 STA @VIRTUAL02
    case 0xC0DEBF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0DED9.asm:26 LDX @VIRTUAL02
    case 0xC0DEC1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0DED9.asm:27 LDA __BSS_START__,X
    case 0xC0DEC3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0DED9.asm:28 TAY
    case 0xC0DEC6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0DED9.asm:29 LDX @VIRTUAL04
    case 0xC0DEC7: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0DED9.asm:30 LDA @LOCAL01
    case 0xC0DEC9: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0DED9.asm:31 JSL UNKNOWN_C05F33
    case 0xC0DECB: cpu.execute_instruction<0x22>(0xC06161, 4); return true;
    // src/unknown/C0/C0DED9.asm:32 STA @VIRTUAL04
    case 0xC0DECF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0DED9.asm:33 LDX @VIRTUAL02
    case 0xC0DED1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0DED9.asm:34 LDA __BSS_START__,X
    case 0xC0DED3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0DED9.asm:35 TAY
    case 0xC0DED6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0DED9.asm:36 LDX @LOCAL00
    case 0xC0DED7: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0DED9.asm:37 LDA @LOCAL02
    case 0xC0DED9: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0DED9.asm:38 JSL UNKNOWN_C05F33
    case 0xC0DEDB: cpu.execute_instruction<0x22>(0xC06161, 4); return true;
    // src/unknown/C0/C0DED9.asm:39 STA @VIRTUAL02
    case 0xC0DEDF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0DED9.asm:40 LDA @VIRTUAL04
    case 0xC0DEE1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0DED9.asm:41 ORA @VIRTUAL02
    case 0xC0DEE3: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0DED9.asm:43 END_C_FUNCTION
    case 0xC0DEE5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0DED9.asm:43 END_C_FUNCTION
    case 0xC0DEE6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0DF22.asm (unresolved).
bool execute_unresolved_c0_c0df22_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0DF22.asm:3 BEGIN_C_FUNCTION
    case 0xC0DEE7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0DF22.asm:8 END_STACK_VARS
    case 0xC0DEE9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0DF22.asm:8 END_STACK_VARS
    case 0xC0DEEA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0DF22.asm:8 END_STACK_VARS
    case 0xC0DEEB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DF22.asm:8 END_STACK_VARS
    case 0xC0DEEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DF22.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DEEC.
    case 0xC0DEEE: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0DF22.asm:8 END_STACK_VARS
    case 0xC0DEEF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0DF22.asm:8 END_STACK_VARS
    case 0xC0DEF0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0DF22.asm:9 STA @LOCAL01
    case 0xC0DEF1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0DF22.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC0DEEE.
    case 0xC0DEF2: cpu.execute_instruction<0x12>(0x0000AD, 2); return true;
    // src/unknown/C0/C0DF22.asm:10 LDA PSI_TELEPORT_STATE
    case 0xC0DEF3: cpu.execute_instruction<0xAD>(0x00A145, 3); return true;
    // src/unknown/C0/C0DF22.asm:10 LDA PSI_TELEPORT_STATE
    // Overlapping static entry reached from 0xC0DEF2.
    case 0xC0DEF4: cpu.execute_instruction<0x45>(0x0000A1, 2); return true;
    // src/unknown/C0/C0DF22.asm:11 CMP #1
    case 0xC0DEF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0DF22.asm:11 CMP #1
    // Overlapping static entry reached from 0xC0DEF6.
    case 0xC0DEF8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0DF22.asm:12 BEQ @UNKNOWN0
    case 0xC0DEF9: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C0DF22.asm:13 CMP #3
    case 0xC0DEFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0DF22.asm:13 CMP #3
    // Overlapping static entry reached from 0xC0DEFB.
    case 0xC0DEFD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0DF22.asm:14 BEQ @UNKNOWN4
    case 0xC0DEFE: cpu.execute_instruction<0xF0>(0x00004D, 2); return true;
    // src/unknown/C0/C0DF22.asm:15 JMP @UNKNOWN8
    case 0xC0DF00: cpu.execute_instruction<0x4C>(0x00DF95, 3); return true;
    // src/unknown/C0/C0DF22.asm:17 LDA GAME_STATE + game_state::unknown92
    case 0xC0DF03: cpu.execute_instruction<0xAD>(0x009B38, 3); return true;
    // src/unknown/C0/C0DF22.asm:18 CMP #3
    case 0xC0DF06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0DF22.asm:18 CMP #3
    // Overlapping static entry reached from 0xC0DF06.
    case 0xC0DF08: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0DF22.asm:19 BNE @UNKNOWN2
    case 0xC0DF09: cpu.execute_instruction<0xD0>(0x000021, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:20 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF0B: cpu.execute_instruction<0xAD>(0x00A147, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:20 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF0E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:20 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF10: cpu.execute_instruction<0xAD>(0x00A149, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:20 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF13: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0DF22.asm:21 CLC
    case 0xC0DF15: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DF22.asm:22 LDA @VIRTUAL06
    case 0xC0DF16: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0DF22.asm:23 ADC #$051E
    case 0xC0DF18: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001E, 2); else cpu.execute_instruction<0x69>(0x00051E, 3); return true;
    // src/unknown/C0/C0DF22.asm:23 ADC #$051E
    // Overlapping static entry reached from 0xC0DF18.
    case 0xC0DF1A: cpu.execute_instruction<0x05>(0x000085, 2); return true;
    // src/unknown/C0/C0DF22.asm:24 STA @VIRTUAL06
    case 0xC0DF1B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0DF22.asm:24 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC0DF1A.
    case 0xC0DF1C: cpu.execute_instruction<0x06>(0x000090, 2); return true;
    // src/unknown/C0/C0DF22.asm:25 BCC @UNKNOWN1
    case 0xC0DF1D: cpu.execute_instruction<0x90>(0x000002, 2); return true;
    // src/unknown/C0/C0DF22.asm:25 BCC @UNKNOWN1
    // Overlapping static entry reached from 0xC0DF1C.
    case 0xC0DF1E: cpu.execute_instruction<0x02>(0x0000E6, 2); return true;
    // src/unknown/C0/C0DF22.asm:26 INC @VIRTUAL06+2
    case 0xC0DF1F: cpu.execute_instruction<0xE6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DF21: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DF23: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DF25: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DF27: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0DF22.asm:29 JMP @UNKNOWN12
    case 0xC0DF29: cpu.execute_instruction<0x4C>(0x00DFDB, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:31 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF2C: cpu.execute_instruction<0xAD>(0x00A147, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:31 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF2F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:31 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF31: cpu.execute_instruction<0xAD>(0x00A149, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:31 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF34: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0DF22.asm:32 CLC
    case 0xC0DF36: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DF22.asm:33 LDA @VIRTUAL06
    case 0xC0DF37: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0DF22.asm:34 ADC #$3333
    case 0xC0DF39: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000033, 2); else cpu.execute_instruction<0x69>(0x003333, 3); return true;
    // src/unknown/C0/C0DF22.asm:34 ADC #$3333
    // Overlapping static entry reached from 0xC0DF39.
    case 0xC0DF3B: cpu.execute_instruction<0x33>(0x000085, 2); return true;
    // src/unknown/C0/C0DF22.asm:35 STA @VIRTUAL06
    case 0xC0DF3C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0DF22.asm:35 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC0DF3B.
    case 0xC0DF3D: cpu.execute_instruction<0x06>(0x000090, 2); return true;
    // src/unknown/C0/C0DF22.asm:36 BCC @UNKNOWN3
    case 0xC0DF3E: cpu.execute_instruction<0x90>(0x000002, 2); return true;
    // src/unknown/C0/C0DF22.asm:36 BCC @UNKNOWN3
    // Overlapping static entry reached from 0xC0DF3D.
    case 0xC0DF3F: cpu.execute_instruction<0x02>(0x0000E6, 2); return true;
    // src/unknown/C0/C0DF22.asm:37 INC @VIRTUAL06+2
    case 0xC0DF40: cpu.execute_instruction<0xE6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:39 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DF42: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:39 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DF44: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:39 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DF46: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:39 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DF48: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0DF22.asm:40 JMP @UNKNOWN12
    case 0xC0DF4A: cpu.execute_instruction<0x4C>(0x00DFDB, 3); return true;
    // src/unknown/C0/C0DF22.asm:42 LDA GAME_STATE + game_state::unknown92
    case 0xC0DF4D: cpu.execute_instruction<0xAD>(0x009B38, 3); return true;
    // src/unknown/C0/C0DF22.asm:43 CMP #3
    case 0xC0DF50: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0DF22.asm:43 CMP #3
    // Overlapping static entry reached from 0xC0DF50.
    case 0xC0DF52: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0DF22.asm:44 BNE @UNKNOWN6
    case 0xC0DF53: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:45 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF55: cpu.execute_instruction<0xAD>(0x00A147, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:45 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF58: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:45 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF5A: cpu.execute_instruction<0xAD>(0x00A149, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:45 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF5D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0DF22.asm:46 SEC
    case 0xC0DF5F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0DF22.asm:47 LDA @VIRTUAL06
    case 0xC0DF60: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0DF22.asm:48 SBC #$1999
    case 0xC0DF62: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000099, 2); else cpu.execute_instruction<0xE9>(0x001999, 3); return true;
    // src/unknown/C0/C0DF22.asm:48 SBC #$1999
    // Overlapping static entry reached from 0xC0DF62.
    case 0xC0DF64: cpu.execute_instruction<0x19>(0x000685, 3); return true;
    // src/unknown/C0/C0DF22.asm:49 STA @VIRTUAL06
    case 0xC0DF65: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0DF22.asm:50 BCS @UNKNOWN5
    case 0xC0DF67: cpu.execute_instruction<0xB0>(0x000002, 2); return true;
    // src/unknown/C0/C0DF22.asm:51 DEC @VIRTUAL06+2
    case 0xC0DF69: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DF6B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DF6D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DF6F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DF71: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0DF22.asm:54 BRA @UNKNOWN12
    case 0xC0DF73: cpu.execute_instruction<0x80>(0x000066, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:56 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF75: cpu.execute_instruction<0xAD>(0x00A147, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:56 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF78: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:56 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF7A: cpu.execute_instruction<0xAD>(0x00A149, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:56 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF7D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0DF22.asm:57 SEC
    case 0xC0DF7F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0DF22.asm:58 LDA @VIRTUAL06
    case 0xC0DF80: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0DF22.asm:59 SBC #$1999
    case 0xC0DF82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000099, 2); else cpu.execute_instruction<0xE9>(0x001999, 3); return true;
    // src/unknown/C0/C0DF22.asm:59 SBC #$1999
    // Overlapping static entry reached from 0xC0DF82.
    case 0xC0DF84: cpu.execute_instruction<0x19>(0x000685, 3); return true;
    // src/unknown/C0/C0DF22.asm:60 STA @VIRTUAL06
    case 0xC0DF85: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0DF22.asm:61 BCS @UNKNOWN7
    case 0xC0DF87: cpu.execute_instruction<0xB0>(0x000002, 2); return true;
    // src/unknown/C0/C0DF22.asm:62 DEC @VIRTUAL06+2
    case 0xC0DF89: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DF8B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DF8D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DF8F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DF91: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0DF22.asm:65 BRA @UNKNOWN12
    case 0xC0DF93: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/unknown/C0/C0DF22.asm:67 LDA GAME_STATE + game_state::unknown92
    case 0xC0DF95: cpu.execute_instruction<0xAD>(0x009B38, 3); return true;
    // src/unknown/C0/C0DF22.asm:68 CMP #3
    case 0xC0DF98: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0DF22.asm:68 CMP #3
    // Overlapping static entry reached from 0xC0DF98.
    case 0xC0DF9A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0DF22.asm:69 BNE @UNKNOWN10
    case 0xC0DF9B: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:70 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF9D: cpu.execute_instruction<0xAD>(0x00A147, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:70 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DFA0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:70 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DFA2: cpu.execute_instruction<0xAD>(0x00A149, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:70 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DFA5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0DF22.asm:71 CLC
    case 0xC0DFA7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DF22.asm:72 LDA @VIRTUAL06
    case 0xC0DFA8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0DF22.asm:73 ADC #$29FB
    case 0xC0DFAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000FB, 2); else cpu.execute_instruction<0x69>(0x0029FB, 3); return true;
    // src/unknown/C0/C0DF22.asm:73 ADC #$29FB
    // Overlapping static entry reached from 0xC0DFAA.
    case 0xC0DFAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000085, 2); else cpu.execute_instruction<0x29>(0x000685, 3); return true;
    // src/unknown/C0/C0DF22.asm:74 STA @VIRTUAL06
    case 0xC0DFAD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0DF22.asm:74 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC0DFAC.
    case 0xC0DFAE: cpu.execute_instruction<0x06>(0x000090, 2); return true;
    // src/unknown/C0/C0DF22.asm:75 BCC @UNKNOWN9
    case 0xC0DFAF: cpu.execute_instruction<0x90>(0x000002, 2); return true;
    // src/unknown/C0/C0DF22.asm:75 BCC @UNKNOWN9
    // Overlapping static entry reached from 0xC0DFAE.
    case 0xC0DFB0: cpu.execute_instruction<0x02>(0x0000E6, 2); return true;
    // src/unknown/C0/C0DF22.asm:76 INC @VIRTUAL06+2
    case 0xC0DFB1: cpu.execute_instruction<0xE6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DFB3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DFB5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DFB7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DFB9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0DF22.asm:79 BRA @UNKNOWN12
    case 0xC0DFBB: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:81 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DFBD: cpu.execute_instruction<0xAD>(0x00A147, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:81 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DFC0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:81 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DFC2: cpu.execute_instruction<0xAD>(0x00A149, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:81 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DFC5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0DF22.asm:82 CLC
    case 0xC0DFC7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DF22.asm:83 LDA @VIRTUAL06
    case 0xC0DFC8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0DF22.asm:84 ADC #$1851
    case 0xC0DFCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000051, 2); else cpu.execute_instruction<0x69>(0x001851, 3); return true;
    // src/unknown/C0/C0DF22.asm:84 ADC #$1851
    // Overlapping static entry reached from 0xC0DFCA.
    case 0xC0DFCC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DF22.asm:85 STA @VIRTUAL06
    case 0xC0DFCD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0DF22.asm:86 BCC @UNKNOWN11
    case 0xC0DFCF: cpu.execute_instruction<0x90>(0x000002, 2); return true;
    // src/unknown/C0/C0DF22.asm:87 INC @VIRTUAL06+2
    case 0xC0DFD1: cpu.execute_instruction<0xE6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:89 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DFD3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:89 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DFD5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:89 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DFD7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:89 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DFD9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:91 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0DFDB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:91 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0DFDD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:91 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0DFDF: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:91 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0DFE1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:92 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED
    case 0xC0DFE3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:92 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED
    case 0xC0DFE5: cpu.execute_instruction<0x8D>(0x00A147, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:92 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED
    case 0xC0DFE8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:92 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED
    case 0xC0DFEA: cpu.execute_instruction<0x8D>(0x00A149, 3); return true;
    // src/unknown/C0/C0DF22.asm:93 LDA @LOCAL01
    case 0xC0DFED: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0DF22.asm:94 AND #$0001
    case 0xC0DFEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0DF22.asm:94 AND #$0001
    // Overlapping static entry reached from 0xC0DFEF.
    case 0xC0DFF1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0DF22.asm:95 BEQ @UNKNOWN15
    case 0xC0DFF2: cpu.execute_instruction<0xF0>(0x000050, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:96 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0DFF4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:96 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0DFF6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:96 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0DFF8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:96 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0DFFA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/unknown/C0/C0DF22.asm:97 ASR8_INT @VIRTUAL06
    case 0xC0DFFC: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/unknown/C0/C0DF22.asm:97 ASR8_INT @VIRTUAL06
    case 0xC0DFFE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0DF22.asm:97 ASR8_INT @VIRTUAL06
    case 0xC0E000: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:97 ASR8_INT @VIRTUAL06
    case 0xC0E002: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:97 ASR8_INT @VIRTUAL06
    case 0xC0E004: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0DF22.asm:97 ASR8_INT @VIRTUAL06
    case 0xC0E006: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/unknown/C0/C0DF22.asm:97 ASR8_INT @VIRTUAL06
    case 0xC0E008: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/unknown/C0/C0DF22.asm:97 ASR8_INT @VIRTUAL06
    case 0xC0E00A: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0DF22.asm:97 ASR8_INT @VIRTUAL06
    case 0xC0E00C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:98 MOVE_INT_CONSTANT $B505, @VIRTUAL0A
    case 0xC0E00E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x00B505, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:98 MOVE_INT_CONSTANT $B505, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0E00E.
    case 0xC0E010: cpu.execute_instruction<0xB5>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:98 MOVE_INT_CONSTANT $B505, @VIRTUAL0A
    case 0xC0E011: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:98 MOVE_INT_CONSTANT $B505, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0E010.
    case 0xC0E012: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:98 MOVE_INT_CONSTANT $B505, @VIRTUAL0A
    case 0xC0E013: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:98 MOVE_INT_CONSTANT $B505, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0E013.
    case 0xC0E015: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:98 MOVE_INT_CONSTANT $B505, @VIRTUAL0A
    case 0xC0E016: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0DF22.asm:99 JSL MULT32
    case 0xC0E018: cpu.execute_instruction<0x22>(0xC09068, 4); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/unknown/C0/C0DF22.asm:100 ASR8_INT @VIRTUAL06
    case 0xC0E01C: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/unknown/C0/C0DF22.asm:100 ASR8_INT @VIRTUAL06
    case 0xC0E01E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0DF22.asm:100 ASR8_INT @VIRTUAL06
    case 0xC0E020: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:100 ASR8_INT @VIRTUAL06
    case 0xC0E022: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:100 ASR8_INT @VIRTUAL06
    case 0xC0E024: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0DF22.asm:100 ASR8_INT @VIRTUAL06
    case 0xC0E026: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/unknown/C0/C0DF22.asm:100 ASR8_INT @VIRTUAL06
    case 0xC0E028: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/unknown/C0/C0DF22.asm:100 ASR8_INT @VIRTUAL06
    case 0xC0E02A: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0DF22.asm:100 ASR8_INT @VIRTUAL06
    case 0xC0E02C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:101 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E02E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:101 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E030: cpu.execute_instruction<0x8D>(0x00A14B, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:101 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E033: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:101 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E035: cpu.execute_instruction<0x8D>(0x00A14D, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:102 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E038: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:102 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E03A: cpu.execute_instruction<0x8D>(0x00A14F, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:102 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E03D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:102 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E03F: cpu.execute_instruction<0x8D>(0x00A151, 3); return true;
    // src/unknown/C0/C0DF22.asm:103 BRA @UNKNOWN16
    case 0xC0E042: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:105 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0E044: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:105 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0E046: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:105 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0E048: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:105 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0E04A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:106 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E04C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:106 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E04E: cpu.execute_instruction<0x8D>(0x00A14F, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:106 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E051: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:106 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E053: cpu.execute_instruction<0x8D>(0x00A151, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:107 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E056: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:107 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E058: cpu.execute_instruction<0x8D>(0x00A14B, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:107 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E05B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:107 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E05D: cpu.execute_instruction<0x8D>(0x00A14D, 3); return true;
    // src/unknown/C0/C0DF22.asm:109 LDA @LOCAL01
    case 0xC0E060: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0DF22.asm:110 BEQ @UNKNOWN19
    case 0xC0E062: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/unknown/C0/C0DF22.asm:111 CMP #4
    case 0xC0E064: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0DF22.asm:111 CMP #4
    // Overlapping static entry reached from 0xC0E064.
    case 0xC0E066: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0DF22.asm:112 BEQ @UNKNOWN20
    case 0xC0E067: cpu.execute_instruction<0xF0>(0x000045, 2); return true;
    // src/unknown/C0/C0DF22.asm:113 CMP #6
    case 0xC0E069: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C0DF22.asm:113 CMP #6
    // Overlapping static entry reached from 0xC0E069.
    case 0xC0E06B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0DF22.asm:114 BEQ @UNKNOWN21
    case 0xC0E06C: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // src/unknown/C0/C0DF22.asm:115 CMP #2
    case 0xC0E06E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0DF22.asm:115 CMP #2
    // Overlapping static entry reached from 0xC0E06E.
    case 0xC0E070: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0DF22.asm:116 BEQ @UNKNOWN22
    case 0xC0E071: cpu.execute_instruction<0xF0>(0x00006D, 2); return true;
    // src/unknown/C0/C0DF22.asm:117 CMP #1
    case 0xC0E073: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0DF22.asm:117 CMP #1
    // Overlapping static entry reached from 0xC0E073.
    case 0xC0E075: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0DF22.asm:118 BEQ @UNKNOWN23
    case 0xC0E076: cpu.execute_instruction<0xF0>(0x000076, 2); return true;
    // src/unknown/C0/C0DF22.asm:119 CMP #7
    case 0xC0E078: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C0DF22.asm:119 CMP #7
    // Overlapping static entry reached from 0xC0E078.
    case 0xC0E07A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0DF22.asm:120 BEQL @UNKNOWN24
    case 0xC0E07B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0DF22.asm:120 BEQL @UNKNOWN24
    case 0xC0E07D: cpu.execute_instruction<0x4C>(0x00E113, 3); return true;
    // src/unknown/C0/C0DF22.asm:121 CMP #5
    case 0xC0E080: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C0/C0DF22.asm:121 CMP #5
    // Overlapping static entry reached from 0xC0E080.
    case 0xC0E082: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0DF22.asm:122 BEQL @UNKNOWN25
    case 0xC0E083: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0DF22.asm:122 BEQL @UNKNOWN25
    case 0xC0E085: cpu.execute_instruction<0x4C>(0x00E136, 3); return true;
    // src/unknown/C0/C0DF22.asm:123 JMP @UNKNOWN26
    case 0xC0E088: cpu.execute_instruction<0x4C>(0x00E159, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:125 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E08B: cpu.execute_instruction<0xAD>(0x00A14F, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:125 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E08E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:125 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E090: cpu.execute_instruction<0xAD>(0x00A151, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:125 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E093: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0DF22.asm:126 SEC
    case 0xC0E095: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:127 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E096: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:127 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0E096.
    case 0xC0E098: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0DF22.asm:127 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E099: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:127 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E09B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:127 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E09D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:127 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0E09D.
    case 0xC0E09F: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0DF22.asm:127 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E0A0: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:127 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E0A2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:128 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E0A4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:128 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E0A6: cpu.execute_instruction<0x8D>(0x00A14F, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:128 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E0A9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:128 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E0AB: cpu.execute_instruction<0x8D>(0x00A151, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:130 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED_X
    case 0xC0E0AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:130 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED_X
    // Overlapping static entry reached from 0xC0E0AE.
    case 0xC0E0B0: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:130 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED_X
    case 0xC0E0B1: cpu.execute_instruction<0x8D>(0x00A14B, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:130 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED_X
    case 0xC0E0B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:130 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED_X
    // Overlapping static entry reached from 0xC0E0B4.
    case 0xC0E0B6: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:130 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED_X
    case 0xC0E0B7: cpu.execute_instruction<0x8D>(0x00A14D, 3); return true;
    // src/unknown/C0/C0DF22.asm:131 JMP @UNKNOWN26
    case 0xC0E0BA: cpu.execute_instruction<0x4C>(0x00E159, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:133 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL06
    case 0xC0E0BD: cpu.execute_instruction<0xAD>(0x00A14B, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:133 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL06
    case 0xC0E0C0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:133 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL06
    case 0xC0E0C2: cpu.execute_instruction<0xAD>(0x00A14D, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:133 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL06
    case 0xC0E0C5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0DF22.asm:134 SEC
    case 0xC0E0C7: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:135 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E0C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:135 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0E0C8.
    case 0xC0E0CA: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0DF22.asm:135 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E0CB: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:135 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E0CD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:135 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E0CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:135 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0E0CF.
    case 0xC0E0D1: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0DF22.asm:135 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E0D2: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:135 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E0D4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:136 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E0D6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:136 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E0D8: cpu.execute_instruction<0x8D>(0x00A14B, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:136 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E0DB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:136 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E0DD: cpu.execute_instruction<0x8D>(0x00A14D, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:138 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED_Y
    case 0xC0E0E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:138 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED_Y
    // Overlapping static entry reached from 0xC0E0E0.
    case 0xC0E0E2: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:138 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED_Y
    case 0xC0E0E3: cpu.execute_instruction<0x8D>(0x00A14F, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:138 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED_Y
    case 0xC0E0E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:138 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED_Y
    // Overlapping static entry reached from 0xC0E0E6.
    case 0xC0E0E8: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:138 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED_Y
    case 0xC0E0E9: cpu.execute_instruction<0x8D>(0x00A151, 3); return true;
    // src/unknown/C0/C0DF22.asm:139 BRA @UNKNOWN26
    case 0xC0E0EC: cpu.execute_instruction<0x80>(0x00006B, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:141 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E0EE: cpu.execute_instruction<0xAD>(0x00A14F, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:141 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E0F1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:141 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E0F3: cpu.execute_instruction<0xAD>(0x00A151, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:141 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E0F6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0DF22.asm:142 SEC
    case 0xC0E0F8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:143 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E0F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:143 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0E0F9.
    case 0xC0E0FB: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0DF22.asm:143 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E0FC: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:143 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E0FE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:143 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E100: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:143 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0E100.
    case 0xC0E102: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0DF22.asm:143 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E103: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:143 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E105: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:144 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E107: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:144 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E109: cpu.execute_instruction<0x8D>(0x00A14F, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:144 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E10C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:144 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E10E: cpu.execute_instruction<0x8D>(0x00A151, 3); return true;
    // src/unknown/C0/C0DF22.asm:145 BRA @UNKNOWN26
    case 0xC0E111: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:147 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E113: cpu.execute_instruction<0xAD>(0x00A14F, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:147 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E116: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:147 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E118: cpu.execute_instruction<0xAD>(0x00A151, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:147 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E11B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0DF22.asm:148 SEC
    case 0xC0E11D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:149 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E11E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:149 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0E11E.
    case 0xC0E120: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0DF22.asm:149 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E121: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:149 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E123: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:149 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E125: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:149 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0E125.
    case 0xC0E127: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0DF22.asm:149 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E128: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:149 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E12A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:150 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E12C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:150 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E12E: cpu.execute_instruction<0x8D>(0x00A14F, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:150 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E131: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:150 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E133: cpu.execute_instruction<0x8D>(0x00A151, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:152 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL06
    case 0xC0E136: cpu.execute_instruction<0xAD>(0x00A14B, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:152 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL06
    case 0xC0E139: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:152 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL06
    case 0xC0E13B: cpu.execute_instruction<0xAD>(0x00A14D, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:152 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL06
    case 0xC0E13E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0DF22.asm:153 SEC
    case 0xC0E140: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:154 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E141: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:154 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0E141.
    case 0xC0E143: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0DF22.asm:154 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E144: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:154 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E146: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:154 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E148: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:154 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0E148.
    case 0xC0E14A: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0DF22.asm:154 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E14B: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:154 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E14D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:155 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E14F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:155 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E151: cpu.execute_instruction<0x8D>(0x00A14B, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:155 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E154: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:155 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E156: cpu.execute_instruction<0x8D>(0x00A14D, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0DF22.asm:157 END_C_FUNCTION
    case 0xC0E159: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0DF22.asm:157 END_C_FUNCTION
    case 0xC0E15A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E196.asm (unresolved).
bool execute_unresolved_c0_c0e196_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E196.asm:3 BEGIN_C_FUNCTION
    case 0xC0E15B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E196.asm:9 END_STACK_VARS
    case 0xC0E15D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E196.asm:9 END_STACK_VARS
    case 0xC0E15E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E196.asm:9 END_STACK_VARS
    case 0xC0E15F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E196.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E15F.
    case 0xC0E161: cpu.execute_instruction<0xFF>(0x2EA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E196.asm:9 END_STACK_VARS
    case 0xC0E162: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E196.asm:10 LDA #.LOWORD(GAME_STATE) + game_state::unknown88
    case 0xC0E163: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002E, 2); else cpu.execute_instruction<0xA9>(0x009B2E, 3); return true;
    // src/unknown/C0/C0E196.asm:10 LDA #.LOWORD(GAME_STATE) + game_state::unknown88
    // Overlapping static entry reached from 0xC0E163.
    case 0xC0E165: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0E196.asm:11 STA @VIRTUAL04
    case 0xC0E166: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0E196.asm:12 STA @LOCAL03
    case 0xC0E168: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0E196.asm:13 LDX @VIRTUAL04
    case 0xC0E16A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0E196.asm:14 LDA __BSS_START__,X
    case 0xC0E16C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C0/C0E196.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E16F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C0/C0E196.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E171: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C0/C0E196.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E172: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C0/C0E196.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E174: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C0/C0E196.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E175: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0E196.asm:16 CLC
    case 0xC0E176: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E196.asm:17 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC0E177: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0054DC, 3); return true;
    // src/unknown/C0/C0E196.asm:17 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC0E177.
    case 0xC0E179: cpu.execute_instruction<0x54>(0x000285, 3); return true;
    // src/unknown/C0/C0E196.asm:18 STA @VIRTUAL02
    case 0xC0E17A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0E196.asm:19 LDA #.LOWORD(GAME_STATE) + game_state::leader_x_coord
    case 0xC0E17C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x009B28, 3); return true;
    // src/unknown/C0/C0E196.asm:19 LDA #.LOWORD(GAME_STATE) + game_state::leader_x_coord
    // Overlapping static entry reached from 0xC0E17C.
    case 0xC0E17E: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0E196.asm:20 STA @LOCAL02
    case 0xC0E17F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0E196.asm:21 TAX
    case 0xC0E181: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E196.asm:22 LDA __BSS_START__,X
    case 0xC0E182: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0E196.asm:23 LDX @VIRTUAL02
    case 0xC0E185: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E196.asm:24 STA a:player_position_buffer_entry::x_coord,X
    case 0xC0E187: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0E196.asm:25 LDX #.LOWORD(GAME_STATE) + game_state::leader_y_coord
    case 0xC0E18A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00002C, 2); else cpu.execute_instruction<0xA2>(0x009B2C, 3); return true;
    // src/unknown/C0/C0E196.asm:25 LDX #.LOWORD(GAME_STATE) + game_state::leader_y_coord
    // Overlapping static entry reached from 0xC0E18A.
    case 0xC0E18C: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0E196.asm:26 STX @LOCAL01
    case 0xC0E18D: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0E196.asm:27 LDA __BSS_START__,X
    case 0xC0E18F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0E196.asm:28 LDX @VIRTUAL02
    case 0xC0E192: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E196.asm:29 STA a:player_position_buffer_entry::y_coord,X
    case 0xC0E194: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/unknown/C0/C0E196.asm:30 LDY GAME_STATE+game_state::current_party_members
    case 0xC0E197: cpu.execute_instruction<0xAC>(0x009B3A, 3); return true;
    // src/unknown/C0/C0E196.asm:31 LDX @LOCAL01
    case 0xC0E19A: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0E196.asm:32 LDA __BSS_START__,X
    case 0xC0E19C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0E196.asm:33 TAX
    case 0xC0E19F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E196.asm:34 STX @LOCAL00
    case 0xC0E1A0: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0E196.asm:35 LDA @LOCAL02
    case 0xC0E1A2: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0E196.asm:36 TAX
    case 0xC0E1A4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E196.asm:37 LDA __BSS_START__,X
    case 0xC0E1A5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0E196.asm:38 LDX @LOCAL00
    case 0xC0E1A8: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0E196.asm:39 JSL UNKNOWN_C05F33
    case 0xC0E1AA: cpu.execute_instruction<0x22>(0xC06161, 4); return true;
    // src/unknown/C0/C0E196.asm:40 LDX @VIRTUAL02
    case 0xC0E1AE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E196.asm:41 STA a:player_position_buffer_entry::tile_flags,X
    case 0xC0E1B0: cpu.execute_instruction<0x9D>(0x000004, 3); return true;
    // src/unknown/C0/C0E196.asm:42 LDX @VIRTUAL02
    case 0xC0E1B3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E196.asm:43 STZ a:player_position_buffer_entry::walking_style,X
    case 0xC0E1B5: cpu.execute_instruction<0x9E>(0x000006, 3); return true;
    // src/unknown/C0/C0E196.asm:44 LDA GAME_STATE+game_state::leader_direction
    case 0xC0E1B8: cpu.execute_instruction<0xAD>(0x009B30, 3); return true;
    // src/unknown/C0/C0E196.asm:45 LDX @VIRTUAL02
    case 0xC0E1BB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E196.asm:46 STA a:player_position_buffer_entry::direction,X
    case 0xC0E1BD: cpu.execute_instruction<0x9D>(0x000008, 3); return true;
    // src/unknown/C0/C0E196.asm:47 LDA @LOCAL03
    case 0xC0E1C0: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0E196.asm:48 STA @VIRTUAL04
    case 0xC0E1C2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0E196.asm:49 LDX @VIRTUAL04
    case 0xC0E1C4: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0E196.asm:50 LDA __BSS_START__,X
    case 0xC0E1C6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0E196.asm:51 INC
    case 0xC0E1C9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0E196.asm:52 LDX @VIRTUAL04
    case 0xC0E1CA: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0E196.asm:53 STA __BSS_START__,X
    case 0xC0E1CC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0E196.asm:54 AND #$00FF
    case 0xC0E1CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0E196.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC0E1CF.
    case 0xC0E1D1: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C0E196.asm:55 LDX @VIRTUAL04
    case 0xC0E1D2: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0E196.asm:56 STA __BSS_START__,X
    case 0xC0E1D4: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E196.asm:57 END_C_FUNCTION
    case 0xC0E1D7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0E196.asm:57 END_C_FUNCTION
    case 0xC0E1D8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E214.asm (unresolved).
bool execute_unresolved_c0_c0e214_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E214.asm:3 BEGIN_C_FUNCTION
    case 0xC0E1D9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E214.asm:8 END_STACK_VARS
    case 0xC0E1DB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0E214.asm:8 END_STACK_VARS
    case 0xC0E1DC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E214.asm:8 END_STACK_VARS
    case 0xC0E1DD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E214.asm:8 END_STACK_VARS
    case 0xC0E1DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E214.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E1DE.
    case 0xC0E1E0: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E214.asm:8 END_STACK_VARS
    case 0xC0E1E1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0E214.asm:8 END_STACK_VARS
    case 0xC0E1E2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0E214.asm:9 STA @VIRTUAL02
    case 0xC0E1E3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0E214.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC0E1E0.
    case 0xC0E1E4: cpu.execute_instruction<0x02>(0x00009B, 2); return true;
    // src/unknown/C0/C0E214.asm:10 TXY
    case 0xC0E1E5: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0E214.asm:11 TXA
    case 0xC0E1E6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0E214.asm:12 INC
    case 0xC0E1E7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0E214.asm:13 AND #$00FF
    case 0xC0E1E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0E214.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC0E1E8.
    case 0xC0E1EA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0E214.asm:14 STA @LOCAL01
    case 0xC0E1EB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0E214.asm:15 LDA @VIRTUAL02
    case 0xC0E1ED: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E214.asm:16 STA @VIRTUAL04
    case 0xC0E1EF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0E214.asm:17 INC @VIRTUAL04
    case 0xC0E1F1: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C0/C0E214.asm:18 LDA GAME_STATE + game_state::unknown96
    case 0xC0E1F3: cpu.execute_instruction<0xAD>(0x009B3C, 3); return true;
    // src/unknown/C0/C0E214.asm:19 AND #$00FF
    case 0xC0E1F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0E214.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC0E1F6.
    case 0xC0E1F8: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C0/C0E214.asm:20 CMP @VIRTUAL04
    case 0xC0E1F9: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C0/C0E214.asm:21 BNE @UNKNOWN0
    case 0xC0E1FB: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C0/C0E214.asm:22 LDA @LOCAL01
    case 0xC0E1FD: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0E214.asm:23 BRA @UNKNOWN2
    case 0xC0E1FF: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C0/C0E214.asm:25 LDA PSI_TELEPORT_SPEED + fixed_point::integer
    case 0xC0E201: cpu.execute_instruction<0xAD>(0x00A149, 3); return true;
    // src/unknown/C0/C0E214.asm:26 BNE @UNKNOWN1
    case 0xC0E204: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C0E214.asm:27 TYA
    case 0xC0E206: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0E214.asm:28 BRA @UNKNOWN2
    case 0xC0E207: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C0/C0E214.asm:30 LDA #2
    case 0xC0E209: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0E214.asm:30 LDA #2
    // Overlapping static entry reached from 0xC0E209.
    case 0xC0E20B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0E214.asm:31 STA @LOCAL00
    case 0xC0E20C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0E214.asm:32 LDX #6
    case 0xC0E20E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/unknown/C0/C0E214.asm:32 LDX #6
    // Overlapping static entry reached from 0xC0E20E.
    case 0xC0E210: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C0E214.asm:33 LDA @VIRTUAL02
    case 0xC0E211: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E214.asm:34 JSL UNKNOWN_C03EC3
    case 0xC0E213: cpu.execute_instruction<0x22>(0xC04140, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E214.asm:36 END_C_FUNCTION
    case 0xC0E217: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0E214.asm:36 END_C_FUNCTION
    case 0xC0E218: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E254.asm (unresolved).
bool execute_unresolved_c0_c0e254_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E254.asm:3 BEGIN_C_FUNCTION
    case 0xC0E219: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E254.asm:7 END_STACK_VARS
    case 0xC0E21B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E254.asm:7 END_STACK_VARS
    case 0xC0E21C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E254.asm:7 END_STACK_VARS
    case 0xC0E21D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E254.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E21D.
    case 0xC0E21F: cpu.execute_instruction<0xFF>(0x0CA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E254.asm:7 END_STACK_VARS
    case 0xC0E220: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E254.asm:8 LDA #12
    case 0xC0E221: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C0/C0E254.asm:8 LDA #12
    // Overlapping static entry reached from 0xC0E230.
    case 0xC0E222: cpu.execute_instruction<0x0C>(0x003800, 3); return true;
    // src/unknown/C0/C0E254.asm:8 LDA #12
    // Overlapping static entry reached from 0xC0E221.
    case 0xC0E223: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C0/C0E254.asm:9 SEC
    case 0xC0E224: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0E254.asm:10 SBC PSI_TELEPORT_SPEED + fixed_point::integer
    case 0xC0E225: cpu.execute_instruction<0xED>(0x00A149, 3); return true;
    // src/unknown/C0/C0E254.asm:11 TAX
    case 0xC0E228: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E254.asm:12 STX @LOCAL01
    case 0xC0E229: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0E254.asm:13 BEQ @UNKNOWN0
    case 0xC0E22B: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0E254.asm:14 TXA
    case 0xC0E22D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0E254.asm:15 AND #$8000
    case 0xC0E22E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C0E254.asm:15 AND #$8000
    // Overlapping static entry reached from 0xC0E22E.
    case 0xC0E230: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E254.asm:16 BEQ @UNKNOWN1
    case 0xC0E231: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0E254.asm:18 LDX #1
    case 0xC0E233: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C0E254.asm:18 LDX #1
    // Overlapping static entry reached from 0xC0E233.
    case 0xC0E235: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C0E254.asm:19 STX @LOCAL01
    case 0xC0E236: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0E254.asm:21 LDA #24
    case 0xC0E238: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C0E254.asm:21 LDA #24
    // Overlapping static entry reached from 0xC0E238.
    case 0xC0E23A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0E254.asm:22 STA @LOCAL00
    case 0xC0E23B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0E254.asm:23 BRA @UNKNOWN3
    case 0xC0E23D: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C0/C0E254.asm:25 LDX @LOCAL01
    case 0xC0E23F: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0E254.asm:26 PHX
    case 0xC0E241: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C0E254.asm:27 ASL
    case 0xC0E242: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0E254.asm:28 TAX
    case 0xC0E243: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E254.asm:29 PLA
    case 0xC0E244: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0E254.asm:30 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC0E245: cpu.execute_instruction<0x9D>(0x000F08, 3); return true;
    // src/unknown/C0/C0E254.asm:31 LDA @LOCAL00
    case 0xC0E248: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0E254.asm:32 INC
    case 0xC0E24A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0E254.asm:33 STA @LOCAL00
    case 0xC0E24B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0E254.asm:35 CMP #29
    case 0xC0E24D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001D, 2); else cpu.execute_instruction<0xC9>(0x00001D, 3); return true;
    // src/unknown/C0/C0E254.asm:35 CMP #29
    // Overlapping static entry reached from 0xC0E24D.
    case 0xC0E24F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0E254.asm:36 BCC @UNKNOWN2
    case 0xC0E250: cpu.execute_instruction<0x90>(0x0000ED, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E254.asm:37 END_C_FUNCTION
    case 0xC0E252: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0E254.asm:37 END_C_FUNCTION
    case 0xC0E253: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E28F.asm (unresolved).
bool execute_unresolved_c0_c0e28f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E28F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0E254: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E28F.asm:10 END_STACK_VARS
    case 0xC0E256: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E28F.asm:10 END_STACK_VARS
    case 0xC0E257: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E28F.asm:10 END_STACK_VARS
    case 0xC0E258: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E28F.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E258.
    case 0xC0E25A: cpu.execute_instruction<0xFF>(0x01A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E28F.asm:10 END_STACK_VARS
    case 0xC0E25B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E28F.asm:11 LDA #1
    case 0xC0E25C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0E28F.asm:11 LDA #1
    // Overlapping static entry reached from 0xC0E25C.
    case 0xC0E25E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E28F.asm:12 STA GAME_STATE + game_state::unknown90
    case 0xC0E25F: cpu.execute_instruction<0x8D>(0x009B36, 3); return true;
    // src/unknown/C0/C0E28F.asm:13 LDA #0
    case 0xC0E262: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0E28F.asm:13 LDA #0
    // Overlapping static entry reached from 0xC0E262.
    case 0xC0E264: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0E28F.asm:14 JSL MAP_INPUT_TO_DIRECTION
    case 0xC0E265: cpu.execute_instruction<0x22>(0xC042D6, 4); return true;
    // src/unknown/C0/C0E28F.asm:15 STA @VIRTUAL02
    case 0xC0E269: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0E28F.asm:16 LDA GAME_STATE+game_state::leader_direction
    case 0xC0E26B: cpu.execute_instruction<0xAD>(0x009B30, 3); return true;
    // src/unknown/C0/C0E28F.asm:17 STA @LOCAL04
    case 0xC0E26E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0E28F.asm:18 LDA @VIRTUAL02
    case 0xC0E270: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E28F.asm:19 EOR #$0004
    case 0xC0E272: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000004, 2); else cpu.execute_instruction<0x49>(0x000004, 3); return true;
    // src/unknown/C0/C0E28F.asm:19 EOR #$0004
    // Overlapping static entry reached from 0xC0E272.
    case 0xC0E274: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0E28F.asm:20 STA @VIRTUAL04
    case 0xC0E275: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0E28F.asm:21 LDA @LOCAL04
    case 0xC0E277: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0E28F.asm:22 CMP @VIRTUAL04
    case 0xC0E279: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C0/C0E28F.asm:23 BNE @UNKNOWN0
    case 0xC0E27B: cpu.execute_instruction<0xD0>(0x000002, 2); return true;
    // src/unknown/C0/C0E28F.asm:24 STA @VIRTUAL02
    case 0xC0E27D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0E28F.asm:26 LDA @VIRTUAL02
    case 0xC0E27F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E28F.asm:27 CMP #.LOWORD(-1)
    case 0xC0E281: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0E28F.asm:27 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0E281.
    case 0xC0E283: cpu.execute_instruction<0xFF>(0xAD05D0, 4); return true;
    // src/unknown/C0/C0E28F.asm:28 BNE @UNKNOWN1
    case 0xC0E284: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0E28F.asm:29 LDA GAME_STATE+game_state::leader_direction
    case 0xC0E286: cpu.execute_instruction<0xAD>(0x009B30, 3); return true;
    // src/unknown/C0/C0E28F.asm:29 LDA GAME_STATE+game_state::leader_direction
    // Overlapping static entry reached from 0xC0E283.
    case 0xC0E287: cpu.execute_instruction<0x30>(0x00009B, 2); return true;
    // src/unknown/C0/C0E28F.asm:30 STA @VIRTUAL02
    case 0xC0E289: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0E28F.asm:32 LDA @VIRTUAL02
    case 0xC0E28B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E28F.asm:33 STA GAME_STATE+game_state::leader_direction
    case 0xC0E28D: cpu.execute_instruction<0x8D>(0x009B30, 3); return true;
    // src/unknown/C0/C0E28F.asm:34 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0E290: cpu.execute_instruction<0xAD>(0x0060E6, 3); return true;
    // src/unknown/C0/C0E28F.asm:35 BEQ @UNKNOWN2
    case 0xC0E293: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C0E28F.asm:36 LDA #2
    case 0xC0E295: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0E28F.asm:36 LDA #2
    // Overlapping static entry reached from 0xC0E295.
    case 0xC0E297: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E28F.asm:37 STA PSI_TELEPORT_STATE
    case 0xC0E298: cpu.execute_instruction<0x8D>(0x00A145, 3); return true;
    // src/unknown/C0/C0E28F.asm:38 LDA #1
    case 0xC0E29B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0E28F.asm:38 LDA #1
    // Overlapping static entry reached from 0xC0E29B.
    case 0xC0E29D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E28F.asm:39 STA BATTLE_MODE
    case 0xC0E29E: cpu.execute_instruction<0x8D>(0x005148, 3); return true;
    // src/unknown/C0/C0E28F.asm:41 LDA @VIRTUAL02
    case 0xC0E2A1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E28F.asm:42 JSR UNKNOWN_C0DF22
    case 0xC0E2A3: cpu.execute_instruction<0x20>(0x00DEE7, 3); return true;
    // src/unknown/C0/C0E28F.asm:43 LDA GAME_STATE + game_state::unknown80
    case 0xC0E2A6: cpu.execute_instruction<0xAD>(0x009B26, 3); return true;
    // src/unknown/C0/C0E28F.asm:44 STA @VIRTUAL0A
    case 0xC0E2A9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C0E28F.asm:45 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0E2AB: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C0E28F.asm:46 STA @VIRTUAL0A+2
    case 0xC0E2AE: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E28F.asm:47 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL06
    case 0xC0E2B0: cpu.execute_instruction<0xAD>(0x00A14B, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E28F.asm:47 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL06
    case 0xC0E2B3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E28F.asm:47 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL06
    case 0xC0E2B5: cpu.execute_instruction<0xAD>(0x00A14D, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E28F.asm:47 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL06
    case 0xC0E2B8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0E28F.asm:48 CLC
    case 0xC0E2BA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C0E28F.asm:49 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E2BB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C0E28F.asm:49 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E2BD: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C0E28F.asm:49 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E2BF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C0E28F.asm:49 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E2C1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C0E28F.asm:49 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E2C3: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C0E28F.asm:49 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E2C5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E28F.asm:50 MOVE_INT @VIRTUAL06, PSI_TELEPORT_NEXT_X
    case 0xC0E2C7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E28F.asm:50 MOVE_INT @VIRTUAL06, PSI_TELEPORT_NEXT_X
    case 0xC0E2C9: cpu.execute_instruction<0x8D>(0x00A153, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E28F.asm:50 MOVE_INT @VIRTUAL06, PSI_TELEPORT_NEXT_X
    case 0xC0E2CC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E28F.asm:50 MOVE_INT @VIRTUAL06, PSI_TELEPORT_NEXT_X
    case 0xC0E2CE: cpu.execute_instruction<0x8D>(0x00A155, 3); return true;
    // src/unknown/C0/C0E28F.asm:51 LDA GAME_STATE + game_state::unknown84
    case 0xC0E2D1: cpu.execute_instruction<0xAD>(0x009B2A, 3); return true;
    // src/unknown/C0/C0E28F.asm:52 STA @VIRTUAL0A
    case 0xC0E2D4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C0E28F.asm:53 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC0E2D6: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C0/C0E28F.asm:54 STA @VIRTUAL0A+2
    case 0xC0E2D9: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E28F.asm:55 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E2DB: cpu.execute_instruction<0xAD>(0x00A14F, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E28F.asm:55 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E2DE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E28F.asm:55 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E2E0: cpu.execute_instruction<0xAD>(0x00A151, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E28F.asm:55 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E2E3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0E28F.asm:56 CLC
    case 0xC0E2E5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C0E28F.asm:57 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E2E6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C0E28F.asm:57 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E2E8: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C0E28F.asm:57 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E2EA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C0E28F.asm:57 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E2EC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C0E28F.asm:57 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E2EE: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C0E28F.asm:57 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E2F0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E28F.asm:58 MOVE_INT @VIRTUAL06, PSI_TELEPORT_NEXT_Y
    case 0xC0E2F2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E28F.asm:58 MOVE_INT @VIRTUAL06, PSI_TELEPORT_NEXT_Y
    case 0xC0E2F4: cpu.execute_instruction<0x8D>(0x00A157, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E28F.asm:58 MOVE_INT @VIRTUAL06, PSI_TELEPORT_NEXT_Y
    case 0xC0E2F7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E28F.asm:58 MOVE_INT @VIRTUAL06, PSI_TELEPORT_NEXT_Y
    case 0xC0E2F9: cpu.execute_instruction<0x8D>(0x00A159, 3); return true;
    // src/unknown/C0/C0E28F.asm:59 LDY GAME_STATE+game_state::current_party_members
    case 0xC0E2FC: cpu.execute_instruction<0xAC>(0x009B3A, 3); return true;
    // src/unknown/C0/C0E28F.asm:60 LDX PSI_TELEPORT_NEXT_Y + fixed_point::integer
    case 0xC0E2FF: cpu.execute_instruction<0xAE>(0x00A159, 3); return true;
    // src/unknown/C0/C0E28F.asm:61 LDA PSI_TELEPORT_NEXT_X + fixed_point::integer
    case 0xC0E302: cpu.execute_instruction<0xAD>(0x00A155, 3); return true;
    // src/unknown/C0/C0E28F.asm:62 JSL NPC_COLLISION_CHECK
    case 0xC0E305: cpu.execute_instruction<0x22>(0xC06224, 4); return true;
    // src/unknown/C0/C0E28F.asm:63 CMP #.LOWORD(-1)
    case 0xC0E309: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0E28F.asm:63 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0E309.
    case 0xC0E30B: cpu.execute_instruction<0xFF>(0xA906F0, 4); return true;
    // src/unknown/C0/C0E28F.asm:64 BEQ @UNKNOWN3
    case 0xC0E30C: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0E28F.asm:65 LDA #2
    case 0xC0E30E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0E28F.asm:65 LDA #2
    // Overlapping static entry reached from 0xC0E30B.
    case 0xC0E30F: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/unknown/C0/C0E28F.asm:65 LDA #2
    // Overlapping static entry reached from 0xC0E30E.
    case 0xC0E310: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E28F.asm:66 STA PSI_TELEPORT_STATE
    case 0xC0E311: cpu.execute_instruction<0x8D>(0x00A145, 3); return true;
    // src/unknown/C0/C0E28F.asm:68 LDA PSI_TELEPORT_NEXT_Y + fixed_point::integer
    case 0xC0E314: cpu.execute_instruction<0xAD>(0x00A159, 3); return true;
    // src/unknown/C0/C0E28F.asm:69 STA @LOCAL00
    case 0xC0E317: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0E28F.asm:70 LDA @VIRTUAL02
    case 0xC0E319: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E28F.asm:71 STA @LOCAL01
    case 0xC0E31B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0E28F.asm:72 LDY PSI_TELEPORT_NEXT_X + fixed_point::integer
    case 0xC0E31D: cpu.execute_instruction<0xAC>(0x00A155, 3); return true;
    // src/unknown/C0/C0E28F.asm:73 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0E320: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C0E28F.asm:74 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0E323: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C0E28F.asm:75 JSR UNKNOWN_C0DED9
    case 0xC0E326: cpu.execute_instruction<0x20>(0x00DE9E, 3); return true;
    // src/unknown/C0/C0E28F.asm:76 AND #$00C0
    case 0xC0E329: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/unknown/C0/C0E28F.asm:76 AND #$00C0
    // Overlapping static entry reached from 0xC0E329.
    case 0xC0E32B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E28F.asm:77 BEQ @UNKNOWN4
    case 0xC0E32C: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0E28F.asm:78 LDA #2
    case 0xC0E32E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0E28F.asm:78 LDA #2
    // Overlapping static entry reached from 0xC0E32E.
    case 0xC0E330: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E28F.asm:79 STA PSI_TELEPORT_STATE
    case 0xC0E331: cpu.execute_instruction<0x8D>(0x00A145, 3); return true;
    // src/unknown/C0/C0E28F.asm:81 LDA PSI_TELEPORT_STATE
    case 0xC0E334: cpu.execute_instruction<0xAD>(0x00A145, 3); return true;
    // src/unknown/C0/C0E28F.asm:82 CMP #2
    case 0xC0E337: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0E28F.asm:82 CMP #2
    // Overlapping static entry reached from 0xC0E337.
    case 0xC0E339: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E28F.asm:83 BEQ @UNKNOWN5
    case 0xC0E33A: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E28F.asm:84 MOVE_INT PSI_TELEPORT_NEXT_X, @VIRTUAL06
    case 0xC0E33C: cpu.execute_instruction<0xAD>(0x00A153, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E28F.asm:84 MOVE_INT PSI_TELEPORT_NEXT_X, @VIRTUAL06
    case 0xC0E33F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E28F.asm:84 MOVE_INT PSI_TELEPORT_NEXT_X, @VIRTUAL06
    case 0xC0E341: cpu.execute_instruction<0xAD>(0x00A155, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E28F.asm:84 MOVE_INT PSI_TELEPORT_NEXT_X, @VIRTUAL06
    case 0xC0E344: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0E28F.asm:85 LDA @VIRTUAL06
    case 0xC0E346: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0E28F.asm:86 STA GAME_STATE + game_state::unknown80
    case 0xC0E348: cpu.execute_instruction<0x8D>(0x009B26, 3); return true;
    // src/unknown/C0/C0E28F.asm:87 LDA @VIRTUAL06+2
    case 0xC0E34B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C0E28F.asm:88 STA GAME_STATE+game_state::leader_x_coord
    case 0xC0E34D: cpu.execute_instruction<0x8D>(0x009B28, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E28F.asm:89 MOVE_INT PSI_TELEPORT_NEXT_Y, @VIRTUAL06
    case 0xC0E350: cpu.execute_instruction<0xAD>(0x00A157, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E28F.asm:89 MOVE_INT PSI_TELEPORT_NEXT_Y, @VIRTUAL06
    case 0xC0E353: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E28F.asm:89 MOVE_INT PSI_TELEPORT_NEXT_Y, @VIRTUAL06
    case 0xC0E355: cpu.execute_instruction<0xAD>(0x00A159, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E28F.asm:89 MOVE_INT PSI_TELEPORT_NEXT_Y, @VIRTUAL06
    case 0xC0E358: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0E28F.asm:90 LDA @VIRTUAL06
    case 0xC0E35A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0E28F.asm:91 STA GAME_STATE + game_state::unknown84
    case 0xC0E35C: cpu.execute_instruction<0x8D>(0x009B2A, 3); return true;
    // src/unknown/C0/C0E28F.asm:92 LDA @VIRTUAL06+2
    case 0xC0E35F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C0E28F.asm:93 STA GAME_STATE+game_state::leader_y_coord
    case 0xC0E361: cpu.execute_instruction<0x8D>(0x009B2C, 3); return true;
    // src/unknown/C0/C0E28F.asm:95 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0E364: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C0E28F.asm:96 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0E367: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C0E28F.asm:97 JSL CENTER_SCREEN
    case 0xC0E36A: cpu.execute_instruction<0x22>(0xC04295, 4); return true;
    // src/unknown/C0/C0E28F.asm:98 JSR UNKNOWN_C0E196
    case 0xC0E36E: cpu.execute_instruction<0x20>(0x00E15B, 3); return true;
    // src/unknown/C0/C0E28F.asm:99 JSR UNKNOWN_C0E254
    case 0xC0E371: cpu.execute_instruction<0x20>(0x00E219, 3); return true;
    // src/unknown/C0/C0E28F.asm:100 LDA PSI_TELEPORT_SPEED + fixed_point::integer
    case 0xC0E374: cpu.execute_instruction<0xAD>(0x00A149, 3); return true;
    // src/unknown/C0/C0E28F.asm:101 CMP #9
    case 0xC0E377: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/unknown/C0/C0E28F.asm:101 CMP #9
    // Overlapping static entry reached from 0xC0E377.
    case 0xC0E379: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0E28F.asm:102 BLTEQ @UNKNOWN6
    case 0xC0E37A: cpu.execute_instruction<0x90>(0x000008, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0E28F.asm:102 BLTEQ @UNKNOWN6
    case 0xC0E37C: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0E28F.asm:103 LDA #1
    case 0xC0E37E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0E28F.asm:103 LDA #1
    // Overlapping static entry reached from 0xC0E37E.
    case 0xC0E380: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E28F.asm:104 STA PSI_TELEPORT_STATE
    case 0xC0E381: cpu.execute_instruction<0x8D>(0x00A145, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E28F.asm:106 END_C_FUNCTION
    case 0xC0E384: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0E28F.asm:106 END_C_FUNCTION
    case 0xC0E385: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E3C1.asm (unresolved).
bool execute_unresolved_c0_c0e3c1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E3C1.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0E386: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E3C1.asm:9 END_STACK_VARS
    case 0xC0E388: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E3C1.asm:9 END_STACK_VARS
    case 0xC0E389: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E3C1.asm:9 END_STACK_VARS
    case 0xC0E38A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E3C1.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E38A.
    case 0xC0E38C: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E3C1.asm:9 END_STACK_VARS
    case 0xC0E38D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E3C1.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC0E38E: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0E3C1.asm:10 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0E38C.
    case 0xC0E390: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0E3C1.asm:11 ASL
    case 0xC0E391: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0E3C1.asm:12 STA @VIRTUAL04
    case 0xC0E392: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0E3C1.asm:13 STA @LOCAL03
    case 0xC0E394: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0E3C1.asm:14 LDX @VIRTUAL04
    case 0xC0E396: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0E3C1.asm:15 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC0E398: cpu.execute_instruction<0xBD>(0x000E90, 3); return true;
    // src/unknown/C0/C0E3C1.asm:16 LDY #.SIZEOF(char_struct)
    case 0xC0E39B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C0E3C1.asm:16 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC0E39B.
    case 0xC0E39D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0E3C1.asm:17 JSL MULT168
    case 0xC0E39E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C0E3C1.asm:18 CLC
    case 0xC0E3A2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E3C1.asm:19 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC0E3A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/unknown/C0/C0E3C1.asm:19 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC0E3A3.
    case 0xC0E3A5: cpu.execute_instruction<0x9C>(0x0086AA, 3); return true;
    // src/unknown/C0/C0E3C1.asm:20 TAX
    case 0xC0E3A6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E3C1.asm:21 STX @LOCAL02
    case 0xC0E3A7: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C0E3C1.asm:21 STX @LOCAL02
    // Overlapping static entry reached from 0xC0E3A5.
    case 0xC0E3A8: cpu.execute_instruction<0x12>(0x00008E, 2); return true;
    // src/unknown/C0/C0E3C1.asm:22 STX CURRENT_PARTY_MEMBER_TICK
    case 0xC0E3A9: cpu.execute_instruction<0x8E>(0x00514C, 3); return true;
    // src/unknown/C0/C0E3C1.asm:22 STX CURRENT_PARTY_MEMBER_TICK
    // Overlapping static entry reached from 0xC0E3A8.
    case 0xC0E3AA: cpu.execute_instruction<0x4C>(0x00A651, 3); return true;
    // src/unknown/C0/C0E3C1.asm:23 LDX @VIRTUAL04
    case 0xC0E3AC: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0E3C1.asm:24 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC0E3AE: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/unknown/C0/C0E3C1.asm:25 STA @LOCAL01
    case 0xC0E3B1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0E3C1.asm:26 LDX @LOCAL02
    case 0xC0E3B3: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C0E3C1.asm:27 LDA a:char_struct::position_index,X
    case 0xC0E3B5: cpu.execute_instruction<0xBD>(0x00003C, 3); return true;
    // src/unknown/C0/C0E3C1.asm:28 STA @LOCAL00
    case 0xC0E3B8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C0/C0E3C1.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E3BA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C0/C0E3C1.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E3BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C0/C0E3C1.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E3BD: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C0/C0E3C1.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E3BF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C0/C0E3C1.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E3C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0E3C1.asm:30 CLC
    case 0xC0E3C1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E3C1.asm:31 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC0E3C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0054DC, 3); return true;
    // src/unknown/C0/C0E3C1.asm:31 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC0E3C2.
    case 0xC0E3C4: cpu.execute_instruction<0x54>(0x000285, 3); return true;
    // src/unknown/C0/C0E3C1.asm:32 STA @VIRTUAL02
    case 0xC0E3C5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0E3C1.asm:33 LDY CURRENT_ENTITY_SLOT
    case 0xC0E3C7: cpu.execute_instruction<0xAC>(0x001A38, 3); return true;
    // src/unknown/C0/C0E3C1.asm:34 LDX @VIRTUAL02
    case 0xC0E3CA: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E3C1.asm:35 LDA a:player_position_buffer_entry::walking_style,X
    case 0xC0E3CC: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // src/unknown/C0/C0E3C1.asm:36 TAX
    case 0xC0E3CF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E3C1.asm:37 LDA @LOCAL01
    case 0xC0E3D0: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0E3C1.asm:38 JSL UNKNOWN_C07A56
    case 0xC0E3D2: cpu.execute_instruction<0x22>(0xC07CA6, 4); return true;
    // src/unknown/C0/C0E3C1.asm:39 LDX @VIRTUAL02
    case 0xC0E3D6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E3C1.asm:40 LDA a:player_position_buffer_entry::x_coord,X
    case 0xC0E3D8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0E3C1.asm:41 LDX @LOCAL03
    case 0xC0E3DB: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0E3C1.asm:42 STX @VIRTUAL04
    case 0xC0E3DD: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C0/C0E3C1.asm:43 STA ENTITY_ABS_X_TABLE,X
    case 0xC0E3DF: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/unknown/C0/C0E3C1.asm:44 LDX @VIRTUAL02
    case 0xC0E3E2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E3C1.asm:45 LDA a:player_position_buffer_entry::y_coord,X
    case 0xC0E3E4: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C0/C0E3C1.asm:46 LDX @VIRTUAL04
    case 0xC0E3E7: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0E3C1.asm:47 STA ENTITY_ABS_Y_TABLE,X
    case 0xC0E3E9: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/unknown/C0/C0E3C1.asm:48 LDX @VIRTUAL02
    case 0xC0E3EC: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E3C1.asm:49 LDA a:player_position_buffer_entry::direction,X
    case 0xC0E3EE: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/unknown/C0/C0E3C1.asm:50 LDX @VIRTUAL04
    case 0xC0E3F1: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0E3C1.asm:51 STA ENTITY_DIRECTIONS,X
    case 0xC0E3F3: cpu.execute_instruction<0x9D>(0x002EF4, 3); return true;
    // src/unknown/C0/C0E3C1.asm:52 LDX @VIRTUAL02
    case 0xC0E3F6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E3C1.asm:53 LDA a:player_position_buffer_entry::tile_flags,X
    case 0xC0E3F8: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/unknown/C0/C0E3C1.asm:54 LDX @VIRTUAL04
    case 0xC0E3FB: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0E3C1.asm:55 STA ENTITY_SURFACE_FLAGS,X
    case 0xC0E3FD: cpu.execute_instruction<0x9D>(0x002FA8, 3); return true;
    // src/unknown/C0/C0E3C1.asm:56 LDX @LOCAL00
    case 0xC0E400: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0E3C1.asm:57 LDA @LOCAL01
    case 0xC0E402: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0E3C1.asm:58 JSR UNKNOWN_C0E214
    case 0xC0E404: cpu.execute_instruction<0x20>(0x00E1D9, 3); return true;
    // src/unknown/C0/C0E3C1.asm:59 AND #$00FF
    case 0xC0E407: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0E3C1.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC0E407.
    case 0xC0E409: cpu.execute_instruction<0x00>(0x0000AE, 2); return true;
    // src/unknown/C0/C0E3C1.asm:60 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC0E40A: cpu.execute_instruction<0xAE>(0x00514C, 3); return true;
    // src/unknown/C0/C0E3C1.asm:61 STA a:char_struct::position_index,X
    case 0xC0E40D: cpu.execute_instruction<0x9D>(0x00003C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E3C1.asm:62 END_C_FUNCTION
    case 0xC0E410: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0E3C1.asm:62 END_C_FUNCTION
    case 0xC0E411: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E44D.asm (unresolved).
bool execute_unresolved_c0_c0e44d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E44D.asm:3 BEGIN_C_FUNCTION
    case 0xC0E412: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E44D.asm:6 END_STACK_VARS
    case 0xC0E414: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E44D.asm:6 END_STACK_VARS
    case 0xC0E415: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E44D.asm:6 END_STACK_VARS
    case 0xC0E416: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E44D.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E416.
    case 0xC0E418: cpu.execute_instruction<0xFF>(0x43AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E44D.asm:6 END_STACK_VARS
    case 0xC0E419: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E44D.asm:7 LDA PSI_TELEPORT_STYLE
    case 0xC0E41A: cpu.execute_instruction<0xAD>(0x00A143, 3); return true;
    // src/unknown/C0/C0E44D.asm:7 LDA PSI_TELEPORT_STYLE
    // Overlapping static entry reached from 0xC0E418.
    case 0xC0E41C: cpu.execute_instruction<0xA1>(0x0000C9, 2); return true;
    // src/unknown/C0/C0E44D.asm:8 CMP #TELEPORT_STYLE::PSI_BETTER
    case 0xC0E41D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0E44D.asm:8 CMP #TELEPORT_STYLE::PSI_BETTER
    // Overlapping static entry reached from 0xC0E41C.
    case 0xC0E41E: cpu.execute_instruction<0x04>(0x000000, 2); return true;
    // src/unknown/C0/C0E44D.asm:8 CMP #TELEPORT_STYLE::PSI_BETTER
    // Overlapping static entry reached from 0xC0E41D.
    case 0xC0E41F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E44D.asm:9 BEQ @UNKNOWN3
    case 0xC0E420: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/unknown/C0/C0E44D.asm:10 LDA PAD_STATE
    case 0xC0E422: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/unknown/C0/C0E44D.asm:11 STA @LOCAL00
    case 0xC0E425: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0E44D.asm:12 AND #PAD::UP
    case 0xC0E427: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/unknown/C0/C0E44D.asm:12 AND #PAD::UP
    // Overlapping static entry reached from 0xC0E427.
    case 0xC0E429: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C0E44D.asm:13 BEQ @UNKNOWN0
    case 0xC0E42A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0E44D.asm:14 DEC PSI_TELEPORT_BETA_Y_ADJUSTMENT
    case 0xC0E42C: cpu.execute_instruction<0xCE>(0x00A16B, 3); return true;
    // src/unknown/C0/C0E44D.asm:16 LDA @LOCAL00
    case 0xC0E42F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0E44D.asm:17 AND #PAD::DOWN
    case 0xC0E431: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/unknown/C0/C0E44D.asm:17 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC0E431.
    case 0xC0E433: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E44D.asm:18 BEQ @UNKNOWN1
    case 0xC0E434: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0E44D.asm:18 BEQ @UNKNOWN1
    // Overlapping static entry reached from 0xC0E433.
    case 0xC0E435: cpu.execute_instruction<0x03>(0x0000EE, 2); return true;
    // src/unknown/C0/C0E44D.asm:19 INC PSI_TELEPORT_BETA_Y_ADJUSTMENT
    case 0xC0E436: cpu.execute_instruction<0xEE>(0x00A16B, 3); return true;
    // src/unknown/C0/C0E44D.asm:19 INC PSI_TELEPORT_BETA_Y_ADJUSTMENT
    // Overlapping static entry reached from 0xC0E435.
    case 0xC0E437: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C0E44D.asm:21 LDA @LOCAL00
    case 0xC0E439: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0E44D.asm:22 AND #PAD::LEFT
    case 0xC0E43B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/unknown/C0/C0E44D.asm:22 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC0E43B.
    case 0xC0E43D: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E44D.asm:23 BEQ @UNKNOWN2
    case 0xC0E43E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0E44D.asm:24 DEC PSI_TELEPORT_BETA_X_ADJUSTMENT
    case 0xC0E440: cpu.execute_instruction<0xCE>(0x00A169, 3); return true;
    // src/unknown/C0/C0E44D.asm:26 LDA @LOCAL00
    case 0xC0E443: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0E44D.asm:27 AND #PAD::RIGHT
    case 0xC0E445: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/unknown/C0/C0E44D.asm:27 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC0E445.
    case 0xC0E447: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E44D.asm:28 BEQ @UNKNOWN3
    case 0xC0E448: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0E44D.asm:28 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC0E447.
    case 0xC0E449: cpu.execute_instruction<0x03>(0x0000EE, 2); return true;
    // src/unknown/C0/C0E44D.asm:29 INC PSI_TELEPORT_BETA_X_ADJUSTMENT
    case 0xC0E44A: cpu.execute_instruction<0xEE>(0x00A169, 3); return true;
    // src/unknown/C0/C0E44D.asm:29 INC PSI_TELEPORT_BETA_X_ADJUSTMENT
    // Overlapping static entry reached from 0xC0E449.
    case 0xC0E44B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x002BA1, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E44D.asm:31 END_C_FUNCTION
    case 0xC0E44D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0E44D.asm:31 END_C_FUNCTION
    case 0xC0E44E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E48A.asm (unresolved).
bool execute_unresolved_c0_c0e48a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0E48A.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0E44F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0E48A.asm:4 LDX #.LOWORD(PSI_TELEPORT_SPEED_Y) + fixed_point::integer
    case 0xC0E451: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000051, 2); else cpu.execute_instruction<0xA2>(0x00A151, 3); return true;
    // src/unknown/C0/C0E48A.asm:4 LDX #.LOWORD(PSI_TELEPORT_SPEED_Y) + fixed_point::integer
    // Overlapping static entry reached from 0xC0E451.
    case 0xC0E453: cpu.execute_instruction<0xA1>(0x0000A9, 2); return true;
    // src/unknown/C0/C0E48A.asm:5 LDA #$0000
    case 0xC0E454: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:5 LDA #$0000
    // Overlapping static entry reached from 0xC0E453.
    case 0xC0E455: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0E48A.asm:5 LDA #$0000
    // Overlapping static entry reached from 0xC0E454.
    case 0xC0E456: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0E48A.asm:6 STA __BSS_START__,X
    case 0xC0E457: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:7 LDY #.LOWORD(PSI_TELEPORT_SPEED_X) + fixed_point::integer
    case 0xC0E45A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00A14D, 3); return true;
    // src/unknown/C0/C0E48A.asm:7 LDY #.LOWORD(PSI_TELEPORT_SPEED_X) + fixed_point::integer
    // Overlapping static entry reached from 0xC0E45A.
    case 0xC0E45C: cpu.execute_instruction<0xA1>(0x000099, 2); return true;
    // src/unknown/C0/C0E48A.asm:8 STA __BSS_START__,Y
    case 0xC0E45D: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:8 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC0E45C.
    case 0xC0E45E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0E48A.asm:9 LDA GAME_STATE+game_state::leader_direction
    case 0xC0E460: cpu.execute_instruction<0xAD>(0x009B30, 3); return true;
    // src/unknown/C0/C0E48A.asm:10 BEQ @UNKNOWN0
    case 0xC0E463: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/C0/C0E48A.asm:11 CMP #$0001
    case 0xC0E465: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0E48A.asm:11 CMP #$0001
    // Overlapping static entry reached from 0xC0E465.
    case 0xC0E467: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E48A.asm:12 BEQ @UNKNOWN1
    case 0xC0E468: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // src/unknown/C0/C0E48A.asm:13 CMP #$0002
    case 0xC0E46A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0E48A.asm:13 CMP #$0002
    // Overlapping static entry reached from 0xC0E46A.
    case 0xC0E46C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E48A.asm:14 BEQ @UNKNOWN2
    case 0xC0E46D: cpu.execute_instruction<0xF0>(0x000031, 2); return true;
    // src/unknown/C0/C0E48A.asm:15 CMP #$0003
    case 0xC0E46F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0E48A.asm:15 CMP #$0003
    // Overlapping static entry reached from 0xC0E46F.
    case 0xC0E471: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E48A.asm:16 BEQ @UNKNOWN3
    case 0xC0E472: cpu.execute_instruction<0xF0>(0x000034, 2); return true;
    // src/unknown/C0/C0E48A.asm:17 CMP #$0004
    case 0xC0E474: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0E48A.asm:17 CMP #$0004
    // Overlapping static entry reached from 0xC0E474.
    case 0xC0E476: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E48A.asm:18 BEQ @UNKNOWN4
    case 0xC0E477: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/unknown/C0/C0E48A.asm:19 CMP #$0005
    case 0xC0E479: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C0/C0E48A.asm:19 CMP #$0005
    // Overlapping static entry reached from 0xC0E479.
    case 0xC0E47B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E48A.asm:20 BEQ @UNKNOWN5
    case 0xC0E47C: cpu.execute_instruction<0xF0>(0x00003D, 2); return true;
    // src/unknown/C0/C0E48A.asm:21 CMP #$0006
    case 0xC0E47E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C0E48A.asm:21 CMP #$0006
    // Overlapping static entry reached from 0xC0E47E.
    case 0xC0E480: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E48A.asm:22 BEQ @UNKNOWN6
    case 0xC0E481: cpu.execute_instruction<0xF0>(0x000046, 2); return true;
    // src/unknown/C0/C0E48A.asm:23 CMP #$0007
    case 0xC0E483: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C0E48A.asm:23 CMP #$0007
    // Overlapping static entry reached from 0xC0E483.
    case 0xC0E485: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E48A.asm:24 BEQ @UNKNOWN7
    case 0xC0E486: cpu.execute_instruction<0xF0>(0x000049, 2); return true;
    // src/unknown/C0/C0E48A.asm:25 BRA @UNKNOWN8
    case 0xC0E488: cpu.execute_instruction<0x80>(0x000050, 2); return true;
    // src/unknown/C0/C0E48A.asm:27 LDA #$FFFB
    case 0xC0E48A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x00FFFB, 3); return true;
    // src/unknown/C0/C0E48A.asm:27 LDA #$FFFB
    // Overlapping static entry reached from 0xC0E48A.
    case 0xC0E48C: cpu.execute_instruction<0xFF>(0x00009D, 4); return true;
    // src/unknown/C0/C0E48A.asm:28 STA __BSS_START__,X
    case 0xC0E48D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:29 BRA @UNKNOWN8
    case 0xC0E490: cpu.execute_instruction<0x80>(0x000048, 2); return true;
    // src/unknown/C0/C0E48A.asm:31 LDA #$FFFB
    case 0xC0E492: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x00FFFB, 3); return true;
    // src/unknown/C0/C0E48A.asm:31 LDA #$FFFB
    // Overlapping static entry reached from 0xC0E492.
    case 0xC0E494: cpu.execute_instruction<0xFF>(0x00009D, 4); return true;
    // src/unknown/C0/C0E48A.asm:32 STA __BSS_START__,X
    case 0xC0E495: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:33 LDA #$0005
    case 0xC0E498: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C0E48A.asm:33 LDA #$0005
    // Overlapping static entry reached from 0xC0E498.
    case 0xC0E49A: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C0E48A.asm:34 STA __BSS_START__,Y
    case 0xC0E49B: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:35 BRA @UNKNOWN8
    case 0xC0E49E: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/unknown/C0/C0E48A.asm:37 LDA #$0005
    case 0xC0E4A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C0E48A.asm:37 LDA #$0005
    // Overlapping static entry reached from 0xC0E4A0.
    case 0xC0E4A2: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C0E48A.asm:38 STA __BSS_START__,Y
    case 0xC0E4A3: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:39 BRA @UNKNOWN8
    case 0xC0E4A6: cpu.execute_instruction<0x80>(0x000032, 2); return true;
    // src/unknown/C0/C0E48A.asm:41 LDA #$0005
    case 0xC0E4A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C0E48A.asm:41 LDA #$0005
    // Overlapping static entry reached from 0xC0E4A8.
    case 0xC0E4AA: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0E48A.asm:42 STA __BSS_START__,X
    case 0xC0E4AB: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:43 STA __BSS_START__,Y
    case 0xC0E4AE: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:44 BRA @UNKNOWN8
    case 0xC0E4B1: cpu.execute_instruction<0x80>(0x000027, 2); return true;
    // src/unknown/C0/C0E48A.asm:46 LDA #$0005
    case 0xC0E4B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C0E48A.asm:46 LDA #$0005
    // Overlapping static entry reached from 0xC0E4B3.
    case 0xC0E4B5: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0E48A.asm:47 STA __BSS_START__,X
    case 0xC0E4B6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:48 BRA @UNKNOWN8
    case 0xC0E4B9: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/unknown/C0/C0E48A.asm:50 LDA #$0005
    case 0xC0E4BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C0E48A.asm:50 LDA #$0005
    // Overlapping static entry reached from 0xC0E4BB.
    case 0xC0E4BD: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0E48A.asm:51 STA __BSS_START__,X
    case 0xC0E4BE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:52 LDA #$FFFB
    case 0xC0E4C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x00FFFB, 3); return true;
    // src/unknown/C0/C0E48A.asm:52 LDA #$FFFB
    // Overlapping static entry reached from 0xC0E4C1.
    case 0xC0E4C3: cpu.execute_instruction<0xFF>(0x000099, 4); return true;
    // src/unknown/C0/C0E48A.asm:53 STA __BSS_START__,Y
    case 0xC0E4C4: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:54 BRA @UNKNOWN8
    case 0xC0E4C7: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C0/C0E48A.asm:56 LDA #$FFFB
    case 0xC0E4C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x00FFFB, 3); return true;
    // src/unknown/C0/C0E48A.asm:56 LDA #$FFFB
    // Overlapping static entry reached from 0xC0E4C9.
    case 0xC0E4CB: cpu.execute_instruction<0xFF>(0x000099, 4); return true;
    // src/unknown/C0/C0E48A.asm:57 STA __BSS_START__,Y
    case 0xC0E4CC: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:58 BRA @UNKNOWN8
    case 0xC0E4CF: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C0/C0E48A.asm:60 LDA #$FFFB
    case 0xC0E4D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x00FFFB, 3); return true;
    // src/unknown/C0/C0E48A.asm:60 LDA #$FFFB
    // Overlapping static entry reached from 0xC0E4D1.
    case 0xC0E4D3: cpu.execute_instruction<0xFF>(0x000099, 4); return true;
    // src/unknown/C0/C0E48A.asm:61 STA __BSS_START__,Y
    case 0xC0E4D4: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:62 STA __BSS_START__,X
    case 0xC0E4D7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:64 RTS
    case 0xC0E4DA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E516.asm (unresolved).
bool execute_unresolved_c0_c0e516_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E516.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0E4DB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E516.asm:9 END_STACK_VARS
    case 0xC0E4DD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E516.asm:9 END_STACK_VARS
    case 0xC0E4DE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E516.asm:9 END_STACK_VARS
    case 0xC0E4DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E516.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E4DF.
    case 0xC0E4E1: cpu.execute_instruction<0xFF>(0x01A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E516.asm:9 END_STACK_VARS
    case 0xC0E4E2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:10 LDA #1
    case 0xC0E4E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0E516.asm:10 LDA #1
    // Overlapping static entry reached from 0xC0E4E3.
    case 0xC0E4E5: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E516.asm:11 STA GAME_STATE + game_state::unknown90
    case 0xC0E4E6: cpu.execute_instruction<0x8D>(0x009B36, 3); return true;
    // src/unknown/C0/C0E516.asm:12 JSR UNKNOWN_C0E44D
    case 0xC0E4E9: cpu.execute_instruction<0x20>(0x00E412, 3); return true;
    // src/unknown/C0/C0E516.asm:13 LDX PSI_TELEPORT_BETA_PROGRESS
    case 0xC0E4EC: cpu.execute_instruction<0xAE>(0x00A165, 3); return true;
    // src/unknown/C0/C0E516.asm:14 LDA PSI_TELEPORT_BETA_ANGLE
    case 0xC0E4EF: cpu.execute_instruction<0xAD>(0x00A163, 3); return true;
    // src/unknown/C0/C0E516.asm:15 JSL UNKNOWN_C41FFF
    case 0xC0E4F2: cpu.execute_instruction<0x22>(0xC41F4B, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E516.asm:16 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0E4F6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E516.asm:16 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0E4F8: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E516.asm:16 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0E4FA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E516.asm:16 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0E4FC: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0E516.asm:17 AND #$FF00
    case 0xC0E4FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C0E516.asm:17 AND #$FF00
    // Overlapping static entry reached from 0xC0E4FE.
    case 0xC0E500: cpu.execute_instruction<0xFF>(0x0310EB, 4); return true;
    // src/unknown/C0/C0E516.asm:18 XBA
    case 0xC0E501: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:19 BPL @UNKNOWN0
    case 0xC0E502: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/unknown/C0/C0E516.asm:20 ORA #$FF00
    case 0xC0E504: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00FF00, 3); return true;
    // src/unknown/C0/C0E516.asm:20 ORA #$FF00
    // Overlapping static entry reached from 0xC0E504.
    case 0xC0E506: cpu.execute_instruction<0xFF>(0x696D18, 4); return true;
    // src/unknown/C0/C0E516.asm:22 CLC
    case 0xC0E507: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:23 ADC PSI_TELEPORT_BETA_X_ADJUSTMENT
    case 0xC0E508: cpu.execute_instruction<0x6D>(0x00A169, 3); return true;
    // src/unknown/C0/C0E516.asm:23 ADC PSI_TELEPORT_BETA_X_ADJUSTMENT
    // Overlapping static entry reached from 0xC0E506.
    case 0xC0E50A: cpu.execute_instruction<0xA1>(0x0000AA, 2); return true;
    // src/unknown/C0/C0E516.asm:24 TAX
    case 0xC0E50B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:25 STX PSI_TELEPORT_NEXT_X + fixed_point::integer
    case 0xC0E50C: cpu.execute_instruction<0x8E>(0x00A155, 3); return true;
    // src/unknown/C0/C0E516.asm:26 LDA @LOCAL02
    case 0xC0E50F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0E516.asm:27 AND #$FF00
    case 0xC0E511: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C0E516.asm:27 AND #$FF00
    // Overlapping static entry reached from 0xC0E511.
    case 0xC0E513: cpu.execute_instruction<0xFF>(0x0310EB, 4); return true;
    // src/unknown/C0/C0E516.asm:28 XBA
    case 0xC0E514: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:29 BPL @UNKNOWN1
    case 0xC0E515: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/unknown/C0/C0E516.asm:30 ORA #$FF00
    case 0xC0E517: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00FF00, 3); return true;
    // src/unknown/C0/C0E516.asm:30 ORA #$FF00
    // Overlapping static entry reached from 0xC0E517.
    case 0xC0E519: cpu.execute_instruction<0xFF>(0x6B6D18, 4); return true;
    // src/unknown/C0/C0E516.asm:32 CLC
    case 0xC0E51A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:33 ADC PSI_TELEPORT_BETA_Y_ADJUSTMENT
    case 0xC0E51B: cpu.execute_instruction<0x6D>(0x00A16B, 3); return true;
    // src/unknown/C0/C0E516.asm:33 ADC PSI_TELEPORT_BETA_Y_ADJUSTMENT
    // Overlapping static entry reached from 0xC0E519.
    case 0xC0E51D: cpu.execute_instruction<0xA1>(0x000085, 2); return true;
    // src/unknown/C0/C0E516.asm:34 STA @LOCAL03
    case 0xC0E51E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0E516.asm:34 STA @LOCAL03
    // Overlapping static entry reached from 0xC0E51D.
    case 0xC0E51F: cpu.execute_instruction<0x16>(0x00008D, 2); return true;
    // src/unknown/C0/C0E516.asm:35 STA PSI_TELEPORT_NEXT_Y + fixed_point::integer
    case 0xC0E520: cpu.execute_instruction<0x8D>(0x00A159, 3); return true;
    // src/unknown/C0/C0E516.asm:35 STA PSI_TELEPORT_NEXT_Y + fixed_point::integer
    // Overlapping static entry reached from 0xC0E51F.
    case 0xC0E521: cpu.execute_instruction<0x59>(0x00ADA1, 3); return true;
    // src/unknown/C0/C0E516.asm:36 LDA PSI_TELEPORT_STYLE
    case 0xC0E523: cpu.execute_instruction<0xAD>(0x00A143, 3); return true;
    // src/unknown/C0/C0E516.asm:36 LDA PSI_TELEPORT_STYLE
    // Overlapping static entry reached from 0xC0E521.
    case 0xC0E524: cpu.execute_instruction<0x43>(0x0000A1, 2); return true;
    // src/unknown/C0/C0E516.asm:37 CMP #TELEPORT_STYLE::PSI_BETTER
    case 0xC0E526: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0E516.asm:37 CMP #TELEPORT_STYLE::PSI_BETTER
    // Overlapping static entry reached from 0xC0E526.
    case 0xC0E528: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E516.asm:38 BEQ @UNKNOWN4
    case 0xC0E529: cpu.execute_instruction<0xF0>(0x000047, 2); return true;
    // src/unknown/C0/C0E516.asm:39 LDA @LOCAL03
    case 0xC0E52B: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0E516.asm:40 STA @LOCAL00
    case 0xC0E52D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0E516.asm:41 LDA GAME_STATE+game_state::leader_direction
    case 0xC0E52F: cpu.execute_instruction<0xAD>(0x009B30, 3); return true;
    // src/unknown/C0/C0E516.asm:42 STA @LOCAL01
    case 0xC0E532: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0E516.asm:43 TXY
    case 0xC0E534: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:44 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0E535: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C0E516.asm:45 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0E538: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C0E516.asm:46 JSR UNKNOWN_C0DED9
    case 0xC0E53B: cpu.execute_instruction<0x20>(0x00DE9E, 3); return true;
    // src/unknown/C0/C0E516.asm:47 AND #$00C0
    case 0xC0E53E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/unknown/C0/C0E516.asm:47 AND #$00C0
    // Overlapping static entry reached from 0xC0E53E.
    case 0xC0E540: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E516.asm:48 BEQ @UNKNOWN2
    case 0xC0E541: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0E516.asm:49 LDA #2
    case 0xC0E543: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0E516.asm:49 LDA #2
    // Overlapping static entry reached from 0xC0E543.
    case 0xC0E545: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E516.asm:50 STA PSI_TELEPORT_STATE
    case 0xC0E546: cpu.execute_instruction<0x8D>(0x00A145, 3); return true;
    // src/unknown/C0/C0E516.asm:52 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0E549: cpu.execute_instruction<0xAD>(0x0060E6, 3); return true;
    // src/unknown/C0/C0E516.asm:53 BEQ @UNKNOWN3
    case 0xC0E54C: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C0E516.asm:54 LDA #2
    case 0xC0E54E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0E516.asm:54 LDA #2
    // Overlapping static entry reached from 0xC0E54E.
    case 0xC0E550: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E516.asm:55 STA PSI_TELEPORT_STATE
    case 0xC0E551: cpu.execute_instruction<0x8D>(0x00A145, 3); return true;
    // src/unknown/C0/C0E516.asm:56 LDA #1
    case 0xC0E554: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0E516.asm:56 LDA #1
    // Overlapping static entry reached from 0xC0E554.
    case 0xC0E556: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E516.asm:57 STA BATTLE_MODE
    case 0xC0E557: cpu.execute_instruction<0x8D>(0x005148, 3); return true;
    // src/unknown/C0/C0E516.asm:59 LDY GAME_STATE+game_state::current_party_members
    case 0xC0E55A: cpu.execute_instruction<0xAC>(0x009B3A, 3); return true;
    // src/unknown/C0/C0E516.asm:60 LDX PSI_TELEPORT_NEXT_Y + fixed_point::integer
    case 0xC0E55D: cpu.execute_instruction<0xAE>(0x00A159, 3); return true;
    // src/unknown/C0/C0E516.asm:61 LDA PSI_TELEPORT_NEXT_X + fixed_point::integer
    case 0xC0E560: cpu.execute_instruction<0xAD>(0x00A155, 3); return true;
    // src/unknown/C0/C0E516.asm:62 JSL NPC_COLLISION_CHECK
    case 0xC0E563: cpu.execute_instruction<0x22>(0xC06224, 4); return true;
    // src/unknown/C0/C0E516.asm:63 CMP #.LOWORD(-1)
    case 0xC0E567: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0E516.asm:63 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0E567.
    case 0xC0E569: cpu.execute_instruction<0xFF>(0xA906F0, 4); return true;
    // src/unknown/C0/C0E516.asm:64 BEQ @UNKNOWN4
    case 0xC0E56A: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0E516.asm:65 LDA #2
    case 0xC0E56C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0E516.asm:65 LDA #2
    // Overlapping static entry reached from 0xC0E569.
    case 0xC0E56D: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/unknown/C0/C0E516.asm:65 LDA #2
    // Overlapping static entry reached from 0xC0E56C.
    case 0xC0E56E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E516.asm:66 STA PSI_TELEPORT_STATE
    case 0xC0E56F: cpu.execute_instruction<0x8D>(0x00A145, 3); return true;
    // src/unknown/C0/C0E516.asm:68 LDA PSI_TELEPORT_STATE
    case 0xC0E572: cpu.execute_instruction<0xAD>(0x00A145, 3); return true;
    // src/unknown/C0/C0E516.asm:69 CMP #2
    case 0xC0E575: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0E516.asm:69 CMP #2
    // Overlapping static entry reached from 0xC0E575.
    case 0xC0E577: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E516.asm:70 BEQ @UNKNOWN5
    case 0xC0E578: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C0E516.asm:71 LDA PSI_TELEPORT_NEXT_X + fixed_point::integer
    case 0xC0E57A: cpu.execute_instruction<0xAD>(0x00A155, 3); return true;
    // src/unknown/C0/C0E516.asm:72 STA GAME_STATE+game_state::leader_x_coord
    case 0xC0E57D: cpu.execute_instruction<0x8D>(0x009B28, 3); return true;
    // src/unknown/C0/C0E516.asm:73 LDA PSI_TELEPORT_NEXT_Y + fixed_point::integer
    case 0xC0E580: cpu.execute_instruction<0xAD>(0x00A159, 3); return true;
    // src/unknown/C0/C0E516.asm:74 STA GAME_STATE+game_state::leader_y_coord
    case 0xC0E583: cpu.execute_instruction<0x8D>(0x009B2C, 3); return true;
    // src/unknown/C0/C0E516.asm:76 SEP #PROC_FLAGS::INDEX8
    case 0xC0E586: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C0/C0E516.asm:77 LDY #13
    case 0xC0E588: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000D, 2); else cpu.execute_instruction<0xA0>(0x00AD0D, 3); return true;
    // src/unknown/C0/C0E516.asm:78 LDA PSI_TELEPORT_BETA_ANGLE
    case 0xC0E58A: cpu.execute_instruction<0xAD>(0x00A163, 3); return true;
    // src/unknown/C0/C0E516.asm:78 LDA PSI_TELEPORT_BETA_ANGLE
    // Overlapping static entry reached from 0xC0E588.
    case 0xC0E58B: cpu.execute_instruction<0x63>(0x0000A1, 2); return true;
    // src/unknown/C0/C0E516.asm:79 JSL ASR8_UNKNOWN1
    case 0xC0E58D: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/unknown/C0/C0E516.asm:80 INC
    case 0xC0E591: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:81 INC
    case 0xC0E592: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:82 AND #$0007
    case 0xC0E593: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C0E516.asm:82 AND #$0007
    // Overlapping static entry reached from 0xC0E593.
    case 0xC0E595: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E516.asm:83 STA GAME_STATE+game_state::leader_direction
    case 0xC0E596: cpu.execute_instruction<0x8D>(0x009B30, 3); return true;
    // src/unknown/C0/C0E516.asm:84 REP #PROC_FLAGS::INDEX8
    case 0xC0E599: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C0/C0E516.asm:85 LDY #.LOWORD(PSI_TELEPORT_SPEED)
    case 0xC0E59B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000047, 2); else cpu.execute_instruction<0xA0>(0x00A147, 3); return true;
    // src/unknown/C0/C0E516.asm:85 LDY #.LOWORD(PSI_TELEPORT_SPEED)
    // Overlapping static entry reached from 0xC0E59B.
    case 0xC0E59D: cpu.execute_instruction<0xA1>(0x0000B9, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C0E516.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E59E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C0E516.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC0E59D.
    case 0xC0E59F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C0E516.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E5A1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C0E516.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E5A3: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C0E516.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E5A6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0E516.asm:87 CLC
    case 0xC0E5A8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:88 LDA @VIRTUAL06 + fixed_point::fraction
    case 0xC0E5A9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0E516.asm:89 ADC #$1851 ;approx +0.95
    case 0xC0E5AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000051, 2); else cpu.execute_instruction<0x69>(0x001851, 3); return true;
    // src/unknown/C0/C0E516.asm:89 ADC #$1851 ;approx +0.95
    // Overlapping static entry reached from 0xC0E5AB.
    case 0xC0E5AD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:90 STA @VIRTUAL06 + fixed_point::fraction
    case 0xC0E5AE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0E516.asm:91 BCC @UNKNOWN6
    case 0xC0E5B0: cpu.execute_instruction<0x90>(0x000002, 2); return true;
    // src/unknown/C0/C0E516.asm:92 INC @VIRTUAL06 + fixed_point::integer
    case 0xC0E5B2: cpu.execute_instruction<0xE6>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C0E516.asm:94 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E5B4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C0E516.asm:94 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E5B6: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C0E516.asm:94 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E5B9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C0E516.asm:94 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E5BB: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C0/C0E516.asm:95 LDA PSI_TELEPORT_STYLE
    case 0xC0E5BE: cpu.execute_instruction<0xAD>(0x00A143, 3); return true;
    // src/unknown/C0/C0E516.asm:96 CMP #TELEPORT_STYLE::PSI_BETA
    case 0xC0E5C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0E516.asm:96 CMP #TELEPORT_STYLE::PSI_BETA
    // Overlapping static entry reached from 0xC0E5C1.
    case 0xC0E5C3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0E516.asm:97 BNE @UNKNOWN7
    case 0xC0E5C4: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // src/unknown/C0/C0E516.asm:98 LDA PSI_TELEPORT_BETA_ANGLE
    case 0xC0E5C6: cpu.execute_instruction<0xAD>(0x00A163, 3); return true;
    // src/unknown/C0/C0E516.asm:99 CLC
    case 0xC0E5C9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:100 ADC #$0A00
    case 0xC0E5CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000A00, 3); return true;
    // src/unknown/C0/C0E516.asm:100 ADC #$0A00
    // Overlapping static entry reached from 0xC0E5CA.
    case 0xC0E5CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:101 STA PSI_TELEPORT_BETA_ANGLE
    case 0xC0E5CD: cpu.execute_instruction<0x8D>(0x00A163, 3); return true;
    // src/unknown/C0/C0E516.asm:102 LDA PSI_TELEPORT_BETA_PROGRESS
    case 0xC0E5D0: cpu.execute_instruction<0xAD>(0x00A165, 3); return true;
    // src/unknown/C0/C0E516.asm:103 CLC
    case 0xC0E5D3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:104 ADC #12
    case 0xC0E5D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000C, 2); else cpu.execute_instruction<0x69>(0x00000C, 3); return true;
    // src/unknown/C0/C0E516.asm:104 ADC #12
    // Overlapping static entry reached from 0xC0E5D4.
    case 0xC0E5D6: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E516.asm:105 STA PSI_TELEPORT_BETA_PROGRESS
    case 0xC0E5D7: cpu.execute_instruction<0x8D>(0x00A165, 3); return true;
    // src/unknown/C0/C0E516.asm:106 BRA @UNKNOWN8
    case 0xC0E5DA: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C0/C0E516.asm:108 LDA PSI_TELEPORT_BETTER_PROGRESS
    case 0xC0E5DC: cpu.execute_instruction<0xAD>(0x00A167, 3); return true;
    // src/unknown/C0/C0E516.asm:109 CLC
    case 0xC0E5DF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:110 ADC #32
    case 0xC0E5E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/unknown/C0/C0E516.asm:110 ADC #32
    // Overlapping static entry reached from 0xC0E5E0.
    case 0xC0E5E2: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E516.asm:111 STA PSI_TELEPORT_BETTER_PROGRESS
    case 0xC0E5E3: cpu.execute_instruction<0x8D>(0x00A167, 3); return true;
    // src/unknown/C0/C0E516.asm:112 CLC
    case 0xC0E5E6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:113 ADC PSI_TELEPORT_BETA_ANGLE
    case 0xC0E5E7: cpu.execute_instruction<0x6D>(0x00A163, 3); return true;
    // src/unknown/C0/C0E516.asm:114 STA PSI_TELEPORT_BETA_ANGLE
    case 0xC0E5EA: cpu.execute_instruction<0x8D>(0x00A163, 3); return true;
    // src/unknown/C0/C0E516.asm:115 LDA PSI_TELEPORT_BETA_PROGRESS
    case 0xC0E5ED: cpu.execute_instruction<0xAD>(0x00A165, 3); return true;
    // src/unknown/C0/C0E516.asm:116 CLC
    case 0xC0E5F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:117 ADC #16
    case 0xC0E5F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C0/C0E516.asm:117 ADC #16
    // Overlapping static entry reached from 0xC0E5F1.
    case 0xC0E5F3: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E516.asm:118 STA PSI_TELEPORT_BETA_PROGRESS
    case 0xC0E5F4: cpu.execute_instruction<0x8D>(0x00A165, 3); return true;
    // src/unknown/C0/C0E516.asm:120 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0E5F7: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C0E516.asm:121 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0E5FA: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C0E516.asm:122 JSL CENTER_SCREEN
    case 0xC0E5FD: cpu.execute_instruction<0x22>(0xC04295, 4); return true;
    // src/unknown/C0/C0E516.asm:123 JSR UNKNOWN_C0E196
    case 0xC0E601: cpu.execute_instruction<0x20>(0x00E15B, 3); return true;
    // src/unknown/C0/C0E516.asm:124 JSR UNKNOWN_C0E254
    case 0xC0E604: cpu.execute_instruction<0x20>(0x00E219, 3); return true;
    // src/unknown/C0/C0E516.asm:125 LDA PSI_TELEPORT_STYLE
    case 0xC0E607: cpu.execute_instruction<0xAD>(0x00A143, 3); return true;
    // src/unknown/C0/C0E516.asm:126 CMP #TELEPORT_STYLE::PSI_BETA
    case 0xC0E60A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0E516.asm:126 CMP #TELEPORT_STYLE::PSI_BETA
    // Overlapping static entry reached from 0xC0E60A.
    case 0xC0E60C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0E516.asm:127 BNE @UNKNOWN9
    case 0xC0E60D: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/unknown/C0/C0E516.asm:128 LDA PSI_TELEPORT_BETA_PROGRESS
    case 0xC0E60F: cpu.execute_instruction<0xAD>(0x00A165, 3); return true;
    // src/unknown/C0/C0E516.asm:129 CMP #$1000
    case 0xC0E612: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x001000, 3); return true;
    // src/unknown/C0/C0E516.asm:129 CMP #$1000
    // Overlapping static entry reached from 0xC0E612.
    case 0xC0E614: cpu.execute_instruction<0x10>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0E516.asm:130 BLTEQ @UNKNOWN10
    case 0xC0E615: cpu.execute_instruction<0x90>(0x000020, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0E516.asm:130 BLTEQ @UNKNOWN10
    // Overlapping static entry reached from 0xC0E614.
    case 0xC0E616: cpu.execute_instruction<0x20>(0x001EF0, 3); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0E516.asm:130 BLTEQ @UNKNOWN10
    case 0xC0E617: cpu.execute_instruction<0xF0>(0x00001E, 2); return true;
    // src/unknown/C0/C0E516.asm:131 LDA #1
    case 0xC0E619: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0E516.asm:131 LDA #1
    // Overlapping static entry reached from 0xC0E619.
    case 0xC0E61B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E516.asm:132 STA PSI_TELEPORT_STATE
    case 0xC0E61C: cpu.execute_instruction<0x8D>(0x00A145, 3); return true;
    // src/unknown/C0/C0E516.asm:133 JSR UNKNOWN_C0E48A
    case 0xC0E61F: cpu.execute_instruction<0x20>(0x00E44F, 3); return true;
    // src/unknown/C0/C0E516.asm:134 BRA @UNKNOWN10
    case 0xC0E622: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C0/C0E516.asm:136 LDA PSI_TELEPORT_BETTER_PROGRESS
    case 0xC0E624: cpu.execute_instruction<0xAD>(0x00A167, 3); return true;
    // src/unknown/C0/C0E516.asm:137 CMP #$1800
    case 0xC0E627: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x001800, 3); return true;
    // src/unknown/C0/C0E516.asm:137 CMP #$1800
    // Overlapping static entry reached from 0xC0E627.
    case 0xC0E629: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0E516.asm:138 BLTEQ @UNKNOWN10
    case 0xC0E62A: cpu.execute_instruction<0x90>(0x00000B, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0E516.asm:138 BLTEQ @UNKNOWN10
    case 0xC0E62C: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C0/C0E516.asm:139 LDA #1
    case 0xC0E62E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0E516.asm:139 LDA #1
    // Overlapping static entry reached from 0xC0E62E.
    case 0xC0E630: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E516.asm:140 STA PSI_TELEPORT_STATE
    case 0xC0E631: cpu.execute_instruction<0x8D>(0x00A145, 3); return true;
    // src/unknown/C0/C0E516.asm:141 JSR UNKNOWN_C0E48A
    case 0xC0E634: cpu.execute_instruction<0x20>(0x00E44F, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E516.asm:143 END_C_FUNCTION
    case 0xC0E637: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0E516.asm:143 END_C_FUNCTION
    case 0xC0E638: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E674.asm (unresolved).
bool execute_unresolved_c0_c0e674_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0E674.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0E639: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E674.asm:5 END_STACK_VARS
    case 0xC0E63B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E674.asm:5 END_STACK_VARS
    case 0xC0E63C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E674.asm:5 END_STACK_VARS
    case 0xC0E63D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E674.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E63D.
    case 0xC0E63F: cpu.execute_instruction<0xFF>(0x30AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E674.asm:5 END_STACK_VARS
    case 0xC0E640: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E674.asm:6 LDA GAME_STATE+game_state::leader_direction
    case 0xC0E641: cpu.execute_instruction<0xAD>(0x009B30, 3); return true;
    // src/unknown/C0/C0E674.asm:6 LDA GAME_STATE+game_state::leader_direction
    // Overlapping static entry reached from 0xC0E63F.
    case 0xC0E643: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0E674.asm:7 JSR UNKNOWN_C0DF22
    case 0xC0E644: cpu.execute_instruction<0x20>(0x00DEE7, 3); return true;
    // src/unknown/C0/C0E674.asm:8 LDY #.LOWORD(GAME_STATE) + game_state::unknown80
    case 0xC0E647: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000026, 2); else cpu.execute_instruction<0xA0>(0x009B26, 3); return true;
    // src/unknown/C0/C0E674.asm:8 LDY #.LOWORD(GAME_STATE) + game_state::unknown80
    // Overlapping static entry reached from 0xC0E647.
    case 0xC0E649: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E674.asm:9 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL0A
    case 0xC0E64A: cpu.execute_instruction<0xAD>(0x00A14B, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E674.asm:9 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL0A
    case 0xC0E64D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E674.asm:9 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL0A
    case 0xC0E64F: cpu.execute_instruction<0xAD>(0x00A14D, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E674.asm:9 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL0A
    case 0xC0E652: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C0E674.asm:10 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E654: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C0E674.asm:10 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E657: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C0E674.asm:10 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E659: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C0E674.asm:10 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E65C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0E674.asm:11 CLC
    case 0xC0E65E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C0E674.asm:12 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E65F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C0E674.asm:12 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E661: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C0E674.asm:12 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E663: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C0E674.asm:12 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E665: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C0E674.asm:12 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E667: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C0E674.asm:12 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E669: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C0E674.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E66B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C0E674.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E66D: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C0E674.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E670: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C0E674.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E672: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C0/C0E674.asm:14 LDY #.LOWORD(GAME_STATE) + game_state::unknown84
    case 0xC0E675: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002A, 2); else cpu.execute_instruction<0xA0>(0x009B2A, 3); return true;
    // src/unknown/C0/C0E674.asm:14 LDY #.LOWORD(GAME_STATE) + game_state::unknown84
    // Overlapping static entry reached from 0xC0E675.
    case 0xC0E677: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E674.asm:15 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL0A
    case 0xC0E678: cpu.execute_instruction<0xAD>(0x00A14F, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E674.asm:15 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL0A
    case 0xC0E67B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E674.asm:15 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL0A
    case 0xC0E67D: cpu.execute_instruction<0xAD>(0x00A151, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E674.asm:15 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL0A
    case 0xC0E680: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C0E674.asm:16 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E682: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C0E674.asm:16 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E685: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C0E674.asm:16 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E687: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C0E674.asm:16 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E68A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0E674.asm:17 CLC
    case 0xC0E68C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C0E674.asm:18 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E68D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C0E674.asm:18 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E68F: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C0E674.asm:18 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E691: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C0E674.asm:18 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E693: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C0E674.asm:18 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E695: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C0E674.asm:18 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E697: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C0E674.asm:19 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E699: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C0E674.asm:19 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E69B: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C0E674.asm:19 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E69E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C0E674.asm:19 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E6A0: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C0/C0E674.asm:20 LDA PSI_TELEPORT_SUCCESS_SCREEN_X
    case 0xC0E6A3: cpu.execute_instruction<0xAD>(0x00A15D, 3); return true;
    // src/unknown/C0/C0E674.asm:21 CLC
    case 0xC0E6A6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E674.asm:22 ADC PSI_TELEPORT_SUCCESS_SCREEN_SPEED_X
    case 0xC0E6A7: cpu.execute_instruction<0x6D>(0x00A15B, 3); return true;
    // src/unknown/C0/C0E674.asm:23 TAY
    case 0xC0E6AA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0E674.asm:24 STY PSI_TELEPORT_SUCCESS_SCREEN_X
    case 0xC0E6AB: cpu.execute_instruction<0x8C>(0x00A15D, 3); return true;
    // src/unknown/C0/C0E674.asm:25 LDA PSI_TELEPORT_SUCCESS_SCREEN_Y
    case 0xC0E6AE: cpu.execute_instruction<0xAD>(0x00A161, 3); return true;
    // src/unknown/C0/C0E674.asm:26 CLC
    case 0xC0E6B1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E674.asm:27 ADC PSI_TELEPORT_SUCCESS_SCREEN_SPEED_Y
    case 0xC0E6B2: cpu.execute_instruction<0x6D>(0x00A15F, 3); return true;
    // src/unknown/C0/C0E674.asm:28 STA PSI_TELEPORT_SUCCESS_SCREEN_Y
    case 0xC0E6B5: cpu.execute_instruction<0x8D>(0x00A161, 3); return true;
    // src/unknown/C0/C0E674.asm:29 TAX
    case 0xC0E6B8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E674.asm:30 TYA
    case 0xC0E6B9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0E674.asm:31 JSL CENTER_SCREEN
    case 0xC0E6BA: cpu.execute_instruction<0x22>(0xC04295, 4); return true;
    // src/unknown/C0/C0E674.asm:32 JSR UNKNOWN_C0E196
    case 0xC0E6BE: cpu.execute_instruction<0x20>(0x00E15B, 3); return true;
    // src/unknown/C0/C0E674.asm:33 PLD
    case 0xC0E6C1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0E674.asm:34 RTL
    case 0xC0E6C2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E6FE.asm (unresolved).
bool execute_unresolved_c0_c0e6fe_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E6FE.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0E6C3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E6FE.asm:7 END_STACK_VARS
    case 0xC0E6C5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E6FE.asm:7 END_STACK_VARS
    case 0xC0E6C6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E6FE.asm:7 END_STACK_VARS
    case 0xC0E6C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E6FE.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E6C7.
    case 0xC0E6C9: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E6FE.asm:7 END_STACK_VARS
    case 0xC0E6CA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E6FE.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC0E6CB: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0E6FE.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0E6C9.
    case 0xC0E6CD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0E6FE.asm:9 ASL
    case 0xC0E6CE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0E6FE.asm:10 TAY
    case 0xC0E6CF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0E6FE.asm:11 STY @LOCAL01
    case 0xC0E6D0: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C0E6FE.asm:12 LDA ENTITY_SCRIPT_VAR1_TABLE,Y
    case 0xC0E6D2: cpu.execute_instruction<0xB9>(0x000E90, 3); return true;
    // src/unknown/C0/C0E6FE.asm:13 LDY #.SIZEOF(char_struct)
    case 0xC0E6D5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C0E6FE.asm:13 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC0E6D5.
    case 0xC0E6D7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0E6FE.asm:14 JSL MULT168
    case 0xC0E6D8: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C0E6FE.asm:15 CLC
    case 0xC0E6DC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E6FE.asm:16 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC0E6DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/unknown/C0/C0E6FE.asm:16 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC0E6DD.
    case 0xC0E6DF: cpu.execute_instruction<0x9C>(0x008EAA, 3); return true;
    // src/unknown/C0/C0E6FE.asm:17 TAX
    case 0xC0E6E0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E6FE.asm:18 STX CURRENT_PARTY_MEMBER_TICK
    case 0xC0E6E1: cpu.execute_instruction<0x8E>(0x00514C, 3); return true;
    // src/unknown/C0/C0E6FE.asm:18 STX CURRENT_PARTY_MEMBER_TICK
    // Overlapping static entry reached from 0xC0E6DF.
    case 0xC0E6E2: cpu.execute_instruction<0x4C>(0x00BD51, 3); return true;
    // src/unknown/C0/C0E6FE.asm:19 LDA a:char_struct::position_index,X
    case 0xC0E6E4: cpu.execute_instruction<0xBD>(0x00003C, 3); return true;
    // src/unknown/C0/C0E6FE.asm:20 STA @VIRTUAL04
    case 0xC0E6E7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0E6FE.asm:21 STA @LOCAL00
    case 0xC0E6E9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0E6FE.asm:22 LDA @VIRTUAL04
    case 0xC0E6EB: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C0/C0E6FE.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E6ED: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C0/C0E6FE.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E6EF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C0/C0E6FE.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E6F0: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C0/C0E6FE.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E6F2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C0/C0E6FE.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E6F3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0E6FE.asm:24 CLC
    case 0xC0E6F4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E6FE.asm:25 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC0E6F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0054DC, 3); return true;
    // src/unknown/C0/C0E6FE.asm:25 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC0E6F5.
    case 0xC0E6F7: cpu.execute_instruction<0x54>(0x00A4AA, 3); return true;
    // src/unknown/C0/C0E6FE.asm:26 TAX
    case 0xC0E6F8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E6FE.asm:27 LDY @LOCAL01
    case 0xC0E6F9: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C0E6FE.asm:27 LDY @LOCAL01
    // Overlapping static entry reached from 0xC0E6F7.
    case 0xC0E6FA: cpu.execute_instruction<0x10>(0x0000B9, 2); return true;
    // src/unknown/C0/C0E6FE.asm:28 LDA ENTITY_SCRIPT_VAR0_TABLE,Y
    case 0xC0E6FB: cpu.execute_instruction<0xB9>(0x000E54, 3); return true;
    // src/unknown/C0/C0E6FE.asm:28 LDA ENTITY_SCRIPT_VAR0_TABLE,Y
    // Overlapping static entry reached from 0xC0E6FA.
    case 0xC0E6FC: cpu.execute_instruction<0x54>(0x00850E, 3); return true;
    // src/unknown/C0/C0E6FE.asm:29 STA @VIRTUAL02
    case 0xC0E6FE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0E6FE.asm:29 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC0E6FC.
    case 0xC0E6FF: cpu.execute_instruction<0x02>(0x0000BD, 2); return true;
    // src/unknown/C0/C0E6FE.asm:30 LDA a:player_position_buffer_entry::x_coord,X
    case 0xC0E700: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0E6FE.asm:31 STA ENTITY_ABS_X_TABLE,Y
    case 0xC0E703: cpu.execute_instruction<0x99>(0x000B84, 3); return true;
    // src/unknown/C0/C0E6FE.asm:32 LDA a:player_position_buffer_entry::y_coord,X
    case 0xC0E706: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C0/C0E6FE.asm:33 STA ENTITY_ABS_Y_TABLE,Y
    case 0xC0E709: cpu.execute_instruction<0x99>(0x000BC0, 3); return true;
    // src/unknown/C0/C0E6FE.asm:34 LDA a:player_position_buffer_entry::direction,X
    case 0xC0E70C: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/unknown/C0/C0E6FE.asm:35 STA ENTITY_DIRECTIONS,Y
    case 0xC0E70F: cpu.execute_instruction<0x99>(0x002EF4, 3); return true;
    // src/unknown/C0/C0E6FE.asm:36 LDA a:player_position_buffer_entry::tile_flags,X
    case 0xC0E712: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/unknown/C0/C0E6FE.asm:37 STA ENTITY_SURFACE_FLAGS,Y
    case 0xC0E715: cpu.execute_instruction<0x99>(0x002FA8, 3); return true;
    // src/unknown/C0/C0E6FE.asm:38 LDY CURRENT_ENTITY_SLOT
    case 0xC0E718: cpu.execute_instruction<0xAC>(0x001A38, 3); return true;
    // src/unknown/C0/C0E6FE.asm:39 LDA a:player_position_buffer_entry::walking_style,X
    case 0xC0E71B: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // src/unknown/C0/C0E6FE.asm:40 TAX
    case 0xC0E71E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E6FE.asm:41 LDA @VIRTUAL02
    case 0xC0E71F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E6FE.asm:42 JSL UNKNOWN_C07A56
    case 0xC0E721: cpu.execute_instruction<0x22>(0xC07CA6, 4); return true;
    // src/unknown/C0/C0E6FE.asm:43 LDA @LOCAL00
    case 0xC0E725: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0E6FE.asm:44 STA @VIRTUAL04
    case 0xC0E727: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0E6FE.asm:45 LDX @VIRTUAL04
    case 0xC0E729: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0E6FE.asm:46 LDA @VIRTUAL02
    case 0xC0E72B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E6FE.asm:47 JSR UNKNOWN_C0E214
    case 0xC0E72D: cpu.execute_instruction<0x20>(0x00E1D9, 3); return true;
    // src/unknown/C0/C0E6FE.asm:48 AND #$00FF
    case 0xC0E730: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0E6FE.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC0E730.
    case 0xC0E732: cpu.execute_instruction<0x00>(0x0000AE, 2); return true;
    // src/unknown/C0/C0E6FE.asm:49 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC0E733: cpu.execute_instruction<0xAE>(0x00514C, 3); return true;
    // src/unknown/C0/C0E6FE.asm:50 STA a:char_struct::position_index,X
    case 0xC0E736: cpu.execute_instruction<0x9D>(0x00003C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E6FE.asm:51 END_C_FUNCTION
    case 0xC0E739: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0E6FE.asm:51 END_C_FUNCTION
    case 0xC0E73A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E776.asm (unresolved).
bool execute_unresolved_c0_c0e776_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E776.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0E73B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E776.asm:6 END_STACK_VARS
    case 0xC0E73D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E776.asm:6 END_STACK_VARS
    case 0xC0E73E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E776.asm:6 END_STACK_VARS
    case 0xC0E73F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E776.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E73F.
    case 0xC0E741: cpu.execute_instruction<0xFF>(0x30AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E776.asm:6 END_STACK_VARS
    case 0xC0E742: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E776.asm:7 LDA GAME_STATE+game_state::leader_direction
    case 0xC0E743: cpu.execute_instruction<0xAD>(0x009B30, 3); return true;
    // src/unknown/C0/C0E776.asm:7 LDA GAME_STATE+game_state::leader_direction
    // Overlapping static entry reached from 0xC0E741.
    case 0xC0E745: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0E776.asm:8 JSR UNKNOWN_C0DF22
    case 0xC0E746: cpu.execute_instruction<0x20>(0x00DEE7, 3); return true;
    // src/unknown/C0/C0E776.asm:9 LDY #.LOWORD(GAME_STATE) + game_state::unknown80
    case 0xC0E749: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000026, 2); else cpu.execute_instruction<0xA0>(0x009B26, 3); return true;
    // src/unknown/C0/C0E776.asm:9 LDY #.LOWORD(GAME_STATE) + game_state::unknown80
    // Overlapping static entry reached from 0xC0E749.
    case 0xC0E74B: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E776.asm:10 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL0A
    case 0xC0E74C: cpu.execute_instruction<0xAD>(0x00A14B, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E776.asm:10 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL0A
    case 0xC0E74F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E776.asm:10 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL0A
    case 0xC0E751: cpu.execute_instruction<0xAD>(0x00A14D, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E776.asm:10 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL0A
    case 0xC0E754: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C0E776.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E756: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C0E776.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E759: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C0E776.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E75B: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C0E776.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E75E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0E776.asm:12 CLC
    case 0xC0E760: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C0E776.asm:13 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E761: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C0E776.asm:13 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E763: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C0E776.asm:13 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E765: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C0E776.asm:13 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E767: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C0E776.asm:13 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E769: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C0E776.asm:13 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E76B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C0E776.asm:14 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E76D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C0E776.asm:14 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E76F: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C0E776.asm:14 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E772: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C0E776.asm:14 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E774: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C0/C0E776.asm:15 LDY #.LOWORD(GAME_STATE) + game_state::unknown84
    case 0xC0E777: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002A, 2); else cpu.execute_instruction<0xA0>(0x009B2A, 3); return true;
    // src/unknown/C0/C0E776.asm:15 LDY #.LOWORD(GAME_STATE) + game_state::unknown84
    // Overlapping static entry reached from 0xC0E777.
    case 0xC0E779: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E776.asm:16 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL0A
    case 0xC0E77A: cpu.execute_instruction<0xAD>(0x00A14F, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E776.asm:16 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL0A
    case 0xC0E77D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E776.asm:16 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL0A
    case 0xC0E77F: cpu.execute_instruction<0xAD>(0x00A151, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E776.asm:16 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL0A
    case 0xC0E782: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C0E776.asm:17 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E784: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C0E776.asm:17 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E787: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C0E776.asm:17 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E789: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C0E776.asm:17 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E78C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0E776.asm:18 CLC
    case 0xC0E78E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C0E776.asm:19 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E78F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C0E776.asm:19 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E791: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C0E776.asm:19 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E793: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C0E776.asm:19 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0E7F5.
    case 0xC0E794: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C0E776.asm:19 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E795: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C0E776.asm:19 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0E794.
    case 0xC0E796: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C0E776.asm:19 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E797: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C0E776.asm:19 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E799: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C0E776.asm:20 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E79B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C0E776.asm:20 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E79D: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C0E776.asm:20 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E7A0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C0E776.asm:20 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E7A2: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0E776.asm:21 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    case 0xC0E7A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0E776.asm:21 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0E7A5.
    case 0xC0E7A7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0E776.asm:21 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    case 0xC0E7A8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0E776.asm:21 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    case 0xC0E7AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0E776.asm:21 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0E7AA.
    case 0xC0E7AC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0E776.asm:21 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    case 0xC0E7AD: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E776.asm:22 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0E7AF: cpu.execute_instruction<0xAD>(0x00A147, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E776.asm:22 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0E7B2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E776.asm:22 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0E7B4: cpu.execute_instruction<0xAD>(0x00A149, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E776.asm:22 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0E7B7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0E776.asm:23 JSL MULT32
    case 0xC0E7B9: cpu.execute_instruction<0x22>(0xC09068, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E776.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0E7BD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E776.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0E7BF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E776.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0E7C1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E776.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0E7C3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0E776.asm:25 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0E7C5: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C0E776.asm:26 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0E7C8: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C0E776.asm:27 SEC
    case 0xC0E7CB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0E776.asm:28 SBC @LOCAL00 + fixed_point::integer
    case 0xC0E7CC: cpu.execute_instruction<0xE5>(0x000010, 2); return true;
    // src/unknown/C0/C0E776.asm:29 JSL CENTER_SCREEN
    case 0xC0E7CE: cpu.execute_instruction<0x22>(0xC04295, 4); return true;
    // src/unknown/C0/C0E776.asm:30 JSR UNKNOWN_C0E196
    case 0xC0E7D2: cpu.execute_instruction<0x20>(0x00E15B, 3); return true;
    // src/unknown/C0/C0E776.asm:31 JSR UNKNOWN_C0E254
    case 0xC0E7D5: cpu.execute_instruction<0x20>(0x00E219, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E776.asm:32 END_C_FUNCTION
    case 0xC0E7D8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0E776.asm:32 END_C_FUNCTION
    case 0xC0E7D9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E815.asm (unresolved).
bool execute_unresolved_c0_c0e815_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E815.asm:3 BEGIN_C_FUNCTION
    case 0xC0E7DA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E815.asm:9 END_STACK_VARS
    case 0xC0E7DC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E815.asm:9 END_STACK_VARS
    case 0xC0E7DD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E815.asm:9 END_STACK_VARS
    case 0xC0E7DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E815.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E7DE.
    case 0xC0E7E0: cpu.execute_instruction<0xFF>(0x43AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E815.asm:9 END_STACK_VARS
    case 0xC0E7E1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E815.asm:10 LDA PSI_TELEPORT_STYLE
    case 0xC0E7E2: cpu.execute_instruction<0xAD>(0x00A143, 3); return true;
    // src/unknown/C0/C0E815.asm:10 LDA PSI_TELEPORT_STYLE
    // Overlapping static entry reached from 0xC0E7E0.
    case 0xC0E7E4: cpu.execute_instruction<0xA1>(0x0000C9, 2); return true;
    // src/unknown/C0/C0E815.asm:11 CMP #TELEPORT_STYLE::INSTANT
    case 0xC0E7E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0E815.asm:11 CMP #TELEPORT_STYLE::INSTANT
    // Overlapping static entry reached from 0xC0E7E4.
    case 0xC0E7E6: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/unknown/C0/C0E815.asm:11 CMP #TELEPORT_STYLE::INSTANT
    // Overlapping static entry reached from 0xC0E7E5.
    case 0xC0E7E7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E815.asm:12 BEQ @UNKNOWN2
    case 0xC0E7E8: cpu.execute_instruction<0xF0>(0x000070, 2); return true;
    // src/unknown/C0/C0E815.asm:13 LDA #24
    case 0xC0E7EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C0E815.asm:13 LDA #24
    // Overlapping static entry reached from 0xC0E7EA.
    case 0xC0E7EC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0E815.asm:14 STA @LOCAL03
    case 0xC0E7ED: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0E815.asm:15 BRA @UNKNOWN1
    case 0xC0E7EF: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C0E815.asm:17 ASL
    case 0xC0E7F1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0E815.asm:18 TAX
    case 0xC0E7F2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E815.asm:19 LDA #ENTITY_COLLISION_DISABLED
    case 0xC0E7F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/unknown/C0/C0E815.asm:19 LDA #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC0E7F3.
    case 0xC0E7F5: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/C0/C0E815.asm:20 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0E7F6: cpu.execute_instruction<0x9D>(0x002C9C, 3); return true;
    // src/unknown/C0/C0E815.asm:21 LDA @LOCAL03
    case 0xC0E7F9: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0E815.asm:22 INC
    case 0xC0E7FB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0E815.asm:23 STA @LOCAL03
    case 0xC0E7FC: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0E815.asm:25 CMP #MAX_ENTITIES
    case 0xC0E7FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C0/C0E815.asm:25 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC0E7FE.
    case 0xC0E800: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0E815.asm:26 BCC @UNKNOWN0
    case 0xC0E801: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // src/unknown/C0/C0E815.asm:27 LDY #.LOWORD(PSI_TELEPORT_SPEED_Y) + fixed_point::integer
    case 0xC0E803: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000051, 2); else cpu.execute_instruction<0xA0>(0x00A151, 3); return true;
    // src/unknown/C0/C0E815.asm:27 LDY #.LOWORD(PSI_TELEPORT_SPEED_Y) + fixed_point::integer
    // Overlapping static entry reached from 0xC0E803.
    case 0xC0E805: cpu.execute_instruction<0xA1>(0x000084, 2); return true;
    // src/unknown/C0/C0E815.asm:28 STY @LOCAL02
    case 0xC0E806: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C0/C0E815.asm:28 STY @LOCAL02
    // Overlapping static entry reached from 0xC0E805.
    case 0xC0E807: cpu.execute_instruction<0x16>(0x0000A9, 2); return true;
    // src/unknown/C0/C0E815.asm:29 LDA #00
    case 0xC0E808: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0E815.asm:29 LDA #00
    // Overlapping static entry reached from 0xC0E807.
    case 0xC0E809: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0E815.asm:29 LDA #00
    // Overlapping static entry reached from 0xC0E808.
    case 0xC0E80A: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C0E815.asm:30 STA __BSS_START__,Y
    case 0xC0E80B: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0E815.asm:31 LDX #.LOWORD(PSI_TELEPORT_SPEED_X) + fixed_point::integer
    case 0xC0E80E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004D, 2); else cpu.execute_instruction<0xA2>(0x00A14D, 3); return true;
    // src/unknown/C0/C0E815.asm:31 LDX #.LOWORD(PSI_TELEPORT_SPEED_X) + fixed_point::integer
    // Overlapping static entry reached from 0xC0E80E.
    case 0xC0E810: cpu.execute_instruction<0xA1>(0x000086, 2); return true;
    // src/unknown/C0/C0E815.asm:32 STX @LOCAL03
    case 0xC0E811: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C0/C0E815.asm:32 STX @LOCAL03
    // Overlapping static entry reached from 0xC0E810.
    case 0xC0E812: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E815.asm:33 STA __BSS_START__,X
    case 0xC0E813: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0E815.asm:34 LOADPTR UNKNOWN_C0E674, @LOCAL00
    case 0xC0E816: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000039, 2); else cpu.execute_instruction<0xA9>(0x00E639, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0E815.asm:34 LOADPTR UNKNOWN_C0E674, @LOCAL00
    // Overlapping static entry reached from 0xC0E816.
    case 0xC0E818: cpu.execute_instruction<0xE6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0E815.asm:34 LOADPTR UNKNOWN_C0E674, @LOCAL00
    case 0xC0E819: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0E815.asm:34 LOADPTR UNKNOWN_C0E674, @LOCAL00
    // Overlapping static entry reached from 0xC0E818.
    case 0xC0E81A: cpu.execute_instruction<0x0E>(0x00C0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E815.asm:34 LOADPTR UNKNOWN_C0E674, @LOCAL00
    case 0xC0E81B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E815.asm:34 LOADPTR UNKNOWN_C0E674, @LOCAL00
    // Overlapping static entry reached from 0xC0E81B.
    case 0xC0E81D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0E815.asm:34 LOADPTR UNKNOWN_C0E674, @LOCAL00
    case 0xC0E81E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0E815.asm:35 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0E820: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000086, 2); else cpu.execute_instruction<0xA9>(0x00E386, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0E815.asm:35 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0E820.
    case 0xC0E822: cpu.execute_instruction<0xE3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0E815.asm:35 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0E823: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0E815.asm:35 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0E822.
    case 0xC0E824: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E815.asm:35 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0E825: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E815.asm:35 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0E824.
    case 0xC0E826: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E815.asm:35 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0E825.
    case 0xC0E827: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0E815.asm:35 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0E828: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0E815.asm:35 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0E826.
    case 0xC0E829: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // src/unknown/C0/C0E815.asm:36 LDA #23
    case 0xC0E82A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/unknown/C0/C0E815.asm:36 LDA #23
    // Overlapping static entry reached from 0xC0E829.
    case 0xC0E82B: cpu.execute_instruction<0x17>(0x000000, 2); return true;
    // src/unknown/C0/C0E815.asm:36 LDA #23
    // Overlapping static entry reached from 0xC0E82A.
    case 0xC0E82C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0E815.asm:37 JSL SET_PARTY_TICK_CALLBACKS
    case 0xC0E82D: cpu.execute_instruction<0x22>(0xC42E83, 4); return true;
    // src/unknown/C0/C0E815.asm:38 LDX @LOCAL03
    case 0xC0E831: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0E815.asm:39 LDA __BSS_START__,X
    case 0xC0E833: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0E815.asm:40 STA PSI_TELEPORT_SUCCESS_SCREEN_SPEED_X
    case 0xC0E836: cpu.execute_instruction<0x8D>(0x00A15B, 3); return true;
    // src/unknown/C0/C0E815.asm:41 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0E839: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C0E815.asm:42 STA PSI_TELEPORT_SUCCESS_SCREEN_X
    case 0xC0E83C: cpu.execute_instruction<0x8D>(0x00A15D, 3); return true;
    // src/unknown/C0/C0E815.asm:43 LDY @LOCAL02
    case 0xC0E83F: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C0/C0E815.asm:44 LDA __BSS_START__,Y
    case 0xC0E841: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0E815.asm:45 STA PSI_TELEPORT_SUCCESS_SCREEN_SPEED_Y
    case 0xC0E844: cpu.execute_instruction<0x8D>(0x00A15F, 3); return true;
    // src/unknown/C0/C0E815.asm:46 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC0E847: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C0/C0E815.asm:47 STA PSI_TELEPORT_SUCCESS_SCREEN_Y
    case 0xC0E84A: cpu.execute_instruction<0x8D>(0x00A161, 3); return true;
    // src/unknown/C0/C0E815.asm:48 LDX #4
    case 0xC0E84D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C0/C0E815.asm:48 LDX #4
    // Overlapping static entry reached from 0xC0E84D.
    case 0xC0E84F: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C0E815.asm:49 LDA #1
    case 0xC0E850: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0E815.asm:49 LDA #1
    // Overlapping static entry reached from 0xC0E850.
    case 0xC0E852: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0E815.asm:50 JSL FADE_OUT
    case 0xC0E853: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/unknown/C0/C0E815.asm:51 JSR UNKNOWN_C0DD0F
    case 0xC0E857: cpu.execute_instruction<0x20>(0x00DCD7, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E815.asm:53 END_C_FUNCTION
    case 0xC0E85A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0E815.asm:53 END_C_FUNCTION
    case 0xC0E85B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E897.asm (unresolved).
bool execute_unresolved_c0_c0e897_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E897.asm:3 BEGIN_C_FUNCTION
    case 0xC0E85C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E897.asm:9 END_STACK_VARS
    case 0xC0E85E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E897.asm:9 END_STACK_VARS
    case 0xC0E85F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E897.asm:9 END_STACK_VARS
    case 0xC0E860: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E897.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E860.
    case 0xC0E862: cpu.execute_instruction<0xFF>(0x43AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E897.asm:9 END_STACK_VARS
    case 0xC0E863: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E897.asm:10 LDA PSI_TELEPORT_STYLE
    case 0xC0E864: cpu.execute_instruction<0xAD>(0x00A143, 3); return true;
    // src/unknown/C0/C0E897.asm:10 LDA PSI_TELEPORT_STYLE
    // Overlapping static entry reached from 0xC0E862.
    case 0xC0E866: cpu.execute_instruction<0xA1>(0x0000C9, 2); return true;
    // src/unknown/C0/C0E897.asm:11 CMP #TELEPORT_STYLE::INSTANT
    case 0xC0E867: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0E897.asm:11 CMP #TELEPORT_STYLE::INSTANT
    // Overlapping static entry reached from 0xC0E866.
    case 0xC0E868: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/unknown/C0/C0E897.asm:11 CMP #TELEPORT_STYLE::INSTANT
    // Overlapping static entry reached from 0xC0E867.
    case 0xC0E869: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0E897.asm:12 BNE @UNKNOWN0
    case 0xC0E86A: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/unknown/C0/C0E897.asm:13 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0E86C: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C0E897.asm:14 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0E86F: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C0E897.asm:15 JSL CENTER_SCREEN
    case 0xC0E872: cpu.execute_instruction<0x22>(0xC04295, 4); return true;
    // src/unknown/C0/C0E897.asm:16 LDX #1
    case 0xC0E876: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C0E897.asm:16 LDX #1
    // Overlapping static entry reached from 0xC0E876.
    case 0xC0E878: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C0/C0E897.asm:17 TXA
    case 0xC0E879: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0E897.asm:18 JSL FADE_IN
    case 0xC0E87A: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/unknown/C0/C0E897.asm:19 JSR UNKNOWN_C0DD0F
    case 0xC0E87E: cpu.execute_instruction<0x20>(0x00DCD7, 3); return true;
    // src/unknown/C0/C0E897.asm:20 JMP @UNKNOWN7
    case 0xC0E881: cpu.execute_instruction<0x4C>(0x00E941, 3); return true;
    // src/unknown/C0/C0E897.asm:22 LDA #0
    case 0xC0E884: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0E897.asm:22 LDA #0
    // Overlapping static entry reached from 0xC0E884.
    case 0xC0E886: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0E897.asm:23 STA @VIRTUAL02
    case 0xC0E887: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0E897.asm:24 BRA @UNKNOWN2
    case 0xC0E889: cpu.execute_instruction<0x80>(0x000032, 2); return true;
    // src/unknown/C0/C0E897.asm:26 LDA @VIRTUAL02
    case 0xC0E88B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E897.asm:27 LDY #.SIZEOF(char_struct)
    case 0xC0E88D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C0E897.asm:27 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC0E88D.
    case 0xC0E88F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0E897.asm:28 JSL MULT168
    case 0xC0E890: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C0E897.asm:29 TAX
    case 0xC0E894: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E897.asm:30 LDA #.LOWORD(-1)
    case 0xC0E895: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0E897.asm:30 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0E895.
    case 0xC0E897: cpu.execute_instruction<0xFF>(0x9CB59D, 4); return true;
    // src/unknown/C0/C0E897.asm:31 STA PARTY_CHARACTERS + char_struct::unknown55,X
    case 0xC0E898: cpu.execute_instruction<0x9D>(0x009CB5, 3); return true;
    // src/unknown/C0/C0E897.asm:32 LDA @VIRTUAL02
    case 0xC0E89B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E897.asm:33 CLC
    case 0xC0E89D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E897.asm:34 ADC #24
    case 0xC0E89E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000018, 2); else cpu.execute_instruction<0x69>(0x000018, 3); return true;
    // src/unknown/C0/C0E897.asm:34 ADC #24
    // Overlapping static entry reached from 0xC0E89E.
    case 0xC0E8A0: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C0E897.asm:35 TAY
    case 0xC0E8A1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0E897.asm:36 LDX #0
    case 0xC0E8A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0E897.asm:36 LDX #0
    // Overlapping static entry reached from 0xC0E8A2.
    case 0xC0E8A4: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C0E897.asm:37 STX @LOCAL03
    case 0xC0E8A5: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C0/C0E897.asm:39 LDA @VIRTUAL02
    case 0xC0E8A7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E897.asm:40 CLC
    case 0xC0E8A9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E897.asm:41 ADC #.LOWORD(GAME_STATE)
    case 0xC0E8AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C0E897.asm:41 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC0E8AA.
    case 0xC0E8AC: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C0E897.asm:42 TAX
    case 0xC0E8AD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E897.asm:43 LDA a:game_state::unknown96,X
    case 0xC0E8AE: cpu.execute_instruction<0xBD>(0x000093, 3); return true;
    // src/unknown/C0/C0E897.asm:48 AND #$00FF
    case 0xC0E8B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0E897.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC0E8B1.
    case 0xC0E8B3: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C0/C0E897.asm:49 DEC
    case 0xC0E8B4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0E897.asm:50 LDX @LOCAL03
    case 0xC0E8B5: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0E897.asm:51 JSL UNKNOWN_C07A56
    case 0xC0E8B7: cpu.execute_instruction<0x22>(0xC07CA6, 4); return true;
    // src/unknown/C0/C0E897.asm:52 INC @VIRTUAL02
    case 0xC0E8BB: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0E897.asm:54 LDA @VIRTUAL02
    case 0xC0E8BD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E897.asm:55 CMP #6
    case 0xC0E8BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C0E897.asm:55 CMP #6
    // Overlapping static entry reached from 0xC0E8BF.
    case 0xC0E8C1: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0E897.asm:56 BCC @UNKNOWN1
    case 0xC0E8C2: cpu.execute_instruction<0x90>(0x0000C7, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0E897.asm:57 MOVE_INT_CONSTANT $00080000, PSI_TELEPORT_SPEED
    case 0xC0E8C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0E897.asm:57 MOVE_INT_CONSTANT $00080000, PSI_TELEPORT_SPEED
    // Overlapping static entry reached from 0xC0E8C4.
    case 0xC0E8C6: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0E897.asm:57 MOVE_INT_CONSTANT $00080000, PSI_TELEPORT_SPEED
    case 0xC0E8C7: cpu.execute_instruction<0x8D>(0x00A147, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0E897.asm:57 MOVE_INT_CONSTANT $00080000, PSI_TELEPORT_SPEED
    case 0xC0E8CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0E897.asm:57 MOVE_INT_CONSTANT $00080000, PSI_TELEPORT_SPEED
    // Overlapping static entry reached from 0xC0E8CA.
    case 0xC0E8CC: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0E897.asm:57 MOVE_INT_CONSTANT $00080000, PSI_TELEPORT_SPEED
    case 0xC0E8CD: cpu.execute_instruction<0x8D>(0x00A149, 3); return true;
    // src/unknown/C0/C0E897.asm:58 LDA #6
    case 0xC0E8D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C0/C0E897.asm:58 LDA #6
    // Overlapping static entry reached from 0xC0E8D0.
    case 0xC0E8D2: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E897.asm:59 STA GAME_STATE+game_state::leader_direction
    case 0xC0E8D3: cpu.execute_instruction<0x8D>(0x009B30, 3); return true;
    // src/unknown/C0/C0E897.asm:60 LDA #3
    case 0xC0E8D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C0E897.asm:60 LDA #3
    // Overlapping static entry reached from 0xC0E8D6.
    case 0xC0E8D8: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E897.asm:61 STA PSI_TELEPORT_STATE
    case 0xC0E8D9: cpu.execute_instruction<0x8D>(0x00A145, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0E897.asm:62 LOADPTR UNKNOWN_C0E776, @LOCAL00
    case 0xC0E8DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003B, 2); else cpu.execute_instruction<0xA9>(0x00E73B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0E897.asm:62 LOADPTR UNKNOWN_C0E776, @LOCAL00
    // Overlapping static entry reached from 0xC0E8DC.
    case 0xC0E8DE: cpu.execute_instruction<0xE7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0E897.asm:62 LOADPTR UNKNOWN_C0E776, @LOCAL00
    case 0xC0E8DF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0E897.asm:62 LOADPTR UNKNOWN_C0E776, @LOCAL00
    // Overlapping static entry reached from 0xC0E8DE.
    case 0xC0E8E0: cpu.execute_instruction<0x0E>(0x00C0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E897.asm:62 LOADPTR UNKNOWN_C0E776, @LOCAL00
    case 0xC0E8E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E897.asm:62 LOADPTR UNKNOWN_C0E776, @LOCAL00
    // Overlapping static entry reached from 0xC0E8E1.
    case 0xC0E8E3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0E897.asm:62 LOADPTR UNKNOWN_C0E776, @LOCAL00
    case 0xC0E8E4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0E897.asm:63 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0E8E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000086, 2); else cpu.execute_instruction<0xA9>(0x00E386, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0E897.asm:63 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0E8E6.
    case 0xC0E8E8: cpu.execute_instruction<0xE3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0E897.asm:63 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0E8E9: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0E897.asm:63 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0E8E8.
    case 0xC0E8EA: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E897.asm:63 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0E8EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E897.asm:63 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0E8EA.
    case 0xC0E8EC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E897.asm:63 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0E8EB.
    case 0xC0E8ED: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0E897.asm:63 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0E8EE: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0E897.asm:63 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0E8EC.
    case 0xC0E8EF: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // src/unknown/C0/C0E897.asm:64 LDA #23
    case 0xC0E8F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/unknown/C0/C0E897.asm:64 LDA #23
    // Overlapping static entry reached from 0xC0E8EF.
    case 0xC0E8F1: cpu.execute_instruction<0x17>(0x000000, 2); return true;
    // src/unknown/C0/C0E897.asm:64 LDA #23
    // Overlapping static entry reached from 0xC0E8F0.
    case 0xC0E8F2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0E897.asm:65 JSL SET_PARTY_TICK_CALLBACKS
    case 0xC0E8F3: cpu.execute_instruction<0x22>(0xC42E83, 4); return true;
    // src/unknown/C0/C0E897.asm:66 JSR UNKNOWN_C0DE16
    case 0xC0E8F7: cpu.execute_instruction<0x20>(0x00DDDB, 3); return true;
    // src/unknown/C0/C0E897.asm:67 LDA #MUSIC::TELEPORT_IN
    case 0xC0E8FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000087, 2); else cpu.execute_instruction<0xA9>(0x000087, 3); return true;
    // src/unknown/C0/C0E897.asm:67 LDA #MUSIC::TELEPORT_IN
    // Overlapping static entry reached from 0xC0E8FA.
    case 0xC0E8FC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0E897.asm:68 JSL CHANGE_MUSIC
    case 0xC0E8FD: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/unknown/C0/C0E897.asm:69 LDX #0
    case 0xC0E901: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0E897.asm:69 LDX #0
    // Overlapping static entry reached from 0xC0E901.
    case 0xC0E903: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C0E897.asm:70 STX @LOCAL02
    case 0xC0E904: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C0/C0E897.asm:71 BRA @UNKNOWN4
    case 0xC0E906: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C0/C0E897.asm:73 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0E908: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/C0/C0E897.asm:74 LDX @LOCAL02
    case 0xC0E90C: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C0/C0E897.asm:75 INX
    case 0xC0E90E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0E897.asm:76 STX @LOCAL02
    case 0xC0E90F: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C0/C0E897.asm:78 CPX #30
    case 0xC0E911: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00001E, 2); else cpu.execute_instruction<0xE0>(0x00001E, 3); return true;
    // src/unknown/C0/C0E897.asm:78 CPX #30
    // Overlapping static entry reached from 0xC0E911.
    case 0xC0E913: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0E897.asm:79 BCC @UNKNOWN3
    case 0xC0E914: cpu.execute_instruction<0x90>(0x0000F2, 2); return true;
    // src/unknown/C0/C0E897.asm:80 LDX #4
    case 0xC0E916: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C0/C0E897.asm:80 LDX #4
    // Overlapping static entry reached from 0xC0E916.
    case 0xC0E918: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C0E897.asm:81 LDA #1
    case 0xC0E919: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0E897.asm:81 LDA #1
    // Overlapping static entry reached from 0xC0E919.
    case 0xC0E91B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0E897.asm:82 JSL FADE_IN
    case 0xC0E91C: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/unknown/C0/C0E897.asm:83 BRA @UNKNOWN6
    case 0xC0E920: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C0/C0E897.asm:85 JSL OAM_CLEAR
    case 0xC0E922: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/unknown/C0/C0E897.asm:86 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC0E926: cpu.execute_instruction<0x22>(0xC09445, 4); return true;
    // src/unknown/C0/C0E897.asm:87 JSL UPDATE_SCREEN
    case 0xC0E92A: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/unknown/C0/C0E897.asm:88 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0E92E: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/C0/C0E897.asm:90 LDA PSI_TELEPORT_SPEED + fixed_point::integer
    case 0xC0E932: cpu.execute_instruction<0xAD>(0x00A149, 3); return true;
    // src/unknown/C0/C0E897.asm:91 BNE @UNKNOWN5
    case 0xC0E935: cpu.execute_instruction<0xD0>(0x0000EB, 2); return true;
    // src/unknown/C0/C0E897.asm:92 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0E937: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C0E897.asm:93 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0E93A: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C0E897.asm:94 JSL CENTER_SCREEN
    case 0xC0E93D: cpu.execute_instruction<0x22>(0xC04295, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E897.asm:96 END_C_FUNCTION
    case 0xC0E941: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0E897.asm:96 END_C_FUNCTION
    case 0xC0E942: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E979.asm (unresolved).
bool execute_unresolved_c0_c0e979_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0E979.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0E943: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0E979.asm:4 RTL
    case 0xC0E945: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E97C.asm (unresolved).
bool execute_unresolved_c0_c0e97c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E97C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0E946: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E97C.asm:6 END_STACK_VARS
    case 0xC0E948: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E97C.asm:6 END_STACK_VARS
    case 0xC0E949: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E97C.asm:6 END_STACK_VARS
    case 0xC0E94A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E97C.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E94A.
    case 0xC0E94C: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E97C.asm:6 END_STACK_VARS
    case 0xC0E94D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E97C.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0xC0E94E: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0E97C.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0E94C.
    case 0xC0E950: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0E97C.asm:8 STA @VIRTUAL04
    case 0xC0E951: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0E97C.asm:9 ASL
    case 0xC0E953: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0E97C.asm:10 STA @VIRTUAL02
    case 0xC0E954: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0E97C.asm:11 LDY @VIRTUAL04
    case 0xC0E956: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C0/C0E97C.asm:12 LDX @VIRTUAL02
    case 0xC0E958: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E97C.asm:13 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0E95A: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0E97C.asm:14 TAX
    case 0xC0E95D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E97C.asm:15 STX @LOCAL00
    case 0xC0E95E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0E97C.asm:16 LDX @VIRTUAL02
    case 0xC0E960: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E97C.asm:17 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0E962: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C0E97C.asm:18 LDX @LOCAL00
    case 0xC0E965: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0E97C.asm:19 JSL UNKNOWN_C05F33
    case 0xC0E967: cpu.execute_instruction<0x22>(0xC06161, 4); return true;
    // src/unknown/C0/C0E97C.asm:20 LDX @VIRTUAL02
    case 0xC0E96B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E97C.asm:21 STA ENTITY_SURFACE_FLAGS,X
    case 0xC0E96D: cpu.execute_instruction<0x9D>(0x002FA8, 3); return true;
    // src/unknown/C0/C0E97C.asm:22 LDY @VIRTUAL04
    case 0xC0E970: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C0/C0E97C.asm:23 LDX #.LOWORD(-1)
    case 0xC0E972: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0E97C.asm:23 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0E972.
    case 0xC0E974: cpu.execute_instruction<0xFF>(0xA60E86, 4); return true;
    // src/unknown/C0/C0E97C.asm:24 STX @LOCAL00
    case 0xC0E975: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0E97C.asm:25 LDX @VIRTUAL02
    case 0xC0E977: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E97C.asm:25 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC0E974.
    case 0xC0E978: cpu.execute_instruction<0x02>(0x0000BD, 2); return true;
    // src/unknown/C0/C0E97C.asm:26 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC0E979: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/unknown/C0/C0E97C.asm:27 LDX @LOCAL00
    case 0xC0E97C: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0E97C.asm:28 JSL UNKNOWN_C07A56
    case 0xC0E97E: cpu.execute_instruction<0x22>(0xC07CA6, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E97C.asm:29 END_C_FUNCTION
    case 0xC0E982: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0E97C.asm:29 END_C_FUNCTION
    case 0xC0E983: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E9BA.asm (unresolved).
bool execute_unresolved_c0_c0e9ba_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E9BA.asm:3 BEGIN_C_FUNCTION
    case 0xC0E984: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E9BA.asm:8 END_STACK_VARS
    case 0xC0E986: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E9BA.asm:8 END_STACK_VARS
    case 0xC0E987: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E9BA.asm:8 END_STACK_VARS
    case 0xC0E988: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E9BA.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E988.
    case 0xC0E98A: cpu.execute_instruction<0xFF>(0x01A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E9BA.asm:8 END_STACK_VARS
    case 0xC0E98B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E9BA.asm:9 LDA #1
    case 0xC0E98C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0E9BA.asm:9 LDA #1
    // Overlapping static entry reached from 0xC0E98C.
    case 0xC0E98E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E9BA.asm:10 STA DISABLED_TRANSITIONS
    case 0xC0E98F: cpu.execute_instruction<0x8D>(0x00B68A, 3); return true;
    // src/unknown/C0/C0E9BA.asm:11 LDA #MUSIC::TELEPORT_FAIL
    case 0xC0E992: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/unknown/C0/C0E9BA.asm:11 LDA #MUSIC::TELEPORT_FAIL
    // Overlapping static entry reached from 0xC0E992.
    case 0xC0E994: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0E9BA.asm:12 JSL CHANGE_MUSIC
    case 0xC0E995: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/unknown/C0/C0E9BA.asm:13 LDA #PARTY_LEADER_ENTITY_INDEX
    case 0xC0E999: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C0E9BA.asm:13 LDA #PARTY_LEADER_ENTITY_INDEX
    // Overlapping static entry reached from 0xC0E999.
    case 0xC0E99B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0E9BA.asm:14 STA @LOCAL02
    case 0xC0E99C: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0E9BA.asm:15 BRA @UNKNOWN1
    case 0xC0E99E: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C0/C0E9BA.asm:17 ASL
    case 0xC0E9A0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0E9BA.asm:18 CLC
    case 0xC0E9A1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E9BA.asm:19 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC0E9A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F8, 2); else cpu.execute_instruction<0x69>(0x000FF8, 3); return true;
    // src/unknown/C0/C0E9BA.asm:19 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC0E9A2.
    case 0xC0E9A4: cpu.execute_instruction<0x0F>(0x00BDAA, 4); return true;
    // src/unknown/C0/C0E9BA.asm:20 TAX
    case 0xC0E9A5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E9BA.asm:21 LDA __BSS_START__,X
    case 0xC0E9A6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0E9BA.asm:21 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC0E9A4.
    case 0xC0E9A8: cpu.execute_instruction<0x00>(0x000009, 2); return true;
    // src/unknown/C0/C0E9BA.asm:22 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN15
    case 0xC0E9A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/unknown/C0/C0E9BA.asm:22 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN15
    // Overlapping static entry reached from 0xC0E9A9.
    case 0xC0E9AB: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/C0/C0E9BA.asm:23 STA __BSS_START__,X
    case 0xC0E9AC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0E9BA.asm:24 LDA @LOCAL02
    case 0xC0E9AF: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0E9BA.asm:25 INC
    case 0xC0E9B1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0E9BA.asm:26 STA @LOCAL02
    case 0xC0E9B2: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0E9BA.asm:28 CMP #MAX_ENTITIES
    case 0xC0E9B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C0/C0E9BA.asm:28 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC0E9B4.
    case 0xC0E9B6: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0E9BA.asm:29 BCC @UNKNOWN0
    case 0xC0E9B7: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0E9BA.asm:30 LOADPTR UNKNOWN_C0E979, @LOCAL00
    case 0xC0E9B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000043, 2); else cpu.execute_instruction<0xA9>(0x00E943, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0E9BA.asm:30 LOADPTR UNKNOWN_C0E979, @LOCAL00
    // Overlapping static entry reached from 0xC0E9B9.
    case 0xC0E9BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000085, 2); else cpu.execute_instruction<0xE9>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0E9BA.asm:30 LOADPTR UNKNOWN_C0E979, @LOCAL00
    case 0xC0E9BC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0E9BA.asm:30 LOADPTR UNKNOWN_C0E979, @LOCAL00
    // Overlapping static entry reached from 0xC0E9BB.
    case 0xC0E9BD: cpu.execute_instruction<0x0E>(0x00C0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E9BA.asm:30 LOADPTR UNKNOWN_C0E979, @LOCAL00
    case 0xC0E9BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E9BA.asm:30 LOADPTR UNKNOWN_C0E979, @LOCAL00
    // Overlapping static entry reached from 0xC0E9BE.
    case 0xC0E9C0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0E9BA.asm:30 LOADPTR UNKNOWN_C0E979, @LOCAL00
    case 0xC0E9C1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0E9BA.asm:31 LOADPTR UNKNOWN_C0E97C, @LOCAL01
    case 0xC0E9C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000046, 2); else cpu.execute_instruction<0xA9>(0x00E946, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0E9BA.asm:31 LOADPTR UNKNOWN_C0E97C, @LOCAL01
    // Overlapping static entry reached from 0xC0E9C3.
    case 0xC0E9C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000085, 2); else cpu.execute_instruction<0xE9>(0x001285, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0E9BA.asm:31 LOADPTR UNKNOWN_C0E97C, @LOCAL01
    case 0xC0E9C6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0E9BA.asm:31 LOADPTR UNKNOWN_C0E97C, @LOCAL01
    // Overlapping static entry reached from 0xC0E9C5.
    case 0xC0E9C7: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E9BA.asm:31 LOADPTR UNKNOWN_C0E97C, @LOCAL01
    case 0xC0E9C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E9BA.asm:31 LOADPTR UNKNOWN_C0E97C, @LOCAL01
    // Overlapping static entry reached from 0xC0E9C7.
    case 0xC0E9C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E9BA.asm:31 LOADPTR UNKNOWN_C0E97C, @LOCAL01
    // Overlapping static entry reached from 0xC0E9C8.
    case 0xC0E9CA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0E9BA.asm:31 LOADPTR UNKNOWN_C0E97C, @LOCAL01
    case 0xC0E9CB: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0E9BA.asm:31 LOADPTR UNKNOWN_C0E97C, @LOCAL01
    // Overlapping static entry reached from 0xC0E9C9.
    case 0xC0E9CC: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // src/unknown/C0/C0E9BA.asm:32 LDA #23
    case 0xC0E9CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/unknown/C0/C0E9BA.asm:32 LDA #23
    // Overlapping static entry reached from 0xC0E9CC.
    case 0xC0E9CE: cpu.execute_instruction<0x17>(0x000000, 2); return true;
    // src/unknown/C0/C0E9BA.asm:32 LDA #23
    // Overlapping static entry reached from 0xC0E9CD.
    case 0xC0E9CF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0E9BA.asm:33 JSL SET_PARTY_TICK_CALLBACKS
    case 0xC0E9D0: cpu.execute_instruction<0x22>(0xC42E83, 4); return true;
    // src/unknown/C0/C0E9BA.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC0E9D4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0E9BA.asm:35 LDA #1
    case 0xC0E9D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C0/C0E9BA.asm:36 STA GAME_STATE + game_state::party_status
    case 0xC0E9D8: cpu.execute_instruction<0x8D>(0x009AF1, 3); return true;
    // src/unknown/C0/C0E9BA.asm:36 STA GAME_STATE + game_state::party_status
    // Overlapping static entry reached from 0xC0E9D6.
    case 0xC0E9D9: cpu.execute_instruction<0xF1>(0x00009A, 2); return true;
    // src/unknown/C0/C0E9BA.asm:37 LDX #0
    case 0xC0E9DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0E9BA.asm:37 LDX #0
    // Overlapping static entry reached from 0xC0E9DB.
    case 0xC0E9DD: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C0E9BA.asm:38 STX @LOCAL02
    case 0xC0E9DE: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C0/C0E9BA.asm:39 BRA @UNKNOWN3
    case 0xC0E9E0: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C0/C0E9BA.asm:41 JSL OAM_CLEAR
    case 0xC0E9E2: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/unknown/C0/C0E9BA.asm:42 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC0E9E6: cpu.execute_instruction<0x22>(0xC09445, 4); return true;
    // src/unknown/C0/C0E9BA.asm:43 JSL UPDATE_SCREEN
    case 0xC0E9EA: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/unknown/C0/C0E9BA.asm:44 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0E9EE: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/C0/C0E9BA.asm:44 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC0EA44.
    case 0xC0E9F0: cpu.execute_instruction<0x87>(0x0000C0, 2); return true;
    // src/unknown/C0/C0E9BA.asm:45 LDX @LOCAL02
    case 0xC0E9F2: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C0/C0E9BA.asm:46 INX
    case 0xC0E9F4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0E9BA.asm:47 STX @LOCAL02
    case 0xC0E9F5: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C0/C0E9BA.asm:49 CPX #180
    case 0xC0E9F7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000B4, 2); else cpu.execute_instruction<0xE0>(0x0000B4, 3); return true;
    // src/unknown/C0/C0E9BA.asm:49 CPX #180
    // Overlapping static entry reached from 0xC0E9F7.
    case 0xC0E9F9: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0E9BA.asm:50 BCC @UNKNOWN2
    case 0xC0E9FA: cpu.execute_instruction<0x90>(0x0000E6, 2); return true;
    // src/unknown/C0/C0E9BA.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC0E9FC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0E9BA.asm:52 STZ GAME_STATE + game_state::party_status
    case 0xC0E9FE: cpu.execute_instruction<0x9C>(0x009AF1, 3); return true;
    // src/unknown/C0/C0E9BA.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC0EA01: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0E9BA.asm:54 STZ DISABLED_TRANSITIONS
    case 0xC0EA03: cpu.execute_instruction<0x9C>(0x00B68A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E9BA.asm:55 END_C_FUNCTION
    case 0xC0EA06: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0E9BA.asm:55 END_C_FUNCTION
    case 0xC0EA07: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0EBAA-jp.asm (unresolved).
bool execute_unresolved_c0_c0ebaa_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC0EBAA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:11 END_STACK_VARS
    case 0xC0EBAC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:11 END_STACK_VARS
    case 0xC0EBAD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:11 END_STACK_VARS
    case 0xC0EBAE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:11 END_STACK_VARS
    case 0xC0EBAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC0EBAF.
    case 0xC0EBB1: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:11 END_STACK_VARS
    case 0xC0EBB2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:11 END_STACK_VARS
    case 0xC0EBB3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0EBAA-jp.asm:12 STX @LOCAL02
    case 0xC0EBB4: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:12 STX @LOCAL02
    // Overlapping static entry reached from 0xC0EBB1.
    case 0xC0EBB5: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:13 STA @VIRTUAL04
    case 0xC0EBB6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:13 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC0EBB5.
    case 0xC0EBB7: cpu.execute_instruction<0x04>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:14 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC0EBB8: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:14 MOVE_INT @PARAM02, @VIRTUAL06
    // Overlapping static entry reached from 0xC0EBB7.
    case 0xC0EBB9: cpu.execute_instruction<0x22>(0xA50685, 4); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:14 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC0EBBA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:14 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC0EBBC: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:14 MOVE_INT @PARAM02, @VIRTUAL06
    // Overlapping static entry reached from 0xC0EBB9.
    case 0xC0EBBD: cpu.execute_instruction<0x24>(0x000085, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:14 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC0EBBE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:14 MOVE_INT @PARAM02, @VIRTUAL06
    // Overlapping static entry reached from 0xC0EBBD.
    case 0xC0EBBF: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C0EBAA-jp.asm:15 LDX #0
    case 0xC0EBC0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0EBAA-jp.asm:15 LDX #0
    // Overlapping static entry reached from 0xC0EBC0.
    case 0xC0EBC2: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:16 BRA @UNKNOWN3
    case 0xC0EBC3: cpu.execute_instruction<0x80>(0x000054, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:18 TXA
    case 0xC0EBC5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:19 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC0EBC6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:19 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC0EBC7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:19 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC0EBC8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:19 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC0EBC9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:19 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC0EBCA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0EBAA-jp.asm:20 STA @VIRTUAL02
    case 0xC0EBCB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:21 STA @LOCAL01
    case 0xC0EBCD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:22 TXA
    case 0xC0EBCF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:589 ASL
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:23 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC0EBD0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:590 ASL
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:23 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC0EBD1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:591 ASL
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:23 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC0EBD2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:592 ASL
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:23 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC0EBD3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0EBAA-jp.asm:24 CLC
    case 0xC0EBD4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0EBAA-jp.asm:25 ADC @LOCAL02
    case 0xC0EBD5: cpu.execute_instruction<0x65>(0x000012, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:26 CLC
    case 0xC0EBD7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0EBAA-jp.asm:27 ADC @VIRTUAL04
    case 0xC0EBD8: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:28 TAY
    case 0xC0EBDA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0EBAA-jp.asm:29 LDA #0
    case 0xC0EBDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0EBAA-jp.asm:29 LDA #0
    // Overlapping static entry reached from 0xC0EBDB.
    case 0xC0EBDD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:30 STA @LOCAL00
    case 0xC0EBDE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:31 BRA @UNKNOWN2
    case 0xC0EBE0: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:33 ASL
    case 0xC0EBE2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0EBAA-jp.asm:34 PHA
    case 0xC0EBE3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0EBAA-jp.asm:35 LDA @LOCAL01
    case 0xC0EBE4: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:36 STA @VIRTUAL02
    case 0xC0EBE6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:37 ASL
    case 0xC0EBE8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0EBAA-jp.asm:38 STA TEMP_REGISTER
    case 0xC0EBE9: cpu.execute_instruction<0x8D>(0x0000BE, 3); return true;
    // src/unknown/C0/C0EBAA-jp.asm:39 PLA
    case 0xC0EBEC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0EBAA-jp.asm:40 STA @VIRTUAL02
    case 0xC0EBED: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:41 LDA TEMP_REGISTER
    case 0xC0EBEF: cpu.execute_instruction<0xAD>(0x0000BE, 3); return true;
    // src/unknown/C0/C0EBAA-jp.asm:42 CLC
    case 0xC0EBF2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0EBAA-jp.asm:43 ADC @VIRTUAL02
    case 0xC0EBF3: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:44 PHA
    case 0xC0EBF5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:45 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0EBF6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:45 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0EBF8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:45 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0EBFA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:45 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0EBFC: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:46 PLA
    case 0xC0EBFE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0EBAA-jp.asm:47 CLC
    case 0xC0EBFF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0EBAA-jp.asm:48 ADC @VIRTUAL0A
    case 0xC0EC00: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:49 STA @VIRTUAL0A
    case 0xC0EC02: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:50 LDA @LOCAL00
    case 0xC0EC04: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:51 STA @VIRTUAL02
    case 0xC0EC06: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:52 TYA
    case 0xC0EC08: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0EBAA-jp.asm:53 CLC
    case 0xC0EC09: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0EBAA-jp.asm:54 ADC @VIRTUAL02
    case 0xC0EC0A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:55 STA [@VIRTUAL0A]
    case 0xC0EC0C: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:56 LDA @LOCAL00
    case 0xC0EC0E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:57 INC
    case 0xC0EC10: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0EBAA-jp.asm:58 STA @LOCAL00
    case 0xC0EC11: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:60 CMP #16
    case 0xC0EC13: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/unknown/C0/C0EBAA-jp.asm:60 CMP #16
    // Overlapping static entry reached from 0xC0EC13.
    case 0xC0EC15: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:61 BCC @UNKNOWN1
    case 0xC0EC16: cpu.execute_instruction<0x90>(0x0000CA, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:62 INX
    case 0xC0EC18: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0EBAA-jp.asm:64 CPX #16
    case 0xC0EC19: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/unknown/C0/C0EBAA-jp.asm:64 CPX #16
    // Overlapping static entry reached from 0xC0EC19.
    case 0xC0EC1B: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0EBAA-jp.asm:65 BCC @UNKNOWN0
    case 0xC0EC1C: cpu.execute_instruction<0x90>(0x0000A7, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:66 END_C_FUNCTION
    case 0xC0EC1E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0EBAA-jp.asm:66 END_C_FUNCTION
    case 0xC0EC1F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0EBE0-jp.asm (unresolved).
bool execute_unresolved_c0_c0ebe0_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0EC20: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:7 END_STACK_VARS
    case 0xC0EC22: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:7 END_STACK_VARS
    case 0xC0EC23: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:7 END_STACK_VARS
    case 0xC0EC24: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0EC24.
    case 0xC0EC26: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:7 END_STACK_VARS
    case 0xC0EC27: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0EC28: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC0EC28.
    case 0xC0EC2A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0EC2B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0EC2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC0EC2D.
    case 0xC0EC2F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0EC30: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:9 LOADPTR TITLE_SCREEN_GRAPHICS, @LOCAL00
    case 0xC0EC32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A0, 2); else cpu.execute_instruction<0xA9>(0x00A0A0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:9 LOADPTR TITLE_SCREEN_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EC32.
    case 0xC0EC34: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000085, 2); else cpu.execute_instruction<0xA0>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:9 LOADPTR TITLE_SCREEN_GRAPHICS, @LOCAL00
    case 0xC0EC35: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:9 LOADPTR TITLE_SCREEN_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EC34.
    case 0xC0EC36: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:9 LOADPTR TITLE_SCREEN_GRAPHICS, @LOCAL00
    case 0xC0EC37: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:9 LOADPTR TITLE_SCREEN_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EC37.
    case 0xC0EC39: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:9 LOADPTR TITLE_SCREEN_GRAPHICS, @LOCAL00
    case 0xC0EC3A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EC3C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EC3E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EC40: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EC42: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0EBE0-jp.asm:11 JSL DECOMP
    case 0xC0EC44: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_2_MOTHER2, $2000, 0
    case 0xC0EC48: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_2_MOTHER2, $2000, 0
    case 0xC0EC4A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_2_MOTHER2, $2000, 0
    case 0xC0EC4C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_2_MOTHER2, $2000, 0
    case 0xC0EC4E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_2_MOTHER2, $2000, 0
    case 0xC0EC50: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x001000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_2_MOTHER2, $2000, 0
    // Overlapping static entry reached from 0xC0EC50.
    case 0xC0EC52: cpu.execute_instruction<0x10>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_2_MOTHER2, $2000, 0
    case 0xC0EC53: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x002000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_2_MOTHER2, $2000, 0
    // Overlapping static entry reached from 0xC0EC52.
    case 0xC0EC54: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_2_MOTHER2, $2000, 0
    // Overlapping static entry reached from 0xC0EC53.
    case 0xC0EC55: cpu.execute_instruction<0x20>(0x0020E2, 3); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_2_MOTHER2, $2000, 0
    case 0xC0EC56: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_2_MOTHER2, $2000, 0
    case 0xC0EC58: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_2_MOTHER2, $2000, 0
    case 0xC0EC5A: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_2_MOTHER2, $2000, 0
    // Overlapping static entry reached from 0xC0EC58.
    case 0xC0EC5B: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_2_MOTHER2, $2000, 0
    // Overlapping static entry reached from 0xC0EC5B.
    case 0xC0EC5D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00C7A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:14 LOADPTR TITLE_SCREEN_ARRANGEMENT, @LOCAL00
    case 0xC0EC5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x00B2C7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:14 LOADPTR TITLE_SCREEN_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EC5D.
    case 0xC0EC5F: cpu.execute_instruction<0xC7>(0x0000B2, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:14 LOADPTR TITLE_SCREEN_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EC5E.
    case 0xC0EC60: cpu.execute_instruction<0xB2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:14 LOADPTR TITLE_SCREEN_ARRANGEMENT, @LOCAL00
    case 0xC0EC61: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:14 LOADPTR TITLE_SCREEN_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EC60.
    case 0xC0EC62: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:14 LOADPTR TITLE_SCREEN_ARRANGEMENT, @LOCAL00
    case 0xC0EC63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:14 LOADPTR TITLE_SCREEN_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EC63.
    case 0xC0EC65: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:14 LOADPTR TITLE_SCREEN_ARRANGEMENT, @LOCAL00
    case 0xC0EC66: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:15 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EC68: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:15 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EC6A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:15 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EC6C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:15 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EC6E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0EBE0-jp.asm:16 JSL DECOMP
    case 0xC0EC70: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_1_MOTHER2, $2000, 0
    case 0xC0EC74: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_1_MOTHER2, $2000, 0
    case 0xC0EC76: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_1_MOTHER2, $2000, 0
    case 0xC0EC78: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_1_MOTHER2, $2000, 0
    case 0xC0EC7A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_1_MOTHER2, $2000, 0
    case 0xC0EC7C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_1_MOTHER2, $2000, 0
    // Overlapping static entry reached from 0xC0EC7C.
    case 0xC0EC7E: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_1_MOTHER2, $2000, 0
    case 0xC0EC7F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x002000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_1_MOTHER2, $2000, 0
    // Overlapping static entry reached from 0xC0EC7F.
    case 0xC0EC81: cpu.execute_instruction<0x20>(0x0020E2, 3); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_1_MOTHER2, $2000, 0
    case 0xC0EC82: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1161 TYA
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_1_MOTHER2, $2000, 0
    case 0xC0EC84: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILES_1_MOTHER2, $2000, 0
    case 0xC0EC85: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:19 LOADPTR UNKNOWN_E1C6E5, @LOCAL00
    case 0xC0EC89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00BB01, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:19 LOADPTR UNKNOWN_E1C6E5, @LOCAL00
    // Overlapping static entry reached from 0xC0EC89.
    case 0xC0EC8B: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:19 LOADPTR UNKNOWN_E1C6E5, @LOCAL00
    case 0xC0EC8C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:19 LOADPTR UNKNOWN_E1C6E5, @LOCAL00
    case 0xC0EC8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:19 LOADPTR UNKNOWN_E1C6E5, @LOCAL00
    // Overlapping static entry reached from 0xC0EC8E.
    case 0xC0EC90: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:19 LOADPTR UNKNOWN_E1C6E5, @LOCAL00
    case 0xC0EC91: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EC93: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EC95: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EC97: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EC99: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0EBE0-jp.asm:21 JSL DECOMP
    case 0xC0EC9B: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_MOTHER2, $2000, 0
    case 0xC0EC9F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_MOTHER2, $2000, 0
    case 0xC0ECA1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_MOTHER2, $2000, 0
    case 0xC0ECA3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_MOTHER2, $2000, 0
    case 0xC0ECA5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_MOTHER2, $2000, 0
    case 0xC0ECA7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_MOTHER2, $2000, 0
    // Overlapping static entry reached from 0xC0ECA7.
    case 0xC0ECA9: cpu.execute_instruction<0x20>(0x00E2BB, 3); return true;
    // include/macros.asm:1155 TYX
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_MOTHER2, $2000, 0
    case 0xC0ECAA: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_MOTHER2, $2000, 0
    case 0xC0ECAB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_MOTHER2, $2000, 0
    // Overlapping static entry reached from 0xC0ECA9.
    case 0xC0ECAC: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_MOTHER2, $2000, 0
    case 0xC0ECAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_MOTHER2, $2000, 0
    case 0xC0ECAF: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_MOTHER2, $2000, 0
    // Overlapping static entry reached from 0xC0ECAD.
    case 0xC0ECB0: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_MOTHER2, $2000, 0
    // Overlapping static entry reached from 0xC0ECB0.
    case 0xC0ECB2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00E1A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:24 LOADPTR UNKNOWN_ARRANGEMENT_9DE1, @LOCAL00
    case 0xC0ECB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x009DE1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:24 LOADPTR UNKNOWN_ARRANGEMENT_9DE1, @LOCAL00
    // Overlapping static entry reached from 0xC0ECB2.
    case 0xC0ECB4: cpu.execute_instruction<0xE1>(0x00009D, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:24 LOADPTR UNKNOWN_ARRANGEMENT_9DE1, @LOCAL00
    // Overlapping static entry reached from 0xC0ECB3.
    case 0xC0ECB5: cpu.execute_instruction<0x9D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:24 LOADPTR UNKNOWN_ARRANGEMENT_9DE1, @LOCAL00
    case 0xC0ECB6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:24 LOADPTR UNKNOWN_ARRANGEMENT_9DE1, @LOCAL00
    case 0xC0ECB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:24 LOADPTR UNKNOWN_ARRANGEMENT_9DE1, @LOCAL00
    // Overlapping static entry reached from 0xC0ECB8.
    case 0xC0ECBA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:24 LOADPTR UNKNOWN_ARRANGEMENT_9DE1, @LOCAL00
    case 0xC0ECBB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:25 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0ECBD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:25 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0ECBF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:25 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0ECC1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:25 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0ECC3: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0EBE0-jp.asm:26 JSL DECOMP
    case 0xC0ECC5: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:27 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_2_MOTHER2, $0800, 0
    case 0xC0ECC9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:27 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_2_MOTHER2, $0800, 0
    case 0xC0ECCB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:27 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_2_MOTHER2, $0800, 0
    case 0xC0ECCD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:27 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_2_MOTHER2, $0800, 0
    case 0xC0ECCF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:27 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_2_MOTHER2, $0800, 0
    case 0xC0ECD1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x003C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:27 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_2_MOTHER2, $0800, 0
    // Overlapping static entry reached from 0xC0ECD1.
    case 0xC0ECD3: cpu.execute_instruction<0x3C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:27 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_2_MOTHER2, $0800, 0
    case 0xC0ECD4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:27 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_2_MOTHER2, $0800, 0
    // Overlapping static entry reached from 0xC0ECD4.
    case 0xC0ECD6: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:27 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_2_MOTHER2, $0800, 0
    case 0xC0ECD7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:27 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_2_MOTHER2, $0800, 0
    case 0xC0ECD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:27 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_2_MOTHER2, $0800, 0
    case 0xC0ECDB: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:27 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_2_MOTHER2, $0800, 0
    // Overlapping static entry reached from 0xC0ECD9.
    case 0xC0ECDC: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:27 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_2_MOTHER2, $0800, 0
    // Overlapping static entry reached from 0xC0ECDC.
    case 0xC0ECDE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x008CA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:29 LOADPTR UNKNOWN_ARRANGEMENT_B18C, @LOCAL00
    case 0xC0ECDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008C, 2); else cpu.execute_instruction<0xA9>(0x00B18C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:29 LOADPTR UNKNOWN_ARRANGEMENT_B18C, @LOCAL00
    // Overlapping static entry reached from 0xC0ECDE.
    case 0xC0ECE0: cpu.execute_instruction<0x8C>(0x0085B1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:29 LOADPTR UNKNOWN_ARRANGEMENT_B18C, @LOCAL00
    // Overlapping static entry reached from 0xC0ECDF.
    case 0xC0ECE1: cpu.execute_instruction<0xB1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:29 LOADPTR UNKNOWN_ARRANGEMENT_B18C, @LOCAL00
    case 0xC0ECE2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:29 LOADPTR UNKNOWN_ARRANGEMENT_B18C, @LOCAL00
    // Overlapping static entry reached from 0xC0ECE1.
    case 0xC0ECE3: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:29 LOADPTR UNKNOWN_ARRANGEMENT_B18C, @LOCAL00
    case 0xC0ECE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:29 LOADPTR UNKNOWN_ARRANGEMENT_B18C, @LOCAL00
    // Overlapping static entry reached from 0xC0ECE4.
    case 0xC0ECE6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:29 LOADPTR UNKNOWN_ARRANGEMENT_B18C, @LOCAL00
    case 0xC0ECE7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:30 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0ECE9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:30 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0ECEB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:30 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0ECED: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:30 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0ECEF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0EBE0-jp.asm:31 JSL DECOMP
    case 0xC0ECF1: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:32 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_1_MOTHER2, $0800, 0
    case 0xC0ECF5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:32 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_1_MOTHER2, $0800, 0
    case 0xC0ECF7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:32 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_1_MOTHER2, $0800, 0
    case 0xC0ECF9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:32 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_1_MOTHER2, $0800, 0
    case 0xC0ECFB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:32 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_1_MOTHER2, $0800, 0
    case 0xC0ECFD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x003800, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:32 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_1_MOTHER2, $0800, 0
    // Overlapping static entry reached from 0xC0ECFD.
    case 0xC0ECFF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:32 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_1_MOTHER2, $0800, 0
    case 0xC0ED00: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:32 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_1_MOTHER2, $0800, 0
    // Overlapping static entry reached from 0xC0ED00.
    case 0xC0ED02: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:32 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_1_MOTHER2, $0800, 0
    case 0xC0ED03: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:32 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_1_MOTHER2, $0800, 0
    case 0xC0ED05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:32 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_1_MOTHER2, $0800, 0
    case 0xC0ED07: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:32 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_1_MOTHER2, $0800, 0
    // Overlapping static entry reached from 0xC0ED05.
    case 0xC0ED08: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:32 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_1_MOTHER2, $0800, 0
    // Overlapping static entry reached from 0xC0ED08.
    case 0xC0ED0A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0091A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:34 LOADPTR UNKNOWN_E1C291, @LOCAL00
    case 0xC0ED0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000091, 2); else cpu.execute_instruction<0xA9>(0x00C291, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:34 LOADPTR UNKNOWN_E1C291, @LOCAL00
    // Overlapping static entry reached from 0xC0ED0A.
    case 0xC0ED0C: cpu.execute_instruction<0x91>(0x0000C2, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:34 LOADPTR UNKNOWN_E1C291, @LOCAL00
    // Overlapping static entry reached from 0xC0ED0B.
    case 0xC0ED0D: cpu.execute_instruction<0xC2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:34 LOADPTR UNKNOWN_E1C291, @LOCAL00
    case 0xC0ED0E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:34 LOADPTR UNKNOWN_E1C291, @LOCAL00
    // Overlapping static entry reached from 0xC0ED0D.
    case 0xC0ED0F: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:34 LOADPTR UNKNOWN_E1C291, @LOCAL00
    case 0xC0ED10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:34 LOADPTR UNKNOWN_E1C291, @LOCAL00
    // Overlapping static entry reached from 0xC0ED10.
    case 0xC0ED12: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:34 LOADPTR UNKNOWN_E1C291, @LOCAL00
    case 0xC0ED13: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:35 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0ED15: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:35 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0ED17: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:35 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0ED19: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:35 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0ED1B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0EBE0-jp.asm:36 JSL DECOMP
    case 0xC0ED1D: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0ED21: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0ED23: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0ED25: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0ED27: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0EBE0-jp.asm:38 LDX #BPP4PALETTE_SIZE * 16
    case 0xC0ED29: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/unknown/C0/C0EBE0-jp.asm:38 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC0ED29.
    case 0xC0ED2B: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/C0/C0EBE0-jp.asm:39 LDA #.LOWORD(PALETTES)
    case 0xC0ED2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C0/C0EBE0-jp.asm:39 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0ED2C.
    case 0xC0ED2E: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C0/C0EBE0-jp.asm:40 JSL MEMCPY16
    case 0xC0ED2F: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C0/C0EBE0-jp.asm:41 STZ PALETTES
    case 0xC0ED33: cpu.execute_instruction<0x9C>(0x000200, 3); return true;
    // src/unknown/C0/C0EBE0-jp.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xC0ED36: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0EBE0-jp.asm:43 LDA #PALETTE_UPLOAD::FULL
    case 0xC0ED38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C0/C0EBE0-jp.asm:44 STA PALETTE_UPLOAD_MODE
    case 0xC0ED3A: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C0/C0EBE0-jp.asm:44 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0ED38.
    case 0xC0ED3B: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C0/C0EBE0-jp.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC0ED3D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:46 END_C_FUNCTION
    case 0xC0ED3F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0EBE0-jp.asm:46 END_C_FUNCTION
    case 0xC0ED40: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0ED41-jp.asm (unresolved).
bool execute_unresolved_c0_c0ed41_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0ED41-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0ED41: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0ED41-jp.asm:8 END_STACK_VARS
    case 0xC0ED43: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0ED41-jp.asm:8 END_STACK_VARS
    case 0xC0ED44: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0ED41-jp.asm:8 END_STACK_VARS
    case 0xC0ED45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0ED41-jp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0ED45.
    case 0xC0ED47: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0ED41-jp.asm:8 END_STACK_VARS
    case 0xC0ED48: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0ED41-jp.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xC0ED49: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0ED41-jp.asm:9 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0ED47.
    case 0xC0ED4B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0ED41-jp.asm:10 ASL
    case 0xC0ED4C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0ED41-jp.asm:11 TAX
    case 0xC0ED4D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0ED41-jp.asm:12 LDY ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC0ED4E: cpu.execute_instruction<0xBC>(0x000E54, 3); return true;
    // src/unknown/C0/C0ED41-jp.asm:13 STY @LOCAL02
    case 0xC0ED51: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0ED41-jp.asm:14 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0ED53: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0ED41-jp.asm:14 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC0ED53.
    case 0xC0ED55: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0ED41-jp.asm:14 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0ED56: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0ED41-jp.asm:14 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0ED58: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0ED41-jp.asm:14 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC0ED58.
    case 0xC0ED5A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0ED41-jp.asm:14 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0ED5B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0ED41-jp.asm:15 TYA
    case 0xC0ED5D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0ED41-jp.asm:16 LDY #BPP4PALETTE_SIZE * 16
    case 0xC0ED5E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000200, 3); return true;
    // src/unknown/C0/C0ED41-jp.asm:16 LDY #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC0ED5E.
    case 0xC0ED60: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C0/C0ED41-jp.asm:17 JSL MULT16
    case 0xC0ED61: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C0/C0ED41-jp.asm:18 CLC
    case 0xC0ED65: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0ED41-jp.asm:19 ADC @VIRTUAL06
    case 0xC0ED66: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0ED41-jp.asm:20 STA @VIRTUAL06
    case 0xC0ED68: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0ED41-jp.asm:21 STA @LOCAL00
    case 0xC0ED6A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0ED41-jp.asm:22 LDA @VIRTUAL06+2
    case 0xC0ED6C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C0ED41-jp.asm:23 STA @LOCAL00+2
    case 0xC0ED6E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0ED41-jp.asm:24 LDX #BPP4PALETTE_SIZE * 16
    case 0xC0ED70: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/unknown/C0/C0ED41-jp.asm:24 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC0ED70.
    case 0xC0ED72: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/C0/C0ED41-jp.asm:25 LDA #.LOWORD(PALETTES)
    case 0xC0ED73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C0/C0ED41-jp.asm:25 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0ED73.
    case 0xC0ED75: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C0/C0ED41-jp.asm:26 JSL MEMCPY16
    case 0xC0ED76: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C0/C0ED41-jp.asm:27 LDY @LOCAL02
    case 0xC0ED7A: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C0/C0ED41-jp.asm:28 TYA
    case 0xC0ED7C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0ED41-jp.asm:29 INC
    case 0xC0ED7D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0ED41-jp.asm:30 STA @LOCAL01
    case 0xC0ED7E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0ED41-jp.asm:31 CMP #9
    case 0xC0ED80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/unknown/C0/C0ED41-jp.asm:31 CMP #9
    // Overlapping static entry reached from 0xC0ED80.
    case 0xC0ED82: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0ED41-jp.asm:32 BNE @UNKNOWN0
    case 0xC0ED83: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0ED41-jp.asm:33 LDA #0
    case 0xC0ED85: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0ED41-jp.asm:33 LDA #0
    // Overlapping static entry reached from 0xC0ED85.
    case 0xC0ED87: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0ED41-jp.asm:34 STA @LOCAL01
    case 0xC0ED88: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0ED41-jp.asm:36 LDA CURRENT_ENTITY_SLOT
    case 0xC0ED8A: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0ED41-jp.asm:37 ASL
    case 0xC0ED8D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0ED41-jp.asm:38 TAX
    case 0xC0ED8E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0ED41-jp.asm:39 LDA @LOCAL01
    case 0xC0ED8F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0ED41-jp.asm:40 STA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC0ED91: cpu.execute_instruction<0x9D>(0x000E54, 3); return true;
    // src/unknown/C0/C0ED41-jp.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC0ED94: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0ED41-jp.asm:42 LDA #PALETTE_UPLOAD::FULL
    case 0xC0ED96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C0/C0ED41-jp.asm:43 STA PALETTE_UPLOAD_MODE
    case 0xC0ED98: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C0/C0ED41-jp.asm:43 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0ED96.
    case 0xC0ED99: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C0/C0ED41-jp.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC0ED9B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0ED41-jp.asm:45 END_C_FUNCTION
    case 0xC0ED9D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0ED41-jp.asm:45 END_C_FUNCTION
    case 0xC0ED9E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0EE47.asm (unresolved).
bool execute_unresolved_c0_c0ee47_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0EE47.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0ED9F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0EE47.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC0EDA1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0EE47.asm:5 LDA #$0013
    case 0xC0EDA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x008D13, 3); return true;
    // src/unknown/C0/C0EE47.asm:6 STA TM_MIRROR
    case 0xC0EDA5: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/C0/C0EE47.asm:6 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0EDA3.
    case 0xC0EDA6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0EE47.asm:6 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0EDA6.
    case 0xC0EDA7: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C0/C0EE47.asm:7 REP #PROC_FLAGS::ACCUM8
    case 0xC0EDA8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0EE47.asm:8 RTL
    case 0xC0EDAA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0EE53.asm (unresolved).
bool execute_unresolved_c0_c0ee53_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0EE53.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0EDAB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0EE53.asm:4 LDA CURRENT_ENTITY_SLOT
    case 0xC0EDAD: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0EE53.asm:5 ASL
    case 0xC0EDB0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0EE53.asm:6 CLC
    case 0xC0EDB1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0EE53.asm:7 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC0EDB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x001160, 3); return true;
    // src/unknown/C0/C0EE53.asm:7 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC0EDB2.
    case 0xC0EDB4: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/C0/C0EE53.asm:8 TAX
    case 0xC0EDB5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0EE53.asm:9 LDA __BSS_START__,X
    case 0xC0EDB6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0EE53.asm:10 AND #$7FFF
    case 0xC0EDB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C0EE53.asm:10 AND #$7FFF
    // Overlapping static entry reached from 0xC0EDB9.
    case 0xC0EDBB: cpu.execute_instruction<0x7F>(0x00009D, 4); return true;
    // src/unknown/C0/C0EE53.asm:11 STA __BSS_START__,X
    case 0xC0EDBC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0EE53.asm:12 RTL
    case 0xC0EDBF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0EFE1.asm (unresolved).
bool execute_unresolved_c0_c0efe1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0EFE1.asm:3 BEGIN_C_FUNCTION
    case 0xC0F0AA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0EFE1.asm:8 END_STACK_VARS
    case 0xC0F0AC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0EFE1.asm:8 END_STACK_VARS
    case 0xC0F0AD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0EFE1.asm:8 END_STACK_VARS
    case 0xC0F0AE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0EFE1.asm:8 END_STACK_VARS
    case 0xC0F0AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0EFE1.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F0AF.
    case 0xC0F0B1: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0EFE1.asm:8 END_STACK_VARS
    case 0xC0F0B2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0EFE1.asm:8 END_STACK_VARS
    case 0xC0F0B3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0EFE1.asm:9 STA @LOCAL00
    case 0xC0F0B4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0EFE1.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC0F0B1.
    case 0xC0F0B5: cpu.execute_instruction<0x0E>(0x001380, 3); return true;
    // src/unknown/C0/C0EFE1.asm:10 BRA @UNKNOWN2
    case 0xC0F0B6: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C0/C0EFE1.asm:12 LDA PAD_PRESS
    case 0xC0F0B8: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C0/C0EFE1.asm:13 BEQ @UNKNOWN1
    case 0xC0F0BB: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0EFE1.asm:14 LDA #1
    case 0xC0F0BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0EFE1.asm:14 LDA #1
    // Overlapping static entry reached from 0xC0F0BD.
    case 0xC0F0BF: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0EFE1.asm:15 BRA @UNKNOWN3
    case 0xC0F0C0: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C0/C0EFE1.asm:17 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0F0C2: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/C0/C0EFE1.asm:18 LDA @LOCAL00
    case 0xC0F0C6: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0EFE1.asm:19 DEC
    case 0xC0F0C8: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0EFE1.asm:20 STA @LOCAL00
    case 0xC0F0C9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0EFE1.asm:22 BNE @UNKNOWN0
    case 0xC0F0CB: cpu.execute_instruction<0xD0>(0x0000EB, 2); return true;
    // src/unknown/C0/C0EFE1.asm:23 LDA #0
    case 0xC0F0CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0EFE1.asm:23 LDA #0
    // Overlapping static entry reached from 0xC0F0CD.
    case 0xC0F0CF: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0EFE1.asm:25 END_C_FUNCTION
    case 0xC0F0D0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0EFE1.asm:25 END_C_FUNCTION
    case 0xC0F0D1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0F1D2.asm (unresolved).
bool execute_unresolved_c0_c0f1d2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0F1D2.asm:3 BEGIN_C_FUNCTION
    case 0xC0F29F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0F1D2.asm:9 END_STACK_VARS
    case 0xC0F2A1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0F1D2.asm:9 END_STACK_VARS
    case 0xC0F2A2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0F1D2.asm:9 END_STACK_VARS
    case 0xC0F2A3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0F1D2.asm:9 END_STACK_VARS
    case 0xC0F2A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0F1D2.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F2A4.
    case 0xC0F2A6: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0F1D2.asm:9 END_STACK_VARS
    case 0xC0F2A7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0F1D2.asm:9 END_STACK_VARS
    case 0xC0F2A8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0F1D2.asm:10 TAY
    case 0xC0F2A9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0F1D2.asm:11 STY @LOCAL02
    case 0xC0F2AA: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C0/C0F1D2.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F2AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C0/C0F1D2.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F2AC.
    case 0xC0F2AE: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C0F1D2.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F2AF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C0F1D2.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F2B1: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0F1D2.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F2B2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C0F1D2.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F2B4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0F1D2.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F2B5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0F1D2.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F2B7: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C0F1D2.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC0F2B9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0F1D2.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F2BB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0F1D2.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F2BD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0F1D2.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F2BF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0F1D2.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F2C1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0F1D2.asm:15 LDA #^PALETTES
    case 0xC0F2C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/unknown/C0/C0F1D2.asm:15 LDA #^PALETTES
    // Overlapping static entry reached from 0xC0F2C3.
    case 0xC0F2C5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0F1D2.asm:16 STA @LOCAL01+2
    case 0xC0F2C6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0F1D2.asm:17 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0F2C8: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0F1D2.asm:17 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0F2CA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0F1D2.asm:17 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0F2CC: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0F1D2.asm:17 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0F2CE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0F1D2.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F2D0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0F1D2.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F2D2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0F1D2.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F2D4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0F1D2.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F2D6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0F1D2.asm:19 LDA #100
    case 0xC0F2D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x000064, 3); return true;
    // src/unknown/C0/C0F1D2.asm:19 LDA #100
    // Overlapping static entry reached from 0xC0F2D8.
    case 0xC0F2DA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0F1D2.asm:20 JSL UNKNOWN_C4954C
    case 0xC0F2DB: cpu.execute_instruction<0x22>(0xC46B96, 4); return true;
    // src/unknown/C0/C0F1D2.asm:21 LDX #.LOWORD(-1)
    case 0xC0F2DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0F1D2.asm:21 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0F2DF.
    case 0xC0F2E1: cpu.execute_instruction<0xFF>(0x9816A4, 4); return true;
    // src/unknown/C0/C0F1D2.asm:22 LDY @LOCAL02
    case 0xC0F2E2: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C0/C0F1D2.asm:23 TYA
    case 0xC0F2E4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0F1D2.asm:24 JSL UNKNOWN_C496E7
    case 0xC0F2E5: cpu.execute_instruction<0x22>(0xC46D31, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0F1D2.asm:25 END_C_FUNCTION
    case 0xC0F2E9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0F1D2.asm:25 END_C_FUNCTION
    case 0xC0F2EA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0F21E.asm (unresolved).
bool execute_unresolved_c0_c0f21e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0F21E.asm:3 BEGIN_C_FUNCTION
    case 0xC0F2EB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0F21E.asm:7 END_STACK_VARS
    case 0xC0F2ED: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0F21E.asm:7 END_STACK_VARS
    case 0xC0F2EE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0F21E.asm:7 END_STACK_VARS
    case 0xC0F2EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0F21E.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F2EF.
    case 0xC0F2F1: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0F21E.asm:7 END_STACK_VARS
    case 0xC0F2F2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0F21E.asm:8 LDA #0
    case 0xC0F2F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0F21E.asm:8 LDA #0
    // Overlapping static entry reached from 0xC0F2F3.
    case 0xC0F2F5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0F21E.asm:9 STA @VIRTUAL04
    case 0xC0F2F6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0F21E.asm:10 TAX
    case 0xC0F2F8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0F21E.asm:11 STX @LOCAL01
    case 0xC0F2F9: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C0F21E.asm:12 BRA @UNKNOWN2
    case 0xC0F2FB: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/unknown/C0/C0F21E.asm:14 LDA PAD_PRESS
    case 0xC0F2FD: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C0/C0F21E.asm:15 BEQ @UNKNOWN1
    case 0xC0F300: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0F21E.asm:16 LDA #1
    case 0xC0F302: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0F21E.asm:16 LDA #1
    // Overlapping static entry reached from 0xC0F302.
    case 0xC0F304: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0F21E.asm:17 JMP @UNKNOWN10
    case 0xC0F305: cpu.execute_instruction<0x4C>(0x00F407, 3); return true;
    // src/unknown/C0/C0F21E.asm:19 JSL UNKNOWN_C2DB3F
    case 0xC0F308: cpu.execute_instruction<0x22>(0xC2DAB4, 4); return true;
    // src/unknown/C0/C0F21E.asm:20 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0F30C: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/C0/C0F21E.asm:21 LDX @LOCAL01
    case 0xC0F310: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C0F21E.asm:22 INX
    case 0xC0F312: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0F21E.asm:23 STX @LOCAL01
    case 0xC0F313: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C0F21E.asm:25 CPX #236
    case 0xC0F315: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000EC, 2); else cpu.execute_instruction<0xE0>(0x0000EC, 3); return true;
    // src/unknown/C0/C0F21E.asm:25 CPX #236
    // Overlapping static entry reached from 0xC0F315.
    case 0xC0F317: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0F21E.asm:26 BCC @UNKNOWN0
    case 0xC0F318: cpu.execute_instruction<0x90>(0x0000E3, 2); return true;
    // src/unknown/C0/C0F21E.asm:27 LDA #0
    case 0xC0F31A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0F21E.asm:27 LDA #0
    // Overlapping static entry reached from 0xC0F31A.
    case 0xC0F31C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0F21E.asm:28 STA @VIRTUAL02
    case 0xC0F31D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0F21E.asm:29 BRA @UNKNOWN5
    case 0xC0F31F: cpu.execute_instruction<0x80>(0x00006E, 2); return true;
    // src/unknown/C0/C0F21E.asm:31 LDA PAD_PRESS
    case 0xC0F321: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C0/C0F21E.asm:32 BEQ @UNKNOWN4
    case 0xC0F324: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0F21E.asm:33 LDA #1
    case 0xC0F326: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0F21E.asm:33 LDA #1
    // Overlapping static entry reached from 0xC0F326.
    case 0xC0F328: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0F21E.asm:34 JMP @UNKNOWN10
    case 0xC0F329: cpu.execute_instruction<0x4C>(0x00F407, 3); return true;
    // src/unknown/C0/C0F21E.asm:36 LDY #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC0F32C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000040, 2); else cpu.execute_instruction<0xA0>(0x000240, 3); return true;
    // src/unknown/C0/C0F21E.asm:36 LDY #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC0F32C.
    case 0xC0F32E: cpu.execute_instruction<0x02>(0x000084, 2); return true;
    // src/unknown/C0/C0F21E.asm:37 STY @LOCAL01
    case 0xC0F32F: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C0F21E.asm:38 TYA
    case 0xC0F331: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C0F21E.asm:39 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F332: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C0F21E.asm:39 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F334: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0F21E.asm:39 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F335: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C0F21E.asm:39 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F337: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0F21E.asm:39 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F338: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0F21E.asm:39 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F33A: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C0F21E.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC0F33C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0F21E.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F33E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0F21E.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F340: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0F21E.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F342: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0F21E.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F344: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0F21E.asm:42 LDX #BPP4PALETTE_SIZE
    case 0xC0F346: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C0/C0F21E.asm:42 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC0F346.
    case 0xC0F348: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C0F21E.asm:43 LDA #.LOWORD(MAP_PALETTE_BACKUP)
    case 0xC0F349: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x0047FC, 3); return true;
    // src/unknown/C0/C0F21E.asm:43 LDA #.LOWORD(MAP_PALETTE_BACKUP)
    // Overlapping static entry reached from 0xC0F349.
    case 0xC0F34B: cpu.execute_instruction<0x47>(0x000022, 2); return true;
    // src/unknown/C0/C0F21E.asm:44 JSL MEMCPY16
    case 0xC0F34C: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C0/C0F21E.asm:44 JSL MEMCPY16
    // Overlapping static entry reached from 0xC0F34B.
    case 0xC0F34D: cpu.execute_instruction<0xC3>(0x00008E, 2); return true;
    // src/unknown/C0/C0F21E.asm:44 JSL MEMCPY16
    // Overlapping static entry reached from 0xC0F34D.
    case 0xC0F34F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x002B22, 3); return true;
    // src/unknown/C0/C0F21E.asm:45 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC0F350: cpu.execute_instruction<0x22>(0xC4262B, 4); return true;
    // src/unknown/C0/C0F21E.asm:45 JSL UPDATE_MAP_PALETTE_ANIMATION
    // Overlapping static entry reached from 0xC0F34F.
    case 0xC0F351: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0F21E.asm:45 JSL UPDATE_MAP_PALETTE_ANIMATION
    // Overlapping static entry reached from 0xC0F34F.
    case 0xC0F352: cpu.execute_instruction<0x26>(0x0000C4, 2); return true;
    // src/unknown/C0/C0F21E.asm:46 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F354: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0F21E.asm:47 STZ PALETTE_UPLOAD_MODE
    case 0xC0F356: cpu.execute_instruction<0x9C>(0x000030, 3); return true;
    // src/unknown/C0/C0F21E.asm:48 JSL UNKNOWN_C2DB14
    case 0xC0F359: cpu.execute_instruction<0x22>(0xC2DA89, 4); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C0/C0F21E.asm:50 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC0F35D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x0047FC, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C0/C0F21E.asm:50 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F35D.
    case 0xC0F35F: cpu.execute_instruction<0x47>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C0F21E.asm:50 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC0F360: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C0F21E.asm:50 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F35F.
    case 0xC0F361: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C0F21E.asm:50 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC0F362: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0F21E.asm:50 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC0F363: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C0F21E.asm:50 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC0F365: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0F21E.asm:50 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC0F366: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0F21E.asm:50 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC0F368: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C0F21E.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC0F36A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0F21E.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F36C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0F21E.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F36E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0F21E.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F370: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0F21E.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F372: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0F21E.asm:53 LDX #BPP4PALETTE_SIZE
    case 0xC0F374: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C0/C0F21E.asm:53 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC0F374.
    case 0xC0F376: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/C0/C0F21E.asm:54 LDY @LOCAL01
    case 0xC0F377: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C0F21E.asm:55 TYA
    case 0xC0F379: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0F21E.asm:56 JSL MEMCPY16
    case 0xC0F37A: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C0/C0F21E.asm:57 JSL UNKNOWN_C2DB3F
    case 0xC0F37E: cpu.execute_instruction<0x22>(0xC2DAB4, 4); return true;
    // src/unknown/C0/C0F21E.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F382: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0F21E.asm:59 LDA #PALETTE_UPLOAD::FULL
    case 0xC0F384: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C0/C0F21E.asm:60 STA PALETTE_UPLOAD_MODE
    case 0xC0F386: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C0/C0F21E.asm:60 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0F384.
    case 0xC0F387: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C0/C0F21E.asm:61 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0F389: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/C0/C0F21E.asm:62 INC @VIRTUAL02
    case 0xC0F38D: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0F21E.asm:64 LDA @VIRTUAL02
    case 0xC0F38F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0F21E.asm:66 CMP #$01E0
    case 0xC0F391: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E0, 2); else cpu.execute_instruction<0xC9>(0x0001E0, 3); return true;
    // src/unknown/C0/C0F21E.asm:66 CMP #$01E0
    // Overlapping static entry reached from 0xC0F391.
    case 0xC0F393: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C0F21E.asm:67 BCCL @UNKNOWN3
    case 0xC0F394: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C0F21E.asm:67 BCCL @UNKNOWN3
    // Overlapping static entry reached from 0xC0F393.
    case 0xC0F395: cpu.execute_instruction<0x05>(0x0000F0, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C0F21E.asm:67 BCCL @UNKNOWN3
    case 0xC0F396: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C0F21E.asm:67 BCCL @UNKNOWN3
    // Overlapping static entry reached from 0xC0F395.
    case 0xC0F397: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C0F21E.asm:67 BCCL @UNKNOWN3
    case 0xC0F398: cpu.execute_instruction<0x4C>(0x00F321, 3); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C0F21E.asm:67 BCCL @UNKNOWN3
    // Overlapping static entry reached from 0xC0F397.
    case 0xC0F399: cpu.execute_instruction<0x21>(0x0000F3, 2); return true;
    // src/unknown/C0/C0F21E.asm:68 JSL UNKNOWN_C49740
    case 0xC0F39B: cpu.execute_instruction<0x22>(0xC46D8A, 4); return true;
    // src/unknown/C0/C0F21E.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F39F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0F21E.asm:70 LDA #$00
    case 0xC0F3A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/unknown/C0/C0F21E.asm:71 STA f:CGADSUB
    case 0xC0F3A3: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/unknown/C0/C0F21E.asm:71 STA f:CGADSUB
    // Overlapping static entry reached from 0xC0F3A1.
    case 0xC0F3A4: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/unknown/C0/C0F21E.asm:71 STA f:CGADSUB
    // Overlapping static entry reached from 0xC0F3A4.
    case 0xC0F3A6: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/unknown/C0/C0F21E.asm:72 STA f:CGWSEL
    case 0xC0F3A7: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/unknown/C0/C0F21E.asm:73 LDA #$01
    case 0xC0F3AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C0/C0F21E.asm:74 STA TM_MIRROR
    case 0xC0F3AD: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/C0/C0F21E.asm:74 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0F3AB.
    case 0xC0F3AE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0F21E.asm:74 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0F3AE.
    case 0xC0F3AF: cpu.execute_instruction<0x00>(0x00009C, 2); return true;
    // src/unknown/C0/C0F21E.asm:75 STZ TD_MIRROR
    case 0xC0F3B0: cpu.execute_instruction<0x9C>(0x00001B, 3); return true;
    // src/unknown/C0/C0F21E.asm:76 REP #PROC_FLAGS::ACCUM8
    case 0xC0F3B3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0F21E.asm:77 LDA #120
    case 0xC0F3B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x000078, 3); return true;
    // src/unknown/C0/C0F21E.asm:77 LDA #120
    // Overlapping static entry reached from 0xC0F3B5.
    case 0xC0F3B7: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C0/C0F21E.asm:78 JSR UNKNOWN_C0EFE1
    case 0xC0F3B8: cpu.execute_instruction<0x20>(0x00F0AA, 3); return true;
    // src/unknown/C0/C0F21E.asm:79 CMP #0
    case 0xC0F3BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0F21E.asm:79 CMP #0
    // Overlapping static entry reached from 0xC0F3BB.
    case 0xC0F3BD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0F21E.asm:80 BEQ @UNKNOWN7
    case 0xC0F3BE: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0F21E.asm:81 LDA #1
    case 0xC0F3C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0F21E.asm:81 LDA #1
    // Overlapping static entry reached from 0xC0F3C0.
    case 0xC0F3C2: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0F21E.asm:82 BRA @UNKNOWN10
    case 0xC0F3C3: cpu.execute_instruction<0x80>(0x000042, 2); return true;
    // src/unknown/C0/C0F21E.asm:84 LDA #MUSIC::GAS_STATION_2
    case 0xC0F3C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AE, 2); else cpu.execute_instruction<0xA9>(0x0000AE, 3); return true;
    // src/unknown/C0/C0F21E.asm:84 LDA #MUSIC::GAS_STATION_2
    // Overlapping static entry reached from 0xC0F3C5.
    case 0xC0F3C7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0F21E.asm:85 JSL CHANGE_MUSIC
    case 0xC0F3C8: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/unknown/C0/C0F21E.asm:86 LDY #0
    case 0xC0F3CC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0F21E.asm:86 LDY #0
    // Overlapping static entry reached from 0xC0F3CC.
    case 0xC0F3CE: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C0/C0F21E.asm:87 TYX
    case 0xC0F3CF: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C0F21E.asm:88 LDA #EVENT_SCRIPT::EVENT_860
    case 0xC0F3D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000058, 2); else cpu.execute_instruction<0xA9>(0x000358, 3); return true;
    // src/unknown/C0/C0F21E.asm:88 LDA #EVENT_SCRIPT::EVENT_860
    // Overlapping static entry reached from 0xC0F3D0.
    case 0xC0F3D2: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/unknown/C0/C0F21E.asm:89 JSL INIT_ENTITY_WIPE
    case 0xC0F3D3: cpu.execute_instruction<0x22>(0xC092D4, 4); return true;
    // src/unknown/C0/C0F21E.asm:89 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC0F3D2.
    case 0xC0F3D4: cpu.execute_instruction<0xD4>(0x000092, 2); return true;
    // src/unknown/C0/C0F21E.asm:89 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC0F3D4.
    case 0xC0F3D6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x001285, 3); return true;
    // src/unknown/C0/C0F21E.asm:90 STA @LOCAL01
    case 0xC0F3D7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0F21E.asm:90 STA @LOCAL01
    // Overlapping static entry reached from 0xC0F3D6.
    case 0xC0F3D8: cpu.execute_instruction<0x12>(0x000080, 2); return true;
    // src/unknown/C0/C0F21E.asm:91 BRA @UNKNOWN9
    case 0xC0F3D9: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/unknown/C0/C0F21E.asm:91 BRA @UNKNOWN9
    // Overlapping static entry reached from 0xC0F3D8.
    case 0xC0F3DA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0F21E.asm:93 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC0F3DB: cpu.execute_instruction<0x22>(0xC09445, 4); return true;
    // src/unknown/C0/C0F21E.asm:94 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0F3DF: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/C0/C0F21E.asm:95 LDA PAD_PRESS
    case 0xC0F3E3: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C0/C0F21E.asm:96 BEQ @UNKNOWN9
    case 0xC0F3E6: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/unknown/C0/C0F21E.asm:97 LDA @LOCAL01
    case 0xC0F3E8: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0F21E.asm:98 JSL UNKNOWN_C09C35
    case 0xC0F3EA: cpu.execute_instruction<0x22>(0xC09C14, 4); return true;
    // src/unknown/C0/C0F21E.asm:99 LDA #1
    case 0xC0F3EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0F21E.asm:99 LDA #1
    // Overlapping static entry reached from 0xC0F3EE.
    case 0xC0F3F0: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0F21E.asm:100 BRA @UNKNOWN10
    case 0xC0F3F1: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C0/C0F21E.asm:102 LDA @LOCAL01
    case 0xC0F3F3: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0F21E.asm:103 ASL
    case 0xC0F3F5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0F21E.asm:104 TAX
    case 0xC0F3F6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0F21E.asm:105 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC0F3F7: cpu.execute_instruction<0xBD>(0x000A58, 3); return true;
    // src/unknown/C0/C0F21E.asm:106 CMP #.LOWORD(-1)
    case 0xC0F3FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0F21E.asm:106 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0F3FA.
    case 0xC0F3FC: cpu.execute_instruction<0xFF>(0xA9DCD0, 4); return true;
    // src/unknown/C0/C0F21E.asm:107 BNE @UNKNOWN8
    case 0xC0F3FD: cpu.execute_instruction<0xD0>(0x0000DC, 2); return true;
    // src/unknown/C0/C0F21E.asm:108 LDA #330
    case 0xC0F3FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x00014A, 3); return true;
    // src/unknown/C0/C0F21E.asm:108 LDA #330
    // Overlapping static entry reached from 0xC0F3FC.
    case 0xC0F400: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0F21E.asm:108 LDA #330
    // Overlapping static entry reached from 0xC0F3FF.
    case 0xC0F401: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/unknown/C0/C0F21E.asm:109 JSR UNKNOWN_C0F1D2
    case 0xC0F402: cpu.execute_instruction<0x20>(0x00F29F, 3); return true;
    // src/unknown/C0/C0F21E.asm:109 JSR UNKNOWN_C0F1D2
    // Overlapping static entry reached from 0xC0F401.
    case 0xC0F403: cpu.execute_instruction<0x9F>(0x04A5F2, 4); return true;
    // src/unknown/C0/C0F21E.asm:110 LDA @VIRTUAL04
    case 0xC0F405: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0F21E.asm:112 END_C_FUNCTION
    case 0xC0F407: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0F21E.asm:112 END_C_FUNCTION
    case 0xC0F408: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
