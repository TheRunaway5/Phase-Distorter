// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/unknown/C2/C2DF2E.asm (unresolved).
bool execute_unresolved_c2_c2df2e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2DF2E.asm:3 BEGIN_C_FUNCTION
    case 0xC2DE83: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2DF2E.asm:15 END_STACK_VARS
    case 0xC2DE85: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2DF2E.asm:15 END_STACK_VARS
    case 0xC2DE86: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2DF2E.asm:15 END_STACK_VARS
    case 0xC2DE87: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2DF2E.asm:15 END_STACK_VARS
    case 0xC2DE88: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2DF2E.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC2DE88.
    case 0xC2DE8A: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2DF2E.asm:15 END_STACK_VARS
    case 0xC2DE8B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2DF2E.asm:15 END_STACK_VARS
    case 0xC2DE8C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:16 STY @LOCAL06
    case 0xC2DE8D: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:16 STY @LOCAL06
    // Overlapping static entry reached from 0xC2DE8A.
    case 0xC2DE8E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:17 STX @VIRTUAL02
    case 0xC2DE8F: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C2/C2DF2E.asm:18 STA @LOCAL05
    case 0xC2DE91: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:19 LDA @VIRTUAL02
    case 0xC2DE93: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2DF2E.asm:20 CMP #$FFFF
    case 0xC2DE95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C2DF2E.asm:20 CMP #$FFFF
    // Overlapping static entry reached from 0xC2DE95.
    case 0xC2DE97: cpu.execute_instruction<0xFF>(0xA504F0, 4); return true;
    // src/unknown/C2/C2DF2E.asm:21 BEQ @UNKNOWN0
    case 0xC2DE98: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C2/C2DF2E.asm:22 LDA @VIRTUAL02
    case 0xC2DE9A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2DF2E.asm:22 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC2DE97.
    case 0xC2DE9B: cpu.execute_instruction<0x02>(0x0000D0, 2); return true;
    // src/unknown/C2/C2DF2E.asm:23 BNE @UNKNOWN1
    case 0xC2DE9C: cpu.execute_instruction<0xD0>(0x00001F, 2); return true;
    // src/unknown/C2/C2DF2E.asm:25 LDA @LOCAL06
    case 0xC2DE9E: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:26 ASL
    case 0xC2DEA0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:27 STA @LOCAL06
    case 0xC2DEA1: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:28 CLC
    case 0xC2DEA3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:29 ADC @LOCAL05
    case 0xC2DEA4: cpu.execute_instruction<0x65>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:30 TAX
    case 0xC2DEA6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:31 LDA @VIRTUAL02
    case 0xC2DEA7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2DF2E.asm:32 STA __BSS_START__ + loaded_bg_data::palette,X
    case 0xC2DEA9: cpu.execute_instruction<0x9D>(0x00000C, 3); return true;
    // src/unknown/C2/C2DF2E.asm:33 LDY #loaded_bg_data::palette_pointer
    case 0xC2DEAC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C2/C2DF2E.asm:33 LDY #loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2DEAC.
    case 0xC2DEAE: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C2DF2E.asm:34 LDA @LOCAL06
    case 0xC2DEAF: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:35 CLC
    case 0xC2DEB1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:36 ADC (@LOCAL05),Y
    case 0xC2DEB2: cpu.execute_instruction<0x71>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:37 TAX
    case 0xC2DEB4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:38 LDA @VIRTUAL02
    case 0xC2DEB5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2DF2E.asm:39 STA __BSS_START__,X
    case 0xC2DEB7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2DF2E.asm:40 JMP @UNKNOWN7
    case 0xC2DEBA: cpu.execute_instruction<0x4C>(0x00DFE1, 3); return true;
    // src/unknown/C2/C2DF2E.asm:40 JMP @UNKNOWN7
    // Overlapping static entry reached from 0xC2DF11.
    case 0xC2DEBB: cpu.execute_instruction<0xE1>(0x0000DF, 2); return true;
    // src/unknown/C2/C2DF2E.asm:42 LDA @VIRTUAL02
    case 0xC2DEBD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2DF2E.asm:43 CMP #$0100
    case 0xC2DEBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C2/C2DF2E.asm:43 CMP #$0100
    // Overlapping static entry reached from 0xC2DEBF.
    case 0xC2DEC1: cpu.execute_instruction<0x01>(0x0000D0, 2); return true;
    // src/unknown/C2/C2DF2E.asm:44 BNE @UNKNOWN2
    case 0xC2DEC2: cpu.execute_instruction<0xD0>(0x000024, 2); return true;
    // src/unknown/C2/C2DF2E.asm:44 BNE @UNKNOWN2
    // Overlapping static entry reached from 0xC2DEC1.
    case 0xC2DEC3: cpu.execute_instruction<0x24>(0x0000A5, 2); return true;
    // src/unknown/C2/C2DF2E.asm:45 LDA @LOCAL06
    case 0xC2DEC4: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:45 LDA @LOCAL06
    // Overlapping static entry reached from 0xC2DEC3.
    case 0xC2DEC5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:46 ASL
    case 0xC2DEC6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:47 STA @LOCAL04
    case 0xC2DEC7: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2DF2E.asm:48 CLC
    case 0xC2DEC9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:49 ADC @LOCAL05
    case 0xC2DECA: cpu.execute_instruction<0x65>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:50 TAX
    case 0xC2DECC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:51 LDY __BSS_START__ + loaded_bg_data::palette2,X
    case 0xC2DECD: cpu.execute_instruction<0xBC>(0x00002C, 3); return true;
    // src/unknown/C2/C2DF2E.asm:52 STY @LOCAL03
    case 0xC2DED0: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C2/C2DF2E.asm:53 TYA
    case 0xC2DED2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:54 STA __BSS_START__ + loaded_bg_data::palette,X
    case 0xC2DED3: cpu.execute_instruction<0x9D>(0x00000C, 3); return true;
    // src/unknown/C2/C2DF2E.asm:55 LDY #loaded_bg_data::palette_pointer
    case 0xC2DED6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C2/C2DF2E.asm:55 LDY #loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2DED6.
    case 0xC2DED8: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C2DF2E.asm:56 LDA @LOCAL04
    case 0xC2DED9: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2DF2E.asm:57 CLC
    case 0xC2DEDB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:58 ADC (@LOCAL05),Y
    case 0xC2DEDC: cpu.execute_instruction<0x71>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:59 TAX
    case 0xC2DEDE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:60 LDY @LOCAL03
    case 0xC2DEDF: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C2/C2DF2E.asm:61 TYA
    case 0xC2DEE1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:62 STA __BSS_START__,X
    case 0xC2DEE2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2DF2E.asm:63 JMP @UNKNOWN7
    case 0xC2DEE5: cpu.execute_instruction<0x4C>(0x00DFE1, 3); return true;
    // src/unknown/C2/C2DF2E.asm:65 LDA @LOCAL06
    case 0xC2DEE8: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:66 ASL
    case 0xC2DEEA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:67 CLC
    case 0xC2DEEB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:68 ADC @LOCAL05
    case 0xC2DEEC: cpu.execute_instruction<0x65>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:69 STA @VIRTUAL04
    case 0xC2DEEE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2DF2E.asm:70 STA @LOCAL03
    case 0xC2DEF0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C2DF2E.asm:71 LDX @VIRTUAL04
    case 0xC2DEF2: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2DF2E.asm:72 LDA __BSS_START__ + loaded_bg_data::palette2,X
    case 0xC2DEF4: cpu.execute_instruction<0xBD>(0x00002C, 3); return true;
    // src/unknown/C2/C2DF2E.asm:73 STA @LOCAL04
    case 0xC2DEF7: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2DF2E.asm:74 AND #$001F
    case 0xC2DEF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C2/C2DF2E.asm:74 AND #$001F
    // Overlapping static entry reached from 0xC2DEF9.
    case 0xC2DEFB: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2DF2E.asm:75 TAX
    case 0xC2DEFC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:76 STX @LOCAL02
    case 0xC2DEFD: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C2/C2DF2E.asm:77 LDA @LOCAL04
    case 0xC2DEFF: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2DF2E.asm:78 LSR
    case 0xC2DF01: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:79 LSR
    case 0xC2DF02: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:80 LSR
    case 0xC2DF03: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:81 LSR
    case 0xC2DF04: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:82 LSR
    case 0xC2DF05: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:83 AND #$001F
    case 0xC2DF06: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C2/C2DF2E.asm:83 AND #$001F
    // Overlapping static entry reached from 0xC2DF06.
    case 0xC2DF08: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C2/C2DF2E.asm:84 TAY
    case 0xC2DF09: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:85 STY @LOCAL01
    case 0xC2DF0A: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C2/C2DF2E.asm:86 SEP #PROC_FLAGS::ACCUM8
    case 0xC2DF0C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2DF2E.asm:87 LDA #10
    case 0xC2DF0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00E20A, 3); return true;
    // src/unknown/C2/C2DF2E.asm:88 SEP #PROC_FLAGS::INDEX8
    case 0xC2DF10: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C2/C2DF2E.asm:88 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC2DF0E.
    case 0xC2DF11: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C2/C2DF2E.asm:89 TAY
    case 0xC2DF12: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:90 REP #PROC_FLAGS::ACCUM8
    case 0xC2DF13: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2DF2E.asm:91 LDA @LOCAL04
    case 0xC2DF15: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2DF2E.asm:92 JSL ASR8_UNKNOWN1
    case 0xC2DF17: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/unknown/C2/C2DF2E.asm:93 AND #$001F
    case 0xC2DF1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C2/C2DF2E.asm:93 AND #$001F
    // Overlapping static entry reached from 0xC2DF1B.
    case 0xC2DF1D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2DF2E.asm:94 STA @LOCAL04
    case 0xC2DF1E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2DF2E.asm:95 REP #PROC_FLAGS::INDEX8
    case 0xC2DF20: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2DF2E.asm:96 LDY @VIRTUAL02
    case 0xC2DF22: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C2/C2DF2E.asm:97 LDX @LOCAL02
    case 0xC2DF24: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C2/C2DF2E.asm:98 TXA
    case 0xC2DF26: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:99 JSL MULT16
    case 0xC2DF27: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C2/C2DF2E.asm:100 XBA
    case 0xC2DF2B: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:101 AND #$00FF
    case 0xC2DF2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DF2E.asm:101 AND #$00FF
    // Overlapping static entry reached from 0xC2DF2C.
    case 0xC2DF2E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2DF2E.asm:102 TAX
    case 0xC2DF2F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:103 STX @LOCAL02
    case 0xC2DF30: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C2/C2DF2E.asm:104 LDY @LOCAL01
    case 0xC2DF32: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C2/C2DF2E.asm:105 TYA
    case 0xC2DF34: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:106 LDY @VIRTUAL02
    case 0xC2DF35: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C2/C2DF2E.asm:107 JSL MULT16
    case 0xC2DF37: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C2/C2DF2E.asm:108 XBA
    case 0xC2DF3B: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:109 AND #$00FF
    case 0xC2DF3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DF2E.asm:109 AND #$00FF
    // Overlapping static entry reached from 0xC2DF3C.
    case 0xC2DF3E: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C2/C2DF2E.asm:110 TAY
    case 0xC2DF3F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:111 STY @LOCAL01
    case 0xC2DF40: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C2/C2DF2E.asm:112 LDY @VIRTUAL02
    case 0xC2DF42: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C2/C2DF2E.asm:113 LDA @LOCAL04
    case 0xC2DF44: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2DF2E.asm:114 JSL MULT16
    case 0xC2DF46: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C2/C2DF2E.asm:115 XBA
    case 0xC2DF4A: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:116 AND #$00FF
    case 0xC2DF4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DF2E.asm:116 AND #$00FF
    // Overlapping static entry reached from 0xC2DF4B.
    case 0xC2DF4D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2DF2E.asm:117 STA @LOCAL00
    case 0xC2DF4E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2DF2E.asm:118 SEP #PROC_FLAGS::ACCUM8
    case 0xC2DF50: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2DF2E.asm:119 LDA #10
    case 0xC2DF52: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00E20A, 3); return true;
    // src/unknown/C2/C2DF2E.asm:120 SEP #PROC_FLAGS::INDEX8
    case 0xC2DF54: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C2/C2DF2E.asm:120 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC2DF52.
    case 0xC2DF55: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C2/C2DF2E.asm:121 TAY
    case 0xC2DF56: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:122 REP #PROC_FLAGS::ACCUM8
    case 0xC2DF57: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2DF2E.asm:123 LDA @LOCAL00
    case 0xC2DF59: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2DF2E.asm:124 JSL ASL16_ENTRY2
    case 0xC2DF5B: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/unknown/C2/C2DF2E.asm:125 STA @VIRTUAL02
    case 0xC2DF5F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2DF2E.asm:126 REP #PROC_FLAGS::INDEX8
    case 0xC2DF61: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2DF2E.asm:127 LDY @LOCAL01
    case 0xC2DF63: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C2/C2DF2E.asm:128 TYA
    case 0xC2DF65: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:129 ASL
    case 0xC2DF66: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:130 ASL
    case 0xC2DF67: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:131 ASL
    case 0xC2DF68: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:132 ASL
    case 0xC2DF69: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:133 ASL
    case 0xC2DF6A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:134 STA @VIRTUAL04
    case 0xC2DF6B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2DF2E.asm:135 LDX @LOCAL02
    case 0xC2DF6D: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C2/C2DF2E.asm:136 TXA
    case 0xC2DF6F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:137 CLC
    case 0xC2DF70: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:138 ADC @VIRTUAL04
    case 0xC2DF71: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C2/C2DF2E.asm:139 CLC
    case 0xC2DF73: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:140 ADC @VIRTUAL02
    case 0xC2DF74: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C2DF2E.asm:141 LDX @LOCAL03
    case 0xC2DF76: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C2/C2DF2E.asm:142 STX @VIRTUAL04
    case 0xC2DF78: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C2/C2DF2E.asm:143 STA __BSS_START__ + loaded_bg_data::palette,X
    case 0xC2DF7A: cpu.execute_instruction<0x9D>(0x00000C, 3); return true;
    // src/unknown/C2/C2DF2E.asm:144 LDY #3
    case 0xC2DF7D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C2/C2DF2E.asm:144 LDY #3
    // Overlapping static entry reached from 0xC2DF7D.
    case 0xC2DF7F: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C2DF2E.asm:145 LDA (@LOCAL05),Y
    case 0xC2DF80: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:146 AND #$00FF
    case 0xC2DF82: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DF2E.asm:146 AND #$00FF
    // Overlapping static entry reached from 0xC2DF82.
    case 0xC2DF84: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2DF2E.asm:147 CMP #2
    case 0xC2DF85: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C2/C2DF2E.asm:147 CMP #2
    // Overlapping static entry reached from 0xC2DF85.
    case 0xC2DF87: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2DF2E.asm:148 BNE @UNKNOWN4
    case 0xC2DF88: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:149 LDY #6
    case 0xC2DF8A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C2/C2DF2E.asm:149 LDY #6
    // Overlapping static entry reached from 0xC2DF8A.
    case 0xC2DF8C: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C2DF2E.asm:150 LDA (@LOCAL05),Y
    case 0xC2DF8D: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:151 AND #$00FF
    case 0xC2DF8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DF2E.asm:151 AND #$00FF
    // Overlapping static entry reached from 0xC2DF8F.
    case 0xC2DF91: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C2/C2DF2E.asm:152 CMP @LOCAL06
    case 0xC2DF92: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C2/C2DF2E.asm:153 BGT @UNKNOWN4
    case 0xC2DF94: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C2/C2DF2E.asm:153 BGT @UNKNOWN4
    case 0xC2DF96: cpu.execute_instruction<0xB0>(0x00000C, 2); return true;
    // src/unknown/C2/C2DF2E.asm:154 LDY #7
    case 0xC2DF98: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000007, 2); else cpu.execute_instruction<0xA0>(0x000007, 3); return true;
    // src/unknown/C2/C2DF2E.asm:154 LDY #7
    // Overlapping static entry reached from 0xC2DF98.
    case 0xC2DF9A: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C2DF2E.asm:155 LDA (@LOCAL05),Y
    case 0xC2DF9B: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:156 AND #$00FF
    case 0xC2DF9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DF2E.asm:156 AND #$00FF
    // Overlapping static entry reached from 0xC2DF9D.
    case 0xC2DF9F: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C2/C2DF2E.asm:157 CMP @LOCAL06
    case 0xC2DFA0: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:158 BCS @UNKNOWN7
    case 0xC2DFA2: cpu.execute_instruction<0xB0>(0x00003D, 2); return true;
    // src/unknown/C2/C2DF2E.asm:160 LDY #3
    case 0xC2DFA4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C2/C2DF2E.asm:160 LDY #3
    // Overlapping static entry reached from 0xC2DFA4.
    case 0xC2DFA6: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C2DF2E.asm:161 LDA (@LOCAL05),Y
    case 0xC2DFA7: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:162 AND #$00FF
    case 0xC2DFA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DF2E.asm:162 AND #$00FF
    // Overlapping static entry reached from 0xC2DFA9.
    case 0xC2DFAB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DF2E.asm:163 BEQ @UNKNOWN6
    case 0xC2DFAC: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:164 LDY #4
    case 0xC2DFAE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C2/C2DF2E.asm:164 LDY #4
    // Overlapping static entry reached from 0xC2DFAE.
    case 0xC2DFB0: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C2DF2E.asm:165 LDA (@LOCAL05),Y
    case 0xC2DFB1: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:166 AND #$00FF
    case 0xC2DFB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DF2E.asm:166 AND #$00FF
    // Overlapping static entry reached from 0xC2DFB3.
    case 0xC2DFB5: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C2/C2DF2E.asm:167 CMP @LOCAL06
    case 0xC2DFB6: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C2/C2DF2E.asm:168 BGT @UNKNOWN6
    case 0xC2DFB8: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C2/C2DF2E.asm:168 BGT @UNKNOWN6
    case 0xC2DFBA: cpu.execute_instruction<0xB0>(0x00000C, 2); return true;
    // src/unknown/C2/C2DF2E.asm:169 LDY #5
    case 0xC2DFBC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/unknown/C2/C2DF2E.asm:169 LDY #5
    // Overlapping static entry reached from 0xC2DFBC.
    case 0xC2DFBE: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C2DF2E.asm:170 LDA (@LOCAL05),Y
    case 0xC2DFBF: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:171 AND #$00FF
    case 0xC2DFC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DF2E.asm:171 AND #$00FF
    // Overlapping static entry reached from 0xC2DFC1.
    case 0xC2DFC3: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C2/C2DF2E.asm:172 CMP @LOCAL06
    case 0xC2DFC4: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:173 BCS @UNKNOWN7
    case 0xC2DFC6: cpu.execute_instruction<0xB0>(0x000019, 2); return true;
    // src/unknown/C2/C2DF2E.asm:175 LDA @LOCAL06
    case 0xC2DFC8: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:176 ASL
    case 0xC2DFCA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:177 STA @LOCAL06
    case 0xC2DFCB: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:178 LDY #loaded_bg_data::palette_pointer
    case 0xC2DFCD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C2/C2DF2E.asm:178 LDY #loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2DFCD.
    case 0xC2DFCF: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:179 CLC
    case 0xC2DFD0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:180 ADC (@LOCAL05),Y
    case 0xC2DFD1: cpu.execute_instruction<0x71>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:181 PHA
    case 0xC2DFD3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:182 LDA @LOCAL06
    case 0xC2DFD4: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:183 CLC
    case 0xC2DFD6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:184 ADC @LOCAL05
    case 0xC2DFD7: cpu.execute_instruction<0x65>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:185 TAX
    case 0xC2DFD9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:186 LDA __BSS_START__ + loaded_bg_data::palette,X
    case 0xC2DFDA: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/unknown/C2/C2DF2E.asm:187 PLX
    case 0xC2DFDD: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:188 STA __BSS_START__,X
    case 0xC2DFDE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2DF2E.asm:190 END_C_FUNCTION
    case 0xC2DFE1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C2DF2E.asm:190 END_C_FUNCTION
    case 0xC2DFE2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2E08E.asm (unresolved).
