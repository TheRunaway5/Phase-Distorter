// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/unknown/C2/C2DF2E.asm (unresolved).
bool execute_unresolved_c2_c2df2e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2DF2E.asm:3 BEGIN_C_FUNCTION
    case 0xC2DF2E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2DF2E.asm:15 END_STACK_VARS
    case 0xC2DF30: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2DF2E.asm:15 END_STACK_VARS
    case 0xC2DF31: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2DF2E.asm:15 END_STACK_VARS
    case 0xC2DF32: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2DF2E.asm:15 END_STACK_VARS
    case 0xC2DF33: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2DF2E.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC2DF33.
    case 0xC2DF35: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2DF2E.asm:15 END_STACK_VARS
    case 0xC2DF36: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2DF2E.asm:15 END_STACK_VARS
    case 0xC2DF37: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:16 STY @LOCAL06
    case 0xC2DF38: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:16 STY @LOCAL06
    // Overlapping static entry reached from 0xC2DF35.
    case 0xC2DF39: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:17 STX @VIRTUAL02
    case 0xC2DF3A: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C2/C2DF2E.asm:18 STA @LOCAL05
    case 0xC2DF3C: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:19 LDA @VIRTUAL02
    case 0xC2DF3E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2DF2E.asm:20 CMP #$FFFF
    case 0xC2DF40: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C2DF2E.asm:20 CMP #$FFFF
    // Overlapping static entry reached from 0xC2DF40.
    case 0xC2DF42: cpu.execute_instruction<0xFF>(0xA504F0, 4); return true;
    // src/unknown/C2/C2DF2E.asm:21 BEQ @UNKNOWN0
    case 0xC2DF43: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C2/C2DF2E.asm:22 LDA @VIRTUAL02
    case 0xC2DF45: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2DF2E.asm:22 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC2DF42.
    case 0xC2DF46: cpu.execute_instruction<0x02>(0x0000D0, 2); return true;
    // src/unknown/C2/C2DF2E.asm:23 BNE @UNKNOWN1
    case 0xC2DF47: cpu.execute_instruction<0xD0>(0x00001F, 2); return true;
    // src/unknown/C2/C2DF2E.asm:25 LDA @LOCAL06
    case 0xC2DF49: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:26 ASL
    case 0xC2DF4B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:27 STA @LOCAL06
    case 0xC2DF4C: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:28 CLC
    case 0xC2DF4E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:29 ADC @LOCAL05
    case 0xC2DF4F: cpu.execute_instruction<0x65>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:30 TAX
    case 0xC2DF51: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:31 LDA @VIRTUAL02
    case 0xC2DF52: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2DF2E.asm:32 STA __BSS_START__ + loaded_bg_data::palette,X
    case 0xC2DF54: cpu.execute_instruction<0x9D>(0x00000C, 3); return true;
    // src/unknown/C2/C2DF2E.asm:33 LDY #loaded_bg_data::palette_pointer
    case 0xC2DF57: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C2/C2DF2E.asm:33 LDY #loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2DF57.
    case 0xC2DF59: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C2DF2E.asm:34 LDA @LOCAL06
    case 0xC2DF5A: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:35 CLC
    case 0xC2DF5C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:36 ADC (@LOCAL05),Y
    case 0xC2DF5D: cpu.execute_instruction<0x71>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:37 TAX
    case 0xC2DF5F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:38 LDA @VIRTUAL02
    case 0xC2DF60: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2DF2E.asm:39 STA __BSS_START__,X
    case 0xC2DF62: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2DF2E.asm:40 JMP @UNKNOWN7
    case 0xC2DF65: cpu.execute_instruction<0x4C>(0x00E08C, 3); return true;
    // src/unknown/C2/C2DF2E.asm:40 JMP @UNKNOWN7
    // Overlapping static entry reached from 0xC2DFBC.
    case 0xC2DF66: cpu.execute_instruction<0x8C>(0x00A5E0, 3); return true;
    // src/unknown/C2/C2DF2E.asm:42 LDA @VIRTUAL02
    case 0xC2DF68: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2DF2E.asm:42 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC2DF66.
    case 0xC2DF69: cpu.execute_instruction<0x02>(0x0000C9, 2); return true;
    // src/unknown/C2/C2DF2E.asm:43 CMP #$0100
    case 0xC2DF6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C2/C2DF2E.asm:43 CMP #$0100
    // Overlapping static entry reached from 0xC2DF6A.
    case 0xC2DF6C: cpu.execute_instruction<0x01>(0x0000D0, 2); return true;
    // src/unknown/C2/C2DF2E.asm:44 BNE @UNKNOWN2
    case 0xC2DF6D: cpu.execute_instruction<0xD0>(0x000024, 2); return true;
    // src/unknown/C2/C2DF2E.asm:44 BNE @UNKNOWN2
    // Overlapping static entry reached from 0xC2DF6C.
    case 0xC2DF6E: cpu.execute_instruction<0x24>(0x0000A5, 2); return true;
    // src/unknown/C2/C2DF2E.asm:45 LDA @LOCAL06
    case 0xC2DF6F: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:45 LDA @LOCAL06
    // Overlapping static entry reached from 0xC2DF6E.
    case 0xC2DF70: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:46 ASL
    case 0xC2DF71: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:47 STA @LOCAL04
    case 0xC2DF72: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2DF2E.asm:48 CLC
    case 0xC2DF74: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:49 ADC @LOCAL05
    case 0xC2DF75: cpu.execute_instruction<0x65>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:50 TAX
    case 0xC2DF77: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:51 LDY __BSS_START__ + loaded_bg_data::palette2,X
    case 0xC2DF78: cpu.execute_instruction<0xBC>(0x00002C, 3); return true;
    // src/unknown/C2/C2DF2E.asm:52 STY @LOCAL03
    case 0xC2DF7B: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C2/C2DF2E.asm:53 TYA
    case 0xC2DF7D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:54 STA __BSS_START__ + loaded_bg_data::palette,X
    case 0xC2DF7E: cpu.execute_instruction<0x9D>(0x00000C, 3); return true;
    // src/unknown/C2/C2DF2E.asm:55 LDY #loaded_bg_data::palette_pointer
    case 0xC2DF81: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C2/C2DF2E.asm:55 LDY #loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2DF81.
    case 0xC2DF83: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C2DF2E.asm:56 LDA @LOCAL04
    case 0xC2DF84: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2DF2E.asm:57 CLC
    case 0xC2DF86: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:58 ADC (@LOCAL05),Y
    case 0xC2DF87: cpu.execute_instruction<0x71>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:59 TAX
    case 0xC2DF89: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:60 LDY @LOCAL03
    case 0xC2DF8A: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C2/C2DF2E.asm:61 TYA
    case 0xC2DF8C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:62 STA __BSS_START__,X
    case 0xC2DF8D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2DF2E.asm:63 JMP @UNKNOWN7
    case 0xC2DF90: cpu.execute_instruction<0x4C>(0x00E08C, 3); return true;
    // src/unknown/C2/C2DF2E.asm:65 LDA @LOCAL06
    case 0xC2DF93: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:66 ASL
    case 0xC2DF95: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:67 CLC
    case 0xC2DF96: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:68 ADC @LOCAL05
    case 0xC2DF97: cpu.execute_instruction<0x65>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:69 STA @VIRTUAL04
    case 0xC2DF99: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2DF2E.asm:70 STA @LOCAL03
    case 0xC2DF9B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C2DF2E.asm:71 LDX @VIRTUAL04
    case 0xC2DF9D: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2DF2E.asm:72 LDA __BSS_START__ + loaded_bg_data::palette2,X
    case 0xC2DF9F: cpu.execute_instruction<0xBD>(0x00002C, 3); return true;
    // src/unknown/C2/C2DF2E.asm:73 STA @LOCAL04
    case 0xC2DFA2: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2DF2E.asm:74 AND #$001F
    case 0xC2DFA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C2/C2DF2E.asm:74 AND #$001F
    // Overlapping static entry reached from 0xC2DFA4.
    case 0xC2DFA6: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2DF2E.asm:75 TAX
    case 0xC2DFA7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:76 STX @LOCAL02
    case 0xC2DFA8: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C2/C2DF2E.asm:77 LDA @LOCAL04
    case 0xC2DFAA: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2DF2E.asm:78 LSR
    case 0xC2DFAC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:79 LSR
    case 0xC2DFAD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:80 LSR
    case 0xC2DFAE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:81 LSR
    case 0xC2DFAF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:82 LSR
    case 0xC2DFB0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:83 AND #$001F
    case 0xC2DFB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C2/C2DF2E.asm:83 AND #$001F
    // Overlapping static entry reached from 0xC2DFB1.
    case 0xC2DFB3: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C2/C2DF2E.asm:84 TAY
    case 0xC2DFB4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:85 STY @LOCAL01
    case 0xC2DFB5: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C2/C2DF2E.asm:86 SEP #PROC_FLAGS::ACCUM8
    case 0xC2DFB7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2DF2E.asm:87 LDA #10
    case 0xC2DFB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00E20A, 3); return true;
    // src/unknown/C2/C2DF2E.asm:88 SEP #PROC_FLAGS::INDEX8
    case 0xC2DFBB: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C2/C2DF2E.asm:88 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC2DFB9.
    case 0xC2DFBC: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C2/C2DF2E.asm:89 TAY
    case 0xC2DFBD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:90 REP #PROC_FLAGS::ACCUM8
    case 0xC2DFBE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2DF2E.asm:91 LDA @LOCAL04
    case 0xC2DFC0: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2DF2E.asm:92 JSL ASR8_UNKNOWN1
    case 0xC2DFC2: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/unknown/C2/C2DF2E.asm:93 AND #$001F
    case 0xC2DFC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C2/C2DF2E.asm:93 AND #$001F
    // Overlapping static entry reached from 0xC2DFC6.
    case 0xC2DFC8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2DF2E.asm:94 STA @LOCAL04
    case 0xC2DFC9: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2DF2E.asm:95 REP #PROC_FLAGS::INDEX8
    case 0xC2DFCB: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2DF2E.asm:96 LDY @VIRTUAL02
    case 0xC2DFCD: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C2/C2DF2E.asm:97 LDX @LOCAL02
    case 0xC2DFCF: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C2/C2DF2E.asm:98 TXA
    case 0xC2DFD1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:99 JSL MULT16
    case 0xC2DFD2: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C2/C2DF2E.asm:100 XBA
    case 0xC2DFD6: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:101 AND #$00FF
    case 0xC2DFD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DF2E.asm:101 AND #$00FF
    // Overlapping static entry reached from 0xC2DFD7.
    case 0xC2DFD9: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2DF2E.asm:102 TAX
    case 0xC2DFDA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:103 STX @LOCAL02
    case 0xC2DFDB: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C2/C2DF2E.asm:104 LDY @LOCAL01
    case 0xC2DFDD: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C2/C2DF2E.asm:105 TYA
    case 0xC2DFDF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:106 LDY @VIRTUAL02
    case 0xC2DFE0: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C2/C2DF2E.asm:107 JSL MULT16
    case 0xC2DFE2: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C2/C2DF2E.asm:108 XBA
    case 0xC2DFE6: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:109 AND #$00FF
    case 0xC2DFE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DF2E.asm:109 AND #$00FF
    // Overlapping static entry reached from 0xC2DFE7.
    case 0xC2DFE9: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C2/C2DF2E.asm:110 TAY
    case 0xC2DFEA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:111 STY @LOCAL01
    case 0xC2DFEB: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C2/C2DF2E.asm:112 LDY @VIRTUAL02
    case 0xC2DFED: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C2/C2DF2E.asm:113 LDA @LOCAL04
    case 0xC2DFEF: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2DF2E.asm:114 JSL MULT16
    case 0xC2DFF1: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C2/C2DF2E.asm:115 XBA
    case 0xC2DFF5: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:116 AND #$00FF
    case 0xC2DFF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DF2E.asm:116 AND #$00FF
    // Overlapping static entry reached from 0xC2DFF6.
    case 0xC2DFF8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2DF2E.asm:117 STA @LOCAL00
    case 0xC2DFF9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2DF2E.asm:118 SEP #PROC_FLAGS::ACCUM8
    case 0xC2DFFB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2DF2E.asm:119 LDA #10
    case 0xC2DFFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00E20A, 3); return true;
    // src/unknown/C2/C2DF2E.asm:120 SEP #PROC_FLAGS::INDEX8
    case 0xC2DFFF: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C2/C2DF2E.asm:120 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC2DFFD.
    case 0xC2E000: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C2/C2DF2E.asm:121 TAY
    case 0xC2E001: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:122 REP #PROC_FLAGS::ACCUM8
    case 0xC2E002: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2DF2E.asm:123 LDA @LOCAL00
    case 0xC2E004: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2DF2E.asm:124 JSL ASL16_ENTRY2
    case 0xC2E006: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/unknown/C2/C2DF2E.asm:125 STA @VIRTUAL02
    case 0xC2E00A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2DF2E.asm:126 REP #PROC_FLAGS::INDEX8
    case 0xC2E00C: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2DF2E.asm:127 LDY @LOCAL01
    case 0xC2E00E: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C2/C2DF2E.asm:128 TYA
    case 0xC2E010: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:129 ASL
    case 0xC2E011: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:130 ASL
    case 0xC2E012: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:131 ASL
    case 0xC2E013: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:132 ASL
    case 0xC2E014: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:133 ASL
    case 0xC2E015: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:134 STA @VIRTUAL04
    case 0xC2E016: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2DF2E.asm:135 LDX @LOCAL02
    case 0xC2E018: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C2/C2DF2E.asm:136 TXA
    case 0xC2E01A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:137 CLC
    case 0xC2E01B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:138 ADC @VIRTUAL04
    case 0xC2E01C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C2/C2DF2E.asm:139 CLC
    case 0xC2E01E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:140 ADC @VIRTUAL02
    case 0xC2E01F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C2DF2E.asm:141 LDX @LOCAL03
    case 0xC2E021: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C2/C2DF2E.asm:142 STX @VIRTUAL04
    case 0xC2E023: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C2/C2DF2E.asm:143 STA __BSS_START__ + loaded_bg_data::palette,X
    case 0xC2E025: cpu.execute_instruction<0x9D>(0x00000C, 3); return true;
    // src/unknown/C2/C2DF2E.asm:144 LDY #3
    case 0xC2E028: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C2/C2DF2E.asm:144 LDY #3
    // Overlapping static entry reached from 0xC2E028.
    case 0xC2E02A: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C2DF2E.asm:145 LDA (@LOCAL05),Y
    case 0xC2E02B: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:146 AND #$00FF
    case 0xC2E02D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DF2E.asm:146 AND #$00FF
    // Overlapping static entry reached from 0xC2E02D.
    case 0xC2E02F: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2DF2E.asm:147 CMP #2
    case 0xC2E030: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C2/C2DF2E.asm:147 CMP #2
    // Overlapping static entry reached from 0xC2E030.
    case 0xC2E032: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2DF2E.asm:148 BNE @UNKNOWN4
    case 0xC2E033: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:149 LDY #6
    case 0xC2E035: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C2/C2DF2E.asm:149 LDY #6
    // Overlapping static entry reached from 0xC2E035.
    case 0xC2E037: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C2DF2E.asm:150 LDA (@LOCAL05),Y
    case 0xC2E038: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:151 AND #$00FF
    case 0xC2E03A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DF2E.asm:151 AND #$00FF
    // Overlapping static entry reached from 0xC2E03A.
    case 0xC2E03C: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C2/C2DF2E.asm:152 CMP @LOCAL06
    case 0xC2E03D: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C2/C2DF2E.asm:153 BGT @UNKNOWN4
    case 0xC2E03F: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C2/C2DF2E.asm:153 BGT @UNKNOWN4
    case 0xC2E041: cpu.execute_instruction<0xB0>(0x00000C, 2); return true;
    // src/unknown/C2/C2DF2E.asm:154 LDY #7
    case 0xC2E043: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000007, 2); else cpu.execute_instruction<0xA0>(0x000007, 3); return true;
    // src/unknown/C2/C2DF2E.asm:154 LDY #7
    // Overlapping static entry reached from 0xC2E043.
    case 0xC2E045: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C2DF2E.asm:155 LDA (@LOCAL05),Y
    case 0xC2E046: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:156 AND #$00FF
    case 0xC2E048: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DF2E.asm:156 AND #$00FF
    // Overlapping static entry reached from 0xC2E048.
    case 0xC2E04A: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C2/C2DF2E.asm:157 CMP @LOCAL06
    case 0xC2E04B: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:158 BCS @UNKNOWN7
    case 0xC2E04D: cpu.execute_instruction<0xB0>(0x00003D, 2); return true;
    // src/unknown/C2/C2DF2E.asm:160 LDY #3
    case 0xC2E04F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C2/C2DF2E.asm:160 LDY #3
    // Overlapping static entry reached from 0xC2E04F.
    case 0xC2E051: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C2DF2E.asm:161 LDA (@LOCAL05),Y
    case 0xC2E052: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:162 AND #$00FF
    case 0xC2E054: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DF2E.asm:162 AND #$00FF
    // Overlapping static entry reached from 0xC2E054.
    case 0xC2E056: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DF2E.asm:163 BEQ @UNKNOWN6
    case 0xC2E057: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:164 LDY #4
    case 0xC2E059: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C2/C2DF2E.asm:164 LDY #4
    // Overlapping static entry reached from 0xC2E059.
    case 0xC2E05B: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C2DF2E.asm:165 LDA (@LOCAL05),Y
    case 0xC2E05C: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:166 AND #$00FF
    case 0xC2E05E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DF2E.asm:166 AND #$00FF
    // Overlapping static entry reached from 0xC2E05E.
    case 0xC2E060: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C2/C2DF2E.asm:167 CMP @LOCAL06
    case 0xC2E061: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C2/C2DF2E.asm:168 BGT @UNKNOWN6
    case 0xC2E063: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C2/C2DF2E.asm:168 BGT @UNKNOWN6
    case 0xC2E065: cpu.execute_instruction<0xB0>(0x00000C, 2); return true;
    // src/unknown/C2/C2DF2E.asm:169 LDY #5
    case 0xC2E067: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/unknown/C2/C2DF2E.asm:169 LDY #5
    // Overlapping static entry reached from 0xC2E067.
    case 0xC2E069: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C2DF2E.asm:170 LDA (@LOCAL05),Y
    case 0xC2E06A: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:171 AND #$00FF
    case 0xC2E06C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DF2E.asm:171 AND #$00FF
    // Overlapping static entry reached from 0xC2E06C.
    case 0xC2E06E: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C2/C2DF2E.asm:172 CMP @LOCAL06
    case 0xC2E06F: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:173 BCS @UNKNOWN7
    case 0xC2E071: cpu.execute_instruction<0xB0>(0x000019, 2); return true;
    // src/unknown/C2/C2DF2E.asm:175 LDA @LOCAL06
    case 0xC2E073: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:176 ASL
    case 0xC2E075: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:177 STA @LOCAL06
    case 0xC2E076: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:178 LDY #loaded_bg_data::palette_pointer
    case 0xC2E078: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C2/C2DF2E.asm:178 LDY #loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2E078.
    case 0xC2E07A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:179 CLC
    case 0xC2E07B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:180 ADC (@LOCAL05),Y
    case 0xC2E07C: cpu.execute_instruction<0x71>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:181 PHA
    case 0xC2E07E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:182 LDA @LOCAL06
    case 0xC2E07F: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C2/C2DF2E.asm:183 CLC
    case 0xC2E081: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:184 ADC @LOCAL05
    case 0xC2E082: cpu.execute_instruction<0x65>(0x000018, 2); return true;
    // src/unknown/C2/C2DF2E.asm:185 TAX
    case 0xC2E084: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:186 LDA __BSS_START__ + loaded_bg_data::palette,X
    case 0xC2E085: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/unknown/C2/C2DF2E.asm:187 PLX
    case 0xC2E088: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C2/C2DF2E.asm:188 STA __BSS_START__,X
    case 0xC2E089: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2DF2E.asm:190 END_C_FUNCTION
    case 0xC2E08C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C2DF2E.asm:190 END_C_FUNCTION
    case 0xC2E08D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2E08E.asm (unresolved).
bool execute_unresolved_c2_c2e08e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2E08E.asm:3 BEGIN_C_FUNCTION
    case 0xC2E08E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2E08E.asm:6 END_STACK_VARS
    case 0xC2E090: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2E08E.asm:6 END_STACK_VARS
    case 0xC2E091: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2E08E.asm:6 END_STACK_VARS
    case 0xC2E092: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2E08E.asm:6 END_STACK_VARS
    case 0xC2E093: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2E08E.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2E093.
    case 0xC2E095: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2E08E.asm:6 END_STACK_VARS
    case 0xC2E096: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2E08E.asm:6 END_STACK_VARS
    case 0xC2E097: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2E08E.asm:7 STA @VIRTUAL04
    case 0xC2E098: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2E08E.asm:7 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC2E095.
    case 0xC2E099: cpu.execute_instruction<0x04>(0x0000AD, 2); return true;
    // src/unknown/C2/C2E08E.asm:8 LDA LOADED_BG_DATA_LAYER1 + loaded_bg_data::bitdepth
    case 0xC2E09A: cpu.execute_instruction<0xAD>(0x00ADD5, 3); return true;
    // src/unknown/C2/C2E08E.asm:8 LDA LOADED_BG_DATA_LAYER1 + loaded_bg_data::bitdepth
    // Overlapping static entry reached from 0xC2E099.
    case 0xC2E09B: cpu.execute_instruction<0xD5>(0x0000AD, 2); return true;
    // src/unknown/C2/C2E08E.asm:9 AND #$00FF
    case 0xC2E09D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E08E.asm:9 AND #$00FF
    // Overlapping static entry reached from 0xC2E09D.
    case 0xC2E09F: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2E08E.asm:10 CMP #4
    case 0xC2E0A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C2/C2E08E.asm:10 CMP #4
    // Overlapping static entry reached from 0xC2E0A0.
    case 0xC2E0A2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2E08E.asm:11 BNE @UNKNOWN2
    case 0xC2E0A3: cpu.execute_instruction<0xD0>(0x00001C, 2); return true;
    // src/unknown/C2/C2E08E.asm:12 LDA #1
    case 0xC2E0A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2E08E.asm:12 LDA #1
    // Overlapping static entry reached from 0xC2E0A5.
    case 0xC2E0A7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2E08E.asm:13 STA @VIRTUAL02
    case 0xC2E0A8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2E08E.asm:14 BRA @UNKNOWN1
    case 0xC2E0AA: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C2/C2E08E.asm:16 LDY @VIRTUAL02
    case 0xC2E0AC: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C2/C2E08E.asm:17 LDX @VIRTUAL04
    case 0xC2E0AE: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2E08E.asm:18 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC2E0B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D4, 2); else cpu.execute_instruction<0xA9>(0x00ADD4, 3); return true;
    // src/unknown/C2/C2E08E.asm:18 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC2E0B0.
    case 0xC2E0B2: cpu.execute_instruction<0xAD>(0x002E20, 3); return true;
    // src/unknown/C2/C2E08E.asm:19 JSR UNKNOWN_C2DF2E
    case 0xC2E0B3: cpu.execute_instruction<0x20>(0x00DF2E, 3); return true;
    // src/unknown/C2/C2E08E.asm:19 JSR UNKNOWN_C2DF2E
    // Overlapping static entry reached from 0xC2E0B2.
    case 0xC2E0B5: cpu.execute_instruction<0xDF>(0xA502E6, 4); return true;
    // src/unknown/C2/C2E08E.asm:20 INC @VIRTUAL02
    case 0xC2E0B6: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2E08E.asm:22 LDA @VIRTUAL02
    case 0xC2E0B8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2E08E.asm:22 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC2E0B5.
    case 0xC2E0B9: cpu.execute_instruction<0x02>(0x0000C9, 2); return true;
    // src/unknown/C2/C2E08E.asm:23 CMP #16
    case 0xC2E0BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/unknown/C2/C2E08E.asm:23 CMP #16
    // Overlapping static entry reached from 0xC2E0BA.
    case 0xC2E0BC: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2E08E.asm:24 BCC @UNKNOWN0
    case 0xC2E0BD: cpu.execute_instruction<0x90>(0x0000ED, 2); return true;
    // src/unknown/C2/C2E08E.asm:25 BRA @UNKNOWN5
    case 0xC2E0BF: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/unknown/C2/C2E08E.asm:27 LDA #1
    case 0xC2E0C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2E08E.asm:27 LDA #1
    // Overlapping static entry reached from 0xC2E0C1.
    case 0xC2E0C3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2E08E.asm:28 STA @VIRTUAL02
    case 0xC2E0C4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2E08E.asm:29 BRA @UNKNOWN4
    case 0xC2E0C6: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C2/C2E08E.asm:31 LDY @VIRTUAL02
    case 0xC2E0C8: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C2/C2E08E.asm:32 LDX @VIRTUAL04
    case 0xC2E0CA: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2E08E.asm:33 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC2E0CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D4, 2); else cpu.execute_instruction<0xA9>(0x00ADD4, 3); return true;
    // src/unknown/C2/C2E08E.asm:33 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC2E0CC.
    case 0xC2E0CE: cpu.execute_instruction<0xAD>(0x002E20, 3); return true;
    // src/unknown/C2/C2E08E.asm:34 JSR UNKNOWN_C2DF2E
    case 0xC2E0CF: cpu.execute_instruction<0x20>(0x00DF2E, 3); return true;
    // src/unknown/C2/C2E08E.asm:34 JSR UNKNOWN_C2DF2E
    // Overlapping static entry reached from 0xC2E0CE.
    case 0xC2E0D1: cpu.execute_instruction<0xDF>(0xA602A4, 4); return true;
    // src/unknown/C2/C2E08E.asm:35 LDY @VIRTUAL02
    case 0xC2E0D2: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C2/C2E08E.asm:36 LDX @VIRTUAL04
    case 0xC2E0D4: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2E08E.asm:36 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC2E0D1.
    case 0xC2E0D5: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/unknown/C2/C2E08E.asm:37 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    case 0xC2E0D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004B, 2); else cpu.execute_instruction<0xA9>(0x00AE4B, 3); return true;
    // src/unknown/C2/C2E08E.asm:37 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC2E0D5.
    case 0xC2E0D7: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/unknown/C2/C2E08E.asm:37 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC2E0D6.
    case 0xC2E0D8: cpu.execute_instruction<0xAE>(0x002E20, 3); return true;
    // src/unknown/C2/C2E08E.asm:38 JSR UNKNOWN_C2DF2E
    case 0xC2E0D9: cpu.execute_instruction<0x20>(0x00DF2E, 3); return true;
    // src/unknown/C2/C2E08E.asm:38 JSR UNKNOWN_C2DF2E
    // Overlapping static entry reached from 0xC2E0D8.
    case 0xC2E0DB: cpu.execute_instruction<0xDF>(0xA502E6, 4); return true;
    // src/unknown/C2/C2E08E.asm:39 INC @VIRTUAL02
    case 0xC2E0DC: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2E08E.asm:41 LDA @VIRTUAL02
    case 0xC2E0DE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2E08E.asm:41 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC2E0DB.
    case 0xC2E0DF: cpu.execute_instruction<0x02>(0x0000C9, 2); return true;
    // src/unknown/C2/C2E08E.asm:42 CMP #4
    case 0xC2E0E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C2/C2E08E.asm:42 CMP #4
    // Overlapping static entry reached from 0xC2E0E0.
    case 0xC2E0E2: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2E08E.asm:43 BCC @UNKNOWN3
    case 0xC2E0E3: cpu.execute_instruction<0x90>(0x0000E3, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2E08E.asm:45 END_C_FUNCTION
    case 0xC2E0E5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C2E08E.asm:45 END_C_FUNCTION
    case 0xC2E0E6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2E0E7.asm (unresolved).
bool execute_unresolved_c2_c2e0e7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2E0E7.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2E0E7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2E0E7.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC2EDD4.
    case 0xC2E0E8: cpu.execute_instruction<0x31>(0x00009C, 2); return true;
    // src/unknown/C2/C2E0E7.asm:5 STZ GREEN_FLASH_DURATION
    case 0xC2E0E9: cpu.execute_instruction<0x9C>(0x00AD9E, 3); return true;
    // src/unknown/C2/C2E0E7.asm:5 STZ GREEN_FLASH_DURATION
    // Overlapping static entry reached from 0xC2E0E8.
    case 0xC2E0EA: cpu.execute_instruction<0x9E>(0x009CAD, 3); return true;
    // src/unknown/C2/C2E0E7.asm:6 STZ RED_FLASH_DURATION
    case 0xC2E0EC: cpu.execute_instruction<0x9C>(0x00ADA0, 3); return true;
    // src/unknown/C2/C2E0E7.asm:6 STZ RED_FLASH_DURATION
    // Overlapping static entry reached from 0xC2E0EA.
    case 0xC2E0ED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000AD, 2); else cpu.execute_instruction<0xA0>(0x00E2AD, 3); return true;
    // src/unknown/C2/C2E0E7.asm:7 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E0EF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2E0E7.asm:7 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2E0ED.
    case 0xC2E0F0: cpu.execute_instruction<0x20>(0x00C29C, 3); return true;
    // src/unknown/C2/C2E0E7.asm:8 STZ FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC2E0F1: cpu.execute_instruction<0x9C>(0x00AEC2, 3); return true;
    // src/unknown/C2/C2E0E7.asm:8 STZ FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    // Overlapping static entry reached from 0xC2E0F0.
    case 0xC2E0F3: cpu.execute_instruction<0xAE>(0x0020C2, 3); return true;
    // src/unknown/C2/C2E0E7.asm:9 REP #PROC_FLAGS::ACCUM8
    case 0xC2E0F4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2E0E7.asm:10 LDA HP_PP_BOX_BLINK_DURATION
    case 0xC2E0F6: cpu.execute_instruction<0xAD>(0x00ADA4, 3); return true;
    // src/unknown/C2/C2E0E7.asm:11 BEQ @UNKNOWN0
    case 0xC2E0F9: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C2/C2E0E7.asm:12 LDA HP_PP_BOX_BLINK_TARGET
    case 0xC2E0FB: cpu.execute_instruction<0xAD>(0x00ADA6, 3); return true;
    // src/unknown/C2/C2E0E7.asm:13 JSL UNKNOWN_C207B6
    case 0xC2E0FE: cpu.execute_instruction<0x22>(0xC207B6, 4); return true;
    // src/unknown/C2/C2E0E7.asm:14 STZ HP_PP_BOX_BLINK_DURATION
    case 0xC2E102: cpu.execute_instruction<0x9C>(0x00ADA4, 3); return true;
    // src/unknown/C2/C2E0E7.asm:16 LDY #0
    case 0xC2E105: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C2/C2E0E7.asm:16 LDY #0
    // Overlapping static entry reached from 0xC2E105.
    case 0xC2E107: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C2/C2E0E7.asm:17 TYX
    case 0xC2E108: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C2E0E7.asm:18 TYA
    case 0xC2E109: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2E0E7.asm:19 JSL SET_COLDATA
    case 0xC2E10A: cpu.execute_instruction<0x22>(0xC0B01A, 4); return true;
    // src/unknown/C2/C2E0E7.asm:20 LDA #1
    case 0xC2E10E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2E0E7.asm:20 LDA #1
    // Overlapping static entry reached from 0xC2E10E.
    case 0xC2E110: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2E0E7.asm:21 JSL UNKNOWN_C0AFCD
    case 0xC2E111: cpu.execute_instruction<0x22>(0xC0AFCD, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2E0E7.asm:22 END_C_FUNCTION
    case 0xC2E115: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2E6B3.asm (unresolved).
bool execute_unresolved_c2_c2e6b3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2E6B3.asm:5 BEGIN_C_FUNCTION_FAR
    case 0xC2E6B6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2E6B3.asm:14 END_STACK_VARS
    case 0xC2E6B8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2E6B3.asm:14 END_STACK_VARS
    case 0xC2E6B9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2E6B3.asm:14 END_STACK_VARS
    case 0xC2E6BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E5, 2); else cpu.execute_instruction<0x69>(0x00FFE5, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2E6B3.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC2E6BA.
    case 0xC2E6BC: cpu.execute_instruction<0xFF>(0x9EAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2E6B3.asm:14 END_STACK_VARS
    case 0xC2E6BD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:22 LDA PSI_ANIMATION_STATE + psi_animation_state::time_until_next_frame
    case 0xC2E6BE: cpu.execute_instruction<0xAD>(0x001B9E, 3); return true;
    // src/unknown/C2/C2E6B3.asm:22 LDA PSI_ANIMATION_STATE + psi_animation_state::time_until_next_frame
    // Overlapping static entry reached from 0xC2E6BC.
    case 0xC2E6C0: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:23 AND #$00FF
    case 0xC2E6C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E6B3.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC2E6C1.
    case 0xC2E6C3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C2E6B3.asm:24 BEQL @UNKNOWN12
    case 0xC2E6C4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:24 BEQL @UNKNOWN12
    case 0xC2E6C6: cpu.execute_instruction<0x4C>(0x00E83D, 3); return true;
    // src/unknown/C2/C2E6B3.asm:25 LDX #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::time_until_next_frame
    case 0xC2E6C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00009E, 2); else cpu.execute_instruction<0xA2>(0x001B9E, 3); return true;
    // src/unknown/C2/C2E6B3.asm:25 LDX #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::time_until_next_frame
    // Overlapping static entry reached from 0xC2E6C9.
    case 0xC2E6CB: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E6CC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:27 LDA __BSS_START__,X
    case 0xC2E6CE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:28 DEC
    case 0xC2E6D1: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:29 STA PSI_ANIMATION_STATE + psi_animation_state::time_until_next_frame
    case 0xC2E6D2: cpu.execute_instruction<0x8D>(0x001B9E, 3); return true;
    // src/unknown/C2/C2E6B3.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC2E6D5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:31 AND #$00FF
    case 0xC2E6D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E6B3.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC2E6D7.
    case 0xC2E6D9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C2E6B3.asm:32 BNEL @UNKNOWN4
    case 0xC2E6DA: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:32 BNEL @UNKNOWN4
    case 0xC2E6DC: cpu.execute_instruction<0x4C>(0x00E782, 3); return true;
    // src/unknown/C2/C2E6B3.asm:33 LDA #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::total_frames
    case 0xC2E6DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A0, 2); else cpu.execute_instruction<0xA9>(0x001BA0, 3); return true;
    // src/unknown/C2/C2E6B3.asm:33 LDA #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::total_frames
    // Overlapping static entry reached from 0xC2E6DF.
    case 0xC2E6E1: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:34 STA @VIRTUAL04
    case 0xC2E6E2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:35 LDX @VIRTUAL04
    case 0xC2E6E4: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:36 LDA __BSS_START__,X
    case 0xC2E6E6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:37 AND #$00FF
    case 0xC2E6E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E6B3.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC2E6E9.
    case 0xC2E6EB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2E6B3.asm:38 BEQ @UNKNOWN3
    case 0xC2E6EC: cpu.execute_instruction<0xF0>(0x000078, 2); return true;
    // src/unknown/C2/C2E6B3.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E6EE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:40 LDA PSI_ANIMATION_STATE + psi_animation_state::frame_hold_frames
    case 0xC2E6F0: cpu.execute_instruction<0xAD>(0x001B9F, 3); return true;
    // src/unknown/C2/C2E6B3.asm:41 STA PSI_ANIMATION_STATE + psi_animation_state::time_until_next_frame
    case 0xC2E6F3: cpu.execute_instruction<0x8D>(0x001B9E, 3); return true;
    // src/unknown/C2/C2E6B3.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC2E6F6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:43 LDA #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::frame_data
    case 0xC2E6F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x001BA1, 3); return true;
    // src/unknown/C2/C2E6B3.asm:43 LDA #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::frame_data
    // Overlapping static entry reached from 0xC2E6F8.
    case 0xC2E6FA: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:44 STA @VIRTUAL02
    case 0xC2E6FB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2E6B3.asm:45 LDY @VIRTUAL02
    case 0xC2E6FD: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C2/C2E6B3.asm:46 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC2E6FF: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:46 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC2E702: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C2/C2E6B3.asm:46 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC2E704: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C2/C2E6B3.asm:46 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC2E707: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    case 0xC2E709: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    case 0xC2E70B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    case 0xC2E70D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    case 0xC2E70F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    case 0xC2E711: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x005800, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    // Overlapping static entry reached from 0xC2E711.
    case 0xC2E713: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    case 0xC2E714: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000400, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    // Overlapping static entry reached from 0xC2E714.
    case 0xC2E716: cpu.execute_instruction<0x04>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    case 0xC2E717: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    // Overlapping static entry reached from 0xC2E716.
    case 0xC2E718: cpu.execute_instruction<0x20>(0x0006A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    case 0xC2E719: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x002206, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    case 0xC2E71B: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    // Overlapping static entry reached from 0xC2E719.
    case 0xC2E71C: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2E6B3.asm:47 COPY_TO_VRAM1P @VIRTUAL06, $5800, $400, $06
    // Overlapping static entry reached from 0xC2E71C.
    case 0xC2E71E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00B3A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    case 0xC2E71F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B3, 2); else cpu.execute_instruction<0xA9>(0x00E6B3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    // Overlapping static entry reached from 0xC2E71E.
    case 0xC2E720: cpu.execute_instruction<0xB3>(0x0000E6, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    // Overlapping static entry reached from 0xC2E71F.
    case 0xC2E721: cpu.execute_instruction<0xE6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    case 0xC2E722: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    // Overlapping static entry reached from 0xC2E721.
    case 0xC2E723: cpu.execute_instruction<0x0E>(0x00C2A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    case 0xC2E724: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x0000C2, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    // Overlapping static entry reached from 0xC2E724.
    case 0xC2E726: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    case 0xC2E727: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    case 0xC2E729: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x005800, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    // Overlapping static entry reached from 0xC2E729.
    case 0xC2E72B: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    case 0xC2E72C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000400, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    // Overlapping static entry reached from 0xC2E72C.
    case 0xC2E72E: cpu.execute_instruction<0x04>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    case 0xC2E72F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    // Overlapping static entry reached from 0xC2E72E.
    case 0xC2E730: cpu.execute_instruction<0x20>(0x000FA9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    case 0xC2E731: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00220F, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    case 0xC2E733: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    // Overlapping static entry reached from 0xC2E731.
    case 0xC2E734: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2E6B3.asm:49 COPY_TO_VRAM1 UNKNOWN_C2E6B3, $5800, $400, $0F
    // Overlapping static entry reached from 0xC2E734.
    case 0xC2E736: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A4, 2); else cpu.execute_instruction<0xC0>(0x0002A4, 3); return true;
    // src/unknown/C2/C2E6B3.asm:51 LDY @VIRTUAL02
    case 0xC2E737: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C2/C2E6B3.asm:51 LDY @VIRTUAL02
    // Overlapping static entry reached from 0xC2E736.
    case 0xC2E738: cpu.execute_instruction<0x02>(0x0000B9, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C2/C2E6B3.asm:52 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC2E739: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:52 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC2E73C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C2/C2E6B3.asm:52 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC2E73E: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C2/C2E6B3.asm:52 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC2E741: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C2E6B3.asm:53 LDA #$0400
    case 0xC2E743: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000400, 3); return true;
    // src/unknown/C2/C2E6B3.asm:53 LDA #$0400
    // Overlapping static entry reached from 0xC2E743.
    case 0xC2E745: cpu.execute_instruction<0x04>(0x000018, 2); return true;
    // src/unknown/C2/C2E6B3.asm:54 CLC
    case 0xC2E746: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:55 ADC @VIRTUAL06
    case 0xC2E747: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C2E6B3.asm:56 STA @VIRTUAL06
    case 0xC2E749: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C2E6B3.asm:57 LDY @VIRTUAL02
    case 0xC2E74B: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C2/C2E6B3.asm:58 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC2E74D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C2/C2E6B3.asm:58 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC2E74F: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C2/C2E6B3.asm:58 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC2E752: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C2/C2E6B3.asm:58 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC2E754: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C2/C2E6B3.asm:59 LDX @VIRTUAL04
    case 0xC2E757: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E759: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:61 LDA __BSS_START__,X
    case 0xC2E75B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:62 DEC
    case 0xC2E75E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:63 LDX @VIRTUAL04
    case 0xC2E75F: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:64 STA __BSS_START__,X
    case 0xC2E761: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:65 BRA @UNKNOWN4
    case 0xC2E764: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    case 0xC2E766: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B4, 2); else cpu.execute_instruction<0xA9>(0x00E6B4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    // Overlapping static entry reached from 0xC2E766.
    case 0xC2E768: cpu.execute_instruction<0xE6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    case 0xC2E769: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    // Overlapping static entry reached from 0xC2E768.
    case 0xC2E76A: cpu.execute_instruction<0x0E>(0x00C2A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    case 0xC2E76B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x0000C2, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    // Overlapping static entry reached from 0xC2E76B.
    case 0xC2E76D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    case 0xC2E76E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    case 0xC2E770: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x005800, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    // Overlapping static entry reached from 0xC2E770.
    case 0xC2E772: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    case 0xC2E773: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    // Overlapping static entry reached from 0xC2E773.
    case 0xC2E775: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    case 0xC2E776: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    case 0xC2E778: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    case 0xC2E77A: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    // Overlapping static entry reached from 0xC2E778.
    case 0xC2E77B: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2E6B3.asm:68 COPY_TO_VRAM1 UNKNOWN_C2E6B3+1, $5800, $800, $03
    // Overlapping static entry reached from 0xC2E77B.
    case 0xC2E77D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x009622, 3); return true;
    // src/unknown/C2/C2E6B3.asm:69 JSL UNKNOWN_C2DE96
    case 0xC2E77E: cpu.execute_instruction<0x22>(0xC2DE96, 4); return true;
    // src/unknown/C2/C2E6B3.asm:69 JSL UNKNOWN_C2DE96
    // Overlapping static entry reached from 0xC2E77D.
    case 0xC2E77F: cpu.execute_instruction<0x96>(0x0000DE, 2); return true;
    // src/unknown/C2/C2E6B3.asm:69 JSL UNKNOWN_C2DE96
    // Overlapping static entry reached from 0xC2E77D.
    case 0xC2E780: cpu.execute_instruction<0xDE>(0x00A2C2, 3); return true;
    // src/unknown/C2/C2E6B3.asm:69 JSL UNKNOWN_C2DE96
    // Overlapping static entry reached from 0xC2E77F.
    case 0xC2E781: cpu.execute_instruction<0xC2>(0x0000A2, 2); return true;
    // src/unknown/C2/C2E6B3.asm:71 LDX #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::palette_animation_time_until_next_frame
    case 0xC2E782: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000A9, 2); else cpu.execute_instruction<0xA2>(0x001BA9, 3); return true;
    // src/unknown/C2/C2E6B3.asm:71 LDX #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::palette_animation_time_until_next_frame
    // Overlapping static entry reached from 0xC2E780.
    case 0xC2E783: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00E21B, 3); return true;
    // src/unknown/C2/C2E6B3.asm:71 LDX #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::palette_animation_time_until_next_frame
    // Overlapping static entry reached from 0xC2E782.
    case 0xC2E784: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:72 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E785: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:72 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2E783.
    case 0xC2E786: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C2/C2E6B3.asm:73 LDA __BSS_START__,X
    case 0xC2E787: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:73 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC2E786.
    case 0xC2E789: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2E6B3.asm:74 STA @LOCAL06
    case 0xC2E78A: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C2/C2E6B3.asm:75 REP #PROC_FLAGS::ACCUM8
    case 0xC2E78C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:76 AND #$00FF
    case 0xC2E78E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E6B3.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC2E78E.
    case 0xC2E790: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C2E6B3.asm:77 BEQL @UNKNOWN12
    case 0xC2E791: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:77 BEQL @UNKNOWN12
    case 0xC2E793: cpu.execute_instruction<0x4C>(0x00E83D, 3); return true;
    // src/unknown/C2/C2E6B3.asm:78 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E796: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:79 LDA @LOCAL06
    case 0xC2E798: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C2/C2E6B3.asm:80 DEC
    case 0xC2E79A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:81 STA __BSS_START__,X
    case 0xC2E79B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:82 REP #PROC_FLAGS::ACCUM8
    case 0xC2E79E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:83 AND #$00FF
    case 0xC2E7A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E6B3.asm:83 AND #$00FF
    // Overlapping static entry reached from 0xC2E7A0.
    case 0xC2E7A2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C2E6B3.asm:84 BNEL @UNKNOWN12
    case 0xC2E7A3: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C2E6B3.asm:84 BNEL @UNKNOWN12
    case 0xC2E7A5: cpu.execute_instruction<0x4C>(0x00E83D, 3); return true;
    // src/unknown/C2/C2E6B3.asm:85 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E7A8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:86 LDA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_frames
    case 0xC2E7AA: cpu.execute_instruction<0xAD>(0x001BA8, 3); return true;
    // src/unknown/C2/C2E6B3.asm:87 STA __BSS_START__,X
    case 0xC2E7AD: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:88 LDA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_upper_index
    case 0xC2E7B0: cpu.execute_instruction<0xAD>(0x001BA6, 3); return true;
    // src/unknown/C2/C2E6B3.asm:89 SEC
    case 0xC2E7B3: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:90 SBC PSI_ANIMATION_STATE + psi_animation_state::palette_animation_lower_index
    case 0xC2E7B4: cpu.execute_instruction<0xED>(0x001BA5, 3); return true;
    // src/unknown/C2/C2E6B3.asm:91 REP #PROC_FLAGS::ACCUM8
    case 0xC2E7B7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:92 AND #$00FF
    case 0xC2E7B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E6B3.asm:92 AND #$00FF
    // Overlapping static entry reached from 0xC2E7B9.
    case 0xC2E7BB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2E6B3.asm:93 STA @VIRTUAL02
    case 0xC2E7BC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2E6B3.asm:94 INC @VIRTUAL02
    case 0xC2E7BE: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2E6B3.asm:95 LDX #0
    case 0xC2E7C0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:95 LDX #0
    // Overlapping static entry reached from 0xC2E7C0.
    case 0xC2E7C2: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C2/C2E6B3.asm:96 STX @LOCAL05
    case 0xC2E7C3: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C2/C2E6B3.asm:97 BRA @UNKNOWN10
    case 0xC2E7C5: cpu.execute_instruction<0x80>(0x00004C, 2); return true;
    // src/unknown/C2/C2E6B3.asm:99 LDA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_current_index
    case 0xC2E7C7: cpu.execute_instruction<0xAD>(0x001BA7, 3); return true;
    // src/unknown/C2/C2E6B3.asm:100 AND #$00FF
    case 0xC2E7CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E6B3.asm:100 AND #$00FF
    // Overlapping static entry reached from 0xC2E7CA.
    case 0xC2E7CC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2E6B3.asm:101 STA @VIRTUAL04
    case 0xC2E7CD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:102 TXA
    case 0xC2E7CF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:103 CMP @VIRTUAL04
    case 0xC2E7D0: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:104 BCS @UNKNOWN8
    case 0xC2E7D2: cpu.execute_instruction<0xB0>(0x00000D, 2); return true;
    // src/unknown/C2/C2E6B3.asm:105 TXA
    case 0xC2E7D4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:106 CLC
    case 0xC2E7D5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:107 ADC @VIRTUAL02
    case 0xC2E7D6: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C2E6B3.asm:108 SEC
    case 0xC2E7D8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:109 SBC @VIRTUAL04
    case 0xC2E7D9: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:110 STA @VIRTUAL04
    case 0xC2E7DB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:111 STA @LOCAL04
    case 0xC2E7DD: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2E6B3.asm:112 BRA @UNKNOWN9
    case 0xC2E7DF: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C2/C2E6B3.asm:114 TXA
    case 0xC2E7E1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:115 SEC
    case 0xC2E7E2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:116 SBC @VIRTUAL04
    case 0xC2E7E3: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:117 STA @VIRTUAL04
    case 0xC2E7E5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:118 STA @LOCAL04
    case 0xC2E7E7: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2E6B3.asm:120 LDA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_lower_index
    case 0xC2E7E9: cpu.execute_instruction<0xAD>(0x001BA5, 3); return true;
    // src/unknown/C2/C2E6B3.asm:121 AND #$00FF
    case 0xC2E7EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E6B3.asm:121 AND #$00FF
    // Overlapping static entry reached from 0xC2E7EC.
    case 0xC2E7EE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2E6B3.asm:122 STA @LOCAL03
    case 0xC2E7EF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C2E6B3.asm:123 STX @VIRTUAL04
    case 0xC2E7F1: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:124 CLC
    case 0xC2E7F3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:125 ADC @VIRTUAL04
    case 0xC2E7F4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:126 ASL
    case 0xC2E7F6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:127 CLC
    case 0xC2E7F7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:128 ADC PSI_ANIMATION_STATE + psi_animation_state::displayed_palette
    case 0xC2E7F8: cpu.execute_instruction<0x6D>(0x001BCA, 3); return true;
    // src/unknown/C2/C2E6B3.asm:129 PHA
    case 0xC2E7FB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:130 LDA @LOCAL04
    case 0xC2E7FC: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2E6B3.asm:131 STA @VIRTUAL04
    case 0xC2E7FE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:132 LDA @LOCAL03
    case 0xC2E800: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2E6B3.asm:133 CLC
    case 0xC2E802: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:134 ADC @VIRTUAL04
    case 0xC2E803: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:135 ASL
    case 0xC2E805: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:142 TAX
    case 0xC2E806: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:143 LDA PSI_ANIMATION_STATE + psi_animation_state::palette,X
    case 0xC2E807: cpu.execute_instruction<0xBD>(0x001BAA, 3); return true;
    // src/unknown/C2/C2E6B3.asm:145 PLX
    case 0xC2E80A: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:146 STA __BSS_START__,X
    case 0xC2E80B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:147 LDX @LOCAL05
    case 0xC2E80E: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C2/C2E6B3.asm:148 INX
    case 0xC2E810: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:149 STX @LOCAL05
    case 0xC2E811: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C2/C2E6B3.asm:151 TXA
    case 0xC2E813: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:152 CMP @VIRTUAL02
    case 0xC2E814: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2E6B3.asm:153 BCC @UNKNOWN7
    case 0xC2E816: cpu.execute_instruction<0x90>(0x0000AF, 2); return true;
    // src/unknown/C2/C2E6B3.asm:154 LDX #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::palette_animation_current_index
    case 0xC2E818: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000A7, 2); else cpu.execute_instruction<0xA2>(0x001BA7, 3); return true;
    // src/unknown/C2/C2E6B3.asm:154 LDX #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::palette_animation_current_index
    // Overlapping static entry reached from 0xC2E818.
    case 0xC2E81A: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:155 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E81B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:156 LDA __BSS_START__,X
    case 0xC2E81D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:157 INC
    case 0xC2E820: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:158 STA __BSS_START__,X
    case 0xC2E821: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:159 REP #PROC_FLAGS::ACCUM8
    case 0xC2E824: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:160 AND #$00FF
    case 0xC2E826: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E6B3.asm:160 AND #$00FF
    // Overlapping static entry reached from 0xC2E826.
    case 0xC2E828: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C2/C2E6B3.asm:161 CMP @VIRTUAL02
    case 0xC2E829: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2E6B3.asm:162 BCC @UNKNOWN11
    case 0xC2E82B: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // src/unknown/C2/C2E6B3.asm:163 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E82D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:164 LDA #0
    case 0xC2E82F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/unknown/C2/C2E6B3.asm:165 STA __BSS_START__,X
    case 0xC2E831: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:165 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2E82F.
    case 0xC2E832: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C2E6B3.asm:167 REP #PROC_FLAGS::ACCUM8
    case 0xC2E834: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2E6B3.asm:168 LDA #24
    case 0xC2E836: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C2/C2E6B3.asm:168 LDA #24
    // Overlapping static entry reached from 0xC2E836.
    case 0xC2E838: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2E6B3.asm:169 JSL UNKNOWN_C0856B
    case 0xC2E839: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/unknown/C2/C2E6B3.asm:171 LDX #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::enemy_colour_change_start_frames_left
    case 0xC2E83D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000CC, 2); else cpu.execute_instruction<0xA2>(0x001BCC, 3); return true;
    // src/unknown/C2/C2E6B3.asm:171 LDX #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::enemy_colour_change_start_frames_left
    // Overlapping static entry reached from 0xC2E83D.
    case 0xC2E83F: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:172 LDA __BSS_START__,X
    case 0xC2E840: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:173 BEQ @UNKNOWN18
    case 0xC2E843: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/unknown/C2/C2E6B3.asm:174 DEC
    case 0xC2E845: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:175 STA __BSS_START__,X
    case 0xC2E846: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:176 BNE @UNKNOWN18
    case 0xC2E849: cpu.execute_instruction<0xD0>(0x000048, 2); return true;
    // src/unknown/C2/C2E6B3.asm:177 LDA #20
    case 0xC2E84B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C2/C2E6B3.asm:177 LDA #20
    // Overlapping static entry reached from 0xC2E84B.
    case 0xC2E84D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2E6B3.asm:178 JSL UNKNOWN_C2FAD8
    case 0xC2E84E: cpu.execute_instruction<0x22>(0xC2FAD8, 4); return true;
    // src/unknown/C2/C2E6B3.asm:179 LDA #0
    case 0xC2E852: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:179 LDA #0
    // Overlapping static entry reached from 0xC2E852.
    case 0xC2E854: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2E6B3.asm:180 STA @VIRTUALTMP01
    case 0xC2E855: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2E6B3.asm:181 BRA @UNKNOWN17
    case 0xC2E857: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/unknown/C2/C2E6B3.asm:183 LDA @VIRTUALTMP01
    case 0xC2E859: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2E6B3.asm:184 ASL
    case 0xC2E85B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:185 TAX
    case 0xC2E85C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:186 LDA PSI_ANIMATION_ENEMY_TARGETS,X
    case 0xC2E85D: cpu.execute_instruction<0xBD>(0x00AEE7, 3); return true;
    // src/unknown/C2/C2E6B3.asm:187 BEQ @UNKNOWN16
    case 0xC2E860: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // src/unknown/C2/C2E6B3.asm:188 LDA #1
    case 0xC2E862: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2E6B3.asm:188 LDA #1
    // Overlapping static entry reached from 0xC2E862.
    case 0xC2E864: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2E6B3.asm:189 STA @VIRTUALTMP02
    case 0xC2E865: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:190 BRA @UNKNOWN15
    case 0xC2E867: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C2/C2E6B3.asm:192 LDA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_blue
    case 0xC2E869: cpu.execute_instruction<0xAD>(0x001BD4, 3); return true;
    // src/unknown/C2/C2E6B3.asm:193 STA @LOCAL00
    case 0xC2E86C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2E6B3.asm:194 LDY PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_green
    case 0xC2E86E: cpu.execute_instruction<0xAC>(0x001BD2, 3); return true;
    // src/unknown/C2/C2E6B3.asm:195 LDX PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_red
    case 0xC2E871: cpu.execute_instruction<0xAE>(0x001BD0, 3); return true;
    // src/unknown/C2/C2E6B3.asm:196 LDA @VIRTUALTMP01
    case 0xC2E874: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2E6B3.asm:197 ASL
    case 0xC2E876: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:198 ASL
    case 0xC2E877: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:199 ASL
    case 0xC2E878: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:200 ASL
    case 0xC2E879: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:201 CLC
    case 0xC2E87A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:202 ADC @VIRTUALTMP02
    case 0xC2E87B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:203 JSL UNKNOWN_C2FB35
    case 0xC2E87D: cpu.execute_instruction<0x22>(0xC2FB35, 4); return true;
    // src/unknown/C2/C2E6B3.asm:204 INC @VIRTUALTMP02
    case 0xC2E881: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:206 LDA @VIRTUALTMP02
    case 0xC2E883: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2E6B3.asm:207 CMP #16
    case 0xC2E885: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/unknown/C2/C2E6B3.asm:207 CMP #16
    // Overlapping static entry reached from 0xC2E885.
    case 0xC2E887: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2E6B3.asm:208 BCC @UNKNOWN14
    case 0xC2E888: cpu.execute_instruction<0x90>(0x0000DF, 2); return true;
    // src/unknown/C2/C2E6B3.asm:210 INC @VIRTUALTMP01
    case 0xC2E88A: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2E6B3.asm:212 LDA @VIRTUALTMP01
    case 0xC2E88C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2E6B3.asm:213 CMP #4
    case 0xC2E88E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C2/C2E6B3.asm:213 CMP #4
    // Overlapping static entry reached from 0xC2E88E.
    case 0xC2E890: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2E6B3.asm:214 BCC @UNKNOWN13
    case 0xC2E891: cpu.execute_instruction<0x90>(0x0000C6, 2); return true;
    // src/unknown/C2/C2E6B3.asm:216 LDX #.LOWORD(PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_frames_left)
    case 0xC2E893: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000CE, 2); else cpu.execute_instruction<0xA2>(0x001BCE, 3); return true;
    // src/unknown/C2/C2E6B3.asm:216 LDX #.LOWORD(PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_frames_left)
    // Overlapping static entry reached from 0xC2E893.
    case 0xC2E895: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:217 LDA __BSS_START__,X
    case 0xC2E896: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:218 BEQ @UNKNOWN22
    case 0xC2E899: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/unknown/C2/C2E6B3.asm:219 DEC
    case 0xC2E89B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:220 STA __BSS_START__,X
    case 0xC2E89C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:221 BNE @UNKNOWN22
    case 0xC2E89F: cpu.execute_instruction<0xD0>(0x000021, 2); return true;
    // src/unknown/C2/C2E6B3.asm:222 LDY #0
    case 0xC2E8A1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C2/C2E6B3.asm:222 LDY #0
    // Overlapping static entry reached from 0xC2E8A1.
    case 0xC2E8A3: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C2/C2E6B3.asm:223 STY @LOCAL02
    case 0xC2E8A4: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C2/C2E6B3.asm:224 BRA @UNKNOWN21
    case 0xC2E8A6: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C2/C2E6B3.asm:226 TYA
    case 0xC2E8A8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:227 ASL
    case 0xC2E8A9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:228 TAX
    case 0xC2E8AA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:229 LDA PSI_ANIMATION_ENEMY_TARGETS,X
    case 0xC2E8AB: cpu.execute_instruction<0xBD>(0x00AEE7, 3); return true;
    // src/unknown/C2/C2E6B3.asm:230 BEQ @UNKNOWN20
    case 0xC2E8AE: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C2/C2E6B3.asm:231 TYX
    case 0xC2E8B0: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:232 LDA #20
    case 0xC2E8B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C2/C2E6B3.asm:232 LDA #20
    // Overlapping static entry reached from 0xC2E8B1.
    case 0xC2E8B3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2E6B3.asm:233 JSL UNKNOWN_C2FADE
    case 0xC2E8B4: cpu.execute_instruction<0x22>(0xC2FADE, 4); return true;
    // src/unknown/C2/C2E6B3.asm:235 LDY @LOCAL02
    case 0xC2E8B8: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2E6B3.asm:236 INY
    case 0xC2E8BA: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2E6B3.asm:237 STY @LOCAL02
    case 0xC2E8BB: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C2/C2E6B3.asm:239 CPY #4
    case 0xC2E8BD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000004, 2); else cpu.execute_instruction<0xC0>(0x000004, 3); return true;
    // src/unknown/C2/C2E6B3.asm:239 CPY #4
    // Overlapping static entry reached from 0xC2E8BD.
    case 0xC2E8BF: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2E6B3.asm:240 BCC @UNKNOWN19
    case 0xC2E8C0: cpu.execute_instruction<0x90>(0x0000E6, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2E6B3.asm:242 END_C_FUNCTION
    case 0xC2E8C2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2E6B3.asm:242 END_C_FUNCTION
    case 0xC2E8C3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2E8C4.asm (unresolved).
bool execute_unresolved_c2_c2e8c4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2E8C4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2E8C4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2E8C4.asm:8 END_STACK_VARS
    case 0xC2E8C6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2E8C4.asm:8 END_STACK_VARS
    case 0xC2E8C7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2E8C4.asm:8 END_STACK_VARS
    case 0xC2E8C8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2E8C4.asm:8 END_STACK_VARS
    case 0xC2E8C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2E8C4.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2E8C9.
    case 0xC2E8CB: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2E8C4.asm:8 END_STACK_VARS
    case 0xC2E8CC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2E8C4.asm:8 END_STACK_VARS
    case 0xC2E8CD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2E8C4.asm:9 STY @VIRTUAL02
    case 0xC2E8CE: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C2/C2E8C4.asm:9 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC2E8CB.
    case 0xC2E8CF: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/unknown/C2/C2E8C4.asm:10 TAY
    case 0xC2E8D0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2E8C4.asm:11 JSL UNKNOWN_C4A67E
    case 0xC2E8D1: cpu.execute_instruction<0x22>(0xC4A67E, 4); return true;
    // src/unknown/C2/C2E8C4.asm:12 LDA @VIRTUAL02
    case 0xC2E8D5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2E8C4.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E8D7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2E8C4.asm:14 STA SWIRL_LENGTH_PADDING
    case 0xC2E8D9: cpu.execute_instruction<0x8D>(0x00AECA, 3); return true;
    // src/unknown/C2/C2E8C4.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC2E8DC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2E8C4.asm:16 END_C_FUNCTION
    case 0xC2E8DE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2E8C4.asm:16 END_C_FUNCTION
    case 0xC2E8DF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2E9C8.asm (unresolved).
bool execute_unresolved_c2_c2e9c8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2E9C8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2E9C8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C2E9C8.asm:6 LDA FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC2E9CA: cpu.execute_instruction<0xAD>(0x00AEC2, 3); return true;
    // src/unknown/C2/C2E9C8.asm:7 AND #$00FF
    case 0xC2E9CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E9C8.asm:7 AND #$00FF
    // Overlapping static entry reached from 0xC2E9CD.
    case 0xC2E9CF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2E9C8.asm:8 BEQ @UNKNOWN2
    case 0xC2E9D0: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/unknown/C2/C2E9C8.asm:9 LDA SWIRL_LENGTH_PADDING
    case 0xC2E9D2: cpu.execute_instruction<0xAD>(0x00AECA, 3); return true;
    // src/unknown/C2/C2E9C8.asm:10 AND #$00FF
    case 0xC2E9D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E9C8.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC2E9D5.
    case 0xC2E9D7: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C2E9C8.asm:11 CLC
    case 0xC2E9D8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2E9C8.asm:12 SBC #4
    case 0xC2E9D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/unknown/C2/C2E9C8.asm:12 SBC #4
    // Overlapping static entry reached from 0xC2E9D9.
    case 0xC2E9DB: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C2/C2E9C8.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC2E9DC: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C2/C2E9C8.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC2E9DE: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C2/C2E9C8.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC2E9E0: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C2/C2E9C8.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC2E9E2: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C2/C2E9C8.asm:14 LDA #1
    case 0xC2E9E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2E9C8.asm:14 LDA #1
    // Overlapping static entry reached from 0xC2E9E4.
    case 0xC2E9E6: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C2E9C8.asm:15 BRA @UNKNOWN3
    case 0xC2E9E7: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C2/C2E9C8.asm:17 LDA #0
    case 0xC2E9E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2E9C8.asm:17 LDA #0
    // Overlapping static entry reached from 0xC2E9E9.
    case 0xC2E9EB: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2E9C8.asm:19 END_C_FUNCTION
    case 0xC2E9EC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2E9ED.asm (unresolved).
bool execute_unresolved_c2_c2e9ed_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2E9ED.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2E9ED: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C2E9ED.asm:5 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E9EF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2E9ED.asm:6 STZ FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC2E9F1: cpu.execute_instruction<0x9C>(0x00AEC2, 3); return true;
    // src/unknown/C2/C2E9ED.asm:7 REP #PROC_FLAGS::ACCUM8
    case 0xC2E9F4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2E9ED.asm:8 LDA SWIRL_HDMA_CHANNEL_OFFSET
    case 0xC2E9F6: cpu.execute_instruction<0xAD>(0x00AEC9, 3); return true;
    // src/unknown/C2/C2E9ED.asm:9 AND #$00FF
    case 0xC2E9F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2E9ED.asm:9 AND #$00FF
    // Overlapping static entry reached from 0xC2E9F9.
    case 0xC2E9FB: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/unknown/C2/C2E9ED.asm:10 INC
    case 0xC2E9FC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2E9ED.asm:11 INC
    case 0xC2E9FD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2E9ED.asm:12 INC
    case 0xC2E9FE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2E9ED.asm:13 JSL UNKNOWN_C0AE34
    case 0xC2E9FF: cpu.execute_instruction<0x22>(0xC0AE34, 4); return true;
    // src/unknown/C2/C2E9ED.asm:14 LDY #0
    case 0xC2EA03: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C2/C2E9ED.asm:14 LDY #0
    // Overlapping static entry reached from 0xC2EA03.
    case 0xC2EA05: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C2/C2E9ED.asm:15 TYX
    case 0xC2EA06: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C2E9ED.asm:16 TYA
    case 0xC2EA07: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2E9ED.asm:17 JSL SET_COLDATA
    case 0xC2EA08: cpu.execute_instruction<0x22>(0xC0B01A, 4); return true;
    // src/unknown/C2/C2E9ED.asm:18 LDX #0
    case 0xC2EA0C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2E9ED.asm:18 LDX #0
    // Overlapping static entry reached from 0xC2EA0C.
    case 0xC2EA0E: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C2/C2E9ED.asm:19 TXA
    case 0xC2EA0F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2E9ED.asm:20 JSL SET_WINDOW_MASK
    case 0xC2EA10: cpu.execute_instruction<0x22>(0xC0B047, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2E9ED.asm:21 END_C_FUNCTION
    case 0xC2EA14: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2EA15.asm (unresolved).
bool execute_unresolved_c2_c2ea15_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2EA15.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2EA15: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2EA15.asm:7 END_STACK_VARS
    case 0xC2EA17: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2EA15.asm:7 END_STACK_VARS
    case 0xC2EA18: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2EA15.asm:7 END_STACK_VARS
    case 0xC2EA19: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2EA15.asm:7 END_STACK_VARS
    case 0xC2EA1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2EA15.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2EA1A.
    case 0xC2EA1C: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2EA15.asm:7 END_STACK_VARS
    case 0xC2EA1D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2EA15.asm:7 END_STACK_VARS
    case 0xC2EA1E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2EA15.asm:8 TAY
    case 0xC2EA1F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2EA15.asm:9 STY @LOCAL00
    case 0xC2EA20: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C2EA15.asm:10 TYA
    case 0xC2EA22: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2EA15.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EA23: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2EA15.asm:12 STA ACTIVE_OVAL_WINDOW
    case 0xC2EA25: cpu.execute_instruction<0x8D>(0x00AEEF, 3); return true;
    // src/unknown/C2/C2EA15.asm:13 LDX #0
    case 0xC2EA28: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2EA15.asm:13 LDX #0
    // Overlapping static entry reached from 0xC2EA28.
    case 0xC2EA2A: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C2/C2EA15.asm:14 REP #PROC_FLAGS::ACCUM8
    case 0xC2EA2B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2EA15.asm:15 TXA
    case 0xC2EA2D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2EA15.asm:16 JSL UNKNOWN_C4A67E
    case 0xC2EA2E: cpu.execute_instruction<0x22>(0xC4A67E, 4); return true;
    // src/unknown/C2/C2EA15.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EA32: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2EA15.asm:18 LDA #19
    case 0xC2EA34: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x008D13, 3); return true;
    // src/unknown/C2/C2EA15.asm:19 STA SWIRL_MASK_SETTINGS
    case 0xC2EA36: cpu.execute_instruction<0x8D>(0x00AEC8, 3); return true;
    // src/unknown/C2/C2EA15.asm:19 STA SWIRL_MASK_SETTINGS
    // Overlapping static entry reached from 0xC2EA34.
    case 0xC2EA37: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2EA15.asm:19 STA SWIRL_MASK_SETTINGS
    // Overlapping static entry reached from 0xC2EA37.
    case 0xC2EA38: cpu.execute_instruction<0xAE>(0x000EA4, 3); return true;
    // src/unknown/C2/C2EA15.asm:20 LDY @LOCAL00
    case 0xC2EA39: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C2EA15.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC2EA3B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2EA15.asm:22 TYA
    case 0xC2EA3D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2EA15.asm:23 CMP #2
    case 0xC2EA3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C2/C2EA15.asm:23 CMP #2
    // Overlapping static entry reached from 0xC2EA3E.
    case 0xC2EA40: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2EA15.asm:24 BEQ @UNKNOWN0
    case 0xC2EA41: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C2/C2EA15.asm:25 CMP #1
    case 0xC2EA43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2EA15.asm:25 CMP #1
    // Overlapping static entry reached from 0xC2EA43.
    case 0xC2EA45: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2EA15.asm:26 BEQ @UNKNOWN1
    case 0xC2EA46: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C2/C2EA15.asm:27 BRA @UNKNOWN2
    case 0xC2EA48: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:29 MOVE_INT_CONSTANT UNKNOWN_C3F819, LOADED_OVAL_WINDOW
    case 0xC2EA4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x00F819, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:29 MOVE_INT_CONSTANT UNKNOWN_C3F819, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2EA4A.
    case 0xC2EA4C: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C2EA15.asm:29 MOVE_INT_CONSTANT UNKNOWN_C3F819, LOADED_OVAL_WINDOW
    case 0xC2EA4D: cpu.execute_instruction<0x8D>(0x00AECC, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:29 MOVE_INT_CONSTANT UNKNOWN_C3F819, LOADED_OVAL_WINDOW
    case 0xC2EA50: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:29 MOVE_INT_CONSTANT UNKNOWN_C3F819, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2EA50.
    case 0xC2EA52: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C2EA15.asm:29 MOVE_INT_CONSTANT UNKNOWN_C3F819, LOADED_OVAL_WINDOW
    case 0xC2EA53: cpu.execute_instruction<0x8D>(0x00AECE, 3); return true;
    // src/unknown/C2/C2EA15.asm:30 BRA @UNKNOWN3
    case 0xC2EA56: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:32 MOVE_INT_CONSTANT UNKNOWN_C4A5FA, LOADED_OVAL_WINDOW
    case 0xC2EA58: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FA, 2); else cpu.execute_instruction<0xA9>(0x00A5FA, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:32 MOVE_INT_CONSTANT UNKNOWN_C4A5FA, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2EA58.
    case 0xC2EA5A: cpu.execute_instruction<0xA5>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C2EA15.asm:32 MOVE_INT_CONSTANT UNKNOWN_C4A5FA, LOADED_OVAL_WINDOW
    case 0xC2EA5B: cpu.execute_instruction<0x8D>(0x00AECC, 3); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C2EA15.asm:32 MOVE_INT_CONSTANT UNKNOWN_C4A5FA, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2EA5A.
    case 0xC2EA5C: cpu.execute_instruction<0xCC>(0x00A9AE, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:32 MOVE_INT_CONSTANT UNKNOWN_C4A5FA, LOADED_OVAL_WINDOW
    case 0xC2EA5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:32 MOVE_INT_CONSTANT UNKNOWN_C4A5FA, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2EA5C.
    case 0xC2EA5F: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:32 MOVE_INT_CONSTANT UNKNOWN_C4A5FA, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2EA5E.
    case 0xC2EA60: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C2EA15.asm:32 MOVE_INT_CONSTANT UNKNOWN_C4A5FA, LOADED_OVAL_WINDOW
    case 0xC2EA61: cpu.execute_instruction<0x8D>(0x00AECE, 3); return true;
    // src/unknown/C2/C2EA15.asm:33 BRA @UNKNOWN3
    case 0xC2EA64: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:35 MOVE_INT_CONSTANT UNKNOWN_C4A5CE, LOADED_OVAL_WINDOW
    case 0xC2EA66: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x00A5CE, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:35 MOVE_INT_CONSTANT UNKNOWN_C4A5CE, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2EA66.
    case 0xC2EA68: cpu.execute_instruction<0xA5>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C2EA15.asm:35 MOVE_INT_CONSTANT UNKNOWN_C4A5CE, LOADED_OVAL_WINDOW
    case 0xC2EA69: cpu.execute_instruction<0x8D>(0x00AECC, 3); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C2EA15.asm:35 MOVE_INT_CONSTANT UNKNOWN_C4A5CE, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2EA68.
    case 0xC2EA6A: cpu.execute_instruction<0xCC>(0x00A9AE, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:35 MOVE_INT_CONSTANT UNKNOWN_C4A5CE, LOADED_OVAL_WINDOW
    case 0xC2EA6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:35 MOVE_INT_CONSTANT UNKNOWN_C4A5CE, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2EA6A.
    case 0xC2EA6D: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EA15.asm:35 MOVE_INT_CONSTANT UNKNOWN_C4A5CE, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2EA6C.
    case 0xC2EA6E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C2EA15.asm:35 MOVE_INT_CONSTANT UNKNOWN_C4A5CE, LOADED_OVAL_WINDOW
    case 0xC2EA6F: cpu.execute_instruction<0x8D>(0x00AECE, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2EA15.asm:37 END_C_FUNCTION
    case 0xC2EA72: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2EA15.asm:37 END_C_FUNCTION
    case 0xC2EA73: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2EA74.asm (unresolved).
bool execute_unresolved_c2_c2ea74_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2EA74.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2EA74: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C2EA74.asm:5 LDX #0
    case 0xC2EA76: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2EA74.asm:5 LDX #0
    // Overlapping static entry reached from 0xC2EA76.
    case 0xC2EA78: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C2/C2EA74.asm:6 TXA
    case 0xC2EA79: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2EA74.asm:7 JSL UNKNOWN_C4A67E
    case 0xC2EA7A: cpu.execute_instruction<0x22>(0xC4A67E, 4); return true;
    // src/unknown/C2/C2EA74.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EA7E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2EA74.asm:9 LDA #19
    case 0xC2EA80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x008D13, 3); return true;
    // src/unknown/C2/C2EA74.asm:10 STA SWIRL_MASK_SETTINGS
    case 0xC2EA82: cpu.execute_instruction<0x8D>(0x00AEC8, 3); return true;
    // src/unknown/C2/C2EA74.asm:10 STA SWIRL_MASK_SETTINGS
    // Overlapping static entry reached from 0xC2EA80.
    case 0xC2EA83: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2EA74.asm:10 STA SWIRL_MASK_SETTINGS
    // Overlapping static entry reached from 0xC2EA83.
    case 0xC2EA84: cpu.execute_instruction<0xAE>(0x0020C2, 3); return true;
    // src/unknown/C2/C2EA74.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC2EA85: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2EA74.asm:12 LDA ACTIVE_OVAL_WINDOW
    case 0xC2EA87: cpu.execute_instruction<0xAD>(0x00AEEF, 3); return true;
    // src/unknown/C2/C2EA74.asm:13 AND #$00FF
    case 0xC2EA8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2EA74.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC2EA8A.
    case 0xC2EA8C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2EA74.asm:14 BEQ @UNKNOWN0
    case 0xC2EA8D: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EA74.asm:15 MOVE_INT_CONSTANT UNKNOWN_C4A652, LOADED_OVAL_WINDOW
    case 0xC2EA8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000052, 2); else cpu.execute_instruction<0xA9>(0x00A652, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EA74.asm:15 MOVE_INT_CONSTANT UNKNOWN_C4A652, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2EA8F.
    case 0xC2EA91: cpu.execute_instruction<0xA6>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C2EA74.asm:15 MOVE_INT_CONSTANT UNKNOWN_C4A652, LOADED_OVAL_WINDOW
    case 0xC2EA92: cpu.execute_instruction<0x8D>(0x00AECC, 3); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C2EA74.asm:15 MOVE_INT_CONSTANT UNKNOWN_C4A652, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2EA91.
    case 0xC2EA93: cpu.execute_instruction<0xCC>(0x00A9AE, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EA74.asm:15 MOVE_INT_CONSTANT UNKNOWN_C4A652, LOADED_OVAL_WINDOW
    case 0xC2EA95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EA74.asm:15 MOVE_INT_CONSTANT UNKNOWN_C4A652, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2EA93.
    case 0xC2EA96: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EA74.asm:15 MOVE_INT_CONSTANT UNKNOWN_C4A652, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2EA95.
    case 0xC2EA97: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C2EA74.asm:15 MOVE_INT_CONSTANT UNKNOWN_C4A652, LOADED_OVAL_WINDOW
    case 0xC2EA98: cpu.execute_instruction<0x8D>(0x00AECE, 3); return true;
    // src/unknown/C2/C2EA74.asm:16 BRA @UNKNOWN1
    case 0xC2EA9B: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EA74.asm:18 MOVE_INT_CONSTANT UNKNOWN_C4A626, LOADED_OVAL_WINDOW
    case 0xC2EA9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x00A626, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EA74.asm:18 MOVE_INT_CONSTANT UNKNOWN_C4A626, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2EA9D.
    case 0xC2EA9F: cpu.execute_instruction<0xA6>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C2EA74.asm:18 MOVE_INT_CONSTANT UNKNOWN_C4A626, LOADED_OVAL_WINDOW
    case 0xC2EAA0: cpu.execute_instruction<0x8D>(0x00AECC, 3); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C2EA74.asm:18 MOVE_INT_CONSTANT UNKNOWN_C4A626, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2EA9F.
    case 0xC2EAA1: cpu.execute_instruction<0xCC>(0x00A9AE, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EA74.asm:18 MOVE_INT_CONSTANT UNKNOWN_C4A626, LOADED_OVAL_WINDOW
    case 0xC2EAA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EA74.asm:18 MOVE_INT_CONSTANT UNKNOWN_C4A626, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2EAA1.
    case 0xC2EAA4: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EA74.asm:18 MOVE_INT_CONSTANT UNKNOWN_C4A626, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2EAA3.
    case 0xC2EAA5: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C2EA74.asm:18 MOVE_INT_CONSTANT UNKNOWN_C4A626, LOADED_OVAL_WINDOW
    case 0xC2EAA6: cpu.execute_instruction<0x8D>(0x00AECE, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2EA74.asm:20 END_C_FUNCTION
    case 0xC2EAA9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2EAAA.asm (unresolved).
bool execute_unresolved_c2_c2eaaa_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2EAAA.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2EAAA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C2EAAA.asm:5 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EAAC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2EAAA.asm:6 STZ FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC2EAAE: cpu.execute_instruction<0x9C>(0x00AEC2, 3); return true;
    // src/unknown/C2/C2EAAA.asm:7 REP #PROC_FLAGS::ACCUM8
    case 0xC2EAB1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EAAA.asm:8 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    case 0xC2EAB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2EAAA.asm:8 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2EAB3.
    case 0xC2EAB5: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C2EAAA.asm:8 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    case 0xC2EAB6: cpu.execute_instruction<0x8D>(0x00AECC, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EAAA.asm:8 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    case 0xC2EAB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2EAAA.asm:8 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC2EAB9.
    case 0xC2EABB: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C2EAAA.asm:8 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    case 0xC2EABC: cpu.execute_instruction<0x8D>(0x00AECE, 3); return true;
    // src/unknown/C2/C2EAAA.asm:9 LDA #3
    case 0xC2EABF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C2/C2EAAA.asm:9 LDA #3
    // Overlapping static entry reached from 0xC2EABF.
    case 0xC2EAC1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2EAAA.asm:10 JSL UNKNOWN_C0AE34
    case 0xC2EAC2: cpu.execute_instruction<0x22>(0xC0AE34, 4); return true;
    // src/unknown/C2/C2EAAA.asm:11 LDX #0
    case 0xC2EAC6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2EAAA.asm:11 LDX #0
    // Overlapping static entry reached from 0xC2EAC6.
    case 0xC2EAC8: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C2/C2EAAA.asm:12 TXA
    case 0xC2EAC9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2EAAA.asm:13 JSL SET_WINDOW_MASK
    case 0xC2EACA: cpu.execute_instruction<0x22>(0xC0B047, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2EAAA.asm:14 END_C_FUNCTION
    case 0xC2EACE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2EACF.asm (unresolved).
bool execute_unresolved_c2_c2eacf_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2EACF.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2EACF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C2EACF.asm:6 LDA PSI_ANIMATION_STATE + psi_animation_state::time_until_next_frame
    case 0xC2EAD1: cpu.execute_instruction<0xAD>(0x001B9E, 3); return true;
    // src/unknown/C2/C2EACF.asm:7 AND #$00FF
    case 0xC2EAD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2EACF.asm:7 AND #$00FF
    // Overlapping static entry reached from 0xC2EAD4.
    case 0xC2EAD6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2EACF.asm:8 BNE @UNKNOWN0
    case 0xC2EAD7: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C2/C2EACF.asm:9 LDA FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC2EAD9: cpu.execute_instruction<0xAD>(0x00AEC2, 3); return true;
    // src/unknown/C2/C2EACF.asm:10 AND #$00FF
    case 0xC2EADC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2EACF.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC2EADC.
    case 0xC2EADE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2EACF.asm:11 BEQ @UNKNOWN1
    case 0xC2EADF: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C2/C2EACF.asm:13 LDA #1
    case 0xC2EAE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2EACF.asm:13 LDA #1
    // Overlapping static entry reached from 0xC2EAE1.
    case 0xC2EAE3: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C2EACF.asm:14 BRA @UNKNOWN2
    case 0xC2EAE4: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C2/C2EACF.asm:16 LDA #0
    case 0xC2EAE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2EACF.asm:16 LDA #0
    // Overlapping static entry reached from 0xC2EAE6.
    case 0xC2EAE8: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2EACF.asm:18 END_C_FUNCTION
    case 0xC2EAE9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2EEE7.asm (unresolved).
bool execute_unresolved_c2_c2eee7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2EEE7.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2EEE7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2EEE7.asm:10 END_STACK_VARS
    case 0xC2EEE9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2EEE7.asm:10 END_STACK_VARS
    case 0xC2EEEA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2EEE7.asm:10 END_STACK_VARS
    case 0xC2EEEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2EEE7.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC2EEEB.
    case 0xC2EEED: cpu.execute_instruction<0xFF>(0xB49C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2EEE7.asm:10 END_STACK_VARS
    case 0xC2EEEE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:11 STZ CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2EEEF: cpu.execute_instruction<0x9C>(0x00AAB4, 3); return true;
    // src/unknown/C2/C2EEE7.asm:11 STZ CURRENT_BATTLE_SPRITES_ALLOCATED
    // Overlapping static entry reached from 0xC2EEED.
    case 0xC2EEF1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:12 STZ CURRENT_BATTLE_SPRITEMAPS_ALLOCATED
    case 0xC2EEF2: cpu.execute_instruction<0x9C>(0x00AAB2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:13 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC2EEF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00C60D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:13 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2EEF5.
    case 0xC2EEF7: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2EEE7.asm:13 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC2EEF8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2EEE7.asm:13 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2EEF7.
    case 0xC2EEF9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:13 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC2EEFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:13 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2EEFA.
    case 0xC2EEFC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:13 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC2EEFD: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C2/C2EEE7.asm:14 LDA CURRENT_BATTLE_GROUP
    case 0xC2EEFF: cpu.execute_instruction<0xAD>(0x004A8C, 3); return true;
    // src/unknown/C2/C2EEE7.asm:15 ASL
    case 0xC2EF02: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:16 ASL
    case 0xC2EF03: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:17 ASL
    case 0xC2EF04: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:18 CLC
    case 0xC2EF05: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:19 ADC @VIRTUAL0A
    case 0xC2EF06: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C2/C2EEE7.asm:20 STA @VIRTUAL0A
    case 0xC2EF08: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C2/C2EEE7.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2EF0A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C2/C2EEE7.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EF0A.
    case 0xC2EF0C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C2/C2EEE7.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2EF0D: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C2/C2EEE7.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2EF0F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C2/C2EEE7.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2EF10: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C2/C2EEE7.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2EF12: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2EF14: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2EEE7.asm:22 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC2EF16: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2EEE7.asm:22 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC2EF18: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:22 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC2EF1A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:22 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC2EF1C: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C2/C2EEE7.asm:23 JMP @UNKNOWN1
    case 0xC2EF1E: cpu.execute_instruction<0x4C>(0x00EFC3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:25 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2EF21: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x009589, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:25 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EF21.
    case 0xC2EF23: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2EEE7.asm:25 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2EF24: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2EEE7.asm:25 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EF23.
    case 0xC2EF25: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:25 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2EF26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:25 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EF25.
    case 0xC2EF27: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:25 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EF26.
    case 0xC2EF28: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:25 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2EF29: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2EEE7.asm:26 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EF2B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2EEE7.asm:26 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EF2D: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:26 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EF2F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:26 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EF31: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2EEE7.asm:27 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2EF33: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2EEE7.asm:27 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2EF35: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:27 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2EF37: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:27 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2EF39: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C2/C2EEE7.asm:28 INC @VIRTUAL0A
    case 0xC2EF3B: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C2/C2EEE7.asm:29 LDA [@VIRTUAL0A]
    case 0xC2EF3D: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C2/C2EEE7.asm:30 LDY #.SIZEOF(enemy_data)
    case 0xC2EF3F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C2EEE7.asm:30 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2EF3F.
    case 0xC2EF41: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2EEE7.asm:31 JSL MULT168
    case 0xC2EF42: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2EEE7.asm:32 STA @LOCAL02
    case 0xC2EF46: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C2EEE7.asm:33 CLC
    case 0xC2EF48: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:34 ADC #enemy_data::battle_sprite
    case 0xC2EF49: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00001C, 3); return true;
    // src/unknown/C2/C2EEE7.asm:34 ADC #enemy_data::battle_sprite
    // Overlapping static entry reached from 0xC2EF49.
    case 0xC2EF4B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C2EEE7.asm:35 CLC
    case 0xC2EF4C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:36 ADC @VIRTUAL06
    case 0xC2EF4D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C2EEE7.asm:37 STA @VIRTUAL06
    case 0xC2EF4F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C2EEE7.asm:38 LDA [@VIRTUAL06]
    case 0xC2EF51: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C2/C2EEE7.asm:39 TAY
    case 0xC2EF53: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:40 STY @LOCAL01
    case 0xC2EF54: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C2/C2EEE7.asm:41 LDA @LOCAL02
    case 0xC2EF56: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2EEE7.asm:42 CLC
    case 0xC2EF58: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:43 ADC #enemy_data::battle_sprite_palette
    case 0xC2EF59: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000035, 2); else cpu.execute_instruction<0x69>(0x000035, 3); return true;
    // src/unknown/C2/C2EEE7.asm:43 ADC #enemy_data::battle_sprite_palette
    // Overlapping static entry reached from 0xC2EF59.
    case 0xC2EF5B: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C2/C2EEE7.asm:44 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC2EF5C: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C2/C2EEE7.asm:44 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC2EF5E: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:44 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC2EF60: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:44 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC2EF62: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C2/C2EEE7.asm:45 CLC
    case 0xC2EF64: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:46 ADC @VIRTUAL06
    case 0xC2EF65: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C2EEE7.asm:47 STA @VIRTUAL06
    case 0xC2EF67: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C2EEE7.asm:48 LDA [@VIRTUAL06]
    case 0xC2EF69: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C2/C2EEE7.asm:49 AND #$00FF
    case 0xC2EF6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2EEE7.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC2EF6B.
    case 0xC2EF6D: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C2/C2EEE7.asm:50 ASL
    case 0xC2EF6E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:51 ASL
    case 0xC2EF6F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:52 ASL
    case 0xC2EF70: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:53 ASL
    case 0xC2EF71: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:54 ASL
    case 0xC2EF72: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:55 PHA
    case 0xC2EF73: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:56 LOADPTR BATTLE_SPRITE_PALETTES, @VIRTUAL06
    case 0xC2EF74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x006514, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:56 LOADPTR BATTLE_SPRITE_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EF74.
    case 0xC2EF76: cpu.execute_instruction<0x65>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2EEE7.asm:56 LOADPTR BATTLE_SPRITE_PALETTES, @VIRTUAL06
    case 0xC2EF77: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2EEE7.asm:56 LOADPTR BATTLE_SPRITE_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EF76.
    case 0xC2EF78: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:56 LOADPTR BATTLE_SPRITE_PALETTES, @VIRTUAL06
    case 0xC2EF79: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0000CE, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:56 LOADPTR BATTLE_SPRITE_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EF78.
    case 0xC2EF7A: cpu.execute_instruction<0xCE>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:56 LOADPTR BATTLE_SPRITE_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EF79.
    case 0xC2EF7B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:56 LOADPTR BATTLE_SPRITE_PALETTES, @VIRTUAL06
    case 0xC2EF7C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:56 LOADPTR BATTLE_SPRITE_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EF7A.
    case 0xC2EF7D: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:57 PLA
    case 0xC2EF7E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:58 CLC
    case 0xC2EF7F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:59 ADC @VIRTUAL06
    case 0xC2EF80: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C2EEE7.asm:60 STA @VIRTUAL06
    case 0xC2EF82: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C2EEE7.asm:61 STA @LOCAL00
    case 0xC2EF84: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2EEE7.asm:62 LDA @VIRTUAL06+2
    case 0xC2EF86: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C2/C2EEE7.asm:63 STA @LOCAL00+2
    case 0xC2EF88: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2EEE7.asm:64 LDX #32
    case 0xC2EF8A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C2/C2EEE7.asm:64 LDX #32
    // Overlapping static entry reached from 0xC2EF8A.
    case 0xC2EF8C: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C2/C2EEE7.asm:65 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2EF8D: cpu.execute_instruction<0xAD>(0x00AAB4, 3); return true;
    // src/unknown/C2/C2EEE7.asm:66 ASL
    case 0xC2EF90: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:67 ASL
    case 0xC2EF91: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:68 ASL
    case 0xC2EF92: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:69 ASL
    case 0xC2EF93: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:70 ASL
    case 0xC2EF94: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:71 CLC
    case 0xC2EF95: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:77 ADC #$0300
    case 0xC2EF96: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000300, 3); return true;
    // src/unknown/C2/C2EEE7.asm:77 ADC #$0300
    // Overlapping static entry reached from 0xC2EF96.
    case 0xC2EF98: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/unknown/C2/C2EEE7.asm:79 JSL MEMCPY16
    case 0xC2EF99: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C2/C2EEE7.asm:79 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2EF98.
    case 0xC2EF9A: cpu.execute_instruction<0xD2>(0x00008E, 2); return true;
    // src/unknown/C2/C2EEE7.asm:79 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2EF9A.
    case 0xC2EF9C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AD, 2); else cpu.execute_instruction<0xC0>(0x00B4AD, 3); return true;
    // src/unknown/C2/C2EEE7.asm:80 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2EF9D: cpu.execute_instruction<0xAD>(0x00AAB4, 3); return true;
    // src/unknown/C2/C2EEE7.asm:80 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    // Overlapping static entry reached from 0xC2EF9C.
    case 0xC2EF9E: cpu.execute_instruction<0xB4>(0x0000AA, 2); return true;
    // src/unknown/C2/C2EEE7.asm:80 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    // Overlapping static entry reached from 0xC2EF9C.
    case 0xC2EF9F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:81 ASL
    case 0xC2EFA0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:82 TAX
    case 0xC2EFA1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:83 LDA [@VIRTUAL0A]
    case 0xC2EFA2: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C2/C2EEE7.asm:84 STA CURRENT_BATTLE_SPRITE_ENEMY_IDS,X
    case 0xC2EFA4: cpu.execute_instruction<0x9D>(0x00AABE, 3); return true;
    // src/unknown/C2/C2EEE7.asm:85 LDY @LOCAL01
    case 0xC2EFA7: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2EEE7.asm:86 TYA
    case 0xC2EFA9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:87 JSR LOAD_BATTLE_SPRITE
    case 0xC2EFAA: cpu.execute_instruction<0x20>(0x00EAEA, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2EEE7.asm:88 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC2EFAD: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2EEE7.asm:88 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC2EFAF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:88 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC2EFB1: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:88 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC2EFB3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C2EEE7.asm:89 LDA #3
    case 0xC2EFB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C2/C2EEE7.asm:89 LDA #3
    // Overlapping static entry reached from 0xC2EFB5.
    case 0xC2EFB7: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C2EEE7.asm:90 CLC
    case 0xC2EFB8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:91 ADC @VIRTUAL06
    case 0xC2EFB9: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C2EEE7.asm:92 STA @VIRTUAL06
    case 0xC2EFBB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C2EEE7.asm:93 STA @LOCAL04
    case 0xC2EFBD: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C2/C2EEE7.asm:94 LDA @VIRTUAL06+2
    case 0xC2EFBF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C2/C2EEE7.asm:95 STA @LOCAL04+2
    case 0xC2EFC1: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C2/C2EEE7.asm:97 LDY #0
    case 0xC2EFC3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C2/C2EEE7.asm:97 LDY #0
    // Overlapping static entry reached from 0xC2EFC3.
    case 0xC2EFC5: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C2/C2EEE7.asm:98 LDA [@LOCAL04],Y
    case 0xC2EFC6: cpu.execute_instruction<0xB7>(0x00001A, 2); return true;
    // src/unknown/C2/C2EEE7.asm:99 AND #$00FF
    case 0xC2EFC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2EEE7.asm:99 AND #$00FF
    // Overlapping static entry reached from 0xC2EFC8.
    case 0xC2EFCA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2EEE7.asm:100 TAX
    case 0xC2EFCB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2EEE7.asm:101 CPX #$00FF
    case 0xC2EFCC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x0000FF, 3); return true;
    // src/unknown/C2/C2EEE7.asm:101 CPX #$00FF
    // Overlapping static entry reached from 0xC2EFCC.
    case 0xC2EFCE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C2EEE7.asm:102 BNEL @UNKNOWN0
    case 0xC2EFCF: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C2EEE7.asm:102 BNEL @UNKNOWN0
    case 0xC2EFD1: cpu.execute_instruction<0x4C>(0x00EF21, 3); return true;
    // src/unknown/C2/C2EEE7.asm:103 LDA CURRENT_BATTLE_SPRITEMAPS_ALLOCATED
    case 0xC2EFD4: cpu.execute_instruction<0xAD>(0x00AAB2, 3); return true;
    // src/unknown/C2/C2EEE7.asm:104 CMP #16
    case 0xC2EFD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/unknown/C2/C2EEE7.asm:104 CMP #16
    // Overlapping static entry reached from 0xC2EFD7.
    case 0xC2EFD9: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2EEE7.asm:105 BLTEQ @UNKNOWN3
    case 0xC2EFDA: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2EEE7.asm:105 BLTEQ @UNKNOWN3
    case 0xC2EFDC: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C2/C2EEE7.asm:106 LDX #$3000
    case 0xC2EFDE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003000, 3); return true;
    // src/unknown/C2/C2EEE7.asm:106 LDX #$3000
    // Overlapping static entry reached from 0xC2EFDE.
    case 0xC2EFE0: cpu.execute_instruction<0x30>(0x000080, 2); return true;
    // src/unknown/C2/C2EEE7.asm:107 BRA @UNKNOWN4
    case 0xC2EFE1: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C2/C2EEE7.asm:107 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC2EFE0.
    case 0xC2EFE2: cpu.execute_instruction<0x03>(0x0000A2, 2); return true;
    // src/unknown/C2/C2EEE7.asm:109 LDX #$2000
    case 0xC2EFE3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x002000, 3); return true;
    // src/unknown/C2/C2EEE7.asm:109 LDX #$2000
    // Overlapping static entry reached from 0xC2EFE2.
    case 0xC2EFE4: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C2/C2EEE7.asm:109 LDX #$2000
    // Overlapping static entry reached from 0xC2EFE3.
    case 0xC2EFE5: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:111 LOADPTR BUFFER, @LOCAL00
    case 0xC2EFE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:111 LOADPTR BUFFER, @LOCAL00
    // Overlapping static entry reached from 0xC2EFE6.
    case 0xC2EFE8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2EEE7.asm:111 LOADPTR BUFFER, @LOCAL00
    case 0xC2EFE9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:111 LOADPTR BUFFER, @LOCAL00
    case 0xC2EFEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2EEE7.asm:111 LOADPTR BUFFER, @LOCAL00
    // Overlapping static entry reached from 0xC2EFEB.
    case 0xC2EFED: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C2EEE7.asm:111 LOADPTR BUFFER, @LOCAL00
    case 0xC2EFEE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2EEE7.asm:112 LDY #$2000
    case 0xC2EFF0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/unknown/C2/C2EEE7.asm:112 LDY #$2000
    // Overlapping static entry reached from 0xC2EFF0.
    case 0xC2EFF2: cpu.execute_instruction<0x20>(0x0020E2, 3); return true;
    // src/unknown/C2/C2EEE7.asm:113 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EFF3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2EEE7.asm:114 LDA #0
    case 0xC2EFF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C2/C2EEE7.asm:115 JSL PREPARE_VRAM_COPY
    case 0xC2EFF7: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C2/C2EEE7.asm:115 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC2EFF5.
    case 0xC2EFF8: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C2/C2EEE7.asm:115 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC2EFF8.
    case 0xC2EFFA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2EEE7.asm:116 END_C_FUNCTION
    case 0xC2EFFB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2EEE7.asm:116 END_C_FUNCTION
    case 0xC2EFFC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2F09F.asm (unresolved).
bool execute_unresolved_c2_c2f09f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2F09F.asm:3 BEGIN_C_FUNCTION
    case 0xC2F09F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2F09F.asm:9 END_STACK_VARS
    case 0xC2F0A1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2F09F.asm:9 END_STACK_VARS
    case 0xC2F0A2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2F09F.asm:9 END_STACK_VARS
    case 0xC2F0A3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2F09F.asm:9 END_STACK_VARS
    case 0xC2F0A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2F09F.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2F0A4.
    case 0xC2F0A6: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2F09F.asm:9 END_STACK_VARS
    case 0xC2F0A7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2F09F.asm:9 END_STACK_VARS
    case 0xC2F0A8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2F09F.asm:10 TAX
    case 0xC2F0A9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F09F.asm:11 STX @LOCAL01
    case 0xC2F0AA: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C2/C2F09F.asm:12 LDA #0
    case 0xC2F0AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2F09F.asm:12 LDA #0
    // Overlapping static entry reached from 0xC2F0AC.
    case 0xC2F0AE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F09F.asm:13 STA @LOCAL00
    case 0xC2F0AF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2F09F.asm:14 BRA @UNKNOWN2
    case 0xC2F0B1: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C2/C2F09F.asm:16 ASL
    case 0xC2F0B3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2F09F.asm:17 PHA
    case 0xC2F0B4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C2/C2F09F.asm:18 LDX @LOCAL01
    case 0xC2F0B5: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C2/C2F09F.asm:19 TXA
    case 0xC2F0B7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F09F.asm:20 PLX
    case 0xC2F0B8: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C2/C2F09F.asm:21 CMP CURRENT_BATTLE_SPRITE_ENEMY_IDS,X
    case 0xC2F0B9: cpu.execute_instruction<0xDD>(0x00AABE, 3); return true;
    // src/unknown/C2/C2F09F.asm:22 BNE @UNKNOWN1
    case 0xC2F0BC: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C2/C2F09F.asm:23 LDA @LOCAL00
    case 0xC2F0BE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2F09F.asm:24 BRA @UNKNOWN3
    case 0xC2F0C0: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C2/C2F09F.asm:26 LDA @LOCAL00
    case 0xC2F0C2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2F09F.asm:27 INC
    case 0xC2F0C4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2F09F.asm:28 STA @LOCAL00
    case 0xC2F0C5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2F09F.asm:30 CMP #4
    case 0xC2F0C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C2/C2F09F.asm:30 CMP #4
    // Overlapping static entry reached from 0xC2F0C7.
    case 0xC2F0C9: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2F09F.asm:31 BCC @UNKNOWN0
    case 0xC2F0CA: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/unknown/C2/C2F09F.asm:32 LDA #0
    case 0xC2F0CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2F09F.asm:32 LDA #0
    // Overlapping static entry reached from 0xC2F0CC.
    case 0xC2F0CE: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2F09F.asm:34 END_C_FUNCTION
    case 0xC2F0CF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C2F09F.asm:34 END_C_FUNCTION
    case 0xC2F0D0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2F0D1.asm (unresolved).
bool execute_unresolved_c2_c2f0d1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2F0D1.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2F0D1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2F0D1.asm:7 END_STACK_VARS
    case 0xC2F0D3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2F0D1.asm:7 END_STACK_VARS
    case 0xC2F0D4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2F0D1.asm:7 END_STACK_VARS
    case 0xC2F0D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2F0D1.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2F0D5.
    case 0xC2F0D7: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2F0D1.asm:7 END_STACK_VARS
    case 0xC2F0D8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2F0D1.asm:8 LDY #0
    case 0xC2F0D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C2/C2F0D1.asm:8 LDY #0
    // Overlapping static entry reached from 0xC2F0D9.
    case 0xC2F0DB: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C2/C2F0D1.asm:9 STY @LOCAL01
    case 0xC2F0DC: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C2/C2F0D1.asm:10 TYX
    case 0xC2F0DE: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C2F0D1.asm:11 STX @LOCAL00
    case 0xC2F0DF: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C2F0D1.asm:12 BRA @UNKNOWN2
    case 0xC2F0E1: cpu.execute_instruction<0x80>(0x000037, 2); return true;
    // src/unknown/C2/C2F0D1.asm:14 TXA
    case 0xC2F0E3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F0D1.asm:15 ASL
    case 0xC2F0E4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2F0D1.asm:16 TAX
    case 0xC2F0E5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F0D1.asm:17 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC2F0E6: cpu.execute_instruction<0xBD>(0x009F8C, 3); return true;
    // src/unknown/C2/C2F0D1.asm:18 LDY #.SIZEOF(enemy_data)
    case 0xC2F0E9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C2F0D1.asm:18 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2F0E9.
    case 0xC2F0EB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F0D1.asm:19 JSL MULT168
    case 0xC2F0EC: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2F0D1.asm:20 CLC
    case 0xC2F0F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F0D1.asm:21 ADC #enemy_data::battle_sprite
    case 0xC2F0F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00001C, 3); return true;
    // src/unknown/C2/C2F0D1.asm:21 ADC #enemy_data::battle_sprite
    // Overlapping static entry reached from 0xC2F0F1.
    case 0xC2F0F3: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2F0D1.asm:22 TAX
    case 0xC2F0F4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F0D1.asm:23 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC2F0F5: cpu.execute_instruction<0xBF>(0xD59589, 4); return true;
    // src/unknown/C2/C2F0D1.asm:24 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2F0F9: cpu.execute_instruction<0x20>(0x00EFFD, 3); return true;
    // src/unknown/C2/C2F0D1.asm:25 STA @VIRTUAL02
    case 0xC2F0FC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F0D1.asm:26 LDY @LOCAL01
    case 0xC2F0FE: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C2/C2F0D1.asm:27 TYA
    case 0xC2F100: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2F0D1.asm:28 CLC
    case 0xC2F101: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F0D1.asm:29 ADC @VIRTUAL02
    case 0xC2F102: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C2F0D1.asm:30 TAY
    case 0xC2F104: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2F0D1.asm:31 STY @LOCAL01
    case 0xC2F105: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C2/C2F0D1.asm:32 CPY #32
    case 0xC2F107: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/unknown/C2/C2F0D1.asm:32 CPY #32
    // Overlapping static entry reached from 0xC2F107.
    case 0xC2F109: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2F0D1.asm:33 BLTEQ @UNKNOWN1
    case 0xC2F10A: cpu.execute_instruction<0x90>(0x000009, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2F0D1.asm:33 BLTEQ @UNKNOWN1
    case 0xC2F10C: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C2/C2F0D1.asm:34 LDX @LOCAL00
    case 0xC2F10E: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C2F0D1.asm:35 STX ENEMIES_IN_BATTLE
    case 0xC2F110: cpu.execute_instruction<0x8E>(0x009F8A, 3); return true;
    // src/unknown/C2/C2F0D1.asm:36 BRA @UNKNOWN3
    case 0xC2F113: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C2/C2F0D1.asm:38 LDX @LOCAL00
    case 0xC2F115: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C2F0D1.asm:39 INX
    case 0xC2F117: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2F0D1.asm:40 STX @LOCAL00
    case 0xC2F118: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C2F0D1.asm:42 CPX ENEMIES_IN_BATTLE
    case 0xC2F11A: cpu.execute_instruction<0xEC>(0x009F8A, 3); return true;
    // src/unknown/C2/C2F0D1.asm:43 BCC @UNKNOWN0
    case 0xC2F11D: cpu.execute_instruction<0x90>(0x0000C4, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2F0D1.asm:45 END_C_FUNCTION
    case 0xC2F11F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2F0D1.asm:45 END_C_FUNCTION
    case 0xC2F120: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2F121.asm (unresolved).
bool execute_unresolved_c2_c2f121_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2F121.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2F121: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2F121.asm:20 END_STACK_VARS
    case 0xC2F123: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2F121.asm:20 END_STACK_VARS
    case 0xC2F124: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2F121.asm:20 END_STACK_VARS
    case 0xC2F125: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D9, 2); else cpu.execute_instruction<0x69>(0x00FFD9, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2F121.asm:20 END_STACK_VARS
    // Overlapping static entry reached from 0xC2F125.
    case 0xC2F127: cpu.execute_instruction<0xFF>(0xF29C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2F121.asm:20 END_STACK_VARS
    case 0xC2F128: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:38 STZ BATTLE_SPRITE_ROW_WIDTH+2
    case 0xC2F129: cpu.execute_instruction<0x9C>(0x00AEF2, 3); return true;
    // src/unknown/C2/C2F121.asm:38 STZ BATTLE_SPRITE_ROW_WIDTH+2
    // Overlapping static entry reached from 0xC2F127.
    case 0xC2F12B: cpu.execute_instruction<0xAE>(0x00F09C, 3); return true;
    // src/unknown/C2/C2F121.asm:39 STZ BATTLE_SPRITE_ROW_WIDTH
    case 0xC2F12C: cpu.execute_instruction<0x9C>(0x00AEF0, 3); return true;
    // src/unknown/C2/C2F121.asm:39 STZ BATTLE_SPRITE_ROW_WIDTH
    // Overlapping static entry reached from 0xC2F12B.
    case 0xC2F12E: cpu.execute_instruction<0xAE>(0x0008A2, 3); return true;
    // src/unknown/C2/C2F121.asm:40 LDX #8
    case 0xC2F12F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C2/C2F121.asm:40 LDX #8
    // Overlapping static entry reached from 0xC2F12F.
    case 0xC2F131: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C2/C2F121.asm:41 STX @LOCAL0B
    case 0xC2F132: cpu.execute_instruction<0x86>(0x000025, 2); return true;
    // src/unknown/C2/C2F121.asm:42 JMP @UNKNOWN10
    case 0xC2F134: cpu.execute_instruction<0x4C>(0x00F208, 3); return true;
    // src/unknown/C2/C2F121.asm:44 TXA
    case 0xC2F137: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:45 LDY #.SIZEOF(battler)
    case 0xC2F138: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:45 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F138.
    case 0xC2F13A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:46 JSL MULT168
    case 0xC2F13B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2F121.asm:47 TAY
    case 0xC2F13F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:48 STY @LOCAL0A
    case 0xC2F140: cpu.execute_instruction<0x84>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:49 LDA BATTLERS_TABLE+battler::consciousness,Y
    case 0xC2F142: cpu.execute_instruction<0xB9>(0x009FB8, 3); return true;
    // src/unknown/C2/C2F121.asm:50 AND #$00FF
    case 0xC2F145: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC2F145.
    case 0xC2F147: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C2F121.asm:51 BEQL @UNKNOWN9
    case 0xC2F148: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:51 BEQL @UNKNOWN9
    case 0xC2F14A: cpu.execute_instruction<0x4C>(0x00F203, 3); return true;
    // src/unknown/C2/C2F121.asm:52 LDA BATTLERS_TABLE+battler::ally_or_enemy,Y
    case 0xC2F14D: cpu.execute_instruction<0xB9>(0x009FBA, 3); return true;
    // src/unknown/C2/C2F121.asm:53 AND #$00FF
    case 0xC2F150: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC2F150.
    case 0xC2F152: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2F121.asm:54 CMP #1
    case 0xC2F153: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2F121.asm:54 CMP #1
    // Overlapping static entry reached from 0xC2F153.
    case 0xC2F155: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:55 BNEL @UNKNOWN9
    case 0xC2F156: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:55 BNEL @UNKNOWN9
    case 0xC2F158: cpu.execute_instruction<0x4C>(0x00F203, 3); return true;
    // src/unknown/C2/C2F121.asm:56 LDA BATTLERS_TABLE,Y
    case 0xC2F15B: cpu.execute_instruction<0xB9>(0x009FAC, 3); return true;
    // src/unknown/C2/C2F121.asm:57 JSR UNKNOWN_C2F09F
    case 0xC2F15E: cpu.execute_instruction<0x20>(0x00F09F, 3); return true;
    // src/unknown/C2/C2F121.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F161: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:59 LDY @LOCAL0A
    case 0xC2F163: cpu.execute_instruction<0xA4>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:60 STA BATTLERS_TABLE+battler::vram_sprite_index,Y
    case 0xC2F165: cpu.execute_instruction<0x99>(0x009FEF, 3); return true;
    // src/unknown/C2/C2F121.asm:61 REP #PROC_FLAGS::ACCUM8
    case 0xC2F168: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:62 LDA BATTLERS_TABLE+battler::row,Y
    case 0xC2F16A: cpu.execute_instruction<0xB9>(0x009FBC, 3); return true;
    // src/unknown/C2/C2F121.asm:63 AND #$00FF
    case 0xC2F16D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC2F16D.
    case 0xC2F16F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:64 STA @LOCAL09
    case 0xC2F170: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/unknown/C2/C2F121.asm:65 LDA BATTLERS_TABLE+battler::sprite,Y
    case 0xC2F172: cpu.execute_instruction<0xB9>(0x009FAE, 3); return true;
    // src/unknown/C2/C2F121.asm:66 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2F175: cpu.execute_instruction<0x20>(0x00EFFD, 3); return true;
    // src/unknown/C2/C2F121.asm:67 STA @VIRTUAL02
    case 0xC2F178: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:68 LDA @LOCAL09
    case 0xC2F17A: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/unknown/C2/C2F121.asm:69 ASL
    case 0xC2F17C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:70 TAX
    case 0xC2F17D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:71 LDA BATTLE_SPRITE_ROW_WIDTH,X
    case 0xC2F17E: cpu.execute_instruction<0xBD>(0x00AEF0, 3); return true;
    // src/unknown/C2/C2F121.asm:72 BEQ @UNKNOWN3
    case 0xC2F181: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:73 INC @VIRTUAL02
    case 0xC2F183: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:75 LDA @LOCAL09
    case 0xC2F185: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/unknown/C2/C2F121.asm:76 ASL
    case 0xC2F187: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:77 CLC
    case 0xC2F188: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:78 ADC #.LOWORD(BATTLE_SPRITE_ROW_WIDTH)
    case 0xC2F189: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00AEF0, 3); return true;
    // src/unknown/C2/C2F121.asm:78 ADC #.LOWORD(BATTLE_SPRITE_ROW_WIDTH)
    // Overlapping static entry reached from 0xC2F189.
    case 0xC2F18B: cpu.execute_instruction<0xAE>(0x00B9A8, 3); return true;
    // src/unknown/C2/C2F121.asm:79 TAY
    case 0xC2F18C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:80 LDA __BSS_START__,Y
    case 0xC2F18D: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:80 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC2F18B.
    case 0xC2F18E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:81 CLC
    case 0xC2F190: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:82 ADC @VIRTUAL02
    case 0xC2F191: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:83 CMP #30
    case 0xC2F193: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C2/C2F121.asm:83 CMP #30
    // Overlapping static entry reached from 0xC2F193.
    case 0xC2F195: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:84 BGT @UNKNOWN5
    case 0xC2F196: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C2/C2F121.asm:84 BGT @UNKNOWN5
    case 0xC2F198: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C2/C2F121.asm:85 STA __BSS_START__,Y
    case 0xC2F19A: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:86 BRA @UNKNOWN9
    case 0xC2F19D: cpu.execute_instruction<0x80>(0x000064, 2); return true;
    // src/unknown/C2/C2F121.asm:88 LDA #1
    case 0xC2F19F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2F121.asm:88 LDA #1
    // Overlapping static entry reached from 0xC2F19F.
    case 0xC2F1A1: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C2/C2F121.asm:89 SEC
    case 0xC2F1A2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:90 SBC @LOCAL09
    case 0xC2F1A3: cpu.execute_instruction<0xE5>(0x000021, 2); return true;
    // src/unknown/C2/C2F121.asm:91 STA @LOCAL0A
    case 0xC2F1A5: cpu.execute_instruction<0x85>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:92 LDX @LOCAL0B
    case 0xC2F1A7: cpu.execute_instruction<0xA6>(0x000025, 2); return true;
    // src/unknown/C2/C2F121.asm:93 TXA
    case 0xC2F1A9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:94 LDY #.SIZEOF(battler)
    case 0xC2F1AA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:94 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F1AA.
    case 0xC2F1AC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:95 JSL MULT168
    case 0xC2F1AD: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2F121.asm:96 TAX
    case 0xC2F1B1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:97 LDA BATTLERS_TABLE+battler::sprite,X
    case 0xC2F1B2: cpu.execute_instruction<0xBD>(0x009FAE, 3); return true;
    // src/unknown/C2/C2F121.asm:98 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2F1B5: cpu.execute_instruction<0x20>(0x00EFFD, 3); return true;
    // src/unknown/C2/C2F121.asm:99 STA @VIRTUAL02
    case 0xC2F1B8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:100 LDA @LOCAL0A
    case 0xC2F1BA: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:101 ASL
    case 0xC2F1BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:102 TAX
    case 0xC2F1BD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:103 LDA BATTLE_SPRITE_ROW_WIDTH,X
    case 0xC2F1BE: cpu.execute_instruction<0xBD>(0x00AEF0, 3); return true;
    // src/unknown/C2/C2F121.asm:104 BEQ @UNKNOWN6
    case 0xC2F1C1: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:105 INC @VIRTUAL02
    case 0xC2F1C3: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:107 LDA @LOCAL0A
    case 0xC2F1C5: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:108 ASL
    case 0xC2F1C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:109 CLC
    case 0xC2F1C8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:110 ADC #.LOWORD(BATTLE_SPRITE_ROW_WIDTH)
    case 0xC2F1C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00AEF0, 3); return true;
    // src/unknown/C2/C2F121.asm:110 ADC #.LOWORD(BATTLE_SPRITE_ROW_WIDTH)
    // Overlapping static entry reached from 0xC2F1C9.
    case 0xC2F1CB: cpu.execute_instruction<0xAE>(0x0084A8, 3); return true;
    // src/unknown/C2/C2F121.asm:111 TAY
    case 0xC2F1CC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:112 STY @LOCAL08
    case 0xC2F1CD: cpu.execute_instruction<0x84>(0x00001F, 2); return true;
    // src/unknown/C2/C2F121.asm:112 STY @LOCAL08
    // Overlapping static entry reached from 0xC2F1CB.
    case 0xC2F1CE: cpu.execute_instruction<0x1F>(0x0000B9, 4); return true;
    // src/unknown/C2/C2F121.asm:113 LDA __BSS_START__,Y
    case 0xC2F1CF: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:114 CLC
    case 0xC2F1D2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:115 ADC @VIRTUAL02
    case 0xC2F1D3: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:116 CMP #30
    case 0xC2F1D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C2/C2F121.asm:116 CMP #30
    // Overlapping static entry reached from 0xC2F1D5.
    case 0xC2F1D7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:117 BGT @UNKNOWN8
    case 0xC2F1D8: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C2/C2F121.asm:117 BGT @UNKNOWN8
    case 0xC2F1DA: cpu.execute_instruction<0xB0>(0x000021, 2); return true;
    // src/unknown/C2/C2F121.asm:118 LDX @LOCAL0B
    case 0xC2F1DC: cpu.execute_instruction<0xA6>(0x000025, 2); return true;
    // src/unknown/C2/C2F121.asm:119 TXA
    case 0xC2F1DE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:120 LDY #.SIZEOF(battler)
    case 0xC2F1DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:120 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F1DF.
    case 0xC2F1E1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:121 JSL MULT168
    case 0xC2F1E2: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2F121.asm:122 TAX
    case 0xC2F1E6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:123 LDA @LOCAL0A
    case 0xC2F1E7: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:124 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F1E9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:125 STA BATTLERS_TABLE+battler::row,X
    case 0xC2F1EB: cpu.execute_instruction<0x9D>(0x009FBC, 3); return true;
    // src/unknown/C2/C2F121.asm:126 LDY @LOCAL08
    case 0xC2F1EE: cpu.execute_instruction<0xA4>(0x00001F, 2); return true;
    // src/unknown/C2/C2F121.asm:127 REP #PROC_FLAGS::ACCUM8
    case 0xC2F1F0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:128 LDA __BSS_START__,Y
    case 0xC2F1F2: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:129 CLC
    case 0xC2F1F5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:130 ADC @VIRTUAL02
    case 0xC2F1F6: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:131 STA __BSS_START__,Y
    case 0xC2F1F8: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:132 BRA @UNKNOWN9
    case 0xC2F1FB: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C2/C2F121.asm:134 LDA #0
    case 0xC2F1FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:134 LDA #0
    // Overlapping static entry reached from 0xC2F1FD.
    case 0xC2F1FF: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C2/C2F121.asm:135 JMP @UNKNOWN60
    case 0xC2F200: cpu.execute_instruction<0x4C>(0x00F722, 3); return true;
    // src/unknown/C2/C2F121.asm:137 LDX @LOCAL0B
    case 0xC2F203: cpu.execute_instruction<0xA6>(0x000025, 2); return true;
    // src/unknown/C2/C2F121.asm:138 INX
    case 0xC2F205: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:139 STX @LOCAL0B
    case 0xC2F206: cpu.execute_instruction<0x86>(0x000025, 2); return true;
    // src/unknown/C2/C2F121.asm:141 CPX #BATTLER_COUNT
    case 0xC2F208: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:141 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2F208.
    case 0xC2F20A: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C2/C2F121.asm:142 BCCL @UNKNOWN0
    case 0xC2F20B: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:142 BCCL @UNKNOWN0
    case 0xC2F20D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:142 BCCL @UNKNOWN0
    case 0xC2F20F: cpu.execute_instruction<0x4C>(0x00F137, 3); return true;
    // src/unknown/C2/C2F121.asm:144 LDA BATTLERS_TABLE+8*.SIZEOF(battler)+16
    case 0xC2F212: cpu.execute_instruction<0xAD>(0x00A22C, 3); return true;
    // src/unknown/C2/C2F121.asm:145 AND #$00FF
    case 0xC2F215: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:145 AND #$00FF
    // Overlapping static entry reached from 0xC2F215.
    case 0xC2F217: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:146 STA @LOCAL0A
    case 0xC2F218: cpu.execute_instruction<0x85>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:147 LDA #32
    case 0xC2F21A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:147 LDA #32
    // Overlapping static entry reached from 0xC2F21A.
    case 0xC2F21C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:148 STA @LOCAL07
    case 0xC2F21D: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/unknown/C2/C2F121.asm:149 STA @LOCAL06
    case 0xC2F21F: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:150 LDX #8
    case 0xC2F221: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C2/C2F121.asm:150 LDX #8
    // Overlapping static entry reached from 0xC2F221.
    case 0xC2F223: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C2/C2F121.asm:151 STX @LOCAL08
    case 0xC2F224: cpu.execute_instruction<0x86>(0x00001F, 2); return true;
    // src/unknown/C2/C2F121.asm:152 JMP @UNKNOWN21
    case 0xC2F226: cpu.execute_instruction<0x4C>(0x00F32F, 3); return true;
    // src/unknown/C2/C2F121.asm:154 TXA
    case 0xC2F229: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:155 LDY #.SIZEOF(battler)
    case 0xC2F22A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:155 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F22A.
    case 0xC2F22C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:156 JSL MULT168
    case 0xC2F22D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2F121.asm:157 TAY
    case 0xC2F231: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:158 STY @LOCAL09
    case 0xC2F232: cpu.execute_instruction<0x84>(0x000021, 2); return true;
    // src/unknown/C2/C2F121.asm:159 LDA BATTLERS_TABLE+battler::consciousness,Y
    case 0xC2F234: cpu.execute_instruction<0xB9>(0x009FB8, 3); return true;
    // src/unknown/C2/C2F121.asm:160 AND #$00FF
    case 0xC2F237: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:160 AND #$00FF
    // Overlapping static entry reached from 0xC2F237.
    case 0xC2F239: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C2F121.asm:161 BEQL @UNKNOWN20
    case 0xC2F23A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:161 BEQL @UNKNOWN20
    case 0xC2F23C: cpu.execute_instruction<0x4C>(0x00F32A, 3); return true;
    // src/unknown/C2/C2F121.asm:162 LDA BATTLERS_TABLE+battler::ally_or_enemy,Y
    case 0xC2F23F: cpu.execute_instruction<0xB9>(0x009FBA, 3); return true;
    // src/unknown/C2/C2F121.asm:163 AND #$00FF
    case 0xC2F242: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:163 AND #$00FF
    // Overlapping static entry reached from 0xC2F242.
    case 0xC2F244: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2F121.asm:164 CMP #1
    case 0xC2F245: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2F121.asm:164 CMP #1
    // Overlapping static entry reached from 0xC2F245.
    case 0xC2F247: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:165 BNEL @UNKNOWN20
    case 0xC2F248: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:165 BNEL @UNKNOWN20
    case 0xC2F24A: cpu.execute_instruction<0x4C>(0x00F32A, 3); return true;
    // src/unknown/C2/C2F121.asm:166 LDA BATTLERS_TABLE+16,Y
    case 0xC2F24D: cpu.execute_instruction<0xB9>(0x009FBC, 3); return true;
    // src/unknown/C2/C2F121.asm:167 AND #$00FF
    case 0xC2F250: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:167 AND #$00FF
    // Overlapping static entry reached from 0xC2F250.
    case 0xC2F252: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C2/C2F121.asm:168 CMP @LOCAL0A
    case 0xC2F253: cpu.execute_instruction<0xC5>(0x000023, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:169 BNEL @UNKNOWN20
    case 0xC2F255: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:169 BNEL @UNKNOWN20
    case 0xC2F257: cpu.execute_instruction<0x4C>(0x00F32A, 3); return true;
    // src/unknown/C2/C2F121.asm:170 LDA BATTLERS_TABLE+battler::sprite,Y
    case 0xC2F25A: cpu.execute_instruction<0xB9>(0x009FAE, 3); return true;
    // src/unknown/C2/C2F121.asm:171 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2F25D: cpu.execute_instruction<0x20>(0x00EFFD, 3); return true;
    // src/unknown/C2/C2F121.asm:172 LSR
    case 0xC2F260: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:173 STA @LOCAL05
    case 0xC2F261: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:174 LDA @LOCAL06
    case 0xC2F263: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:175 CMP @LOCAL07
    case 0xC2F265: cpu.execute_instruction<0xC5>(0x00001D, 2); return true;
    // src/unknown/C2/C2F121.asm:176 BNE @UNKNOWN17
    case 0xC2F267: cpu.execute_instruction<0xD0>(0x000038, 2); return true;
    // src/unknown/C2/C2F121.asm:177 LDA @LOCAL06
    case 0xC2F269: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:178 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F26B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:179 LDY @LOCAL09
    case 0xC2F26D: cpu.execute_instruction<0xA4>(0x000021, 2); return true;
    // src/unknown/C2/C2F121.asm:180 STA BATTLERS_TABLE+battler::sprite_x,Y
    case 0xC2F26F: cpu.execute_instruction<0x99>(0x009FF0, 3); return true;
    // src/unknown/C2/C2F121.asm:181 REP #PROC_FLAGS::ACCUM8
    case 0xC2F272: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:182 LDA @LOCAL06
    case 0xC2F274: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:183 SEC
    case 0xC2F276: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:184 SBC @LOCAL05
    case 0xC2F277: cpu.execute_instruction<0xE5>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:185 STA @LOCAL06
    case 0xC2F279: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:186 LDA @LOCAL07
    case 0xC2F27B: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/unknown/C2/C2F121.asm:187 CLC
    case 0xC2F27D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:188 ADC @LOCAL05
    case 0xC2F27E: cpu.execute_instruction<0x65>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:189 STA @LOCAL07
    case 0xC2F280: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/unknown/C2/C2F121.asm:190 JSR RAND_LONG
    case 0xC2F282: cpu.execute_instruction<0x20>(0x0069EF, 3); return true;
    // src/unknown/C2/C2F121.asm:191 REP #PROC_FLAGS::ACCUM8
    case 0xC2F285: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:192 AND #$00FF
    case 0xC2F287: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:192 AND #$00FF
    // Overlapping static entry reached from 0xC2F287.
    case 0xC2F289: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C2/C2F121.asm:193 AND #$0001
    case 0xC2F28A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C2/C2F121.asm:193 AND #$0001
    // Overlapping static entry reached from 0xC2F28A.
    case 0xC2F28C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F121.asm:194 BEQ @UNKNOWN16
    case 0xC2F28D: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C2/C2F121.asm:195 LDA @LOCAL06
    case 0xC2F28F: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:196 STA @VIRTUAL04
    case 0xC2F291: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:197 STA @LOCAL04
    case 0xC2F293: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // src/unknown/C2/C2F121.asm:198 JMP @UNKNOWN20
    case 0xC2F295: cpu.execute_instruction<0x4C>(0x00F32A, 3); return true;
    // src/unknown/C2/C2F121.asm:200 LDA @LOCAL07
    case 0xC2F298: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/unknown/C2/C2F121.asm:201 STA @VIRTUAL04
    case 0xC2F29A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:202 STA @LOCAL04
    case 0xC2F29C: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // src/unknown/C2/C2F121.asm:203 JMP @UNKNOWN20
    case 0xC2F29E: cpu.execute_instruction<0x4C>(0x00F32A, 3); return true;
    // src/unknown/C2/C2F121.asm:205 LDA #32
    case 0xC2F2A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:205 LDA #32
    // Overlapping static entry reached from 0xC2F2A1.
    case 0xC2F2A3: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C2/C2F121.asm:206 SEC
    case 0xC2F2A4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:207 SBC @LOCAL06
    case 0xC2F2A5: cpu.execute_instruction<0xE5>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:208 STA @LOCAL09
    case 0xC2F2A7: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/unknown/C2/C2F121.asm:209 LDA @LOCAL07
    case 0xC2F2A9: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/unknown/C2/C2F121.asm:210 SEC
    case 0xC2F2AB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:211 SBC #32
    case 0xC2F2AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000020, 2); else cpu.execute_instruction<0xE9>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:211 SBC #32
    // Overlapping static entry reached from 0xC2F2AC.
    case 0xC2F2AE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:212 STA @VIRTUAL02
    case 0xC2F2AF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:213 LDA @LOCAL09
    case 0xC2F2B1: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/unknown/C2/C2F121.asm:214 CMP @VIRTUAL02
    case 0xC2F2B3: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:215 BCC @UNKNOWN18
    case 0xC2F2B5: cpu.execute_instruction<0x90>(0x000011, 2); return true;
    // src/unknown/C2/C2F121.asm:216 CMP @VIRTUAL02
    case 0xC2F2B7: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:217 BNE @UNKNOWN19
    case 0xC2F2B9: cpu.execute_instruction<0xD0>(0x00003F, 2); return true;
    // src/unknown/C2/C2F121.asm:218 JSR RAND_LONG
    case 0xC2F2BB: cpu.execute_instruction<0x20>(0x0069EF, 3); return true;
    // src/unknown/C2/C2F121.asm:219 REP #PROC_FLAGS::ACCUM8
    case 0xC2F2BE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:220 AND #$00FF
    case 0xC2F2C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:220 AND #$00FF
    // Overlapping static entry reached from 0xC2F2C0.
    case 0xC2F2C2: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C2/C2F121.asm:221 AND #$0001
    case 0xC2F2C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C2/C2F121.asm:221 AND #$0001
    // Overlapping static entry reached from 0xC2F2C3.
    case 0xC2F2C5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F121.asm:222 BEQ @UNKNOWN19
    case 0xC2F2C6: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/unknown/C2/C2F121.asm:224 LDA @LOCAL05
    case 0xC2F2C8: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:225 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F2CA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:226 STA @VIRTUAL00
    case 0xC2F2CC: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:227 REP #PROC_FLAGS::ACCUM8
    case 0xC2F2CE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:228 LDA @LOCAL06
    case 0xC2F2D0: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:229 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F2D2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:230 SEC
    case 0xC2F2D4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:231 SBC @VIRTUAL00
    case 0xC2F2D5: cpu.execute_instruction<0xE5>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:232 DEC
    case 0xC2F2D7: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:233 STA @LOCAL03
    case 0xC2F2D8: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2F121.asm:234 LDX @LOCAL08
    case 0xC2F2DA: cpu.execute_instruction<0xA6>(0x00001F, 2); return true;
    // src/unknown/C2/C2F121.asm:235 REP #PROC_FLAGS::ACCUM8
    case 0xC2F2DC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:236 TXA
    case 0xC2F2DE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:237 LDY #.SIZEOF(battler)
    case 0xC2F2DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:237 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F2DF.
    case 0xC2F2E1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:238 JSL MULT168
    case 0xC2F2E2: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2F121.asm:239 TAX
    case 0xC2F2E6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:240 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F2E7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:241 LDA @LOCAL03
    case 0xC2F2E9: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2F121.asm:242 STA BATTLERS_TABLE+battler::sprite_x,X
    case 0xC2F2EB: cpu.execute_instruction<0x9D>(0x009FF0, 3); return true;
    // src/unknown/C2/C2F121.asm:243 REP #PROC_FLAGS::ACCUM8
    case 0xC2F2EE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:244 AND #$00FF
    case 0xC2F2F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:244 AND #$00FF
    // Overlapping static entry reached from 0xC2F2F0.
    case 0xC2F2F2: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C2/C2F121.asm:245 SEC
    case 0xC2F2F3: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:246 SBC @LOCAL05
    case 0xC2F2F4: cpu.execute_instruction<0xE5>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:247 STA @LOCAL06
    case 0xC2F2F6: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:248 BRA @UNKNOWN20
    case 0xC2F2F8: cpu.execute_instruction<0x80>(0x000030, 2); return true;
    // src/unknown/C2/C2F121.asm:250 LDA @LOCAL05
    case 0xC2F2FA: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:251 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F2FC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:252 STA @VIRTUAL00
    case 0xC2F2FE: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:253 REP #PROC_FLAGS::ACCUM8
    case 0xC2F300: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:254 LDA @LOCAL07
    case 0xC2F302: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/unknown/C2/C2F121.asm:255 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F304: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:256 CLC
    case 0xC2F306: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:257 ADC @VIRTUAL00
    case 0xC2F307: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:258 INC
    case 0xC2F309: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:259 STA @LOCAL03
    case 0xC2F30A: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2F121.asm:260 LDX @LOCAL08
    case 0xC2F30C: cpu.execute_instruction<0xA6>(0x00001F, 2); return true;
    // src/unknown/C2/C2F121.asm:261 REP #PROC_FLAGS::ACCUM8
    case 0xC2F30E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:262 TXA
    case 0xC2F310: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:263 LDY #.SIZEOF(battler)
    case 0xC2F311: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:263 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F311.
    case 0xC2F313: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:264 JSL MULT168
    case 0xC2F314: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2F121.asm:265 TAX
    case 0xC2F318: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:266 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F319: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:267 LDA @LOCAL03
    case 0xC2F31B: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2F121.asm:268 STA BATTLERS_TABLE+battler::sprite_x,X
    case 0xC2F31D: cpu.execute_instruction<0x9D>(0x009FF0, 3); return true;
    // src/unknown/C2/C2F121.asm:269 REP #PROC_FLAGS::ACCUM8
    case 0xC2F320: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:270 AND #$00FF
    case 0xC2F322: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:270 AND #$00FF
    // Overlapping static entry reached from 0xC2F322.
    case 0xC2F324: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C2F121.asm:271 CLC
    case 0xC2F325: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:272 ADC @LOCAL05
    case 0xC2F326: cpu.execute_instruction<0x65>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:273 STA @LOCAL07
    case 0xC2F328: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/unknown/C2/C2F121.asm:275 LDX @LOCAL08
    case 0xC2F32A: cpu.execute_instruction<0xA6>(0x00001F, 2); return true;
    // src/unknown/C2/C2F121.asm:276 INX
    case 0xC2F32C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:277 STX @LOCAL08
    case 0xC2F32D: cpu.execute_instruction<0x86>(0x00001F, 2); return true;
    // src/unknown/C2/C2F121.asm:279 CPX #32
    case 0xC2F32F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:279 CPX #32
    // Overlapping static entry reached from 0xC2F32F.
    case 0xC2F331: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C2/C2F121.asm:280 BCCL @UNKNOWN12
    case 0xC2F332: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:280 BCCL @UNKNOWN12
    case 0xC2F334: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:280 BCCL @UNKNOWN12
    case 0xC2F336: cpu.execute_instruction<0x4C>(0x00F229, 3); return true;
    // src/unknown/C2/C2F121.asm:281 LDA @LOCAL04
    case 0xC2F339: cpu.execute_instruction<0xA5>(0x000017, 2); return true;
    // src/unknown/C2/C2F121.asm:282 STA @VIRTUAL04
    case 0xC2F33B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:283 LDY @VIRTUAL04
    case 0xC2F33D: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:284 STY @LOCAL0B
    case 0xC2F33F: cpu.execute_instruction<0x84>(0x000025, 2); return true;
    // src/unknown/C2/C2F121.asm:285 TYX
    case 0xC2F341: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:286 STX @LOCALEB_1
    case 0xC2F342: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:287 LDA #8
    case 0xC2F344: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C2/C2F121.asm:287 LDA #8
    // Overlapping static entry reached from 0xC2F344.
    case 0xC2F346: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:288 STA @VIRTUAL02
    case 0xC2F347: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:289 STA @LOCAL08
    case 0xC2F349: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // src/unknown/C2/C2F121.asm:290 JMP @UNKNOWN32
    case 0xC2F34B: cpu.execute_instruction<0x4C>(0x00F460, 3); return true;
    // src/unknown/C2/C2F121.asm:292 LDA @VIRTUAL02
    case 0xC2F34E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:293 LDY #.SIZEOF(battler)
    case 0xC2F350: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:293 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F350.
    case 0xC2F352: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:294 JSL MULT168
    case 0xC2F353: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2F121.asm:295 STA @VIRTUAL04
    case 0xC2F357: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:296 LDX @VIRTUAL04
    case 0xC2F359: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:297 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2F35B: cpu.execute_instruction<0xBD>(0x009FB8, 3); return true;
    // src/unknown/C2/C2F121.asm:298 AND #$00FF
    case 0xC2F35E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:298 AND #$00FF
    // Overlapping static entry reached from 0xC2F35E.
    case 0xC2F360: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C2F121.asm:299 BEQL @UNKNOWN31
    case 0xC2F361: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:299 BEQL @UNKNOWN31
    case 0xC2F363: cpu.execute_instruction<0x4C>(0x00F456, 3); return true;
    // src/unknown/C2/C2F121.asm:300 LDX @VIRTUAL04
    case 0xC2F366: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:301 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC2F368: cpu.execute_instruction<0xBD>(0x009FBA, 3); return true;
    // src/unknown/C2/C2F121.asm:302 AND #$00FF
    case 0xC2F36B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:302 AND #$00FF
    // Overlapping static entry reached from 0xC2F36B.
    case 0xC2F36D: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2F121.asm:303 CMP #1
    case 0xC2F36E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2F121.asm:303 CMP #1
    // Overlapping static entry reached from 0xC2F36E.
    case 0xC2F370: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:304 BNEL @UNKNOWN31
    case 0xC2F371: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:304 BNEL @UNKNOWN31
    case 0xC2F373: cpu.execute_instruction<0x4C>(0x00F456, 3); return true;
    // src/unknown/C2/C2F121.asm:305 LDX @VIRTUAL04
    case 0xC2F376: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:306 LDA BATTLERS_TABLE+16,X
    case 0xC2F378: cpu.execute_instruction<0xBD>(0x009FBC, 3); return true;
    // src/unknown/C2/C2F121.asm:307 AND #$00FF
    case 0xC2F37B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:307 AND #$00FF
    // Overlapping static entry reached from 0xC2F37B.
    case 0xC2F37D: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C2/C2F121.asm:308 CMP @LOCAL0A
    case 0xC2F37E: cpu.execute_instruction<0xC5>(0x000023, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C2F121.asm:309 BEQL @UNKNOWN31
    case 0xC2F380: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:309 BEQL @UNKNOWN31
    case 0xC2F382: cpu.execute_instruction<0x4C>(0x00F456, 3); return true;
    // src/unknown/C2/C2F121.asm:310 LDX @VIRTUAL04
    case 0xC2F385: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:311 LDA BATTLERS_TABLE+battler::sprite,X
    case 0xC2F387: cpu.execute_instruction<0xBD>(0x009FAE, 3); return true;
    // src/unknown/C2/C2F121.asm:312 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2F38A: cpu.execute_instruction<0x20>(0x00EFFD, 3); return true;
    // src/unknown/C2/C2F121.asm:313 LSR
    case 0xC2F38D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:314 STA @LOCAL01
    case 0xC2F38E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2F121.asm:315 LDY @LOCAL0B
    case 0xC2F390: cpu.execute_instruction<0xA4>(0x000025, 2); return true;
    // src/unknown/C2/C2F121.asm:316 STY @VIRTUAL02
    case 0xC2F392: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:317 LDX @LOCALEB_1
    case 0xC2F394: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:318 TXA
    case 0xC2F396: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:319 CMP @VIRTUAL02
    case 0xC2F397: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:320 BNE @UNKNOWN27
    case 0xC2F399: cpu.execute_instruction<0xD0>(0x00001D, 2); return true;
    // src/unknown/C2/C2F121.asm:321 TXA
    case 0xC2F39B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:322 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F39C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:323 LDX @VIRTUAL04
    case 0xC2F39E: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:324 STA BATTLERS_TABLE+battler::sprite_x,X
    case 0xC2F3A0: cpu.execute_instruction<0x9D>(0x009FF0, 3); return true;
    // src/unknown/C2/C2F121.asm:325 LDX @LOCALEB_1
    case 0xC2F3A3: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:326 REP #PROC_FLAGS::ACCUM8
    case 0xC2F3A5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:327 TXA
    case 0xC2F3A7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:328 SEC
    case 0xC2F3A8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:329 SBC @LOCAL01
    case 0xC2F3A9: cpu.execute_instruction<0xE5>(0x000012, 2); return true;
    // src/unknown/C2/C2F121.asm:330 TAX
    case 0xC2F3AB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:331 STX @LOCALEB_1
    case 0xC2F3AC: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:332 TYA
    case 0xC2F3AE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:333 CLC
    case 0xC2F3AF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:334 ADC @LOCAL01
    case 0xC2F3B0: cpu.execute_instruction<0x65>(0x000012, 2); return true;
    // src/unknown/C2/C2F121.asm:335 TAY
    case 0xC2F3B2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:336 STY @LOCAL0B
    case 0xC2F3B3: cpu.execute_instruction<0x84>(0x000025, 2); return true;
    // src/unknown/C2/C2F121.asm:337 JMP @UNKNOWN31
    case 0xC2F3B5: cpu.execute_instruction<0x4C>(0x00F456, 3); return true;
    // src/unknown/C2/C2F121.asm:339 CPY #32
    case 0xC2F3B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:339 CPY #32
    // Overlapping static entry reached from 0xC2F3B8.
    case 0xC2F3BA: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2F121.asm:340 BLTEQ @UNKNOWN30
    case 0xC2F3BB: cpu.execute_instruction<0x90>(0x000066, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2F121.asm:340 BLTEQ @UNKNOWN30
    case 0xC2F3BD: cpu.execute_instruction<0xF0>(0x000064, 2); return true;
    // src/unknown/C2/C2F121.asm:341 CPX #32
    case 0xC2F3BF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:341 CPX #32
    // Overlapping static entry reached from 0xC2F3BF.
    case 0xC2F3C1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:342 BGT @UNKNOWN29
    case 0xC2F3C2: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C2/C2F121.asm:342 BGT @UNKNOWN29
    case 0xC2F3C4: cpu.execute_instruction<0xB0>(0x000028, 2); return true;
    // src/unknown/C2/C2F121.asm:343 STX @VIRTUAL04
    case 0xC2F3C6: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:344 LDA #32
    case 0xC2F3C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:344 LDA #32
    // Overlapping static entry reached from 0xC2F3C8.
    case 0xC2F3CA: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C2/C2F121.asm:345 SEC
    case 0xC2F3CB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:346 SBC @VIRTUAL04
    case 0xC2F3CC: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:347 STA @LOCAL04ALT
    case 0xC2F3CE: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // src/unknown/C2/C2F121.asm:348 TYA
    case 0xC2F3D0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:349 SEC
    case 0xC2F3D1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:350 SBC #32
    case 0xC2F3D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000020, 2); else cpu.execute_instruction<0xE9>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:350 SBC #32
    // Overlapping static entry reached from 0xC2F3D2.
    case 0xC2F3D4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:351 STA @VIRTUAL04
    case 0xC2F3D5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:352 LDA @LOCAL04ALT
    case 0xC2F3D7: cpu.execute_instruction<0xA5>(0x000017, 2); return true;
    // src/unknown/C2/C2F121.asm:353 CMP @VIRTUAL04
    case 0xC2F3D9: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:354 BCC @UNKNOWN29
    case 0xC2F3DB: cpu.execute_instruction<0x90>(0x000011, 2); return true;
    // src/unknown/C2/C2F121.asm:355 CMP @VIRTUAL04
    case 0xC2F3DD: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:356 BNE @UNKNOWN30
    case 0xC2F3DF: cpu.execute_instruction<0xD0>(0x000042, 2); return true;
    // src/unknown/C2/C2F121.asm:357 JSR RAND_LONG
    case 0xC2F3E1: cpu.execute_instruction<0x20>(0x0069EF, 3); return true;
    // src/unknown/C2/C2F121.asm:358 REP #PROC_FLAGS::ACCUM8
    case 0xC2F3E4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:359 AND #$00FF
    case 0xC2F3E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:359 AND #$00FF
    // Overlapping static entry reached from 0xC2F3E6.
    case 0xC2F3E8: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C2/C2F121.asm:360 AND #$0001
    case 0xC2F3E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C2/C2F121.asm:360 AND #$0001
    // Overlapping static entry reached from 0xC2F3E9.
    case 0xC2F3EB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F121.asm:361 BEQ @UNKNOWN30
    case 0xC2F3EC: cpu.execute_instruction<0xF0>(0x000035, 2); return true;
    // src/unknown/C2/C2F121.asm:363 LDA @LOCAL01
    case 0xC2F3EE: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2F121.asm:364 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F3F0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:365 STA @VIRTUAL00
    case 0xC2F3F2: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:366 LDX @LOCALEB_1
    case 0xC2F3F4: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:367 REP #PROC_FLAGS::ACCUM8
    case 0xC2F3F6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:368 TXA
    case 0xC2F3F8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:369 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F3F9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:370 SEC
    case 0xC2F3FB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:371 SBC @VIRTUAL00
    case 0xC2F3FC: cpu.execute_instruction<0xE5>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:372 DEC
    case 0xC2F3FE: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:373 STA @LOCAL03
    case 0xC2F3FF: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2F121.asm:374 REP #PROC_FLAGS::ACCUM8
    case 0xC2F401: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:375 LDA @LOCAL08
    case 0xC2F403: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/unknown/C2/C2F121.asm:376 STA @VIRTUAL02
    case 0xC2F405: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:377 LDY #.SIZEOF(battler)
    case 0xC2F407: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:377 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F407.
    case 0xC2F409: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:378 JSL MULT168
    case 0xC2F40A: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2F121.asm:379 TAX
    case 0xC2F40E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:380 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F40F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:381 LDA @LOCAL03
    case 0xC2F411: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2F121.asm:382 STA BATTLERS_TABLE+battler::sprite_x,X
    case 0xC2F413: cpu.execute_instruction<0x9D>(0x009FF0, 3); return true;
    // src/unknown/C2/C2F121.asm:383 REP #PROC_FLAGS::ACCUM8
    case 0xC2F416: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:384 AND #$00FF
    case 0xC2F418: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:384 AND #$00FF
    // Overlapping static entry reached from 0xC2F418.
    case 0xC2F41A: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C2/C2F121.asm:385 SEC
    case 0xC2F41B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:386 SBC @LOCAL01
    case 0xC2F41C: cpu.execute_instruction<0xE5>(0x000012, 2); return true;
    // src/unknown/C2/C2F121.asm:387 TAX
    case 0xC2F41E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:388 STX @LOCALEB_1
    case 0xC2F41F: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:389 BRA @UNKNOWN31
    case 0xC2F421: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/unknown/C2/C2F121.asm:391 LDA @LOCAL01
    case 0xC2F423: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2F121.asm:392 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F425: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:393 STA @VIRTUAL00
    case 0xC2F427: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:394 LDY @LOCAL0B
    case 0xC2F429: cpu.execute_instruction<0xA4>(0x000025, 2); return true;
    // src/unknown/C2/C2F121.asm:395 REP #PROC_FLAGS::ACCUM8
    case 0xC2F42B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:396 TYA
    case 0xC2F42D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:397 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F42E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:398 CLC
    case 0xC2F430: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:399 ADC @VIRTUAL00
    case 0xC2F431: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:400 INC
    case 0xC2F433: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:401 STA @LOCAL03
    case 0xC2F434: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2F121.asm:402 REP #PROC_FLAGS::ACCUM8
    case 0xC2F436: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:403 LDA @LOCAL08
    case 0xC2F438: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/unknown/C2/C2F121.asm:404 STA @VIRTUAL02
    case 0xC2F43A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:405 LDY #.SIZEOF(battler)
    case 0xC2F43C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:405 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F43C.
    case 0xC2F43E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:406 JSL MULT168
    case 0xC2F43F: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2F121.asm:407 TAX
    case 0xC2F443: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:408 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F444: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:409 LDA @LOCAL03
    case 0xC2F446: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2F121.asm:410 STA BATTLERS_TABLE+battler::sprite_x,X
    case 0xC2F448: cpu.execute_instruction<0x9D>(0x009FF0, 3); return true;
    // src/unknown/C2/C2F121.asm:411 REP #PROC_FLAGS::ACCUM8
    case 0xC2F44B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:412 AND #$00FF
    case 0xC2F44D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:412 AND #$00FF
    // Overlapping static entry reached from 0xC2F44D.
    case 0xC2F44F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C2F121.asm:413 CLC
    case 0xC2F450: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:414 ADC @LOCAL01
    case 0xC2F451: cpu.execute_instruction<0x65>(0x000012, 2); return true;
    // src/unknown/C2/C2F121.asm:415 TAY
    case 0xC2F453: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:416 STY @LOCAL0B
    case 0xC2F454: cpu.execute_instruction<0x84>(0x000025, 2); return true;
    // src/unknown/C2/C2F121.asm:418 LDA @LOCAL08
    case 0xC2F456: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/unknown/C2/C2F121.asm:419 STA @VIRTUAL02
    case 0xC2F458: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:420 INC @VIRTUAL02
    case 0xC2F45A: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:421 LDA @VIRTUAL02
    case 0xC2F45C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:422 STA @LOCAL08
    case 0xC2F45E: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // src/unknown/C2/C2F121.asm:424 LDA @VIRTUAL02
    case 0xC2F460: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:425 CMP #32
    case 0xC2F462: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:425 CMP #32
    // Overlapping static entry reached from 0xC2F462.
    case 0xC2F464: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C2/C2F121.asm:426 BCCL @UNKNOWN23
    case 0xC2F465: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:426 BCCL @UNKNOWN23
    case 0xC2F467: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:426 BCCL @UNKNOWN23
    case 0xC2F469: cpu.execute_instruction<0x4C>(0x00F34E, 3); return true;
    // src/unknown/C2/C2F121.asm:427 LDA @LOCAL0A
    case 0xC2F46C: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:428 CMP #1
    case 0xC2F46E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2F121.asm:428 CMP #1
    // Overlapping static entry reached from 0xC2F46E.
    case 0xC2F470: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2F121.asm:429 BNE @UNKNOWN37
    case 0xC2F471: cpu.execute_instruction<0xD0>(0x000047, 2); return true;
    // src/unknown/C2/C2F121.asm:430 LDY @LOCAL0B
    case 0xC2F473: cpu.execute_instruction<0xA4>(0x000025, 2); return true;
    // src/unknown/C2/C2F121.asm:431 STY @VIRTUAL02
    case 0xC2F475: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:432 LDX @LOCALEB_1
    case 0xC2F477: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:433 TXA
    case 0xC2F479: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:434 CMP @VIRTUAL02
    case 0xC2F47A: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:435 BNE @UNKNOWN37
    case 0xC2F47C: cpu.execute_instruction<0xD0>(0x00003C, 2); return true;
    // src/unknown/C2/C2F121.asm:436 LDA #8
    case 0xC2F47E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C2/C2F121.asm:436 LDA #8
    // Overlapping static entry reached from 0xC2F47E.
    case 0xC2F480: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:437 STA @VIRTUAL02
    case 0xC2F481: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:438 BRA @UNKNOWN36
    case 0xC2F483: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/unknown/C2/C2F121.asm:440 LDA @VIRTUAL02
    case 0xC2F485: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:441 LDY #.SIZEOF(battler)
    case 0xC2F487: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:441 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F487.
    case 0xC2F489: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:442 JSL MULT168
    case 0xC2F48A: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2F121.asm:443 STA @LOCAL04ALT2
    case 0xC2F48E: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // src/unknown/C2/C2F121.asm:444 TAX
    case 0xC2F490: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:445 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2F491: cpu.execute_instruction<0xBD>(0x009FB8, 3); return true;
    // src/unknown/C2/C2F121.asm:446 AND #$00FF
    case 0xC2F494: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:446 AND #$00FF
    // Overlapping static entry reached from 0xC2F494.
    case 0xC2F496: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F121.asm:447 BEQ @UNKNOWN35
    case 0xC2F497: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C2/C2F121.asm:448 LDA @LOCAL04ALT2
    case 0xC2F499: cpu.execute_instruction<0xA5>(0x000017, 2); return true;
    // src/unknown/C2/C2F121.asm:449 TAX
    case 0xC2F49B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:450 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC2F49C: cpu.execute_instruction<0xBD>(0x009FBA, 3); return true;
    // src/unknown/C2/C2F121.asm:451 AND #$00FF
    case 0xC2F49F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:451 AND #$00FF
    // Overlapping static entry reached from 0xC2F49F.
    case 0xC2F4A1: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2F121.asm:452 CMP #1
    case 0xC2F4A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2F121.asm:452 CMP #1
    // Overlapping static entry reached from 0xC2F4A2.
    case 0xC2F4A4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2F121.asm:453 BNE @UNKNOWN35
    case 0xC2F4A5: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C2/C2F121.asm:454 LDA @LOCAL04ALT2
    case 0xC2F4A7: cpu.execute_instruction<0xA5>(0x000017, 2); return true;
    // src/unknown/C2/C2F121.asm:455 TAX
    case 0xC2F4A9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:456 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F4AA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:457 STZ BATTLERS_TABLE+battler::row,X
    case 0xC2F4AC: cpu.execute_instruction<0x9E>(0x009FBC, 3); return true;
    // src/unknown/C2/C2F121.asm:459 REP #PROC_FLAGS::ACCUM8
    case 0xC2F4AF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:460 INC @VIRTUAL02
    case 0xC2F4B1: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:462 LDA @VIRTUAL02
    case 0xC2F4B3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:463 CMP #32
    case 0xC2F4B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:463 CMP #32
    // Overlapping static entry reached from 0xC2F4B5.
    case 0xC2F4B7: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2F121.asm:464 BCC @UNKNOWN34
    case 0xC2F4B8: cpu.execute_instruction<0x90>(0x0000CB, 2); return true;
    // src/unknown/C2/C2F121.asm:466 LDX @LOCALEB_1
    case 0xC2F4BA: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:467 CPX @LOCAL06
    case 0xC2F4BC: cpu.execute_instruction<0xE4>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:468 BCS @UNKNOWN38
    case 0xC2F4BE: cpu.execute_instruction<0xB0>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:469 STX @LOCAL06
    case 0xC2F4C0: cpu.execute_instruction<0x86>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:471 LDY @LOCAL0B
    case 0xC2F4C2: cpu.execute_instruction<0xA4>(0x000025, 2); return true;
    // src/unknown/C2/C2F121.asm:472 CPY @LOCAL07
    case 0xC2F4C4: cpu.execute_instruction<0xC4>(0x00001D, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2F121.asm:473 BLTEQ @UNKNOWN39
    case 0xC2F4C6: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2F121.asm:473 BLTEQ @UNKNOWN39
    case 0xC2F4C8: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:474 STY @LOCAL07
    case 0xC2F4CA: cpu.execute_instruction<0x84>(0x00001D, 2); return true;
    // src/unknown/C2/C2F121.asm:476 LDA @LOCAL06
    case 0xC2F4CC: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:477 CLC
    case 0xC2F4CE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:478 ADC @LOCAL07
    case 0xC2F4CF: cpu.execute_instruction<0x65>(0x00001D, 2); return true;
    // src/unknown/C2/C2F121.asm:479 LSR
    case 0xC2F4D1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:480 STA @VIRTUAL02
    case 0xC2F4D2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:481 LDA #32
    case 0xC2F4D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:481 LDA #32
    // Overlapping static entry reached from 0xC2F4D4.
    case 0xC2F4D6: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C2/C2F121.asm:482 SEC
    case 0xC2F4D7: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:483 SBC @VIRTUAL02
    case 0xC2F4D8: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:484 SEC
    case 0xC2F4DA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:485 SBC #16
    case 0xC2F4DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/unknown/C2/C2F121.asm:485 SBC #16
    // Overlapping static entry reached from 0xC2F4DB.
    case 0xC2F4DD: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C2/C2F121.asm:486 TAY
    case 0xC2F4DE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:487 STY @LOCAL06
    case 0xC2F4DF: cpu.execute_instruction<0x84>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:488 LDA #8
    case 0xC2F4E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C2/C2F121.asm:488 LDA #8
    // Overlapping static entry reached from 0xC2F4E1.
    case 0xC2F4E3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:489 STA @LOCALEB_2
    case 0xC2F4E4: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:490 BRA @UNKNOWN43
    case 0xC2F4E6: cpu.execute_instruction<0x80>(0x000061, 2); return true;
    // src/unknown/C2/C2F121.asm:492 LDY #.SIZEOF(battler)
    case 0xC2F4E8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:492 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F4E8.
    case 0xC2F4EA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:493 JSL MULT168
    case 0xC2F4EB: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2F121.asm:494 TAX
    case 0xC2F4EF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:495 STX @LOCAL05ALT
    case 0xC2F4F0: cpu.execute_instruction<0x86>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:496 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2F4F2: cpu.execute_instruction<0xBD>(0x009FB8, 3); return true;
    // src/unknown/C2/C2F121.asm:497 AND #$00FF
    case 0xC2F4F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:497 AND #$00FF
    // Overlapping static entry reached from 0xC2F4F5.
    case 0xC2F4F7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F121.asm:498 BEQ @UNKNOWN42
    case 0xC2F4F8: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/unknown/C2/C2F121.asm:499 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC2F4FA: cpu.execute_instruction<0xBD>(0x009FBA, 3); return true;
    // src/unknown/C2/C2F121.asm:500 AND #$00FF
    case 0xC2F4FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:500 AND #$00FF
    // Overlapping static entry reached from 0xC2F4FD.
    case 0xC2F4FF: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2F121.asm:501 CMP #1
    case 0xC2F500: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2F121.asm:501 CMP #1
    // Overlapping static entry reached from 0xC2F500.
    case 0xC2F502: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2F121.asm:502 BNE @UNKNOWN42
    case 0xC2F503: cpu.execute_instruction<0xD0>(0x00003D, 2); return true;
    // src/unknown/C2/C2F121.asm:503 TXA
    case 0xC2F505: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:504 CLC
    case 0xC2F506: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:505 ADC #.LOWORD(BATTLERS_TABLE) + battler::sprite_x
    case 0xC2F507: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x009FF0, 3); return true;
    // src/unknown/C2/C2F121.asm:505 ADC #.LOWORD(BATTLERS_TABLE) + battler::sprite_x
    // Overlapping static entry reached from 0xC2F507.
    case 0xC2F509: cpu.execute_instruction<0x9F>(0xA40285, 4); return true;
    // src/unknown/C2/C2F121.asm:506 STA @VIRTUAL02
    case 0xC2F50A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:507 LDY @LOCAL06
    case 0xC2F50C: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:507 LDY @LOCAL06
    // Overlapping static entry reached from 0xC2F509.
    case 0xC2F50D: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:508 SEP #PROC_FLAGS::INDEX8
    case 0xC2F50E: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:509 STY @VIRTUAL00
    case 0xC2F510: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:510 REP #PROC_FLAGS::INDEX8
    case 0xC2F512: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:511 LDX @VIRTUAL02
    case 0xC2F514: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:512 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F516: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:513 LDA __BSS_START__,X
    case 0xC2F518: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:514 CLC
    case 0xC2F51B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:515 ADC @VIRTUAL00
    case 0xC2F51C: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:516 ASL
    case 0xC2F51E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:517 ASL
    case 0xC2F51F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:518 ASL
    case 0xC2F520: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:519 LDX @VIRTUAL02
    case 0xC2F521: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:520 STA __BSS_START__,X
    case 0xC2F523: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:521 LDX @LOCAL05ALT
    case 0xC2F526: cpu.execute_instruction<0xA6>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:522 REP #PROC_FLAGS::ACCUM8
    case 0xC2F528: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:523 LDA BATTLERS_TABLE+battler::row,X
    case 0xC2F52A: cpu.execute_instruction<0xBD>(0x009FBC, 3); return true;
    // src/unknown/C2/C2F121.asm:524 AND #$00FF
    case 0xC2F52D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:524 AND #$00FF
    // Overlapping static entry reached from 0xC2F52D.
    case 0xC2F52F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F121.asm:525 BEQ @UNKNOWN41
    case 0xC2F530: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C2/C2F121.asm:526 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F532: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:527 LDA #128
    case 0xC2F534: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x009D80, 3); return true;
    // src/unknown/C2/C2F121.asm:528 STA BATTLERS_TABLE+69,X
    case 0xC2F536: cpu.execute_instruction<0x9D>(0x009FF1, 3); return true;
    // src/unknown/C2/C2F121.asm:528 STA BATTLERS_TABLE+69,X
    // Overlapping static entry reached from 0xC2F534.
    case 0xC2F537: cpu.execute_instruction<0xF1>(0x00009F, 2); return true;
    // src/unknown/C2/C2F121.asm:529 BRA @UNKNOWN42
    case 0xC2F539: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C2/C2F121.asm:531 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F53B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:532 LDA #144
    case 0xC2F53D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000090, 2); else cpu.execute_instruction<0xA9>(0x009D90, 3); return true;
    // src/unknown/C2/C2F121.asm:533 STA BATTLERS_TABLE+69,X
    case 0xC2F53F: cpu.execute_instruction<0x9D>(0x009FF1, 3); return true;
    // src/unknown/C2/C2F121.asm:533 STA BATTLERS_TABLE+69,X
    // Overlapping static entry reached from 0xC2F53D.
    case 0xC2F540: cpu.execute_instruction<0xF1>(0x00009F, 2); return true;
    // src/unknown/C2/C2F121.asm:535 REP #PROC_FLAGS::ACCUM8
    case 0xC2F542: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:536 LDA @LOCALEB_2
    case 0xC2F544: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:537 INC
    case 0xC2F546: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:538 STA @LOCALEB_2
    case 0xC2F547: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:540 CMP #BATTLER_COUNT
    case 0xC2F549: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C2/C2F121.asm:540 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2F549.
    case 0xC2F54B: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2F121.asm:541 BCC @UNKNOWN40
    case 0xC2F54C: cpu.execute_instruction<0x90>(0x00009A, 2); return true;
    // src/unknown/C2/C2F121.asm:542 LDA CURRENT_BATTLE_GROUP
    case 0xC2F54E: cpu.execute_instruction<0xAD>(0x004A8C, 3); return true;
    // src/unknown/C2/C2F121.asm:543 CMP #ENEMY_GROUP::UNKNOWN_475
    case 0xC2F551: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DB, 2); else cpu.execute_instruction<0xC9>(0x0001DB, 3); return true;
    // src/unknown/C2/C2F121.asm:543 CMP #ENEMY_GROUP::UNKNOWN_475
    // Overlapping static entry reached from 0xC2F551.
    case 0xC2F553: cpu.execute_instruction<0x01>(0x0000D0, 2); return true;
    // src/unknown/C2/C2F121.asm:544 BNE @UNKNOWN44
    case 0xC2F554: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:544 BNE @UNKNOWN44
    // Overlapping static entry reached from 0xC2F553.
    case 0xC2F555: cpu.execute_instruction<0x14>(0x0000E2, 2); return true;
    // src/unknown/C2/C2F121.asm:545 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F556: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:545 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2F555.
    case 0xC2F557: cpu.execute_instruction<0x20>(0x0080A9, 3); return true;
    // src/unknown/C2/C2F121.asm:546 LDA #128
    case 0xC2F558: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008D80, 3); return true;
    // src/unknown/C2/C2F121.asm:547 STA BATTLERS_TABLE+8*.SIZEOF(battler)+battler::sprite_x
    case 0xC2F55A: cpu.execute_instruction<0x8D>(0x00A260, 3); return true;
    // src/unknown/C2/C2F121.asm:547 STA BATTLERS_TABLE+8*.SIZEOF(battler)+battler::sprite_x
    // Overlapping static entry reached from 0xC2F558.
    case 0xC2F55B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:548 STA BATTLERS_TABLE+8*.SIZEOF(battler)+69
    case 0xC2F55D: cpu.execute_instruction<0x8D>(0x00A261, 3); return true;
    // src/unknown/C2/C2F121.asm:549 LDA #200
    case 0xC2F560: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x008DC8, 3); return true;
    // src/unknown/C2/C2F121.asm:550 STA BATTLERS_TABLE+9*.SIZEOF(battler)+battler::sprite_x
    case 0xC2F562: cpu.execute_instruction<0x8D>(0x00A2AE, 3); return true;
    // src/unknown/C2/C2F121.asm:550 STA BATTLERS_TABLE+9*.SIZEOF(battler)+battler::sprite_x
    // Overlapping static entry reached from 0xC2F560.
    case 0xC2F563: cpu.execute_instruction<0xAE>(0x00A9A2, 3); return true;
    // src/unknown/C2/C2F121.asm:551 LDA #144
    case 0xC2F565: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000090, 2); else cpu.execute_instruction<0xA9>(0x008D90, 3); return true;
    // src/unknown/C2/C2F121.asm:551 LDA #144
    // Overlapping static entry reached from 0xC2F563.
    case 0xC2F566: cpu.execute_instruction<0x90>(0x00008D, 2); return true;
    // src/unknown/C2/C2F121.asm:552 STA BATTLERS_TABLE+9*.SIZEOF(battler)+69
    case 0xC2F567: cpu.execute_instruction<0x8D>(0x00A2AF, 3); return true;
    // src/unknown/C2/C2F121.asm:552 STA BATTLERS_TABLE+9*.SIZEOF(battler)+69
    // Overlapping static entry reached from 0xC2F565.
    case 0xC2F568: cpu.execute_instruction<0xAF>(0x20C2A2, 4); return true;
    // src/unknown/C2/C2F121.asm:554 REP #PROC_FLAGS::ACCUM8
    case 0xC2F56A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:555 STZ @LOCAL09
    case 0xC2F56C: cpu.execute_instruction<0x64>(0x000021, 2); return true;
    // src/unknown/C2/C2F121.asm:556 LDA #0
    case 0xC2F56E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:556 LDA #0
    // Overlapping static entry reached from 0xC2F56E.
    case 0xC2F570: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:557 STA @VIRTUAL04
    case 0xC2F571: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:558 JMP @UNKNOWN57
    case 0xC2F573: cpu.execute_instruction<0x4C>(0x00F6F5, 3); return true;
    // src/unknown/C2/C2F121.asm:561 LDA @VIRTUAL04
    case 0xC2F576: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:563 REP #PROC_FLAGS::INDEX8
    case 0xC2F578: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:565 LDY #.SIZEOF(battler)
    case 0xC2F57A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:565 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F57A.
    case 0xC2F57C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:566 JSL MULT168
    case 0xC2F57D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2F121.asm:567 CLC
    case 0xC2F581: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:568 ADC #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC2F582: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00A21C, 3); return true;
    // src/unknown/C2/C2F121.asm:568 ADC #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC2F582.
    case 0xC2F584: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000A8, 2); else cpu.execute_instruction<0xA2>(0x0084A8, 3); return true;
    // src/unknown/C2/C2F121.asm:569 TAY
    case 0xC2F585: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:570 STY @LOCAL05ALT2
    case 0xC2F586: cpu.execute_instruction<0x84>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:570 STY @LOCAL05ALT2
    // Overlapping static entry reached from 0xC2F584.
    case 0xC2F587: cpu.execute_instruction<0x19>(0x0004A5, 3); return true;
    // src/unknown/C2/C2F121.asm:571 LDA @VIRTUAL04
    case 0xC2F588: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:572 INC
    case 0xC2F58A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:573 STA @LOCAL06
    case 0xC2F58B: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:574 JMP @UNKNOWN55
    case 0xC2F58D: cpu.execute_instruction<0x4C>(0x00F6E7, 3); return true;
    // src/unknown/C2/C2F121.asm:577 LDA @LOCAL06
    case 0xC2F590: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:579 REP #PROC_FLAGS::INDEX8
    case 0xC2F592: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:581 LDY #.SIZEOF(battler)
    case 0xC2F594: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:581 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F594.
    case 0xC2F596: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:582 JSL MULT168
    case 0xC2F597: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2F121.asm:583 CLC
    case 0xC2F59B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:584 ADC #.LOWORD(BATTLERS_TABLE)+8*.SIZEOF(battler)
    case 0xC2F59C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00A21C, 3); return true;
    // src/unknown/C2/C2F121.asm:584 ADC #.LOWORD(BATTLERS_TABLE)+8*.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F59C.
    case 0xC2F59E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000085, 2); else cpu.execute_instruction<0xA2>(0x002385, 3); return true;
    // src/unknown/C2/C2F121.asm:585 STA @LOCAL0AALT
    case 0xC2F59F: cpu.execute_instruction<0x85>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:585 STA @LOCAL0AALT
    // Overlapping static entry reached from 0xC2F59E.
    case 0xC2F5A0: cpu.execute_instruction<0x23>(0x0000A4, 2); return true;
    // src/unknown/C2/C2F121.asm:586 LDY @LOCAL05ALT2
    case 0xC2F5A1: cpu.execute_instruction<0xA4>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:586 LDY @LOCAL05ALT2
    // Overlapping static entry reached from 0xC2F5A0.
    case 0xC2F5A2: cpu.execute_instruction<0x19>(0x0000B9, 3); return true;
    // src/unknown/C2/C2F121.asm:587 LDA __BSS_START__,Y
    case 0xC2F5A3: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:587 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC2F5A2.
    case 0xC2F5A5: cpu.execute_instruction<0x00>(0x0000D2, 2); return true;
    // src/unknown/C2/C2F121.asm:588 CMP (@LOCAL0AALT)
    case 0xC2F5A6: cpu.execute_instruction<0xD2>(0x000023, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:589 BNEL @UNKNOWN54
    case 0xC2F5A8: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:589 BNEL @UNKNOWN54
    case 0xC2F5AA: cpu.execute_instruction<0x4C>(0x00F6E3, 3); return true;
    // src/unknown/C2/C2F121.asm:590 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F5AD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:591 LDA __BSS_START__+11,Y
    case 0xC2F5AF: cpu.execute_instruction<0xB9>(0x00000B, 3); return true;
    // src/unknown/C2/C2F121.asm:592 LDY #11
    case 0xC2F5B2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000B, 2); else cpu.execute_instruction<0xA0>(0x00000B, 3); return true;
    // src/unknown/C2/C2F121.asm:592 LDY #11
    // Overlapping static entry reached from 0xC2F5B2.
    case 0xC2F5B4: cpu.execute_instruction<0x00>(0x0000D1, 2); return true;
    // src/unknown/C2/C2F121.asm:593 CMP (@LOCAL0AALT),Y
    case 0xC2F5B5: cpu.execute_instruction<0xD1>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:594 BCS @UNKNOWN48
    case 0xC2F5B7: cpu.execute_instruction<0xB0>(0x000034, 2); return true;
    // src/unknown/C2/C2F121.asm:595 LDY @LOCAL05ALT2
    case 0xC2F5B9: cpu.execute_instruction<0xA4>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:596 LDA __BSS_START__+69,Y
    case 0xC2F5BB: cpu.execute_instruction<0xB9>(0x000045, 3); return true;
    // src/unknown/C2/C2F121.asm:597 STA @VIRTUAL00
    case 0xC2F5BE: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:598 LDY #69
    case 0xC2F5C0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000045, 2); else cpu.execute_instruction<0xA0>(0x000045, 3); return true;
    // src/unknown/C2/C2F121.asm:598 LDY #69
    // Overlapping static entry reached from 0xC2F5C0.
    case 0xC2F5C2: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C2F121.asm:599 LDA (@LOCAL0AALT),Y
    case 0xC2F5C3: cpu.execute_instruction<0xB1>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:600 STA @LOCAL03
    case 0xC2F5C5: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2F121.asm:601 STA @VIRTUAL01
    case 0xC2F5C7: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C2/C2F121.asm:602 LDA @VIRTUAL00
    case 0xC2F5C9: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:603 CMP @VIRTUAL01
    case 0xC2F5CB: cpu.execute_instruction<0xC5>(0x000001, 2); return true;
    // src/unknown/C2/C2F121.asm:604 BCC @UNKNOWN53
    case 0xC2F5CD: cpu.execute_instruction<0x90>(0x00006B, 2); return true;
    // src/unknown/C2/C2F121.asm:605 LDA @LOCAL03
    case 0xC2F5CF: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2F121.asm:606 PHA
    case 0xC2F5D1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:607 LDA @VIRTUAL00
    case 0xC2F5D2: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:608 SEP #PROC_FLAGS::INDEX8
    case 0xC2F5D4: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:609 PLX
    case 0xC2F5D6: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:610 STX @VIRTUAL00
    case 0xC2F5D7: cpu.execute_instruction<0x86>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:611 CMP @VIRTUAL00
    case 0xC2F5D9: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:612 BNE @UNKNOWN48
    case 0xC2F5DB: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:613 REP #PROC_FLAGS::INDEX8
    case 0xC2F5DD: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:614 LDY @LOCAL05ALT2
    case 0xC2F5DF: cpu.execute_instruction<0xA4>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:615 LDA __BSS_START__+68,Y
    case 0xC2F5E1: cpu.execute_instruction<0xB9>(0x000044, 3); return true;
    // src/unknown/C2/C2F121.asm:616 LDY #68
    case 0xC2F5E4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000044, 2); else cpu.execute_instruction<0xA0>(0x000044, 3); return true;
    // src/unknown/C2/C2F121.asm:616 LDY #68
    // Overlapping static entry reached from 0xC2F5E4.
    case 0xC2F5E6: cpu.execute_instruction<0x00>(0x0000D1, 2); return true;
    // src/unknown/C2/C2F121.asm:617 CMP (@LOCAL0AALT),Y
    case 0xC2F5E7: cpu.execute_instruction<0xD1>(0x000023, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:618 BGT @UNKNOWN53
    case 0xC2F5E9: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C2/C2F121.asm:618 BGT @UNKNOWN53
    case 0xC2F5EB: cpu.execute_instruction<0xB0>(0x00004D, 2); return true;
    // src/unknown/C2/C2F121.asm:620 REP #PROC_FLAGS::INDEX8
    case 0xC2F5ED: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:621 LDY @LOCAL05ALT2
    case 0xC2F5EF: cpu.execute_instruction<0xA4>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:622 LDA __BSS_START__+11,Y
    case 0xC2F5F1: cpu.execute_instruction<0xB9>(0x00000B, 3); return true;
    // src/unknown/C2/C2F121.asm:623 LDY #11
    case 0xC2F5F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000B, 2); else cpu.execute_instruction<0xA0>(0x00000B, 3); return true;
    // src/unknown/C2/C2F121.asm:623 LDY #11
    // Overlapping static entry reached from 0xC2F5F4.
    case 0xC2F5F6: cpu.execute_instruction<0x00>(0x0000D1, 2); return true;
    // src/unknown/C2/C2F121.asm:624 CMP (@LOCAL0AALT),Y
    case 0xC2F5F7: cpu.execute_instruction<0xD1>(0x000023, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:628 BGT @UNKNOWN50
    case 0xC2F5F9: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C2/C2F121.asm:628 BGT @UNKNOWN50
    case 0xC2F5FB: cpu.execute_instruction<0xB0>(0x000003, 2); return true;
    // src/unknown/C2/C2F121.asm:630 JMP @UNKNOWN54
    case 0xC2F5FD: cpu.execute_instruction<0x4C>(0x00F6E3, 3); return true;
    // src/unknown/C2/C2F121.asm:632 LDY @LOCAL05ALT2
    case 0xC2F600: cpu.execute_instruction<0xA4>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:633 LDA __BSS_START__+69,Y
    case 0xC2F602: cpu.execute_instruction<0xB9>(0x000045, 3); return true;
    // src/unknown/C2/C2F121.asm:634 STA @VIRTUAL00
    case 0xC2F605: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:635 LDY #69
    case 0xC2F607: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000045, 2); else cpu.execute_instruction<0xA0>(0x000045, 3); return true;
    // src/unknown/C2/C2F121.asm:635 LDY #69
    // Overlapping static entry reached from 0xC2F607.
    case 0xC2F609: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C2F121.asm:636 LDA (@LOCAL0AALT),Y
    case 0xC2F60A: cpu.execute_instruction<0xB1>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:637 STA @LOCAL03
    case 0xC2F60C: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2F121.asm:638 STA @VIRTUAL01
    case 0xC2F60E: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C2/C2F121.asm:639 LDA @VIRTUAL00
    case 0xC2F610: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:640 CMP @VIRTUAL01
    case 0xC2F612: cpu.execute_instruction<0xC5>(0x000001, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:641 BGT @UNKNOWN53
    case 0xC2F614: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C2/C2F121.asm:641 BGT @UNKNOWN53
    case 0xC2F616: cpu.execute_instruction<0xB0>(0x000022, 2); return true;
    // src/unknown/C2/C2F121.asm:642 LDA @LOCAL03
    case 0xC2F618: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2F121.asm:643 PHA
    case 0xC2F61A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:644 LDA @VIRTUAL00
    case 0xC2F61B: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:645 SEP #PROC_FLAGS::INDEX8
    case 0xC2F61D: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:646 PLX
    case 0xC2F61F: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:647 STX @VIRTUAL00
    case 0xC2F620: cpu.execute_instruction<0x86>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:648 CMP @VIRTUAL00
    case 0xC2F622: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:649 BNEL @UNKNOWN54
    case 0xC2F624: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:649 BNEL @UNKNOWN54
    case 0xC2F626: cpu.execute_instruction<0x4C>(0x00F6E3, 3); return true;
    // src/unknown/C2/C2F121.asm:650 REP #PROC_FLAGS::INDEX8
    case 0xC2F629: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:651 LDY @LOCAL05ALT2
    case 0xC2F62B: cpu.execute_instruction<0xA4>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:652 LDA a:battler::sprite_x,Y
    case 0xC2F62D: cpu.execute_instruction<0xB9>(0x000044, 3); return true;
    // src/unknown/C2/C2F121.asm:653 LDY #68
    case 0xC2F630: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000044, 2); else cpu.execute_instruction<0xA0>(0x000044, 3); return true;
    // src/unknown/C2/C2F121.asm:653 LDY #68
    // Overlapping static entry reached from 0xC2F630.
    case 0xC2F632: cpu.execute_instruction<0x00>(0x0000D1, 2); return true;
    // src/unknown/C2/C2F121.asm:654 CMP (@LOCAL0AALT),Y
    case 0xC2F633: cpu.execute_instruction<0xD1>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:655 BCC @UNKNOWN53
    case 0xC2F635: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C2/C2F121.asm:656 JMP @UNKNOWN54
    case 0xC2F637: cpu.execute_instruction<0x4C>(0x00F6E3, 3); return true;
    // src/unknown/C2/C2F121.asm:658 REP #PROC_FLAGS::ACCUM8
    case 0xC2F63A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:659 LDA #1
    case 0xC2F63C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2F121.asm:659 LDA #1
    // Overlapping static entry reached from 0xC2F63C.
    case 0xC2F63E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:660 STA @LOCAL09
    case 0xC2F63F: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/unknown/C2/C2F121.asm:661 LDY @LOCAL05ALT2
    case 0xC2F641: cpu.execute_instruction<0xA4>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:662 TYA
    case 0xC2F643: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:663 CLC
    case 0xC2F644: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:664 ADC #11
    case 0xC2F645: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000B, 2); else cpu.execute_instruction<0x69>(0x00000B, 3); return true;
    // src/unknown/C2/C2F121.asm:664 ADC #11
    // Overlapping static entry reached from 0xC2F645.
    case 0xC2F647: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2F121.asm:665 TAX
    case 0xC2F648: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:666 STX @LOCALEB_2
    case 0xC2F649: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:667 LDA __BSS_START__,X
    case 0xC2F64B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:668 AND #$00FF
    case 0xC2F64E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F121.asm:668 AND #$00FF
    // Overlapping static entry reached from 0xC2F64E.
    case 0xC2F650: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:669 STA @LOCAL01
    case 0xC2F651: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2F121.asm:670 LDA @LOCAL0AALT
    case 0xC2F653: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:671 CLC
    case 0xC2F655: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:672 ADC #11
    case 0xC2F656: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000B, 2); else cpu.execute_instruction<0x69>(0x00000B, 3); return true;
    // src/unknown/C2/C2F121.asm:672 ADC #11
    // Overlapping static entry reached from 0xC2F656.
    case 0xC2F658: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F121.asm:673 STA @VIRTUAL02
    case 0xC2F659: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:674 LDX @VIRTUAL02
    case 0xC2F65B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:675 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F65D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:676 LDA __BSS_START__,X
    case 0xC2F65F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:677 LDX @LOCALEB_2
    case 0xC2F662: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:678 STA __BSS_START__,X
    case 0xC2F664: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:679 REP #PROC_FLAGS::ACCUM8
    case 0xC2F667: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:680 LDA @LOCAL01
    case 0xC2F669: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2F121.asm:681 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F66B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:682 LDX @VIRTUAL02
    case 0xC2F66D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:683 STA __BSS_START__,X
    case 0xC2F66F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:684 STA @VIRTUAL00
    case 0xC2F672: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:685 LDX @LOCALEB_2
    case 0xC2F674: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C2/C2F121.asm:686 LDA __BSS_START__,X
    case 0xC2F676: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:687 CMP @VIRTUAL00
    case 0xC2F679: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2F121.asm:688 BLTEQ @UNKNOWN54
    case 0xC2F67B: cpu.execute_instruction<0x90>(0x000066, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2F121.asm:688 BLTEQ @UNKNOWN54
    case 0xC2F67D: cpu.execute_instruction<0xF0>(0x000064, 2); return true;
    // src/unknown/C2/C2F121.asm:689 REP #PROC_FLAGS::ACCUM8
    case 0xC2F67F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:690 LDA #.LOWORD(BATTLERS_TABLE) + ((BATTLER_COUNT - 1) * .SIZEOF(battler))
    case 0xC2F681: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00A91E, 3); return true;
    // src/unknown/C2/C2F121.asm:690 LDA #.LOWORD(BATTLERS_TABLE) + ((BATTLER_COUNT - 1) * .SIZEOF(battler))
    // Overlapping static entry reached from 0xC2F681.
    case 0xC2F683: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000085, 2); else cpu.execute_instruction<0xA9>(0x000285, 3); return true;
    // src/unknown/C2/C2F121.asm:691 STA @VIRTUAL02
    case 0xC2F684: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:691 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2F683.
    case 0xC2F685: cpu.execute_instruction<0x02>(0x000098, 2); return true;
    // src/unknown/C2/C2F121.asm:692 TYA
    case 0xC2F686: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C2/C2F121.asm:693 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F687: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C2/C2F121.asm:693 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F689: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2F121.asm:693 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F68A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C2/C2F121.asm:693 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F68C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C2/C2F121.asm:693 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F68D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C2/C2F121.asm:693 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F68F: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C2/C2F121.asm:694 REP #PROC_FLAGS::ACCUM8
    case 0xC2F691: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2F121.asm:695 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2F693: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2F121.asm:695 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2F695: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2F121.asm:695 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2F697: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2F121.asm:695 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2F699: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:696 LDX #.SIZEOF(battler)
    case 0xC2F69B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004E, 2); else cpu.execute_instruction<0xA2>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:696 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F69B.
    case 0xC2F69D: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C2F121.asm:697 LDA @VIRTUAL02
    case 0xC2F69E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:698 JSL MEMCPY16
    case 0xC2F6A0: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C2/C2F121.asm:699 LDA @LOCAL0AALT
    case 0xC2F6A4: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C2/C2F121.asm:700 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F6A6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C2/C2F121.asm:700 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F6A8: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2F121.asm:700 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F6A9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C2/C2F121.asm:700 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F6AB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C2/C2F121.asm:700 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F6AC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C2/C2F121.asm:700 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F6AE: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C2/C2F121.asm:701 REP #PROC_FLAGS::ACCUM8
    case 0xC2F6B0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2F121.asm:702 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2F6B2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2F121.asm:702 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2F6B4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2F121.asm:702 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2F6B6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2F121.asm:702 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2F6B8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:703 LDX #.SIZEOF(battler)
    case 0xC2F6BA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004E, 2); else cpu.execute_instruction<0xA2>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:703 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F6BA.
    case 0xC2F6BC: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/C2/C2F121.asm:704 LDY @LOCAL05ALT2
    case 0xC2F6BD: cpu.execute_instruction<0xA4>(0x000019, 2); return true;
    // src/unknown/C2/C2F121.asm:705 TYA
    case 0xC2F6BF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:706 JSL MEMCPY16
    case 0xC2F6C0: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C2/C2F121.asm:707 LDA @VIRTUAL02
    case 0xC2F6C4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C2/C2F121.asm:708 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F6C6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C2/C2F121.asm:708 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F6C8: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2F121.asm:708 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F6C9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C2/C2F121.asm:708 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F6CB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C2/C2F121.asm:708 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F6CC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C2/C2F121.asm:708 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2F6CE: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C2/C2F121.asm:709 REP #PROC_FLAGS::ACCUM8
    case 0xC2F6D0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2F121.asm:710 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2F6D2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2F121.asm:710 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2F6D4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2F121.asm:710 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2F6D6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2F121.asm:710 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2F6D8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:711 LDX #.SIZEOF(battler)
    case 0xC2F6DA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004E, 2); else cpu.execute_instruction<0xA2>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:711 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F6DA.
    case 0xC2F6DC: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C2F121.asm:712 LDA @LOCAL0AALT
    case 0xC2F6DD: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/unknown/C2/C2F121.asm:713 JSL MEMCPY16
    case 0xC2F6DF: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C2/C2F121.asm:715 REP #PROC_FLAGS::ACCUM8
    case 0xC2F6E3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:716 INC @LOCAL06
    case 0xC2F6E5: cpu.execute_instruction<0xE6>(0x00001B, 2); return true;
    // src/unknown/C2/C2F121.asm:718 LDA ENEMIES_IN_BATTLE
    case 0xC2F6E7: cpu.execute_instruction<0xAD>(0x009F8A, 3); return true;
    // src/unknown/C2/C2F121.asm:719 CMP @LOCAL06
    case 0xC2F6EA: cpu.execute_instruction<0xC5>(0x00001B, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:720 BGTL @UNKNOWN46
    case 0xC2F6EC: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/unknown/C2/C2F121.asm:720 BGTL @UNKNOWN46
    case 0xC2F6EE: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:720 BGTL @UNKNOWN46
    case 0xC2F6F0: cpu.execute_instruction<0x4C>(0x00F590, 3); return true;
    // src/unknown/C2/C2F121.asm:721 INC @VIRTUAL04
    case 0xC2F6F3: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:723 LDA ENEMIES_IN_BATTLE
    case 0xC2F6F5: cpu.execute_instruction<0xAD>(0x009F8A, 3); return true;
    // src/unknown/C2/C2F121.asm:724 DEC
    case 0xC2F6F8: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2F121.asm:725 STA @VIRTUAL02
    case 0xC2F6F9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F121.asm:726 LDA @VIRTUAL04
    case 0xC2F6FB: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2F121.asm:727 CMP @VIRTUAL02
    case 0xC2F6FD: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C2/C2F121.asm:728 BCCL @UNKNOWN45
    case 0xC2F6FF: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:728 BCCL @UNKNOWN45
    case 0xC2F701: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:728 BCCL @UNKNOWN45
    case 0xC2F703: cpu.execute_instruction<0x4C>(0x00F576, 3); return true;
    // src/unknown/C2/C2F121.asm:729 LDA @LOCAL09
    case 0xC2F706: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C2F121.asm:730 BNEL @UNKNOWN44
    case 0xC2F708: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C2F121.asm:730 BNEL @UNKNOWN44
    case 0xC2F70A: cpu.execute_instruction<0x4C>(0x00F56A, 3); return true;
    // src/unknown/C2/C2F121.asm:731 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F70D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/unknown/C2/C2F121.asm:732 STZ_BADOPT @LOCAL00
    case 0xC2F70F: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/unknown/C2/C2F121.asm:733 REP #PROC_FLAGS::INDEX8
    case 0xC2F711: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2F121.asm:734 LDX #.SIZEOF(battler)
    case 0xC2F713: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004E, 2); else cpu.execute_instruction<0xA2>(0x00004E, 3); return true;
    // src/unknown/C2/C2F121.asm:734 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F713.
    case 0xC2F715: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C2/C2F121.asm:735 REP #PROC_FLAGS::ACCUM8
    case 0xC2F716: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F121.asm:736 LDA #.LOWORD(BATTLERS_TABLE) + 31 * .SIZEOF(battler)
    case 0xC2F718: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00A91E, 3); return true;
    // src/unknown/C2/C2F121.asm:736 LDA #.LOWORD(BATTLERS_TABLE) + 31 * .SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F718.
    case 0xC2F71A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x00FC22, 3); return true;
    // src/unknown/C2/C2F121.asm:737 JSL MEMSET16
    case 0xC2F71B: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C2/C2F121.asm:737 JSL MEMSET16
    // Overlapping static entry reached from 0xC2F71A.
    case 0xC2F71C: cpu.execute_instruction<0xFC>(0x00C08E, 3); return true;
    // src/unknown/C2/C2F121.asm:737 JSL MEMSET16
    // Overlapping static entry reached from 0xC2F71A.
    case 0xC2F71D: cpu.execute_instruction<0x8E>(0x00A9C0, 3); return true;
    // src/unknown/C2/C2F121.asm:738 LDA #0
    case 0xC2F71F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2F121.asm:738 LDA #0
    // Overlapping static entry reached from 0xC2F71D.
    case 0xC2F720: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C2F121.asm:738 LDA #0
    // Overlapping static entry reached from 0xC2F71F.
    case 0xC2F721: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2F121.asm:740 END_C_FUNCTION
    case 0xC2F722: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2F121.asm:740 END_C_FUNCTION
    case 0xC2F723: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2F8F9.asm (unresolved).