bool execute_unresolved_c2_c2e08e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2E08E.asm:3 BEGIN_C_FUNCTION
    case 0xC2DFE3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2E08E.asm:6 END_STACK_VARS
    case 0xC2DFE5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2E08E.asm:6 END_STACK_VARS
    case 0xC2DFE6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2E08E.asm:6 END_STACK_VARS
    case 0xC2DFE7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2E08E.asm:6 END_STACK_VARS
    case 0xC2DFE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2E08E.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2DFE8.
    case 0xC2DFEA: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2E08E.asm:6 END_STACK_VARS
    case 0xC2DFEB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2E08E.asm:6 END_STACK_VARS
    case 0xC2DFEC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2E08E.asm:7 STA @VIRTUAL04
    case 0xC2DFED: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2E08E.asm:7 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC2DFEA.
    case 0xC2DFEE: cpu.execute_instruction<0x04>(0x0000AD, 2); return true;
    // src/unknown/C2/C2E08E.asm:8 LDA LOADED_BG_DATA_LAYER1 + loaded_bg_data::bitdepth
    case 0xC2DFEF: cpu.execute_instruction<0xAD>(0x00AFAA, 3); return true;
    // src/unknown/C2/C2E08E.asm:8 LDA LOADED_BG_DATA_LAYER1 + loaded_bg_data::bitdepth
    // Overlapping static entry reached from 0xC2DFEE.
    case 0xC2DFF0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2E08E.asm:8 LDA LOADED_BG_DATA_LAYER1 + loaded_bg_data::bitdepth
    // Overlapping static entry reached from 0xC2DFF0.
    case 0xC2DFF1: cpu.execute_instruction<0xAF>(0x00FF29, 4); return true;
    // src/unknown/C2/C2E08E.asm:9 AND #$00FF
    case 0xC2DFF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E08E.asm:9 AND #$00FF
    // Overlapping static entry reached from 0xC2DFF2.
    case 0xC2DFF4: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2E08E.asm:10 CMP #4
    case 0xC2DFF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C2/C2E08E.asm:10 CMP #4
    // Overlapping static entry reached from 0xC2DFF5.
    case 0xC2DFF7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2E08E.asm:11 BNE @UNKNOWN2
    case 0xC2DFF8: cpu.execute_instruction<0xD0>(0x00001C, 2); return true;
    // src/unknown/C2/C2E08E.asm:12 LDA #1
    case 0xC2DFFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2E08E.asm:12 LDA #1
    // Overlapping static entry reached from 0xC2DFFA.
    case 0xC2DFFC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2E08E.asm:13 STA @VIRTUAL02
    case 0xC2DFFD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2E08E.asm:14 BRA @UNKNOWN1
    case 0xC2DFFF: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C2/C2E08E.asm:16 LDY @VIRTUAL02
    case 0xC2E001: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C2/C2E08E.asm:17 LDX @VIRTUAL04
    case 0xC2E003: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2E08E.asm:18 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC2E005: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A9, 2); else cpu.execute_instruction<0xA9>(0x00AFA9, 3); return true;
    // src/unknown/C2/C2E08E.asm:18 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC2E005.
    case 0xC2E007: cpu.execute_instruction<0xAF>(0xDE8320, 4); return true;
    // src/unknown/C2/C2E08E.asm:19 JSR UNKNOWN_C2DF2E
    case 0xC2E008: cpu.execute_instruction<0x20>(0x00DE83, 3); return true;
    // src/unknown/C2/C2E08E.asm:20 INC @VIRTUAL02
    case 0xC2E00B: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2E08E.asm:22 LDA @VIRTUAL02
    case 0xC2E00D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2E08E.asm:23 CMP #16
    case 0xC2E00F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/unknown/C2/C2E08E.asm:23 CMP #16
    // Overlapping static entry reached from 0xC2E00F.
    case 0xC2E011: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2E08E.asm:24 BCC @UNKNOWN0
    case 0xC2E012: cpu.execute_instruction<0x90>(0x0000ED, 2); return true;
    // src/unknown/C2/C2E08E.asm:25 BRA @UNKNOWN5
    case 0xC2E014: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/unknown/C2/C2E08E.asm:27 LDA #1
    case 0xC2E016: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2E08E.asm:27 LDA #1
    // Overlapping static entry reached from 0xC2E016.
    case 0xC2E018: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2E08E.asm:28 STA @VIRTUAL02
    case 0xC2E019: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2E08E.asm:29 BRA @UNKNOWN4
    case 0xC2E01B: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C2/C2E08E.asm:31 LDY @VIRTUAL02
    case 0xC2E01D: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C2/C2E08E.asm:32 LDX @VIRTUAL04
    case 0xC2E01F: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2E08E.asm:33 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC2E021: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A9, 2); else cpu.execute_instruction<0xA9>(0x00AFA9, 3); return true;
    // src/unknown/C2/C2E08E.asm:33 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC2E021.
    case 0xC2E023: cpu.execute_instruction<0xAF>(0xDE8320, 4); return true;
    // src/unknown/C2/C2E08E.asm:34 JSR UNKNOWN_C2DF2E
    case 0xC2E024: cpu.execute_instruction<0x20>(0x00DE83, 3); return true;
    // src/unknown/C2/C2E08E.asm:35 LDY @VIRTUAL02
    case 0xC2E027: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C2/C2E08E.asm:36 LDX @VIRTUAL04
    case 0xC2E029: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2E08E.asm:37 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    case 0xC2E02B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x00B020, 3); return true;
    // src/unknown/C2/C2E08E.asm:37 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC2E02B.
    case 0xC2E02D: cpu.execute_instruction<0xB0>(0x000020, 2); return true;
    // src/unknown/C2/C2E08E.asm:38 JSR UNKNOWN_C2DF2E
    case 0xC2E02E: cpu.execute_instruction<0x20>(0x00DE83, 3); return true;
    // src/unknown/C2/C2E08E.asm:38 JSR UNKNOWN_C2DF2E
    // Overlapping static entry reached from 0xC2E02D.
    case 0xC2E02F: cpu.execute_instruction<0x83>(0x0000DE, 2); return true;
    // src/unknown/C2/C2E08E.asm:39 INC @VIRTUAL02
    case 0xC2E031: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2E08E.asm:41 LDA @VIRTUAL02
    case 0xC2E033: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2E08E.asm:42 CMP #4
    case 0xC2E035: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C2/C2E08E.asm:42 CMP #4
    // Overlapping static entry reached from 0xC2E035.
    case 0xC2E037: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2E08E.asm:43 BCC @UNKNOWN3
    case 0xC2E038: cpu.execute_instruction<0x90>(0x0000E3, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2E08E.asm:45 END_C_FUNCTION
    case 0xC2E03A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C2E08E.asm:45 END_C_FUNCTION
    case 0xC2E03B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2E0E7.asm (unresolved).
bool execute_unresolved_c2_c2e0e7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2E0E7.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2E03C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C2E0E7.asm:5 STZ GREEN_FLASH_DURATION
    case 0xC2E03E: cpu.execute_instruction<0x9C>(0x00AF73, 3); return true;
    // src/unknown/C2/C2E0E7.asm:6 STZ RED_FLASH_DURATION
    case 0xC2E041: cpu.execute_instruction<0x9C>(0x00AF75, 3); return true;
    // src/unknown/C2/C2E0E7.asm:7 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E044: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2E0E7.asm:8 STZ FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC2E046: cpu.execute_instruction<0x9C>(0x00B097, 3); return true;
    // src/unknown/C2/C2E0E7.asm:9 REP #PROC_FLAGS::ACCUM8
    case 0xC2E049: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2E0E7.asm:10 LDA HP_PP_BOX_BLINK_DURATION
    case 0xC2E04B: cpu.execute_instruction<0xAD>(0x00AF79, 3); return true;
    // src/unknown/C2/C2E0E7.asm:11 BEQ @UNKNOWN0
    case 0xC2E04E: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C2/C2E0E7.asm:11 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC2E02D.
    case 0xC2E04F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2E0E7.asm:12 LDA HP_PP_BOX_BLINK_TARGET
    case 0xC2E050: cpu.execute_instruction<0xAD>(0x00AF7B, 3); return true;
    // src/unknown/C2/C2E0E7.asm:13 JSL UNKNOWN_C207B6
    case 0xC2E053: cpu.execute_instruction<0x22>(0xC20757, 4); return true;
    // src/unknown/C2/C2E0E7.asm:14 STZ HP_PP_BOX_BLINK_DURATION
    case 0xC2E057: cpu.execute_instruction<0x9C>(0x00AF79, 3); return true;
    // src/unknown/C2/C2E0E7.asm:16 LDY #0
    case 0xC2E05A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C2/C2E0E7.asm:16 LDY #0
    // Overlapping static entry reached from 0xC2E05A.
    case 0xC2E05C: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C2/C2E0E7.asm:17 TYX
    case 0xC2E05D: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C2E0E7.asm:18 TYA
    case 0xC2E05E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2E0E7.asm:19 JSL SET_COLDATA
    case 0xC2E05F: cpu.execute_instruction<0x22>(0xC0AFF9, 4); return true;
    // src/unknown/C2/C2E0E7.asm:20 LDA #1
    case 0xC2E063: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2E0E7.asm:20 LDA #1
    // Overlapping static entry reached from 0xC2E063.
    case 0xC2E065: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2E0E7.asm:21 JSL UNKNOWN_C0AFCD
    case 0xC2E066: cpu.execute_instruction<0x22>(0xC0AFAC, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2E0E7.asm:22 END_C_FUNCTION
    case 0xC2E06A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2E6B3.asm (unresolved).
bool execute_unresolved_c2_c2e6b3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2E6B3.asm:5 BEGIN_C_FUNCTION_FAR
    case 0xC2E5CB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2E6B3.asm:14 END_STACK_VARS
    case 0xC2E5CD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2E6B3.asm:14 END_STACK_VARS
    case 0xC2E5CE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2E6B3.asm:14 END_STACK_VARS
    case 0xC2E5CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E5, 2); else cpu.execute_instruction<0x69>(0x00FFE5, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2E6B3.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC2E5CF.
    case 0xC2E5D1: cpu.execute_instruction<0xFF>(0x44AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2E6B3.asm:14 END_STACK_VARS
    case 0xC2E5D2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:22 LDA PSI_ANIMATION_STATE + psi_animation_state::time_until_next_frame
    case 0xC2E5D3: cpu.execute_instruction<0xAD>(0x001B44, 3); return true;
    // src/unknown/C2/C2E6B3.asm:22 LDA PSI_ANIMATION_STATE + psi_animation_state::time_until_next_frame
    // Overlapping static entry reached from 0xC2E5D1.
    case 0xC2E5D5: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:23 AND #$00FF
    case 0xC2E5D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E6B3.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC2E5D6.
    case 0xC2E5D8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C2E6B3.asm:24 BEQL @UNKNOWN12
    case 0xC2E5D9: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:24 BEQL @UNKNOWN12
    case 0xC2E5DB: cpu.execute_instruction<0x4C>(0x00E756, 3); return true;
    // src/unknown/C2/C2E6B3.asm:25 LDX #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::time_until_next_frame
    case 0xC2E5DE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000044, 2); else cpu.execute_instruction<0xA2>(0x001B44, 3); return true;
    // src/unknown/C2/C2E6B3.asm:25 LDX #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::time_until_next_frame
    // Overlapping static entry reached from 0xC2E5DE.
    case 0xC2E5E0: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E5E1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:27 LDA __BSS_START__,X
    case 0xC2E5E3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:28 DEC
    case 0xC2E5E6: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:29 STA PSI_ANIMATION_STATE + psi_animation_state::time_until_next_frame
    case 0xC2E5E7: cpu.execute_instruction<0x8D>(0x001B44, 3); return true;
    // src/unknown/C2/C2E6B3.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC2E5EA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:31 AND #$00FF
    case 0xC2E5EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E6B3.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC2E5EC.
    case 0xC2E5EE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C2E6B3.asm:32 BNEL @UNKNOWN4
    case 0xC2E5EF: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:32 BNEL @UNKNOWN4
    case 0xC2E5F1: cpu.execute_instruction<0x4C>(0x00E697, 3); return true;
    // src/unknown/C2/C2E6B3.asm:33 LDA #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::total_frames
    case 0xC2E5F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000046, 2); else cpu.execute_instruction<0xA9>(0x001B46, 3); return true;
    // src/unknown/C2/C2E6B3.asm:33 LDA #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::total_frames
    // Overlapping static entry reached from 0xC2E5F4.
    case 0xC2E5F6: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:34 STA @VIRTUAL04
    case 0xC2E5F7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:35 LDX @VIRTUAL04
    case 0xC2E5F9: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:36 LDA __BSS_START__,X
    case 0xC2E5FB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:37 AND #$00FF
    case 0xC2E5FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E6B3.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC2E5FE.
    case 0xC2E600: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2E6B3.asm:38 BEQ @UNKNOWN3
    case 0xC2E601: cpu.execute_instruction<0xF0>(0x000078, 2); return true;
    // src/unknown/C2/C2E6B3.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E603: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:40 LDA PSI_ANIMATION_STATE + psi_animation_state::frame_hold_frames
    case 0xC2E605: cpu.execute_instruction<0xAD>(0x001B45, 3); return true;
    // src/unknown/C2/C2E6B3.asm:41 STA PSI_ANIMATION_STATE + psi_animation_state::time_until_next_frame
    case 0xC2E608: cpu.execute_instruction<0x8D>(0x001B44, 3); return true;
    // src/unknown/C2/C2E6B3.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC2E60B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:43 LDA #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::frame_data
    case 0xC2E60D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000047, 2); else cpu.execute_instruction<0xA9>(0x001B47, 3); return true;
    // src/unknown/C2/C2E6B3.asm:43 LDA #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::frame_data
    // Overlapping static entry reached from 0xC2E60D.
    case 0xC2E60F: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:44 STA @VIRTUAL02
    case 0xC2E610: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2E6B3.asm:45 LDY @VIRTUAL02
    case 0xC2E612: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C2/C2E6B3.asm:46 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC2E614: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:46 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC2E617: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C2/C2E6B3.asm:46 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC2E619: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C2/C2E6B3.asm:46 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC2E61C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    case 0xC2E61E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    case 0xC2E620: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    case 0xC2E622: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    case 0xC2E624: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    case 0xC2E626: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x005800, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    // Overlapping static entry reached from 0xC2E626.
    case 0xC2E628: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    case 0xC2E629: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000400, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    // Overlapping static entry reached from 0xC2E629.
    case 0xC2E62B: cpu.execute_instruction<0x04>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    case 0xC2E62C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    // Overlapping static entry reached from 0xC2E62B.
    case 0xC2E62D: cpu.execute_instruction<0x20>(0x0006A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    case 0xC2E62E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x002206, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    case 0xC2E630: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    // Overlapping static entry reached from 0xC2E62E.
    case 0xC2E631: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    // Overlapping static entry reached from 0xC2E631.
    case 0xC2E633: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00C8A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    case 0xC2E634: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x00E5C8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    // Overlapping static entry reached from 0xC2E633.
    case 0xC2E635: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    // Overlapping static entry reached from 0xC2E634.
    case 0xC2E636: cpu.execute_instruction<0xE5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    case 0xC2E637: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    // Overlapping static entry reached from 0xC2E636.
    case 0xC2E638: cpu.execute_instruction<0x0E>(0x00C2A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    case 0xC2E639: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x0000C2, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    // Overlapping static entry reached from 0xC2E639.
    case 0xC2E63B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    case 0xC2E63C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    case 0xC2E63E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x005800, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    // Overlapping static entry reached from 0xC2E63E.
    case 0xC2E640: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    case 0xC2E641: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000400, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    // Overlapping static entry reached from 0xC2E641.
    case 0xC2E643: cpu.execute_instruction<0x04>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    case 0xC2E644: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    // Overlapping static entry reached from 0xC2E643.
    case 0xC2E645: cpu.execute_instruction<0x20>(0x000FA9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    case 0xC2E646: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00220F, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    case 0xC2E648: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    // Overlapping static entry reached from 0xC2E646.
    case 0xC2E649: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    // Overlapping static entry reached from 0xC2E649.
    case 0xC2E64B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A4, 2); else cpu.execute_instruction<0xC0>(0x0002A4, 3); return true;
    // src/unknown/C2/C2E6B3.asm:51 LDY @VIRTUAL02
    case 0xC2E64C: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C2/C2E6B3.asm:51 LDY @VIRTUAL02
    // Overlapping static entry reached from 0xC2E64B.
    case 0xC2E64D: cpu.execute_instruction<0x02>(0x0000B9, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C2/C2E6B3.asm:52 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC2E64E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:52 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC2E651: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C2/C2E6B3.asm:52 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC2E653: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C2/C2E6B3.asm:52 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC2E656: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C2E6B3.asm:53 LDA #$0400
    case 0xC2E658: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000400, 3); return true;
    // src/unknown/C2/C2E6B3.asm:53 LDA #$0400
    // Overlapping static entry reached from 0xC2E658.
    case 0xC2E65A: cpu.execute_instruction<0x04>(0x000018, 2); return true;
    // src/unknown/C2/C2E6B3.asm:54 CLC
    case 0xC2E65B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:55 ADC @VIRTUAL06
    case 0xC2E65C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C2E6B3.asm:56 STA @VIRTUAL06
    case 0xC2E65E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C2E6B3.asm:57 LDY @VIRTUAL02
    case 0xC2E660: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C2/C2E6B3.asm:58 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC2E662: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C2/C2E6B3.asm:58 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC2E664: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C2/C2E6B3.asm:58 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC2E667: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C2/C2E6B3.asm:58 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC2E669: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C2/C2E6B3.asm:59 LDX @VIRTUAL04
    case 0xC2E66C: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E66E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:61 LDA __BSS_START__,X
    case 0xC2E670: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:62 DEC
    case 0xC2E673: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:63 LDX @VIRTUAL04
    case 0xC2E674: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:64 STA __BSS_START__,X
    case 0xC2E676: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:65 BRA @UNKNOWN4
    case 0xC2E679: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    case 0xC2E67B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x00E5C9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    // Overlapping static entry reached from 0xC2E67B.
    case 0xC2E67D: cpu.execute_instruction<0xE5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    case 0xC2E67E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    // Overlapping static entry reached from 0xC2E67D.
    case 0xC2E67F: cpu.execute_instruction<0x0E>(0x00C2A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    case 0xC2E680: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x0000C2, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    // Overlapping static entry reached from 0xC2E680.
    case 0xC2E682: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    case 0xC2E683: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    case 0xC2E685: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x005800, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    // Overlapping static entry reached from 0xC2E685.
    case 0xC2E687: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    case 0xC2E688: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    // Overlapping static entry reached from 0xC2E688.
    case 0xC2E68A: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    case 0xC2E68B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    case 0xC2E68D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    case 0xC2E68F: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    // Overlapping static entry reached from 0xC2E68D.
    case 0xC2E690: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    // Overlapping static entry reached from 0xC2E690.
    case 0xC2E692: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x000B22, 3); return true;
    // src/unknown/C2/C2E6B3.asm:69 JSL UNKNOWN_C2DE96
    case 0xC2E693: cpu.execute_instruction<0x22>(0xC2DE0B, 4); return true;
    // src/unknown/C2/C2E6B3.asm:69 JSL UNKNOWN_C2DE96
    // Overlapping static entry reached from 0xC2E692.
    case 0xC2E694: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:69 JSL UNKNOWN_C2DE96
    // Overlapping static entry reached from 0xC2E692.
    case 0xC2E695: cpu.execute_instruction<0xDE>(0x00A2C2, 3); return true;
    // src/unknown/C2/C2E6B3.asm:71 LDX #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::palette_animation_time_until_next_frame
    case 0xC2E697: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004F, 2); else cpu.execute_instruction<0xA2>(0x001B4F, 3); return true;
    // src/unknown/C2/C2E6B3.asm:71 LDX #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::palette_animation_time_until_next_frame
    // Overlapping static entry reached from 0xC2E695.
    case 0xC2E698: cpu.execute_instruction<0x4F>(0x20E21B, 4); return true;
    // src/unknown/C2/C2E6B3.asm:71 LDX #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::palette_animation_time_until_next_frame
    // Overlapping static entry reached from 0xC2E697.
    case 0xC2E699: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:72 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E69A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:73 LDA __BSS_START__,X
    case 0xC2E69C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:74 STA @LOCAL06
    case 0xC2E69F: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C2/C2E6B3.asm:75 REP #PROC_FLAGS::ACCUM8
    case 0xC2E6A1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:76 AND #$00FF
    case 0xC2E6A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E6B3.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC2E6A3.
    case 0xC2E6A5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C2E6B3.asm:77 BEQL @UNKNOWN12
    case 0xC2E6A6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:77 BEQL @UNKNOWN12
    case 0xC2E6A8: cpu.execute_instruction<0x4C>(0x00E756, 3); return true;
    // src/unknown/C2/C2E6B3.asm:78 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E6AB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:79 LDA @LOCAL06
    case 0xC2E6AD: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C2/C2E6B3.asm:80 DEC
    case 0xC2E6AF: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:81 STA __BSS_START__,X
    case 0xC2E6B0: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:82 REP #PROC_FLAGS::ACCUM8
    case 0xC2E6B3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:83 AND #$00FF
    case 0xC2E6B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E6B3.asm:83 AND #$00FF
    // Overlapping static entry reached from 0xC2E6B5.
    case 0xC2E6B7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C2E6B3.asm:84 BNEL @UNKNOWN12
    case 0xC2E6B8: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:84 BNEL @UNKNOWN12
    case 0xC2E6BA: cpu.execute_instruction<0x4C>(0x00E756, 3); return true;
    // src/unknown/C2/C2E6B3.asm:85 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E6BD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:86 LDA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_frames
    case 0xC2E6BF: cpu.execute_instruction<0xAD>(0x001B4E, 3); return true;
    // src/unknown/C2/C2E6B3.asm:87 STA __BSS_START__,X
    case 0xC2E6C2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:88 LDA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_upper_index
    case 0xC2E6C5: cpu.execute_instruction<0xAD>(0x001B4C, 3); return true;
    // src/unknown/C2/C2E6B3.asm:89 SEC
    case 0xC2E6C8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:90 SBC PSI_ANIMATION_STATE + psi_animation_state::palette_animation_lower_index
    case 0xC2E6C9: cpu.execute_instruction<0xED>(0x001B4B, 3); return true;
    // src/unknown/C2/C2E6B3.asm:91 REP #PROC_FLAGS::ACCUM8
    case 0xC2E6CC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:92 AND #$00FF
    case 0xC2E6CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E6B3.asm:92 AND #$00FF
    // Overlapping static entry reached from 0xC2E6CE.
    case 0xC2E6D0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2E6B3.asm:93 STA @VIRTUAL02
    case 0xC2E6D1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2E6B3.asm:94 INC @VIRTUAL02
    case 0xC2E6D3: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2E6B3.asm:95 LDX #0
    case 0xC2E6D5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:95 LDX #0
    // Overlapping static entry reached from 0xC2E6D5.
    case 0xC2E6D7: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C2/C2E6B3.asm:96 STX @LOCAL05
    case 0xC2E6D8: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C2/C2E6B3.asm:97 BRA @UNKNOWN10
    case 0xC2E6DA: cpu.execute_instruction<0x80>(0x000050, 2); return true;
    // src/unknown/C2/C2E6B3.asm:99 LDA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_current_index
    case 0xC2E6DC: cpu.execute_instruction<0xAD>(0x001B4D, 3); return true;
    // src/unknown/C2/C2E6B3.asm:100 AND #$00FF
    case 0xC2E6DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E6B3.asm:100 AND #$00FF
    // Overlapping static entry reached from 0xC2E6DF.
    case 0xC2E6E1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2E6B3.asm:101 STA @VIRTUAL04
    case 0xC2E6E2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:102 TXA
    case 0xC2E6E4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:103 CMP @VIRTUAL04
    case 0xC2E6E5: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:104 BCS @UNKNOWN8
    case 0xC2E6E7: cpu.execute_instruction<0xB0>(0x00000D, 2); return true;
    // src/unknown/C2/C2E6B3.asm:105 TXA
    case 0xC2E6E9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:106 CLC
    case 0xC2E6EA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:107 ADC @VIRTUAL02
    case 0xC2E6EB: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C2E6B3.asm:108 SEC
    case 0xC2E6ED: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:109 SBC @VIRTUAL04
    case 0xC2E6EE: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:110 STA @VIRTUAL04
    case 0xC2E6F0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:111 STA @LOCAL04
    case 0xC2E6F2: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2E6B3.asm:112 BRA @UNKNOWN9
    case 0xC2E6F4: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C2/C2E6B3.asm:114 TXA
    case 0xC2E6F6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:115 SEC
    case 0xC2E6F7: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:116 SBC @VIRTUAL04
    case 0xC2E6F8: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:117 STA @VIRTUAL04
    case 0xC2E6FA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:118 STA @LOCAL04
    case 0xC2E6FC: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2E6B3.asm:120 LDA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_lower_index
    case 0xC2E6FE: cpu.execute_instruction<0xAD>(0x001B4B, 3); return true;
    // src/unknown/C2/C2E6B3.asm:121 AND #$00FF
    case 0xC2E701: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E6B3.asm:121 AND #$00FF
    // Overlapping static entry reached from 0xC2E701.
    case 0xC2E703: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2E6B3.asm:122 STA @LOCAL03
    case 0xC2E704: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C2E6B3.asm:123 STX @VIRTUAL04
    case 0xC2E706: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:124 CLC
    case 0xC2E708: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:125 ADC @VIRTUAL04
    case 0xC2E709: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:126 ASL
    case 0xC2E70B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:127 CLC
    case 0xC2E70C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:128 ADC PSI_ANIMATION_STATE + psi_animation_state::displayed_palette
    case 0xC2E70D: cpu.execute_instruction<0x6D>(0x001B70, 3); return true;
    // src/unknown/C2/C2E6B3.asm:129 PHA
    case 0xC2E710: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:130 LDA @LOCAL04
    case 0xC2E711: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2E6B3.asm:131 STA @VIRTUAL04
    case 0xC2E713: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:132 LDA @LOCAL03
    case 0xC2E715: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2E6B3.asm:133 CLC
    case 0xC2E717: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:134 ADC @VIRTUAL04
    case 0xC2E718: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:135 ASL
    case 0xC2E71A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:137 CLC
    case 0xC2E71B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:138 ADC #.LOWORD(PSI_ANIMATION_STATE)
    case 0xC2E71C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000044, 2); else cpu.execute_instruction<0x69>(0x001B44, 3); return true;
    // src/unknown/C2/C2E6B3.asm:138 ADC #.LOWORD(PSI_ANIMATION_STATE)
    // Overlapping static entry reached from 0xC2E71C.
    case 0xC2E71E: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:139 TAX
    case 0xC2E71F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:140 LDA a:psi_animation_state::palette,X
    case 0xC2E720: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/unknown/C2/C2E6B3.asm:145 PLX
    case 0xC2E723: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:146 STA __BSS_START__,X
    case 0xC2E724: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:147 LDX @LOCAL05
    case 0xC2E727: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C2/C2E6B3.asm:148 INX
    case 0xC2E729: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:149 STX @LOCAL05
    case 0xC2E72A: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C2/C2E6B3.asm:151 TXA
    case 0xC2E72C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:152 CMP @VIRTUAL02
    case 0xC2E72D: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2E6B3.asm:153 BCC @UNKNOWN7
    case 0xC2E72F: cpu.execute_instruction<0x90>(0x0000AB, 2); return true;
    // src/unknown/C2/C2E6B3.asm:154 LDX #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::palette_animation_current_index
    case 0xC2E731: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004D, 2); else cpu.execute_instruction<0xA2>(0x001B4D, 3); return true;
    // src/unknown/C2/C2E6B3.asm:154 LDX #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::palette_animation_current_index
    // Overlapping static entry reached from 0xC2E731.
    case 0xC2E733: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:155 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E734: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:156 LDA __BSS_START__,X
    case 0xC2E736: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:157 INC
    case 0xC2E739: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:158 STA __BSS_START__,X
    case 0xC2E73A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:159 REP #PROC_FLAGS::ACCUM8
    case 0xC2E73D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:160 AND #$00FF
    case 0xC2E73F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E6B3.asm:160 AND #$00FF
    // Overlapping static entry reached from 0xC2E73F.
    case 0xC2E741: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C2/C2E6B3.asm:161 CMP @VIRTUAL02
    case 0xC2E742: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2E6B3.asm:162 BCC @UNKNOWN11
    case 0xC2E744: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // src/unknown/C2/C2E6B3.asm:163 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E746: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:164 LDA #0
    case 0xC2E748: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/unknown/C2/C2E6B3.asm:165 STA __BSS_START__,X
    case 0xC2E74A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:165 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2E748.
    case 0xC2E74B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C2E6B3.asm:167 REP #PROC_FLAGS::ACCUM8
    case 0xC2E74D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:168 LDA #24
    case 0xC2E74F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C2/C2E6B3.asm:168 LDA #24
    // Overlapping static entry reached from 0xC2E74F.
    case 0xC2E751: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2E6B3.asm:169 JSL UNKNOWN_C0856B
    case 0xC2E752: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/unknown/C2/C2E6B3.asm:171 LDX #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::enemy_colour_change_start_frames_left
    case 0xC2E756: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000072, 2); else cpu.execute_instruction<0xA2>(0x001B72, 3); return true;
    // src/unknown/C2/C2E6B3.asm:171 LDX #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::enemy_colour_change_start_frames_left
    // Overlapping static entry reached from 0xC2E756.
    case 0xC2E758: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:172 LDA __BSS_START__,X
    case 0xC2E759: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:173 BEQ @UNKNOWN18
    case 0xC2E75C: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/unknown/C2/C2E6B3.asm:174 DEC
    case 0xC2E75E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:175 STA __BSS_START__,X
    case 0xC2E75F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:176 BNE @UNKNOWN18
    case 0xC2E762: cpu.execute_instruction<0xD0>(0x000048, 2); return true;
    // src/unknown/C2/C2E6B3.asm:177 LDA #20
    case 0xC2E764: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C2/C2E6B3.asm:177 LDA #20
    // Overlapping static entry reached from 0xC2E764.
    case 0xC2E766: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2E6B3.asm:178 JSL UNKNOWN_C2FAD8
    case 0xC2E767: cpu.execute_instruction<0x22>(0xC2F9F1, 4); return true;
    // src/unknown/C2/C2E6B3.asm:179 LDA #0
    case 0xC2E76B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:179 LDA #0
    // Overlapping static entry reached from 0xC2E76B.
    case 0xC2E76D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2E6B3.asm:180 STA @VIRTUALTMP01
    case 0xC2E76E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:181 BRA @UNKNOWN17
    case 0xC2E770: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/unknown/C2/C2E6B3.asm:183 LDA @VIRTUALTMP01
    case 0xC2E772: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:184 ASL
    case 0xC2E774: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:185 TAX
    case 0xC2E775: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:186 LDA PSI_ANIMATION_ENEMY_TARGETS,X
    case 0xC2E776: cpu.execute_instruction<0xBD>(0x00B0BC, 3); return true;
    // src/unknown/C2/C2E6B3.asm:187 BEQ @UNKNOWN16
    case 0xC2E779: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // src/unknown/C2/C2E6B3.asm:188 LDA #1
    case 0xC2E77B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2E6B3.asm:188 LDA #1
    // Overlapping static entry reached from 0xC2E77B.
    case 0xC2E77D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2E6B3.asm:189 STA @VIRTUALTMP02
    case 0xC2E77E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2E6B3.asm:190 BRA @UNKNOWN15
    case 0xC2E780: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C2/C2E6B3.asm:192 LDA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_blue
    case 0xC2E782: cpu.execute_instruction<0xAD>(0x001B7A, 3); return true;
    // src/unknown/C2/C2E6B3.asm:193 STA @LOCAL00
    case 0xC2E785: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2E6B3.asm:194 LDY PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_green
    case 0xC2E787: cpu.execute_instruction<0xAC>(0x001B78, 3); return true;
    // src/unknown/C2/C2E6B3.asm:195 LDX PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_red
    case 0xC2E78A: cpu.execute_instruction<0xAE>(0x001B76, 3); return true;
    // src/unknown/C2/C2E6B3.asm:196 LDA @VIRTUALTMP01
    case 0xC2E78D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:197 ASL
    case 0xC2E78F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:198 ASL
    case 0xC2E790: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:199 ASL
    case 0xC2E791: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:200 ASL
    case 0xC2E792: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:201 CLC
    case 0xC2E793: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:202 ADC @VIRTUALTMP02
    case 0xC2E794: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C2E6B3.asm:203 JSL UNKNOWN_C2FB35
    case 0xC2E796: cpu.execute_instruction<0x22>(0xC2FA4E, 4); return true;
    // src/unknown/C2/C2E6B3.asm:204 INC @VIRTUALTMP02
    case 0xC2E79A: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2E6B3.asm:206 LDA @VIRTUALTMP02
    case 0xC2E79C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2E6B3.asm:207 CMP #16
    case 0xC2E79E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/unknown/C2/C2E6B3.asm:207 CMP #16
    // Overlapping static entry reached from 0xC2E79E.
    case 0xC2E7A0: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2E6B3.asm:208 BCC @UNKNOWN14
    case 0xC2E7A1: cpu.execute_instruction<0x90>(0x0000DF, 2); return true;
    // src/unknown/C2/C2E6B3.asm:210 INC @VIRTUALTMP01
    case 0xC2E7A3: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:212 LDA @VIRTUALTMP01
    case 0xC2E7A5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:213 CMP #4
    case 0xC2E7A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C2/C2E6B3.asm:213 CMP #4
    // Overlapping static entry reached from 0xC2E7A7.
    case 0xC2E7A9: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2E6B3.asm:214 BCC @UNKNOWN13
    case 0xC2E7AA: cpu.execute_instruction<0x90>(0x0000C6, 2); return true;
    // src/unknown/C2/C2E6B3.asm:216 LDX #.LOWORD(PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_frames_left)
    case 0xC2E7AC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000074, 2); else cpu.execute_instruction<0xA2>(0x001B74, 3); return true;
    // src/unknown/C2/C2E6B3.asm:216 LDX #.LOWORD(PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_frames_left)
    // Overlapping static entry reached from 0xC2E7AC.
    case 0xC2E7AE: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:217 LDA __BSS_START__,X
    case 0xC2E7AF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:218 BEQ @UNKNOWN22
    case 0xC2E7B2: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/unknown/C2/C2E6B3.asm:219 DEC
    case 0xC2E7B4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:220 STA __BSS_START__,X
    case 0xC2E7B5: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:221 BNE @UNKNOWN22
    case 0xC2E7B8: cpu.execute_instruction<0xD0>(0x000021, 2); return true;
    // src/unknown/C2/C2E6B3.asm:222 LDY #0
    case 0xC2E7BA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:222 LDY #0
    // Overlapping static entry reached from 0xC2E7BA.
    case 0xC2E7BC: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C2/C2E6B3.asm:223 STY @LOCAL02
    case 0xC2E7BD: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C2/C2E6B3.asm:224 BRA @UNKNOWN21
    case 0xC2E7BF: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C2/C2E6B3.asm:226 TYA
    case 0xC2E7C1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:227 ASL
    case 0xC2E7C2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:228 TAX
    case 0xC2E7C3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:229 LDA PSI_ANIMATION_ENEMY_TARGETS,X
    case 0xC2E7C4: cpu.execute_instruction<0xBD>(0x00B0BC, 3); return true;
    // src/unknown/C2/C2E6B3.asm:230 BEQ @UNKNOWN20
    case 0xC2E7C7: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C2/C2E6B3.asm:231 TYX
    case 0xC2E7C9: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:232 LDA #20
    case 0xC2E7CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C2/C2E6B3.asm:232 LDA #20
    // Overlapping static entry reached from 0xC2E7CA.
    case 0xC2E7CC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2E6B3.asm:233 JSL UNKNOWN_C2FADE
    case 0xC2E7CD: cpu.execute_instruction<0x22>(0xC2F9F7, 4); return true;
    // src/unknown/C2/C2E6B3.asm:235 LDY @LOCAL02
    case 0xC2E7D1: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2E6B3.asm:236 INY
    case 0xC2E7D3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:237 STY @LOCAL02
    case 0xC2E7D4: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C2/C2E6B3.asm:239 CPY #4
    case 0xC2E7D6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000004, 2); else cpu.execute_instruction<0xC0>(0x000004, 3); return true;
    // src/unknown/C2/C2E6B3.asm:239 CPY #4
    // Overlapping static entry reached from 0xC2E7D6.
    case 0xC2E7D8: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2E6B3.asm:240 BCC @UNKNOWN19
    case 0xC2E7D9: cpu.execute_instruction<0x90>(0x0000E6, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2E6B3.asm:242 END_C_FUNCTION
    case 0xC2E7DB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2E6B3.asm:242 END_C_FUNCTION
    case 0xC2E7DC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2E8C4.asm (unresolved).
bool execute_unresolved_c2_c2e8c4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2E8C4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2E7DD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2E8C4.asm:8 END_STACK_VARS
    case 0xC2E7DF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2E8C4.asm:8 END_STACK_VARS
    case 0xC2E7E0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2E8C4.asm:8 END_STACK_VARS
    case 0xC2E7E1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2E8C4.asm:8 END_STACK_VARS
    case 0xC2E7E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2E8C4.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2E7E2.
    case 0xC2E7E4: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2E8C4.asm:8 END_STACK_VARS
    case 0xC2E7E5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2E8C4.asm:8 END_STACK_VARS
    case 0xC2E7E6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2E8C4.asm:9 STY @VIRTUAL02
    case 0xC2E7E7: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C2/C2E8C4.asm:9 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC2E7E4.
    case 0xC2E7E8: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/unknown/C2/C2E8C4.asm:10 TAY
    case 0xC2E7E9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2E8C4.asm:11 JSL UNKNOWN_C4A67E
    case 0xC2E7EA: cpu.execute_instruction<0x22>(0xC47AE7, 4); return true;
    // src/unknown/C2/C2E8C4.asm:12 LDA @VIRTUAL02
    case 0xC2E7EE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2E8C4.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E7F0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2E8C4.asm:14 STA SWIRL_LENGTH_PADDING
    case 0xC2E7F2: cpu.execute_instruction<0x8D>(0x00B09F, 3); return true;
    // src/unknown/C2/C2E8C4.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC2E7F5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2E8C4.asm:16 END_C_FUNCTION
    case 0xC2E7F7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2E8C4.asm:16 END_C_FUNCTION
    case 0xC2E7F8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2E9C8.asm (unresolved).
bool execute_unresolved_c2_c2e9c8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2E9C8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2E8E1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C2E9C8.asm:6 LDA FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC2E8E3: cpu.execute_instruction<0xAD>(0x00B097, 3); return true;
    // src/unknown/C2/C2E9C8.asm:7 AND #$00FF
    case 0xC2E8E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E9C8.asm:7 AND #$00FF
    // Overlapping static entry reached from 0xC2E8E6.
    case 0xC2E8E8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2E9C8.asm:8 BEQ @UNKNOWN2
    case 0xC2E8E9: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/unknown/C2/C2E9C8.asm:9 LDA SWIRL_LENGTH_PADDING
    case 0xC2E8EB: cpu.execute_instruction<0xAD>(0x00B09F, 3); return true;
    // src/unknown/C2/C2E9C8.asm:10 AND #$00FF
    case 0xC2E8EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E9C8.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC2E8EE.
    case 0xC2E8F0: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C2E9C8.asm:11 CLC
    case 0xC2E8F1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2E9C8.asm:12 SBC #4
    case 0xC2E8F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/unknown/C2/C2E9C8.asm:12 SBC #4
    // Overlapping static entry reached from 0xC2E8F2.
    case 0xC2E8F4: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C2/C2E9C8.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC2E8F5: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C2/C2E9C8.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC2E8F7: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C2/C2E9C8.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC2E8F9: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C2/C2E9C8.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC2E8FB: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C2/C2E9C8.asm:14 LDA #1
    case 0xC2E8FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2E9C8.asm:14 LDA #1
    // Overlapping static entry reached from 0xC2E8FD.
    case 0xC2E8FF: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C2E9C8.asm:15 BRA @UNKNOWN3
    case 0xC2E900: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C2/C2E9C8.asm:17 LDA #0
    case 0xC2E902: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2E9C8.asm:17 LDA #0
    // Overlapping static entry reached from 0xC2E902.
    case 0xC2E904: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2E9C8.asm:19 END_C_FUNCTION
    case 0xC2E905: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2E9ED.asm (unresolved).
bool execute_unresolved_c2_c2e9ed_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2E9ED.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2E906: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C2E9ED.asm:5 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E908: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2E9ED.asm:6 STZ FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC2E90A: cpu.execute_instruction<0x9C>(0x00B097, 3); return true;
    // src/unknown/C2/C2E9ED.asm:7 REP #PROC_FLAGS::ACCUM8
    case 0xC2E90D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2E9ED.asm:8 LDA SWIRL_HDMA_CHANNEL_OFFSET
    case 0xC2E90F: cpu.execute_instruction<0xAD>(0x00B09E, 3); return true;
    // src/unknown/C2/C2E9ED.asm:9 AND #$00FF
    case 0xC2E912: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E9ED.asm:9 AND #$00FF
    // Overlapping static entry reached from 0xC2E912.
    case 0xC2E914: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/unknown/C2/C2E9ED.asm:10 INC
    case 0xC2E915: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2E9ED.asm:11 INC
    case 0xC2E916: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2E9ED.asm:12 INC
    case 0xC2E917: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2E9ED.asm:13 JSL UNKNOWN_C0AE34
    case 0xC2E918: cpu.execute_instruction<0x22>(0xC0AE13, 4); return true;
    // src/unknown/C2/C2E9ED.asm:14 LDY #0
    case 0xC2E91C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C2/C2E9ED.asm:14 LDY #0
    // Overlapping static entry reached from 0xC2E91C.
    case 0xC2E91E: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C2/C2E9ED.asm:15 TYX
    case 0xC2E91F: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C2E9ED.asm:16 TYA
    case 0xC2E920: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2E9ED.asm:17 JSL SET_COLDATA
    case 0xC2E921: cpu.execute_instruction<0x22>(0xC0AFF9, 4); return true;
    // src/unknown/C2/C2E9ED.asm:18 LDX #0
    case 0xC2E925: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2E9ED.asm:18 LDX #0
    // Overlapping static entry reached from 0xC2E925.
    case 0xC2E927: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C2/C2E9ED.asm:19 TXA
    case 0xC2E928: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2E9ED.asm:20 JSL SET_WINDOW_MASK
    case 0xC2E929: cpu.execute_instruction<0x22>(0xC0B026, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2E9ED.asm:21 END_C_FUNCTION
    case 0xC2E92D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2EA15.asm (unresolved).
bool execute_unresolved_c2_c2ea15_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2EA15.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2E92E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2EA15.asm:7 END_STACK_VARS
    case 0xC2E930: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2EA15.asm:7 END_STACK_VARS
    case 0xC2E931: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2EA15.asm:7 END_STACK_VARS
    case 0xC2E932: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2EA15.asm:7 END_STACK_VARS
    case 0xC2E933: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2EA15.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2E933.
    case 0xC2E935: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2EA15.asm:7 END_STACK_VARS
    case 0xC2E936: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2EA15.asm:7 END_STACK_VARS
    case 0xC2E937: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2EA15.asm:8 TAY
    case 0xC2E938: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2EA15.asm:9 STY @LOCAL00
    case 0xC2E939: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C2EA15.asm:10 TYA
    case 0xC2E93B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2EA15.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E93C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2EA15.asm:12 STA ACTIVE_OVAL_WINDOW
    case 0xC2E93E: cpu.execute_instruction<0x8D>(0x00B0C4, 3); return true;
    // src/unknown/C2/C2EA15.asm:13 LDX #0
    case 0xC2E941: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2EA15.asm:13 LDX #0
    // Overlapping static entry reached from 0xC2E941.
    case 0xC2E943: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C2/C2EA15.asm:14 REP #PROC_FLAGS::ACCUM8
    case 0xC2E944: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2EA15.asm:15 TXA
    case 0xC2E946: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2EA15.asm:16 JSL UNKNOWN_C4A67E
    case 0xC2E947: cpu.execute_instruction<0x22>(0xC47AE7, 4); return true;
    // src/unknown/C2/C2EA15.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E94B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2EA15.asm:18 LDA #19
    case 0xC2E94D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x008D13, 3); return true;
    // src/unknown/C2/C2EA15.asm:19 STA SWIRL_MASK_SETTINGS
    case 0xC2E94F: cpu.execute_instruction<0x8D>(0x00B09D, 3); return true;
    // src/unknown/C2/C2EA15.asm:19 STA SWIRL_MASK_SETTINGS
    // Overlapping static entry reached from 0xC2E94D.
    case 0xC2E950: cpu.execute_instruction<0x9D>(0x00A4B0, 3); return true;
    // src/unknown/C2/C2EA15.asm:20 LDY @LOCAL00
    case 0xC2E952: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C2EA15.asm:20 LDY @LOCAL00
    // Overlapping static entry reached from 0xC2E950.
    case 0xC2E953: cpu.execute_instruction<0x0E>(0x0020C2, 3); return true;
    // src/unknown/C2/C2EA15.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC2E954: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2EA15.asm:22 TYA
    case 0xC2E956: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2EA15.asm:23 CMP #2
    case 0xC2E957: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C2/C2EA15.asm:23 CMP #2
    // Overlapping static entry reached from 0xC2E957.
    case 0xC2E959: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2EA15.asm:24 BEQ @UNKNOWN0
    case 0xC2E95A: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C2/C2EA15.asm:25 CMP #1
    case 0xC2E95C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2EA15.asm:25 CMP #1
    // Overlapping static entry reached from 0xC2E95C.
    case 0xC2E95E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2EA15.asm:26 BEQ @UNKNOWN1
    case 0xC2E95F: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C2/C2EA15.asm:27 BRA @UNKNOWN2
    case 0xC2E961: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:29 MOVE_INT_CONSTANT UNKNOWN_C3F819, LOADED_OVAL_WINDOW
    case 0xC2E963: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005E, 2); else cpu.execute_instruction<0xA9>(0x00F35E, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:29 MOVE_INT_CONSTANT UNKNOWN_C3F819, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2E963.
    case 0xC2E965: cpu.execute_instruction<0xF3>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C2EA15.asm:29 MOVE_INT_CONSTANT UNKNOWN_C3F819, LOADED_OVAL_WINDOW
    case 0xC2E966: cpu.execute_instruction<0x8D>(0x00B0A1, 3); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C2EA15.asm:29 MOVE_INT_CONSTANT UNKNOWN_C3F819, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2E965.
    case 0xC2E967: cpu.execute_instruction<0xA1>(0x0000B0, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:29 MOVE_INT_CONSTANT UNKNOWN_C3F819, LOADED_OVAL_WINDOW
    case 0xC2E969: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:29 MOVE_INT_CONSTANT UNKNOWN_C3F819, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2E969.
    case 0xC2E96B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C2EA15.asm:29 MOVE_INT_CONSTANT UNKNOWN_C3F819, LOADED_OVAL_WINDOW
    case 0xC2E96C: cpu.execute_instruction<0x8D>(0x00B0A3, 3); return true;
    // src/unknown/C2/C2EA15.asm:30 BRA @UNKNOWN3
    case 0xC2E96F: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:32 MOVE_INT_CONSTANT UNKNOWN_C4A5FA, LOADED_OVAL_WINDOW
    case 0xC2E971: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000063, 2); else cpu.execute_instruction<0xA9>(0x007A63, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:32 MOVE_INT_CONSTANT UNKNOWN_C4A5FA, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2E971.
    case 0xC2E973: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C2EA15.asm:32 MOVE_INT_CONSTANT UNKNOWN_C4A5FA, LOADED_OVAL_WINDOW
    case 0xC2E974: cpu.execute_instruction<0x8D>(0x00B0A1, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:32 MOVE_INT_CONSTANT UNKNOWN_C4A5FA, LOADED_OVAL_WINDOW
    case 0xC2E977: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:32 MOVE_INT_CONSTANT UNKNOWN_C4A5FA, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2E977.
    case 0xC2E979: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C2EA15.asm:32 MOVE_INT_CONSTANT UNKNOWN_C4A5FA, LOADED_OVAL_WINDOW
    case 0xC2E97A: cpu.execute_instruction<0x8D>(0x00B0A3, 3); return true;
    // src/unknown/C2/C2EA15.asm:33 BRA @UNKNOWN3
    case 0xC2E97D: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:35 MOVE_INT_CONSTANT UNKNOWN_C4A5CE, LOADED_OVAL_WINDOW
    case 0xC2E97F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000037, 2); else cpu.execute_instruction<0xA9>(0x007A37, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:35 MOVE_INT_CONSTANT UNKNOWN_C4A5CE, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2E97F.
    case 0xC2E981: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C2EA15.asm:35 MOVE_INT_CONSTANT UNKNOWN_C4A5CE, LOADED_OVAL_WINDOW
    case 0xC2E982: cpu.execute_instruction<0x8D>(0x00B0A1, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:35 MOVE_INT_CONSTANT UNKNOWN_C4A5CE, LOADED_OVAL_WINDOW
    case 0xC2E985: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:35 MOVE_INT_CONSTANT UNKNOWN_C4A5CE, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2E985.
    case 0xC2E987: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C2EA15.asm:35 MOVE_INT_CONSTANT UNKNOWN_C4A5CE, LOADED_OVAL_WINDOW
    case 0xC2E988: cpu.execute_instruction<0x8D>(0x00B0A3, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2EA15.asm:37 END_C_FUNCTION
    case 0xC2E98B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2EA15.asm:37 END_C_FUNCTION
    case 0xC2E98C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2EA74.asm (unresolved).
bool execute_unresolved_c2_c2ea74_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2EA74.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2E98D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C2EA74.asm:5 LDX #0
    case 0xC2E98F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2EA74.asm:5 LDX #0
    // Overlapping static entry reached from 0xC2E98F.
    case 0xC2E991: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C2/C2EA74.asm:6 TXA
    case 0xC2E992: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2EA74.asm:7 JSL UNKNOWN_C4A67E
    case 0xC2E993: cpu.execute_instruction<0x22>(0xC47AE7, 4); return true;
    // src/unknown/C2/C2EA74.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E997: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2EA74.asm:9 LDA #19
    case 0xC2E999: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x008D13, 3); return true;
    // src/unknown/C2/C2EA74.asm:10 STA SWIRL_MASK_SETTINGS
    case 0xC2E99B: cpu.execute_instruction<0x8D>(0x00B09D, 3); return true;
    // src/unknown/C2/C2EA74.asm:10 STA SWIRL_MASK_SETTINGS
    // Overlapping static entry reached from 0xC2E999.
    case 0xC2E99C: cpu.execute_instruction<0x9D>(0x00C2B0, 3); return true;
    // src/unknown/C2/C2EA74.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC2E99E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2EA74.asm:11 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2E99C.
    case 0xC2E99F: cpu.execute_instruction<0x20>(0x00C4AD, 3); return true;
    // src/unknown/C2/C2EA74.asm:12 LDA ACTIVE_OVAL_WINDOW
    case 0xC2E9A0: cpu.execute_instruction<0xAD>(0x00B0C4, 3); return true;
    // src/unknown/C2/C2EA74.asm:12 LDA ACTIVE_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2E99F.
    case 0xC2E9A2: cpu.execute_instruction<0xB0>(0x000029, 2); return true;
    // src/unknown/C2/C2EA74.asm:13 AND #$00FF
    case 0xC2E9A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2EA74.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC2E9A2.
    case 0xC2E9A4: cpu.execute_instruction<0xFF>(0x0EF000, 4); return true;
    // src/unknown/C2/C2EA74.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC2E9A3.
    case 0xC2E9A5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2EA74.asm:14 BEQ @UNKNOWN0
    case 0xC2E9A6: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EA74.asm:15 MOVE_INT_CONSTANT UNKNOWN_C4A652, LOADED_OVAL_WINDOW
    case 0xC2E9A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BB, 2); else cpu.execute_instruction<0xA9>(0x007ABB, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EA74.asm:15 MOVE_INT_CONSTANT UNKNOWN_C4A652, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2E9A8.
    case 0xC2E9AA: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C2EA74.asm:15 MOVE_INT_CONSTANT UNKNOWN_C4A652, LOADED_OVAL_WINDOW
    case 0xC2E9AB: cpu.execute_instruction<0x8D>(0x00B0A1, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EA74.asm:15 MOVE_INT_CONSTANT UNKNOWN_C4A652, LOADED_OVAL_WINDOW
    case 0xC2E9AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EA74.asm:15 MOVE_INT_CONSTANT UNKNOWN_C4A652, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2E9AE.
    case 0xC2E9B0: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C2EA74.asm:15 MOVE_INT_CONSTANT UNKNOWN_C4A652, LOADED_OVAL_WINDOW
    case 0xC2E9B1: cpu.execute_instruction<0x8D>(0x00B0A3, 3); return true;
    // src/unknown/C2/C2EA74.asm:16 BRA @UNKNOWN1
    case 0xC2E9B4: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EA74.asm:18 MOVE_INT_CONSTANT UNKNOWN_C4A626, LOADED_OVAL_WINDOW
    case 0xC2E9B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008F, 2); else cpu.execute_instruction<0xA9>(0x007A8F, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EA74.asm:18 MOVE_INT_CONSTANT UNKNOWN_C4A626, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2E9B6.
    case 0xC2E9B8: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C2EA74.asm:18 MOVE_INT_CONSTANT UNKNOWN_C4A626, LOADED_OVAL_WINDOW
    case 0xC2E9B9: cpu.execute_instruction<0x8D>(0x00B0A1, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EA74.asm:18 MOVE_INT_CONSTANT UNKNOWN_C4A626, LOADED_OVAL_WINDOW
    case 0xC2E9BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EA74.asm:18 MOVE_INT_CONSTANT UNKNOWN_C4A626, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2E9BC.
    case 0xC2E9BE: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C2EA74.asm:18 MOVE_INT_CONSTANT UNKNOWN_C4A626, LOADED_OVAL_WINDOW
    case 0xC2E9BF: cpu.execute_instruction<0x8D>(0x00B0A3, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2EA74.asm:20 END_C_FUNCTION
    case 0xC2E9C2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2EAAA.asm (unresolved).
bool execute_unresolved_c2_c2eaaa_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2EAAA.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2E9C3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C2EAAA.asm:5 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E9C5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2EAAA.asm:6 STZ FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC2E9C7: cpu.execute_instruction<0x9C>(0x00B097, 3); return true;
    // src/unknown/C2/C2EAAA.asm:7 REP #PROC_FLAGS::ACCUM8
    case 0xC2E9CA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EAAA.asm:8 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    case 0xC2E9CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EAAA.asm:8 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2E9A2.
    case 0xC2E9CD: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EAAA.asm:8 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2E9CC.
    case 0xC2E9CE: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C2EAAA.asm:8 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    case 0xC2E9CF: cpu.execute_instruction<0x8D>(0x00B0A1, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EAAA.asm:8 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    case 0xC2E9D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EAAA.asm:8 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2E9D2.
    case 0xC2E9D4: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C2EAAA.asm:8 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    case 0xC2E9D5: cpu.execute_instruction<0x8D>(0x00B0A3, 3); return true;
    // src/unknown/C2/C2EAAA.asm:9 LDA #3
    case 0xC2E9D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C2/C2EAAA.asm:9 LDA #3
    // Overlapping static entry reached from 0xC2E9D8.
    case 0xC2E9DA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2EAAA.asm:10 JSL UNKNOWN_C0AE34
    case 0xC2E9DB: cpu.execute_instruction<0x22>(0xC0AE13, 4); return true;
    // src/unknown/C2/C2EAAA.asm:11 LDX #0
    case 0xC2E9DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2EAAA.asm:11 LDX #0
    // Overlapping static entry reached from 0xC2E9DF.
    case 0xC2E9E1: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C2/C2EAAA.asm:12 TXA
    case 0xC2E9E2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2EAAA.asm:13 JSL SET_WINDOW_MASK
    case 0xC2E9E3: cpu.execute_instruction<0x22>(0xC0B026, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2EAAA.asm:14 END_C_FUNCTION
    case 0xC2E9E7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2EACF.asm (unresolved).
bool execute_unresolved_c2_c2eacf_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2EACF.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2E9E8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C2EACF.asm:6 LDA PSI_ANIMATION_STATE + psi_animation_state::time_until_next_frame
    case 0xC2E9EA: cpu.execute_instruction<0xAD>(0x001B44, 3); return true;
    // src/unknown/C2/C2EACF.asm:7 AND #$00FF
    case 0xC2E9ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2EACF.asm:7 AND #$00FF
    // Overlapping static entry reached from 0xC2E9ED.
    case 0xC2E9EF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2EACF.asm:8 BNE @UNKNOWN0
    case 0xC2E9F0: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C2/C2EACF.asm:9 LDA FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC2E9F2: cpu.execute_instruction<0xAD>(0x00B097, 3); return true;
    // src/unknown/C2/C2EACF.asm:10 AND #$00FF
    case 0xC2E9F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2EACF.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC2E9F5.
    case 0xC2E9F7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2EACF.asm:11 BEQ @UNKNOWN1
    case 0xC2E9F8: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C2/C2EACF.asm:13 LDA #1
    case 0xC2E9FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2EACF.asm:13 LDA #1
    // Overlapping static entry reached from 0xC2E9FA.
    case 0xC2E9FC: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C2EACF.asm:14 BRA @UNKNOWN2
    case 0xC2E9FD: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C2/C2EACF.asm:16 LDA #0
    case 0xC2E9FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2EACF.asm:16 LDA #0
    // Overlapping static entry reached from 0xC2E9FF.
    case 0xC2EA01: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2EACF.asm:18 END_C_FUNCTION
    case 0xC2EA02: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2EEE7.asm (unresolved).
bool execute_unresolved_c2_c2eee7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2EEE7.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2EE00: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2EEE7.asm:10 END_STACK_VARS
    case 0xC2EE02: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2EEE7.asm:10 END_STACK_VARS
    case 0xC2EE03: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2EEE7.asm:10 END_STACK_VARS
    case 0xC2EE04: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2EEE7.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC2EE04.
    case 0xC2EE06: cpu.execute_instruction<0xFF>(0x899C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2EEE7.asm:10 END_STACK_VARS
    case 0xC2EE07: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:11 STZ CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2EE08: cpu.execute_instruction<0x9C>(0x00AC89, 3); return true;
    // src/unknown/C2/C2EEE7.asm:11 STZ CURRENT_BATTLE_SPRITES_ALLOCATED
    // Overlapping static entry reached from 0xC2EE06.
    case 0xC2EE0A: cpu.execute_instruction<0xAC>(0x00879C, 3); return true;
    // src/unknown/C2/C2EEE7.asm:12 STZ CURRENT_BATTLE_SPRITEMAPS_ALLOCATED
    case 0xC2EE0B: cpu.execute_instruction<0x9C>(0x00AC87, 3); return true;
    // src/unknown/C2/C2EEE7.asm:12 STZ CURRENT_BATTLE_SPRITEMAPS_ALLOCATED
    // Overlapping static entry reached from 0xC2EE0A.
    case 0xC2EE0D: cpu.execute_instruction<0xAC>(0x000DA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:13 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC2EE0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00C60D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:13 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2EE0E.
    case 0xC2EE10: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2EEE7.asm:13 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC2EE11: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2EEE7.asm:13 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2EE10.
    case 0xC2EE12: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:13 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC2EE13: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:13 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2EE13.
    case 0xC2EE15: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:13 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC2EE16: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C2/C2EEE7.asm:14 LDA CURRENT_BATTLE_GROUP
    case 0xC2EE18: cpu.execute_instruction<0xAD>(0x004E12, 3); return true;
    // src/unknown/C2/C2EEE7.asm:15 ASL
    case 0xC2EE1B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:16 ASL
    case 0xC2EE1C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:17 ASL
    case 0xC2EE1D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:18 CLC
    case 0xC2EE1E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:19 ADC @VIRTUAL0A
    case 0xC2EE1F: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C2/C2EEE7.asm:20 STA @VIRTUAL0A
    case 0xC2EE21: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C2/C2EEE7.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE23: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C2/C2EEE7.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EE23.
    case 0xC2EE25: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C2/C2EEE7.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE26: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C2/C2EEE7.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE28: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C2/C2EEE7.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE29: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C2/C2EEE7.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE2B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE2D: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2EEE7.asm:22 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC2EE2F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2EEE7.asm:22 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC2EE31: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:22 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC2EE33: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:22 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC2EE35: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C2/C2EEE7.asm:23 JMP @UNKNOWN1
    case 0xC2EE37: cpu.execute_instruction<0x4C>(0x00EEE0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:25 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2EE3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x00A440, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:25 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EE3A.
    case 0xC2EE3C: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2EEE7.asm:25 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2EE3D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2EEE7.asm:25 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EE3C.
    case 0xC2EE3E: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:25 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2EE3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:25 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EE3E.
    case 0xC2EE40: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:25 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EE3F.
    case 0xC2EE41: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:25 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2EE42: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2EEE7.asm:26 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EE44: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2EEE7.asm:26 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EE46: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:26 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EE48: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:26 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EE4A: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2EEE7.asm:27 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2EE4C: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2EEE7.asm:27 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2EE4E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:27 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2EE50: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:27 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2EE52: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C2/C2EEE7.asm:28 INC @VIRTUAL0A
    case 0xC2EE54: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C2/C2EEE7.asm:29 LDA [@VIRTUAL0A]
    case 0xC2EE56: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C2/C2EEE7.asm:30 LDY #.SIZEOF(enemy_data)
    case 0xC2EE58: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/unknown/C2/C2EEE7.asm:30 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2EE58.
    case 0xC2EE5A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2EEE7.asm:31 JSL MULT168
    case 0xC2EE5B: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2EEE7.asm:32 STA @LOCAL02
    case 0xC2EE5F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C2EEE7.asm:33 CLC
    case 0xC2EE61: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:34 ADC #enemy_data::battle_sprite
    case 0xC2EE62: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000B, 2); else cpu.execute_instruction<0x69>(0x00000B, 3); return true;
    // src/unknown/C2/C2EEE7.asm:34 ADC #enemy_data::battle_sprite
    // Overlapping static entry reached from 0xC2EE62.
    case 0xC2EE64: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C2EEE7.asm:35 CLC
    case 0xC2EE65: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:36 ADC @VIRTUAL06
    case 0xC2EE66: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C2EEE7.asm:37 STA @VIRTUAL06
    case 0xC2EE68: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C2EEE7.asm:38 LDA [@VIRTUAL06]
    case 0xC2EE6A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C2/C2EEE7.asm:39 TAY
    case 0xC2EE6C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:40 STY @LOCAL01
    case 0xC2EE6D: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C2/C2EEE7.asm:41 LDA @LOCAL02
    case 0xC2EE6F: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2EEE7.asm:42 CLC
    case 0xC2EE71: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:43 ADC #enemy_data::battle_sprite_palette
    case 0xC2EE72: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000024, 2); else cpu.execute_instruction<0x69>(0x000024, 3); return true;
    // src/unknown/C2/C2EEE7.asm:43 ADC #enemy_data::battle_sprite_palette
    // Overlapping static entry reached from 0xC2EE72.
    case 0xC2EE74: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C2/C2EEE7.asm:44 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC2EE75: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C2/C2EEE7.asm:44 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC2EE77: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:44 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC2EE79: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:44 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC2EE7B: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C2/C2EEE7.asm:45 CLC
    case 0xC2EE7D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:46 ADC @VIRTUAL06
    case 0xC2EE7E: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C2EEE7.asm:46 ADC @VIRTUAL06
    // Overlapping static entry reached from 0xC2EEFD.
    case 0xC2EE7F: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // src/unknown/C2/C2EEE7.asm:47 STA @VIRTUAL06
    case 0xC2EE80: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C2EEE7.asm:47 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC2EE7F.
    case 0xC2EE81: cpu.execute_instruction<0x06>(0x0000A7, 2); return true;
    // src/unknown/C2/C2EEE7.asm:48 LDA [@VIRTUAL06]
    case 0xC2EE82: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C2/C2EEE7.asm:48 LDA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2EE81.
    case 0xC2EE83: cpu.execute_instruction<0x06>(0x000029, 2); return true;
    // src/unknown/C2/C2EEE7.asm:49 AND #$00FF
    case 0xC2EE84: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2EEE7.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC2EE83.
    case 0xC2EE85: cpu.execute_instruction<0xFF>(0x0A0A00, 4); return true;
    // src/unknown/C2/C2EEE7.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC2EE84.
    case 0xC2EE86: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C2/C2EEE7.asm:50 ASL
    case 0xC2EE87: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:51 ASL
    case 0xC2EE88: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:52 ASL
    case 0xC2EE89: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:53 ASL
    case 0xC2EE8A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:54 ASL
    case 0xC2EE8B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:55 PHA
    case 0xC2EE8C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:56 LOADPTR BATTLE_SPRITE_PALETTES, @VIRTUAL06
    case 0xC2EE8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x006514, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:56 LOADPTR BATTLE_SPRITE_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EE8D.
    case 0xC2EE8F: cpu.execute_instruction<0x65>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2EEE7.asm:56 LOADPTR BATTLE_SPRITE_PALETTES, @VIRTUAL06
    case 0xC2EE90: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2EEE7.asm:56 LOADPTR BATTLE_SPRITE_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EE8F.
    case 0xC2EE91: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:56 LOADPTR BATTLE_SPRITE_PALETTES, @VIRTUAL06
    case 0xC2EE92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0000CE, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:56 LOADPTR BATTLE_SPRITE_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EE91.
    case 0xC2EE93: cpu.execute_instruction<0xCE>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:56 LOADPTR BATTLE_SPRITE_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EE92.
    case 0xC2EE94: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:56 LOADPTR BATTLE_SPRITE_PALETTES, @VIRTUAL06
    case 0xC2EE95: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:56 LOADPTR BATTLE_SPRITE_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EE93.
    case 0xC2EE96: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:57 PLA
    case 0xC2EE97: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:58 CLC
    case 0xC2EE98: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:59 ADC @VIRTUAL06
    case 0xC2EE99: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C2EEE7.asm:60 STA @VIRTUAL06
    case 0xC2EE9B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C2EEE7.asm:61 STA @LOCAL00
    case 0xC2EE9D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2EEE7.asm:62 LDA @VIRTUAL06+2
    case 0xC2EE9F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C2/C2EEE7.asm:63 STA @LOCAL00+2
    case 0xC2EEA1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2EEE7.asm:64 LDX #32
    case 0xC2EEA3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C2/C2EEE7.asm:64 LDX #32
    // Overlapping static entry reached from 0xC2EEA3.
    case 0xC2EEA5: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C2/C2EEE7.asm:65 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2EEA6: cpu.execute_instruction<0xAD>(0x00AC89, 3); return true;
    // src/unknown/C2/C2EEE7.asm:66 ASL
    case 0xC2EEA9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:67 ASL
    case 0xC2EEAA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:68 ASL
    case 0xC2EEAB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:69 ASL
    case 0xC2EEAC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:70 ASL
    case 0xC2EEAD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:71 CLC
    case 0xC2EEAE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:73 ADC #$0200
    case 0xC2EEAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000200, 3); return true;
    // src/unknown/C2/C2EEE7.asm:73 ADC #$0200
    // Overlapping static entry reached from 0xC2EEAF.
    case 0xC2EEB1: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/unknown/C2/C2EEE7.asm:74 CLC
    case 0xC2EEB2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:75 ADC #$0100
    case 0xC2EEB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000100, 3); return true;
    // src/unknown/C2/C2EEE7.asm:75 ADC #$0100
    // Overlapping static entry reached from 0xC2EEB3.
    case 0xC2EEB5: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/unknown/C2/C2EEE7.asm:79 JSL MEMCPY16
    case 0xC2EEB6: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C2/C2EEE7.asm:79 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2EEB5.
    case 0xC2EEB7: cpu.execute_instruction<0xC3>(0x00008E, 2); return true;
    // src/unknown/C2/C2EEE7.asm:79 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2EEB7.
    case 0xC2EEB9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AD, 2); else cpu.execute_instruction<0xC0>(0x0089AD, 3); return true;
    // src/unknown/C2/C2EEE7.asm:80 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2EEBA: cpu.execute_instruction<0xAD>(0x00AC89, 3); return true;
    // src/unknown/C2/C2EEE7.asm:80 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    // Overlapping static entry reached from 0xC2EEB9.
    case 0xC2EEBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000AC, 2); else cpu.execute_instruction<0x89>(0x000AAC, 3); return true;
    // src/unknown/C2/C2EEE7.asm:80 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    // Overlapping static entry reached from 0xC2EEB9.
    case 0xC2EEBC: cpu.execute_instruction<0xAC>(0x00AA0A, 3); return true;
    // src/unknown/C2/C2EEE7.asm:81 ASL
    case 0xC2EEBD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:82 TAX
    case 0xC2EEBE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:83 LDA [@VIRTUAL0A]
    case 0xC2EEBF: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C2/C2EEE7.asm:84 STA CURRENT_BATTLE_SPRITE_ENEMY_IDS,X
    case 0xC2EEC1: cpu.execute_instruction<0x9D>(0x00AC93, 3); return true;
    // src/unknown/C2/C2EEE7.asm:85 LDY @LOCAL01
    case 0xC2EEC4: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2EEE7.asm:86 TYA
    case 0xC2EEC6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:87 JSR LOAD_BATTLE_SPRITE
    case 0xC2EEC7: cpu.execute_instruction<0x20>(0x00EA03, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2EEE7.asm:88 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC2EECA: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2EEE7.asm:88 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC2EECC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:88 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC2EECE: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:88 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC2EED0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C2EEE7.asm:89 LDA #3
    case 0xC2EED2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C2/C2EEE7.asm:89 LDA #3
    // Overlapping static entry reached from 0xC2EED2.
    case 0xC2EED4: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C2EEE7.asm:90 CLC
    case 0xC2EED5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:91 ADC @VIRTUAL06
    case 0xC2EED6: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C2EEE7.asm:92 STA @VIRTUAL06
    case 0xC2EED8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C2EEE7.asm:93 STA @LOCAL04
    case 0xC2EEDA: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C2/C2EEE7.asm:94 LDA @VIRTUAL06+2
    case 0xC2EEDC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C2/C2EEE7.asm:95 STA @LOCAL04+2
    case 0xC2EEDE: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C2/C2EEE7.asm:97 LDY #0
    case 0xC2EEE0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C2/C2EEE7.asm:97 LDY #0
    // Overlapping static entry reached from 0xC2EEE0.
    case 0xC2EEE2: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C2/C2EEE7.asm:98 LDA [@LOCAL04],Y
    case 0xC2EEE3: cpu.execute_instruction<0xB7>(0x00001A, 2); return true;
    // src/unknown/C2/C2EEE7.asm:99 AND #$00FF
    case 0xC2EEE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2EEE7.asm:99 AND #$00FF
    // Overlapping static entry reached from 0xC2EEE5.
    case 0xC2EEE7: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2EEE7.asm:100 TAX
    case 0xC2EEE8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:101 CPX #$00FF
    case 0xC2EEE9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x0000FF, 3); return true;
    // src/unknown/C2/C2EEE7.asm:101 CPX #$00FF
    // Overlapping static entry reached from 0xC2EEE9.
    case 0xC2EEEB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C2EEE7.asm:102 BNEL @UNKNOWN0
    case 0xC2EEEC: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C2EEE7.asm:102 BNEL @UNKNOWN0
    case 0xC2EEEE: cpu.execute_instruction<0x4C>(0x00EE3A, 3); return true;
    // src/unknown/C2/C2EEE7.asm:103 LDA CURRENT_BATTLE_SPRITEMAPS_ALLOCATED
    case 0xC2EEF1: cpu.execute_instruction<0xAD>(0x00AC87, 3); return true;
    // src/unknown/C2/C2EEE7.asm:104 CMP #16
    case 0xC2EEF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/unknown/C2/C2EEE7.asm:104 CMP #16
    // Overlapping static entry reached from 0xC2EEF4.
    case 0xC2EEF6: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2EEE7.asm:105 BLTEQ @UNKNOWN3
    case 0xC2EEF7: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2EEE7.asm:105 BLTEQ @UNKNOWN3
    case 0xC2EEF9: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C2/C2EEE7.asm:106 LDX #$3000
    case 0xC2EEFB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003000, 3); return true;
    // src/unknown/C2/C2EEE7.asm:106 LDX #$3000
    // Overlapping static entry reached from 0xC2EEFB.
    case 0xC2EEFD: cpu.execute_instruction<0x30>(0x000080, 2); return true;
    // src/unknown/C2/C2EEE7.asm:107 BRA @UNKNOWN4
    case 0xC2EEFE: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C2/C2EEE7.asm:107 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC2EEFD.
    case 0xC2EEFF: cpu.execute_instruction<0x03>(0x0000A2, 2); return true;
    // src/unknown/C2/C2EEE7.asm:109 LDX #$2000
    case 0xC2EF00: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x002000, 3); return true;
    // src/unknown/C2/C2EEE7.asm:109 LDX #$2000
    // Overlapping static entry reached from 0xC2EEFF.
    case 0xC2EF01: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C2/C2EEE7.asm:109 LDX #$2000
    // Overlapping static entry reached from 0xC2EF00.
    case 0xC2EF02: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:111 LOADPTR BUFFER, @LOCAL00
    case 0xC2EF03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:111 LOADPTR BUFFER, @LOCAL00
    // Overlapping static entry reached from 0xC2EF03.
    case 0xC2EF05: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2EEE7.asm:111 LOADPTR BUFFER, @LOCAL00
    case 0xC2EF06: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:111 LOADPTR BUFFER, @LOCAL00
    case 0xC2EF08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:111 LOADPTR BUFFER, @LOCAL00
    // Overlapping static entry reached from 0xC2EF08.
    case 0xC2EF0A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:111 LOADPTR BUFFER, @LOCAL00
    case 0xC2EF0B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2EEE7.asm:112 LDY #$2000
    case 0xC2EF0D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/unknown/C2/C2EEE7.asm:112 LDY #$2000
    // Overlapping static entry reached from 0xC2EF0D.
    case 0xC2EF0F: cpu.execute_instruction<0x20>(0x0020E2, 3); return true;
    // src/unknown/C2/C2EEE7.asm:113 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EF10: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2EEE7.asm:114 LDA #0
    case 0xC2EF12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C2/C2EEE7.asm:115 JSL PREPARE_VRAM_COPY
    case 0xC2EF14: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C2/C2EEE7.asm:115 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC2EF12.
    case 0xC2EF15: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C2/C2EEE7.asm:115 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC2EF15.
    case 0xC2EF17: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2EEE7.asm:116 END_C_FUNCTION
    case 0xC2EF18: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2EEE7.asm:116 END_C_FUNCTION
    case 0xC2EF19: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2F09F.asm (unresolved).
bool execute_unresolved_c2_c2f09f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2F09F.asm:3 BEGIN_C_FUNCTION
    case 0xC2EFBC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2F09F.asm:9 END_STACK_VARS
    case 0xC2EFBE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2F09F.asm:9 END_STACK_VARS
    case 0xC2EFBF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2F09F.asm:9 END_STACK_VARS
    case 0xC2EFC0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2F09F.asm:9 END_STACK_VARS
    case 0xC2EFC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2F09F.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2EFC1.
    case 0xC2EFC3: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2F09F.asm:9 END_STACK_VARS
    case 0xC2EFC4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2F09F.asm:9 END_STACK_VARS
    case 0xC2EFC5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2F09F.asm:10 TAX
    case 0xC2EFC6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F09F.asm:11 STX @LOCAL01
    case 0xC2EFC7: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C2/C2F09F.asm:12 LDA #0
    case 0xC2EFC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2F09F.asm:12 LDA #0
    // Overlapping static entry reached from 0xC2EFC9.
    case 0xC2EFCB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F09F.asm:13 STA @LOCAL00
    case 0xC2EFCC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2F09F.asm:14 BRA @UNKNOWN2
    case 0xC2EFCE: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C2/C2F09F.asm:16 ASL
    case 0xC2EFD0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2F09F.asm:17 PHA
    case 0xC2EFD1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C2/C2F09F.asm:18 LDX @LOCAL01
    case 0xC2EFD2: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C2/C2F09F.asm:19 TXA
    case 0xC2EFD4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F09F.asm:20 PLX
    case 0xC2EFD5: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C2/C2F09F.asm:21 CMP CURRENT_BATTLE_SPRITE_ENEMY_IDS,X
    case 0xC2EFD6: cpu.execute_instruction<0xDD>(0x00AC93, 3); return true;
    // src/unknown/C2/C2F09F.asm:22 BNE @UNKNOWN1
    case 0xC2EFD9: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C2/C2F09F.asm:23 LDA @LOCAL00
    case 0xC2EFDB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2F09F.asm:24 BRA @UNKNOWN3
    case 0xC2EFDD: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C2/C2F09F.asm:26 LDA @LOCAL00
    case 0xC2EFDF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2F09F.asm:27 INC
    case 0xC2EFE1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2F09F.asm:28 STA @LOCAL00
    case 0xC2EFE2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2F09F.asm:30 CMP #4
    case 0xC2EFE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C2/C2F09F.asm:30 CMP #4
    // Overlapping static entry reached from 0xC2EFE4.
    case 0xC2EFE6: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2F09F.asm:31 BCC @UNKNOWN0
    case 0xC2EFE7: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/unknown/C2/C2F09F.asm:32 LDA #0
    case 0xC2EFE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2F09F.asm:32 LDA #0
    // Overlapping static entry reached from 0xC2EFE9.
    case 0xC2EFEB: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2F09F.asm:34 END_C_FUNCTION
    case 0xC2EFEC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C2F09F.asm:34 END_C_FUNCTION
    case 0xC2EFED: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2F0D1.asm (unresolved).
bool execute_unresolved_c2_c2f0d1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2F0D1.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2EFEE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2F0D1.asm:7 END_STACK_VARS
    case 0xC2EFF0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2F0D1.asm:7 END_STACK_VARS
    case 0xC2EFF1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2F0D1.asm:7 END_STACK_VARS
    case 0xC2EFF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2F0D1.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2EFF2.
    case 0xC2EFF4: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2F0D1.asm:7 END_STACK_VARS
    case 0xC2EFF5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2F0D1.asm:8 LDY #0
    case 0xC2EFF6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C2/C2F0D1.asm:8 LDY #0
    // Overlapping static entry reached from 0xC2EFF6.
    case 0xC2EFF8: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C2/C2F0D1.asm:9 STY @LOCAL01
    case 0xC2EFF9: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C2/C2F0D1.asm:10 TYX
    case 0xC2EFFB: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C2F0D1.asm:11 STX @LOCAL00
    case 0xC2EFFC: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C2F0D1.asm:12 BRA @UNKNOWN2
    case 0xC2EFFE: cpu.execute_instruction<0x80>(0x000037, 2); return true;
    // src/unknown/C2/C2F0D1.asm:14 TXA
    case 0xC2F000: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F0D1.asm:15 ASL
    case 0xC2F001: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2F0D1.asm:16 TAX
    case 0xC2F002: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F0D1.asm:17 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC2F003: cpu.execute_instruction<0xBD>(0x00A18E, 3); return true;
    // src/unknown/C2/C2F0D1.asm:18 LDY #.SIZEOF(enemy_data)
    case 0xC2F006: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/unknown/C2/C2F0D1.asm:18 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2F006.
    case 0xC2F008: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F0D1.asm:19 JSL MULT168
    case 0xC2F009: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2F0D1.asm:20 CLC
    case 0xC2F00D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F0D1.asm:21 ADC #enemy_data::battle_sprite
    case 0xC2F00E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000B, 2); else cpu.execute_instruction<0x69>(0x00000B, 3); return true;
    // src/unknown/C2/C2F0D1.asm:21 ADC #enemy_data::battle_sprite
    // Overlapping static entry reached from 0xC2F00E.
    case 0xC2F010: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2F0D1.asm:22 TAX
    case 0xC2F011: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F0D1.asm:23 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC2F012: cpu.execute_instruction<0xBF>(0xD5A440, 4); return true;
    // src/unknown/C2/C2F0D1.asm:24 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2F016: cpu.execute_instruction<0x20>(0x00EF1A, 3); return true;
    // src/unknown/C2/C2F0D1.asm:25 STA @VIRTUAL02
    case 0xC2F019: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F0D1.asm:26 LDY @LOCAL01
    case 0xC2F01B: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C2/C2F0D1.asm:27 TYA
    case 0xC2F01D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2F0D1.asm:28 CLC
    case 0xC2F01E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F0D1.asm:29 ADC @VIRTUAL02
    case 0xC2F01F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C2F0D1.asm:30 TAY
    case 0xC2F021: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2F0D1.asm:31 STY @LOCAL01
    case 0xC2F022: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C2/C2F0D1.asm:32 CPY #32
    case 0xC2F024: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/unknown/C2/C2F0D1.asm:32 CPY #32
    // Overlapping static entry reached from 0xC2F024.
    case 0xC2F026: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2F0D1.asm:33 BLTEQ @UNKNOWN1
    case 0xC2F027: cpu.execute_instruction<0x90>(0x000009, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2F0D1.asm:33 BLTEQ @UNKNOWN1
    case 0xC2F029: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C2/C2F0D1.asm:34 LDX @LOCAL00
    case 0xC2F02B: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C2F0D1.asm:35 STX ENEMIES_IN_BATTLE
    case 0xC2F02D: cpu.execute_instruction<0x8E>(0x00A18C, 3); return true;
    // src/unknown/C2/C2F0D1.asm:36 BRA @UNKNOWN3
    case 0xC2F030: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C2/C2F0D1.asm:38 LDX @LOCAL00
    case 0xC2F032: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C2F0D1.asm:39 INX
    case 0xC2F034: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2F0D1.asm:40 STX @LOCAL00
    case 0xC2F035: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C2F0D1.asm:42 CPX ENEMIES_IN_BATTLE
    case 0xC2F037: cpu.execute_instruction<0xEC>(0x00A18C, 3); return true;
    // src/unknown/C2/C2F0D1.asm:43 BCC @UNKNOWN0
    case 0xC2F03A: cpu.execute_instruction<0x90>(0x0000C4, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2F0D1.asm:45 END_C_FUNCTION
    case 0xC2F03C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2F0D1.asm:45 END_C_FUNCTION
    case 0xC2F03D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2F121.asm (unresolved).
bool execute_unresolved_c2_c2f121_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2F121.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2F03E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2F121.asm:20 END_STACK_VARS
    case 0xC2F040: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2F121.asm:20 END_STACK_VARS
    case 0xC2F041: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2F121.asm:20 END_STACK_VARS
    case 0xC2F042: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DB, 2); else cpu.execute_instruction<0x69>(0x00FFDB, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2F121.asm:20 END_STACK_VARS
    // Overlapping static entry reached from 0xC2F042.
    case 0xC2F044: cpu.execute_instruction<0xFF>(0xC79C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2F121.asm:20 END_STACK_VARS
    case 0xC2F045: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:38 STZ BATTLE_SPRITE_ROW_WIDTH+2
    case 0xC2F046: cpu.execute_instruction<0x9C>(0x00B0C7, 3); return true;
    // src/unknown/C2/C2F121.asm:38 STZ BATTLE_SPRITE_ROW_WIDTH+2
    // Overlapping static entry reached from 0xC2F044.
    case 0xC2F048: cpu.execute_instruction<0xB0>(0x00009C, 2); return true;
    // src/unknown/C2/C2F121.asm:39 STZ BATTLE_SPRITE_ROW_WIDTH
    case 0xC2F049: cpu.execute_instruction<0x9C>(0x00B0C5, 3); return true;
    // src/unknown/C2/C2F121.asm:39 STZ BATTLE_SPRITE_ROW_WIDTH
    // Overlapping static entry reached from 0xC2F048.
    case 0xC2F04A: cpu.execute_instruction<0xC5>(0x0000B0, 2); return true;
    // src/unknown/C2/C2F121.asm:40 LDX #8
    case 0xC2F04C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C2/C2F121.asm:40 LDX #8
    // Overlapping static entry reached from 0xC2F04C.
    case 0xC2F04E: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C2/C2F121.asm:41 STX @LOCAL0B
    case 0xC2F04F: cpu.execute_instruction<0x86>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:42 JMP @UNKNOWN10
    case 0xC2F051: cpu.execute_instruction<0x4C>(0x00F125, 3); return true;
    // src/unknown/C2/C2F121.asm:42 JMP @UNKNOWN10
    // Overlapping static entry reached from 0xC2F0A8.
    case 0xC2F052: cpu.execute_instruction<0x25>(0x0000F1, 2); return true;
    // src/unknown/C2/C2F121.asm:44 TXA
    case 0xC2F054: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:45 LDY #.SIZEOF(battler)
    case 0xC2F055: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:45 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F055.
    case 0xC2F057: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:46 JSL MULT168
    case 0xC2F058: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2F121.asm:47 TAY
    case 0xC2F05C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:48 STY @LOCAL0A
    case 0xC2F05D: cpu.execute_instruction<0x84>(0x000021, 2); return true;
    // src/unknown/C2/C2F121.asm:49 LDA BATTLERS_TABLE+battler::consciousness,Y
    case 0xC2F05F: cpu.execute_instruction<0xB9>(0x00A1BA, 3); return true;
    // src/unknown/C2/C2F121.asm:50 AND #$00FF
    case 0xC2F062: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC2F062.
    case 0xC2F064: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C2F121.asm:51 BEQL @UNKNOWN9
    case 0xC2F065: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:51 BEQL @UNKNOWN9
    case 0xC2F067: cpu.execute_instruction<0x4C>(0x00F120, 3); return true;
    // src/unknown/C2/C2F121.asm:52 LDA BATTLERS_TABLE+battler::ally_or_enemy,Y
    case 0xC2F06A: cpu.execute_instruction<0xB9>(0x00A1BC, 3); return true;
    // src/unknown/C2/C2F121.asm:53 AND #$00FF
    case 0xC2F06D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC2F06D.
    case 0xC2F06F: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2F121.asm:54 CMP #1
    case 0xC2F070: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2F121.asm:54 CMP #1
    // Overlapping static entry reached from 0xC2F070.
    case 0xC2F072: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:55 BNEL @UNKNOWN9
    case 0xC2F073: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:55 BNEL @UNKNOWN9
    case 0xC2F075: cpu.execute_instruction<0x4C>(0x00F120, 3); return true;
    // src/unknown/C2/C2F121.asm:56 LDA BATTLERS_TABLE,Y
    case 0xC2F078: cpu.execute_instruction<0xB9>(0x00A1AE, 3); return true;
    // src/unknown/C2/C2F121.asm:57 JSR UNKNOWN_C2F09F
    case 0xC2F07B: cpu.execute_instruction<0x20>(0x00EFBC, 3); return true;
    // src/unknown/C2/C2F121.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F07E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:59 LDY @LOCAL0A
    case 0xC2F080: cpu.execute_instruction<0xA4>(0x000021, 2); return true;
    // src/unknown/C2/C2F121.asm:60 STA BATTLERS_TABLE+battler::vram_sprite_index,Y
    case 0xC2F082: cpu.execute_instruction<0x99>(0x00A1F1, 3); return true;
    // src/unknown/C2/C2F121.asm:61 REP #PROC_FLAGS::ACCUM8
    case 0xC2F085: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:62 LDA BATTLERS_TABLE+battler::row,Y
    case 0xC2F087: cpu.execute_instruction<0xB9>(0x00A1BE, 3); return true;
    // src/unknown/C2/C2F121.asm:63 AND #$00FF
    case 0xC2F08A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC2F08A.
    case 0xC2F08C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:64 STA @LOCAL09
    case 0xC2F08D: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // src/unknown/C2/C2F121.asm:65 LDA BATTLERS_TABLE+battler::sprite,Y
    case 0xC2F08F: cpu.execute_instruction<0xB9>(0x00A1B0, 3); return true;
    // src/unknown/C2/C2F121.asm:66 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2F092: cpu.execute_instruction<0x20>(0x00EF1A, 3); return true;
    // src/unknown/C2/C2F121.asm:67 STA @VIRTUAL02
    case 0xC2F095: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:68 LDA @LOCAL09
    case 0xC2F097: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/unknown/C2/C2F121.asm:69 ASL
    case 0xC2F099: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:70 TAX
    case 0xC2F09A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:71 LDA BATTLE_SPRITE_ROW_WIDTH,X
    case 0xC2F09B: cpu.execute_instruction<0xBD>(0x00B0C5, 3); return true;
    // src/unknown/C2/C2F121.asm:72 BEQ @UNKNOWN3
    case 0xC2F09E: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:73 INC @VIRTUAL02
    case 0xC2F0A0: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:75 LDA @LOCAL09
    case 0xC2F0A2: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/unknown/C2/C2F121.asm:76 ASL
    case 0xC2F0A4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:77 CLC
    case 0xC2F0A5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:78 ADC #.LOWORD(BATTLE_SPRITE_ROW_WIDTH)
    case 0xC2F0A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C5, 2); else cpu.execute_instruction<0x69>(0x00B0C5, 3); return true;
    // src/unknown/C2/C2F121.asm:78 ADC #.LOWORD(BATTLE_SPRITE_ROW_WIDTH)
    // Overlapping static entry reached from 0xC2F0A6.
    case 0xC2F0A8: cpu.execute_instruction<0xB0>(0x0000A8, 2); return true;
    // src/unknown/C2/C2F121.asm:79 TAY
    case 0xC2F0A9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:80 LDA __BSS_START__,Y
    case 0xC2F0AA: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:81 CLC
    case 0xC2F0AD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:82 ADC @VIRTUAL02
    case 0xC2F0AE: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:83 CMP #30
    case 0xC2F0B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C2/C2F121.asm:83 CMP #30
    // Overlapping static entry reached from 0xC2F0B0.
    case 0xC2F0B2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:84 BGT @UNKNOWN5
    case 0xC2F0B3: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C2/C2F121.asm:84 BGT @UNKNOWN5
    case 0xC2F0B5: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C2/C2F121.asm:85 STA __BSS_START__,Y
    case 0xC2F0B7: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:86 BRA @UNKNOWN9
    case 0xC2F0BA: cpu.execute_instruction<0x80>(0x000064, 2); return true;
    // src/unknown/C2/C2F121.asm:88 LDA #1
    case 0xC2F0BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2F121.asm:88 LDA #1
    // Overlapping static entry reached from 0xC2F0BC.
    case 0xC2F0BE: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C2/C2F121.asm:89 SEC
    case 0xC2F0BF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:90 SBC @LOCAL09
    case 0xC2F0C0: cpu.execute_instruction<0xE5>(0x00001F, 2); return true;
    // src/unknown/C2/C2F121.asm:91 STA @LOCAL0A
    case 0xC2F0C2: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/unknown/C2/C2F121.asm:92 LDX @LOCAL0B
    case 0xC2F0C4: cpu.execute_instruction<0xA6>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:93 TXA
    case 0xC2F0C6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:94 LDY #.SIZEOF(battler)
    case 0xC2F0C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:94 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F0C7.
    case 0xC2F0C9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:95 JSL MULT168
    case 0xC2F0CA: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2F121.asm:96 TAX
    case 0xC2F0CE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:97 LDA BATTLERS_TABLE+battler::sprite,X
    case 0xC2F0CF: cpu.execute_instruction<0xBD>(0x00A1B0, 3); return true;
    // src/unknown/C2/C2F121.asm:98 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2F0D2: cpu.execute_instruction<0x20>(0x00EF1A, 3); return true;
    // src/unknown/C2/C2F121.asm:99 STA @VIRTUAL02
    case 0xC2F0D5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:100 LDA @LOCAL0A
    case 0xC2F0D7: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/unknown/C2/C2F121.asm:101 ASL
    case 0xC2F0D9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:102 TAX
    case 0xC2F0DA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:103 LDA BATTLE_SPRITE_ROW_WIDTH,X
    case 0xC2F0DB: cpu.execute_instruction<0xBD>(0x00B0C5, 3); return true;
    // src/unknown/C2/C2F121.asm:104 BEQ @UNKNOWN6
    case 0xC2F0DE: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:105 INC @VIRTUAL02
    case 0xC2F0E0: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:107 LDA @LOCAL0A
    case 0xC2F0E2: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/unknown/C2/C2F121.asm:108 ASL
    case 0xC2F0E4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:109 CLC
    case 0xC2F0E5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:110 ADC #.LOWORD(BATTLE_SPRITE_ROW_WIDTH)
    case 0xC2F0E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C5, 2); else cpu.execute_instruction<0x69>(0x00B0C5, 3); return true;
    // src/unknown/C2/C2F121.asm:110 ADC #.LOWORD(BATTLE_SPRITE_ROW_WIDTH)
    // Overlapping static entry reached from 0xC2F0E6.
    case 0xC2F0E8: cpu.execute_instruction<0xB0>(0x0000A8, 2); return true;
    // src/unknown/C2/C2F121.asm:111 TAY
    case 0xC2F0E9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:112 STY @LOCAL08
    case 0xC2F0EA: cpu.execute_instruction<0x84>(0x00001D, 2); return true;
    // src/unknown/C2/C2F121.asm:113 LDA __BSS_START__,Y
    case 0xC2F0EC: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:114 CLC
    case 0xC2F0EF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:115 ADC @VIRTUAL02
    case 0xC2F0F0: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:116 CMP #30
    case 0xC2F0F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C2/C2F121.asm:116 CMP #30
    // Overlapping static entry reached from 0xC2F0F2.
    case 0xC2F0F4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:117 BGT @UNKNOWN8
    case 0xC2F0F5: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C2/C2F121.asm:117 BGT @UNKNOWN8
    case 0xC2F0F7: cpu.execute_instruction<0xB0>(0x000021, 2); return true;
    // src/unknown/C2/C2F121.asm:118 LDX @LOCAL0B
    case 0xC2F0F9: cpu.execute_instruction<0xA6>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:119 TXA
    case 0xC2F0FB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:120 LDY #.SIZEOF(battler)
    case 0xC2F0FC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:120 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F0FC.
    case 0xC2F0FE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:121 JSL MULT168
    case 0xC2F0FF: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2F121.asm:122 TAX
    case 0xC2F103: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:123 LDA @LOCAL0A
    case 0xC2F104: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/unknown/C2/C2F121.asm:124 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F106: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:125 STA BATTLERS_TABLE+battler::row,X
    case 0xC2F108: cpu.execute_instruction<0x9D>(0x00A1BE, 3); return true;
    // src/unknown/C2/C2F121.asm:126 LDY @LOCAL08
    case 0xC2F10B: cpu.execute_instruction<0xA4>(0x00001D, 2); return true;
    // src/unknown/C2/C2F121.asm:127 REP #PROC_FLAGS::ACCUM8
    case 0xC2F10D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:128 LDA __BSS_START__,Y
    case 0xC2F10F: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:129 CLC
    case 0xC2F112: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:130 ADC @VIRTUAL02
    case 0xC2F113: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:131 STA __BSS_START__,Y
    case 0xC2F115: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:132 BRA @UNKNOWN9
    case 0xC2F118: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C2/C2F121.asm:134 LDA #0
    case 0xC2F11A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:134 LDA #0
    // Overlapping static entry reached from 0xC2F11A.
    case 0xC2F11C: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C2/C2F121.asm:135 JMP @UNKNOWN60
    case 0xC2F11D: cpu.execute_instruction<0x4C>(0x00F63B, 3); return true;
    // src/unknown/C2/C2F121.asm:137 LDX @LOCAL0B
    case 0xC2F120: cpu.execute_instruction<0xA6>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:138 INX
    case 0xC2F122: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:139 STX @LOCAL0B
    case 0xC2F123: cpu.execute_instruction<0x86>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:141 CPX #BATTLER_COUNT
    case 0xC2F125: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:141 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2F125.
    case 0xC2F127: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C2/C2F121.asm:142 BCCL @UNKNOWN0
    case 0xC2F128: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:142 BCCL @UNKNOWN0
    case 0xC2F12A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:142 BCCL @UNKNOWN0
    case 0xC2F12C: cpu.execute_instruction<0x4C>(0x00F054, 3); return true;
    // src/unknown/C2/C2F121.asm:144 LDA BATTLERS_TABLE+8*.SIZEOF(battler)+16
    case 0xC2F12F: cpu.execute_instruction<0xAD>(0x00A42E, 3); return true;
    // src/unknown/C2/C2F121.asm:145 AND #$00FF
    case 0xC2F132: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:145 AND #$00FF
    // Overlapping static entry reached from 0xC2F132.
    case 0xC2F134: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:146 STA @LOCAL0A
    case 0xC2F135: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/unknown/C2/C2F121.asm:147 LDA #32
    case 0xC2F137: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:147 LDA #32
    // Overlapping static entry reached from 0xC2F137.
    case 0xC2F139: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:148 STA @LOCAL07
    case 0xC2F13A: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:149 STA @LOCAL06
    case 0xC2F13C: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:150 LDX #8
    case 0xC2F13E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C2/C2F121.asm:150 LDX #8
    // Overlapping static entry reached from 0xC2F13E.
    case 0xC2F140: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C2/C2F121.asm:151 STX @LOCAL08
    case 0xC2F141: cpu.execute_instruction<0x86>(0x00001D, 2); return true;
    // src/unknown/C2/C2F121.asm:152 JMP @UNKNOWN21
    case 0xC2F143: cpu.execute_instruction<0x4C>(0x00F24C, 3); return true;
    // src/unknown/C2/C2F121.asm:154 TXA
    case 0xC2F146: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:155 LDY #.SIZEOF(battler)
    case 0xC2F147: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:155 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F147.
    case 0xC2F149: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:156 JSL MULT168
    case 0xC2F14A: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2F121.asm:157 TAY
    case 0xC2F14E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:158 STY @LOCAL09
    case 0xC2F14F: cpu.execute_instruction<0x84>(0x00001F, 2); return true;
    // src/unknown/C2/C2F121.asm:159 LDA BATTLERS_TABLE+battler::consciousness,Y
    case 0xC2F151: cpu.execute_instruction<0xB9>(0x00A1BA, 3); return true;
    // src/unknown/C2/C2F121.asm:160 AND #$00FF
    case 0xC2F154: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:160 AND #$00FF
    // Overlapping static entry reached from 0xC2F154.
    case 0xC2F156: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C2F121.asm:161 BEQL @UNKNOWN20
    case 0xC2F157: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:161 BEQL @UNKNOWN20
    case 0xC2F159: cpu.execute_instruction<0x4C>(0x00F247, 3); return true;
    // src/unknown/C2/C2F121.asm:162 LDA BATTLERS_TABLE+battler::ally_or_enemy,Y
    case 0xC2F15C: cpu.execute_instruction<0xB9>(0x00A1BC, 3); return true;
    // src/unknown/C2/C2F121.asm:163 AND #$00FF
    case 0xC2F15F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:163 AND #$00FF
    // Overlapping static entry reached from 0xC2F15F.
    case 0xC2F161: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2F121.asm:164 CMP #1
    case 0xC2F162: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2F121.asm:164 CMP #1
    // Overlapping static entry reached from 0xC2F162.
    case 0xC2F164: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:165 BNEL @UNKNOWN20
    case 0xC2F165: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:165 BNEL @UNKNOWN20
    case 0xC2F167: cpu.execute_instruction<0x4C>(0x00F247, 3); return true;
    // src/unknown/C2/C2F121.asm:166 LDA BATTLERS_TABLE+16,Y
    case 0xC2F16A: cpu.execute_instruction<0xB9>(0x00A1BE, 3); return true;
    // src/unknown/C2/C2F121.asm:167 AND #$00FF
    case 0xC2F16D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:167 AND #$00FF
    // Overlapping static entry reached from 0xC2F16D.
    case 0xC2F16F: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C2/C2F121.asm:168 CMP @LOCAL0A
    case 0xC2F170: cpu.execute_instruction<0xC5>(0x000021, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:169 BNEL @UNKNOWN20
    case 0xC2F172: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:169 BNEL @UNKNOWN20
    case 0xC2F174: cpu.execute_instruction<0x4C>(0x00F247, 3); return true;
    // src/unknown/C2/C2F121.asm:170 LDA BATTLERS_TABLE+battler::sprite,Y
    case 0xC2F177: cpu.execute_instruction<0xB9>(0x00A1B0, 3); return true;
    // src/unknown/C2/C2F121.asm:171 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2F17A: cpu.execute_instruction<0x20>(0x00EF1A, 3); return true;
    // src/unknown/C2/C2F121.asm:172 LSR
    case 0xC2F17D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:173 STA @LOCAL05
    case 0xC2F17E: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // src/unknown/C2/C2F121.asm:174 LDA @LOCAL06
    case 0xC2F180: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:175 CMP @LOCAL07
    case 0xC2F182: cpu.execute_instruction<0xC5>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:176 BNE @UNKNOWN17
    case 0xC2F184: cpu.execute_instruction<0xD0>(0x000038, 2); return true;
    // src/unknown/C2/C2F121.asm:177 LDA @LOCAL06
    case 0xC2F186: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:178 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F188: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:179 LDY @LOCAL09
    case 0xC2F18A: cpu.execute_instruction<0xA4>(0x00001F, 2); return true;
    // src/unknown/C2/C2F121.asm:180 STA BATTLERS_TABLE+battler::sprite_x,Y
    case 0xC2F18C: cpu.execute_instruction<0x99>(0x00A1F2, 3); return true;
    // src/unknown/C2/C2F121.asm:181 REP #PROC_FLAGS::ACCUM8
    case 0xC2F18F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:182 LDA @LOCAL06
    case 0xC2F191: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:183 SEC
    case 0xC2F193: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:184 SBC @LOCAL05
    case 0xC2F194: cpu.execute_instruction<0xE5>(0x000017, 2); return true;
    // src/unknown/C2/C2F121.asm:185 STA @LOCAL06
    case 0xC2F196: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:186 LDA @LOCAL07
    case 0xC2F198: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:187 CLC
    case 0xC2F19A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:188 ADC @LOCAL05
    case 0xC2F19B: cpu.execute_instruction<0x65>(0x000017, 2); return true;
    // src/unknown/C2/C2F121.asm:189 STA @LOCAL07
    case 0xC2F19D: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:190 JSR RAND_LONG
    case 0xC2F19F: cpu.execute_instruction<0x20>(0x00692E, 3); return true;
    // src/unknown/C2/C2F121.asm:191 REP #PROC_FLAGS::ACCUM8
    case 0xC2F1A2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:192 AND #$00FF
    case 0xC2F1A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:192 AND #$00FF
    // Overlapping static entry reached from 0xC2F1A4.
    case 0xC2F1A6: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C2/C2F121.asm:193 AND #$0001
    case 0xC2F1A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C2/C2F121.asm:193 AND #$0001
    // Overlapping static entry reached from 0xC2F1A7.
    case 0xC2F1A9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F121.asm:194 BEQ @UNKNOWN16
    case 0xC2F1AA: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C2/C2F121.asm:195 LDA @LOCAL06
    case 0xC2F1AC: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:196 STA @VIRTUAL04
    case 0xC2F1AE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:197 STA @LOCAL04
    case 0xC2F1B0: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/unknown/C2/C2F121.asm:198 JMP @UNKNOWN20
    case 0xC2F1B2: cpu.execute_instruction<0x4C>(0x00F247, 3); return true;
    // src/unknown/C2/C2F121.asm:200 LDA @LOCAL07
    case 0xC2F1B5: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:201 STA @VIRTUAL04
    case 0xC2F1B7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:202 STA @LOCAL04
    case 0xC2F1B9: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/unknown/C2/C2F121.asm:203 JMP @UNKNOWN20
    case 0xC2F1BB: cpu.execute_instruction<0x4C>(0x00F247, 3); return true;
    // src/unknown/C2/C2F121.asm:205 LDA #32
    case 0xC2F1BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:205 LDA #32
    // Overlapping static entry reached from 0xC2F1BE.
    case 0xC2F1C0: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C2/C2F121.asm:206 SEC
    case 0xC2F1C1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:207 SBC @LOCAL06
    case 0xC2F1C2: cpu.execute_instruction<0xE5>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:208 STA @LOCAL09
    case 0xC2F1C4: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // src/unknown/C2/C2F121.asm:209 LDA @LOCAL07
    case 0xC2F1C6: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:210 SEC
    case 0xC2F1C8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:211 SBC #32
    case 0xC2F1C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000020, 2); else cpu.execute_instruction<0xE9>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:211 SBC #32
    // Overlapping static entry reached from 0xC2F1C9.
    case 0xC2F1CB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:212 STA @VIRTUAL02
    case 0xC2F1CC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:213 LDA @LOCAL09
    case 0xC2F1CE: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/unknown/C2/C2F121.asm:214 CMP @VIRTUAL02
    case 0xC2F1D0: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:215 BCC @UNKNOWN18
    case 0xC2F1D2: cpu.execute_instruction<0x90>(0x000011, 2); return true;
    // src/unknown/C2/C2F121.asm:216 CMP @VIRTUAL02
    case 0xC2F1D4: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:217 BNE @UNKNOWN19
    case 0xC2F1D6: cpu.execute_instruction<0xD0>(0x00003F, 2); return true;
    // src/unknown/C2/C2F121.asm:218 JSR RAND_LONG
    case 0xC2F1D8: cpu.execute_instruction<0x20>(0x00692E, 3); return true;
    // src/unknown/C2/C2F121.asm:219 REP #PROC_FLAGS::ACCUM8
    case 0xC2F1DB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:220 AND #$00FF
    case 0xC2F1DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:220 AND #$00FF
    // Overlapping static entry reached from 0xC2F1DD.
    case 0xC2F1DF: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C2/C2F121.asm:221 AND #$0001
    case 0xC2F1E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C2/C2F121.asm:221 AND #$0001
    // Overlapping static entry reached from 0xC2F1E0.
    case 0xC2F1E2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F121.asm:222 BEQ @UNKNOWN19
    case 0xC2F1E3: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/unknown/C2/C2F121.asm:224 LDA @LOCAL05
    case 0xC2F1E5: cpu.execute_instruction<0xA5>(0x000017, 2); return true;
    // src/unknown/C2/C2F121.asm:225 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F1E7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:226 STA @VIRTUAL00
    case 0xC2F1E9: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:227 REP #PROC_FLAGS::ACCUM8
    case 0xC2F1EB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:228 LDA @LOCAL06
    case 0xC2F1ED: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:229 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F1EF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:230 SEC
    case 0xC2F1F1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:231 SBC @VIRTUAL00
    case 0xC2F1F2: cpu.execute_instruction<0xE5>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:232 DEC
    case 0xC2F1F4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:233 STA @LOCAL03
    case 0xC2F1F5: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:234 LDX @LOCAL08
    case 0xC2F1F7: cpu.execute_instruction<0xA6>(0x00001D, 2); return true;
    // src/unknown/C2/C2F121.asm:235 REP #PROC_FLAGS::ACCUM8
    case 0xC2F1F9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:236 TXA
    case 0xC2F1FB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:237 LDY #.SIZEOF(battler)
    case 0xC2F1FC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:237 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F1FC.
    case 0xC2F1FE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:238 JSL MULT168
    case 0xC2F1FF: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2F121.asm:239 TAX
    case 0xC2F203: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:240 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F204: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:241 LDA @LOCAL03
    case 0xC2F206: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:242 STA BATTLERS_TABLE+battler::sprite_x,X
    case 0xC2F208: cpu.execute_instruction<0x9D>(0x00A1F2, 3); return true;
    // src/unknown/C2/C2F121.asm:243 REP #PROC_FLAGS::ACCUM8
    case 0xC2F20B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:244 AND #$00FF
    case 0xC2F20D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:244 AND #$00FF
    // Overlapping static entry reached from 0xC2F20D.
    case 0xC2F20F: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C2/C2F121.asm:245 SEC
    case 0xC2F210: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:246 SBC @LOCAL05
    case 0xC2F211: cpu.execute_instruction<0xE5>(0x000017, 2); return true;
    // src/unknown/C2/C2F121.asm:247 STA @LOCAL06
    case 0xC2F213: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:248 BRA @UNKNOWN20
    case 0xC2F215: cpu.execute_instruction<0x80>(0x000030, 2); return true;
    // src/unknown/C2/C2F121.asm:250 LDA @LOCAL05
    case 0xC2F217: cpu.execute_instruction<0xA5>(0x000017, 2); return true;
    // src/unknown/C2/C2F121.asm:251 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F219: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:252 STA @VIRTUAL00
    case 0xC2F21B: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:253 REP #PROC_FLAGS::ACCUM8
    case 0xC2F21D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:254 LDA @LOCAL07
    case 0xC2F21F: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:255 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F221: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:256 CLC
    case 0xC2F223: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:257 ADC @VIRTUAL00
    case 0xC2F224: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:258 INC
    case 0xC2F226: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:259 STA @LOCAL03
    case 0xC2F227: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:260 LDX @LOCAL08
    case 0xC2F229: cpu.execute_instruction<0xA6>(0x00001D, 2); return true;
    // src/unknown/C2/C2F121.asm:261 REP #PROC_FLAGS::ACCUM8
    case 0xC2F22B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:262 TXA
    case 0xC2F22D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:263 LDY #.SIZEOF(battler)
    case 0xC2F22E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:263 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F22E.
    case 0xC2F230: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:264 JSL MULT168
    case 0xC2F231: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2F121.asm:265 TAX
    case 0xC2F235: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:266 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F236: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:267 LDA @LOCAL03
    case 0xC2F238: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:268 STA BATTLERS_TABLE+battler::sprite_x,X
    case 0xC2F23A: cpu.execute_instruction<0x9D>(0x00A1F2, 3); return true;
    // src/unknown/C2/C2F121.asm:269 REP #PROC_FLAGS::ACCUM8
    case 0xC2F23D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:270 AND #$00FF
    case 0xC2F23F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:270 AND #$00FF
    // Overlapping static entry reached from 0xC2F23F.
    case 0xC2F241: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C2F121.asm:271 CLC
    case 0xC2F242: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:272 ADC @LOCAL05
    case 0xC2F243: cpu.execute_instruction<0x65>(0x000017, 2); return true;
    // src/unknown/C2/C2F121.asm:273 STA @LOCAL07
    case 0xC2F245: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:275 LDX @LOCAL08
    case 0xC2F247: cpu.execute_instruction<0xA6>(0x00001D, 2); return true;
    // src/unknown/C2/C2F121.asm:276 INX
    case 0xC2F249: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:277 STX @LOCAL08
    case 0xC2F24A: cpu.execute_instruction<0x86>(0x00001D, 2); return true;
    // src/unknown/C2/C2F121.asm:279 CPX #32
    case 0xC2F24C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:279 CPX #32
    // Overlapping static entry reached from 0xC2F24C.
    case 0xC2F24E: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C2/C2F121.asm:280 BCCL @UNKNOWN12
    case 0xC2F24F: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:280 BCCL @UNKNOWN12
    case 0xC2F251: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:280 BCCL @UNKNOWN12
    case 0xC2F253: cpu.execute_instruction<0x4C>(0x00F146, 3); return true;
    // src/unknown/C2/C2F121.asm:281 LDA @LOCAL04
    case 0xC2F256: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C2/C2F121.asm:282 STA @VIRTUAL04
    case 0xC2F258: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:283 LDY @VIRTUAL04
    case 0xC2F25A: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:284 STY @LOCAL0B
    case 0xC2F25C: cpu.execute_instruction<0x84>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:285 TYX
    case 0xC2F25E: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:286 STX @LOCALEB_1
    case 0xC2F25F: cpu.execute_instruction<0x86>(0x000015, 2); return true;
    // src/unknown/C2/C2F121.asm:287 LDA #8
    case 0xC2F261: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C2/C2F121.asm:287 LDA #8
    // Overlapping static entry reached from 0xC2F261.
    case 0xC2F263: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:288 STA @VIRTUAL02
    case 0xC2F264: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:289 STA @LOCAL08
    case 0xC2F266: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/unknown/C2/C2F121.asm:290 JMP @UNKNOWN32
    case 0xC2F268: cpu.execute_instruction<0x4C>(0x00F37D, 3); return true;
    // src/unknown/C2/C2F121.asm:292 LDA @VIRTUAL02
    case 0xC2F26B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:293 LDY #.SIZEOF(battler)
    case 0xC2F26D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:293 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F26D.
    case 0xC2F26F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:294 JSL MULT168
    case 0xC2F270: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2F121.asm:295 STA @VIRTUAL04
    case 0xC2F274: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:296 LDX @VIRTUAL04
    case 0xC2F276: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:297 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2F278: cpu.execute_instruction<0xBD>(0x00A1BA, 3); return true;
    // src/unknown/C2/C2F121.asm:298 AND #$00FF
    case 0xC2F27B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:298 AND #$00FF
    // Overlapping static entry reached from 0xC2F27B.
    case 0xC2F27D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C2F121.asm:299 BEQL @UNKNOWN31
    case 0xC2F27E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:299 BEQL @UNKNOWN31
    case 0xC2F280: cpu.execute_instruction<0x4C>(0x00F373, 3); return true;
    // src/unknown/C2/C2F121.asm:300 LDX @VIRTUAL04
    case 0xC2F283: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:301 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC2F285: cpu.execute_instruction<0xBD>(0x00A1BC, 3); return true;
    // src/unknown/C2/C2F121.asm:302 AND #$00FF
    case 0xC2F288: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:302 AND #$00FF
    // Overlapping static entry reached from 0xC2F288.
    case 0xC2F28A: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2F121.asm:303 CMP #1
    case 0xC2F28B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2F121.asm:303 CMP #1
    // Overlapping static entry reached from 0xC2F28B.
    case 0xC2F28D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:304 BNEL @UNKNOWN31
    case 0xC2F28E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:304 BNEL @UNKNOWN31
    case 0xC2F290: cpu.execute_instruction<0x4C>(0x00F373, 3); return true;
    // src/unknown/C2/C2F121.asm:305 LDX @VIRTUAL04
    case 0xC2F293: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:306 LDA BATTLERS_TABLE+16,X
    case 0xC2F295: cpu.execute_instruction<0xBD>(0x00A1BE, 3); return true;
    // src/unknown/C2/C2F121.asm:307 AND #$00FF
    case 0xC2F298: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:307 AND #$00FF
    // Overlapping static entry reached from 0xC2F298.
    case 0xC2F29A: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C2/C2F121.asm:308 CMP @LOCAL0A
    case 0xC2F29B: cpu.execute_instruction<0xC5>(0x000021, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C2F121.asm:309 BEQL @UNKNOWN31
    case 0xC2F29D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:309 BEQL @UNKNOWN31
    case 0xC2F29F: cpu.execute_instruction<0x4C>(0x00F373, 3); return true;
    // src/unknown/C2/C2F121.asm:310 LDX @VIRTUAL04
    case 0xC2F2A2: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:311 LDA BATTLERS_TABLE+battler::sprite,X
    case 0xC2F2A4: cpu.execute_instruction<0xBD>(0x00A1B0, 3); return true;
    // src/unknown/C2/C2F121.asm:312 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2F2A7: cpu.execute_instruction<0x20>(0x00EF1A, 3); return true;
    // src/unknown/C2/C2F121.asm:313 LSR
    case 0xC2F2AA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:314 STA @LOCAL01
    case 0xC2F2AB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2F121.asm:315 LDY @LOCAL0B
    case 0xC2F2AD: cpu.execute_instruction<0xA4>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:316 STY @VIRTUAL02
    case 0xC2F2AF: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:317 LDX @LOCALEB_1
    case 0xC2F2B1: cpu.execute_instruction<0xA6>(0x000015, 2); return true;
    // src/unknown/C2/C2F121.asm:318 TXA
    case 0xC2F2B3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:319 CMP @VIRTUAL02
    case 0xC2F2B4: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:320 BNE @UNKNOWN27
    case 0xC2F2B6: cpu.execute_instruction<0xD0>(0x00001D, 2); return true;
    // src/unknown/C2/C2F121.asm:321 TXA
    case 0xC2F2B8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:322 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F2B9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:323 LDX @VIRTUAL04
    case 0xC2F2BB: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:324 STA BATTLERS_TABLE+battler::sprite_x,X
    case 0xC2F2BD: cpu.execute_instruction<0x9D>(0x00A1F2, 3); return true;
    // src/unknown/C2/C2F121.asm:325 LDX @LOCALEB_1
    case 0xC2F2C0: cpu.execute_instruction<0xA6>(0x000015, 2); return true;
    // src/unknown/C2/C2F121.asm:326 REP #PROC_FLAGS::ACCUM8
    case 0xC2F2C2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:327 TXA
    case 0xC2F2C4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:328 SEC
    case 0xC2F2C5: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:329 SBC @LOCAL01
    case 0xC2F2C6: cpu.execute_instruction<0xE5>(0x000012, 2); return true;
    // src/unknown/C2/C2F121.asm:330 TAX
    case 0xC2F2C8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:331 STX @LOCALEB_1
    case 0xC2F2C9: cpu.execute_instruction<0x86>(0x000015, 2); return true;
    // src/unknown/C2/C2F121.asm:332 TYA
    case 0xC2F2CB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:333 CLC
    case 0xC2F2CC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:334 ADC @LOCAL01
    case 0xC2F2CD: cpu.execute_instruction<0x65>(0x000012, 2); return true;
    // src/unknown/C2/C2F121.asm:335 TAY
    case 0xC2F2CF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:336 STY @LOCAL0B
    case 0xC2F2D0: cpu.execute_instruction<0x84>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:337 JMP @UNKNOWN31
    case 0xC2F2D2: cpu.execute_instruction<0x4C>(0x00F373, 3); return true;
    // src/unknown/C2/C2F121.asm:339 CPY #32
    case 0xC2F2D5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:339 CPY #32
    // Overlapping static entry reached from 0xC2F2D5.
    case 0xC2F2D7: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2F121.asm:340 BLTEQ @UNKNOWN30
    case 0xC2F2D8: cpu.execute_instruction<0x90>(0x000066, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2F121.asm:340 BLTEQ @UNKNOWN30
    case 0xC2F2DA: cpu.execute_instruction<0xF0>(0x000064, 2); return true;
    // src/unknown/C2/C2F121.asm:341 CPX #32
    case 0xC2F2DC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:341 CPX #32
    // Overlapping static entry reached from 0xC2F2DC.
    case 0xC2F2DE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:342 BGT @UNKNOWN29
    case 0xC2F2DF: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C2/C2F121.asm:342 BGT @UNKNOWN29
    case 0xC2F2E1: cpu.execute_instruction<0xB0>(0x000028, 2); return true;
    // src/unknown/C2/C2F121.asm:343 STX @VIRTUAL04
    case 0xC2F2E3: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:344 LDA #32
    case 0xC2F2E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:344 LDA #32
    // Overlapping static entry reached from 0xC2F2E5.
    case 0xC2F2E7: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C2/C2F121.asm:345 SEC
    case 0xC2F2E8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:346 SBC @VIRTUAL04
    case 0xC2F2E9: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:347 STA @LOCAL04ALT
    case 0xC2F2EB: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // src/unknown/C2/C2F121.asm:348 TYA
    case 0xC2F2ED: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:349 SEC
    case 0xC2F2EE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:350 SBC #32
    case 0xC2F2EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000020, 2); else cpu.execute_instruction<0xE9>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:350 SBC #32
    // Overlapping static entry reached from 0xC2F2EF.
    case 0xC2F2F1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:351 STA @VIRTUAL04
    case 0xC2F2F2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:352 LDA @LOCAL04ALT
    case 0xC2F2F4: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/unknown/C2/C2F121.asm:353 CMP @VIRTUAL04
    case 0xC2F2F6: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:354 BCC @UNKNOWN29
    case 0xC2F2F8: cpu.execute_instruction<0x90>(0x000011, 2); return true;
    // src/unknown/C2/C2F121.asm:355 CMP @VIRTUAL04
    case 0xC2F2FA: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:356 BNE @UNKNOWN30
    case 0xC2F2FC: cpu.execute_instruction<0xD0>(0x000042, 2); return true;
    // src/unknown/C2/C2F121.asm:357 JSR RAND_LONG
    case 0xC2F2FE: cpu.execute_instruction<0x20>(0x00692E, 3); return true;
    // src/unknown/C2/C2F121.asm:358 REP #PROC_FLAGS::ACCUM8
    case 0xC2F301: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:359 AND #$00FF
    case 0xC2F303: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:359 AND #$00FF
    // Overlapping static entry reached from 0xC2F303.
    case 0xC2F305: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C2/C2F121.asm:360 AND #$0001
    case 0xC2F306: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C2/C2F121.asm:360 AND #$0001
    // Overlapping static entry reached from 0xC2F306.
    case 0xC2F308: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F121.asm:361 BEQ @UNKNOWN30
    case 0xC2F309: cpu.execute_instruction<0xF0>(0x000035, 2); return true;
    // src/unknown/C2/C2F121.asm:363 LDA @LOCAL01
    case 0xC2F30B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2F121.asm:364 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F30D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:365 STA @VIRTUAL00
    case 0xC2F30F: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:366 LDX @LOCALEB_1
    case 0xC2F311: cpu.execute_instruction<0xA6>(0x000015, 2); return true;
    // src/unknown/C2/C2F121.asm:367 REP #PROC_FLAGS::ACCUM8
    case 0xC2F313: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:368 TXA
    case 0xC2F315: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:369 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F316: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:370 SEC
    case 0xC2F318: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:371 SBC @VIRTUAL00
    case 0xC2F319: cpu.execute_instruction<0xE5>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:372 DEC
    case 0xC2F31B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:373 STA @LOCAL03
    case 0xC2F31C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:374 REP #PROC_FLAGS::ACCUM8
    case 0xC2F31E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:375 LDA @LOCAL08
    case 0xC2F320: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/unknown/C2/C2F121.asm:376 STA @VIRTUAL02
    case 0xC2F322: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:377 LDY #.SIZEOF(battler)
    case 0xC2F324: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:377 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F324.
    case 0xC2F326: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:378 JSL MULT168
    case 0xC2F327: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2F121.asm:379 TAX
    case 0xC2F32B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:380 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F32C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:381 LDA @LOCAL03
    case 0xC2F32E: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:382 STA BATTLERS_TABLE+battler::sprite_x,X
    case 0xC2F330: cpu.execute_instruction<0x9D>(0x00A1F2, 3); return true;
    // src/unknown/C2/C2F121.asm:383 REP #PROC_FLAGS::ACCUM8
    case 0xC2F333: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:384 AND #$00FF
    case 0xC2F335: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:384 AND #$00FF
    // Overlapping static entry reached from 0xC2F335.
    case 0xC2F337: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C2/C2F121.asm:385 SEC
    case 0xC2F338: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:386 SBC @LOCAL01
    case 0xC2F339: cpu.execute_instruction<0xE5>(0x000012, 2); return true;
    // src/unknown/C2/C2F121.asm:387 TAX
    case 0xC2F33B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:388 STX @LOCALEB_1
    case 0xC2F33C: cpu.execute_instruction<0x86>(0x000015, 2); return true;
    // src/unknown/C2/C2F121.asm:389 BRA @UNKNOWN31
    case 0xC2F33E: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/unknown/C2/C2F121.asm:391 LDA @LOCAL01
    case 0xC2F340: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2F121.asm:392 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F342: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:393 STA @VIRTUAL00
    case 0xC2F344: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:394 LDY @LOCAL0B
    case 0xC2F346: cpu.execute_instruction<0xA4>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:395 REP #PROC_FLAGS::ACCUM8
    case 0xC2F348: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:396 TYA
    case 0xC2F34A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:397 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F34B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:398 CLC
    case 0xC2F34D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:399 ADC @VIRTUAL00
    case 0xC2F34E: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:400 INC
    case 0xC2F350: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:401 STA @LOCAL03
    case 0xC2F351: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:402 REP #PROC_FLAGS::ACCUM8
    case 0xC2F353: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:403 LDA @LOCAL08
    case 0xC2F355: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/unknown/C2/C2F121.asm:404 STA @VIRTUAL02
    case 0xC2F357: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:405 LDY #.SIZEOF(battler)
    case 0xC2F359: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:405 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F359.
    case 0xC2F35B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:406 JSL MULT168
    case 0xC2F35C: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2F121.asm:407 TAX
    case 0xC2F360: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:408 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F361: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:409 LDA @LOCAL03
    case 0xC2F363: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:410 STA BATTLERS_TABLE+battler::sprite_x,X
    case 0xC2F365: cpu.execute_instruction<0x9D>(0x00A1F2, 3); return true;
    // src/unknown/C2/C2F121.asm:411 REP #PROC_FLAGS::ACCUM8
    case 0xC2F368: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:412 AND #$00FF
    case 0xC2F36A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:412 AND #$00FF
    // Overlapping static entry reached from 0xC2F36A.
    case 0xC2F36C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C2F121.asm:413 CLC
    case 0xC2F36D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:414 ADC @LOCAL01
    case 0xC2F36E: cpu.execute_instruction<0x65>(0x000012, 2); return true;
    // src/unknown/C2/C2F121.asm:415 TAY
    case 0xC2F370: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:416 STY @LOCAL0B
    case 0xC2F371: cpu.execute_instruction<0x84>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:418 LDA @LOCAL08
    case 0xC2F373: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/unknown/C2/C2F121.asm:419 STA @VIRTUAL02
    case 0xC2F375: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:420 INC @VIRTUAL02
    case 0xC2F377: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:421 LDA @VIRTUAL02
    case 0xC2F379: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:422 STA @LOCAL08
    case 0xC2F37B: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/unknown/C2/C2F121.asm:424 LDA @VIRTUAL02
    case 0xC2F37D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:425 CMP #32
    case 0xC2F37F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:425 CMP #32
    // Overlapping static entry reached from 0xC2F37F.
    case 0xC2F381: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C2/C2F121.asm:426 BCCL @UNKNOWN23
    case 0xC2F382: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:426 BCCL @UNKNOWN23
    case 0xC2F384: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:426 BCCL @UNKNOWN23
    case 0xC2F386: cpu.execute_instruction<0x4C>(0x00F26B, 3); return true;
    // src/unknown/C2/C2F121.asm:427 LDA @LOCAL0A
    case 0xC2F389: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/unknown/C2/C2F121.asm:428 CMP #1
    case 0xC2F38B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2F121.asm:428 CMP #1
    // Overlapping static entry reached from 0xC2F38B.
    case 0xC2F38D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2F121.asm:429 BNE @UNKNOWN37
    case 0xC2F38E: cpu.execute_instruction<0xD0>(0x000047, 2); return true;
    // src/unknown/C2/C2F121.asm:430 LDY @LOCAL0B
    case 0xC2F390: cpu.execute_instruction<0xA4>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:431 STY @VIRTUAL02
    case 0xC2F392: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:432 LDX @LOCALEB_1
    case 0xC2F394: cpu.execute_instruction<0xA6>(0x000015, 2); return true;
    // src/unknown/C2/C2F121.asm:433 TXA
    case 0xC2F396: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:434 CMP @VIRTUAL02
    case 0xC2F397: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:435 BNE @UNKNOWN37
    case 0xC2F399: cpu.execute_instruction<0xD0>(0x00003C, 2); return true;
    // src/unknown/C2/C2F121.asm:436 LDA #8
    case 0xC2F39B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C2/C2F121.asm:436 LDA #8
    // Overlapping static entry reached from 0xC2F39B.
    case 0xC2F39D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:437 STA @VIRTUAL02
    case 0xC2F39E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:438 BRA @UNKNOWN36
    case 0xC2F3A0: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/unknown/C2/C2F121.asm:440 LDA @VIRTUAL02
    case 0xC2F3A2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:441 LDY #.SIZEOF(battler)
    case 0xC2F3A4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:441 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F3A4.
    case 0xC2F3A6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:442 JSL MULT168
    case 0xC2F3A7: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2F121.asm:443 STA @LOCAL04ALT2
    case 0xC2F3AB: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/unknown/C2/C2F121.asm:444 TAX
    case 0xC2F3AD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:445 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2F3AE: cpu.execute_instruction<0xBD>(0x00A1BA, 3); return true;
    // src/unknown/C2/C2F121.asm:446 AND #$00FF
    case 0xC2F3B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:446 AND #$00FF
    // Overlapping static entry reached from 0xC2F3B1.
    case 0xC2F3B3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F121.asm:447 BEQ @UNKNOWN35
    case 0xC2F3B4: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C2/C2F121.asm:448 LDA @LOCAL04ALT2
    case 0xC2F3B6: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/unknown/C2/C2F121.asm:449 TAX
    case 0xC2F3B8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:450 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC2F3B9: cpu.execute_instruction<0xBD>(0x00A1BC, 3); return true;
    // src/unknown/C2/C2F121.asm:451 AND #$00FF
    case 0xC2F3BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:451 AND #$00FF
    // Overlapping static entry reached from 0xC2F3BC.
    case 0xC2F3BE: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2F121.asm:452 CMP #1
    case 0xC2F3BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2F121.asm:452 CMP #1
    // Overlapping static entry reached from 0xC2F3BF.
    case 0xC2F3C1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2F121.asm:453 BNE @UNKNOWN35
    case 0xC2F3C2: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C2/C2F121.asm:454 LDA @LOCAL04ALT2
    case 0xC2F3C4: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/unknown/C2/C2F121.asm:455 TAX
    case 0xC2F3C6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:456 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F3C7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:457 STZ BATTLERS_TABLE+battler::row,X
    case 0xC2F3C9: cpu.execute_instruction<0x9E>(0x00A1BE, 3); return true;
    // src/unknown/C2/C2F121.asm:459 REP #PROC_FLAGS::ACCUM8
    case 0xC2F3CC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:460 INC @VIRTUAL02
    case 0xC2F3CE: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:462 LDA @VIRTUAL02
    case 0xC2F3D0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:463 CMP #32
    case 0xC2F3D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:463 CMP #32
    // Overlapping static entry reached from 0xC2F3D2.
    case 0xC2F3D4: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2F121.asm:464 BCC @UNKNOWN34
    case 0xC2F3D5: cpu.execute_instruction<0x90>(0x0000CB, 2); return true;
    // src/unknown/C2/C2F121.asm:466 LDX @LOCALEB_1
    case 0xC2F3D7: cpu.execute_instruction<0xA6>(0x000015, 2); return true;
    // src/unknown/C2/C2F121.asm:467 CPX @LOCAL06
    case 0xC2F3D9: cpu.execute_instruction<0xE4>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:468 BCS @UNKNOWN38
    case 0xC2F3DB: cpu.execute_instruction<0xB0>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:469 STX @LOCAL06
    case 0xC2F3DD: cpu.execute_instruction<0x86>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:471 LDY @LOCAL0B
    case 0xC2F3DF: cpu.execute_instruction<0xA4>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:472 CPY @LOCAL07
    case 0xC2F3E1: cpu.execute_instruction<0xC4>(0x00001B, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2F121.asm:473 BLTEQ @UNKNOWN39
    case 0xC2F3E3: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2F121.asm:473 BLTEQ @UNKNOWN39
    case 0xC2F3E5: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:474 STY @LOCAL07
    case 0xC2F3E7: cpu.execute_instruction<0x84>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:476 LDA @LOCAL06
    case 0xC2F3E9: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:477 CLC
    case 0xC2F3EB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:478 ADC @LOCAL07
    case 0xC2F3EC: cpu.execute_instruction<0x65>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:479 LSR
    case 0xC2F3EE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:480 STA @VIRTUAL02
    case 0xC2F3EF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:481 LDA #32
    case 0xC2F3F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:481 LDA #32
    // Overlapping static entry reached from 0xC2F3F1.
    case 0xC2F3F3: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C2/C2F121.asm:482 SEC
    case 0xC2F3F4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:483 SBC @VIRTUAL02
    case 0xC2F3F5: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:484 SEC
    case 0xC2F3F7: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:485 SBC #16
    case 0xC2F3F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/unknown/C2/C2F121.asm:485 SBC #16
    // Overlapping static entry reached from 0xC2F3F8.
    case 0xC2F3FA: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C2/C2F121.asm:486 TAY
    case 0xC2F3FB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:487 STY @LOCAL06
    case 0xC2F3FC: cpu.execute_instruction<0x84>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:488 LDA #8
    case 0xC2F3FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C2/C2F121.asm:488 LDA #8
    // Overlapping static entry reached from 0xC2F3FE.
    case 0xC2F400: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:489 STA @LOCALEB_2
    case 0xC2F401: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // src/unknown/C2/C2F121.asm:490 BRA @UNKNOWN43
    case 0xC2F403: cpu.execute_instruction<0x80>(0x000061, 2); return true;
    // src/unknown/C2/C2F121.asm:492 LDY #.SIZEOF(battler)
    case 0xC2F405: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:492 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F405.
    case 0xC2F407: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:493 JSL MULT168
    case 0xC2F408: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2F121.asm:494 TAX
    case 0xC2F40C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:495 STX @LOCAL05ALT
    case 0xC2F40D: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C2/C2F121.asm:496 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2F40F: cpu.execute_instruction<0xBD>(0x00A1BA, 3); return true;
    // src/unknown/C2/C2F121.asm:497 AND #$00FF
    case 0xC2F412: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:497 AND #$00FF
    // Overlapping static entry reached from 0xC2F412.
    case 0xC2F414: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F121.asm:498 BEQ @UNKNOWN42
    case 0xC2F415: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/unknown/C2/C2F121.asm:499 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC2F417: cpu.execute_instruction<0xBD>(0x00A1BC, 3); return true;
    // src/unknown/C2/C2F121.asm:500 AND #$00FF
    case 0xC2F41A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:500 AND #$00FF
    // Overlapping static entry reached from 0xC2F41A.
    case 0xC2F41C: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2F121.asm:501 CMP #1
    case 0xC2F41D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2F121.asm:501 CMP #1
    // Overlapping static entry reached from 0xC2F41D.
    case 0xC2F41F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2F121.asm:502 BNE @UNKNOWN42
    case 0xC2F420: cpu.execute_instruction<0xD0>(0x00003D, 2); return true;
    // src/unknown/C2/C2F121.asm:503 TXA
    case 0xC2F422: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:504 CLC
    case 0xC2F423: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:505 ADC #.LOWORD(BATTLERS_TABLE) + battler::sprite_x
    case 0xC2F424: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00A1F2, 3); return true;
    // src/unknown/C2/C2F121.asm:505 ADC #.LOWORD(BATTLERS_TABLE) + battler::sprite_x
    // Overlapping static entry reached from 0xC2F424.
    case 0xC2F426: cpu.execute_instruction<0xA1>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:506 STA @VIRTUAL02
    case 0xC2F427: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:506 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2F426.
    case 0xC2F428: cpu.execute_instruction<0x02>(0x0000A4, 2); return true;
    // src/unknown/C2/C2F121.asm:507 LDY @LOCAL06
    case 0xC2F429: cpu.execute_instruction<0xA4>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:508 SEP #PROC_FLAGS::INDEX8
    case 0xC2F42B: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:509 STY @VIRTUAL00
    case 0xC2F42D: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:510 REP #PROC_FLAGS::INDEX8
    case 0xC2F42F: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:511 LDX @VIRTUAL02
    case 0xC2F431: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:512 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F433: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:513 LDA __BSS_START__,X
    case 0xC2F435: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:514 CLC
    case 0xC2F438: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:515 ADC @VIRTUAL00
    case 0xC2F439: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:516 ASL
    case 0xC2F43B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:517 ASL
    case 0xC2F43C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:518 ASL
    case 0xC2F43D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:519 LDX @VIRTUAL02
    case 0xC2F43E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:520 STA __BSS_START__,X
    case 0xC2F440: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:521 LDX @LOCAL05ALT
    case 0xC2F443: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C2/C2F121.asm:522 REP #PROC_FLAGS::ACCUM8
    case 0xC2F445: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:523 LDA BATTLERS_TABLE+battler::row,X
    case 0xC2F447: cpu.execute_instruction<0xBD>(0x00A1BE, 3); return true;
    // src/unknown/C2/C2F121.asm:524 AND #$00FF
    case 0xC2F44A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:524 AND #$00FF
    // Overlapping static entry reached from 0xC2F44A.
    case 0xC2F44C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F121.asm:525 BEQ @UNKNOWN41
    case 0xC2F44D: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C2/C2F121.asm:526 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F44F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:527 LDA #128
    case 0xC2F451: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x009D80, 3); return true;
    // src/unknown/C2/C2F121.asm:528 STA BATTLERS_TABLE+69,X
    case 0xC2F453: cpu.execute_instruction<0x9D>(0x00A1F3, 3); return true;
    // src/unknown/C2/C2F121.asm:528 STA BATTLERS_TABLE+69,X
    // Overlapping static entry reached from 0xC2F451.
    case 0xC2F454: cpu.execute_instruction<0xF3>(0x0000A1, 2); return true;
    // src/unknown/C2/C2F121.asm:529 BRA @UNKNOWN42
    case 0xC2F456: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C2/C2F121.asm:531 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F458: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:532 LDA #144
    case 0xC2F45A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000090, 2); else cpu.execute_instruction<0xA9>(0x009D90, 3); return true;
    // src/unknown/C2/C2F121.asm:533 STA BATTLERS_TABLE+69,X
    case 0xC2F45C: cpu.execute_instruction<0x9D>(0x00A1F3, 3); return true;
    // src/unknown/C2/C2F121.asm:533 STA BATTLERS_TABLE+69,X
    // Overlapping static entry reached from 0xC2F45A.
    case 0xC2F45D: cpu.execute_instruction<0xF3>(0x0000A1, 2); return true;
    // src/unknown/C2/C2F121.asm:535 REP #PROC_FLAGS::ACCUM8
    case 0xC2F45F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:536 LDA @LOCALEB_2
    case 0xC2F461: cpu.execute_instruction<0xA5>(0x000017, 2); return true;
    // src/unknown/C2/C2F121.asm:537 INC
    case 0xC2F463: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:538 STA @LOCALEB_2
    case 0xC2F464: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // src/unknown/C2/C2F121.asm:540 CMP #BATTLER_COUNT
    case 0xC2F466: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:540 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2F466.
    case 0xC2F468: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2F121.asm:541 BCC @UNKNOWN40
    case 0xC2F469: cpu.execute_instruction<0x90>(0x00009A, 2); return true;
    // src/unknown/C2/C2F121.asm:542 LDA CURRENT_BATTLE_GROUP
    case 0xC2F46B: cpu.execute_instruction<0xAD>(0x004E12, 3); return true;
    // src/unknown/C2/C2F121.asm:543 CMP #ENEMY_GROUP::UNKNOWN_475
    case 0xC2F46E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DB, 2); else cpu.execute_instruction<0xC9>(0x0001DB, 3); return true;
    // src/unknown/C2/C2F121.asm:543 CMP #ENEMY_GROUP::UNKNOWN_475
    // Overlapping static entry reached from 0xC2F46E.
    case 0xC2F470: cpu.execute_instruction<0x01>(0x0000D0, 2); return true;
    // src/unknown/C2/C2F121.asm:544 BNE @UNKNOWN44
    case 0xC2F471: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:544 BNE @UNKNOWN44
    // Overlapping static entry reached from 0xC2F470.
    case 0xC2F472: cpu.execute_instruction<0x14>(0x0000E2, 2); return true;
    // src/unknown/C2/C2F121.asm:545 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F473: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:545 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2F472.
    case 0xC2F474: cpu.execute_instruction<0x20>(0x0080A9, 3); return true;
    // src/unknown/C2/C2F121.asm:546 LDA #128
    case 0xC2F475: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008D80, 3); return true;
    // src/unknown/C2/C2F121.asm:547 STA BATTLERS_TABLE+8*.SIZEOF(battler)+battler::sprite_x
    case 0xC2F477: cpu.execute_instruction<0x8D>(0x00A462, 3); return true;
    // src/unknown/C2/C2F121.asm:547 STA BATTLERS_TABLE+8*.SIZEOF(battler)+battler::sprite_x
    // Overlapping static entry reached from 0xC2F475.
    case 0xC2F478: cpu.execute_instruction<0x62>(0x008DA4, 3); return true;
    // src/unknown/C2/C2F121.asm:548 STA BATTLERS_TABLE+8*.SIZEOF(battler)+69
    case 0xC2F47A: cpu.execute_instruction<0x8D>(0x00A463, 3); return true;
    // src/unknown/C2/C2F121.asm:548 STA BATTLERS_TABLE+8*.SIZEOF(battler)+69
    // Overlapping static entry reached from 0xC2F478.
    case 0xC2F47B: cpu.execute_instruction<0x63>(0x0000A4, 2); return true;
    // src/unknown/C2/C2F121.asm:549 LDA #200
    case 0xC2F47D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x008DC8, 3); return true;
    // src/unknown/C2/C2F121.asm:550 STA BATTLERS_TABLE+9*.SIZEOF(battler)+battler::sprite_x
    case 0xC2F47F: cpu.execute_instruction<0x8D>(0x00A4B0, 3); return true;
    // src/unknown/C2/C2F121.asm:550 STA BATTLERS_TABLE+9*.SIZEOF(battler)+battler::sprite_x
    // Overlapping static entry reached from 0xC2F47D.
    case 0xC2F480: cpu.execute_instruction<0xB0>(0x0000A4, 2); return true;
    // src/unknown/C2/C2F121.asm:551 LDA #144
    case 0xC2F482: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000090, 2); else cpu.execute_instruction<0xA9>(0x008D90, 3); return true;
    // src/unknown/C2/C2F121.asm:552 STA BATTLERS_TABLE+9*.SIZEOF(battler)+69
    case 0xC2F484: cpu.execute_instruction<0x8D>(0x00A4B1, 3); return true;
    // src/unknown/C2/C2F121.asm:552 STA BATTLERS_TABLE+9*.SIZEOF(battler)+69
    // Overlapping static entry reached from 0xC2F482.
    case 0xC2F485: cpu.execute_instruction<0xB1>(0x0000A4, 2); return true;
    // src/unknown/C2/C2F121.asm:554 REP #PROC_FLAGS::ACCUM8
    case 0xC2F487: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:555 STZ @LOCAL09
    case 0xC2F489: cpu.execute_instruction<0x64>(0x00001F, 2); return true;
    // src/unknown/C2/C2F121.asm:556 LDA #0
    case 0xC2F48B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:556 LDA #0
    // Overlapping static entry reached from 0xC2F48B.
    case 0xC2F48D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:557 STA @VIRTUAL04
    case 0xC2F48E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:558 JMP @UNKNOWN57
    case 0xC2F490: cpu.execute_instruction<0x4C>(0x00F60C, 3); return true;
    // src/unknown/C2/C2F121.asm:561 LDA @VIRTUAL04
    case 0xC2F493: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:565 LDY #.SIZEOF(battler)
    case 0xC2F495: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:565 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F495.
    case 0xC2F497: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:566 JSL MULT168
    case 0xC2F498: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2F121.asm:567 CLC
    case 0xC2F49C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:568 ADC #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC2F49D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001E, 2); else cpu.execute_instruction<0x69>(0x00A41E, 3); return true;
    // src/unknown/C2/C2F121.asm:568 ADC #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC2F49D.
    case 0xC2F49F: cpu.execute_instruction<0xA4>(0x0000A8, 2); return true;
    // src/unknown/C2/C2F121.asm:569 TAY
    case 0xC2F4A0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:570 STY @LOCAL05ALT2
    case 0xC2F4A1: cpu.execute_instruction<0x84>(0x000015, 2); return true;
    // src/unknown/C2/C2F121.asm:571 LDA @VIRTUAL04
    case 0xC2F4A3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:572 INC
    case 0xC2F4A5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:573 STA @LOCAL06
    case 0xC2F4A6: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:574 JMP @UNKNOWN55
    case 0xC2F4A8: cpu.execute_instruction<0x4C>(0x00F5FE, 3); return true;
    // src/unknown/C2/C2F121.asm:577 LDA @LOCAL06
    case 0xC2F4AB: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:581 LDY #.SIZEOF(battler)
    case 0xC2F4AD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:581 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F4AD.
    case 0xC2F4AF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:582 JSL MULT168
    case 0xC2F4B0: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2F121.asm:583 CLC
    case 0xC2F4B4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:584 ADC #.LOWORD(BATTLERS_TABLE)+8*.SIZEOF(battler)
    case 0xC2F4B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001E, 2); else cpu.execute_instruction<0x69>(0x00A41E, 3); return true;
    // src/unknown/C2/C2F121.asm:584 ADC #.LOWORD(BATTLERS_TABLE)+8*.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F4B5.
    case 0xC2F4B7: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:585 STA @LOCAL0AALT
    case 0xC2F4B8: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:585 STA @LOCAL0AALT
    // Overlapping static entry reached from 0xC2F4B7.
    case 0xC2F4B9: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:586 LDY @LOCAL05ALT2
    case 0xC2F4BA: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // src/unknown/C2/C2F121.asm:587 LDA __BSS_START__,Y
    case 0xC2F4BC: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:588 CMP (@LOCAL0AALT)
    case 0xC2F4BF: cpu.execute_instruction<0xD2>(0x00001B, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:589 BNEL @UNKNOWN54
    case 0xC2F4C1: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:589 BNEL @UNKNOWN54
    case 0xC2F4C3: cpu.execute_instruction<0x4C>(0x00F5FA, 3); return true;
    // src/unknown/C2/C2F121.asm:590 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F4C6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:591 LDA __BSS_START__+11,Y
    case 0xC2F4C8: cpu.execute_instruction<0xB9>(0x00000B, 3); return true;
    // src/unknown/C2/C2F121.asm:592 LDY #11
    case 0xC2F4CB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000B, 2); else cpu.execute_instruction<0xA0>(0x00000B, 3); return true;
    // src/unknown/C2/C2F121.asm:592 LDY #11
    // Overlapping static entry reached from 0xC2F4CB.
    case 0xC2F4CD: cpu.execute_instruction<0x00>(0x0000D1, 2); return true;
    // src/unknown/C2/C2F121.asm:593 CMP (@LOCAL0AALT),Y
    case 0xC2F4CE: cpu.execute_instruction<0xD1>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:594 BCS @UNKNOWN48
    case 0xC2F4D0: cpu.execute_instruction<0xB0>(0x000034, 2); return true;
    // src/unknown/C2/C2F121.asm:595 LDY @LOCAL05ALT2
    case 0xC2F4D2: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // src/unknown/C2/C2F121.asm:596 LDA __BSS_START__+69,Y
    case 0xC2F4D4: cpu.execute_instruction<0xB9>(0x000045, 3); return true;
    // src/unknown/C2/C2F121.asm:597 STA @VIRTUAL00
    case 0xC2F4D7: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:598 LDY #69
    case 0xC2F4D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000045, 2); else cpu.execute_instruction<0xA0>(0x000045, 3); return true;
    // src/unknown/C2/C2F121.asm:598 LDY #69
    // Overlapping static entry reached from 0xC2F4D9.
    case 0xC2F4DB: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C2F121.asm:599 LDA (@LOCAL0AALT),Y
    case 0xC2F4DC: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:600 STA @LOCAL03
    case 0xC2F4DE: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:601 STA @VIRTUAL01
    case 0xC2F4E0: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C2/C2F121.asm:602 LDA @VIRTUAL00
    case 0xC2F4E2: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:603 CMP @VIRTUAL01
    case 0xC2F4E4: cpu.execute_instruction<0xC5>(0x000001, 2); return true;
    // src/unknown/C2/C2F121.asm:604 BCC @UNKNOWN53
    case 0xC2F4E6: cpu.execute_instruction<0x90>(0x000069, 2); return true;
    // src/unknown/C2/C2F121.asm:605 LDA @LOCAL03
    case 0xC2F4E8: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:606 PHA
    case 0xC2F4EA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:607 LDA @VIRTUAL00
    case 0xC2F4EB: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:608 SEP #PROC_FLAGS::INDEX8
    case 0xC2F4ED: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:609 PLX
    case 0xC2F4EF: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:610 STX @VIRTUAL00
    case 0xC2F4F0: cpu.execute_instruction<0x86>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:611 CMP @VIRTUAL00
    case 0xC2F4F2: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:612 BNE @UNKNOWN48
    case 0xC2F4F4: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:613 REP #PROC_FLAGS::INDEX8
    case 0xC2F4F6: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:614 LDY @LOCAL05ALT2
    case 0xC2F4F8: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // src/unknown/C2/C2F121.asm:615 LDA __BSS_START__+68,Y
    case 0xC2F4FA: cpu.execute_instruction<0xB9>(0x000044, 3); return true;
    // src/unknown/C2/C2F121.asm:616 LDY #68
    case 0xC2F4FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000044, 2); else cpu.execute_instruction<0xA0>(0x000044, 3); return true;
    // src/unknown/C2/C2F121.asm:616 LDY #68
    // Overlapping static entry reached from 0xC2F4FD.
    case 0xC2F4FF: cpu.execute_instruction<0x00>(0x0000D1, 2); return true;
    // src/unknown/C2/C2F121.asm:617 CMP (@LOCAL0AALT),Y
    case 0xC2F500: cpu.execute_instruction<0xD1>(0x00001B, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:618 BGT @UNKNOWN53
    case 0xC2F502: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C2/C2F121.asm:618 BGT @UNKNOWN53
    case 0xC2F504: cpu.execute_instruction<0xB0>(0x00004B, 2); return true;
    // src/unknown/C2/C2F121.asm:620 REP #PROC_FLAGS::INDEX8
    case 0xC2F506: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:621 LDY @LOCAL05ALT2
    case 0xC2F508: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // src/unknown/C2/C2F121.asm:622 LDA __BSS_START__+11,Y
    case 0xC2F50A: cpu.execute_instruction<0xB9>(0x00000B, 3); return true;
    // src/unknown/C2/C2F121.asm:623 LDY #11
    case 0xC2F50D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000B, 2); else cpu.execute_instruction<0xA0>(0x00000B, 3); return true;
    // src/unknown/C2/C2F121.asm:623 LDY #11
    // Overlapping static entry reached from 0xC2F50D.
    case 0xC2F50F: cpu.execute_instruction<0x00>(0x0000D1, 2); return true;
    // src/unknown/C2/C2F121.asm:624 CMP (@LOCAL0AALT),Y
    case 0xC2F510: cpu.execute_instruction<0xD1>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:626 BCS @UNKNOWN50
    case 0xC2F512: cpu.execute_instruction<0xB0>(0x000003, 2); return true;
    // src/unknown/C2/C2F121.asm:630 JMP @UNKNOWN54
    case 0xC2F514: cpu.execute_instruction<0x4C>(0x00F5FA, 3); return true;
    // src/unknown/C2/C2F121.asm:632 LDY @LOCAL05ALT2
    case 0xC2F517: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // src/unknown/C2/C2F121.asm:633 LDA __BSS_START__+69,Y
    case 0xC2F519: cpu.execute_instruction<0xB9>(0x000045, 3); return true;
    // src/unknown/C2/C2F121.asm:634 STA @VIRTUAL00
    case 0xC2F51C: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:635 LDY #69
    case 0xC2F51E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000045, 2); else cpu.execute_instruction<0xA0>(0x000045, 3); return true;
    // src/unknown/C2/C2F121.asm:635 LDY #69
    // Overlapping static entry reached from 0xC2F51E.
    case 0xC2F520: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C2F121.asm:636 LDA (@LOCAL0AALT),Y
    case 0xC2F521: cpu.execute_instruction<0xB1>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:637 STA @LOCAL03
    case 0xC2F523: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:638 STA @VIRTUAL01
    case 0xC2F525: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C2/C2F121.asm:639 LDA @VIRTUAL00
    case 0xC2F527: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:640 CMP @VIRTUAL01
    case 0xC2F529: cpu.execute_instruction<0xC5>(0x000001, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:641 BGT @UNKNOWN53
    case 0xC2F52B: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C2/C2F121.asm:641 BGT @UNKNOWN53
    case 0xC2F52D: cpu.execute_instruction<0xB0>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:642 LDA @LOCAL03
    case 0xC2F52F: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:643 PHA
    case 0xC2F531: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:644 LDA @VIRTUAL00
    case 0xC2F532: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:645 SEP #PROC_FLAGS::INDEX8
    case 0xC2F534: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:646 PLX
    case 0xC2F536: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:647 STX @VIRTUAL00
    case 0xC2F537: cpu.execute_instruction<0x86>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:648 CMP @VIRTUAL00
    case 0xC2F539: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:649 BNEL @UNKNOWN54
    case 0xC2F53B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:649 BNEL @UNKNOWN54
    case 0xC2F53D: cpu.execute_instruction<0x4C>(0x00F5FA, 3); return true;
    // src/unknown/C2/C2F121.asm:650 REP #PROC_FLAGS::INDEX8
    case 0xC2F540: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:651 LDY @LOCAL05ALT2
    case 0xC2F542: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // src/unknown/C2/C2F121.asm:652 LDA a:battler::sprite_x,Y
    case 0xC2F544: cpu.execute_instruction<0xB9>(0x000044, 3); return true;
    // src/unknown/C2/C2F121.asm:653 LDY #68
    case 0xC2F547: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000044, 2); else cpu.execute_instruction<0xA0>(0x000044, 3); return true;
    // src/unknown/C2/C2F121.asm:653 LDY #68
    // Overlapping static entry reached from 0xC2F547.
    case 0xC2F549: cpu.execute_instruction<0x00>(0x0000D1, 2); return true;
    // src/unknown/C2/C2F121.asm:654 CMP (@LOCAL0AALT),Y
    case 0xC2F54A: cpu.execute_instruction<0xD1>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:655 BCC @UNKNOWN53
    case 0xC2F54C: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C2/C2F121.asm:656 JMP @UNKNOWN54
    case 0xC2F54E: cpu.execute_instruction<0x4C>(0x00F5FA, 3); return true;
    // src/unknown/C2/C2F121.asm:658 REP #PROC_FLAGS::ACCUM8
    case 0xC2F551: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:659 LDA #1
    case 0xC2F553: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2F121.asm:659 LDA #1
    // Overlapping static entry reached from 0xC2F553.
    case 0xC2F555: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:660 STA @LOCAL09
    case 0xC2F556: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // src/unknown/C2/C2F121.asm:661 LDY @LOCAL05ALT2
    case 0xC2F558: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // src/unknown/C2/C2F121.asm:662 TYA
    case 0xC2F55A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:663 CLC
    case 0xC2F55B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:664 ADC #11
    case 0xC2F55C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000B, 2); else cpu.execute_instruction<0x69>(0x00000B, 3); return true;
    // src/unknown/C2/C2F121.asm:664 ADC #11
    // Overlapping static entry reached from 0xC2F55C.
    case 0xC2F55E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2F121.asm:665 TAX
    case 0xC2F55F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:666 STX @LOCALEB_2
    case 0xC2F560: cpu.execute_instruction<0x86>(0x000017, 2); return true;
    // src/unknown/C2/C2F121.asm:667 LDA __BSS_START__,X
    case 0xC2F562: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:668 AND #$00FF
    case 0xC2F565: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:668 AND #$00FF
    // Overlapping static entry reached from 0xC2F565.
    case 0xC2F567: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:669 STA @LOCAL01
    case 0xC2F568: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2F121.asm:670 LDA @LOCAL0AALT
    case 0xC2F56A: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:671 CLC
    case 0xC2F56C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:672 ADC #11
    case 0xC2F56D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000B, 2); else cpu.execute_instruction<0x69>(0x00000B, 3); return true;
    // src/unknown/C2/C2F121.asm:672 ADC #11
    // Overlapping static entry reached from 0xC2F56D.
    case 0xC2F56F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:673 STA @VIRTUAL02
    case 0xC2F570: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:674 LDX @VIRTUAL02
    case 0xC2F572: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:675 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F574: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:676 LDA __BSS_START__,X
    case 0xC2F576: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:677 LDX @LOCALEB_2
    case 0xC2F579: cpu.execute_instruction<0xA6>(0x000017, 2); return true;
    // src/unknown/C2/C2F121.asm:678 STA __BSS_START__,X
    case 0xC2F57B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:679 REP #PROC_FLAGS::ACCUM8
    case 0xC2F57E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:680 LDA @LOCAL01
    case 0xC2F580: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2F121.asm:681 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F582: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:682 LDX @VIRTUAL02
    case 0xC2F584: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:683 STA __BSS_START__,X
    case 0xC2F586: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:684 STA @VIRTUAL00
    case 0xC2F589: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:685 LDX @LOCALEB_2
    case 0xC2F58B: cpu.execute_instruction<0xA6>(0x000017, 2); return true;
    // src/unknown/C2/C2F121.asm:686 LDA __BSS_START__,X
    case 0xC2F58D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:687 CMP @VIRTUAL00
    case 0xC2F590: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2F121.asm:688 BLTEQ @UNKNOWN54
    case 0xC2F592: cpu.execute_instruction<0x90>(0x000066, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2F121.asm:688 BLTEQ @UNKNOWN54
    case 0xC2F594: cpu.execute_instruction<0xF0>(0x000064, 2); return true;
    // src/unknown/C2/C2F121.asm:689 REP #PROC_FLAGS::ACCUM8
    case 0xC2F596: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:690 LDA #.LOWORD(BATTLERS_TABLE) + ((BATTLER_COUNT - 1) * .SIZEOF(battler))
    case 0xC2F598: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x00AB20, 3); return true;
    // src/unknown/C2/C2F121.asm:690 LDA #.LOWORD(BATTLERS_TABLE) + ((BATTLER_COUNT - 1) * .SIZEOF(battler))
    // Overlapping static entry reached from 0xC2F598.
    case 0xC2F59A: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:691 STA @VIRTUAL02
    case 0xC2F59B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:692 TYA
    case 0xC2F59D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C2/C2F121.asm:693 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F59E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C2/C2F121.asm:693 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F5A0: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2F121.asm:693 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F5A1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C2/C2F121.asm:693 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F5A3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C2/C2F121.asm:693 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F5A4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C2/C2F121.asm:693 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F5A6: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C2/C2F121.asm:694 REP #PROC_FLAGS::ACCUM8
    case 0xC2F5A8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2F121.asm:695 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2F5AA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2F121.asm:695 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2F5AC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2F121.asm:695 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2F5AE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2F121.asm:695 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2F5B0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:696 LDX #.SIZEOF(battler)
    case 0xC2F5B2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004E, 2); else cpu.execute_instruction<0xA2>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:696 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F5B2.
    case 0xC2F5B4: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C2F121.asm:697 LDA @VIRTUAL02
    case 0xC2F5B5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:698 JSL MEMCPY16
    case 0xC2F5B7: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C2/C2F121.asm:699 LDA @LOCAL0AALT
    case 0xC2F5BB: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C2/C2F121.asm:700 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F5BD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C2/C2F121.asm:700 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F5BF: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2F121.asm:700 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F5C0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C2/C2F121.asm:700 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F5C2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C2/C2F121.asm:700 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F5C3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C2/C2F121.asm:700 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F5C5: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C2/C2F121.asm:701 REP #PROC_FLAGS::ACCUM8
    case 0xC2F5C7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2F121.asm:702 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2F5C9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2F121.asm:702 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2F5CB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2F121.asm:702 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2F5CD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2F121.asm:702 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2F5CF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:703 LDX #.SIZEOF(battler)
    case 0xC2F5D1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004E, 2); else cpu.execute_instruction<0xA2>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:703 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F5D1.
    case 0xC2F5D3: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/C2/C2F121.asm:704 LDY @LOCAL05ALT2
    case 0xC2F5D4: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // src/unknown/C2/C2F121.asm:705 TYA
    case 0xC2F5D6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:706 JSL MEMCPY16
    case 0xC2F5D7: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C2/C2F121.asm:707 LDA @VIRTUAL02
    case 0xC2F5DB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C2/C2F121.asm:708 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F5DD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C2/C2F121.asm:708 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F5DF: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2F121.asm:708 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F5E0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C2/C2F121.asm:708 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F5E2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C2/C2F121.asm:708 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F5E3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C2/C2F121.asm:708 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F5E5: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C2/C2F121.asm:709 REP #PROC_FLAGS::ACCUM8
    case 0xC2F5E7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2F121.asm:710 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2F5E9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2F121.asm:710 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2F5EB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2F121.asm:710 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2F5ED: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2F121.asm:710 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2F5EF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:711 LDX #.SIZEOF(battler)
    case 0xC2F5F1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004E, 2); else cpu.execute_instruction<0xA2>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:711 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F5F1.
    case 0xC2F5F3: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C2F121.asm:712 LDA @LOCAL0AALT
    case 0xC2F5F4: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:713 JSL MEMCPY16
    case 0xC2F5F6: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C2/C2F121.asm:715 REP #PROC_FLAGS::ACCUM8
    case 0xC2F5FA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:716 INC @LOCAL06
    case 0xC2F5FC: cpu.execute_instruction<0xE6>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:718 LDA ENEMIES_IN_BATTLE
    case 0xC2F5FE: cpu.execute_instruction<0xAD>(0x00A18C, 3); return true;
    // src/unknown/C2/C2F121.asm:719 CMP @LOCAL06
    case 0xC2F601: cpu.execute_instruction<0xC5>(0x000019, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:720 BGTL @UNKNOWN46
    case 0xC2F603: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/unknown/C2/C2F121.asm:720 BGTL @UNKNOWN46
    case 0xC2F605: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:720 BGTL @UNKNOWN46
    case 0xC2F607: cpu.execute_instruction<0x4C>(0x00F4AB, 3); return true;
    // src/unknown/C2/C2F121.asm:721 INC @VIRTUAL04
    case 0xC2F60A: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:723 LDA ENEMIES_IN_BATTLE
    case 0xC2F60C: cpu.execute_instruction<0xAD>(0x00A18C, 3); return true;
    // src/unknown/C2/C2F121.asm:724 DEC
    case 0xC2F60F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:725 STA @VIRTUAL02
    case 0xC2F610: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:726 LDA @VIRTUAL04
    case 0xC2F612: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:727 CMP @VIRTUAL02
    case 0xC2F614: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C2/C2F121.asm:728 BCCL @UNKNOWN45
    case 0xC2F616: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:728 BCCL @UNKNOWN45
    case 0xC2F618: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:728 BCCL @UNKNOWN45
    case 0xC2F61A: cpu.execute_instruction<0x4C>(0x00F493, 3); return true;
    // src/unknown/C2/C2F121.asm:729 LDA @LOCAL09
    case 0xC2F61D: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:730 BNEL @UNKNOWN44
    case 0xC2F61F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:730 BNEL @UNKNOWN44
    case 0xC2F621: cpu.execute_instruction<0x4C>(0x00F487, 3); return true;
    // src/unknown/C2/C2F121.asm:731 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F624: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/unknown/C2/C2F121.asm:732 STZ_BADOPT @LOCAL00
    case 0xC2F626: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/C2/C2F121.asm:732 STZ_BADOPT @LOCAL00
    case 0xC2F628: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/C2/C2F121.asm:732 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC2F626.
    case 0xC2F629: cpu.execute_instruction<0x0E>(0x0010C2, 3); return true;
    // src/unknown/C2/C2F121.asm:733 REP #PROC_FLAGS::INDEX8
    case 0xC2F62A: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:734 LDX #.SIZEOF(battler)
    case 0xC2F62C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004E, 2); else cpu.execute_instruction<0xA2>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:734 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F62C.
    case 0xC2F62E: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C2/C2F121.asm:735 REP #PROC_FLAGS::ACCUM8
    case 0xC2F62F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:736 LDA #.LOWORD(BATTLERS_TABLE) + 31 * .SIZEOF(battler)
    case 0xC2F631: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x00AB20, 3); return true;
    // src/unknown/C2/C2F121.asm:736 LDA #.LOWORD(BATTLERS_TABLE) + 31 * .SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F631.
    case 0xC2F633: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:737 JSL MEMSET16
    case 0xC2F634: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C2/C2F121.asm:738 LDA #0
    case 0xC2F638: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:738 LDA #0
    // Overlapping static entry reached from 0xC2F638.
    case 0xC2F63A: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2F121.asm:740 END_C_FUNCTION
    case 0xC2F63B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2F121.asm:740 END_C_FUNCTION
    case 0xC2F63C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2F8F9.asm (unresolved).
bool execute_unresolved_c2_c2f8f9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2F8F9.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2F812: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C2F8F9.asm:5 LDA #$007E
    case 0xC2F814: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/unknown/C2/C2F8F9.asm:5 LDA #$007E
    // Overlapping static entry reached from 0xC2F814.
    case 0xC2F816: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F8F9.asm:6 JSL UNKNOWN_C088A5
    case 0xC2F817: cpu.execute_instruction<0x22>(0xC08897, 4); return true;
    // src/unknown/C2/C2F8F9.asm:7 JSL OAM_CLEAR
    case 0xC2F81B: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/unknown/C2/C2F8F9.asm:8 LDA #0
    case 0xC2F81F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2F8F9.asm:8 LDA #0
    // Overlapping static entry reached from 0xC2F81F.
    case 0xC2F821: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C2/C2F8F9.asm:9 JSR RENDER_BATTLE_SPRITE_ROW
    case 0xC2F822: cpu.execute_instruction<0x20>(0x00F63D, 3); return true;
    // src/unknown/C2/C2F8F9.asm:10 LDA #1
    case 0xC2F825: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2F8F9.asm:10 LDA #1
    // Overlapping static entry reached from 0xC2F825.
    case 0xC2F827: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C2/C2F8F9.asm:11 JSR RENDER_BATTLE_SPRITE_ROW
    case 0xC2F828: cpu.execute_instruction<0x20>(0x00F63D, 3); return true;
    // src/unknown/C2/C2F8F9.asm:12 JSL UPDATE_SCREEN
    case 0xC2F82B: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2F8F9.asm:13 END_C_FUNCTION
    case 0xC2F82F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2F917.asm (unresolved).