bool execute_unresolved_c2_c2f8f9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2F8F9.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2F8F9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C2F8F9.asm:5 LDA #$007E
    case 0xC2F8FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/unknown/C2/C2F8F9.asm:5 LDA #$007E
    // Overlapping static entry reached from 0xC2F8FB.
    case 0xC2F8FD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F8F9.asm:6 JSL UNKNOWN_C088A5
    case 0xC2F8FE: cpu.execute_instruction<0x22>(0xC088A5, 4); return true;
    // src/unknown/C2/C2F8F9.asm:7 JSL OAM_CLEAR
    case 0xC2F902: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/unknown/C2/C2F8F9.asm:8 LDA #0
    case 0xC2F906: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2F8F9.asm:8 LDA #0
    // Overlapping static entry reached from 0xC2F906.
    case 0xC2F908: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C2/C2F8F9.asm:9 JSR RENDER_BATTLE_SPRITE_ROW
    case 0xC2F909: cpu.execute_instruction<0x20>(0x00F724, 3); return true;
    // src/unknown/C2/C2F8F9.asm:10 LDA #1
    case 0xC2F90C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2F8F9.asm:10 LDA #1
    // Overlapping static entry reached from 0xC2F90C.
    case 0xC2F90E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C2/C2F8F9.asm:11 JSR RENDER_BATTLE_SPRITE_ROW
    case 0xC2F90F: cpu.execute_instruction<0x20>(0x00F724, 3); return true;
    // src/unknown/C2/C2F8F9.asm:12 JSL UPDATE_SCREEN
    case 0xC2F912: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2F8F9.asm:13 END_C_FUNCTION
    case 0xC2F916: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2F917.asm (unresolved).