bool execute_unresolved_c2_c2f917_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2F917.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2F830: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2F917.asm:8 END_STACK_VARS
    case 0xC2F832: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2F917.asm:8 END_STACK_VARS
    case 0xC2F833: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2F917.asm:8 END_STACK_VARS
    case 0xC2F834: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2F917.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2F834.
    case 0xC2F836: cpu.execute_instruction<0xFF>(0x2D9C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2F917.asm:8 END_STACK_VARS
    case 0xC2F837: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:9 STZ NUM_BATTLERS_IN_BACK_ROW
    case 0xC2F838: cpu.execute_instruction<0x9C>(0x00AF2D, 3); return true;
    // src/unknown/C2/C2F917.asm:9 STZ NUM_BATTLERS_IN_BACK_ROW
    // Overlapping static entry reached from 0xC2F836.
    case 0xC2F83A: cpu.execute_instruction<0xAF>(0xAF2B9C, 4); return true;
    // src/unknown/C2/C2F917.asm:10 STZ NUM_BATTLERS_IN_FRONT_ROW
    case 0xC2F83B: cpu.execute_instruction<0x9C>(0x00AF2B, 3); return true;
    // src/unknown/C2/C2F917.asm:11 LDA #8
    case 0xC2F83E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C2/C2F917.asm:11 LDA #8
    // Overlapping static entry reached from 0xC2F83E.
    case 0xC2F840: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F917.asm:12 STA @LOCAL02
    case 0xC2F841: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2F917.asm:13 BRA @UNKNOWN3
    case 0xC2F843: cpu.execute_instruction<0x80>(0x00003B, 2); return true;
    // src/unknown/C2/C2F917.asm:15 LDY #.SIZEOF(battler)
    case 0xC2F845: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F917.asm:15 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F845.
    case 0xC2F847: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F917.asm:16 JSL MULT168
    case 0xC2F848: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2F917.asm:17 TAX
    case 0xC2F84C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:18 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2F84D: cpu.execute_instruction<0xBD>(0x00A1BA, 3); return true;
    // src/unknown/C2/C2F917.asm:19 AND #$00FF
    case 0xC2F850: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC2F850.
    case 0xC2F852: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F917.asm:20 BEQ @UNKNOWN2
    case 0xC2F853: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/unknown/C2/C2F917.asm:21 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC2F855: cpu.execute_instruction<0xBD>(0x00A1CB, 3); return true;
    // src/unknown/C2/C2F917.asm:22 AND #$00FF
    case 0xC2F858: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC2F858.
    case 0xC2F85A: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2F917.asm:23 CMP #1
    case 0xC2F85B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2F917.asm:23 CMP #1
    // Overlapping static entry reached from 0xC2F85B.
    case 0xC2F85D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F917.asm:24 BEQ @UNKNOWN2
    case 0xC2F85E: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/C2/C2F917.asm:25 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC2F860: cpu.execute_instruction<0xBD>(0x00A1BC, 3); return true;
    // src/unknown/C2/C2F917.asm:26 AND #$00FF
    case 0xC2F863: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC2F863.
    case 0xC2F865: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2F917.asm:27 CMP #1
    case 0xC2F866: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2F917.asm:27 CMP #1
    // Overlapping static entry reached from 0xC2F866.
    case 0xC2F868: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2F917.asm:28 BNE @UNKNOWN2
    case 0xC2F869: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C2/C2F917.asm:29 LDA BATTLERS_TABLE+battler::row,X
    case 0xC2F86B: cpu.execute_instruction<0xBD>(0x00A1BE, 3); return true;
    // src/unknown/C2/C2F917.asm:30 AND #$00FF
    case 0xC2F86E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC2F86E.
    case 0xC2F870: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F917.asm:31 BEQ @UNKNOWN1
    case 0xC2F871: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C2/C2F917.asm:32 INC NUM_BATTLERS_IN_BACK_ROW
    case 0xC2F873: cpu.execute_instruction<0xEE>(0x00AF2D, 3); return true;
    // src/unknown/C2/C2F917.asm:33 BRA @UNKNOWN2
    case 0xC2F876: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C2/C2F917.asm:35 INC NUM_BATTLERS_IN_FRONT_ROW
    case 0xC2F878: cpu.execute_instruction<0xEE>(0x00AF2B, 3); return true;
    // src/unknown/C2/C2F917.asm:37 LDA @LOCAL02
    case 0xC2F87B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2F917.asm:38 INC
    case 0xC2F87D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:39 STA @LOCAL02
    case 0xC2F87E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2F917.asm:41 CMP #32
    case 0xC2F880: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C2/C2F917.asm:41 CMP #32
    // Overlapping static entry reached from 0xC2F880.
    case 0xC2F882: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2F917.asm:42 BCC @UNKNOWN0
    case 0xC2F883: cpu.execute_instruction<0x90>(0x0000C0, 2); return true;
    // src/unknown/C2/C2F917.asm:43 STZ @LOCAL01
    case 0xC2F885: cpu.execute_instruction<0x64>(0x000010, 2); return true;
    // src/unknown/C2/C2F917.asm:44 LDA #0
    case 0xC2F887: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2F917.asm:44 LDA #0
    // Overlapping static entry reached from 0xC2F887.
    case 0xC2F889: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F917.asm:45 STA @VIRTUAL02
    case 0xC2F88A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F917.asm:46 JMP @UNKNOWN9
    case 0xC2F88C: cpu.execute_instruction<0x4C>(0x00F92B, 3); return true;
    // src/unknown/C2/C2F917.asm:48 LDA #$FFFF
    case 0xC2F88F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C2F917.asm:48 LDA #$FFFF
    // Overlapping static entry reached from 0xC2F88F.
    case 0xC2F891: cpu.execute_instruction<0xFF>(0xA00485, 4); return true;
    // src/unknown/C2/C2F917.asm:49 STA @VIRTUAL04
    case 0xC2F892: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2F917.asm:50 LDY #8
    case 0xC2F894: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C2/C2F917.asm:50 LDY #8
    // Overlapping static entry reached from 0xC2F891.
    case 0xC2F895: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:50 LDY #8
    // Overlapping static entry reached from 0xC2F894.
    case 0xC2F896: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C2/C2F917.asm:51 STY @LOCAL02
    case 0xC2F897: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C2/C2F917.asm:52 BRA @UNKNOWN8
    case 0xC2F899: cpu.execute_instruction<0x80>(0x00004C, 2); return true;
    // src/unknown/C2/C2F917.asm:54 TYA
    case 0xC2F89B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:55 LDY #.SIZEOF(battler)
    case 0xC2F89C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F917.asm:55 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F89C.
    case 0xC2F89E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F917.asm:56 JSL MULT168
    case 0xC2F89F: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2F917.asm:57 TAX
    case 0xC2F8A3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:58 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2F8A4: cpu.execute_instruction<0xBD>(0x00A1BA, 3); return true;
    // src/unknown/C2/C2F917.asm:59 AND #$00FF
    case 0xC2F8A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC2F8A7.
    case 0xC2F8A9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F917.asm:60 BEQ @UNKNOWN7
    case 0xC2F8AA: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/unknown/C2/C2F917.asm:61 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC2F8AC: cpu.execute_instruction<0xBD>(0x00A1CB, 3); return true;
    // src/unknown/C2/C2F917.asm:62 AND #$00FF
    case 0xC2F8AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:62 AND #$00FF
    // Overlapping static entry reached from 0xC2F8AF.
    case 0xC2F8B1: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2F917.asm:63 CMP #1
    case 0xC2F8B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2F917.asm:63 CMP #1
    // Overlapping static entry reached from 0xC2F8B2.
    case 0xC2F8B4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F917.asm:64 BEQ @UNKNOWN7
    case 0xC2F8B5: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/unknown/C2/C2F917.asm:65 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC2F8B7: cpu.execute_instruction<0xBD>(0x00A1BC, 3); return true;
    // src/unknown/C2/C2F917.asm:66 AND #$00FF
    case 0xC2F8BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:66 AND #$00FF
    // Overlapping static entry reached from 0xC2F8BA.
    case 0xC2F8BC: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2F917.asm:67 CMP #1
    case 0xC2F8BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2F917.asm:67 CMP #1
    // Overlapping static entry reached from 0xC2F8BD.
    case 0xC2F8BF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2F917.asm:68 BNE @UNKNOWN7
    case 0xC2F8C0: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:69 LDA BATTLERS_TABLE+battler::row,X
    case 0xC2F8C2: cpu.execute_instruction<0xBD>(0x00A1BE, 3); return true;
    // src/unknown/C2/C2F917.asm:70 AND #$00FF
    case 0xC2F8C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:70 AND #$00FF
    // Overlapping static entry reached from 0xC2F8C5.
    case 0xC2F8C7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2F917.asm:71 BNE @UNKNOWN7
    case 0xC2F8C8: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/unknown/C2/C2F917.asm:72 LDA BATTLERS_TABLE+battler::sprite_x,X
    case 0xC2F8CA: cpu.execute_instruction<0xBD>(0x00A1F2, 3); return true;
    // src/unknown/C2/C2F917.asm:73 AND #$00FF
    case 0xC2F8CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:73 AND #$00FF
    // Overlapping static entry reached from 0xC2F8CD.
    case 0xC2F8CF: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C2/C2F917.asm:74 CMP @LOCAL01
    case 0xC2F8D0: cpu.execute_instruction<0xC5>(0x000010, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2F917.asm:75 BLTEQ @UNKNOWN7
    case 0xC2F8D2: cpu.execute_instruction<0x90>(0x00000E, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2F917.asm:75 BLTEQ @UNKNOWN7
    case 0xC2F8D4: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C2/C2F917.asm:76 CMP @VIRTUAL04
    case 0xC2F8D6: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C2/C2F917.asm:77 BGT @UNKNOWN7
    case 0xC2F8D8: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C2/C2F917.asm:77 BGT @UNKNOWN7
    case 0xC2F8DA: cpu.execute_instruction<0xB0>(0x000006, 2); return true;
    // src/unknown/C2/C2F917.asm:78 LDY @LOCAL02
    case 0xC2F8DC: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2F917.asm:79 STY @LOCAL00
    case 0xC2F8DE: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C2F917.asm:80 STA @VIRTUAL04
    case 0xC2F8E0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2F917.asm:82 LDY @LOCAL02
    case 0xC2F8E2: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2F917.asm:83 INY
    case 0xC2F8E4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:84 STY @LOCAL02
    case 0xC2F8E5: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C2/C2F917.asm:86 CPY #32
    case 0xC2F8E7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/unknown/C2/C2F917.asm:86 CPY #32
    // Overlapping static entry reached from 0xC2F8E7.
    case 0xC2F8E9: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2F917.asm:87 BCC @UNKNOWN5
    case 0xC2F8EA: cpu.execute_instruction<0x90>(0x0000AF, 2); return true;
    // src/unknown/C2/C2F917.asm:88 LDA @LOCAL00
    case 0xC2F8EC: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2F917.asm:89 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F8EE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:90 LDX @VIRTUAL02
    case 0xC2F8F0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2F917.asm:91 STA FRONT_ROW_BATTLERS,X
    case 0xC2F8F2: cpu.execute_instruction<0x9D>(0x00AF4F, 3); return true;
    // src/unknown/C2/C2F917.asm:92 REP #PROC_FLAGS::ACCUM8
    case 0xC2F8F5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:93 LDA @VIRTUAL04
    case 0xC2F8F7: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2F917.asm:94 LSR
    case 0xC2F8F9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:95 LSR
    case 0xC2F8FA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:96 LSR
    case 0xC2F8FB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:97 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F8FC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:98 LDX @VIRTUAL02
    case 0xC2F8FE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2F917.asm:99 STA BATTLER_FRONT_ROW_X_POSITIONS,X
    case 0xC2F900: cpu.execute_instruction<0x9D>(0x00AF2F, 3); return true;
    // src/unknown/C2/C2F917.asm:100 REP #PROC_FLAGS::ACCUM8
    case 0xC2F903: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:101 LDA @LOCAL00
    case 0xC2F905: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2F917.asm:102 LDY #.SIZEOF(battler)
    case 0xC2F907: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F917.asm:102 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F907.
    case 0xC2F909: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F917.asm:103 JSL MULT168
    case 0xC2F90A: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2F917.asm:104 TAX
    case 0xC2F90E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:105 LDA BATTLERS_TABLE+battler::sprite,X
    case 0xC2F90F: cpu.execute_instruction<0xBD>(0x00A1B0, 3); return true;
    // src/unknown/C2/C2F917.asm:106 JSR GET_BATTLE_SPRITE_HEIGHT
    case 0xC2F912: cpu.execute_instruction<0x20>(0x00EF6B, 3); return true;
    // src/unknown/C2/C2F917.asm:107 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F915: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:108 STA @VIRTUAL00
    case 0xC2F917: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C2F917.asm:109 LDA #18
    case 0xC2F919: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x003812, 3); return true;
    // src/unknown/C2/C2F917.asm:110 SEC
    case 0xC2F91B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:111 SBC @VIRTUAL00
    case 0xC2F91C: cpu.execute_instruction<0xE5>(0x000000, 2); return true;
    // src/unknown/C2/C2F917.asm:112 LDX @VIRTUAL02
    case 0xC2F91E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2F917.asm:113 STA BATTLER_FRONT_ROW_Y_POSITIONS,X
    case 0xC2F920: cpu.execute_instruction<0x9D>(0x00AF37, 3); return true;
    // src/unknown/C2/C2F917.asm:114 REP #PROC_FLAGS::ACCUM8
    case 0xC2F923: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:115 LDA @VIRTUAL04
    case 0xC2F925: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2F917.asm:116 STA @LOCAL01
    case 0xC2F927: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2F917.asm:117 INC @VIRTUAL02
    case 0xC2F929: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2F917.asm:119 LDA @VIRTUAL02
    case 0xC2F92B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2F917.asm:120 CMP NUM_BATTLERS_IN_FRONT_ROW
    case 0xC2F92D: cpu.execute_instruction<0xCD>(0x00AF2B, 3); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C2/C2F917.asm:121 BCCL @UNKNOWN4
    case 0xC2F930: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C2/C2F917.asm:121 BCCL @UNKNOWN4
    case 0xC2F932: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C2/C2F917.asm:121 BCCL @UNKNOWN4
    case 0xC2F934: cpu.execute_instruction<0x4C>(0x00F88F, 3); return true;
    // src/unknown/C2/C2F917.asm:122 STZ @LOCAL01
    case 0xC2F937: cpu.execute_instruction<0x64>(0x000010, 2); return true;
    // src/unknown/C2/C2F917.asm:123 LDA #0
    case 0xC2F939: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2F917.asm:123 LDA #0
    // Overlapping static entry reached from 0xC2F939.
    case 0xC2F93B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F917.asm:124 STA @VIRTUAL02
    case 0xC2F93C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F917.asm:125 JMP @UNKNOWN16
    case 0xC2F93E: cpu.execute_instruction<0x4C>(0x00F9DD, 3); return true;
    // src/unknown/C2/C2F917.asm:127 LDA #$FFFF
    case 0xC2F941: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C2F917.asm:127 LDA #$FFFF
    // Overlapping static entry reached from 0xC2F941.
    case 0xC2F943: cpu.execute_instruction<0xFF>(0xA00485, 4); return true;
    // src/unknown/C2/C2F917.asm:128 STA @VIRTUAL04
    case 0xC2F944: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2F917.asm:129 LDY #8
    case 0xC2F946: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C2/C2F917.asm:129 LDY #8
    // Overlapping static entry reached from 0xC2F943.
    case 0xC2F947: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:129 LDY #8
    // Overlapping static entry reached from 0xC2F946.
    case 0xC2F948: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C2/C2F917.asm:130 STY @LOCAL02
    case 0xC2F949: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C2/C2F917.asm:131 BRA @UNKNOWN15
    case 0xC2F94B: cpu.execute_instruction<0x80>(0x00004C, 2); return true;
    // src/unknown/C2/C2F917.asm:133 TYA
    case 0xC2F94D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:134 LDY #.SIZEOF(battler)
    case 0xC2F94E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F917.asm:134 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F94E.
    case 0xC2F950: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F917.asm:135 JSL MULT168
    case 0xC2F951: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2F917.asm:136 TAX
    case 0xC2F955: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:137 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2F956: cpu.execute_instruction<0xBD>(0x00A1BA, 3); return true;
    // src/unknown/C2/C2F917.asm:138 AND #$00FF
    case 0xC2F959: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:138 AND #$00FF
    // Overlapping static entry reached from 0xC2F959.
    case 0xC2F95B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F917.asm:139 BEQ @UNKNOWN14
    case 0xC2F95C: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/unknown/C2/C2F917.asm:140 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC2F95E: cpu.execute_instruction<0xBD>(0x00A1CB, 3); return true;
    // src/unknown/C2/C2F917.asm:141 AND #$00FF
    case 0xC2F961: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:141 AND #$00FF
    // Overlapping static entry reached from 0xC2F961.
    case 0xC2F963: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2F917.asm:142 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2F964: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2F917.asm:142 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2F964.
    case 0xC2F966: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F917.asm:143 BEQ @UNKNOWN14
    case 0xC2F967: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/unknown/C2/C2F917.asm:144 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC2F969: cpu.execute_instruction<0xBD>(0x00A1BC, 3); return true;
    // src/unknown/C2/C2F917.asm:145 AND #$00FF
    case 0xC2F96C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:145 AND #$00FF
    // Overlapping static entry reached from 0xC2F96C.
    case 0xC2F96E: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2F917.asm:146 CMP #1
    case 0xC2F96F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2F917.asm:146 CMP #1
    // Overlapping static entry reached from 0xC2F96F.
    case 0xC2F971: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2F917.asm:147 BNE @UNKNOWN14
    case 0xC2F972: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:148 LDA BATTLERS_TABLE+battler::row,X
    case 0xC2F974: cpu.execute_instruction<0xBD>(0x00A1BE, 3); return true;
    // src/unknown/C2/C2F917.asm:149 AND #$00FF
    case 0xC2F977: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:149 AND #$00FF
    // Overlapping static entry reached from 0xC2F977.
    case 0xC2F979: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F917.asm:150 BEQ @UNKNOWN14
    case 0xC2F97A: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C2/C2F917.asm:151 LDA BATTLERS_TABLE+battler::sprite_x,X
    case 0xC2F97C: cpu.execute_instruction<0xBD>(0x00A1F2, 3); return true;
    // src/unknown/C2/C2F917.asm:152 AND #$00FF
    case 0xC2F97F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:152 AND #$00FF
    // Overlapping static entry reached from 0xC2F97F.
    case 0xC2F981: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C2/C2F917.asm:153 CMP @LOCAL01
    case 0xC2F982: cpu.execute_instruction<0xC5>(0x000010, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2F917.asm:154 BLTEQ @UNKNOWN14
    case 0xC2F984: cpu.execute_instruction<0x90>(0x00000E, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2F917.asm:154 BLTEQ @UNKNOWN14
    case 0xC2F986: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C2/C2F917.asm:155 CMP @VIRTUAL04
    case 0xC2F988: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C2/C2F917.asm:156 BGT @UNKNOWN14
    case 0xC2F98A: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C2/C2F917.asm:156 BGT @UNKNOWN14
    case 0xC2F98C: cpu.execute_instruction<0xB0>(0x000006, 2); return true;
    // src/unknown/C2/C2F917.asm:157 LDY @LOCAL02
    case 0xC2F98E: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2F917.asm:158 STY @LOCAL00
    case 0xC2F990: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C2F917.asm:159 STA @VIRTUAL04
    case 0xC2F992: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2F917.asm:161 LDY @LOCAL02
    case 0xC2F994: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2F917.asm:162 INY
    case 0xC2F996: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:163 STY @LOCAL02
    case 0xC2F997: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C2/C2F917.asm:165 CPY #32
    case 0xC2F999: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/unknown/C2/C2F917.asm:165 CPY #32
    // Overlapping static entry reached from 0xC2F999.
    case 0xC2F99B: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2F917.asm:166 BCC @UNKNOWN12
    case 0xC2F99C: cpu.execute_instruction<0x90>(0x0000AF, 2); return true;
    // src/unknown/C2/C2F917.asm:167 LDA @LOCAL00
    case 0xC2F99E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2F917.asm:168 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F9A0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:169 LDX @VIRTUAL02
    case 0xC2F9A2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2F917.asm:170 STA BACK_ROW_BATTLERS,X
    case 0xC2F9A4: cpu.execute_instruction<0x9D>(0x00AF57, 3); return true;
    // src/unknown/C2/C2F917.asm:171 REP #PROC_FLAGS::ACCUM8
    case 0xC2F9A7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:172 LDA @VIRTUAL04
    case 0xC2F9A9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2F917.asm:173 LSR
    case 0xC2F9AB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:174 LSR
    case 0xC2F9AC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:175 LSR
    case 0xC2F9AD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:176 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F9AE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:177 LDX @VIRTUAL02
    case 0xC2F9B0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2F917.asm:178 STA BATTLER_BACK_ROW_X_POSITIONS,X
    case 0xC2F9B2: cpu.execute_instruction<0x9D>(0x00AF3F, 3); return true;
    // src/unknown/C2/C2F917.asm:179 REP #PROC_FLAGS::ACCUM8
    case 0xC2F9B5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:180 LDA @LOCAL00
    case 0xC2F9B7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2F917.asm:181 LDY #.SIZEOF(battler)
    case 0xC2F9B9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F917.asm:181 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F9B9.
    case 0xC2F9BB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F917.asm:182 JSL MULT168
    case 0xC2F9BC: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2F917.asm:183 TAX
    case 0xC2F9C0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:184 LDA BATTLERS_TABLE+battler::sprite,X
    case 0xC2F9C1: cpu.execute_instruction<0xBD>(0x00A1B0, 3); return true;
    // src/unknown/C2/C2F917.asm:185 JSR GET_BATTLE_SPRITE_HEIGHT
    case 0xC2F9C4: cpu.execute_instruction<0x20>(0x00EF6B, 3); return true;
    // src/unknown/C2/C2F917.asm:186 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F9C7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:187 STA @VIRTUAL00
    case 0xC2F9C9: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C2F917.asm:188 LDA #16
    case 0xC2F9CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x003810, 3); return true;
    // src/unknown/C2/C2F917.asm:189 SEC
    case 0xC2F9CD: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:190 SBC @VIRTUAL00
    case 0xC2F9CE: cpu.execute_instruction<0xE5>(0x000000, 2); return true;
    // src/unknown/C2/C2F917.asm:191 LDX @VIRTUAL02
    case 0xC2F9D0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2F917.asm:192 STA BATTLER_BACK_ROW_Y_POSITIONS,X
    case 0xC2F9D2: cpu.execute_instruction<0x9D>(0x00AF47, 3); return true;
    // src/unknown/C2/C2F917.asm:193 REP #PROC_FLAGS::ACCUM8
    case 0xC2F9D5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:194 LDA @VIRTUAL04
    case 0xC2F9D7: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2F917.asm:195 STA @LOCAL01
    case 0xC2F9D9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2F917.asm:196 INC @VIRTUAL02
    case 0xC2F9DB: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2F917.asm:198 LDA @VIRTUAL02
    case 0xC2F9DD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2F917.asm:199 CMP NUM_BATTLERS_IN_BACK_ROW
    case 0xC2F9DF: cpu.execute_instruction<0xCD>(0x00AF2D, 3); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C2/C2F917.asm:200 BCCL @UNKNOWN11
    case 0xC2F9E2: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C2/C2F917.asm:200 BCCL @UNKNOWN11
    case 0xC2F9E4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C2/C2F917.asm:200 BCCL @UNKNOWN11
    case 0xC2F9E6: cpu.execute_instruction<0x4C>(0x00F941, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2F917.asm:201 END_C_FUNCTION
    case 0xC2F9E9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2F917.asm:201 END_C_FUNCTION
    case 0xC2F9EA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2FAD2.asm (unresolved).
bool execute_unresolved_c2_c2fad2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2FAD2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2F9EB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C2FAD2.asm:6 LDA #1
    case 0xC2F9ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2FAD2.asm:6 LDA #1
    // Overlapping static entry reached from 0xC2F9ED.
    case 0xC2F9EF: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2FAD2.asm:7 END_C_FUNCTION
    case 0xC2F9F0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2FAD8.asm (unresolved).
bool execute_unresolved_c2_c2fad8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2FAD8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2F9F1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C2FAD8.asm:6 STA BATTLE_SPRITE_PALETTE_EFFECT_SPEED
    case 0xC2F9F3: cpu.execute_instruction<0x8D>(0x00B551, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2FAD8.asm:7 END_C_FUNCTION
    case 0xC2F9F6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2FADE.asm (unresolved).
bool execute_unresolved_c2_c2fade_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2FADE.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2F9F7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2FADE.asm:9 END_STACK_VARS
    case 0xC2F9F9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2FADE.asm:9 END_STACK_VARS
    case 0xC2F9FA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2FADE.asm:9 END_STACK_VARS
    case 0xC2F9FB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2FADE.asm:9 END_STACK_VARS
    case 0xC2F9FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2FADE.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2F9FC.
    case 0xC2F9FE: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2FADE.asm:9 END_STACK_VARS
    case 0xC2F9FF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2FADE.asm:9 END_STACK_VARS
    case 0xC2FA00: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:10 TXY
    case 0xC2FA01: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:11 TAX
    case 0xC2FA02: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:12 STX BATTLE_SPRITE_PALETTE_EFFECT_SPEED
    case 0xC2FA03: cpu.execute_instruction<0x8E>(0x00B551, 3); return true;
    // src/unknown/C2/C2FADE.asm:13 TYA
    case 0xC2FA06: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:14 ASL
    case 0xC2FA07: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:15 TAX
    case 0xC2FA08: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:16 LDA BATTLE_SPRITE_PALETTE_EFFECT_SPEED
    case 0xC2FA09: cpu.execute_instruction<0xAD>(0x00B551, 3); return true;
    // src/unknown/C2/C2FADE.asm:17 STA BATTLE_SPRITE_PALETTE_EFFECT_FRAMES_LEFT,X
    case 0xC2FA0C: cpu.execute_instruction<0x9D>(0x00B0C9, 3); return true;
    // src/unknown/C2/C2FADE.asm:18 LDX #0
    case 0xC2FA0F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2FADE.asm:18 LDX #0
    // Overlapping static entry reached from 0xC2FA0F.
    case 0xC2FA11: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C2/C2FADE.asm:19 STX @LOCAL01
    case 0xC2FA12: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C2/C2FADE.asm:20 BRA @UNKNOWN1
    case 0xC2FA14: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/unknown/C2/C2FADE.asm:22 STX @VIRTUAL02
    case 0xC2FA16: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C2/C2FADE.asm:23 TYA
    case 0xC2FA18: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:688 STA scratch
    // Macro caller: src/unknown/C2/C2FADE.asm:24 OPTIMIZED_MULT @VIRTUAL04, 48
    case 0xC2FA19: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:689 ASL
    // Macro caller: src/unknown/C2/C2FADE.asm:24 OPTIMIZED_MULT @VIRTUAL04, 48
    case 0xC2FA1B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:690 ADC scratch
    // Macro caller: src/unknown/C2/C2FADE.asm:24 OPTIMIZED_MULT @VIRTUAL04, 48
    case 0xC2FA1C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:691 ASL
    // Macro caller: src/unknown/C2/C2FADE.asm:24 OPTIMIZED_MULT @VIRTUAL04, 48
    case 0xC2FA1E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:692 ASL
    // Macro caller: src/unknown/C2/C2FADE.asm:24 OPTIMIZED_MULT @VIRTUAL04, 48
    case 0xC2FA1F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:693 ASL
    // Macro caller: src/unknown/C2/C2FADE.asm:24 OPTIMIZED_MULT @VIRTUAL04, 48
    case 0xC2FA20: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:694 ASL
    // Macro caller: src/unknown/C2/C2FADE.asm:24 OPTIMIZED_MULT @VIRTUAL04, 48
    case 0xC2FA21: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:25 CLC
    case 0xC2FA22: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:26 ADC @VIRTUAL02
    case 0xC2FA23: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C2FADE.asm:27 ASL
    case 0xC2FA25: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:28 STA @LOCAL00
    case 0xC2FA26: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2FADE.asm:29 CLC
    case 0xC2FA28: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:30 ADC #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_DELTAS)
    case 0xC2FA29: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D1, 2); else cpu.execute_instruction<0x69>(0x00B0D1, 3); return true;
    // src/unknown/C2/C2FADE.asm:30 ADC #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_DELTAS)
    // Overlapping static entry reached from 0xC2FA29.
    case 0xC2FA2B: cpu.execute_instruction<0xB0>(0x000085, 2); return true;
    // src/unknown/C2/C2FADE.asm:31 STA @VIRTUAL02
    case 0xC2FA2C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2FADE.asm:31 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2FA2B.
    case 0xC2FA2D: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/unknown/C2/C2FADE.asm:32 LDX @VIRTUAL02
    case 0xC2FA2E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2FADE.asm:33 LDA __BSS_START__,X
    case 0xC2FA30: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2FADE.asm:34 EOR #$FFFF
    case 0xC2FA33: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C2/C2FADE.asm:34 EOR #$FFFF
    // Overlapping static entry reached from 0xC2FA33.
    case 0xC2FA35: cpu.execute_instruction<0xFF>(0x02A61A, 4); return true;
    // src/unknown/C2/C2FADE.asm:35 INC
    case 0xC2FA36: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:36 LDX @VIRTUAL02
    case 0xC2FA37: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2FADE.asm:37 STA __BSS_START__,X
    case 0xC2FA39: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2FADE.asm:37 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2FA90.
    case 0xC2FA3A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C2FADE.asm:38 LDA @LOCAL00
    case 0xC2FA3C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2FADE.asm:39 TAX
    case 0xC2FA3E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:40 STZ BATTLE_SPRITE_PALETTE_EFFECT_COUNTERS,X
    case 0xC2FA3F: cpu.execute_instruction<0x9E>(0x00B251, 3); return true;
    // src/unknown/C2/C2FADE.asm:41 LDX @LOCAL01
    case 0xC2FA42: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C2/C2FADE.asm:42 INX
    case 0xC2FA44: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:43 STX @LOCAL01
    case 0xC2FA45: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C2/C2FADE.asm:45 CPX #48
    case 0xC2FA47: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000030, 2); else cpu.execute_instruction<0xE0>(0x000030, 3); return true;
    // src/unknown/C2/C2FADE.asm:45 CPX #48
    // Overlapping static entry reached from 0xC2FA47.
    case 0xC2FA49: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2FADE.asm:46 BCC @UNKNOWN0
    case 0xC2FA4A: cpu.execute_instruction<0x90>(0x0000CA, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2FADE.asm:47 END_C_FUNCTION
    case 0xC2FA4C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2FADE.asm:47 END_C_FUNCTION
    case 0xC2FA4D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2FB35.asm (unresolved).
bool execute_unresolved_c2_c2fb35_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2FB35.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2FA4E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2FB35.asm:16 END_STACK_VARS
    case 0xC2FA50: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2FB35.asm:16 END_STACK_VARS
    case 0xC2FA51: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2FB35.asm:16 END_STACK_VARS
    case 0xC2FA52: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2FB35.asm:16 END_STACK_VARS
    case 0xC2FA53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2FB35.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC2FA53.
    case 0xC2FA55: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2FB35.asm:16 END_STACK_VARS
    case 0xC2FA56: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2FB35.asm:16 END_STACK_VARS
    case 0xC2FA57: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:17 STY @LOCAL06
    case 0xC2FA58: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/unknown/C2/C2FB35.asm:17 STY @LOCAL06
    // Overlapping static entry reached from 0xC2FA55.
    case 0xC2FA59: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:18 STX @VIRTUAL04
    case 0xC2FA5A: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C2/C2FB35.asm:19 STX @LOCAL05
    case 0xC2FA5C: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C2/C2FB35.asm:20 STA @LOCAL04
    case 0xC2FA5E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2FB35.asm:21 LDX @PARAM03
    case 0xC2FA60: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // src/unknown/C2/C2FB35.asm:22 STX @LOCAL03
    case 0xC2FA62: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C2/C2FB35.asm:23 LSR
    case 0xC2FA64: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:24 LSR
    case 0xC2FA65: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:25 LSR
    case 0xC2FA66: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:26 LSR
    case 0xC2FA67: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:27 ASL
    case 0xC2FA68: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:28 TAX
    case 0xC2FA69: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:29 LDA BATTLE_SPRITE_PALETTE_EFFECT_SPEED
    case 0xC2FA6A: cpu.execute_instruction<0xAD>(0x00B551, 3); return true;
    // src/unknown/C2/C2FB35.asm:30 STA BATTLE_SPRITE_PALETTE_EFFECT_FRAMES_LEFT,X
    case 0xC2FA6D: cpu.execute_instruction<0x9D>(0x00B0C9, 3); return true;
    // src/unknown/C2/C2FB35.asm:30 STA BATTLE_SPRITE_PALETTE_EFFECT_FRAMES_LEFT,X
    // Overlapping static entry reached from 0xC2FA8A.
    case 0xC2FA6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000B0, 2); else cpu.execute_instruction<0xC9>(0x00A5B0, 3); return true;
    // src/unknown/C2/C2FB35.asm:31 LDA @LOCAL04
    case 0xC2FA70: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2FB35.asm:31 LDA @LOCAL04
    // Overlapping static entry reached from 0xC2FA6E.
    case 0xC2FA71: cpu.execute_instruction<0x16>(0x00000A, 2); return true;
    // src/unknown/C2/C2FB35.asm:32 ASL
    case 0xC2FA72: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:33 TAX
    case 0xC2FA73: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:34 LDA PALETTES + 12 * BPP4PALETTE_SIZE,X
    case 0xC2FA74: cpu.execute_instruction<0xBD>(0x000380, 3); return true;
    // src/unknown/C2/C2FB35.asm:35 STA @LOCAL02
    case 0xC2FA77: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2FB35.asm:36 AND #$001F
    case 0xC2FA79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C2/C2FB35.asm:36 AND #$001F
    // Overlapping static entry reached from 0xC2FA79.
    case 0xC2FA7B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2FB35.asm:37 STA @VIRTUAL02
    case 0xC2FA7C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:38 LDA @LOCAL02
    case 0xC2FA7E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2FB35.asm:39 LSR
    case 0xC2FA80: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:40 LSR
    case 0xC2FA81: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:41 LSR
    case 0xC2FA82: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:42 LSR
    case 0xC2FA83: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:43 LSR
    case 0xC2FA84: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:44 AND #$001F
    case 0xC2FA85: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C2/C2FB35.asm:44 AND #$001F
    // Overlapping static entry reached from 0xC2FA85.
    case 0xC2FA87: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2FB35.asm:45 TAX
    case 0xC2FA88: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:46 STX @LOCAL01
    case 0xC2FA89: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C2/C2FB35.asm:46 STX @LOCAL01
    // Overlapping static entry reached from 0xC2FB02.
    case 0xC2FA8A: cpu.execute_instruction<0x10>(0x0000E2, 2); return true;
    // src/unknown/C2/C2FB35.asm:47 SEP #PROC_FLAGS::ACCUM8
    case 0xC2FA8B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2FB35.asm:47 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2FA8A.
    case 0xC2FA8C: cpu.execute_instruction<0x20>(0x000AA9, 3); return true;
    // src/unknown/C2/C2FB35.asm:48 LDA #10
    case 0xC2FA8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00E20A, 3); return true;
    // src/unknown/C2/C2FB35.asm:49 SEP #PROC_FLAGS::INDEX8
    case 0xC2FA8F: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C2/C2FB35.asm:49 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC2FA8D.
    case 0xC2FA90: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C2/C2FB35.asm:50 TAY
    case 0xC2FA91: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC2FA92: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2FB35.asm:52 LDA @LOCAL02
    case 0xC2FA94: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2FB35.asm:53 JSL ASR8_UNKNOWN1
    case 0xC2FA96: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/unknown/C2/C2FB35.asm:54 AND #$001F
    case 0xC2FA9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C2/C2FB35.asm:54 AND #$001F
    // Overlapping static entry reached from 0xC2FA9A.
    case 0xC2FA9C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2FB35.asm:55 STA @LOCAL00
    case 0xC2FA9D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2FB35.asm:56 LDA @VIRTUAL04
    case 0xC2FA9F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2FB35.asm:57 CMP @VIRTUAL02
    case 0xC2FAA1: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2FB35.asm:58 BLTEQ @UNKNOWN0
    case 0xC2FAA3: cpu.execute_instruction<0x90>(0x000024, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2FB35.asm:58 BLTEQ @UNKNOWN0
    case 0xC2FAA5: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/unknown/C2/C2FB35.asm:59 LDA @LOCAL04
    case 0xC2FAA7: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:60 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FAA9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:60 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FAAB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:60 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FAAC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:60 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FAAE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:61 STA @LOCAL02
    case 0xC2FAAF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2FB35.asm:62 LDA @LOCAL05
    case 0xC2FAB1: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C2FB35.asm:63 STA @VIRTUAL04
    case 0xC2FAB3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2FB35.asm:64 SEC
    case 0xC2FAB5: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:65 SBC @VIRTUAL02
    case 0xC2FAB6: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:66 REP #PROC_FLAGS::INDEX8
    case 0xC2FAB8: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2FB35.asm:67 LDY #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_STEPS)
    case 0xC2FABA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D1, 2); else cpu.execute_instruction<0xA0>(0x00B3D1, 3); return true;
    // src/unknown/C2/C2FB35.asm:67 LDY #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_STEPS)
    // Overlapping static entry reached from 0xC2FABA.
    case 0xC2FABC: cpu.execute_instruction<0xB3>(0x000091, 2); return true;
    // src/unknown/C2/C2FB35.asm:68 STA (@LOCAL02),Y
    case 0xC2FABD: cpu.execute_instruction<0x91>(0x000012, 2); return true;
    // src/unknown/C2/C2FB35.asm:68 STA (@LOCAL02),Y
    // Overlapping static entry reached from 0xC2FABC.
    case 0xC2FABE: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // src/unknown/C2/C2FB35.asm:69 LDA #1
    case 0xC2FABF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2FB35.asm:69 LDA #1
    // Overlapping static entry reached from 0xC2FABE.
    case 0xC2FAC0: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C2/C2FB35.asm:69 LDA #1
    // Overlapping static entry reached from 0xC2FABF.
    case 0xC2FAC1: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C2/C2FB35.asm:70 LDY #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_DELTAS)
    case 0xC2FAC2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D1, 2); else cpu.execute_instruction<0xA0>(0x00B0D1, 3); return true;
    // src/unknown/C2/C2FB35.asm:70 LDY #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_DELTAS)
    // Overlapping static entry reached from 0xC2FAC2.
    case 0xC2FAC4: cpu.execute_instruction<0xB0>(0x000091, 2); return true;
    // src/unknown/C2/C2FB35.asm:71 STA (@LOCAL02),Y
    case 0xC2FAC5: cpu.execute_instruction<0x91>(0x000012, 2); return true;
    // src/unknown/C2/C2FB35.asm:71 STA (@LOCAL02),Y
    // Overlapping static entry reached from 0xC2FAC4.
    case 0xC2FAC6: cpu.execute_instruction<0x12>(0x000080, 2); return true;
    // src/unknown/C2/C2FB35.asm:72 BRA @UNKNOWN2
    case 0xC2FAC7: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/unknown/C2/C2FB35.asm:72 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC2FAC6.
    case 0xC2FAC8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:74 LDA @VIRTUAL04
    case 0xC2FAC9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2FB35.asm:75 CMP @VIRTUAL02
    case 0xC2FACB: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:76 BNE @UNKNOWN1
    case 0xC2FACD: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C2/C2FB35.asm:77 LDA @LOCAL04
    case 0xC2FACF: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:78 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FAD1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:78 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FAD3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:78 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FAD4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:78 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FAD6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:79 REP #PROC_FLAGS::INDEX8
    case 0xC2FAD7: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2FB35.asm:80 TAX
    case 0xC2FAD9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:81 STZ BATTLE_SPRITE_PALETTE_EFFECT_DELTAS,X
    case 0xC2FADA: cpu.execute_instruction<0x9E>(0x00B0D1, 3); return true;
    // src/unknown/C2/C2FB35.asm:82 BRA @UNKNOWN2
    case 0xC2FADD: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/unknown/C2/C2FB35.asm:84 LDA @LOCAL04
    case 0xC2FADF: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:85 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FAE1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:85 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FAE3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:85 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FAE4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:85 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FAE6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:86 STA @LOCAL02
    case 0xC2FAE7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2FB35.asm:87 LDA @LOCAL05
    case 0xC2FAE9: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C2FB35.asm:88 STA @VIRTUAL04
    case 0xC2FAEB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2FB35.asm:89 LDA @VIRTUAL02
    case 0xC2FAED: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:90 SEC
    case 0xC2FAEF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:91 SBC @VIRTUAL04
    case 0xC2FAF0: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C2/C2FB35.asm:92 REP #PROC_FLAGS::INDEX8
    case 0xC2FAF2: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2FB35.asm:93 LDY #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_STEPS)
    case 0xC2FAF4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D1, 2); else cpu.execute_instruction<0xA0>(0x00B3D1, 3); return true;
    // src/unknown/C2/C2FB35.asm:93 LDY #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_STEPS)
    // Overlapping static entry reached from 0xC2FAF4.
    case 0xC2FAF6: cpu.execute_instruction<0xB3>(0x000091, 2); return true;
    // src/unknown/C2/C2FB35.asm:94 STA (@LOCAL02),Y
    case 0xC2FAF7: cpu.execute_instruction<0x91>(0x000012, 2); return true;
    // src/unknown/C2/C2FB35.asm:94 STA (@LOCAL02),Y
    // Overlapping static entry reached from 0xC2FAF6.
    case 0xC2FAF8: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // src/unknown/C2/C2FB35.asm:95 LDA #$FFFF
    case 0xC2FAF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C2FB35.asm:95 LDA #$FFFF
    // Overlapping static entry reached from 0xC2FAF8.
    case 0xC2FAFA: cpu.execute_instruction<0xFF>(0xD1A0FF, 4); return true;
    // src/unknown/C2/C2FB35.asm:95 LDA #$FFFF
    // Overlapping static entry reached from 0xC2FAF9.
    case 0xC2FAFB: cpu.execute_instruction<0xFF>(0xB0D1A0, 4); return true;
    // src/unknown/C2/C2FB35.asm:96 LDY #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_DELTAS)
    case 0xC2FAFC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D1, 2); else cpu.execute_instruction<0xA0>(0x00B0D1, 3); return true;
    // src/unknown/C2/C2FB35.asm:96 LDY #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_DELTAS)
    // Overlapping static entry reached from 0xC2FAFC.
    case 0xC2FAFE: cpu.execute_instruction<0xB0>(0x000091, 2); return true;
    // src/unknown/C2/C2FB35.asm:97 STA (@LOCAL02),Y
    case 0xC2FAFF: cpu.execute_instruction<0x91>(0x000012, 2); return true;
    // src/unknown/C2/C2FB35.asm:97 STA (@LOCAL02),Y
    // Overlapping static entry reached from 0xC2FAFE.
    case 0xC2FB00: cpu.execute_instruction<0x12>(0x0000A6, 2); return true;
    // src/unknown/C2/C2FB35.asm:99 LDX @LOCAL01
    case 0xC2FB01: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C2/C2FB35.asm:99 LDX @LOCAL01
    // Overlapping static entry reached from 0xC2FB00.
    case 0xC2FB02: cpu.execute_instruction<0x10>(0x000086, 2); return true;
    // src/unknown/C2/C2FB35.asm:100 STX @VIRTUAL02
    case 0xC2FB03: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:100 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC2FB02.
    case 0xC2FB04: cpu.execute_instruction<0x02>(0x0000A4, 2); return true;
    // src/unknown/C2/C2FB35.asm:101 LDY @LOCAL06
    case 0xC2FB05: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C2/C2FB35.asm:102 TYA
    case 0xC2FB07: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:103 CMP @VIRTUAL02
    case 0xC2FB08: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2FB35.asm:104 BLTEQ @UNKNOWN3
    case 0xC2FB0A: cpu.execute_instruction<0x90>(0x000021, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2FB35.asm:104 BLTEQ @UNKNOWN3
    case 0xC2FB0C: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/unknown/C2/C2FB35.asm:105 LDA @LOCAL04
    case 0xC2FB0E: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:106 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB10: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:106 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB12: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:106 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB13: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:106 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB15: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:107 STA @VIRTUAL02
    case 0xC2FB16: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:108 STX @VIRTUAL04
    case 0xC2FB18: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C2/C2FB35.asm:109 TYA
    case 0xC2FB1A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:110 SEC
    case 0xC2FB1B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:111 SBC @VIRTUAL04
    case 0xC2FB1C: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C2/C2FB35.asm:112 LDX @VIRTUAL02
    case 0xC2FB1E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:113 STA BATTLE_SPRITE_PALETTE_EFFECT_STEPS + 2,X
    case 0xC2FB20: cpu.execute_instruction<0x9D>(0x00B3D3, 3); return true;
    // src/unknown/C2/C2FB35.asm:114 LDA #32
    case 0xC2FB23: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C2/C2FB35.asm:114 LDA #32
    // Overlapping static entry reached from 0xC2FB23.
    case 0xC2FB25: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C2/C2FB35.asm:115 LDX @VIRTUAL02
    case 0xC2FB26: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:116 STA BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 2,X
    case 0xC2FB28: cpu.execute_instruction<0x9D>(0x00B0D3, 3); return true;
    // src/unknown/C2/C2FB35.asm:117 BRA @UNKNOWN5
    case 0xC2FB2B: cpu.execute_instruction<0x80>(0x000032, 2); return true;
    // src/unknown/C2/C2FB35.asm:119 STX @VIRTUAL02
    case 0xC2FB2D: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:120 TYA
    case 0xC2FB2F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:121 CMP @VIRTUAL02
    case 0xC2FB30: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:122 BNE @UNKNOWN4
    case 0xC2FB32: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/unknown/C2/C2FB35.asm:123 LDA @LOCAL04
    case 0xC2FB34: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:124 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB36: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:124 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB38: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:124 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB39: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:124 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB3B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:125 TAX
    case 0xC2FB3C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:126 STZ BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 2,X
    case 0xC2FB3D: cpu.execute_instruction<0x9E>(0x00B0D3, 3); return true;
    // src/unknown/C2/C2FB35.asm:127 BRA @UNKNOWN5
    case 0xC2FB40: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/unknown/C2/C2FB35.asm:129 LDA @LOCAL04
    case 0xC2FB42: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:130 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB44: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:130 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB46: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:130 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB47: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:130 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB49: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:131 STA @VIRTUAL02
    case 0xC2FB4A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:132 STY @VIRTUAL04
    case 0xC2FB4C: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C2/C2FB35.asm:133 TXA
    case 0xC2FB4E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:134 SEC
    case 0xC2FB4F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:135 SBC @VIRTUAL04
    case 0xC2FB50: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C2/C2FB35.asm:135 SBC @VIRTUAL04
    // Overlapping static entry reached from 0xC2FBAA.
    case 0xC2FB51: cpu.execute_instruction<0x04>(0x0000A6, 2); return true;
    // src/unknown/C2/C2FB35.asm:136 LDX @VIRTUAL02
    case 0xC2FB52: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:136 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC2FB51.
    case 0xC2FB53: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/unknown/C2/C2FB35.asm:137 STA BATTLE_SPRITE_PALETTE_EFFECT_STEPS + 2,X
    case 0xC2FB54: cpu.execute_instruction<0x9D>(0x00B3D3, 3); return true;
    // src/unknown/C2/C2FB35.asm:138 LDA #$FFE0
    case 0xC2FB57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x00FFE0, 3); return true;
    // src/unknown/C2/C2FB35.asm:138 LDA #$FFE0
    // Overlapping static entry reached from 0xC2FB57.
    case 0xC2FB59: cpu.execute_instruction<0xFF>(0x9D02A6, 4); return true;
    // src/unknown/C2/C2FB35.asm:139 LDX @VIRTUAL02
    case 0xC2FB5A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:140 STA BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 2,X
    case 0xC2FB5C: cpu.execute_instruction<0x9D>(0x00B0D3, 3); return true;
    // src/unknown/C2/C2FB35.asm:140 STA BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 2,X
    // Overlapping static entry reached from 0xC2FB59.
    case 0xC2FB5D: cpu.execute_instruction<0xD3>(0x0000B0, 2); return true;
    // src/unknown/C2/C2FB35.asm:142 LDA @LOCAL03
    case 0xC2FB5F: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2FB35.asm:143 CMP @LOCAL00
    case 0xC2FB61: cpu.execute_instruction<0xC5>(0x00000E, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2FB35.asm:144 BLTEQ @UNKNOWN6
    case 0xC2FB63: cpu.execute_instruction<0x90>(0x00001B, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2FB35.asm:144 BLTEQ @UNKNOWN6
    case 0xC2FB65: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/unknown/C2/C2FB35.asm:145 LDA @LOCAL04
    case 0xC2FB67: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:146 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB69: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:146 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB6B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:146 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB6C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:146 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB6E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:147 TAX
    case 0xC2FB6F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:148 LDA @LOCAL03
    case 0xC2FB70: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2FB35.asm:149 SEC
    case 0xC2FB72: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:150 SBC @LOCAL00
    case 0xC2FB73: cpu.execute_instruction<0xE5>(0x00000E, 2); return true;
    // src/unknown/C2/C2FB35.asm:151 STA BATTLE_SPRITE_PALETTE_EFFECT_STEPS + 4,X
    case 0xC2FB75: cpu.execute_instruction<0x9D>(0x00B3D5, 3); return true;
    // src/unknown/C2/C2FB35.asm:152 LDA #$0400
    case 0xC2FB78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000400, 3); return true;
    // src/unknown/C2/C2FB35.asm:152 LDA #$0400
    // Overlapping static entry reached from 0xC2FB78.
    case 0xC2FB7A: cpu.execute_instruction<0x04>(0x00009D, 2); return true;
    // src/unknown/C2/C2FB35.asm:153 STA BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 4,X
    case 0xC2FB7B: cpu.execute_instruction<0x9D>(0x00B0D5, 3); return true;
    // src/unknown/C2/C2FB35.asm:153 STA BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 4,X
    // Overlapping static entry reached from 0xC2FB7A.
    case 0xC2FB7C: cpu.execute_instruction<0xD5>(0x0000B0, 2); return true;
    // src/unknown/C2/C2FB35.asm:154 BRA @UNKNOWN8
    case 0xC2FB7E: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // src/unknown/C2/C2FB35.asm:156 LDA @LOCAL03
    case 0xC2FB80: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2FB35.asm:157 CMP @LOCAL00
    case 0xC2FB82: cpu.execute_instruction<0xC5>(0x00000E, 2); return true;
    // src/unknown/C2/C2FB35.asm:158 BNE @UNKNOWN7
    case 0xC2FB84: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/unknown/C2/C2FB35.asm:159 LDA @LOCAL04
    case 0xC2FB86: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:160 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB88: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:160 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB8A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:160 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB8B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:160 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB8D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:161 TAX
    case 0xC2FB8E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:162 STZ BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 4,X
    case 0xC2FB8F: cpu.execute_instruction<0x9E>(0x00B0D5, 3); return true;
    // src/unknown/C2/C2FB35.asm:163 BRA @UNKNOWN8
    case 0xC2FB92: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/unknown/C2/C2FB35.asm:165 LDA @LOCAL04
    case 0xC2FB94: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:166 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB96: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:166 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB98: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:166 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB99: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:166 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB9B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:167 TAX
    case 0xC2FB9C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:168 LDA @LOCAL00
    case 0xC2FB9D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2FB35.asm:169 SEC
    case 0xC2FB9F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:170 SBC @LOCAL03
    case 0xC2FBA0: cpu.execute_instruction<0xE5>(0x000014, 2); return true;
    // src/unknown/C2/C2FB35.asm:171 STA BATTLE_SPRITE_PALETTE_EFFECT_STEPS + 4,X
    case 0xC2FBA2: cpu.execute_instruction<0x9D>(0x00B3D5, 3); return true;
    // src/unknown/C2/C2FB35.asm:172 LDA #$FC00
    case 0xC2FBA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00FC00, 3); return true;
    // src/unknown/C2/C2FB35.asm:172 LDA #$FC00
    // Overlapping static entry reached from 0xC2FBA5.
    case 0xC2FBA7: cpu.execute_instruction<0xFC>(0x00D59D, 3); return true;
    // src/unknown/C2/C2FB35.asm:173 STA BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 4,X
    case 0xC2FBA8: cpu.execute_instruction<0x9D>(0x00B0D5, 3); return true;
    // src/unknown/C2/C2FB35.asm:173 STA BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 4,X
    // Overlapping static entry reached from 0xC2FBA7.
    case 0xC2FBAA: cpu.execute_instruction<0xB0>(0x0000A5, 2); return true;
    // src/unknown/C2/C2FB35.asm:175 LDA @LOCAL04
    case 0xC2FBAB: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2FB35.asm:175 LDA @LOCAL04
    // Overlapping static entry reached from 0xC2FBAA.
    case 0xC2FBAC: cpu.execute_instruction<0x16>(0x000085, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:176 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FBAD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:176 OPTIMIZED_MULT @VIRTUAL04, 6
    // Overlapping static entry reached from 0xC2FBAC.
    case 0xC2FBAE: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:176 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FBAF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:176 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FBB0: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:176 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FBB2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:177 TAX
    case 0xC2FBB3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:178 STZ BATTLE_SPRITE_PALETTE_EFFECT_COUNTERS + 4,X
    case 0xC2FBB4: cpu.execute_instruction<0x9E>(0x00B255, 3); return true;
    // src/unknown/C2/C2FB35.asm:179 STZ BATTLE_SPRITE_PALETTE_EFFECT_COUNTERS + 2,X
    case 0xC2FBB7: cpu.execute_instruction<0x9E>(0x00B253, 3); return true;
    // src/unknown/C2/C2FB35.asm:180 STZ BATTLE_SPRITE_PALETTE_EFFECT_COUNTERS,X
    case 0xC2FBBA: cpu.execute_instruction<0x9E>(0x00B251, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2FB35.asm:181 END_C_FUNCTION
    case 0xC2FBBD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2FB35.asm:181 END_C_FUNCTION
    case 0xC2FBBE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2FCA6.asm (unresolved).
bool execute_unresolved_c2_c2fca6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2FCA6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2FBBF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2FCA6.asm:11 END_STACK_VARS
    case 0xC2FBC1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2FCA6.asm:11 END_STACK_VARS
    case 0xC2FBC2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2FCA6.asm:11 END_STACK_VARS
    case 0xC2FBC3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2FCA6.asm:11 END_STACK_VARS
    case 0xC2FBC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2FCA6.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC2FBC4.
    case 0xC2FBC6: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2FCA6.asm:11 END_STACK_VARS
    case 0xC2FBC7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2FCA6.asm:11 END_STACK_VARS
    case 0xC2FBC8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:12 STA @VIRTUAL02
    case 0xC2FBC9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2FCA6.asm:12 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2FBC6.
    case 0xC2FBCA: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C2/C2FCA6.asm:13 STA @LOCAL04
    case 0xC2FBCB: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2FCA6.asm:14 LDA @VIRTUAL02
    case 0xC2FBCD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2FCA6.asm:15 LSR
    case 0xC2FBCF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:16 LSR
    case 0xC2FBD0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:17 LSR
    case 0xC2FBD1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:18 LSR
    case 0xC2FBD2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:19 ASL
    case 0xC2FBD3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:20 TAX
    case 0xC2FBD4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:21 LDA BATTLE_SPRITE_PALETTE_EFFECT_SPEED
    case 0xC2FBD5: cpu.execute_instruction<0xAD>(0x00B551, 3); return true;
    // src/unknown/C2/C2FCA6.asm:22 STA BATTLE_SPRITE_PALETTE_EFFECT_FRAMES_LEFT,X
    case 0xC2FBD8: cpu.execute_instruction<0x9D>(0x00B0C9, 3); return true;
    // src/unknown/C2/C2FCA6.asm:23 LDA @VIRTUAL02
    case 0xC2FBDB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2FCA6.asm:24 ASL
    case 0xC2FBDD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:25 TAX
    case 0xC2FBDE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:26 LDA PALETTES + 12 * BPP4PALETTE_SIZE,X
    case 0xC2FBDF: cpu.execute_instruction<0xBD>(0x000380, 3); return true;
    // src/unknown/C2/C2FCA6.asm:27 STA @LOCAL03
    case 0xC2FBE2: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C2FCA6.asm:28 AND #$001F
    case 0xC2FBE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C2/C2FCA6.asm:28 AND #$001F
    // Overlapping static entry reached from 0xC2FBE4.
    case 0xC2FBE6: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C2/C2FCA6.asm:29 TAY
    case 0xC2FBE7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:30 STY @LOCAL02
    case 0xC2FBE8: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C2/C2FCA6.asm:31 LDA @LOCAL03
    case 0xC2FBEA: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2FCA6.asm:32 LSR
    case 0xC2FBEC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:33 LSR
    case 0xC2FBED: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:34 LSR
    case 0xC2FBEE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:35 LSR
    case 0xC2FBEF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:36 LSR
    case 0xC2FBF0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:37 AND #$001F
    case 0xC2FBF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C2/C2FCA6.asm:37 AND #$001F
    // Overlapping static entry reached from 0xC2FBF1.
    case 0xC2FBF3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2FCA6.asm:38 STA @VIRTUAL04
    case 0xC2FBF4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2FCA6.asm:39 STA @LOCAL01
    case 0xC2FBF6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2FCA6.asm:40 SEP #PROC_FLAGS::INDEX8
    case 0xC2FBF8: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C2/C2FCA6.asm:41 LDY #10
    case 0xC2FBFA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00A50A, 3); return true;
    // src/unknown/C2/C2FCA6.asm:42 LDA @LOCAL03
    case 0xC2FBFC: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2FCA6.asm:42 LDA @LOCAL03
    // Overlapping static entry reached from 0xC2FBFA.
    case 0xC2FBFD: cpu.execute_instruction<0x14>(0x000022, 2); return true;
    // src/unknown/C2/C2FCA6.asm:43 JSL ASR8_UNKNOWN1
    case 0xC2FBFE: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/unknown/C2/C2FCA6.asm:43 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC2FBFD.
    case 0xC2FBFF: cpu.execute_instruction<0x33>(0x000092, 2); return true;
    // src/unknown/C2/C2FCA6.asm:43 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC2FBFF.
    case 0xC2FC01: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000029, 2); else cpu.execute_instruction<0xC0>(0x001F29, 3); return true;
    // src/unknown/C2/C2FCA6.asm:44 AND #$001F
    case 0xC2FC02: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C2/C2FCA6.asm:44 AND #$001F
    // Overlapping static entry reached from 0xC2FC01.
    case 0xC2FC03: cpu.execute_instruction<0x1F>(0x0E8500, 4); return true;
    // src/unknown/C2/C2FCA6.asm:44 AND #$001F
    // Overlapping static entry reached from 0xC2FC02.
    case 0xC2FC04: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2FCA6.asm:45 STA @LOCAL00
    case 0xC2FC05: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2FCA6.asm:46 REP #PROC_FLAGS::INDEX8
    case 0xC2FC07: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2FCA6.asm:47 LDY @LOCAL02
    case 0xC2FC09: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2FCA6.asm:48 BEQ @UNKNOWN0
    case 0xC2FC0B: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/unknown/C2/C2FCA6.asm:49 LDA @VIRTUAL02
    case 0xC2FC0D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:50 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC0F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:50 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC11: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:50 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC12: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:50 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC14: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:51 TAX
    case 0xC2FC15: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:52 TYA
    case 0xC2FC16: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:53 LSR
    case 0xC2FC17: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:54 LSR
    case 0xC2FC18: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:55 STA @VIRTUAL02
    case 0xC2FC19: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2FCA6.asm:56 TYA
    case 0xC2FC1B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:57 SEC
    case 0xC2FC1C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:58 SBC @VIRTUAL02
    case 0xC2FC1D: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C2/C2FCA6.asm:59 STA BATTLE_SPRITE_PALETTE_EFFECT_STEPS,X
    case 0xC2FC1F: cpu.execute_instruction<0x9D>(0x00B3D1, 3); return true;
    // src/unknown/C2/C2FCA6.asm:60 LDA #$FFFF
    case 0xC2FC22: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C2FCA6.asm:60 LDA #$FFFF
    // Overlapping static entry reached from 0xC2FC22.
    case 0xC2FC24: cpu.execute_instruction<0xFF>(0xB0D19D, 4); return true;
    // src/unknown/C2/C2FCA6.asm:61 STA BATTLE_SPRITE_PALETTE_EFFECT_DELTAS,X
    case 0xC2FC25: cpu.execute_instruction<0x9D>(0x00B0D1, 3); return true;
    // src/unknown/C2/C2FCA6.asm:62 BRA @UNKNOWN1
    case 0xC2FC28: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C2/C2FCA6.asm:64 LDA @VIRTUAL02
    case 0xC2FC2A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:65 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC2C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:65 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC2E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:65 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC2F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:65 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC31: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:66 TAX
    case 0xC2FC32: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:67 STZ BATTLE_SPRITE_PALETTE_EFFECT_DELTAS,X
    case 0xC2FC33: cpu.execute_instruction<0x9E>(0x00B0D1, 3); return true;
    // src/unknown/C2/C2FCA6.asm:69 LDA @LOCAL01
    case 0xC2FC36: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C2FCA6.asm:70 STA @VIRTUAL04
    case 0xC2FC38: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2FCA6.asm:71 BEQ @UNKNOWN2
    case 0xC2FC3A: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/C2/C2FCA6.asm:72 LDA @LOCAL04
    case 0xC2FC3C: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2FCA6.asm:73 STA @VIRTUAL02
    case 0xC2FC3E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:74 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC40: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:74 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC42: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:74 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC43: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:74 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC45: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:75 TAX
    case 0xC2FC46: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:76 LDA @LOCAL01
    case 0xC2FC47: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C2FCA6.asm:77 STA @VIRTUAL04
    case 0xC2FC49: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2FCA6.asm:78 LSR
    case 0xC2FC4B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:79 LSR
    case 0xC2FC4C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:80 PHA
    case 0xC2FC4D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:81 LDA @VIRTUAL04
    case 0xC2FC4E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2FCA6.asm:82 PLY
    case 0xC2FC50: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:83 STY @VIRTUAL04
    case 0xC2FC51: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C2/C2FCA6.asm:84 SEC
    case 0xC2FC53: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:85 SBC @VIRTUAL04
    case 0xC2FC54: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C2/C2FCA6.asm:86 STA BATTLE_SPRITE_PALETTE_EFFECT_STEPS + 2,X
    case 0xC2FC56: cpu.execute_instruction<0x9D>(0x00B3D3, 3); return true;
    // src/unknown/C2/C2FCA6.asm:87 LDA #$FFE0
    case 0xC2FC59: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x00FFE0, 3); return true;
    // src/unknown/C2/C2FCA6.asm:87 LDA #$FFE0
    // Overlapping static entry reached from 0xC2FC59.
    case 0xC2FC5B: cpu.execute_instruction<0xFF>(0xB0D39D, 4); return true;
    // src/unknown/C2/C2FCA6.asm:88 STA BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 2,X
    case 0xC2FC5C: cpu.execute_instruction<0x9D>(0x00B0D3, 3); return true;
    // src/unknown/C2/C2FCA6.asm:89 BRA @UNKNOWN3
    case 0xC2FC5F: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C2/C2FCA6.asm:91 LDA @LOCAL04
    case 0xC2FC61: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2FCA6.asm:92 STA @VIRTUAL02
    case 0xC2FC63: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:93 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC65: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:93 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC67: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:93 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC68: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:93 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC6A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:94 TAX
    case 0xC2FC6B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:95 STZ BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 2,X
    case 0xC2FC6C: cpu.execute_instruction<0x9E>(0x00B0D3, 3); return true;
    // src/unknown/C2/C2FCA6.asm:97 LDA @LOCAL00
    case 0xC2FC6F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2FCA6.asm:98 BEQ @UNKNOWN4
    case 0xC2FC71: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/unknown/C2/C2FCA6.asm:99 LDA @VIRTUAL02
    case 0xC2FC73: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:100 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC75: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:100 OPTIMIZED_MULT @VIRTUAL04, 6
    // Overlapping static entry reached from 0xC2FCCA.
    case 0xC2FC76: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:100 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC77: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:100 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC78: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:100 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC7A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:101 TAX
    case 0xC2FC7B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:102 LDA @LOCAL00
    case 0xC2FC7C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2FCA6.asm:103 LSR
    case 0xC2FC7E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:104 LSR
    case 0xC2FC7F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:105 STA @VIRTUAL04
    case 0xC2FC80: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2FCA6.asm:106 LDA @LOCAL00
    case 0xC2FC82: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2FCA6.asm:107 SEC
    case 0xC2FC84: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:108 SBC @VIRTUAL04
    case 0xC2FC85: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C2/C2FCA6.asm:109 STA BATTLE_SPRITE_PALETTE_EFFECT_STEPS + 4,X
    case 0xC2FC87: cpu.execute_instruction<0x9D>(0x00B3D5, 3); return true;
    // src/unknown/C2/C2FCA6.asm:110 LDA #$FC00
    case 0xC2FC8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00FC00, 3); return true;
    // src/unknown/C2/C2FCA6.asm:110 LDA #$FC00
    // Overlapping static entry reached from 0xC2FC8A.
    case 0xC2FC8C: cpu.execute_instruction<0xFC>(0x00D59D, 3); return true;
    // src/unknown/C2/C2FCA6.asm:111 STA BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 4,X
    case 0xC2FC8D: cpu.execute_instruction<0x9D>(0x00B0D5, 3); return true;
    // src/unknown/C2/C2FCA6.asm:111 STA BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 4,X
    // Overlapping static entry reached from 0xC2FC8C.
    case 0xC2FC8F: cpu.execute_instruction<0xB0>(0x000080, 2); return true;
    // src/unknown/C2/C2FCA6.asm:112 BRA @UNKNOWN5
    case 0xC2FC90: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C2/C2FCA6.asm:112 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC2FC8F.
    case 0xC2FC91: cpu.execute_instruction<0x0C>(0x0002A5, 3); return true;
    // src/unknown/C2/C2FCA6.asm:114 LDA @VIRTUAL02
    case 0xC2FC92: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2FCA6.asm:114 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC2FCE9.
    case 0xC2FC93: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:115 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC94: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:115 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC96: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:115 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC97: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:115 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC99: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:116 TAX
    case 0xC2FC9A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:117 STZ BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 4,X
    case 0xC2FC9B: cpu.execute_instruction<0x9E>(0x00B0D5, 3); return true;
    // src/unknown/C2/C2FCA6.asm:119 LDA @VIRTUAL02
    case 0xC2FC9E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:120 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FCA0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:120 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FCA2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:120 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FCA3: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:120 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FCA5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:121 TAX
    case 0xC2FCA6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:122 STZ BATTLE_SPRITE_PALETTE_EFFECT_COUNTERS + 4,X
    case 0xC2FCA7: cpu.execute_instruction<0x9E>(0x00B255, 3); return true;
    // src/unknown/C2/C2FCA6.asm:123 STZ BATTLE_SPRITE_PALETTE_EFFECT_COUNTERS + 2,X
    case 0xC2FCAA: cpu.execute_instruction<0x9E>(0x00B253, 3); return true;
    // src/unknown/C2/C2FCA6.asm:124 STZ BATTLE_SPRITE_PALETTE_EFFECT_COUNTERS,X
    case 0xC2FCAD: cpu.execute_instruction<0x9E>(0x00B251, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2FCA6.asm:125 END_C_FUNCTION
    case 0xC2FCB0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2FCA6.asm:125 END_C_FUNCTION
    case 0xC2FCB1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2FD99.asm (unresolved).
bool execute_unresolved_c2_c2fd99_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2FD99.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2FCB2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2FD99.asm:11 END_STACK_VARS
    case 0xC2FCB4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2FD99.asm:11 END_STACK_VARS
    case 0xC2FCB5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2FD99.asm:11 END_STACK_VARS
    case 0xC2FCB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2FD99.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC2FCB6.
    case 0xC2FCB8: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2FD99.asm:11 END_STACK_VARS
    case 0xC2FCB9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:12 LDA #0
    case 0xC2FCBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:12 LDA #0
    // Overlapping static entry reached from 0xC2FCBA.
    case 0xC2FCBC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2FD99.asm:13 STA @VIRTUAL04
    case 0xC2FCBD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2FD99.asm:14 STA @LOCAL05
    case 0xC2FCBF: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C2/C2FD99.asm:15 JMP @UNKNOWN15
    case 0xC2FCC1: cpu.execute_instruction<0x4C>(0x00FE04, 3); return true;
    // src/unknown/C2/C2FD99.asm:17 LDA @VIRTUAL04
    case 0xC2FCC4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2FD99.asm:18 ASL
    case 0xC2FCC6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:19 CLC
    case 0xC2FCC7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:20 ADC #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_FRAMES_LEFT)
    case 0xC2FCC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C9, 2); else cpu.execute_instruction<0x69>(0x00B0C9, 3); return true;
    // src/unknown/C2/C2FD99.asm:20 ADC #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_FRAMES_LEFT)
    // Overlapping static entry reached from 0xC2FCC8.
    case 0xC2FCCA: cpu.execute_instruction<0xB0>(0x0000AA, 2); return true;
    // src/unknown/C2/C2FD99.asm:21 TAX
    case 0xC2FCCB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:22 LDA __BSS_START__,X
    case 0xC2FCCC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C2FD99.asm:23 BEQL @UNKNOWN14
    case 0xC2FCCF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C2FD99.asm:23 BEQL @UNKNOWN14
    case 0xC2FCD1: cpu.execute_instruction<0x4C>(0x00FDFE, 3); return true;
    // src/unknown/C2/C2FD99.asm:24 DEC
    case 0xC2FCD4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:25 STA __BSS_START__,X
    case 0xC2FCD5: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:26 LDA @VIRTUAL04
    case 0xC2FCD8: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:712 STA scratch
    // Macro caller: src/unknown/C2/C2FD99.asm:27 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC2FCDA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:713 ASL
    // Macro caller: src/unknown/C2/C2FD99.asm:27 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC2FCDC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:714 ADC scratch
    // Macro caller: src/unknown/C2/C2FD99.asm:27 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC2FCDD: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:715 ASL
    // Macro caller: src/unknown/C2/C2FD99.asm:27 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC2FCDF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:716 ASL
    // Macro caller: src/unknown/C2/C2FD99.asm:27 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC2FCE0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:717 ASL
    // Macro caller: src/unknown/C2/C2FD99.asm:27 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC2FCE1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:718 ASL
    // Macro caller: src/unknown/C2/C2FD99.asm:27 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC2FCE2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:719 ASL
    // Macro caller: src/unknown/C2/C2FD99.asm:27 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC2FCE3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:28 STA @LOCAL04
    case 0xC2FCE4: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:29 CLC
    case 0xC2FCE6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:30 ADC #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_DELTAS) + 6
    case 0xC2FCE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D7, 2); else cpu.execute_instruction<0x69>(0x00B0D7, 3); return true;
    // src/unknown/C2/C2FD99.asm:30 ADC #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_DELTAS) + 6
    // Overlapping static entry reached from 0xC2FCE7.
    case 0xC2FCE9: cpu.execute_instruction<0xB0>(0x0000A8, 2); return true;
    // src/unknown/C2/C2FD99.asm:31 TAY
    case 0xC2FCEA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:32 LDA @LOCAL04
    case 0xC2FCEB: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:33 CLC
    case 0xC2FCED: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:34 ADC #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_COUNTERS) + 6
    case 0xC2FCEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000057, 2); else cpu.execute_instruction<0x69>(0x00B257, 3); return true;
    // src/unknown/C2/C2FD99.asm:34 ADC #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_COUNTERS) + 6
    // Overlapping static entry reached from 0xC2FCEE.
    case 0xC2FCF0: cpu.execute_instruction<0xB2>(0x0000AA, 2); return true;
    // src/unknown/C2/C2FD99.asm:35 TAX
    case 0xC2FCF1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:36 STX @LOCAL03
    case 0xC2FCF2: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:37 LDA @LOCAL04
    case 0xC2FCF4: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:38 CLC
    case 0xC2FCF6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:39 ADC #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_STEPS) + 6
    case 0xC2FCF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D7, 2); else cpu.execute_instruction<0x69>(0x00B3D7, 3); return true;
    // src/unknown/C2/C2FD99.asm:39 ADC #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_STEPS) + 6
    // Overlapping static entry reached from 0xC2FCF7.
    case 0xC2FCF9: cpu.execute_instruction<0xB3>(0x000085, 2); return true;
    // src/unknown/C2/C2FD99.asm:40 STA @LOCAL02
    case 0xC2FCFA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:40 STA @LOCAL02
    // Overlapping static entry reached from 0xC2FCF9.
    case 0xC2FCFB: cpu.execute_instruction<0x12>(0x0000A5, 2); return true;
    // src/unknown/C2/C2FD99.asm:41 LDA @LOCAL05
    case 0xC2FCFC: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C2FD99.asm:41 LDA @LOCAL05
    // Overlapping static entry reached from 0xC2FCFB.
    case 0xC2FCFD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:42 STA @VIRTUAL04
    case 0xC2FCFE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C2/C2FD99.asm:43 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC2FD00: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C2/C2FD99.asm:43 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC2FD01: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C2/C2FD99.asm:43 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC2FD02: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C2/C2FD99.asm:43 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC2FD03: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C2/C2FD99.asm:43 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC2FD04: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:44 CLC
    case 0xC2FD05: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:45 ADC #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 12 + 1 * COLOUR_SIZE
    case 0xC2FD06: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000082, 2); else cpu.execute_instruction<0x69>(0x000382, 3); return true;
    // src/unknown/C2/C2FD99.asm:45 ADC #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 12 + 1 * COLOUR_SIZE
    // Overlapping static entry reached from 0xC2FD06.
    case 0xC2FD08: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // src/unknown/C2/C2FD99.asm:46 STA @VIRTUAL02
    case 0xC2FD09: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2FD99.asm:46 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2FD08.
    case 0xC2FD0A: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/C2/C2FD99.asm:47 LDA #1
    case 0xC2FD0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2FD99.asm:47 LDA #1
    // Overlapping static entry reached from 0xC2FD0B.
    case 0xC2FD0D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2FD99.asm:48 STA @LOCAL01
    case 0xC2FD0E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2FD99.asm:49 JMP @UNKNOWN12
    case 0xC2FD10: cpu.execute_instruction<0x4C>(0x00FDEB, 3); return true;
    // src/unknown/C2/C2FD99.asm:51 LDA __BSS_START__,Y
    case 0xC2FD13: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:52 BEQ @UNKNOWN5
    case 0xC2FD16: cpu.execute_instruction<0xF0>(0x000035, 2); return true;
    // src/unknown/C2/C2FD99.asm:53 STX @LOCAL04
    case 0xC2FD18: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:54 LDA @LOCAL02
    case 0xC2FD1A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:55 TAX
    case 0xC2FD1C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:56 LDA __BSS_START__,X
    case 0xC2FD1D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:57 CLC
    case 0xC2FD20: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:58 ADC (@LOCAL04)
    case 0xC2FD21: cpu.execute_instruction<0x72>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:59 STA (@LOCAL04)
    case 0xC2FD23: cpu.execute_instruction<0x92>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:60 BRA @UNKNOWN4
    case 0xC2FD25: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:62 STX @LOCAL04
    case 0xC2FD27: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:63 LDA @LOCAL00
    case 0xC2FD29: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2FD99.asm:64 SEC
    case 0xC2FD2B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:65 SBC BATTLE_SPRITE_PALETTE_EFFECT_SPEED
    case 0xC2FD2C: cpu.execute_instruction<0xED>(0x00B551, 3); return true;
    // src/unknown/C2/C2FD99.asm:66 STA (@LOCAL04)
    case 0xC2FD2F: cpu.execute_instruction<0x92>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:67 LDA @VIRTUAL02
    case 0xC2FD31: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2FD99.asm:68 STA @LOCAL04
    case 0xC2FD33: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:69 LDA __BSS_START__,Y
    case 0xC2FD35: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:70 CLC
    case 0xC2FD38: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:71 ADC (@LOCAL04)
    case 0xC2FD39: cpu.execute_instruction<0x72>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:72 STA (@LOCAL04)
    case 0xC2FD3B: cpu.execute_instruction<0x92>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:74 LDX @LOCAL03
    case 0xC2FD3D: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:75 LDA __BSS_START__,X
    case 0xC2FD3F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:76 STA @LOCAL00
    case 0xC2FD42: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2FD99.asm:77 LDA BATTLE_SPRITE_PALETTE_EFFECT_SPEED
    case 0xC2FD44: cpu.execute_instruction<0xAD>(0x00B551, 3); return true;
    // src/unknown/C2/C2FD99.asm:78 CMP @LOCAL00
    case 0xC2FD47: cpu.execute_instruction<0xC5>(0x00000E, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2FD99.asm:79 BLTEQ @UNKNOWN3
    case 0xC2FD49: cpu.execute_instruction<0x90>(0x0000DC, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2FD99.asm:79 BLTEQ @UNKNOWN3
    case 0xC2FD4B: cpu.execute_instruction<0xF0>(0x0000DA, 2); return true;
    // src/unknown/C2/C2FD99.asm:81 INY
    case 0xC2FD4D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:82 INY
    case 0xC2FD4E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:83 INX
    case 0xC2FD4F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:84 INX
    case 0xC2FD50: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:85 STX @LOCAL04
    case 0xC2FD51: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:86 LDA @LOCAL02
    case 0xC2FD53: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:87 INC
    case 0xC2FD55: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:88 INC
    case 0xC2FD56: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:89 STA @LOCAL03
    case 0xC2FD57: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:90 LDA __BSS_START__,Y
    case 0xC2FD59: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:91 BEQ @UNKNOWN8
    case 0xC2FD5C: cpu.execute_instruction<0xF0>(0x000035, 2); return true;
    // src/unknown/C2/C2FD99.asm:92 STX @LOCAL02
    case 0xC2FD5E: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:93 LDA @LOCAL03
    case 0xC2FD60: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:94 TAX
    case 0xC2FD62: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:95 LDA __BSS_START__,X
    case 0xC2FD63: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:96 CLC
    case 0xC2FD66: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:97 ADC (@LOCAL02)
    case 0xC2FD67: cpu.execute_instruction<0x72>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:98 STA (@LOCAL02)
    case 0xC2FD69: cpu.execute_instruction<0x92>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:99 BRA @UNKNOWN7
    case 0xC2FD6B: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:101 STX @LOCAL02
    case 0xC2FD6D: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:102 LDA @LOCAL00
    case 0xC2FD6F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2FD99.asm:103 SEC
    case 0xC2FD71: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:104 SBC BATTLE_SPRITE_PALETTE_EFFECT_SPEED
    case 0xC2FD72: cpu.execute_instruction<0xED>(0x00B551, 3); return true;
    // src/unknown/C2/C2FD99.asm:105 STA (@LOCAL02)
    case 0xC2FD75: cpu.execute_instruction<0x92>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:106 LDA @VIRTUAL02
    case 0xC2FD77: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2FD99.asm:107 STA @LOCAL02
    case 0xC2FD79: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:108 LDA __BSS_START__,Y
    case 0xC2FD7B: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:109 CLC
    case 0xC2FD7E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:110 ADC (@LOCAL02)
    case 0xC2FD7F: cpu.execute_instruction<0x72>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:111 STA (@LOCAL02)
    case 0xC2FD81: cpu.execute_instruction<0x92>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:113 LDX @LOCAL04
    case 0xC2FD83: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:114 LDA __BSS_START__,X
    case 0xC2FD85: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:115 STA @LOCAL00
    case 0xC2FD88: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2FD99.asm:116 LDA BATTLE_SPRITE_PALETTE_EFFECT_SPEED
    case 0xC2FD8A: cpu.execute_instruction<0xAD>(0x00B551, 3); return true;
    // src/unknown/C2/C2FD99.asm:117 CMP @LOCAL00
    case 0xC2FD8D: cpu.execute_instruction<0xC5>(0x00000E, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2FD99.asm:118 BLTEQ @UNKNOWN6
    case 0xC2FD8F: cpu.execute_instruction<0x90>(0x0000DC, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2FD99.asm:118 BLTEQ @UNKNOWN6
    case 0xC2FD91: cpu.execute_instruction<0xF0>(0x0000DA, 2); return true;
    // src/unknown/C2/C2FD99.asm:120 INY
    case 0xC2FD93: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:121 INY
    case 0xC2FD94: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:122 INX
    case 0xC2FD95: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:123 INX
    case 0xC2FD96: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:124 STX @LOCAL04
    case 0xC2FD97: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:125 LDA @LOCAL03
    case 0xC2FD99: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:126 INC
    case 0xC2FD9B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:127 INC
    case 0xC2FD9C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:128 STA @LOCAL02
    case 0xC2FD9D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:129 LDA __BSS_START__,Y
    case 0xC2FD9F: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:130 BEQ @UNKNOWN11
    case 0xC2FDA2: cpu.execute_instruction<0xF0>(0x000035, 2); return true;
    // src/unknown/C2/C2FD99.asm:131 STX @LOCAL03
    case 0xC2FDA4: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:132 LDA @LOCAL02
    case 0xC2FDA6: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:133 TAX
    case 0xC2FDA8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:134 LDA __BSS_START__,X
    case 0xC2FDA9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:135 CLC
    case 0xC2FDAC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:136 ADC (@LOCAL03)
    case 0xC2FDAD: cpu.execute_instruction<0x72>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:137 STA (@LOCAL03)
    case 0xC2FDAF: cpu.execute_instruction<0x92>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:138 BRA @UNKNOWN10
    case 0xC2FDB1: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:140 STX @LOCAL03
    case 0xC2FDB3: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:141 LDA @LOCAL00
    case 0xC2FDB5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2FD99.asm:142 SEC
    case 0xC2FDB7: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:143 SBC BATTLE_SPRITE_PALETTE_EFFECT_SPEED
    case 0xC2FDB8: cpu.execute_instruction<0xED>(0x00B551, 3); return true;
    // src/unknown/C2/C2FD99.asm:144 STA (@LOCAL03)
    case 0xC2FDBB: cpu.execute_instruction<0x92>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:145 LDA @VIRTUAL02
    case 0xC2FDBD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2FD99.asm:146 STA @LOCAL03
    case 0xC2FDBF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:147 LDA __BSS_START__,Y
    case 0xC2FDC1: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:148 CLC
    case 0xC2FDC4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:149 ADC (@LOCAL03)
    case 0xC2FDC5: cpu.execute_instruction<0x72>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:150 STA (@LOCAL03)
    case 0xC2FDC7: cpu.execute_instruction<0x92>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:152 LDX @LOCAL04
    case 0xC2FDC9: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:153 LDA __BSS_START__,X
    case 0xC2FDCB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:154 STA @LOCAL00
    case 0xC2FDCE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2FD99.asm:155 LDA BATTLE_SPRITE_PALETTE_EFFECT_SPEED
    case 0xC2FDD0: cpu.execute_instruction<0xAD>(0x00B551, 3); return true;
    // src/unknown/C2/C2FD99.asm:156 CMP @LOCAL00
    case 0xC2FDD3: cpu.execute_instruction<0xC5>(0x00000E, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2FD99.asm:157 BLTEQ @UNKNOWN9
    case 0xC2FDD5: cpu.execute_instruction<0x90>(0x0000DC, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2FD99.asm:157 BLTEQ @UNKNOWN9
    case 0xC2FDD7: cpu.execute_instruction<0xF0>(0x0000DA, 2); return true;
    // src/unknown/C2/C2FD99.asm:159 INY
    case 0xC2FDD9: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:160 INY
    case 0xC2FDDA: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:161 INX
    case 0xC2FDDB: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:162 INX
    case 0xC2FDDC: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:163 STX @LOCAL03
    case 0xC2FDDD: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:164 LDA @LOCAL02
    case 0xC2FDDF: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:165 INC
    case 0xC2FDE1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:166 INC
    case 0xC2FDE2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:167 STA @LOCAL02
    case 0xC2FDE3: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:168 INC @VIRTUAL02
    case 0xC2FDE5: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2FD99.asm:169 INC @VIRTUAL02
    case 0xC2FDE7: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2FD99.asm:170 INC @LOCAL01
    case 0xC2FDE9: cpu.execute_instruction<0xE6>(0x000010, 2); return true;
    // src/unknown/C2/C2FD99.asm:172 LDA @LOCAL01
    case 0xC2FDEB: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C2FD99.asm:173 CMP #16
    case 0xC2FDED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/unknown/C2/C2FD99.asm:173 CMP #16
    // Overlapping static entry reached from 0xC2FDED.
    case 0xC2FDEF: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C2/C2FD99.asm:174 BCCL @UNKNOWN2
    case 0xC2FDF0: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C2/C2FD99.asm:174 BCCL @UNKNOWN2
    case 0xC2FDF2: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C2/C2FD99.asm:174 BCCL @UNKNOWN2
    case 0xC2FDF4: cpu.execute_instruction<0x4C>(0x00FD13, 3); return true;
    // src/unknown/C2/C2FD99.asm:175 LDA #16
    case 0xC2FDF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C2/C2FD99.asm:175 LDA #16
    // Overlapping static entry reached from 0xC2FDF7.
    case 0xC2FDF9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2FD99.asm:176 JSL UNKNOWN_C0856B
    case 0xC2FDFA: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/unknown/C2/C2FD99.asm:178 INC @VIRTUAL04
    case 0xC2FDFE: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C2/C2FD99.asm:179 LDA @VIRTUAL04
    case 0xC2FE00: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2FD99.asm:180 STA @LOCAL05
    case 0xC2FE02: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C2/C2FD99.asm:182 LDA @VIRTUAL04
    case 0xC2FE04: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2FD99.asm:183 CMP #4
    case 0xC2FE06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C2/C2FD99.asm:183 CMP #4
    // Overlapping static entry reached from 0xC2FE06.
    case 0xC2FE08: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C2/C2FD99.asm:184 BCCL @UNKNOWN0
    case 0xC2FE09: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C2/C2FD99.asm:184 BCCL @UNKNOWN0
    case 0xC2FE0B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C2/C2FD99.asm:184 BCCL @UNKNOWN0
    case 0xC2FE0D: cpu.execute_instruction<0x4C>(0x00FCC4, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2FD99.asm:185 END_C_FUNCTION
    case 0xC2FE10: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2FD99.asm:185 END_C_FUNCTION
    case 0xC2FE11: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2FEF9.asm (unresolved).
bool execute_unresolved_c2_c2fef9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2FEF9.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2FE12: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2FEF9.asm:8 END_STACK_VARS
    case 0xC2FE14: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2FEF9.asm:8 END_STACK_VARS
    case 0xC2FE15: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2FEF9.asm:8 END_STACK_VARS
    case 0xC2FE16: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2FEF9.asm:8 END_STACK_VARS
    case 0xC2FE17: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2FEF9.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2FE17.
    case 0xC2FE19: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2FEF9.asm:8 END_STACK_VARS
    case 0xC2FE1A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2FEF9.asm:8 END_STACK_VARS
    case 0xC2FE1B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2FEF9.asm:9 TAX
    case 0xC2FE1C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FEF9.asm:10 TXY
    case 0xC2FE1D: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C2/C2FEF9.asm:11 TXA
    case 0xC2FE1E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2FEF9.asm:12 DEC
    case 0xC2FE1F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2FEF9.asm:13 STA @LOCAL01
    case 0xC2FE20: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2FEF9.asm:14 CPY #0
    case 0xC2FE22: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C2/C2FEF9.asm:14 CPY #0
    // Overlapping static entry reached from 0xC2FE22.
    case 0xC2FE24: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2FEF9.asm:15 BEQ @UNKNOWN0
    case 0xC2FE25: cpu.execute_instruction<0xF0>(0x000065, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2FEF9.asm:16 LOADPTR UNKNOWN_C3F8F1, @VIRTUAL06
    case 0xC2FE27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000036, 2); else cpu.execute_instruction<0xA9>(0x00F436, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2FEF9.asm:16 LOADPTR UNKNOWN_C3F8F1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2FE27.
    case 0xC2FE29: cpu.execute_instruction<0xF4>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2FEF9.asm:16 LOADPTR UNKNOWN_C3F8F1, @VIRTUAL06
    case 0xC2FE2A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2FEF9.asm:16 LOADPTR UNKNOWN_C3F8F1, @VIRTUAL06
    case 0xC2FE2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2FEF9.asm:16 LOADPTR UNKNOWN_C3F8F1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2FE2C.
    case 0xC2FE2E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C2FEF9.asm:16 LOADPTR UNKNOWN_C3F8F1, @VIRTUAL06
    case 0xC2FE2F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C2FEF9.asm:17 LDA @LOCAL01
    case 0xC2FE31: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C2/C2FEF9.asm:18 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC2FE33: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C2/C2FEF9.asm:18 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC2FE34: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C2/C2FEF9.asm:18 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC2FE35: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C2/C2FEF9.asm:18 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC2FE36: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C2/C2FEF9.asm:18 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC2FE37: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FEF9.asm:19 CLC
    case 0xC2FE38: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FEF9.asm:20 ADC @VIRTUAL06
    case 0xC2FE39: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C2FEF9.asm:21 STA @VIRTUAL06
    case 0xC2FE3B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C2FEF9.asm:22 STA @LOCAL00
    case 0xC2FE3D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2FEF9.asm:23 LDA @VIRTUAL06+2
    case 0xC2FE3F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C2/C2FEF9.asm:24 STA @LOCAL00+2
    case 0xC2FE41: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2FEF9.asm:25 LDX #BPP4PALETTE_SIZE
    case 0xC2FE43: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C2/C2FEF9.asm:25 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC2FE43.
    case 0xC2FE45: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2FEF9.asm:26 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 12
    case 0xC2FE46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000380, 3); return true;
    // src/unknown/C2/C2FEF9.asm:26 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 12
    // Overlapping static entry reached from 0xC2FE46.
    case 0xC2FE48: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/unknown/C2/C2FEF9.asm:27 JSL MEMCPY16
    case 0xC2FE49: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C2/C2FEF9.asm:27 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2FE48.
    case 0xC2FE4A: cpu.execute_instruction<0xC3>(0x00008E, 2); return true;
    // src/unknown/C2/C2FEF9.asm:27 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2FE4A.
    case 0xC2FE4C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2FEF9.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2FE4D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2FEF9.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC2FE4C.
    case 0xC2FE4E: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2FEF9.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2FE4F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2FEF9.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC2FE4E.
    case 0xC2FE50: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2FEF9.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2FE51: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2FEF9.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2FE53: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2FEF9.asm:29 LDX #BPP4PALETTE_SIZE
    case 0xC2FE55: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C2/C2FEF9.asm:29 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC2FE55.
    case 0xC2FE57: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2FEF9.asm:30 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 13
    case 0xC2FE58: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A0, 2); else cpu.execute_instruction<0xA9>(0x0003A0, 3); return true;
    // src/unknown/C2/C2FEF9.asm:30 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 13
    // Overlapping static entry reached from 0xC2FE58.
    case 0xC2FE5A: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/unknown/C2/C2FEF9.asm:31 JSL MEMCPY16
    case 0xC2FE5B: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C2/C2FEF9.asm:31 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2FE5A.
    case 0xC2FE5C: cpu.execute_instruction<0xC3>(0x00008E, 2); return true;
    // src/unknown/C2/C2FEF9.asm:31 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2FE5C.
    case 0xC2FE5E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2FEF9.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2FE5F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2FEF9.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC2FE5E.
    case 0xC2FE60: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2FEF9.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2FE61: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2FEF9.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC2FE60.
    case 0xC2FE62: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2FEF9.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2FE63: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2FEF9.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2FE65: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2FEF9.asm:33 LDX #BPP4PALETTE_SIZE
    case 0xC2FE67: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C2/C2FEF9.asm:33 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC2FE67.
    case 0xC2FE69: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2FEF9.asm:34 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 14
    case 0xC2FE6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0003C0, 3); return true;
    // src/unknown/C2/C2FEF9.asm:34 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 14
    // Overlapping static entry reached from 0xC2FE6A.
    case 0xC2FE6C: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/unknown/C2/C2FEF9.asm:35 JSL MEMCPY16
    case 0xC2FE6D: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C2/C2FEF9.asm:35 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2FE6C.
    case 0xC2FE6E: cpu.execute_instruction<0xC3>(0x00008E, 2); return true;
    // src/unknown/C2/C2FEF9.asm:35 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2FE6E.
    case 0xC2FE70: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2FEF9.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2FE71: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2FEF9.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC2FE70.
    case 0xC2FE72: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2FEF9.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2FE73: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2FEF9.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC2FE72.
    case 0xC2FE74: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2FEF9.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2FE75: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2FEF9.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2FE77: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2FEF9.asm:37 LDX #BPP4PALETTE_SIZE
    case 0xC2FE79: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C2/C2FEF9.asm:37 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC2FE79.
    case 0xC2FE7B: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2FEF9.asm:38 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 15
    case 0xC2FE7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0003E0, 3); return true;
    // src/unknown/C2/C2FEF9.asm:38 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 15
    // Overlapping static entry reached from 0xC2FE7C.
    case 0xC2FE7E: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/unknown/C2/C2FEF9.asm:39 JSL MEMCPY16
    case 0xC2FE7F: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C2/C2FEF9.asm:39 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2FE7E.
    case 0xC2FE80: cpu.execute_instruction<0xC3>(0x00008E, 2); return true;
    // src/unknown/C2/C2FEF9.asm:39 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2FE80.
    case 0xC2FE82: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0010A9, 3); return true;
    // src/unknown/C2/C2FEF9.asm:40 LDA #16
    case 0xC2FE83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C2/C2FEF9.asm:40 LDA #16
    // Overlapping static entry reached from 0xC2FE82.
    case 0xC2FE84: cpu.execute_instruction<0x10>(0x000000, 2); return true;
    // src/unknown/C2/C2FEF9.asm:40 LDA #16
    // Overlapping static entry reached from 0xC2FE83.
    case 0xC2FE85: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2FEF9.asm:41 JSL UNKNOWN_C0856B
    case 0xC2FE86: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/unknown/C2/C2FEF9.asm:42 BRA @UNKNOWN3
    case 0xC2FE8A: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // src/unknown/C2/C2FEF9.asm:44 LDA #BPP4PALETTE_SIZE * 4
    case 0xC2FE8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/unknown/C2/C2FEF9.asm:44 LDA #BPP4PALETTE_SIZE * 4
    // Overlapping static entry reached from 0xC2FE8C.
    case 0xC2FE8E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2FEF9.asm:45 STA @LOCAL01
    case 0xC2FE8F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2FEF9.asm:46 BRA @UNKNOWN2
    case 0xC2FE91: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C2/C2FEF9.asm:48 ASL
    case 0xC2FE93: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FEF9.asm:49 TAX
    case 0xC2FE94: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FEF9.asm:50 LDA PALETTES,X
    case 0xC2FE95: cpu.execute_instruction<0xBD>(0x000200, 3); return true;
    // src/unknown/C2/C2FEF9.asm:51 LSR
    case 0xC2FE98: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FEF9.asm:52 LSR ;divide entire colour by two. normally, this would cause the lower two bits of each channel to bleed into the next, but...
    case 0xC2FE99: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FEF9.asm:53 AND #(7 << 10) +(7 << 5) + 7 ;we keep only the bottom 3 bits of each colour channel. combined, this just darkens the colour.
    case 0xC2FE9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E7, 2); else cpu.execute_instruction<0x29>(0x001CE7, 3); return true;
    // src/unknown/C2/C2FEF9.asm:53 AND #(7 << 10) +(7 << 5) + 7 ;we keep only the bottom 3 bits of each colour channel. combined, this just darkens the colour.
    // Overlapping static entry reached from 0xC2FE9A.
    case 0xC2FE9C: cpu.execute_instruction<0x1C>(0x00809D, 3); return true;
    // src/unknown/C2/C2FEF9.asm:54 STA PALETTES + (BPP4PALETTE_SIZE * 4),X
    case 0xC2FE9D: cpu.execute_instruction<0x9D>(0x000280, 3); return true;
    // src/unknown/C2/C2FEF9.asm:54 STA PALETTES + (BPP4PALETTE_SIZE * 4),X
    // Overlapping static entry reached from 0xC2FE9C.
    case 0xC2FE9F: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/unknown/C2/C2FEF9.asm:55 LDA @LOCAL01
    case 0xC2FEA0: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2FEF9.asm:56 INC
    case 0xC2FEA2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2FEF9.asm:57 STA @LOCAL01
    case 0xC2FEA3: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2FEF9.asm:59 CMP #BPP4PALETTE_SIZE * 6
    case 0xC2FEA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C0, 2); else cpu.execute_instruction<0xC9>(0x0000C0, 3); return true;
    // src/unknown/C2/C2FEF9.asm:59 CMP #BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC2FEA5.
    case 0xC2FEA7: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2FEF9.asm:60 BCC @UNKNOWN1
    case 0xC2FEA8: cpu.execute_instruction<0x90>(0x0000E9, 2); return true;
    // src/unknown/C2/C2FEF9.asm:61 LDA #16
    case 0xC2FEAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C2/C2FEF9.asm:61 LDA #16
    // Overlapping static entry reached from 0xC2FEAA.
    case 0xC2FEAC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2FEF9.asm:62 JSL UNKNOWN_C0856B
    case 0xC2FEAD: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2FEF9.asm:64 END_C_FUNCTION
    case 0xC2FEB1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2FEF9.asm:64 END_C_FUNCTION
    case 0xC2FEB2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2FF9A.asm (unresolved).
bool execute_unresolved_c2_c2ff9a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2FF9A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2FEB3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C2FF9A.asm:6 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC2FEB5: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C2/C2FF9A.asm:7 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC2FEB8: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C2/C2FF9A.asm:8 JSL LOAD_SECTOR_ATTRS
    case 0xC2FEBB: cpu.execute_instruction<0x22>(0xC00AB3, 4); return true;
    // src/unknown/C2/C2FF9A.asm:9 AND #$0007
    case 0xC2FEBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C2/C2FF9A.asm:9 AND #$0007
    // Overlapping static entry reached from 0xC2FEBF.
    case 0xC2FEC1: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2FF9A.asm:10 CMP #3
    case 0xC2FEC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C2/C2FF9A.asm:10 CMP #3
    // Overlapping static entry reached from 0xC2FEC2.
    case 0xC2FEC4: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2FF9A.asm:11 BCC @MINISPRITES
    case 0xC2FEC5: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/unknown/C2/C2FF9A.asm:12 LDA #1
    case 0xC2FEC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2FF9A.asm:12 LDA #1
    // Overlapping static entry reached from 0xC2FEC7.
    case 0xC2FEC9: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C2FF9A.asm:13 BRA @RETURN
    case 0xC2FECA: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C2/C2FF9A.asm:15 LDA #0
    case 0xC2FECC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2FF9A.asm:15 LDA #0
    // Overlapping static entry reached from 0xC2FECC.
    case 0xC2FECE: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2FF9A.asm:17 END_C_FUNCTION
    case 0xC2FECF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