bool execute_unresolved_c2_c2f917_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2F917.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2F917: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2F917.asm:8 END_STACK_VARS
    case 0xC2F919: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2F917.asm:8 END_STACK_VARS
    case 0xC2F91A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2F917.asm:8 END_STACK_VARS
    case 0xC2F91B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2F917.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2F91B.
    case 0xC2F91D: cpu.execute_instruction<0xFF>(0x589C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2F917.asm:8 END_STACK_VARS
    case 0xC2F91E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:9 STZ NUM_BATTLERS_IN_BACK_ROW
    case 0xC2F91F: cpu.execute_instruction<0x9C>(0x00AD58, 3); return true;
    // src/unknown/C2/C2F917.asm:9 STZ NUM_BATTLERS_IN_BACK_ROW
    // Overlapping static entry reached from 0xC2F91D.
    case 0xC2F921: cpu.execute_instruction<0xAD>(0x00569C, 3); return true;
    // src/unknown/C2/C2F917.asm:10 STZ NUM_BATTLERS_IN_FRONT_ROW
    case 0xC2F922: cpu.execute_instruction<0x9C>(0x00AD56, 3); return true;
    // src/unknown/C2/C2F917.asm:10 STZ NUM_BATTLERS_IN_FRONT_ROW
    // Overlapping static entry reached from 0xC2F921.
    case 0xC2F924: cpu.execute_instruction<0xAD>(0x0008A9, 3); return true;
    // src/unknown/C2/C2F917.asm:11 LDA #8
    case 0xC2F925: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C2/C2F917.asm:11 LDA #8
    // Overlapping static entry reached from 0xC2F925.
    case 0xC2F927: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F917.asm:12 STA @LOCAL02
    case 0xC2F928: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2F917.asm:13 BRA @UNKNOWN3
    case 0xC2F92A: cpu.execute_instruction<0x80>(0x00003B, 2); return true;
    // src/unknown/C2/C2F917.asm:15 LDY #.SIZEOF(battler)
    case 0xC2F92C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F917.asm:15 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F92C.
    case 0xC2F92E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F917.asm:16 JSL MULT168
    case 0xC2F92F: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2F917.asm:17 TAX
    case 0xC2F933: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:18 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2F934: cpu.execute_instruction<0xBD>(0x009FB8, 3); return true;
    // src/unknown/C2/C2F917.asm:19 AND #$00FF
    case 0xC2F937: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC2F937.
    case 0xC2F939: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F917.asm:20 BEQ @UNKNOWN2
    case 0xC2F93A: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/unknown/C2/C2F917.asm:21 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC2F93C: cpu.execute_instruction<0xBD>(0x009FC9, 3); return true;
    // src/unknown/C2/C2F917.asm:22 AND #$00FF
    case 0xC2F93F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC2F93F.
    case 0xC2F941: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2F917.asm:23 CMP #1
    case 0xC2F942: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2F917.asm:23 CMP #1
    // Overlapping static entry reached from 0xC2F942.
    case 0xC2F944: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F917.asm:24 BEQ @UNKNOWN2
    case 0xC2F945: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/C2/C2F917.asm:25 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC2F947: cpu.execute_instruction<0xBD>(0x009FBA, 3); return true;
    // src/unknown/C2/C2F917.asm:26 AND #$00FF
    case 0xC2F94A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC2F94A.
    case 0xC2F94C: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2F917.asm:27 CMP #1
    case 0xC2F94D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2F917.asm:27 CMP #1
    // Overlapping static entry reached from 0xC2F94D.
    case 0xC2F94F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2F917.asm:28 BNE @UNKNOWN2
    case 0xC2F950: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C2/C2F917.asm:29 LDA BATTLERS_TABLE+battler::row,X
    case 0xC2F952: cpu.execute_instruction<0xBD>(0x009FBC, 3); return true;
    // src/unknown/C2/C2F917.asm:30 AND #$00FF
    case 0xC2F955: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC2F955.
    case 0xC2F957: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F917.asm:31 BEQ @UNKNOWN1
    case 0xC2F958: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C2/C2F917.asm:32 INC NUM_BATTLERS_IN_BACK_ROW
    case 0xC2F95A: cpu.execute_instruction<0xEE>(0x00AD58, 3); return true;
    // src/unknown/C2/C2F917.asm:33 BRA @UNKNOWN2
    case 0xC2F95D: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C2/C2F917.asm:35 INC NUM_BATTLERS_IN_FRONT_ROW
    case 0xC2F95F: cpu.execute_instruction<0xEE>(0x00AD56, 3); return true;
    // src/unknown/C2/C2F917.asm:37 LDA @LOCAL02
    case 0xC2F962: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2F917.asm:38 INC
    case 0xC2F964: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:39 STA @LOCAL02
    case 0xC2F965: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2F917.asm:41 CMP #32
    case 0xC2F967: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C2/C2F917.asm:41 CMP #32
    // Overlapping static entry reached from 0xC2F967.
    case 0xC2F969: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2F917.asm:42 BCC @UNKNOWN0
    case 0xC2F96A: cpu.execute_instruction<0x90>(0x0000C0, 2); return true;
    // src/unknown/C2/C2F917.asm:43 STZ @LOCAL01
    case 0xC2F96C: cpu.execute_instruction<0x64>(0x000010, 2); return true;
    // src/unknown/C2/C2F917.asm:44 LDA #0
    case 0xC2F96E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2F917.asm:44 LDA #0
    // Overlapping static entry reached from 0xC2F96E.
    case 0xC2F970: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F917.asm:45 STA @VIRTUAL02
    case 0xC2F971: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F917.asm:46 JMP @UNKNOWN9
    case 0xC2F973: cpu.execute_instruction<0x4C>(0x00FA12, 3); return true;
    // src/unknown/C2/C2F917.asm:48 LDA #$FFFF
    case 0xC2F976: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C2F917.asm:48 LDA #$FFFF
    // Overlapping static entry reached from 0xC2F976.
    case 0xC2F978: cpu.execute_instruction<0xFF>(0xA00485, 4); return true;
    // src/unknown/C2/C2F917.asm:49 STA @VIRTUAL04
    case 0xC2F979: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2F917.asm:50 LDY #8
    case 0xC2F97B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C2/C2F917.asm:50 LDY #8
    // Overlapping static entry reached from 0xC2F978.
    case 0xC2F97C: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:50 LDY #8
    // Overlapping static entry reached from 0xC2F97B.
    case 0xC2F97D: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C2/C2F917.asm:51 STY @LOCAL02
    case 0xC2F97E: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C2/C2F917.asm:52 BRA @UNKNOWN8
    case 0xC2F980: cpu.execute_instruction<0x80>(0x00004C, 2); return true;
    // src/unknown/C2/C2F917.asm:54 TYA
    case 0xC2F982: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:55 LDY #.SIZEOF(battler)
    case 0xC2F983: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F917.asm:55 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F983.
    case 0xC2F985: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F917.asm:56 JSL MULT168
    case 0xC2F986: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2F917.asm:57 TAX
    case 0xC2F98A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:58 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2F98B: cpu.execute_instruction<0xBD>(0x009FB8, 3); return true;
    // src/unknown/C2/C2F917.asm:59 AND #$00FF
    case 0xC2F98E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC2F98E.
    case 0xC2F990: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F917.asm:60 BEQ @UNKNOWN7
    case 0xC2F991: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/unknown/C2/C2F917.asm:61 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC2F993: cpu.execute_instruction<0xBD>(0x009FC9, 3); return true;
    // src/unknown/C2/C2F917.asm:62 AND #$00FF
    case 0xC2F996: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:62 AND #$00FF
    // Overlapping static entry reached from 0xC2F996.
    case 0xC2F998: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2F917.asm:63 CMP #1
    case 0xC2F999: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2F917.asm:63 CMP #1
    // Overlapping static entry reached from 0xC2F999.
    case 0xC2F99B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F917.asm:64 BEQ @UNKNOWN7
    case 0xC2F99C: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/unknown/C2/C2F917.asm:65 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC2F99E: cpu.execute_instruction<0xBD>(0x009FBA, 3); return true;
    // src/unknown/C2/C2F917.asm:66 AND #$00FF
    case 0xC2F9A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:66 AND #$00FF
    // Overlapping static entry reached from 0xC2F9A1.
    case 0xC2F9A3: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2F917.asm:67 CMP #1
    case 0xC2F9A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2F917.asm:67 CMP #1
    // Overlapping static entry reached from 0xC2F9A4.
    case 0xC2F9A6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2F917.asm:68 BNE @UNKNOWN7
    case 0xC2F9A7: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:69 LDA BATTLERS_TABLE+battler::row,X
    case 0xC2F9A9: cpu.execute_instruction<0xBD>(0x009FBC, 3); return true;
    // src/unknown/C2/C2F917.asm:70 AND #$00FF
    case 0xC2F9AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:70 AND #$00FF
    // Overlapping static entry reached from 0xC2F9AC.
    case 0xC2F9AE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2F917.asm:71 BNE @UNKNOWN7
    case 0xC2F9AF: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/unknown/C2/C2F917.asm:72 LDA BATTLERS_TABLE+battler::sprite_x,X
    case 0xC2F9B1: cpu.execute_instruction<0xBD>(0x009FF0, 3); return true;
    // src/unknown/C2/C2F917.asm:73 AND #$00FF
    case 0xC2F9B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:73 AND #$00FF
    // Overlapping static entry reached from 0xC2F9B4.
    case 0xC2F9B6: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C2/C2F917.asm:74 CMP @LOCAL01
    case 0xC2F9B7: cpu.execute_instruction<0xC5>(0x000010, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2F917.asm:75 BLTEQ @UNKNOWN7
    case 0xC2F9B9: cpu.execute_instruction<0x90>(0x00000E, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2F917.asm:75 BLTEQ @UNKNOWN7
    case 0xC2F9BB: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C2/C2F917.asm:76 CMP @VIRTUAL04
    case 0xC2F9BD: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C2/C2F917.asm:77 BGT @UNKNOWN7
    case 0xC2F9BF: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C2/C2F917.asm:77 BGT @UNKNOWN7
    case 0xC2F9C1: cpu.execute_instruction<0xB0>(0x000006, 2); return true;
    // src/unknown/C2/C2F917.asm:78 LDY @LOCAL02
    case 0xC2F9C3: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2F917.asm:79 STY @LOCAL00
    case 0xC2F9C5: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C2F917.asm:80 STA @VIRTUAL04
    case 0xC2F9C7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2F917.asm:82 LDY @LOCAL02
    case 0xC2F9C9: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2F917.asm:83 INY
    case 0xC2F9CB: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:84 STY @LOCAL02
    case 0xC2F9CC: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C2/C2F917.asm:86 CPY #32
    case 0xC2F9CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/unknown/C2/C2F917.asm:86 CPY #32
    // Overlapping static entry reached from 0xC2F9CE.
    case 0xC2F9D0: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2F917.asm:87 BCC @UNKNOWN5
    case 0xC2F9D1: cpu.execute_instruction<0x90>(0x0000AF, 2); return true;
    // src/unknown/C2/C2F917.asm:88 LDA @LOCAL00
    case 0xC2F9D3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2F917.asm:89 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F9D5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:90 LDX @VIRTUAL02
    case 0xC2F9D7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2F917.asm:91 STA FRONT_ROW_BATTLERS,X
    case 0xC2F9D9: cpu.execute_instruction<0x9D>(0x00AD7A, 3); return true;
    // src/unknown/C2/C2F917.asm:92 REP #PROC_FLAGS::ACCUM8
    case 0xC2F9DC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:93 LDA @VIRTUAL04
    case 0xC2F9DE: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2F917.asm:94 LSR
    case 0xC2F9E0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:95 LSR
    case 0xC2F9E1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:96 LSR
    case 0xC2F9E2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:97 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F9E3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:98 LDX @VIRTUAL02
    case 0xC2F9E5: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2F917.asm:99 STA BATTLER_FRONT_ROW_X_POSITIONS,X
    case 0xC2F9E7: cpu.execute_instruction<0x9D>(0x00AD5A, 3); return true;
    // src/unknown/C2/C2F917.asm:100 REP #PROC_FLAGS::ACCUM8
    case 0xC2F9EA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:101 LDA @LOCAL00
    case 0xC2F9EC: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2F917.asm:102 LDY #.SIZEOF(battler)
    case 0xC2F9EE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F917.asm:102 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F9EE.
    case 0xC2F9F0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F917.asm:103 JSL MULT168
    case 0xC2F9F1: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2F917.asm:104 TAX
    case 0xC2F9F5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:105 LDA BATTLERS_TABLE+battler::sprite,X
    case 0xC2F9F6: cpu.execute_instruction<0xBD>(0x009FAE, 3); return true;
    // src/unknown/C2/C2F917.asm:106 JSR GET_BATTLE_SPRITE_HEIGHT
    case 0xC2F9F9: cpu.execute_instruction<0x20>(0x00F04E, 3); return true;
    // src/unknown/C2/C2F917.asm:107 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F9FC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:108 STA @VIRTUAL00
    case 0xC2F9FE: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C2F917.asm:109 LDA #18
    case 0xC2FA00: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x003812, 3); return true;
    // src/unknown/C2/C2F917.asm:110 SEC
    case 0xC2FA02: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:111 SBC @VIRTUAL00
    case 0xC2FA03: cpu.execute_instruction<0xE5>(0x000000, 2); return true;
    // src/unknown/C2/C2F917.asm:112 LDX @VIRTUAL02
    case 0xC2FA05: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2F917.asm:113 STA BATTLER_FRONT_ROW_Y_POSITIONS,X
    case 0xC2FA07: cpu.execute_instruction<0x9D>(0x00AD62, 3); return true;
    // src/unknown/C2/C2F917.asm:114 REP #PROC_FLAGS::ACCUM8
    case 0xC2FA0A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:115 LDA @VIRTUAL04
    case 0xC2FA0C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2F917.asm:116 STA @LOCAL01
    case 0xC2FA0E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2F917.asm:117 INC @VIRTUAL02
    case 0xC2FA10: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2F917.asm:119 LDA @VIRTUAL02
    case 0xC2FA12: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2F917.asm:120 CMP NUM_BATTLERS_IN_FRONT_ROW
    case 0xC2FA14: cpu.execute_instruction<0xCD>(0x00AD56, 3); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C2/C2F917.asm:121 BCCL @UNKNOWN4
    case 0xC2FA17: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C2/C2F917.asm:121 BCCL @UNKNOWN4
    case 0xC2FA19: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C2/C2F917.asm:121 BCCL @UNKNOWN4
    case 0xC2FA1B: cpu.execute_instruction<0x4C>(0x00F976, 3); return true;
    // src/unknown/C2/C2F917.asm:122 STZ @LOCAL01
    case 0xC2FA1E: cpu.execute_instruction<0x64>(0x000010, 2); return true;
    // src/unknown/C2/C2F917.asm:123 LDA #0
    case 0xC2FA20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2F917.asm:123 LDA #0
    // Overlapping static entry reached from 0xC2FA20.
    case 0xC2FA22: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2F917.asm:124 STA @VIRTUAL02
    case 0xC2FA23: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2F917.asm:125 JMP @UNKNOWN16
    case 0xC2FA25: cpu.execute_instruction<0x4C>(0x00FAC4, 3); return true;
    // src/unknown/C2/C2F917.asm:127 LDA #$FFFF
    case 0xC2FA28: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C2F917.asm:127 LDA #$FFFF
    // Overlapping static entry reached from 0xC2FA28.
    case 0xC2FA2A: cpu.execute_instruction<0xFF>(0xA00485, 4); return true;
    // src/unknown/C2/C2F917.asm:128 STA @VIRTUAL04
    case 0xC2FA2B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2F917.asm:129 LDY #8
    case 0xC2FA2D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C2/C2F917.asm:129 LDY #8
    // Overlapping static entry reached from 0xC2FA2A.
    case 0xC2FA2E: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:129 LDY #8
    // Overlapping static entry reached from 0xC2FA2D.
    case 0xC2FA2F: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C2/C2F917.asm:130 STY @LOCAL02
    case 0xC2FA30: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C2/C2F917.asm:131 BRA @UNKNOWN15
    case 0xC2FA32: cpu.execute_instruction<0x80>(0x00004C, 2); return true;
    // src/unknown/C2/C2F917.asm:133 TYA
    case 0xC2FA34: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:134 LDY #.SIZEOF(battler)
    case 0xC2FA35: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F917.asm:134 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2FA35.
    case 0xC2FA37: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F917.asm:135 JSL MULT168
    case 0xC2FA38: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2F917.asm:136 TAX
    case 0xC2FA3C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:137 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2FA3D: cpu.execute_instruction<0xBD>(0x009FB8, 3); return true;
    // src/unknown/C2/C2F917.asm:138 AND #$00FF
    case 0xC2FA40: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:138 AND #$00FF
    // Overlapping static entry reached from 0xC2FA40.
    case 0xC2FA42: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F917.asm:139 BEQ @UNKNOWN14
    case 0xC2FA43: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/unknown/C2/C2F917.asm:140 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC2FA45: cpu.execute_instruction<0xBD>(0x009FC9, 3); return true;
    // src/unknown/C2/C2F917.asm:141 AND #$00FF
    case 0xC2FA48: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:141 AND #$00FF
    // Overlapping static entry reached from 0xC2FA48.
    case 0xC2FA4A: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2F917.asm:142 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2FA4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2F917.asm:142 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2FA4B.
    case 0xC2FA4D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F917.asm:143 BEQ @UNKNOWN14
    case 0xC2FA4E: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/unknown/C2/C2F917.asm:144 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC2FA50: cpu.execute_instruction<0xBD>(0x009FBA, 3); return true;
    // src/unknown/C2/C2F917.asm:145 AND #$00FF
    case 0xC2FA53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:145 AND #$00FF
    // Overlapping static entry reached from 0xC2FA53.
    case 0xC2FA55: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2F917.asm:146 CMP #1
    case 0xC2FA56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2F917.asm:146 CMP #1
    // Overlapping static entry reached from 0xC2FA56.
    case 0xC2FA58: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2F917.asm:147 BNE @UNKNOWN14
    case 0xC2FA59: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:148 LDA BATTLERS_TABLE+battler::row,X
    case 0xC2FA5B: cpu.execute_instruction<0xBD>(0x009FBC, 3); return true;
    // src/unknown/C2/C2F917.asm:149 AND #$00FF
    case 0xC2FA5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:149 AND #$00FF
    // Overlapping static entry reached from 0xC2FA5E.
    case 0xC2FA60: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2F917.asm:150 BEQ @UNKNOWN14
    case 0xC2FA61: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C2/C2F917.asm:151 LDA BATTLERS_TABLE+battler::sprite_x,X
    case 0xC2FA63: cpu.execute_instruction<0xBD>(0x009FF0, 3); return true;
    // src/unknown/C2/C2F917.asm:152 AND #$00FF
    case 0xC2FA66: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2F917.asm:152 AND #$00FF
    // Overlapping static entry reached from 0xC2FA66.
    case 0xC2FA68: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C2/C2F917.asm:153 CMP @LOCAL01
    case 0xC2FA69: cpu.execute_instruction<0xC5>(0x000010, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2F917.asm:154 BLTEQ @UNKNOWN14
    case 0xC2FA6B: cpu.execute_instruction<0x90>(0x00000E, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2F917.asm:154 BLTEQ @UNKNOWN14
    case 0xC2FA6D: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C2/C2F917.asm:155 CMP @VIRTUAL04
    case 0xC2FA6F: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C2/C2F917.asm:156 BGT @UNKNOWN14
    case 0xC2FA71: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C2/C2F917.asm:156 BGT @UNKNOWN14
    case 0xC2FA73: cpu.execute_instruction<0xB0>(0x000006, 2); return true;
    // src/unknown/C2/C2F917.asm:157 LDY @LOCAL02
    case 0xC2FA75: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2F917.asm:158 STY @LOCAL00
    case 0xC2FA77: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C2F917.asm:159 STA @VIRTUAL04
    case 0xC2FA79: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2F917.asm:161 LDY @LOCAL02
    case 0xC2FA7B: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2F917.asm:162 INY
    case 0xC2FA7D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:163 STY @LOCAL02
    case 0xC2FA7E: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C2/C2F917.asm:165 CPY #32
    case 0xC2FA80: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/unknown/C2/C2F917.asm:165 CPY #32
    // Overlapping static entry reached from 0xC2FA80.
    case 0xC2FA82: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2F917.asm:166 BCC @UNKNOWN12
    case 0xC2FA83: cpu.execute_instruction<0x90>(0x0000AF, 2); return true;
    // src/unknown/C2/C2F917.asm:167 LDA @LOCAL00
    case 0xC2FA85: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2F917.asm:168 SEP #PROC_FLAGS::ACCUM8
    case 0xC2FA87: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:169 LDX @VIRTUAL02
    case 0xC2FA89: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2F917.asm:170 STA BACK_ROW_BATTLERS,X
    case 0xC2FA8B: cpu.execute_instruction<0x9D>(0x00AD82, 3); return true;
    // src/unknown/C2/C2F917.asm:171 REP #PROC_FLAGS::ACCUM8
    case 0xC2FA8E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:172 LDA @VIRTUAL04
    case 0xC2FA90: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2F917.asm:173 LSR
    case 0xC2FA92: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:174 LSR
    case 0xC2FA93: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:175 LSR
    case 0xC2FA94: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:176 SEP #PROC_FLAGS::ACCUM8
    case 0xC2FA95: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:177 LDX @VIRTUAL02
    case 0xC2FA97: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2F917.asm:178 STA BATTLER_BACK_ROW_X_POSITIONS,X
    case 0xC2FA99: cpu.execute_instruction<0x9D>(0x00AD6A, 3); return true;
    // src/unknown/C2/C2F917.asm:179 REP #PROC_FLAGS::ACCUM8
    case 0xC2FA9C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:180 LDA @LOCAL00
    case 0xC2FA9E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2F917.asm:181 LDY #.SIZEOF(battler)
    case 0xC2FAA0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2F917.asm:181 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2FAA0.
    case 0xC2FAA2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2F917.asm:182 JSL MULT168
    case 0xC2FAA3: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2F917.asm:183 TAX
    case 0xC2FAA7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:184 LDA BATTLERS_TABLE+battler::sprite,X
    case 0xC2FAA8: cpu.execute_instruction<0xBD>(0x009FAE, 3); return true;
    // src/unknown/C2/C2F917.asm:185 JSR GET_BATTLE_SPRITE_HEIGHT
    case 0xC2FAAB: cpu.execute_instruction<0x20>(0x00F04E, 3); return true;
    // src/unknown/C2/C2F917.asm:186 SEP #PROC_FLAGS::ACCUM8
    case 0xC2FAAE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:187 STA @VIRTUAL00
    case 0xC2FAB0: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C2F917.asm:188 LDA #16
    case 0xC2FAB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x003810, 3); return true;
    // src/unknown/C2/C2F917.asm:189 SEC
    case 0xC2FAB4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2F917.asm:190 SBC @VIRTUAL00
    case 0xC2FAB5: cpu.execute_instruction<0xE5>(0x000000, 2); return true;
    // src/unknown/C2/C2F917.asm:191 LDX @VIRTUAL02
    case 0xC2FAB7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2F917.asm:192 STA BATTLER_BACK_ROW_Y_POSITIONS,X
    case 0xC2FAB9: cpu.execute_instruction<0x9D>(0x00AD72, 3); return true;
    // src/unknown/C2/C2F917.asm:193 REP #PROC_FLAGS::ACCUM8
    case 0xC2FABC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2F917.asm:194 LDA @VIRTUAL04
    case 0xC2FABE: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2F917.asm:195 STA @LOCAL01
    case 0xC2FAC0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2F917.asm:196 INC @VIRTUAL02
    case 0xC2FAC2: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2F917.asm:198 LDA @VIRTUAL02
    case 0xC2FAC4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2F917.asm:199 CMP NUM_BATTLERS_IN_BACK_ROW
    case 0xC2FAC6: cpu.execute_instruction<0xCD>(0x00AD58, 3); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C2/C2F917.asm:200 BCCL @UNKNOWN11
    case 0xC2FAC9: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C2/C2F917.asm:200 BCCL @UNKNOWN11
    case 0xC2FACB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C2/C2F917.asm:200 BCCL @UNKNOWN11
    case 0xC2FACD: cpu.execute_instruction<0x4C>(0x00FA28, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2F917.asm:201 END_C_FUNCTION
    case 0xC2FAD0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2F917.asm:201 END_C_FUNCTION
    case 0xC2FAD1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2FAD2.asm (unresolved).
bool execute_unresolved_c2_c2fad2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2FAD2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2FAD2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C2FAD2.asm:6 LDA #1
    case 0xC2FAD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2FAD2.asm:6 LDA #1
    // Overlapping static entry reached from 0xC2FAD4.
    case 0xC2FAD6: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2FAD2.asm:7 END_C_FUNCTION
    case 0xC2FAD7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2FAD8.asm (unresolved).
bool execute_unresolved_c2_c2fad8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2FAD8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2FAD8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C2FAD8.asm:6 STA BATTLE_SPRITE_PALETTE_EFFECT_SPEED
    case 0xC2FADA: cpu.execute_instruction<0x8D>(0x00B37C, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2FAD8.asm:7 END_C_FUNCTION
    case 0xC2FADD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2FADE.asm (unresolved).
bool execute_unresolved_c2_c2fade_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2FADE.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2FADE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2FADE.asm:9 END_STACK_VARS
    case 0xC2FAE0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2FADE.asm:9 END_STACK_VARS
    case 0xC2FAE1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2FADE.asm:9 END_STACK_VARS
    case 0xC2FAE2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2FADE.asm:9 END_STACK_VARS
    case 0xC2FAE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2FADE.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2FAE3.
    case 0xC2FAE5: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2FADE.asm:9 END_STACK_VARS
    case 0xC2FAE6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2FADE.asm:9 END_STACK_VARS
    case 0xC2FAE7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:10 TXY
    case 0xC2FAE8: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:11 TAX
    case 0xC2FAE9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:12 STX BATTLE_SPRITE_PALETTE_EFFECT_SPEED
    case 0xC2FAEA: cpu.execute_instruction<0x8E>(0x00B37C, 3); return true;
    // src/unknown/C2/C2FADE.asm:13 TYA
    case 0xC2FAED: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:14 ASL
    case 0xC2FAEE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:15 TAX
    case 0xC2FAEF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:16 LDA BATTLE_SPRITE_PALETTE_EFFECT_SPEED
    case 0xC2FAF0: cpu.execute_instruction<0xAD>(0x00B37C, 3); return true;
    // src/unknown/C2/C2FADE.asm:17 STA BATTLE_SPRITE_PALETTE_EFFECT_FRAMES_LEFT,X
    case 0xC2FAF3: cpu.execute_instruction<0x9D>(0x00AEF4, 3); return true;
    // src/unknown/C2/C2FADE.asm:18 LDX #0
    case 0xC2FAF6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2FADE.asm:18 LDX #0
    // Overlapping static entry reached from 0xC2FAF6.
    case 0xC2FAF8: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C2/C2FADE.asm:19 STX @LOCAL01
    case 0xC2FAF9: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C2/C2FADE.asm:20 BRA @UNKNOWN1
    case 0xC2FAFB: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/unknown/C2/C2FADE.asm:22 STX @VIRTUAL02
    case 0xC2FAFD: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C2/C2FADE.asm:23 TYA
    case 0xC2FAFF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:688 STA scratch
    // Macro caller: src/unknown/C2/C2FADE.asm:24 OPTIMIZED_MULT @VIRTUAL04, 48
    case 0xC2FB00: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:689 ASL
    // Macro caller: src/unknown/C2/C2FADE.asm:24 OPTIMIZED_MULT @VIRTUAL04, 48
    case 0xC2FB02: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:690 ADC scratch
    // Macro caller: src/unknown/C2/C2FADE.asm:24 OPTIMIZED_MULT @VIRTUAL04, 48
    case 0xC2FB03: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:691 ASL
    // Macro caller: src/unknown/C2/C2FADE.asm:24 OPTIMIZED_MULT @VIRTUAL04, 48
    case 0xC2FB05: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:692 ASL
    // Macro caller: src/unknown/C2/C2FADE.asm:24 OPTIMIZED_MULT @VIRTUAL04, 48
    case 0xC2FB06: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:693 ASL
    // Macro caller: src/unknown/C2/C2FADE.asm:24 OPTIMIZED_MULT @VIRTUAL04, 48
    case 0xC2FB07: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:694 ASL
    // Macro caller: src/unknown/C2/C2FADE.asm:24 OPTIMIZED_MULT @VIRTUAL04, 48
    case 0xC2FB08: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:25 CLC
    case 0xC2FB09: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:26 ADC @VIRTUAL02
    case 0xC2FB0A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C2FADE.asm:27 ASL
    case 0xC2FB0C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:28 STA @LOCAL00
    case 0xC2FB0D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2FADE.asm:29 CLC
    case 0xC2FB0F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:30 ADC #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_DELTAS)
    case 0xC2FB10: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000FC, 2); else cpu.execute_instruction<0x69>(0x00AEFC, 3); return true;
    // src/unknown/C2/C2FADE.asm:30 ADC #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_DELTAS)
    // Overlapping static entry reached from 0xC2FB10.
    case 0xC2FB12: cpu.execute_instruction<0xAE>(0x000285, 3); return true;
    // src/unknown/C2/C2FADE.asm:31 STA @VIRTUAL02
    case 0xC2FB13: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2FADE.asm:32 LDX @VIRTUAL02
    case 0xC2FB15: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2FADE.asm:33 LDA __BSS_START__,X
    case 0xC2FB17: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2FADE.asm:34 EOR #$FFFF
    case 0xC2FB1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C2/C2FADE.asm:34 EOR #$FFFF
    // Overlapping static entry reached from 0xC2FB1A.
    case 0xC2FB1C: cpu.execute_instruction<0xFF>(0x02A61A, 4); return true;
    // src/unknown/C2/C2FADE.asm:35 INC
    case 0xC2FB1D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:36 LDX @VIRTUAL02
    case 0xC2FB1E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2FADE.asm:37 STA __BSS_START__,X
    case 0xC2FB20: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2FADE.asm:37 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2FB77.
    case 0xC2FB21: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C2FADE.asm:38 LDA @LOCAL00
    case 0xC2FB23: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2FADE.asm:39 TAX
    case 0xC2FB25: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:40 STZ BATTLE_SPRITE_PALETTE_EFFECT_COUNTERS,X
    case 0xC2FB26: cpu.execute_instruction<0x9E>(0x00B07C, 3); return true;
    // src/unknown/C2/C2FADE.asm:41 LDX @LOCAL01
    case 0xC2FB29: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C2/C2FADE.asm:42 INX
    case 0xC2FB2B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2FADE.asm:43 STX @LOCAL01
    case 0xC2FB2C: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C2/C2FADE.asm:45 CPX #48
    case 0xC2FB2E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000030, 2); else cpu.execute_instruction<0xE0>(0x000030, 3); return true;
    // src/unknown/C2/C2FADE.asm:45 CPX #48
    // Overlapping static entry reached from 0xC2FB2E.
    case 0xC2FB30: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2FADE.asm:46 BCC @UNKNOWN0
    case 0xC2FB31: cpu.execute_instruction<0x90>(0x0000CA, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2FADE.asm:47 END_C_FUNCTION
    case 0xC2FB33: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2FADE.asm:47 END_C_FUNCTION
    case 0xC2FB34: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2FB35.asm (unresolved).
bool execute_unresolved_c2_c2fb35_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2FB35.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2FB35: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2FB35.asm:16 END_STACK_VARS
    case 0xC2FB37: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2FB35.asm:16 END_STACK_VARS
    case 0xC2FB38: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2FB35.asm:16 END_STACK_VARS
    case 0xC2FB39: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2FB35.asm:16 END_STACK_VARS
    case 0xC2FB3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2FB35.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC2FB3A.
    case 0xC2FB3C: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2FB35.asm:16 END_STACK_VARS
    case 0xC2FB3D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2FB35.asm:16 END_STACK_VARS
    case 0xC2FB3E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:17 STY @LOCAL06
    case 0xC2FB3F: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/unknown/C2/C2FB35.asm:17 STY @LOCAL06
    // Overlapping static entry reached from 0xC2FB3C.
    case 0xC2FB40: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:18 STX @VIRTUAL04
    case 0xC2FB41: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C2/C2FB35.asm:19 STX @LOCAL05
    case 0xC2FB43: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C2/C2FB35.asm:20 STA @LOCAL04
    case 0xC2FB45: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2FB35.asm:21 LDX @PARAM03
    case 0xC2FB47: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // src/unknown/C2/C2FB35.asm:22 STX @LOCAL03
    case 0xC2FB49: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C2/C2FB35.asm:23 LSR
    case 0xC2FB4B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:24 LSR
    case 0xC2FB4C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:25 LSR
    case 0xC2FB4D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:26 LSR
    case 0xC2FB4E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:27 ASL
    case 0xC2FB4F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:28 TAX
    case 0xC2FB50: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:29 LDA BATTLE_SPRITE_PALETTE_EFFECT_SPEED
    case 0xC2FB51: cpu.execute_instruction<0xAD>(0x00B37C, 3); return true;
    // src/unknown/C2/C2FB35.asm:30 STA BATTLE_SPRITE_PALETTE_EFFECT_FRAMES_LEFT,X
    case 0xC2FB54: cpu.execute_instruction<0x9D>(0x00AEF4, 3); return true;
    // src/unknown/C2/C2FB35.asm:31 LDA @LOCAL04
    case 0xC2FB57: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2FB35.asm:32 ASL
    case 0xC2FB59: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:33 TAX
    case 0xC2FB5A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:34 LDA PALETTES + 12 * BPP4PALETTE_SIZE,X
    case 0xC2FB5B: cpu.execute_instruction<0xBD>(0x000380, 3); return true;
    // src/unknown/C2/C2FB35.asm:35 STA @LOCAL02
    case 0xC2FB5E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2FB35.asm:36 AND #$001F
    case 0xC2FB60: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C2/C2FB35.asm:36 AND #$001F
    // Overlapping static entry reached from 0xC2FB60.
    case 0xC2FB62: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2FB35.asm:37 STA @VIRTUAL02
    case 0xC2FB63: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:38 LDA @LOCAL02
    case 0xC2FB65: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2FB35.asm:39 LSR
    case 0xC2FB67: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:40 LSR
    case 0xC2FB68: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:41 LSR
    case 0xC2FB69: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:42 LSR
    case 0xC2FB6A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:43 LSR
    case 0xC2FB6B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:44 AND #$001F
    case 0xC2FB6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C2/C2FB35.asm:44 AND #$001F
    // Overlapping static entry reached from 0xC2FB6C.
    case 0xC2FB6E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2FB35.asm:45 TAX
    case 0xC2FB6F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:46 STX @LOCAL01
    case 0xC2FB70: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C2/C2FB35.asm:47 SEP #PROC_FLAGS::ACCUM8
    case 0xC2FB72: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2FB35.asm:48 LDA #10
    case 0xC2FB74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00E20A, 3); return true;
    // src/unknown/C2/C2FB35.asm:49 SEP #PROC_FLAGS::INDEX8
    case 0xC2FB76: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C2/C2FB35.asm:49 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC2FB74.
    case 0xC2FB77: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C2/C2FB35.asm:50 TAY
    case 0xC2FB78: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC2FB79: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2FB35.asm:52 LDA @LOCAL02
    case 0xC2FB7B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2FB35.asm:53 JSL ASR8_UNKNOWN1
    case 0xC2FB7D: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/unknown/C2/C2FB35.asm:54 AND #$001F
    case 0xC2FB81: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C2/C2FB35.asm:54 AND #$001F
    // Overlapping static entry reached from 0xC2FB81.
    case 0xC2FB83: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2FB35.asm:55 STA @LOCAL00
    case 0xC2FB84: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2FB35.asm:56 LDA @VIRTUAL04
    case 0xC2FB86: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2FB35.asm:57 CMP @VIRTUAL02
    case 0xC2FB88: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2FB35.asm:58 BLTEQ @UNKNOWN0
    case 0xC2FB8A: cpu.execute_instruction<0x90>(0x000024, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2FB35.asm:58 BLTEQ @UNKNOWN0
    case 0xC2FB8C: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/unknown/C2/C2FB35.asm:59 LDA @LOCAL04
    case 0xC2FB8E: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:60 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB90: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:60 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB92: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:60 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB93: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:60 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FB95: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:61 STA @LOCAL02
    case 0xC2FB96: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2FB35.asm:62 LDA @LOCAL05
    case 0xC2FB98: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C2FB35.asm:63 STA @VIRTUAL04
    case 0xC2FB9A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2FB35.asm:64 SEC
    case 0xC2FB9C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:65 SBC @VIRTUAL02
    case 0xC2FB9D: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:66 REP #PROC_FLAGS::INDEX8
    case 0xC2FB9F: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2FB35.asm:67 LDY #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_STEPS)
    case 0xC2FBA1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FC, 2); else cpu.execute_instruction<0xA0>(0x00B1FC, 3); return true;
    // src/unknown/C2/C2FB35.asm:67 LDY #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_STEPS)
    // Overlapping static entry reached from 0xC2FBA1.
    case 0xC2FBA3: cpu.execute_instruction<0xB1>(0x000091, 2); return true;
    // src/unknown/C2/C2FB35.asm:68 STA (@LOCAL02),Y
    case 0xC2FBA4: cpu.execute_instruction<0x91>(0x000012, 2); return true;
    // src/unknown/C2/C2FB35.asm:68 STA (@LOCAL02),Y
    // Overlapping static entry reached from 0xC2FBA3.
    case 0xC2FBA5: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // src/unknown/C2/C2FB35.asm:69 LDA #1
    case 0xC2FBA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2FB35.asm:69 LDA #1
    // Overlapping static entry reached from 0xC2FBA5.
    case 0xC2FBA7: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C2/C2FB35.asm:69 LDA #1
    // Overlapping static entry reached from 0xC2FBA6.
    case 0xC2FBA8: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C2/C2FB35.asm:70 LDY #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_DELTAS)
    case 0xC2FBA9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FC, 2); else cpu.execute_instruction<0xA0>(0x00AEFC, 3); return true;
    // src/unknown/C2/C2FB35.asm:70 LDY #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_DELTAS)
    // Overlapping static entry reached from 0xC2FBA9.
    case 0xC2FBAB: cpu.execute_instruction<0xAE>(0x001291, 3); return true;
    // src/unknown/C2/C2FB35.asm:71 STA (@LOCAL02),Y
    case 0xC2FBAC: cpu.execute_instruction<0x91>(0x000012, 2); return true;
    // src/unknown/C2/C2FB35.asm:72 BRA @UNKNOWN2
    case 0xC2FBAE: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/unknown/C2/C2FB35.asm:74 LDA @VIRTUAL04
    case 0xC2FBB0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2FB35.asm:75 CMP @VIRTUAL02
    case 0xC2FBB2: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:76 BNE @UNKNOWN1
    case 0xC2FBB4: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C2/C2FB35.asm:77 LDA @LOCAL04
    case 0xC2FBB6: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:78 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FBB8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:78 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FBBA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:78 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FBBB: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:78 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FBBD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:79 REP #PROC_FLAGS::INDEX8
    case 0xC2FBBE: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2FB35.asm:80 TAX
    case 0xC2FBC0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:81 STZ BATTLE_SPRITE_PALETTE_EFFECT_DELTAS,X
    case 0xC2FBC1: cpu.execute_instruction<0x9E>(0x00AEFC, 3); return true;
    // src/unknown/C2/C2FB35.asm:82 BRA @UNKNOWN2
    case 0xC2FBC4: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/unknown/C2/C2FB35.asm:84 LDA @LOCAL04
    case 0xC2FBC6: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:85 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FBC8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:85 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FBCA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:85 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FBCB: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:85 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FBCD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:86 STA @LOCAL02
    case 0xC2FBCE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2FB35.asm:87 LDA @LOCAL05
    case 0xC2FBD0: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C2FB35.asm:88 STA @VIRTUAL04
    case 0xC2FBD2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2FB35.asm:89 LDA @VIRTUAL02
    case 0xC2FBD4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:90 SEC
    case 0xC2FBD6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:91 SBC @VIRTUAL04
    case 0xC2FBD7: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C2/C2FB35.asm:92 REP #PROC_FLAGS::INDEX8
    case 0xC2FBD9: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2FB35.asm:93 LDY #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_STEPS)
    case 0xC2FBDB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FC, 2); else cpu.execute_instruction<0xA0>(0x00B1FC, 3); return true;
    // src/unknown/C2/C2FB35.asm:93 LDY #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_STEPS)
    // Overlapping static entry reached from 0xC2FBDB.
    case 0xC2FBDD: cpu.execute_instruction<0xB1>(0x000091, 2); return true;
    // src/unknown/C2/C2FB35.asm:94 STA (@LOCAL02),Y
    case 0xC2FBDE: cpu.execute_instruction<0x91>(0x000012, 2); return true;
    // src/unknown/C2/C2FB35.asm:94 STA (@LOCAL02),Y
    // Overlapping static entry reached from 0xC2FBDD.
    case 0xC2FBDF: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // src/unknown/C2/C2FB35.asm:95 LDA #$FFFF
    case 0xC2FBE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C2FB35.asm:95 LDA #$FFFF
    // Overlapping static entry reached from 0xC2FBDF.
    case 0xC2FBE1: cpu.execute_instruction<0xFF>(0xFCA0FF, 4); return true;
    // src/unknown/C2/C2FB35.asm:95 LDA #$FFFF
    // Overlapping static entry reached from 0xC2FBE0.
    case 0xC2FBE2: cpu.execute_instruction<0xFF>(0xAEFCA0, 4); return true;
    // src/unknown/C2/C2FB35.asm:96 LDY #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_DELTAS)
    case 0xC2FBE3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FC, 2); else cpu.execute_instruction<0xA0>(0x00AEFC, 3); return true;
    // src/unknown/C2/C2FB35.asm:96 LDY #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_DELTAS)
    // Overlapping static entry reached from 0xC2FBE3.
    case 0xC2FBE5: cpu.execute_instruction<0xAE>(0x001291, 3); return true;
    // src/unknown/C2/C2FB35.asm:97 STA (@LOCAL02),Y
    case 0xC2FBE6: cpu.execute_instruction<0x91>(0x000012, 2); return true;
    // src/unknown/C2/C2FB35.asm:99 LDX @LOCAL01
    case 0xC2FBE8: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C2/C2FB35.asm:100 STX @VIRTUAL02
    case 0xC2FBEA: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:101 LDY @LOCAL06
    case 0xC2FBEC: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C2/C2FB35.asm:102 TYA
    case 0xC2FBEE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:103 CMP @VIRTUAL02
    case 0xC2FBEF: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2FB35.asm:104 BLTEQ @UNKNOWN3
    case 0xC2FBF1: cpu.execute_instruction<0x90>(0x000021, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2FB35.asm:104 BLTEQ @UNKNOWN3
    case 0xC2FBF3: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/unknown/C2/C2FB35.asm:105 LDA @LOCAL04
    case 0xC2FBF5: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:106 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FBF7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:106 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FBF9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:106 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FBFA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:106 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FBFC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:107 STA @VIRTUAL02
    case 0xC2FBFD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:108 STX @VIRTUAL04
    case 0xC2FBFF: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C2/C2FB35.asm:109 TYA
    case 0xC2FC01: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:110 SEC
    case 0xC2FC02: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:111 SBC @VIRTUAL04
    case 0xC2FC03: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C2/C2FB35.asm:112 LDX @VIRTUAL02
    case 0xC2FC05: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:113 STA BATTLE_SPRITE_PALETTE_EFFECT_STEPS + 2,X
    case 0xC2FC07: cpu.execute_instruction<0x9D>(0x00B1FE, 3); return true;
    // src/unknown/C2/C2FB35.asm:114 LDA #32
    case 0xC2FC0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C2/C2FB35.asm:114 LDA #32
    // Overlapping static entry reached from 0xC2FC0A.
    case 0xC2FC0C: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C2/C2FB35.asm:115 LDX @VIRTUAL02
    case 0xC2FC0D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:116 STA BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 2,X
    case 0xC2FC0F: cpu.execute_instruction<0x9D>(0x00AEFE, 3); return true;
    // src/unknown/C2/C2FB35.asm:117 BRA @UNKNOWN5
    case 0xC2FC12: cpu.execute_instruction<0x80>(0x000032, 2); return true;
    // src/unknown/C2/C2FB35.asm:119 STX @VIRTUAL02
    case 0xC2FC14: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:120 TYA
    case 0xC2FC16: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:121 CMP @VIRTUAL02
    case 0xC2FC17: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:122 BNE @UNKNOWN4
    case 0xC2FC19: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/unknown/C2/C2FB35.asm:123 LDA @LOCAL04
    case 0xC2FC1B: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:124 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC1D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:124 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC1F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:124 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC20: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:124 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC22: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:125 TAX
    case 0xC2FC23: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:126 STZ BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 2,X
    case 0xC2FC24: cpu.execute_instruction<0x9E>(0x00AEFE, 3); return true;
    // src/unknown/C2/C2FB35.asm:127 BRA @UNKNOWN5
    case 0xC2FC27: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/unknown/C2/C2FB35.asm:129 LDA @LOCAL04
    case 0xC2FC29: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:130 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC2B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:130 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC2D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:130 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC2E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:130 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC30: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:131 STA @VIRTUAL02
    case 0xC2FC31: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:132 STY @VIRTUAL04
    case 0xC2FC33: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C2/C2FB35.asm:133 TXA
    case 0xC2FC35: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:134 SEC
    case 0xC2FC36: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:135 SBC @VIRTUAL04
    case 0xC2FC37: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C2/C2FB35.asm:136 LDX @VIRTUAL02
    case 0xC2FC39: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:137 STA BATTLE_SPRITE_PALETTE_EFFECT_STEPS + 2,X
    case 0xC2FC3B: cpu.execute_instruction<0x9D>(0x00B1FE, 3); return true;
    // src/unknown/C2/C2FB35.asm:138 LDA #$FFE0
    case 0xC2FC3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x00FFE0, 3); return true;
    // src/unknown/C2/C2FB35.asm:138 LDA #$FFE0
    // Overlapping static entry reached from 0xC2FC3E.
    case 0xC2FC40: cpu.execute_instruction<0xFF>(0x9D02A6, 4); return true;
    // src/unknown/C2/C2FB35.asm:139 LDX @VIRTUAL02
    case 0xC2FC41: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2FB35.asm:140 STA BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 2,X
    case 0xC2FC43: cpu.execute_instruction<0x9D>(0x00AEFE, 3); return true;
    // src/unknown/C2/C2FB35.asm:140 STA BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 2,X
    // Overlapping static entry reached from 0xC2FC40.
    case 0xC2FC44: cpu.execute_instruction<0xFE>(0x00A5AE, 3); return true;
    // src/unknown/C2/C2FB35.asm:142 LDA @LOCAL03
    case 0xC2FC46: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2FB35.asm:142 LDA @LOCAL03
    // Overlapping static entry reached from 0xC2FC44.
    case 0xC2FC47: cpu.execute_instruction<0x14>(0x0000C5, 2); return true;
    // src/unknown/C2/C2FB35.asm:143 CMP @LOCAL00
    case 0xC2FC48: cpu.execute_instruction<0xC5>(0x00000E, 2); return true;
    // src/unknown/C2/C2FB35.asm:143 CMP @LOCAL00
    // Overlapping static entry reached from 0xC2FC47.
    case 0xC2FC49: cpu.execute_instruction<0x0E>(0x001B90, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2FB35.asm:144 BLTEQ @UNKNOWN6
    case 0xC2FC4A: cpu.execute_instruction<0x90>(0x00001B, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2FB35.asm:144 BLTEQ @UNKNOWN6
    case 0xC2FC4C: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/unknown/C2/C2FB35.asm:145 LDA @LOCAL04
    case 0xC2FC4E: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:146 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC50: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:146 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC52: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:146 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC53: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:146 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC55: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:147 TAX
    case 0xC2FC56: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:148 LDA @LOCAL03
    case 0xC2FC57: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2FB35.asm:149 SEC
    case 0xC2FC59: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:150 SBC @LOCAL00
    case 0xC2FC5A: cpu.execute_instruction<0xE5>(0x00000E, 2); return true;
    // src/unknown/C2/C2FB35.asm:151 STA BATTLE_SPRITE_PALETTE_EFFECT_STEPS + 4,X
    case 0xC2FC5C: cpu.execute_instruction<0x9D>(0x00B200, 3); return true;
    // src/unknown/C2/C2FB35.asm:152 LDA #$0400
    case 0xC2FC5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000400, 3); return true;
    // src/unknown/C2/C2FB35.asm:152 LDA #$0400
    // Overlapping static entry reached from 0xC2FC5F.
    case 0xC2FC61: cpu.execute_instruction<0x04>(0x00009D, 2); return true;
    // src/unknown/C2/C2FB35.asm:153 STA BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 4,X
    case 0xC2FC62: cpu.execute_instruction<0x9D>(0x00AF00, 3); return true;
    // src/unknown/C2/C2FB35.asm:153 STA BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 4,X
    // Overlapping static entry reached from 0xC2FC61.
    case 0xC2FC63: cpu.execute_instruction<0x00>(0x0000AF, 2); return true;
    // src/unknown/C2/C2FB35.asm:154 BRA @UNKNOWN8
    case 0xC2FC65: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // src/unknown/C2/C2FB35.asm:156 LDA @LOCAL03
    case 0xC2FC67: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2FB35.asm:157 CMP @LOCAL00
    case 0xC2FC69: cpu.execute_instruction<0xC5>(0x00000E, 2); return true;
    // src/unknown/C2/C2FB35.asm:158 BNE @UNKNOWN7
    case 0xC2FC6B: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/unknown/C2/C2FB35.asm:159 LDA @LOCAL04
    case 0xC2FC6D: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:160 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC6F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:160 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC71: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:160 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC72: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:160 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC74: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:161 TAX
    case 0xC2FC75: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:162 STZ BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 4,X
    case 0xC2FC76: cpu.execute_instruction<0x9E>(0x00AF00, 3); return true;
    // src/unknown/C2/C2FB35.asm:163 BRA @UNKNOWN8
    case 0xC2FC79: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/unknown/C2/C2FB35.asm:165 LDA @LOCAL04
    case 0xC2FC7B: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:166 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC7D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:166 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC7F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:166 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC80: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:166 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC82: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:167 TAX
    case 0xC2FC83: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:168 LDA @LOCAL00
    case 0xC2FC84: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2FB35.asm:169 SEC
    case 0xC2FC86: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:170 SBC @LOCAL03
    case 0xC2FC87: cpu.execute_instruction<0xE5>(0x000014, 2); return true;
    // src/unknown/C2/C2FB35.asm:171 STA BATTLE_SPRITE_PALETTE_EFFECT_STEPS + 4,X
    case 0xC2FC89: cpu.execute_instruction<0x9D>(0x00B200, 3); return true;
    // src/unknown/C2/C2FB35.asm:172 LDA #$FC00
    case 0xC2FC8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00FC00, 3); return true;
    // src/unknown/C2/C2FB35.asm:172 LDA #$FC00
    // Overlapping static entry reached from 0xC2FC8C.
    case 0xC2FC8E: cpu.execute_instruction<0xFC>(0x00009D, 3); return true;
    // src/unknown/C2/C2FB35.asm:173 STA BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 4,X
    case 0xC2FC8F: cpu.execute_instruction<0x9D>(0x00AF00, 3); return true;
    // src/unknown/C2/C2FB35.asm:173 STA BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 4,X
    // Overlapping static entry reached from 0xC2FC8E.
    case 0xC2FC91: cpu.execute_instruction<0xAF>(0x8516A5, 4); return true;
    // src/unknown/C2/C2FB35.asm:175 LDA @LOCAL04
    case 0xC2FC92: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:176 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC94: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:176 OPTIMIZED_MULT @VIRTUAL04, 6
    // Overlapping static entry reached from 0xC2FC91.
    case 0xC2FC95: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:176 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC96: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FB35.asm:176 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC97: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FB35.asm:176 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FC99: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:177 TAX
    case 0xC2FC9A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FB35.asm:178 STZ BATTLE_SPRITE_PALETTE_EFFECT_COUNTERS + 4,X
    case 0xC2FC9B: cpu.execute_instruction<0x9E>(0x00B080, 3); return true;
    // src/unknown/C2/C2FB35.asm:179 STZ BATTLE_SPRITE_PALETTE_EFFECT_COUNTERS + 2,X
    case 0xC2FC9E: cpu.execute_instruction<0x9E>(0x00B07E, 3); return true;
    // src/unknown/C2/C2FB35.asm:180 STZ BATTLE_SPRITE_PALETTE_EFFECT_COUNTERS,X
    case 0xC2FCA1: cpu.execute_instruction<0x9E>(0x00B07C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2FB35.asm:181 END_C_FUNCTION
    case 0xC2FCA4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2FB35.asm:181 END_C_FUNCTION
    case 0xC2FCA5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2FCA6.asm (unresolved).
bool execute_unresolved_c2_c2fca6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2FCA6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2FCA6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2FCA6.asm:11 END_STACK_VARS
    case 0xC2FCA8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2FCA6.asm:11 END_STACK_VARS
    case 0xC2FCA9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2FCA6.asm:11 END_STACK_VARS
    case 0xC2FCAA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2FCA6.asm:11 END_STACK_VARS
    case 0xC2FCAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2FCA6.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC2FCAB.
    case 0xC2FCAD: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2FCA6.asm:11 END_STACK_VARS
    case 0xC2FCAE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2FCA6.asm:11 END_STACK_VARS
    case 0xC2FCAF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:12 STA @VIRTUAL02
    case 0xC2FCB0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2FCA6.asm:12 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2FCAD.
    case 0xC2FCB1: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C2/C2FCA6.asm:13 STA @LOCAL04
    case 0xC2FCB2: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2FCA6.asm:14 LDA @VIRTUAL02
    case 0xC2FCB4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2FCA6.asm:15 LSR
    case 0xC2FCB6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:16 LSR
    case 0xC2FCB7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:17 LSR
    case 0xC2FCB8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:18 LSR
    case 0xC2FCB9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:19 ASL
    case 0xC2FCBA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:20 TAX
    case 0xC2FCBB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:21 LDA BATTLE_SPRITE_PALETTE_EFFECT_SPEED
    case 0xC2FCBC: cpu.execute_instruction<0xAD>(0x00B37C, 3); return true;
    // src/unknown/C2/C2FCA6.asm:22 STA BATTLE_SPRITE_PALETTE_EFFECT_FRAMES_LEFT,X
    case 0xC2FCBF: cpu.execute_instruction<0x9D>(0x00AEF4, 3); return true;
    // src/unknown/C2/C2FCA6.asm:23 LDA @VIRTUAL02
    case 0xC2FCC2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2FCA6.asm:24 ASL
    case 0xC2FCC4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:25 TAX
    case 0xC2FCC5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:26 LDA PALETTES + 12 * BPP4PALETTE_SIZE,X
    case 0xC2FCC6: cpu.execute_instruction<0xBD>(0x000380, 3); return true;
    // src/unknown/C2/C2FCA6.asm:27 STA @LOCAL03
    case 0xC2FCC9: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C2FCA6.asm:28 AND #$001F
    case 0xC2FCCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C2/C2FCA6.asm:28 AND #$001F
    // Overlapping static entry reached from 0xC2FCCB.
    case 0xC2FCCD: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C2/C2FCA6.asm:29 TAY
    case 0xC2FCCE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:30 STY @LOCAL02
    case 0xC2FCCF: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C2/C2FCA6.asm:31 LDA @LOCAL03
    case 0xC2FCD1: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2FCA6.asm:32 LSR
    case 0xC2FCD3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:33 LSR
    case 0xC2FCD4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:34 LSR
    case 0xC2FCD5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:35 LSR
    case 0xC2FCD6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:36 LSR
    case 0xC2FCD7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:37 AND #$001F
    case 0xC2FCD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C2/C2FCA6.asm:37 AND #$001F
    // Overlapping static entry reached from 0xC2FCD8.
    case 0xC2FCDA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2FCA6.asm:38 STA @VIRTUAL04
    case 0xC2FCDB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2FCA6.asm:39 STA @LOCAL01
    case 0xC2FCDD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2FCA6.asm:40 SEP #PROC_FLAGS::INDEX8
    case 0xC2FCDF: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C2/C2FCA6.asm:41 LDY #10
    case 0xC2FCE1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00A50A, 3); return true;
    // src/unknown/C2/C2FCA6.asm:42 LDA @LOCAL03
    case 0xC2FCE3: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2FCA6.asm:42 LDA @LOCAL03
    // Overlapping static entry reached from 0xC2FCE1.
    case 0xC2FCE4: cpu.execute_instruction<0x14>(0x000022, 2); return true;
    // src/unknown/C2/C2FCA6.asm:43 JSL ASR8_UNKNOWN1
    case 0xC2FCE5: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/unknown/C2/C2FCA6.asm:43 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC2FCE4.
    case 0xC2FCE6: cpu.execute_instruction<0x51>(0x000092, 2); return true;
    // src/unknown/C2/C2FCA6.asm:43 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC2FCE6.
    case 0xC2FCE8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000029, 2); else cpu.execute_instruction<0xC0>(0x001F29, 3); return true;
    // src/unknown/C2/C2FCA6.asm:44 AND #$001F
    case 0xC2FCE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C2/C2FCA6.asm:44 AND #$001F
    // Overlapping static entry reached from 0xC2FCE8.
    case 0xC2FCEA: cpu.execute_instruction<0x1F>(0x0E8500, 4); return true;
    // src/unknown/C2/C2FCA6.asm:44 AND #$001F
    // Overlapping static entry reached from 0xC2FCE9.
    case 0xC2FCEB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2FCA6.asm:45 STA @LOCAL00
    case 0xC2FCEC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2FCA6.asm:46 REP #PROC_FLAGS::INDEX8
    case 0xC2FCEE: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2FCA6.asm:47 LDY @LOCAL02
    case 0xC2FCF0: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2FCA6.asm:48 BEQ @UNKNOWN0
    case 0xC2FCF2: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/unknown/C2/C2FCA6.asm:49 LDA @VIRTUAL02
    case 0xC2FCF4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:50 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FCF6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:50 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FCF8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:50 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FCF9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:50 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FCFB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:51 TAX
    case 0xC2FCFC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:52 TYA
    case 0xC2FCFD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:53 LSR
    case 0xC2FCFE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:54 LSR
    case 0xC2FCFF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:55 STA @VIRTUAL02
    case 0xC2FD00: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2FCA6.asm:56 TYA
    case 0xC2FD02: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:57 SEC
    case 0xC2FD03: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:58 SBC @VIRTUAL02
    case 0xC2FD04: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C2/C2FCA6.asm:59 STA BATTLE_SPRITE_PALETTE_EFFECT_STEPS,X
    case 0xC2FD06: cpu.execute_instruction<0x9D>(0x00B1FC, 3); return true;
    // src/unknown/C2/C2FCA6.asm:60 LDA #$FFFF
    case 0xC2FD09: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C2FCA6.asm:60 LDA #$FFFF
    // Overlapping static entry reached from 0xC2FD09.
    case 0xC2FD0B: cpu.execute_instruction<0xFF>(0xAEFC9D, 4); return true;
    // src/unknown/C2/C2FCA6.asm:61 STA BATTLE_SPRITE_PALETTE_EFFECT_DELTAS,X
    case 0xC2FD0C: cpu.execute_instruction<0x9D>(0x00AEFC, 3); return true;
    // src/unknown/C2/C2FCA6.asm:62 BRA @UNKNOWN1
    case 0xC2FD0F: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C2/C2FCA6.asm:64 LDA @VIRTUAL02
    case 0xC2FD11: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:65 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FD13: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:65 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FD15: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:65 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FD16: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:65 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FD18: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:66 TAX
    case 0xC2FD19: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:67 STZ BATTLE_SPRITE_PALETTE_EFFECT_DELTAS,X
    case 0xC2FD1A: cpu.execute_instruction<0x9E>(0x00AEFC, 3); return true;
    // src/unknown/C2/C2FCA6.asm:69 LDA @LOCAL01
    case 0xC2FD1D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C2FCA6.asm:70 STA @VIRTUAL04
    case 0xC2FD1F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2FCA6.asm:71 BEQ @UNKNOWN2
    case 0xC2FD21: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/C2/C2FCA6.asm:72 LDA @LOCAL04
    case 0xC2FD23: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2FCA6.asm:73 STA @VIRTUAL02
    case 0xC2FD25: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:74 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FD27: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:74 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FD29: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:74 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FD2A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:74 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FD2C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:75 TAX
    case 0xC2FD2D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:76 LDA @LOCAL01
    case 0xC2FD2E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C2FCA6.asm:77 STA @VIRTUAL04
    case 0xC2FD30: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2FCA6.asm:78 LSR
    case 0xC2FD32: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:79 LSR
    case 0xC2FD33: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:80 PHA
    case 0xC2FD34: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:81 LDA @VIRTUAL04
    case 0xC2FD35: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2FCA6.asm:82 PLY
    case 0xC2FD37: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:83 STY @VIRTUAL04
    case 0xC2FD38: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C2/C2FCA6.asm:84 SEC
    case 0xC2FD3A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:85 SBC @VIRTUAL04
    case 0xC2FD3B: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C2/C2FCA6.asm:86 STA BATTLE_SPRITE_PALETTE_EFFECT_STEPS + 2,X
    case 0xC2FD3D: cpu.execute_instruction<0x9D>(0x00B1FE, 3); return true;
    // src/unknown/C2/C2FCA6.asm:87 LDA #$FFE0
    case 0xC2FD40: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x00FFE0, 3); return true;
    // src/unknown/C2/C2FCA6.asm:87 LDA #$FFE0
    // Overlapping static entry reached from 0xC2FD40.
    case 0xC2FD42: cpu.execute_instruction<0xFF>(0xAEFE9D, 4); return true;
    // src/unknown/C2/C2FCA6.asm:88 STA BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 2,X
    case 0xC2FD43: cpu.execute_instruction<0x9D>(0x00AEFE, 3); return true;
    // src/unknown/C2/C2FCA6.asm:89 BRA @UNKNOWN3
    case 0xC2FD46: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C2/C2FCA6.asm:91 LDA @LOCAL04
    case 0xC2FD48: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2FCA6.asm:92 STA @VIRTUAL02
    case 0xC2FD4A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:93 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FD4C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:93 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FD4E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:93 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FD4F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:93 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FD51: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:94 TAX
    case 0xC2FD52: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:95 STZ BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 2,X
    case 0xC2FD53: cpu.execute_instruction<0x9E>(0x00AEFE, 3); return true;
    // src/unknown/C2/C2FCA6.asm:97 LDA @LOCAL00
    case 0xC2FD56: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2FCA6.asm:98 BEQ @UNKNOWN4
    case 0xC2FD58: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/unknown/C2/C2FCA6.asm:99 LDA @VIRTUAL02
    case 0xC2FD5A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:100 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FD5C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:100 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FD5E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:100 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FD5F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:100 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FD61: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:101 TAX
    case 0xC2FD62: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:102 LDA @LOCAL00
    case 0xC2FD63: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2FCA6.asm:103 LSR
    case 0xC2FD65: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:104 LSR
    case 0xC2FD66: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:105 STA @VIRTUAL04
    case 0xC2FD67: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2FCA6.asm:106 LDA @LOCAL00
    case 0xC2FD69: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2FCA6.asm:107 SEC
    case 0xC2FD6B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:108 SBC @VIRTUAL04
    case 0xC2FD6C: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C2/C2FCA6.asm:109 STA BATTLE_SPRITE_PALETTE_EFFECT_STEPS + 4,X
    case 0xC2FD6E: cpu.execute_instruction<0x9D>(0x00B200, 3); return true;
    // src/unknown/C2/C2FCA6.asm:110 LDA #$FC00
    case 0xC2FD71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00FC00, 3); return true;
    // src/unknown/C2/C2FCA6.asm:110 LDA #$FC00
    // Overlapping static entry reached from 0xC2FD71.
    case 0xC2FD73: cpu.execute_instruction<0xFC>(0x00009D, 3); return true;
    // src/unknown/C2/C2FCA6.asm:111 STA BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 4,X
    case 0xC2FD74: cpu.execute_instruction<0x9D>(0x00AF00, 3); return true;
    // src/unknown/C2/C2FCA6.asm:111 STA BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 4,X
    // Overlapping static entry reached from 0xC2FD73.
    case 0xC2FD76: cpu.execute_instruction<0xAF>(0xA50C80, 4); return true;
    // src/unknown/C2/C2FCA6.asm:112 BRA @UNKNOWN5
    case 0xC2FD77: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C2/C2FCA6.asm:114 LDA @VIRTUAL02
    case 0xC2FD79: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2FCA6.asm:114 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC2FD76.
    case 0xC2FD7A: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:115 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FD7B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:115 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FD7D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:115 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FD7E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:115 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FD80: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:116 TAX
    case 0xC2FD81: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:117 STZ BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 4,X
    case 0xC2FD82: cpu.execute_instruction<0x9E>(0x00AF00, 3); return true;
    // src/unknown/C2/C2FCA6.asm:117 STZ BATTLE_SPRITE_PALETTE_EFFECT_DELTAS + 4,X
    // Overlapping static entry reached from 0xC2FDD7.
    case 0xC2FD83: cpu.execute_instruction<0x00>(0x0000AF, 2); return true;
    // src/unknown/C2/C2FCA6.asm:119 LDA @VIRTUAL02
    case 0xC2FD85: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:120 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FD87: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:120 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FD89: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C2/C2FCA6.asm:120 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FD8A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C2/C2FCA6.asm:120 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2FD8C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:121 TAX
    case 0xC2FD8D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FCA6.asm:122 STZ BATTLE_SPRITE_PALETTE_EFFECT_COUNTERS + 4,X
    case 0xC2FD8E: cpu.execute_instruction<0x9E>(0x00B080, 3); return true;
    // src/unknown/C2/C2FCA6.asm:123 STZ BATTLE_SPRITE_PALETTE_EFFECT_COUNTERS + 2,X
    case 0xC2FD91: cpu.execute_instruction<0x9E>(0x00B07E, 3); return true;
    // src/unknown/C2/C2FCA6.asm:124 STZ BATTLE_SPRITE_PALETTE_EFFECT_COUNTERS,X
    case 0xC2FD94: cpu.execute_instruction<0x9E>(0x00B07C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2FCA6.asm:125 END_C_FUNCTION
    case 0xC2FD97: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2FCA6.asm:125 END_C_FUNCTION
    case 0xC2FD98: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2FD99.asm (unresolved).
bool execute_unresolved_c2_c2fd99_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2FD99.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2FD99: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2FD99.asm:11 END_STACK_VARS
    case 0xC2FD9B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2FD99.asm:11 END_STACK_VARS
    case 0xC2FD9C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2FD99.asm:11 END_STACK_VARS
    case 0xC2FD9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2FD99.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC2FD9D.
    case 0xC2FD9F: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2FD99.asm:11 END_STACK_VARS
    case 0xC2FDA0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:12 LDA #0
    case 0xC2FDA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:12 LDA #0
    // Overlapping static entry reached from 0xC2FDA1.
    case 0xC2FDA3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2FD99.asm:13 STA @VIRTUAL04
    case 0xC2FDA4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2FD99.asm:14 STA @LOCAL05
    case 0xC2FDA6: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C2/C2FD99.asm:15 JMP @UNKNOWN15
    case 0xC2FDA8: cpu.execute_instruction<0x4C>(0x00FEEB, 3); return true;
    // src/unknown/C2/C2FD99.asm:17 LDA @VIRTUAL04
    case 0xC2FDAB: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2FD99.asm:18 ASL
    case 0xC2FDAD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:19 CLC
    case 0xC2FDAE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:20 ADC #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_FRAMES_LEFT)
    case 0xC2FDAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F4, 2); else cpu.execute_instruction<0x69>(0x00AEF4, 3); return true;
    // src/unknown/C2/C2FD99.asm:20 ADC #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_FRAMES_LEFT)
    // Overlapping static entry reached from 0xC2FDAF.
    case 0xC2FDB1: cpu.execute_instruction<0xAE>(0x00BDAA, 3); return true;
    // src/unknown/C2/C2FD99.asm:21 TAX
    case 0xC2FDB2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:22 LDA __BSS_START__,X
    case 0xC2FDB3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:22 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC2FDB1.
    case 0xC2FDB4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C2FD99.asm:23 BEQL @UNKNOWN14
    case 0xC2FDB6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C2FD99.asm:23 BEQL @UNKNOWN14
    case 0xC2FDB8: cpu.execute_instruction<0x4C>(0x00FEE5, 3); return true;
    // src/unknown/C2/C2FD99.asm:24 DEC
    case 0xC2FDBB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:25 STA __BSS_START__,X
    case 0xC2FDBC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:26 LDA @VIRTUAL04
    case 0xC2FDBF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:712 STA scratch
    // Macro caller: src/unknown/C2/C2FD99.asm:27 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC2FDC1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:713 ASL
    // Macro caller: src/unknown/C2/C2FD99.asm:27 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC2FDC3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:714 ADC scratch
    // Macro caller: src/unknown/C2/C2FD99.asm:27 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC2FDC4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:715 ASL
    // Macro caller: src/unknown/C2/C2FD99.asm:27 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC2FDC6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:716 ASL
    // Macro caller: src/unknown/C2/C2FD99.asm:27 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC2FDC7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:717 ASL
    // Macro caller: src/unknown/C2/C2FD99.asm:27 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC2FDC8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:718 ASL
    // Macro caller: src/unknown/C2/C2FD99.asm:27 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC2FDC9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:719 ASL
    // Macro caller: src/unknown/C2/C2FD99.asm:27 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC2FDCA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:28 STA @LOCAL04
    case 0xC2FDCB: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:29 CLC
    case 0xC2FDCD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:30 ADC #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_DELTAS) + 6
    case 0xC2FDCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x00AF02, 3); return true;
    // src/unknown/C2/C2FD99.asm:30 ADC #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_DELTAS) + 6
    // Overlapping static entry reached from 0xC2FDCE.
    case 0xC2FDD0: cpu.execute_instruction<0xAF>(0x16A5A8, 4); return true;
    // src/unknown/C2/C2FD99.asm:31 TAY
    case 0xC2FDD1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:32 LDA @LOCAL04
    case 0xC2FDD2: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:33 CLC
    case 0xC2FDD4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:34 ADC #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_COUNTERS) + 6
    case 0xC2FDD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000082, 2); else cpu.execute_instruction<0x69>(0x00B082, 3); return true;
    // src/unknown/C2/C2FD99.asm:34 ADC #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_COUNTERS) + 6
    // Overlapping static entry reached from 0xC2FDD5.
    case 0xC2FDD7: cpu.execute_instruction<0xB0>(0x0000AA, 2); return true;
    // src/unknown/C2/C2FD99.asm:35 TAX
    case 0xC2FDD8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:36 STX @LOCAL03
    case 0xC2FDD9: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:37 LDA @LOCAL04
    case 0xC2FDDB: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:38 CLC
    case 0xC2FDDD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:39 ADC #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_STEPS) + 6
    case 0xC2FDDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x00B202, 3); return true;
    // src/unknown/C2/C2FD99.asm:39 ADC #.LOWORD(BATTLE_SPRITE_PALETTE_EFFECT_STEPS) + 6
    // Overlapping static entry reached from 0xC2FDDE.
    case 0xC2FDE0: cpu.execute_instruction<0xB2>(0x000085, 2); return true;
    // src/unknown/C2/C2FD99.asm:40 STA @LOCAL02
    case 0xC2FDE1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:40 STA @LOCAL02
    // Overlapping static entry reached from 0xC2FDE0.
    case 0xC2FDE2: cpu.execute_instruction<0x12>(0x0000A5, 2); return true;
    // src/unknown/C2/C2FD99.asm:41 LDA @LOCAL05
    case 0xC2FDE3: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C2FD99.asm:41 LDA @LOCAL05
    // Overlapping static entry reached from 0xC2FDE2.
    case 0xC2FDE4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:42 STA @VIRTUAL04
    case 0xC2FDE5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C2/C2FD99.asm:43 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC2FDE7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C2/C2FD99.asm:43 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC2FDE8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C2/C2FD99.asm:43 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC2FDE9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C2/C2FD99.asm:43 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC2FDEA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C2/C2FD99.asm:43 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC2FDEB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:44 CLC
    case 0xC2FDEC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:45 ADC #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 12 + 1 * COLOUR_SIZE
    case 0xC2FDED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000082, 2); else cpu.execute_instruction<0x69>(0x000382, 3); return true;
    // src/unknown/C2/C2FD99.asm:45 ADC #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 12 + 1 * COLOUR_SIZE
    // Overlapping static entry reached from 0xC2FDED.
    case 0xC2FDEF: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // src/unknown/C2/C2FD99.asm:46 STA @VIRTUAL02
    case 0xC2FDF0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2FD99.asm:46 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2FDEF.
    case 0xC2FDF1: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/C2/C2FD99.asm:47 LDA #1
    case 0xC2FDF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2FD99.asm:47 LDA #1
    // Overlapping static entry reached from 0xC2FDF2.
    case 0xC2FDF4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2FD99.asm:48 STA @LOCAL01
    case 0xC2FDF5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2FD99.asm:49 JMP @UNKNOWN12
    case 0xC2FDF7: cpu.execute_instruction<0x4C>(0x00FED2, 3); return true;
    // src/unknown/C2/C2FD99.asm:51 LDA __BSS_START__,Y
    case 0xC2FDFA: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:52 BEQ @UNKNOWN5
    case 0xC2FDFD: cpu.execute_instruction<0xF0>(0x000035, 2); return true;
    // src/unknown/C2/C2FD99.asm:53 STX @LOCAL04
    case 0xC2FDFF: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:54 LDA @LOCAL02
    case 0xC2FE01: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:55 TAX
    case 0xC2FE03: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:56 LDA __BSS_START__,X
    case 0xC2FE04: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:57 CLC
    case 0xC2FE07: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:58 ADC (@LOCAL04)
    case 0xC2FE08: cpu.execute_instruction<0x72>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:59 STA (@LOCAL04)
    case 0xC2FE0A: cpu.execute_instruction<0x92>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:60 BRA @UNKNOWN4
    case 0xC2FE0C: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:62 STX @LOCAL04
    case 0xC2FE0E: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:63 LDA @LOCAL00
    case 0xC2FE10: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2FD99.asm:64 SEC
    case 0xC2FE12: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:65 SBC BATTLE_SPRITE_PALETTE_EFFECT_SPEED
    case 0xC2FE13: cpu.execute_instruction<0xED>(0x00B37C, 3); return true;
    // src/unknown/C2/C2FD99.asm:66 STA (@LOCAL04)
    case 0xC2FE16: cpu.execute_instruction<0x92>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:67 LDA @VIRTUAL02
    case 0xC2FE18: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2FD99.asm:68 STA @LOCAL04
    case 0xC2FE1A: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:69 LDA __BSS_START__,Y
    case 0xC2FE1C: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:70 CLC
    case 0xC2FE1F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:71 ADC (@LOCAL04)
    case 0xC2FE20: cpu.execute_instruction<0x72>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:72 STA (@LOCAL04)
    case 0xC2FE22: cpu.execute_instruction<0x92>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:74 LDX @LOCAL03
    case 0xC2FE24: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:75 LDA __BSS_START__,X
    case 0xC2FE26: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:76 STA @LOCAL00
    case 0xC2FE29: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2FD99.asm:77 LDA BATTLE_SPRITE_PALETTE_EFFECT_SPEED
    case 0xC2FE2B: cpu.execute_instruction<0xAD>(0x00B37C, 3); return true;
    // src/unknown/C2/C2FD99.asm:78 CMP @LOCAL00
    case 0xC2FE2E: cpu.execute_instruction<0xC5>(0x00000E, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2FD99.asm:79 BLTEQ @UNKNOWN3
    case 0xC2FE30: cpu.execute_instruction<0x90>(0x0000DC, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2FD99.asm:79 BLTEQ @UNKNOWN3
    case 0xC2FE32: cpu.execute_instruction<0xF0>(0x0000DA, 2); return true;
    // src/unknown/C2/C2FD99.asm:81 INY
    case 0xC2FE34: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:82 INY
    case 0xC2FE35: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:83 INX
    case 0xC2FE36: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:84 INX
    case 0xC2FE37: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:85 STX @LOCAL04
    case 0xC2FE38: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:86 LDA @LOCAL02
    case 0xC2FE3A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:87 INC
    case 0xC2FE3C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:88 INC
    case 0xC2FE3D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:89 STA @LOCAL03
    case 0xC2FE3E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:90 LDA __BSS_START__,Y
    case 0xC2FE40: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:91 BEQ @UNKNOWN8
    case 0xC2FE43: cpu.execute_instruction<0xF0>(0x000035, 2); return true;
    // src/unknown/C2/C2FD99.asm:92 STX @LOCAL02
    case 0xC2FE45: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:93 LDA @LOCAL03
    case 0xC2FE47: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:94 TAX
    case 0xC2FE49: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:95 LDA __BSS_START__,X
    case 0xC2FE4A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:96 CLC
    case 0xC2FE4D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:97 ADC (@LOCAL02)
    case 0xC2FE4E: cpu.execute_instruction<0x72>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:98 STA (@LOCAL02)
    case 0xC2FE50: cpu.execute_instruction<0x92>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:99 BRA @UNKNOWN7
    case 0xC2FE52: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:101 STX @LOCAL02
    case 0xC2FE54: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:102 LDA @LOCAL00
    case 0xC2FE56: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2FD99.asm:103 SEC
    case 0xC2FE58: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:104 SBC BATTLE_SPRITE_PALETTE_EFFECT_SPEED
    case 0xC2FE59: cpu.execute_instruction<0xED>(0x00B37C, 3); return true;
    // src/unknown/C2/C2FD99.asm:105 STA (@LOCAL02)
    case 0xC2FE5C: cpu.execute_instruction<0x92>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:106 LDA @VIRTUAL02
    case 0xC2FE5E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2FD99.asm:107 STA @LOCAL02
    case 0xC2FE60: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:108 LDA __BSS_START__,Y
    case 0xC2FE62: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:109 CLC
    case 0xC2FE65: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:110 ADC (@LOCAL02)
    case 0xC2FE66: cpu.execute_instruction<0x72>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:111 STA (@LOCAL02)
    case 0xC2FE68: cpu.execute_instruction<0x92>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:113 LDX @LOCAL04
    case 0xC2FE6A: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:114 LDA __BSS_START__,X
    case 0xC2FE6C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:115 STA @LOCAL00
    case 0xC2FE6F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2FD99.asm:116 LDA BATTLE_SPRITE_PALETTE_EFFECT_SPEED
    case 0xC2FE71: cpu.execute_instruction<0xAD>(0x00B37C, 3); return true;
    // src/unknown/C2/C2FD99.asm:117 CMP @LOCAL00
    case 0xC2FE74: cpu.execute_instruction<0xC5>(0x00000E, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2FD99.asm:118 BLTEQ @UNKNOWN6
    case 0xC2FE76: cpu.execute_instruction<0x90>(0x0000DC, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2FD99.asm:118 BLTEQ @UNKNOWN6
    case 0xC2FE78: cpu.execute_instruction<0xF0>(0x0000DA, 2); return true;
    // src/unknown/C2/C2FD99.asm:120 INY
    case 0xC2FE7A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:121 INY
    case 0xC2FE7B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:122 INX
    case 0xC2FE7C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:123 INX
    case 0xC2FE7D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:124 STX @LOCAL04
    case 0xC2FE7E: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:125 LDA @LOCAL03
    case 0xC2FE80: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:126 INC
    case 0xC2FE82: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:127 INC
    case 0xC2FE83: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:128 STA @LOCAL02
    case 0xC2FE84: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:129 LDA __BSS_START__,Y
    case 0xC2FE86: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:130 BEQ @UNKNOWN11
    case 0xC2FE89: cpu.execute_instruction<0xF0>(0x000035, 2); return true;
    // src/unknown/C2/C2FD99.asm:131 STX @LOCAL03
    case 0xC2FE8B: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:132 LDA @LOCAL02
    case 0xC2FE8D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:133 TAX
    case 0xC2FE8F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:134 LDA __BSS_START__,X
    case 0xC2FE90: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:135 CLC
    case 0xC2FE93: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:136 ADC (@LOCAL03)
    case 0xC2FE94: cpu.execute_instruction<0x72>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:137 STA (@LOCAL03)
    case 0xC2FE96: cpu.execute_instruction<0x92>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:138 BRA @UNKNOWN10
    case 0xC2FE98: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:140 STX @LOCAL03
    case 0xC2FE9A: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:141 LDA @LOCAL00
    case 0xC2FE9C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2FD99.asm:142 SEC
    case 0xC2FE9E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:143 SBC BATTLE_SPRITE_PALETTE_EFFECT_SPEED
    case 0xC2FE9F: cpu.execute_instruction<0xED>(0x00B37C, 3); return true;
    // src/unknown/C2/C2FD99.asm:144 STA (@LOCAL03)
    case 0xC2FEA2: cpu.execute_instruction<0x92>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:145 LDA @VIRTUAL02
    case 0xC2FEA4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2FD99.asm:146 STA @LOCAL03
    case 0xC2FEA6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:147 LDA __BSS_START__,Y
    case 0xC2FEA8: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:148 CLC
    case 0xC2FEAB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:149 ADC (@LOCAL03)
    case 0xC2FEAC: cpu.execute_instruction<0x72>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:150 STA (@LOCAL03)
    case 0xC2FEAE: cpu.execute_instruction<0x92>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:152 LDX @LOCAL04
    case 0xC2FEB0: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C2/C2FD99.asm:153 LDA __BSS_START__,X
    case 0xC2FEB2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2FD99.asm:154 STA @LOCAL00
    case 0xC2FEB5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2FD99.asm:155 LDA BATTLE_SPRITE_PALETTE_EFFECT_SPEED
    case 0xC2FEB7: cpu.execute_instruction<0xAD>(0x00B37C, 3); return true;
    // src/unknown/C2/C2FD99.asm:156 CMP @LOCAL00
    case 0xC2FEBA: cpu.execute_instruction<0xC5>(0x00000E, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2FD99.asm:157 BLTEQ @UNKNOWN9
    case 0xC2FEBC: cpu.execute_instruction<0x90>(0x0000DC, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2FD99.asm:157 BLTEQ @UNKNOWN9
    case 0xC2FEBE: cpu.execute_instruction<0xF0>(0x0000DA, 2); return true;
    // src/unknown/C2/C2FD99.asm:159 INY
    case 0xC2FEC0: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:160 INY
    case 0xC2FEC1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:161 INX
    case 0xC2FEC2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:162 INX
    case 0xC2FEC3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:163 STX @LOCAL03
    case 0xC2FEC4: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C2/C2FD99.asm:164 LDA @LOCAL02
    case 0xC2FEC6: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:165 INC
    case 0xC2FEC8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:166 INC
    case 0xC2FEC9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2FD99.asm:167 STA @LOCAL02
    case 0xC2FECA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2FD99.asm:168 INC @VIRTUAL02
    case 0xC2FECC: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2FD99.asm:169 INC @VIRTUAL02
    case 0xC2FECE: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2FD99.asm:170 INC @LOCAL01
    case 0xC2FED0: cpu.execute_instruction<0xE6>(0x000010, 2); return true;
    // src/unknown/C2/C2FD99.asm:172 LDA @LOCAL01
    case 0xC2FED2: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C2FD99.asm:173 CMP #16
    case 0xC2FED4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/unknown/C2/C2FD99.asm:173 CMP #16
    // Overlapping static entry reached from 0xC2FED4.
    case 0xC2FED6: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C2/C2FD99.asm:174 BCCL @UNKNOWN2
    case 0xC2FED7: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C2/C2FD99.asm:174 BCCL @UNKNOWN2
    case 0xC2FED9: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C2/C2FD99.asm:174 BCCL @UNKNOWN2
    case 0xC2FEDB: cpu.execute_instruction<0x4C>(0x00FDFA, 3); return true;
    // src/unknown/C2/C2FD99.asm:175 LDA #16
    case 0xC2FEDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C2/C2FD99.asm:175 LDA #16
    // Overlapping static entry reached from 0xC2FEDE.
    case 0xC2FEE0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2FD99.asm:176 JSL UNKNOWN_C0856B
    case 0xC2FEE1: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/unknown/C2/C2FD99.asm:178 INC @VIRTUAL04
    case 0xC2FEE5: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C2/C2FD99.asm:179 LDA @VIRTUAL04
    case 0xC2FEE7: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2FD99.asm:180 STA @LOCAL05
    case 0xC2FEE9: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C2/C2FD99.asm:182 LDA @VIRTUAL04
    case 0xC2FEEB: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2FD99.asm:183 CMP #4
    case 0xC2FEED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C2/C2FD99.asm:183 CMP #4
    // Overlapping static entry reached from 0xC2FEED.
    case 0xC2FEEF: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C2/C2FD99.asm:184 BCCL @UNKNOWN0
    case 0xC2FEF0: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C2/C2FD99.asm:184 BCCL @UNKNOWN0
    case 0xC2FEF2: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C2/C2FD99.asm:184 BCCL @UNKNOWN0
    case 0xC2FEF4: cpu.execute_instruction<0x4C>(0x00FDAB, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2FD99.asm:185 END_C_FUNCTION
    case 0xC2FEF7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2FD99.asm:185 END_C_FUNCTION
    case 0xC2FEF8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2FEF9.asm (unresolved).
bool execute_unresolved_c2_c2fef9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2FEF9.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2FEF9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2FEF9.asm:8 END_STACK_VARS
    case 0xC2FEFB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2FEF9.asm:8 END_STACK_VARS
    case 0xC2FEFC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2FEF9.asm:8 END_STACK_VARS
    case 0xC2FEFD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2FEF9.asm:8 END_STACK_VARS
    case 0xC2FEFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2FEF9.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2FEFE.
    case 0xC2FF00: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2FEF9.asm:8 END_STACK_VARS
    case 0xC2FF01: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2FEF9.asm:8 END_STACK_VARS
    case 0xC2FF02: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2FEF9.asm:9 TAX
    case 0xC2FF03: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FEF9.asm:10 TXY
    case 0xC2FF04: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C2/C2FEF9.asm:11 TXA
    case 0xC2FF05: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2FEF9.asm:12 DEC
    case 0xC2FF06: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2FEF9.asm:13 STA @LOCAL01
    case 0xC2FF07: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2FEF9.asm:14 CPY #0
    case 0xC2FF09: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C2/C2FEF9.asm:14 CPY #0
    // Overlapping static entry reached from 0xC2FF09.
    case 0xC2FF0B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2FEF9.asm:15 BEQ @UNKNOWN0
    case 0xC2FF0C: cpu.execute_instruction<0xF0>(0x000065, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2FEF9.asm:16 LOADPTR UNKNOWN_C3F8F1, @VIRTUAL06
    case 0xC2FF0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F1, 2); else cpu.execute_instruction<0xA9>(0x00F8F1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2FEF9.asm:16 LOADPTR UNKNOWN_C3F8F1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2FF0E.
    case 0xC2FF10: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2FEF9.asm:16 LOADPTR UNKNOWN_C3F8F1, @VIRTUAL06
    case 0xC2FF11: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2FEF9.asm:16 LOADPTR UNKNOWN_C3F8F1, @VIRTUAL06
    case 0xC2FF13: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2FEF9.asm:16 LOADPTR UNKNOWN_C3F8F1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2FF13.
    case 0xC2FF15: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C2FEF9.asm:16 LOADPTR UNKNOWN_C3F8F1, @VIRTUAL06
    case 0xC2FF16: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C2FEF9.asm:17 LDA @LOCAL01
    case 0xC2FF18: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C2/C2FEF9.asm:18 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC2FF1A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C2/C2FEF9.asm:18 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC2FF1B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C2/C2FEF9.asm:18 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC2FF1C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C2/C2FEF9.asm:18 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC2FF1D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C2/C2FEF9.asm:18 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC2FF1E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FEF9.asm:19 CLC
    case 0xC2FF1F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2FEF9.asm:20 ADC @VIRTUAL06
    case 0xC2FF20: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C2FEF9.asm:21 STA @VIRTUAL06
    case 0xC2FF22: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C2FEF9.asm:22 STA @LOCAL00
    case 0xC2FF24: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2FEF9.asm:23 LDA @VIRTUAL06+2
    case 0xC2FF26: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C2/C2FEF9.asm:24 STA @LOCAL00+2
    case 0xC2FF28: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2FEF9.asm:25 LDX #BPP4PALETTE_SIZE
    case 0xC2FF2A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C2/C2FEF9.asm:25 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC2FF2A.
    case 0xC2FF2C: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2FEF9.asm:26 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 12
    case 0xC2FF2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000380, 3); return true;
    // src/unknown/C2/C2FEF9.asm:26 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 12
    // Overlapping static entry reached from 0xC2FF2D.
    case 0xC2FF2F: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/unknown/C2/C2FEF9.asm:27 JSL MEMCPY16
    case 0xC2FF30: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C2/C2FEF9.asm:27 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2FF2F.
    case 0xC2FF31: cpu.execute_instruction<0xD2>(0x00008E, 2); return true;
    // src/unknown/C2/C2FEF9.asm:27 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2FF31.
    case 0xC2FF33: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2FEF9.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2FF34: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2FEF9.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC2FF33.
    case 0xC2FF35: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2FEF9.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2FF36: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2FEF9.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC2FF35.
    case 0xC2FF37: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2FEF9.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2FF38: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2FEF9.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2FF3A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2FEF9.asm:29 LDX #BPP4PALETTE_SIZE
    case 0xC2FF3C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C2/C2FEF9.asm:29 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC2FF3C.
    case 0xC2FF3E: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2FEF9.asm:30 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 13
    case 0xC2FF3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A0, 2); else cpu.execute_instruction<0xA9>(0x0003A0, 3); return true;
    // src/unknown/C2/C2FEF9.asm:30 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 13
    // Overlapping static entry reached from 0xC2FF3F.
    case 0xC2FF41: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/unknown/C2/C2FEF9.asm:31 JSL MEMCPY16
    case 0xC2FF42: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C2/C2FEF9.asm:31 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2FF41.
    case 0xC2FF43: cpu.execute_instruction<0xD2>(0x00008E, 2); return true;
    // src/unknown/C2/C2FEF9.asm:31 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2FF43.
    case 0xC2FF45: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2FEF9.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2FF46: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2FEF9.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC2FF45.
    case 0xC2FF47: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2FEF9.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2FF48: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2FEF9.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC2FF47.
    case 0xC2FF49: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2FEF9.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2FF4A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2FEF9.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2FF4C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2FEF9.asm:33 LDX #BPP4PALETTE_SIZE
    case 0xC2FF4E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C2/C2FEF9.asm:33 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC2FF4E.
    case 0xC2FF50: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2FEF9.asm:34 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 14
    case 0xC2FF51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0003C0, 3); return true;
    // src/unknown/C2/C2FEF9.asm:34 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 14
    // Overlapping static entry reached from 0xC2FF51.
    case 0xC2FF53: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/unknown/C2/C2FEF9.asm:35 JSL MEMCPY16
    case 0xC2FF54: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C2/C2FEF9.asm:35 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2FF53.
    case 0xC2FF55: cpu.execute_instruction<0xD2>(0x00008E, 2); return true;
    // src/unknown/C2/C2FEF9.asm:35 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2FF55.
    case 0xC2FF57: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2FEF9.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2FF58: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2FEF9.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC2FF57.
    case 0xC2FF59: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2FEF9.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2FF5A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2FEF9.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC2FF59.
    case 0xC2FF5B: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2FEF9.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2FF5C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2FEF9.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2FF5E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2FEF9.asm:37 LDX #BPP4PALETTE_SIZE
    case 0xC2FF60: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C2/C2FEF9.asm:37 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC2FF60.
    case 0xC2FF62: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2FEF9.asm:38 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 15
    case 0xC2FF63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0003E0, 3); return true;
    // src/unknown/C2/C2FEF9.asm:38 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 15
    // Overlapping static entry reached from 0xC2FF63.
    case 0xC2FF65: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/unknown/C2/C2FEF9.asm:39 JSL MEMCPY16
    case 0xC2FF66: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C2/C2FEF9.asm:39 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2FF65.
    case 0xC2FF67: cpu.execute_instruction<0xD2>(0x00008E, 2); return true;
    // src/unknown/C2/C2FEF9.asm:39 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2FF67.
    case 0xC2FF69: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0010A9, 3); return true;
    // src/unknown/C2/C2FEF9.asm:40 LDA #16
    case 0xC2FF6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C2/C2FEF9.asm:40 LDA #16
    // Overlapping static entry reached from 0xC2FF69.
    case 0xC2FF6B: cpu.execute_instruction<0x10>(0x000000, 2); return true;
    // src/unknown/C2/C2FEF9.asm:40 LDA #16
    // Overlapping static entry reached from 0xC2FF6A.
    case 0xC2FF6C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2FEF9.asm:41 JSL UNKNOWN_C0856B
    case 0xC2FF6D: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/unknown/C2/C2FEF9.asm:42 BRA @UNKNOWN3
    case 0xC2FF71: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // src/unknown/C2/C2FEF9.asm:44 LDA #BPP4PALETTE_SIZE * 4
    case 0xC2FF73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/unknown/C2/C2FEF9.asm:44 LDA #BPP4PALETTE_SIZE * 4
    // Overlapping static entry reached from 0xC2FF73.
    case 0xC2FF75: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2FEF9.asm:45 STA @LOCAL01
    case 0xC2FF76: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2FEF9.asm:46 BRA @UNKNOWN2
    case 0xC2FF78: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C2/C2FEF9.asm:48 ASL
    case 0xC2FF7A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2FEF9.asm:49 TAX
    case 0xC2FF7B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2FEF9.asm:50 LDA PALETTES,X
    case 0xC2FF7C: cpu.execute_instruction<0xBD>(0x000200, 3); return true;
    // src/unknown/C2/C2FEF9.asm:51 LSR
    case 0xC2FF7F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FEF9.asm:52 LSR ;divide entire colour by two. normally, this would cause the lower two bits of each channel to bleed into the next, but...
    case 0xC2FF80: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2FEF9.asm:53 AND #(7 << 10) +(7 << 5) + 7 ;we keep only the bottom 3 bits of each colour channel. combined, this just darkens the colour.
    case 0xC2FF81: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E7, 2); else cpu.execute_instruction<0x29>(0x001CE7, 3); return true;
    // src/unknown/C2/C2FEF9.asm:53 AND #(7 << 10) +(7 << 5) + 7 ;we keep only the bottom 3 bits of each colour channel. combined, this just darkens the colour.
    // Overlapping static entry reached from 0xC2FF81.
    case 0xC2FF83: cpu.execute_instruction<0x1C>(0x00809D, 3); return true;
    // src/unknown/C2/C2FEF9.asm:54 STA PALETTES + (BPP4PALETTE_SIZE * 4),X
    case 0xC2FF84: cpu.execute_instruction<0x9D>(0x000280, 3); return true;
    // src/unknown/C2/C2FEF9.asm:54 STA PALETTES + (BPP4PALETTE_SIZE * 4),X
    // Overlapping static entry reached from 0xC2FF83.
    case 0xC2FF86: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/unknown/C2/C2FEF9.asm:55 LDA @LOCAL01
    case 0xC2FF87: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2FEF9.asm:56 INC
    case 0xC2FF89: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2FEF9.asm:57 STA @LOCAL01
    case 0xC2FF8A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2FEF9.asm:59 CMP #BPP4PALETTE_SIZE * 6
    case 0xC2FF8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C0, 2); else cpu.execute_instruction<0xC9>(0x0000C0, 3); return true;
    // src/unknown/C2/C2FEF9.asm:59 CMP #BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC2FF8C.
    case 0xC2FF8E: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2FEF9.asm:60 BCC @UNKNOWN1
    case 0xC2FF8F: cpu.execute_instruction<0x90>(0x0000E9, 2); return true;
    // src/unknown/C2/C2FEF9.asm:61 LDA #16
    case 0xC2FF91: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C2/C2FEF9.asm:61 LDA #16
    // Overlapping static entry reached from 0xC2FF91.
    case 0xC2FF93: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2FEF9.asm:62 JSL UNKNOWN_C0856B
    case 0xC2FF94: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2FEF9.asm:64 END_C_FUNCTION
    case 0xC2FF98: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2FEF9.asm:64 END_C_FUNCTION
    case 0xC2FF99: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2FF9A.asm (unresolved).
bool execute_unresolved_c2_c2ff9a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2FF9A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2FF9A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C2FF9A.asm:6 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC2FF9C: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C2/C2FF9A.asm:7 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC2FF9F: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C2/C2FF9A.asm:8 JSL LOAD_SECTOR_ATTRS
    case 0xC2FFA2: cpu.execute_instruction<0x22>(0xC00AA1, 4); return true;
    // src/unknown/C2/C2FF9A.asm:9 AND #$0007
    case 0xC2FFA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C2/C2FF9A.asm:9 AND #$0007
    // Overlapping static entry reached from 0xC2FFA6.
    case 0xC2FFA8: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2FF9A.asm:10 CMP #3
    case 0xC2FFA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C2/C2FF9A.asm:10 CMP #3
    // Overlapping static entry reached from 0xC2FFA9.
    case 0xC2FFAB: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2FF9A.asm:11 BCC @MINISPRITES
    case 0xC2FFAC: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/unknown/C2/C2FF9A.asm:12 LDA #1
    case 0xC2FFAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2FF9A.asm:12 LDA #1
    // Overlapping static entry reached from 0xC2FFAE.
    case 0xC2FFB0: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C2FF9A.asm:13 BRA @RETURN
    case 0xC2FFB1: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C2/C2FF9A.asm:15 LDA #0
    case 0xC2FFB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2FF9A.asm:15 LDA #0
    // Overlapping static entry reached from 0xC2FFB3.
    case 0xC2FFB5: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2FF9A.asm:17 END_C_FUNCTION
    case 0xC2FFB6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
