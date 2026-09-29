// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/misc/recalc_character_postmath_defense.asm (source_named).
bool execute_miscellaneous_recalc_character_postmath_defense_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2192B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:10 END_STACK_VARS
    case 0xC2192D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:10 END_STACK_VARS
    case 0xC2192E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:10 END_STACK_VARS
    case 0xC2192F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:10 END_STACK_VARS
    case 0xC21930: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EB, 2); else cpu.execute_instruction<0x69>(0x00FFEB, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC21930.
    case 0xC21932: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:10 END_STACK_VARS
    case 0xC21933: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:10 END_STACK_VARS
    case 0xC21934: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:11 TAX
    case 0xC21935: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:12 DEC
    case 0xC21936: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:13 STA @VIRTUAL02
    case 0xC21937: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:14 STA @LOCAL03
    case 0xC21939: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:15 LDA @VIRTUAL02
    case 0xC2193B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:16 LDY #.SIZEOF(char_struct)
    case 0xC2193D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:16 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2193D.
    case 0xC2193F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:17 JSL MULT168
    case 0xC21940: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:18 TAX
    case 0xC21944: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:19 LDA PARTY_CHARACTERS+char_struct::base_defense,X
    case 0xC21945: cpu.execute_instruction<0xBD>(0x0099EB, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:20 AND #$00FF
    case 0xC21948: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC21948.
    case 0xC2194A: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:21 TAY
    case 0xC2194B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:22 STY @LOCAL02
    case 0xC2194C: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:23 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC2194E: cpu.execute_instruction<0xBD>(0x009A00, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:24 AND #$00FF
    case 0xC21951: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC21951.
    case 0xC21953: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:25 TAX
    case 0xC21954: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:26 BEQ @UNKNOWN1
    case 0xC21955: cpu.execute_instruction<0xF0>(0x000060, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:27 LDA #0
    case 0xC21957: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:27 LDA #0
    // Overlapping static entry reached from 0xC21957.
    case 0xC21959: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:28 STA @LOCAL01
    case 0xC2195A: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:29 LDA @VIRTUAL02
    case 0xC2195C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:30 CMP #PARTY_MEMBER::POO - 1
    case 0xC2195E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:30 CMP #PARTY_MEMBER::POO - 1
    // Overlapping static entry reached from 0xC2195E.
    case 0xC21960: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:31 BNE @UNKNOWN0
    case 0xC21961: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:32 LDA #1
    case 0xC21963: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:32 LDA #1
    // Overlapping static entry reached from 0xC21963.
    case 0xC21965: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:33 STA @LOCAL01
    case 0xC21966: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:35 LDA @LOCAL01
    case 0xC21968: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:36 PHA
    case 0xC2196A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:37 TXA
    case 0xC2196B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:38 DEC
    case 0xC2196C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:42 PHA
    case 0xC2196D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:44 LDA @VIRTUAL02
    case 0xC2196E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:45 LDY #.SIZEOF(char_struct)
    case 0xC21970: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:45 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21970.
    case 0xC21972: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:46 JSL MULT168
    case 0xC21973: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:47 CLC
    case 0xC21977: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:48 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC21978: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:48 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC21978.
    case 0xC2197A: cpu.execute_instruction<0x99>(0x00847A, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:53 PLY
    case 0xC2197B: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:54 STY @VIRTUAL02
    case 0xC2197C: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:54 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC2197A.
    case 0xC2197D: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:55 CLC
    case 0xC2197E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:56 ADC @VIRTUAL02
    case 0xC2197F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:58 TAX
    case 0xC21981: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:59 LDA __BSS_START__,X
    case 0xC21982: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:60 AND #$00FF
    case 0xC21985: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC21985.
    case 0xC21987: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:61 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21988: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:61 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC21988.
    case 0xC2198A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:61 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2198B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:62 PLY
    case 0xC2198F: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:63 STY @VIRTUAL02
    case 0xC21990: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:64 CLC
    case 0xC21992: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:65 ADC @VIRTUAL02
    case 0xC21993: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:66 CLC
    case 0xC21995: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:67 ADC #item::params + item_parameters::strength
    case 0xC21996: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001F, 2); else cpu.execute_instruction<0x69>(0x00001F, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:67 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC21996.
    case 0xC21998: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:68 TAX
    case 0xC21999: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC2199A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:70 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC2199C: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC219A0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:72 SEC
    case 0xC219A2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:73 AND #$00FF
    case 0xC219A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:73 AND #$00FF
    // Overlapping static entry reached from 0xC219A3.
    case 0xC219A5: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:74 SBC #$0080
    case 0xC219A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:74 SBC #$0080
    // Overlapping static entry reached from 0xC219A6.
    case 0xC219A8: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:75 EOR #$FF80
    case 0xC219A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:75 EOR #$FF80
    // Overlapping static entry reached from 0xC219A9.
    case 0xC219AB: cpu.execute_instruction<0xFF>(0xA40485, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:76 STA @VIRTUAL04
    case 0xC219AC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:77 LDY @LOCAL02
    case 0xC219AE: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:77 LDY @LOCAL02
    // Overlapping static entry reached from 0xC219AB.
    case 0xC219AF: cpu.execute_instruction<0x11>(0x000098, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:78 TYA
    case 0xC219B0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:79 CLC
    case 0xC219B1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:80 ADC @VIRTUAL04
    case 0xC219B2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:81 TAY
    case 0xC219B4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:82 STY @LOCAL02
    case 0xC219B5: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:84 LDA @LOCAL03
    case 0xC219B7: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:85 STA @VIRTUAL02
    case 0xC219B9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:86 LDY #.SIZEOF(char_struct)
    case 0xC219BB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:86 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC219BB.
    case 0xC219BD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:87 JSL MULT168
    case 0xC219BE: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:88 TAX
    case 0xC219C2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:89 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC219C3: cpu.execute_instruction<0xBD>(0x009A01, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:90 AND #$00FF
    case 0xC219C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:90 AND #$00FF
    // Overlapping static entry reached from 0xC219C6.
    case 0xC219C8: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:91 TAX
    case 0xC219C9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:92 BEQ @UNKNOWN3
    case 0xC219CA: cpu.execute_instruction<0xF0>(0x000060, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:93 LDA #0
    case 0xC219CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:93 LDA #0
    // Overlapping static entry reached from 0xC219CC.
    case 0xC219CE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:94 STA @LOCAL01
    case 0xC219CF: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:95 LDA @VIRTUAL02
    case 0xC219D1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:96 CMP #PARTY_MEMBER::POO - 1
    case 0xC219D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:96 CMP #PARTY_MEMBER::POO - 1
    // Overlapping static entry reached from 0xC219D3.
    case 0xC219D5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:97 BNE @UNKNOWN2
    case 0xC219D6: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:98 LDA #1
    case 0xC219D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:98 LDA #1
    // Overlapping static entry reached from 0xC219D8.
    case 0xC219DA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:99 STA @LOCAL01
    case 0xC219DB: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:101 LDA @LOCAL01
    case 0xC219DD: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:102 PHA
    case 0xC219DF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:103 TXA
    case 0xC219E0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:104 DEC
    case 0xC219E1: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:108 PHA
    case 0xC219E2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:110 LDA @VIRTUAL02
    case 0xC219E3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:111 LDY #.SIZEOF(char_struct)
    case 0xC219E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:111 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC219E5.
    case 0xC219E7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:112 JSL MULT168
    case 0xC219E8: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:113 CLC
    case 0xC219EC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:114 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC219ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:114 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC219ED.
    case 0xC219EF: cpu.execute_instruction<0x99>(0x00847A, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:119 PLY
    case 0xC219F0: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:120 STY @VIRTUAL02
    case 0xC219F1: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:120 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC219EF.
    case 0xC219F2: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:121 CLC
    case 0xC219F3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:122 ADC @VIRTUAL02
    case 0xC219F4: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:124 TAX
    case 0xC219F6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:125 LDA __BSS_START__,X
    case 0xC219F7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:126 AND #$00FF
    case 0xC219FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:126 AND #$00FF
    // Overlapping static entry reached from 0xC219FA.
    case 0xC219FC: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:127 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC219FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:127 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC219FD.
    case 0xC219FF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:127 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21A00: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:128 PLY
    case 0xC21A04: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:129 STY @VIRTUAL02
    case 0xC21A05: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:130 CLC
    case 0xC21A07: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:131 ADC @VIRTUAL02
    case 0xC21A08: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:132 CLC
    case 0xC21A0A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:133 ADC #item::params + item_parameters::strength
    case 0xC21A0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001F, 2); else cpu.execute_instruction<0x69>(0x00001F, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:133 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC21A0B.
    case 0xC21A0D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:134 TAX
    case 0xC21A0E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:135 SEP #PROC_FLAGS::ACCUM8
    case 0xC21A0F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:136 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21A11: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:137 REP #PROC_FLAGS::ACCUM8
    case 0xC21A15: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:138 SEC
    case 0xC21A17: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:139 AND #$00FF
    case 0xC21A18: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:139 AND #$00FF
    // Overlapping static entry reached from 0xC21A18.
    case 0xC21A1A: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:140 SBC #$0080
    case 0xC21A1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:140 SBC #$0080
    // Overlapping static entry reached from 0xC21A1B.
    case 0xC21A1D: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:141 EOR #$FF80
    case 0xC21A1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:141 EOR #$FF80
    // Overlapping static entry reached from 0xC21A1E.
    case 0xC21A20: cpu.execute_instruction<0xFF>(0xA40485, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:142 STA @VIRTUAL04
    case 0xC21A21: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:143 LDY @LOCAL02
    case 0xC21A23: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:143 LDY @LOCAL02
    // Overlapping static entry reached from 0xC21A20.
    case 0xC21A24: cpu.execute_instruction<0x11>(0x000098, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:144 TYA
    case 0xC21A25: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:145 CLC
    case 0xC21A26: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:146 ADC @VIRTUAL04
    case 0xC21A27: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:147 TAY
    case 0xC21A29: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:148 STY @LOCAL02
    case 0xC21A2A: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:150 LDA @LOCAL03
    case 0xC21A2C: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:151 STA @VIRTUAL02
    case 0xC21A2E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:152 LDY #.SIZEOF(char_struct)
    case 0xC21A30: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:152 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21A30.
    case 0xC21A32: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:153 JSL MULT168
    case 0xC21A33: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:154 TAX
    case 0xC21A37: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:155 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC21A38: cpu.execute_instruction<0xBD>(0x009A02, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:156 AND #$00FF
    case 0xC21A3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:156 AND #$00FF
    // Overlapping static entry reached from 0xC21A3B.
    case 0xC21A3D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:157 TAX
    case 0xC21A3E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:158 BEQ @UNKNOWN5
    case 0xC21A3F: cpu.execute_instruction<0xF0>(0x000060, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:159 LDA #0
    case 0xC21A41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:159 LDA #0
    // Overlapping static entry reached from 0xC21A41.
    case 0xC21A43: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:160 STA @LOCAL01
    case 0xC21A44: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:161 LDA @VIRTUAL02
    case 0xC21A46: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:162 CMP #PARTY_MEMBER::POO - 1
    case 0xC21A48: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:162 CMP #PARTY_MEMBER::POO - 1
    // Overlapping static entry reached from 0xC21A48.
    case 0xC21A4A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:163 BNE @UNKNOWN4
    case 0xC21A4B: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:164 LDA #1
    case 0xC21A4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:164 LDA #1
    // Overlapping static entry reached from 0xC21A4D.
    case 0xC21A4F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:165 STA @LOCAL01
    case 0xC21A50: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:167 LDA @LOCAL01
    case 0xC21A52: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:168 PHA
    case 0xC21A54: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:169 TXA
    case 0xC21A55: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:170 DEC
    case 0xC21A56: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:174 PHA
    case 0xC21A57: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:176 LDA @VIRTUAL02
    case 0xC21A58: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:177 LDY #.SIZEOF(char_struct)
    case 0xC21A5A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:177 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21A5A.
    case 0xC21A5C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:178 JSL MULT168
    case 0xC21A5D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:179 CLC
    case 0xC21A61: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:180 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC21A62: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:180 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC21A62.
    case 0xC21A64: cpu.execute_instruction<0x99>(0x00847A, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:185 PLY
    case 0xC21A65: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:186 STY @VIRTUAL02
    case 0xC21A66: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:186 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC21A64.
    case 0xC21A67: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:187 CLC
    case 0xC21A68: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:188 ADC @VIRTUAL02
    case 0xC21A69: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:190 TAX
    case 0xC21A6B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:191 LDA __BSS_START__,X
    case 0xC21A6C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:192 AND #$00FF
    case 0xC21A6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:192 AND #$00FF
    // Overlapping static entry reached from 0xC21A6F.
    case 0xC21A71: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:193 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21A72: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:193 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC21A72.
    case 0xC21A74: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:193 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21A75: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:194 PLY
    case 0xC21A79: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:195 STY @VIRTUAL02
    case 0xC21A7A: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:196 CLC
    case 0xC21A7C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:197 ADC @VIRTUAL02
    case 0xC21A7D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:198 CLC
    case 0xC21A7F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:199 ADC #item::params + item_parameters::strength
    case 0xC21A80: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001F, 2); else cpu.execute_instruction<0x69>(0x00001F, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:199 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC21A80.
    case 0xC21A82: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:200 TAX
    case 0xC21A83: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:201 SEP #PROC_FLAGS::ACCUM8
    case 0xC21A84: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:202 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21A86: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:203 REP #PROC_FLAGS::ACCUM8
    case 0xC21A8A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:204 SEC
    case 0xC21A8C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:205 AND #$00FF
    case 0xC21A8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:205 AND #$00FF
    // Overlapping static entry reached from 0xC21A8D.
    case 0xC21A8F: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:206 SBC #$0080
    case 0xC21A90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:206 SBC #$0080
    // Overlapping static entry reached from 0xC21A90.
    case 0xC21A92: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:207 EOR #$FF80
    case 0xC21A93: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:207 EOR #$FF80
    // Overlapping static entry reached from 0xC21A93.
    case 0xC21A95: cpu.execute_instruction<0xFF>(0xA40485, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:208 STA @VIRTUAL04
    case 0xC21A96: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:209 LDY @LOCAL02
    case 0xC21A98: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:209 LDY @LOCAL02
    // Overlapping static entry reached from 0xC21A95.
    case 0xC21A99: cpu.execute_instruction<0x11>(0x000098, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:210 TYA
    case 0xC21A9A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:211 CLC
    case 0xC21A9B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:212 ADC @VIRTUAL04
    case 0xC21A9C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:213 TAY
    case 0xC21A9E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:214 STY @LOCAL02
    case 0xC21A9F: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:216 LDY @LOCAL02
    case 0xC21AA1: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:217 STY @VIRTUAL04
    case 0xC21AA3: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:218 LDA #0
    case 0xC21AA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:218 LDA #0
    // Overlapping static entry reached from 0xC21AA5.
    case 0xC21AA7: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:219 CLC
    case 0xC21AA8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:220 SBC @VIRTUAL04
    case 0xC21AA9: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:221 BRANCHLTEQS @UNKNOWN8
    case 0xC21AAB: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:221 BRANCHLTEQS @UNKNOWN8
    case 0xC21AAD: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:221 BRANCHLTEQS @UNKNOWN8
    case 0xC21AAF: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:221 BRANCHLTEQS @UNKNOWN8
    case 0xC21AB1: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:222 LDA #0
    case 0xC21AB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:222 LDA #0
    // Overlapping static entry reached from 0xC21AB3.
    case 0xC21AB5: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:223 BRA @UNKNOWN12
    case 0xC21AB6: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:225 TYA
    case 0xC21AB8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:226 CLC
    case 0xC21AB9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:227 SBC #$00FF
    case 0xC21ABA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000FF, 2); else cpu.execute_instruction<0xE9>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:227 SBC #$00FF
    // Overlapping static entry reached from 0xC21ABA.
    case 0xC21ABC: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:228 BRANCHLTEQS @UNKNOWN11
    case 0xC21ABD: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:228 BRANCHLTEQS @UNKNOWN11
    case 0xC21ABF: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:228 BRANCHLTEQS @UNKNOWN11
    case 0xC21AC1: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:228 BRANCHLTEQS @UNKNOWN11
    case 0xC21AC3: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:229 LDA #$00FF
    case 0xC21AC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:229 LDA #$00FF
    // Overlapping static entry reached from 0xC21AC5.
    case 0xC21AC7: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:230 BRA @UNKNOWN12
    case 0xC21AC8: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:232 TYA
    case 0xC21ACA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:233 REP #PROC_FLAGS::ACCUM8
    case 0xC21ACB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:234 AND #$00FF
    case 0xC21ACD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:234 AND #$00FF
    // Overlapping static entry reached from 0xC21ACD.
    case 0xC21ACF: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:236 SEP #PROC_FLAGS::ACCUM8
    case 0xC21AD0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:237 STA @LOCAL00
    case 0xC21AD2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:238 REP #PROC_FLAGS::ACCUM8
    case 0xC21AD4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:239 LDA @LOCAL03
    case 0xC21AD6: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:240 STA @VIRTUAL02
    case 0xC21AD8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:241 LDY #.SIZEOF(char_struct)
    case 0xC21ADA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:241 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21ADA.
    case 0xC21ADC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:242 JSL MULT168
    case 0xC21ADD: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:243 TAX
    case 0xC21AE1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:244 SEP #PROC_FLAGS::ACCUM8
    case 0xC21AE2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:245 LDA @LOCAL00
    case 0xC21AE4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:246 STA PARTY_CHARACTERS+char_struct::defense,X
    case 0xC21AE6: cpu.execute_instruction<0x9D>(0x0099E4, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:247 END_C_FUNCTION
    case 0xC21AE9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:247 END_C_FUNCTION
    case 0xC21AEA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/recalc_character_postmath_guts.asm (source_named).
bool execute_miscellaneous_recalc_character_postmath_guts_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21BA4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:12 END_STACK_VARS
    case 0xC21BA6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:12 END_STACK_VARS
    case 0xC21BA7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:12 END_STACK_VARS
    case 0xC21BA8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:12 END_STACK_VARS
    case 0xC21BA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EB, 2); else cpu.execute_instruction<0x69>(0x00FFEB, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC21BA9.
    case 0xC21BAB: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:12 END_STACK_VARS
    case 0xC21BAC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:12 END_STACK_VARS
    case 0xC21BAD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:18 TAX
    case 0xC21BAE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:19 DEC
    case 0xC21BAF: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:20 STA @VIRTUAL02
    case 0xC21BB0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:22 STA @LOCALEB
    case 0xC21BB2: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:23 LDA @VIRTUAL02
    case 0xC21BB4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:25 LDY #.SIZEOF(char_struct)
    case 0xC21BB6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:25 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21BB6.
    case 0xC21BB8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:26 JSL MULT168
    case 0xC21BB9: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_guts.asm:27 TAX
    case 0xC21BBD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:28 LDA PARTY_CHARACTERS+char_struct::base_guts,X
    case 0xC21BBE: cpu.execute_instruction<0xBD>(0x0099ED, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:29 AND #$00FF
    case 0xC21BC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC21BC1.
    case 0xC21BC3: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:30 TAY
    case 0xC21BC4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:31 STY @LOCAL02
    case 0xC21BC5: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:32 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC21BC7: cpu.execute_instruction<0xBD>(0x0099FF, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:33 AND #$00FF
    case 0xC21BCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC21BCA.
    case 0xC21BCC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:34 BEQ @UNKNOWN0
    case 0xC21BCD: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:35 DEC
    case 0xC21BCF: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:36 STA @TMP
    case 0xC21BD0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:37 TXA
    case 0xC21BD2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:38 CLC
    case 0xC21BD3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:39 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21BD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:39 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21BD4.
    case 0xC21BD6: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:40 CLC
    case 0xC21BD7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:41 ADC @TMP
    case 0xC21BD8: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:41 ADC @TMP
    // Overlapping static entry reached from 0xC21BD6.
    case 0xC21BD9: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:42 TAX
    case 0xC21BDA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:43 LDA __BSS_START__,X
    case 0xC21BDB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:44 AND #$00FF
    case 0xC21BDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC21BDE.
    case 0xC21BE0: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21BE1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC21BE1.
    case 0xC21BE3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21BE4: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_guts.asm:46 CLC
    case 0xC21BE8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:47 ADC #item::params + item_parameters::ep
    case 0xC21BE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:47 ADC #item::params + item_parameters::ep
    // Overlapping static entry reached from 0xC21BE9.
    case 0xC21BEB: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:48 TAX
    case 0xC21BEC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC21BED: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:50 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21BEF: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/misc/recalc_character_postmath_guts.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC21BF3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:52 SEC
    case 0xC21BF5: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:53 AND #$00FF
    case 0xC21BF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC21BF6.
    case 0xC21BF8: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:54 SBC #$0080
    case 0xC21BF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:54 SBC #$0080
    // Overlapping static entry reached from 0xC21BF9.
    case 0xC21BFB: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:55 EOR #$FF80
    case 0xC21BFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:55 EOR #$FF80
    // Overlapping static entry reached from 0xC21BFC.
    case 0xC21BFE: cpu.execute_instruction<0xFF>(0xA40485, 4); return true;
    // src/misc/recalc_character_postmath_guts.asm:56 STA @VIRTUAL04
    case 0xC21BFF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:58 LDY @LOCAL02
    case 0xC21C01: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:58 LDY @LOCAL02
    // Overlapping static entry reached from 0xC21BFE.
    case 0xC21C02: cpu.execute_instruction<0x11>(0x000098, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:60 TYA
    case 0xC21C03: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:61 CLC
    case 0xC21C04: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:62 ADC @VIRTUAL04
    case 0xC21C05: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:63 TAY
    case 0xC21C07: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:64 STY @LOCAL02
    case 0xC21C08: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:69 LDA @LOCALEB
    case 0xC21C0A: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:70 STA @VIRTUAL02
    case 0xC21C0C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:72 LDY #.SIZEOF(char_struct)
    case 0xC21C0E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:72 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21C0E.
    case 0xC21C10: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:73 JSL MULT168
    case 0xC21C11: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_guts.asm:74 TAX
    case 0xC21C15: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:75 LDA PARTY_CHARACTERS+char_struct::boosted_guts,X
    case 0xC21C16: cpu.execute_instruction<0xBD>(0x009A26, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:76 AND #$00FF
    case 0xC21C19: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC21C19.
    case 0xC21C1B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:77 STA @VIRTUAL04
    case 0xC21C1C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:78 LDY @LOCAL02
    case 0xC21C1E: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:79 TYA
    case 0xC21C20: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:80 CLC
    case 0xC21C21: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:81 ADC @VIRTUAL04
    case 0xC21C22: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:82 STA @LOCAL01
    case 0xC21C24: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:83 STA @VIRTUAL04
    case 0xC21C26: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:84 LDA #0
    case 0xC21C28: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:84 LDA #0
    // Overlapping static entry reached from 0xC21C28.
    case 0xC21C2A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:85 CLC
    case 0xC21C2B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:86 SBC @VIRTUAL04
    case 0xC21C2C: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:87 BRANCHLTEQS @UNKNOWN3
    case 0xC21C2E: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:87 BRANCHLTEQS @UNKNOWN3
    case 0xC21C30: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:87 BRANCHLTEQS @UNKNOWN3
    case 0xC21C32: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:87 BRANCHLTEQS @UNKNOWN3
    case 0xC21C34: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:88 LDX #0
    case 0xC21C36: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:88 LDX #0
    // Overlapping static entry reached from 0xC21C36.
    case 0xC21C38: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:89 BRA @UNKNOWN4
    case 0xC21C39: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:91 LDA @LOCAL01
    case 0xC21C3B: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:92 REP #PROC_FLAGS::ACCUM8
    case 0xC21C3D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:93 AND #$00FF
    case 0xC21C3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:93 AND #$00FF
    // Overlapping static entry reached from 0xC21C3F.
    case 0xC21C41: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:94 TAX
    case 0xC21C42: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:96 TXA
    case 0xC21C43: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:97 SEP #PROC_FLAGS::ACCUM8
    case 0xC21C44: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:98 STA @LOCAL00
    case 0xC21C46: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC21C48: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:100 LDA @VIRTUAL02
    case 0xC21C4A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:101 LDY #.SIZEOF(char_struct)
    case 0xC21C4C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:101 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21C4C.
    case 0xC21C4E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:102 JSL MULT168
    case 0xC21C4F: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_guts.asm:103 TAX
    case 0xC21C53: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:104 SEP #PROC_FLAGS::ACCUM8
    case 0xC21C54: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:105 LDA @LOCAL00
    case 0xC21C56: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:106 STA PARTY_CHARACTERS+char_struct::guts,X
    case 0xC21C58: cpu.execute_instruction<0x9D>(0x0099E6, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:107 END_C_FUNCTION
    case 0xC21C5B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:107 END_C_FUNCTION
    case 0xC21C5C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/recalc_character_postmath_iq.asm (source_named).
bool execute_miscellaneous_recalc_character_postmath_iq_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/recalc_character_postmath_iq.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21D7D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/misc/recalc_character_postmath_iq.asm:6 DEC
    case 0xC21D7F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_iq.asm:7 LDY #.SIZEOF(char_struct)
    case 0xC21D80: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/recalc_character_postmath_iq.asm:7 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21D80.
    case 0xC21D82: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_iq.asm:8 JSL MULT168
    case 0xC21D83: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_iq.asm:9 TAX
    case 0xC21D87: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_iq.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC21D88: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_iq.asm:11 LDA PARTY_CHARACTERS+char_struct::base_iq,X
    case 0xC21D8A: cpu.execute_instruction<0xBD>(0x0099F0, 3); return true;
    // src/misc/recalc_character_postmath_iq.asm:12 CLC
    case 0xC21D8D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_iq.asm:13 ADC PARTY_CHARACTERS+char_struct::boosted_iq,X
    case 0xC21D8E: cpu.execute_instruction<0x7D>(0x009A28, 3); return true;
    // src/misc/recalc_character_postmath_iq.asm:14 STA PARTY_CHARACTERS+char_struct::iq,X
    case 0xC21D91: cpu.execute_instruction<0x9D>(0x0099E9, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/recalc_character_postmath_iq.asm:15 END_C_FUNCTION
    case 0xC21D94: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/recalc_character_postmath_luck.asm (source_named).
bool execute_miscellaneous_recalc_character_postmath_luck_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21C5D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:12 END_STACK_VARS
    case 0xC21C5F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:12 END_STACK_VARS
    case 0xC21C60: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:12 END_STACK_VARS
    case 0xC21C61: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:12 END_STACK_VARS
    case 0xC21C62: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EB, 2); else cpu.execute_instruction<0x69>(0x00FFEB, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC21C62.
    case 0xC21C64: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:12 END_STACK_VARS
    case 0xC21C65: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:12 END_STACK_VARS
    case 0xC21C66: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:18 TAX
    case 0xC21C67: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:19 DEC
    case 0xC21C68: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:20 STA @VIRTUAL02
    case 0xC21C69: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:22 STA @LOCALEB
    case 0xC21C6B: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:23 LDA @VIRTUAL02
    case 0xC21C6D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:25 LDY #.SIZEOF(char_struct)
    case 0xC21C6F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:25 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21C6F.
    case 0xC21C71: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:26 JSL MULT168
    case 0xC21C72: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_luck.asm:27 TAX
    case 0xC21C76: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:28 LDA PARTY_CHARACTERS+char_struct::base_luck,X
    case 0xC21C77: cpu.execute_instruction<0xBD>(0x0099EE, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:29 AND #$00FF
    case 0xC21C7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC21C7A.
    case 0xC21C7C: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:30 TAY
    case 0xC21C7D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:31 STY @LOCAL02
    case 0xC21C7E: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:32 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC21C80: cpu.execute_instruction<0xBD>(0x009A01, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:33 AND #$00FF
    case 0xC21C83: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC21C83.
    case 0xC21C85: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:34 BEQ @UNKNOWN0
    case 0xC21C86: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:35 DEC
    case 0xC21C88: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:36 STA @TMP
    case 0xC21C89: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:37 TXA
    case 0xC21C8B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:38 CLC
    case 0xC21C8C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:39 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21C8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:39 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21C8D.
    case 0xC21C8F: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:40 CLC
    case 0xC21C90: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:41 ADC @TMP
    case 0xC21C91: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:41 ADC @TMP
    // Overlapping static entry reached from 0xC21C8F.
    case 0xC21C92: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:42 TAX
    case 0xC21C93: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:43 LDA __BSS_START__,X
    case 0xC21C94: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:44 AND #$00FF
    case 0xC21C97: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC21C97.
    case 0xC21C99: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21C9A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC21C9A.
    case 0xC21C9C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21C9D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_luck.asm:46 CLC
    case 0xC21CA1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:47 ADC #item::params + item_parameters::ep
    case 0xC21CA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:47 ADC #item::params + item_parameters::ep
    // Overlapping static entry reached from 0xC21CA2.
    case 0xC21CA4: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:48 TAX
    case 0xC21CA5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC21CA6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:50 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21CA8: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/misc/recalc_character_postmath_luck.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC21CAC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:52 SEC
    case 0xC21CAE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:53 AND #$00FF
    case 0xC21CAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC21CAF.
    case 0xC21CB1: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:54 SBC #$0080
    case 0xC21CB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:54 SBC #$0080
    // Overlapping static entry reached from 0xC21CB2.
    case 0xC21CB4: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:55 EOR #$FF80
    case 0xC21CB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:55 EOR #$FF80
    // Overlapping static entry reached from 0xC21CB5.
    case 0xC21CB7: cpu.execute_instruction<0xFF>(0xA40485, 4); return true;
    // src/misc/recalc_character_postmath_luck.asm:56 STA @VIRTUAL04
    case 0xC21CB8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:58 LDY @LOCAL02
    case 0xC21CBA: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:58 LDY @LOCAL02
    // Overlapping static entry reached from 0xC21CB7.
    case 0xC21CBB: cpu.execute_instruction<0x11>(0x000098, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:60 TYA
    case 0xC21CBC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:61 CLC
    case 0xC21CBD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:62 ADC @VIRTUAL04
    case 0xC21CBE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:63 TAY
    case 0xC21CC0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:64 STY @LOCAL02
    case 0xC21CC1: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:69 LDA @LOCALEB
    case 0xC21CC3: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:70 STA @VIRTUAL02
    case 0xC21CC5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:72 LDY #.SIZEOF(char_struct)
    case 0xC21CC7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:72 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21CC7.
    case 0xC21CC9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:73 JSL MULT168
    case 0xC21CCA: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_luck.asm:74 TAX
    case 0xC21CCE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:75 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC21CCF: cpu.execute_instruction<0xBD>(0x009A02, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:76 AND #$00FF
    case 0xC21CD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC21CD2.
    case 0xC21CD4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:77 BEQ @UNKNOWN1
    case 0xC21CD5: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:78 DEC
    case 0xC21CD7: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:79 STA @TMP
    case 0xC21CD8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:80 TXA
    case 0xC21CDA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:81 CLC
    case 0xC21CDB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:82 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21CDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:82 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21CDC.
    case 0xC21CDE: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:83 CLC
    case 0xC21CDF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:84 ADC @TMP
    case 0xC21CE0: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:84 ADC @TMP
    // Overlapping static entry reached from 0xC21CDE.
    case 0xC21CE1: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:85 TAX
    case 0xC21CE2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:86 LDA __BSS_START__,X
    case 0xC21CE3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:87 AND #$00FF
    case 0xC21CE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC21CE6.
    case 0xC21CE8: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21CE9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC21CE9.
    case 0xC21CEB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21CEC: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_luck.asm:89 CLC
    case 0xC21CF0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:90 ADC #item::params + item_parameters::ep
    case 0xC21CF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:90 ADC #item::params + item_parameters::ep
    // Overlapping static entry reached from 0xC21CF1.
    case 0xC21CF3: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:91 TAX
    case 0xC21CF4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:92 SEP #PROC_FLAGS::ACCUM8
    case 0xC21CF5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:93 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21CF7: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/misc/recalc_character_postmath_luck.asm:94 REP #PROC_FLAGS::ACCUM8
    case 0xC21CFB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:95 SEC
    case 0xC21CFD: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:96 AND #$00FF
    case 0xC21CFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:96 AND #$00FF
    // Overlapping static entry reached from 0xC21CFE.
    case 0xC21D00: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:97 SBC #$0080
    case 0xC21D01: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:97 SBC #$0080
    // Overlapping static entry reached from 0xC21D01.
    case 0xC21D03: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:98 EOR #$FF80
    case 0xC21D04: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:98 EOR #$FF80
    // Overlapping static entry reached from 0xC21D04.
    case 0xC21D06: cpu.execute_instruction<0xFF>(0xA40485, 4); return true;
    // src/misc/recalc_character_postmath_luck.asm:99 STA @VIRTUAL04
    case 0xC21D07: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:100 LDY @LOCAL02
    case 0xC21D09: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:100 LDY @LOCAL02
    // Overlapping static entry reached from 0xC21D06.
    case 0xC21D0A: cpu.execute_instruction<0x11>(0x000098, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:101 TYA
    case 0xC21D0B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:102 CLC
    case 0xC21D0C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:103 ADC @VIRTUAL04
    case 0xC21D0D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:104 TAY
    case 0xC21D0F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:105 STY @LOCAL02
    case 0xC21D10: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:110 LDA @LOCALEB
    case 0xC21D12: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:111 STA @VIRTUAL02
    case 0xC21D14: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:113 LDY #.SIZEOF(char_struct)
    case 0xC21D16: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:113 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21D16.
    case 0xC21D18: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:114 JSL MULT168
    case 0xC21D19: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_luck.asm:115 TAX
    case 0xC21D1D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:116 LDA PARTY_CHARACTERS+char_struct::boosted_luck,X
    case 0xC21D1E: cpu.execute_instruction<0xBD>(0x009A29, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:117 AND #$00FF
    case 0xC21D21: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:117 AND #$00FF
    // Overlapping static entry reached from 0xC21D21.
    case 0xC21D23: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:118 STA @VIRTUAL04
    case 0xC21D24: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:119 LDY @LOCAL02
    case 0xC21D26: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:120 TYA
    case 0xC21D28: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:121 CLC
    case 0xC21D29: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:122 ADC @VIRTUAL04
    case 0xC21D2A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:123 STA @LOCAL01
    case 0xC21D2C: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:124 STA @VIRTUAL04
    case 0xC21D2E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:125 LDA #0
    case 0xC21D30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:125 LDA #0
    // Overlapping static entry reached from 0xC21D30.
    case 0xC21D32: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:126 CLC
    case 0xC21D33: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:127 SBC @VIRTUAL04
    case 0xC21D34: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:128 BRANCHLTEQS @UNKNOWN4
    case 0xC21D36: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:128 BRANCHLTEQS @UNKNOWN4
    case 0xC21D38: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:128 BRANCHLTEQS @UNKNOWN4
    case 0xC21D3A: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:128 BRANCHLTEQS @UNKNOWN4
    case 0xC21D3C: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:129 LDX #0
    case 0xC21D3E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:129 LDX #0
    // Overlapping static entry reached from 0xC21D3E.
    case 0xC21D40: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:130 BRA @UNKNOWN5
    case 0xC21D41: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:132 LDA @LOCAL01
    case 0xC21D43: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:133 REP #PROC_FLAGS::ACCUM8
    case 0xC21D45: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:134 AND #$00FF
    case 0xC21D47: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:134 AND #$00FF
    // Overlapping static entry reached from 0xC21D47.
    case 0xC21D49: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:135 TAX
    case 0xC21D4A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:137 TXA
    case 0xC21D4B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:138 SEP #PROC_FLAGS::ACCUM8
    case 0xC21D4C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:139 STA @LOCAL00
    case 0xC21D4E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:140 REP #PROC_FLAGS::ACCUM8
    case 0xC21D50: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:141 LDA @VIRTUAL02
    case 0xC21D52: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:142 LDY #.SIZEOF(char_struct)
    case 0xC21D54: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:142 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21D54.
    case 0xC21D56: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:143 JSL MULT168
    case 0xC21D57: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_luck.asm:144 TAX
    case 0xC21D5B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:145 SEP #PROC_FLAGS::ACCUM8
    case 0xC21D5C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:146 LDA @LOCAL00
    case 0xC21D5E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:147 STA PARTY_CHARACTERS+char_struct::luck,X
    case 0xC21D60: cpu.execute_instruction<0x9D>(0x0099E7, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:148 END_C_FUNCTION
    case 0xC21D63: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:148 END_C_FUNCTION
    case 0xC21D64: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/recalc_character_postmath_offense.asm (source_named).
bool execute_miscellaneous_recalc_character_postmath_offense_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21857: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:11 END_STACK_VARS
    case 0xC21859: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:11 END_STACK_VARS
    case 0xC2185A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:11 END_STACK_VARS
    case 0xC2185B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:11 END_STACK_VARS
    case 0xC2185C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E9, 2); else cpu.execute_instruction<0x69>(0x00FFE9, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC2185C.
    case 0xC2185E: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:11 END_STACK_VARS
    case 0xC2185F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:11 END_STACK_VARS
    case 0xC21860: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:12 TAX
    case 0xC21861: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:13 DEC
    case 0xC21862: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:14 STA @VIRTUAL02
    case 0xC21863: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:15 STA @LOCAL04
    case 0xC21865: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:16 LDA @VIRTUAL02
    case 0xC21867: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:17 LDY #.SIZEOF(char_struct)
    case 0xC21869: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:17 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21869.
    case 0xC2186B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:18 JSL MULT168
    case 0xC2186C: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_offense.asm:19 TAX
    case 0xC21870: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:20 LDA PARTY_CHARACTERS+char_struct::base_offense,X
    case 0xC21871: cpu.execute_instruction<0xBD>(0x0099EA, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:21 AND #$00FF
    case 0xC21874: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC21874.
    case 0xC21876: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:22 TAY
    case 0xC21877: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:23 STY @LOCAL03
    case 0xC21878: cpu.execute_instruction<0x84>(0x000013, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:24 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC2187A: cpu.execute_instruction<0xBD>(0x0099FF, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:25 AND #$00FF
    case 0xC2187D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC2187D.
    case 0xC2187F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:26 STA @LOCAL02
    case 0xC21880: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:27 BEQ @UNKNOWN1
    case 0xC21882: cpu.execute_instruction<0xF0>(0x00005D, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:28 LDX #0
    case 0xC21884: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:28 LDX #0
    // Overlapping static entry reached from 0xC21884.
    case 0xC21886: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:29 STX @LOCAL01
    case 0xC21887: cpu.execute_instruction<0x86>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:30 LDA @VIRTUAL02
    case 0xC21889: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:30 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC27BD6.
    case 0xC2188A: cpu.execute_instruction<0x02>(0x0000C9, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:31 CMP #PARTY_MEMBER::POO - 1
    case 0xC2188B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:31 CMP #PARTY_MEMBER::POO - 1
    // Overlapping static entry reached from 0xC2188B.
    case 0xC2188D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:32 BNE @UNKNOWN0
    case 0xC2188E: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:33 LDX #1
    case 0xC21890: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:33 LDX #1
    // Overlapping static entry reached from 0xC21890.
    case 0xC21892: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:34 STX @LOCAL01
    case 0xC21893: cpu.execute_instruction<0x86>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:36 LDA @LOCAL02
    case 0xC21895: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:37 DEC
    case 0xC21897: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:41 PHA
    case 0xC21898: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:43 LDA @VIRTUAL02
    case 0xC21899: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:44 LDY #.SIZEOF(char_struct)
    case 0xC2189B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:44 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2189B.
    case 0xC2189D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:45 JSL MULT168
    case 0xC2189E: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_offense.asm:46 CLC
    case 0xC218A2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:47 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC218A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:47 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC218A3.
    case 0xC218A5: cpu.execute_instruction<0x99>(0x00847A, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:52 PLY
    case 0xC218A6: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:53 STY @VIRTUAL02
    case 0xC218A7: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:53 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC218A5.
    case 0xC218A8: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:54 CLC
    case 0xC218A9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:55 ADC @VIRTUAL02
    case 0xC218AA: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:57 TAX
    case 0xC218AC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:58 LDA __BSS_START__,X
    case 0xC218AD: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:59 AND #$00FF
    case 0xC218B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC218B0.
    case 0xC218B2: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC218B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC218B3.
    case 0xC218B5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC218B6: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_offense.asm:61 LDX @LOCAL01
    case 0xC218BA: cpu.execute_instruction<0xA6>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:62 STX @VIRTUAL02
    case 0xC218BC: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:63 CLC
    case 0xC218BE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:64 ADC @VIRTUAL02
    case 0xC218BF: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:65 CLC
    case 0xC218C1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:66 ADC #item::params + item_parameters::strength
    case 0xC218C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001F, 2); else cpu.execute_instruction<0x69>(0x00001F, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:66 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC218C2.
    case 0xC218C4: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:67 TAX
    case 0xC218C5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC218C6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:69 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC218C8: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/misc/recalc_character_postmath_offense.asm:70 REP #PROC_FLAGS::ACCUM8
    case 0xC218CC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:71 SEC
    case 0xC218CE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:72 AND #$00FF
    case 0xC218CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:72 AND #$00FF
    // Overlapping static entry reached from 0xC218CF.
    case 0xC218D1: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:73 SBC #$0080
    case 0xC218D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:73 SBC #$0080
    // Overlapping static entry reached from 0xC218D2.
    case 0xC218D4: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:74 EOR #$FF80
    case 0xC218D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:74 EOR #$FF80
    // Overlapping static entry reached from 0xC218D5.
    case 0xC218D7: cpu.execute_instruction<0xFF>(0xA40485, 4); return true;
    // src/misc/recalc_character_postmath_offense.asm:75 STA @VIRTUAL04
    case 0xC218D8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:76 LDY @LOCAL03
    case 0xC218DA: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:76 LDY @LOCAL03
    // Overlapping static entry reached from 0xC218D7.
    case 0xC218DB: cpu.execute_instruction<0x13>(0x000098, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:77 TYA
    case 0xC218DC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:78 CLC
    case 0xC218DD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:79 ADC @VIRTUAL04
    case 0xC218DE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:80 TAY
    case 0xC218E0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:82 STY @VIRTUAL04
    case 0xC218E1: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:83 LDA #0
    case 0xC218E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:83 LDA #0
    // Overlapping static entry reached from 0xC218E3.
    case 0xC218E5: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:84 CLC
    case 0xC218E6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:85 SBC @VIRTUAL04
    case 0xC218E7: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:86 BRANCHLTEQS @UNKNOWN4
    case 0xC218E9: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:86 BRANCHLTEQS @UNKNOWN4
    case 0xC218EB: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:86 BRANCHLTEQS @UNKNOWN4
    case 0xC218ED: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:86 BRANCHLTEQS @UNKNOWN4
    case 0xC218EF: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:87 LDX #0
    case 0xC218F1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:87 LDX #0
    // Overlapping static entry reached from 0xC218F1.
    case 0xC218F3: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:88 BRA @UNKNOWN8
    case 0xC218F4: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:90 TYA
    case 0xC218F6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:91 CLC
    case 0xC218F7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:92 SBC #$00FF
    case 0xC218F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000FF, 2); else cpu.execute_instruction<0xE9>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:92 SBC #$00FF
    // Overlapping static entry reached from 0xC218F8.
    case 0xC218FA: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:93 BRANCHLTEQS @UNKNOWN7
    case 0xC218FB: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:93 BRANCHLTEQS @UNKNOWN7
    case 0xC218FD: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:93 BRANCHLTEQS @UNKNOWN7
    case 0xC218FF: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:93 BRANCHLTEQS @UNKNOWN7
    case 0xC21901: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:94 LDX #$00FF
    case 0xC21903: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:94 LDX #$00FF
    // Overlapping static entry reached from 0xC21903.
    case 0xC21905: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:95 BRA @UNKNOWN8
    case 0xC21906: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:97 TYA
    case 0xC21908: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:98 REP #PROC_FLAGS::ACCUM8
    case 0xC21909: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:99 AND #$00FF
    case 0xC2190B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:99 AND #$00FF
    // Overlapping static entry reached from 0xC2190B.
    case 0xC2190D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:100 TAX
    case 0xC2190E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:102 TXA
    case 0xC2190F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:103 SEP #PROC_FLAGS::ACCUM8
    case 0xC21910: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:104 STA @LOCAL00
    case 0xC21912: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:105 REP #PROC_FLAGS::ACCUM8
    case 0xC21914: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:106 LDA @LOCAL04
    case 0xC21916: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:107 STA @VIRTUAL02
    case 0xC21918: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:108 LDY #.SIZEOF(char_struct)
    case 0xC2191A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:108 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2191A.
    case 0xC2191C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:109 JSL MULT168
    case 0xC2191D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_offense.asm:110 TAX
    case 0xC21921: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:111 SEP #PROC_FLAGS::ACCUM8
    case 0xC21922: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:112 LDA @LOCAL00
    case 0xC21924: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:113 STA PARTY_CHARACTERS+char_struct::offense,X
    case 0xC21926: cpu.execute_instruction<0x9D>(0x0099E3, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:114 END_C_FUNCTION
    case 0xC21929: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:114 END_C_FUNCTION
    case 0xC2192A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/recalc_character_postmath_speed.asm (source_named).
bool execute_miscellaneous_recalc_character_postmath_speed_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21AEB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:12 END_STACK_VARS
    case 0xC21AED: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:12 END_STACK_VARS
    case 0xC21AEE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:12 END_STACK_VARS
    case 0xC21AEF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:12 END_STACK_VARS
    case 0xC21AF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EB, 2); else cpu.execute_instruction<0x69>(0x00FFEB, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC21AF0.
    case 0xC21AF2: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:12 END_STACK_VARS
    case 0xC21AF3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:12 END_STACK_VARS
    case 0xC21AF4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:18 TAX
    case 0xC21AF5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:19 DEC
    case 0xC21AF6: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:20 STA @VIRTUAL02
    case 0xC21AF7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:22 STA @LOCALEB
    case 0xC21AF9: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:23 LDA @VIRTUAL02
    case 0xC21AFB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:25 LDY #.SIZEOF(char_struct)
    case 0xC21AFD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:25 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21AFD.
    case 0xC21AFF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:26 JSL MULT168
    case 0xC21B00: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_speed.asm:27 TAX
    case 0xC21B04: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:28 LDA PARTY_CHARACTERS+char_struct::base_speed,X
    case 0xC21B05: cpu.execute_instruction<0xBD>(0x0099EC, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:29 AND #$00FF
    case 0xC21B08: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC21B08.
    case 0xC21B0A: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:30 TAY
    case 0xC21B0B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:31 STY @LOCAL02
    case 0xC21B0C: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:32 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC21B0E: cpu.execute_instruction<0xBD>(0x009A00, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:33 AND #$00FF
    case 0xC21B11: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC21B11.
    case 0xC21B13: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:34 BEQ @UNKNOWN0
    case 0xC21B14: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:35 DEC
    case 0xC21B16: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:36 STA @TMP
    case 0xC21B17: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:37 TXA
    case 0xC21B19: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:38 CLC
    case 0xC21B1A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:39 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21B1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:39 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21B1B.
    case 0xC21B1D: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:40 CLC
    case 0xC21B1E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:41 ADC @TMP
    case 0xC21B1F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:41 ADC @TMP
    // Overlapping static entry reached from 0xC21B1D.
    case 0xC21B20: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:42 TAX
    case 0xC21B21: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:43 LDA __BSS_START__,X
    case 0xC21B22: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:44 AND #$00FF
    case 0xC21B25: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC21B25.
    case 0xC21B27: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21B28: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC21B28.
    case 0xC21B2A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21B2B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_speed.asm:46 CLC
    case 0xC21B2F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:47 ADC #item::params + item_parameters::ep
    case 0xC21B30: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:47 ADC #item::params + item_parameters::ep
    // Overlapping static entry reached from 0xC21B30.
    case 0xC21B32: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:48 TAX
    case 0xC21B33: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC21B34: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:50 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21B36: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/misc/recalc_character_postmath_speed.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC21B3A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:52 SEC
    case 0xC21B3C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:53 AND #$00FF
    case 0xC21B3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC21B3D.
    case 0xC21B3F: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:54 SBC #$0080
    case 0xC21B40: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:54 SBC #$0080
    // Overlapping static entry reached from 0xC21B40.
    case 0xC21B42: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:55 EOR #$FF80
    case 0xC21B43: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:55 EOR #$FF80
    // Overlapping static entry reached from 0xC21B43.
    case 0xC21B45: cpu.execute_instruction<0xFF>(0xA40485, 4); return true;
    // src/misc/recalc_character_postmath_speed.asm:56 STA @VIRTUAL04
    case 0xC21B46: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:58 LDY @LOCAL02
    case 0xC21B48: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:58 LDY @LOCAL02
    // Overlapping static entry reached from 0xC21B45.
    case 0xC21B49: cpu.execute_instruction<0x11>(0x000098, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:60 TYA
    case 0xC21B4A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:61 CLC
    case 0xC21B4B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:62 ADC @VIRTUAL04
    case 0xC21B4C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:63 TAY
    case 0xC21B4E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:64 STY @LOCAL02
    case 0xC21B4F: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:69 LDA @LOCALEB
    case 0xC21B51: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:70 STA @VIRTUAL02
    case 0xC21B53: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:72 LDY #.SIZEOF(char_struct)
    case 0xC21B55: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:72 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21B55.
    case 0xC21B57: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:73 JSL MULT168
    case 0xC21B58: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_speed.asm:74 TAX
    case 0xC21B5C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:75 LDA PARTY_CHARACTERS+char_struct::boosted_speed,X
    case 0xC21B5D: cpu.execute_instruction<0xBD>(0x009A25, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:76 AND #$00FF
    case 0xC21B60: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC21B60.
    case 0xC21B62: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:77 STA @VIRTUAL04
    case 0xC21B63: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:78 LDY @LOCAL02
    case 0xC21B65: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:79 TYA
    case 0xC21B67: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:80 CLC
    case 0xC21B68: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:81 ADC @VIRTUAL04
    case 0xC21B69: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:82 STA @LOCAL01
    case 0xC21B6B: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:83 STA @VIRTUAL04
    case 0xC21B6D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:84 LDA #0
    case 0xC21B6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:84 LDA #0
    // Overlapping static entry reached from 0xC21B6F.
    case 0xC21B71: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:85 CLC
    case 0xC21B72: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:86 SBC @VIRTUAL04
    case 0xC21B73: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:87 BRANCHLTEQS @UNKNOWN3
    case 0xC21B75: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:87 BRANCHLTEQS @UNKNOWN3
    case 0xC21B77: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:87 BRANCHLTEQS @UNKNOWN3
    case 0xC21B79: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:87 BRANCHLTEQS @UNKNOWN3
    case 0xC21B7B: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:88 LDX #0
    case 0xC21B7D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:88 LDX #0
    // Overlapping static entry reached from 0xC21B7D.
    case 0xC21B7F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:89 BRA @UNKNOWN4
    case 0xC21B80: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:91 LDA @LOCAL01
    case 0xC21B82: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:92 REP #PROC_FLAGS::ACCUM8
    case 0xC21B84: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:93 AND #$00FF
    case 0xC21B86: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:93 AND #$00FF
    // Overlapping static entry reached from 0xC21B86.
    case 0xC21B88: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:94 TAX
    case 0xC21B89: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:96 TXA
    case 0xC21B8A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:97 SEP #PROC_FLAGS::ACCUM8
    case 0xC21B8B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:98 STA @LOCAL00
    case 0xC21B8D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC21B8F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:100 LDA @VIRTUAL02
    case 0xC21B91: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:101 LDY #.SIZEOF(char_struct)
    case 0xC21B93: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:101 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21B93.
    case 0xC21B95: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:102 JSL MULT168
    case 0xC21B96: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_speed.asm:103 TAX
    case 0xC21B9A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:104 SEP #PROC_FLAGS::ACCUM8
    case 0xC21B9B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:105 LDA @LOCAL00
    case 0xC21B9D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:106 STA PARTY_CHARACTERS+char_struct::speed,X
    case 0xC21B9F: cpu.execute_instruction<0x9D>(0x0099E5, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:107 END_C_FUNCTION
    case 0xC21BA2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:107 END_C_FUNCTION
    case 0xC21BA3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/recalc_character_postmath_vitality.asm (source_named).
bool execute_miscellaneous_recalc_character_postmath_vitality_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/recalc_character_postmath_vitality.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21D65: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/misc/recalc_character_postmath_vitality.asm:6 DEC
    case 0xC21D67: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_vitality.asm:7 LDY #.SIZEOF(char_struct)
    case 0xC21D68: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/recalc_character_postmath_vitality.asm:7 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21D68.
    case 0xC21D6A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_vitality.asm:8 JSL MULT168
    case 0xC21D6B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/recalc_character_postmath_vitality.asm:9 TAX
    case 0xC21D6F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_vitality.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC21D70: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_vitality.asm:11 LDA PARTY_CHARACTERS+char_struct::base_vitality,X
    case 0xC21D72: cpu.execute_instruction<0xBD>(0x0099EF, 3); return true;
    // src/misc/recalc_character_postmath_vitality.asm:12 CLC
    case 0xC21D75: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_vitality.asm:13 ADC PARTY_CHARACTERS+char_struct::boosted_vitality,X
    case 0xC21D76: cpu.execute_instruction<0x7D>(0x009A27, 3); return true;
    // src/misc/recalc_character_postmath_vitality.asm:14 STA PARTY_CHARACTERS+char_struct::vitality,X
    case 0xC21D79: cpu.execute_instruction<0x9D>(0x0099E8, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/recalc_character_postmath_vitality.asm:15 END_C_FUNCTION
    case 0xC21D7C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/recover_hp_amtpercent.asm (source_named).
bool execute_miscellaneous_recover_hp_amtpercent_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/recover_hp_amtpercent.asm:3 BEGIN_C_FUNCTION
    case 0xC18F64: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/recover_hp_amtpercent.asm:11 END_STACK_VARS
    case 0xC18F66: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/recover_hp_amtpercent.asm:11 END_STACK_VARS
    case 0xC18F67: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/recover_hp_amtpercent.asm:11 END_STACK_VARS
    case 0xC18F68: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recover_hp_amtpercent.asm:11 END_STACK_VARS
    case 0xC18F69: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recover_hp_amtpercent.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC18F69.
    case 0xC18F6B: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/recover_hp_amtpercent.asm:11 END_STACK_VARS
    case 0xC18F6C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/recover_hp_amtpercent.asm:11 END_STACK_VARS
    case 0xC18F6D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/recover_hp_amtpercent.asm:12 STY @LOCAL02
    case 0xC18F6E: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:12 STY @LOCAL02
    // Overlapping static entry reached from 0xC18F6B.
    case 0xC18F6F: cpu.execute_instruction<0x12>(0x000086, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:13 STX @VIRTUAL04
    case 0xC18F70: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:13 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC18F6F.
    case 0xC18F71: cpu.execute_instruction<0x04>(0x0000C9, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:14 CMP #$00FF
    case 0xC18F72: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/misc/recover_hp_amtpercent.asm:14 CMP #$00FF
    // Overlapping static entry reached from 0xC18F71.
    case 0xC18F73: cpu.execute_instruction<0xFF>(0x39D000, 4); return true;
    // src/misc/recover_hp_amtpercent.asm:14 CMP #$00FF
    // Overlapping static entry reached from 0xC18F72.
    case 0xC18F74: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:15 BNE @UNKNOWN2
    case 0xC18F75: cpu.execute_instruction<0xD0>(0x000039, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:16 LDA #0
    case 0xC18F77: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/recover_hp_amtpercent.asm:16 LDA #0
    // Overlapping static entry reached from 0xC18F77.
    case 0xC18F79: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:17 STA @VIRTUAL02
    case 0xC18F7A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:18 STA @LOCAL01
    case 0xC18F7C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:19 BRA @UNKNOWN1
    case 0xC18F7E: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:21 LDY @LOCAL02
    case 0xC18F80: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:22 LDX @VIRTUAL04
    case 0xC18F82: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:23 STX @LOCAL00
    case 0xC18F84: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:24 LDA @LOCAL01
    case 0xC18F86: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:25 STA @VIRTUAL02
    case 0xC18F88: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:32 LDX @VIRTUAL02
    case 0xC18F8A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:33 LDA GAME_STATE + game_state::party_members,X
    case 0xC18F8C: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/misc/recover_hp_amtpercent.asm:35 AND #$00FF
    case 0xC18F8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recover_hp_amtpercent.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC18F8F.
    case 0xC18F91: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:36 LDX @LOCAL00
    case 0xC18F92: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:37 JSL UNKNOWN_C3EC8B
    case 0xC18F94: cpu.execute_instruction<0x22>(0xC3EC8B, 4); return true;
    // src/misc/recover_hp_amtpercent.asm:38 INC @VIRTUAL02
    case 0xC18F98: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:39 LDA @VIRTUAL02
    case 0xC18F9A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:40 STA @LOCAL01
    case 0xC18F9C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:42 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC18F9E: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/misc/recover_hp_amtpercent.asm:43 AND #$00FF
    case 0xC18FA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recover_hp_amtpercent.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC18FA1.
    case 0xC18FA3: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:44 PHA
    case 0xC18FA4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/recover_hp_amtpercent.asm:45 LDA @VIRTUAL02
    case 0xC18FA5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:46 PLY
    case 0xC18FA7: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/recover_hp_amtpercent.asm:47 STY @VIRTUAL02
    case 0xC18FA8: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:48 CMP @VIRTUAL02
    case 0xC18FAA: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:49 BCC @UNKNOWN0
    case 0xC18FAC: cpu.execute_instruction<0x90>(0x0000D2, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:50 BRA @UNKNOWN3
    case 0xC18FAE: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:52 LDY @LOCAL02
    case 0xC18FB0: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:53 LDX @VIRTUAL04
    case 0xC18FB2: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:54 JSL UNKNOWN_C3EC8B
    case 0xC18FB4: cpu.execute_instruction<0x22>(0xC3EC8B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/recover_hp_amtpercent.asm:56 END_C_FUNCTION
    case 0xC18FB8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/recover_hp_amtpercent.asm:56 END_C_FUNCTION
    case 0xC18FB9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/recover_pp_amtpercent.asm (source_named).
bool execute_miscellaneous_recover_pp_amtpercent_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/recover_pp_amtpercent.asm:3 BEGIN_C_FUNCTION
    case 0xC19010: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/recover_pp_amtpercent.asm:11 END_STACK_VARS
    case 0xC19012: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/recover_pp_amtpercent.asm:11 END_STACK_VARS
    case 0xC19013: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/recover_pp_amtpercent.asm:11 END_STACK_VARS
    case 0xC19014: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recover_pp_amtpercent.asm:11 END_STACK_VARS
    case 0xC19015: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recover_pp_amtpercent.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC19015.
    case 0xC19017: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/recover_pp_amtpercent.asm:11 END_STACK_VARS
    case 0xC19018: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/recover_pp_amtpercent.asm:11 END_STACK_VARS
    case 0xC19019: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/recover_pp_amtpercent.asm:12 STY @LOCAL02
    case 0xC1901A: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:12 STY @LOCAL02
    // Overlapping static entry reached from 0xC19017.
    case 0xC1901B: cpu.execute_instruction<0x12>(0x000086, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:13 STX @VIRTUAL04
    case 0xC1901C: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:13 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC1901B.
    case 0xC1901D: cpu.execute_instruction<0x04>(0x0000C9, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:14 CMP #$00FF
    case 0xC1901E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/misc/recover_pp_amtpercent.asm:14 CMP #$00FF
    // Overlapping static entry reached from 0xC1901D.
    case 0xC1901F: cpu.execute_instruction<0xFF>(0x39D000, 4); return true;
    // src/misc/recover_pp_amtpercent.asm:14 CMP #$00FF
    // Overlapping static entry reached from 0xC1901E.
    case 0xC19020: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:15 BNE @UNKNOWN2
    case 0xC19021: cpu.execute_instruction<0xD0>(0x000039, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:16 LDA #0
    case 0xC19023: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/recover_pp_amtpercent.asm:16 LDA #0
    // Overlapping static entry reached from 0xC19023.
    case 0xC19025: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:17 STA @VIRTUAL02
    case 0xC19026: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:18 STA @LOCAL01
    case 0xC19028: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:19 BRA @UNKNOWN1
    case 0xC1902A: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:21 LDY @LOCAL02
    case 0xC1902C: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:22 LDX @VIRTUAL04
    case 0xC1902E: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:23 STX @LOCAL00
    case 0xC19030: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:24 LDA @LOCAL01
    case 0xC19032: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:25 STA @VIRTUAL02
    case 0xC19034: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:32 LDX @VIRTUAL02
    case 0xC19036: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:33 LDA GAME_STATE + game_state::party_members,X
    case 0xC19038: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/misc/recover_pp_amtpercent.asm:35 AND #$00FF
    case 0xC1903B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recover_pp_amtpercent.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC1903B.
    case 0xC1903D: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:36 LDX @LOCAL00
    case 0xC1903E: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:37 JSL UNKNOWN_C3ED98
    case 0xC19040: cpu.execute_instruction<0x22>(0xC3ED98, 4); return true;
    // src/misc/recover_pp_amtpercent.asm:38 INC @VIRTUAL02
    case 0xC19044: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:39 LDA @VIRTUAL02
    case 0xC19046: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:40 STA @LOCAL01
    case 0xC19048: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:42 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1904A: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/misc/recover_pp_amtpercent.asm:43 AND #$00FF
    case 0xC1904D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recover_pp_amtpercent.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC1904D.
    case 0xC1904F: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:44 PHA
    case 0xC19050: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/recover_pp_amtpercent.asm:45 LDA @VIRTUAL02
    case 0xC19051: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:46 PLY
    case 0xC19053: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/recover_pp_amtpercent.asm:47 STY @VIRTUAL02
    case 0xC19054: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:48 CMP @VIRTUAL02
    case 0xC19056: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:49 BCC @UNKNOWN0
    case 0xC19058: cpu.execute_instruction<0x90>(0x0000D2, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:50 BRA @UNKNOWN3
    case 0xC1905A: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:52 LDY @LOCAL02
    case 0xC1905C: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:53 LDX @VIRTUAL04
    case 0xC1905E: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:54 JSL UNKNOWN_C3ED98
    case 0xC19060: cpu.execute_instruction<0x22>(0xC3ED98, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/recover_pp_amtpercent.asm:56 END_C_FUNCTION
    case 0xC19064: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/recover_pp_amtpercent.asm:56 END_C_FUNCTION
    case 0xC19065: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/reduce_hp_amtpercent.asm (source_named).
bool execute_miscellaneous_reduce_hp_amtpercent_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/reduce_hp_amtpercent.asm:3 BEGIN_C_FUNCTION
    case 0xC18F0E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/reduce_hp_amtpercent.asm:11 END_STACK_VARS
    case 0xC18F10: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/reduce_hp_amtpercent.asm:11 END_STACK_VARS
    case 0xC18F11: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/reduce_hp_amtpercent.asm:11 END_STACK_VARS
    case 0xC18F12: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/reduce_hp_amtpercent.asm:11 END_STACK_VARS
    case 0xC18F13: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/reduce_hp_amtpercent.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC18F13.
    case 0xC18F15: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/reduce_hp_amtpercent.asm:11 END_STACK_VARS
    case 0xC18F16: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/reduce_hp_amtpercent.asm:11 END_STACK_VARS
    case 0xC18F17: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/reduce_hp_amtpercent.asm:12 STY @LOCAL02
    case 0xC18F18: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:12 STY @LOCAL02
    // Overlapping static entry reached from 0xC18F15.
    case 0xC18F19: cpu.execute_instruction<0x12>(0x000086, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:13 STX @VIRTUAL04
    case 0xC18F1A: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:13 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC18F19.
    case 0xC18F1B: cpu.execute_instruction<0x04>(0x0000C9, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:14 CMP #$00FF
    case 0xC18F1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/misc/reduce_hp_amtpercent.asm:14 CMP #$00FF
    // Overlapping static entry reached from 0xC18F1B.
    case 0xC18F1D: cpu.execute_instruction<0xFF>(0x39D000, 4); return true;
    // src/misc/reduce_hp_amtpercent.asm:14 CMP #$00FF
    // Overlapping static entry reached from 0xC18F1C.
    case 0xC18F1E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:15 BNE @UNKNOWN2
    case 0xC18F1F: cpu.execute_instruction<0xD0>(0x000039, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:16 LDA #0
    case 0xC18F21: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/reduce_hp_amtpercent.asm:16 LDA #0
    // Overlapping static entry reached from 0xC18F21.
    case 0xC18F23: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:17 STA @VIRTUAL02
    case 0xC18F24: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:18 STA @LOCAL01
    case 0xC18F26: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:19 BRA @UNKNOWN1
    case 0xC18F28: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:21 LDY @LOCAL02
    case 0xC18F2A: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:22 LDX @VIRTUAL04
    case 0xC18F2C: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:23 STX @LOCAL00
    case 0xC18F2E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:24 LDA @LOCAL01
    case 0xC18F30: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:25 STA @VIRTUAL02
    case 0xC18F32: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:32 LDX @VIRTUAL02
    case 0xC18F34: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:33 LDA GAME_STATE + game_state::party_members,X
    case 0xC18F36: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/misc/reduce_hp_amtpercent.asm:35 AND #$00FF
    case 0xC18F39: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/reduce_hp_amtpercent.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC18F39.
    case 0xC18F3B: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:36 LDX @LOCAL00
    case 0xC18F3C: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:37 JSL UNKNOWN_C3EC1F
    case 0xC18F3E: cpu.execute_instruction<0x22>(0xC3EC1F, 4); return true;
    // src/misc/reduce_hp_amtpercent.asm:38 INC @VIRTUAL02
    case 0xC18F42: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:39 LDA @VIRTUAL02
    case 0xC18F44: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:40 STA @LOCAL01
    case 0xC18F46: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:42 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC18F48: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/misc/reduce_hp_amtpercent.asm:43 AND #$00FF
    case 0xC18F4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/reduce_hp_amtpercent.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC18F4B.
    case 0xC18F4D: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:44 PHA
    case 0xC18F4E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/reduce_hp_amtpercent.asm:45 LDA @VIRTUAL02
    case 0xC18F4F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:46 PLY
    case 0xC18F51: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/reduce_hp_amtpercent.asm:47 STY @VIRTUAL02
    case 0xC18F52: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:48 CMP @VIRTUAL02
    case 0xC18F54: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:49 BCC @UNKNOWN0
    case 0xC18F56: cpu.execute_instruction<0x90>(0x0000D2, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:50 BRA @UNKNOWN3
    case 0xC18F58: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:52 LDY @LOCAL02
    case 0xC18F5A: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:53 LDX @VIRTUAL04
    case 0xC18F5C: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:54 JSL UNKNOWN_C3EC1F
    case 0xC18F5E: cpu.execute_instruction<0x22>(0xC3EC1F, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/reduce_hp_amtpercent.asm:56 END_C_FUNCTION
    case 0xC18F62: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/reduce_hp_amtpercent.asm:56 END_C_FUNCTION
    case 0xC18F63: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/reduce_pp_amtpercent.asm (source_named).
bool execute_miscellaneous_reduce_pp_amtpercent_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/reduce_pp_amtpercent.asm:3 BEGIN_C_FUNCTION
    case 0xC18FBA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/reduce_pp_amtpercent.asm:11 END_STACK_VARS
    case 0xC18FBC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/reduce_pp_amtpercent.asm:11 END_STACK_VARS
    case 0xC18FBD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/reduce_pp_amtpercent.asm:11 END_STACK_VARS
    case 0xC18FBE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/reduce_pp_amtpercent.asm:11 END_STACK_VARS
    case 0xC18FBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/reduce_pp_amtpercent.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC18FBF.
    case 0xC18FC1: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/reduce_pp_amtpercent.asm:11 END_STACK_VARS
    case 0xC18FC2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/reduce_pp_amtpercent.asm:11 END_STACK_VARS
    case 0xC18FC3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/reduce_pp_amtpercent.asm:12 STY @LOCAL02
    case 0xC18FC4: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:12 STY @LOCAL02
    // Overlapping static entry reached from 0xC18FC1.
    case 0xC18FC5: cpu.execute_instruction<0x12>(0x000086, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:13 STX @VIRTUAL04
    case 0xC18FC6: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:13 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC18FC5.
    case 0xC18FC7: cpu.execute_instruction<0x04>(0x0000C9, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:14 CMP #$00FF
    case 0xC18FC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/misc/reduce_pp_amtpercent.asm:14 CMP #$00FF
    // Overlapping static entry reached from 0xC18FC7.
    case 0xC18FC9: cpu.execute_instruction<0xFF>(0x39D000, 4); return true;
    // src/misc/reduce_pp_amtpercent.asm:14 CMP #$00FF
    // Overlapping static entry reached from 0xC18FC8.
    case 0xC18FCA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:15 BNE @UNKNOWN2
    case 0xC18FCB: cpu.execute_instruction<0xD0>(0x000039, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:16 LDA #0
    case 0xC18FCD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/reduce_pp_amtpercent.asm:16 LDA #0
    // Overlapping static entry reached from 0xC18FCD.
    case 0xC18FCF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:17 STA @VIRTUAL02
    case 0xC18FD0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:18 STA @LOCAL01
    case 0xC18FD2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:19 BRA @UNKNOWN1
    case 0xC18FD4: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:21 LDY @LOCAL02
    case 0xC18FD6: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:22 LDX @VIRTUAL04
    case 0xC18FD8: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:23 STX @LOCAL00
    case 0xC18FDA: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:24 LDA @LOCAL01
    case 0xC18FDC: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:25 STA @VIRTUAL02
    case 0xC18FDE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:32 LDX @VIRTUAL02
    case 0xC18FE0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:33 LDA GAME_STATE + game_state::party_members,X
    case 0xC18FE2: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/misc/reduce_pp_amtpercent.asm:35 AND #$00FF
    case 0xC18FE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/reduce_pp_amtpercent.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC18FE5.
    case 0xC18FE7: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:36 LDX @LOCAL00
    case 0xC18FE8: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:37 JSL UNKNOWN_C3ED2C
    case 0xC18FEA: cpu.execute_instruction<0x22>(0xC3ED2C, 4); return true;
    // src/misc/reduce_pp_amtpercent.asm:38 INC @VIRTUAL02
    case 0xC18FEE: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:39 LDA @VIRTUAL02
    case 0xC18FF0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:40 STA @LOCAL01
    case 0xC18FF2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:42 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC18FF4: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/misc/reduce_pp_amtpercent.asm:43 AND #$00FF
    case 0xC18FF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/reduce_pp_amtpercent.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC19071.
    case 0xC18FF8: cpu.execute_instruction<0xFF>(0xA54800, 4); return true;
    // src/misc/reduce_pp_amtpercent.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC18FF7.
    case 0xC18FF9: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:44 PHA
    case 0xC18FFA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/reduce_pp_amtpercent.asm:45 LDA @VIRTUAL02
    case 0xC18FFB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:45 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC18FF8.
    case 0xC18FFC: cpu.execute_instruction<0x02>(0x00007A, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:46 PLY
    case 0xC18FFD: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/reduce_pp_amtpercent.asm:47 STY @VIRTUAL02
    case 0xC18FFE: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:48 CMP @VIRTUAL02
    case 0xC19000: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:49 BCC @UNKNOWN0
    case 0xC19002: cpu.execute_instruction<0x90>(0x0000D2, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:50 BRA @UNKNOWN3
    case 0xC19004: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:52 LDY @LOCAL02
    case 0xC19006: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:53 LDX @VIRTUAL04
    case 0xC19008: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:54 JSL UNKNOWN_C3ED2C
    case 0xC1900A: cpu.execute_instruction<0x22>(0xC3ED2C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/reduce_pp_amtpercent.asm:56 END_C_FUNCTION
    case 0xC1900E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/reduce_pp_amtpercent.asm:56 END_C_FUNCTION
    case 0xC1900F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/remove_item_from_inventory.asm (source_named).
bool execute_miscellaneous_remove_item_from_inventory_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/remove_item_from_inventory.asm:3 BEGIN_C_FUNCTION
    case 0xC18C27: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/remove_item_from_inventory.asm:12 END_STACK_VARS
    case 0xC18C29: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/remove_item_from_inventory.asm:12 END_STACK_VARS
    case 0xC18C2A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/remove_item_from_inventory.asm:12 END_STACK_VARS
    case 0xC18C2B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/remove_item_from_inventory.asm:12 END_STACK_VARS
    case 0xC18C2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/remove_item_from_inventory.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC18C2C.
    case 0xC18C2E: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/remove_item_from_inventory.asm:12 END_STACK_VARS
    case 0xC18C2F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/remove_item_from_inventory.asm:12 END_STACK_VARS
    case 0xC18C30: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:13 TXY
    case 0xC18C31: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:14 STY @LOCAL03
    case 0xC18C32: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/misc/remove_item_from_inventory.asm:15 TAX
    case 0xC18C34: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:16 DEC
    case 0xC18C35: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:17 STA @VIRTUAL02
    case 0xC18C36: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:18 LDY #.SIZEOF(char_struct)
    case 0xC18C38: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/remove_item_from_inventory.asm:18 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC18C38.
    case 0xC18C3A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/remove_item_from_inventory.asm:19 JSL MULT168
    case 0xC18C3B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/remove_item_from_inventory.asm:20 TAX
    case 0xC18C3F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:21 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC18C40: cpu.execute_instruction<0xBD>(0x0099FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:22 AND #$00FF
    case 0xC18C43: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC18C43.
    case 0xC18C45: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/remove_item_from_inventory.asm:23 STA @VIRTUAL04
    case 0xC18C46: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:24 LDY @LOCAL03
    case 0xC18C48: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/remove_item_from_inventory.asm:25 TYA
    case 0xC18C4A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:26 CMP @VIRTUAL04
    case 0xC18C4B: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:27 BNE @UNKNOWN0
    case 0xC18C4D: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/misc/remove_item_from_inventory.asm:28 LDX #0
    case 0xC18C4F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:28 LDX #0
    // Overlapping static entry reached from 0xC18C4F.
    case 0xC18C51: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/misc/remove_item_from_inventory.asm:29 LDA @VIRTUAL02
    case 0xC18C52: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:30 INC
    case 0xC18C54: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:31 JSL CHANGE_EQUIPPED_WEAPON
    case 0xC18C55: cpu.execute_instruction<0x22>(0xC4577D, 4); return true;
    // src/misc/remove_item_from_inventory.asm:32 BRA @UNKNOWN3
    case 0xC18C59: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/misc/remove_item_from_inventory.asm:34 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC18C5B: cpu.execute_instruction<0xBD>(0x009A00, 3); return true;
    // src/misc/remove_item_from_inventory.asm:35 AND #$00FF
    case 0xC18C5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC18C5E.
    case 0xC18C60: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/remove_item_from_inventory.asm:36 STA @VIRTUAL04
    case 0xC18C61: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:37 TYA
    case 0xC18C63: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:38 CMP @VIRTUAL04
    case 0xC18C64: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:39 BNE @UNKNOWN1
    case 0xC18C66: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/misc/remove_item_from_inventory.asm:40 LDX #0
    case 0xC18C68: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:40 LDX #0
    // Overlapping static entry reached from 0xC18C68.
    case 0xC18C6A: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/misc/remove_item_from_inventory.asm:41 LDA @VIRTUAL02
    case 0xC18C6B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:42 INC
    case 0xC18C6D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:43 JSL CHANGE_EQUIPPED_BODY
    case 0xC18C6E: cpu.execute_instruction<0x22>(0xC457CA, 4); return true;
    // src/misc/remove_item_from_inventory.asm:44 BRA @UNKNOWN3
    case 0xC18C72: cpu.execute_instruction<0x80>(0x000030, 2); return true;
    // src/misc/remove_item_from_inventory.asm:46 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC18C74: cpu.execute_instruction<0xBD>(0x009A01, 3); return true;
    // src/misc/remove_item_from_inventory.asm:47 AND #$00FF
    case 0xC18C77: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC18C77.
    case 0xC18C79: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/remove_item_from_inventory.asm:48 STA @VIRTUAL04
    case 0xC18C7A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:49 TYA
    case 0xC18C7C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:50 CMP @VIRTUAL04
    case 0xC18C7D: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:51 BNE @UNKNOWN2
    case 0xC18C7F: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/misc/remove_item_from_inventory.asm:52 LDX #0
    case 0xC18C81: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:52 LDX #0
    // Overlapping static entry reached from 0xC18C81.
    case 0xC18C83: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/misc/remove_item_from_inventory.asm:53 LDA @VIRTUAL02
    case 0xC18C84: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:54 INC
    case 0xC18C86: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:55 JSL CHANGE_EQUIPPED_ARMS
    case 0xC18C87: cpu.execute_instruction<0x22>(0xC45815, 4); return true;
    // src/misc/remove_item_from_inventory.asm:56 BRA @UNKNOWN3
    case 0xC18C8B: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/misc/remove_item_from_inventory.asm:58 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC18C8D: cpu.execute_instruction<0xBD>(0x009A02, 3); return true;
    // src/misc/remove_item_from_inventory.asm:59 AND #$00FF
    case 0xC18C90: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC18C90.
    case 0xC18C92: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/remove_item_from_inventory.asm:60 STA @VIRTUAL04
    case 0xC18C93: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:61 TYA
    case 0xC18C95: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:62 CMP @VIRTUAL04
    case 0xC18C96: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:63 BNE @UNKNOWN3
    case 0xC18C98: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/misc/remove_item_from_inventory.asm:64 LDX #0
    case 0xC18C9A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:64 LDX #0
    // Overlapping static entry reached from 0xC18C9A.
    case 0xC18C9C: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/misc/remove_item_from_inventory.asm:65 LDA @VIRTUAL02
    case 0xC18C9D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:66 INC
    case 0xC18C9F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:67 JSL CHANGE_EQUIPPED_OTHER
    case 0xC18CA0: cpu.execute_instruction<0x22>(0xC45860, 4); return true;
    // src/misc/remove_item_from_inventory.asm:69 LDA @VIRTUAL02
    case 0xC18CA4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:70 LDY #.SIZEOF(char_struct)
    case 0xC18CA6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/remove_item_from_inventory.asm:70 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC18CA6.
    case 0xC18CA8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/remove_item_from_inventory.asm:71 JSL MULT168
    case 0xC18CA9: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/remove_item_from_inventory.asm:72 CLC
    case 0xC18CAD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:73 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::WEAPON
    case 0xC18CAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000FF, 2); else cpu.execute_instruction<0x69>(0x0099FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:73 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::WEAPON
    // Overlapping static entry reached from 0xC18CAE.
    case 0xC18CB0: cpu.execute_instruction<0x99>(0x00E2AA, 3); return true;
    // src/misc/remove_item_from_inventory.asm:74 TAX
    case 0xC18CB1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xC18CB2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:75 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC18CB0.
    case 0xC18CB3: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/misc/remove_item_from_inventory.asm:76 LDA __BSS_START__,X
    case 0xC18CB4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:76 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC18CB3.
    case 0xC18CB6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/remove_item_from_inventory.asm:77 STA @LOCAL02
    case 0xC18CB7: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/misc/remove_item_from_inventory.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC18CB9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:79 AND #$00FF
    case 0xC18CBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC18CBB.
    case 0xC18CBD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/remove_item_from_inventory.asm:80 STA @VIRTUAL04
    case 0xC18CBE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:81 LDY @LOCAL03
    case 0xC18CC0: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/remove_item_from_inventory.asm:82 TYA
    case 0xC18CC2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:83 CMP @VIRTUAL04
    case 0xC18CC3: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:84 BCS @UNKNOWN4
    case 0xC18CC5: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/misc/remove_item_from_inventory.asm:85 SEP #PROC_FLAGS::ACCUM8
    case 0xC18CC7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:86 LDA @LOCAL02
    case 0xC18CC9: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/misc/remove_item_from_inventory.asm:87 DEC
    case 0xC18CCB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:88 STA __BSS_START__,X
    case 0xC18CCC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:90 REP #PROC_FLAGS::ACCUM8
    case 0xC18CCF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:91 LDA @VIRTUAL02
    case 0xC18CD1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:92 LDY #.SIZEOF(char_struct)
    case 0xC18CD3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/remove_item_from_inventory.asm:92 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC18CD3.
    case 0xC18CD5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/remove_item_from_inventory.asm:93 JSL MULT168
    case 0xC18CD6: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/remove_item_from_inventory.asm:94 CLC
    case 0xC18CDA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:95 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::BODY
    case 0xC18CDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x009A00, 3); return true;
    // src/misc/remove_item_from_inventory.asm:95 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::BODY
    // Overlapping static entry reached from 0xC18CDB.
    case 0xC18CDD: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:96 TAX
    case 0xC18CDE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:97 SEP #PROC_FLAGS::ACCUM8
    case 0xC18CDF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:98 LDA __BSS_START__,X
    case 0xC18CE1: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:99 STA @LOCAL02
    case 0xC18CE4: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/misc/remove_item_from_inventory.asm:100 REP #PROC_FLAGS::ACCUM8
    case 0xC18CE6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:101 AND #$00FF
    case 0xC18CE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:101 AND #$00FF
    // Overlapping static entry reached from 0xC18CE8.
    case 0xC18CEA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/remove_item_from_inventory.asm:102 STA @VIRTUAL04
    case 0xC18CEB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:103 LDY @LOCAL03
    case 0xC18CED: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/remove_item_from_inventory.asm:104 TYA
    case 0xC18CEF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:105 CMP @VIRTUAL04
    case 0xC18CF0: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:106 BCS @UNKNOWN5
    case 0xC18CF2: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/misc/remove_item_from_inventory.asm:107 SEP #PROC_FLAGS::ACCUM8
    case 0xC18CF4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:108 LDA @LOCAL02
    case 0xC18CF6: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/misc/remove_item_from_inventory.asm:109 DEC
    case 0xC18CF8: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:110 STA __BSS_START__,X
    case 0xC18CF9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:112 REP #PROC_FLAGS::ACCUM8
    case 0xC18CFC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:113 LDA @VIRTUAL02
    case 0xC18CFE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:114 LDY #.SIZEOF(char_struct)
    case 0xC18D00: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/remove_item_from_inventory.asm:114 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC18D00.
    case 0xC18D02: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/remove_item_from_inventory.asm:115 JSL MULT168
    case 0xC18D03: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/remove_item_from_inventory.asm:116 CLC
    case 0xC18D07: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:117 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::ARMS
    case 0xC18D08: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000001, 2); else cpu.execute_instruction<0x69>(0x009A01, 3); return true;
    // src/misc/remove_item_from_inventory.asm:117 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::ARMS
    // Overlapping static entry reached from 0xC18D08.
    case 0xC18D0A: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:118 TAX
    case 0xC18D0B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:119 SEP #PROC_FLAGS::ACCUM8
    case 0xC18D0C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:120 LDA __BSS_START__,X
    case 0xC18D0E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:121 STA @LOCAL02
    case 0xC18D11: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/misc/remove_item_from_inventory.asm:122 REP #PROC_FLAGS::ACCUM8
    case 0xC18D13: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:123 AND #$00FF
    case 0xC18D15: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:123 AND #$00FF
    // Overlapping static entry reached from 0xC18D15.
    case 0xC18D17: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/remove_item_from_inventory.asm:124 STA @VIRTUAL04
    case 0xC18D18: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:125 LDY @LOCAL03
    case 0xC18D1A: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/remove_item_from_inventory.asm:126 TYA
    case 0xC18D1C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:127 CMP @VIRTUAL04
    case 0xC18D1D: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:128 BCS @UNKNOWN6
    case 0xC18D1F: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/misc/remove_item_from_inventory.asm:129 SEP #PROC_FLAGS::ACCUM8
    case 0xC18D21: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:130 LDA @LOCAL02
    case 0xC18D23: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/misc/remove_item_from_inventory.asm:131 DEC
    case 0xC18D25: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:132 STA __BSS_START__,X
    case 0xC18D26: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:134 REP #PROC_FLAGS::ACCUM8
    case 0xC18D29: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:135 LDA @VIRTUAL02
    case 0xC18D2B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:136 LDY #.SIZEOF(char_struct)
    case 0xC18D2D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/remove_item_from_inventory.asm:136 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC18D2D.
    case 0xC18D2F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/remove_item_from_inventory.asm:137 JSL MULT168
    case 0xC18D30: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/remove_item_from_inventory.asm:138 CLC
    case 0xC18D34: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:139 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::OTHER
    case 0xC18D35: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x009A02, 3); return true;
    // src/misc/remove_item_from_inventory.asm:139 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::OTHER
    // Overlapping static entry reached from 0xC18D35.
    case 0xC18D37: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:140 TAX
    case 0xC18D38: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:141 SEP #PROC_FLAGS::ACCUM8
    case 0xC18D39: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:142 LDA __BSS_START__,X
    case 0xC18D3B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:143 STA @LOCAL02
    case 0xC18D3E: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/misc/remove_item_from_inventory.asm:144 REP #PROC_FLAGS::ACCUM8
    case 0xC18D40: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:145 AND #$00FF
    case 0xC18D42: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:145 AND #$00FF
    // Overlapping static entry reached from 0xC18D42.
    case 0xC18D44: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/remove_item_from_inventory.asm:146 STA @VIRTUAL04
    case 0xC18D45: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:147 LDY @LOCAL03
    case 0xC18D47: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/remove_item_from_inventory.asm:148 TYA
    case 0xC18D49: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:149 CMP @VIRTUAL04
    case 0xC18D4A: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:150 BCS @UNKNOWN7
    case 0xC18D4C: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/misc/remove_item_from_inventory.asm:151 SEP #PROC_FLAGS::ACCUM8
    case 0xC18D4E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:152 LDA @LOCAL02
    case 0xC18D50: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/misc/remove_item_from_inventory.asm:153 DEC
    case 0xC18D52: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:154 STA __BSS_START__,X
    case 0xC18D53: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:156 REP #PROC_FLAGS::ACCUM8
    case 0xC18D56: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:157 TYA
    case 0xC18D58: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:158 DEC
    case 0xC18D59: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:159 STA @VIRTUAL04
    case 0xC18D5A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:160 LDA @VIRTUAL02
    case 0xC18D5C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:161 LDY #.SIZEOF(char_struct)
    case 0xC18D5E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/remove_item_from_inventory.asm:161 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC18D5E.
    case 0xC18D60: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/remove_item_from_inventory.asm:162 JSL MULT168
    case 0xC18D61: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/remove_item_from_inventory.asm:162 JSL MULT168
    // Overlapping static entry reached from 0xC18DDD.
    case 0xC18D64: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000018, 2); else cpu.execute_instruction<0xC0>(0x006918, 3); return true;
    // src/misc/remove_item_from_inventory.asm:163 CLC
    case 0xC18D65: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:164 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC18D66: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/misc/remove_item_from_inventory.asm:164 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC18D64.
    case 0xC18D67: cpu.execute_instruction<0xF1>(0x000099, 2); return true;
    // src/misc/remove_item_from_inventory.asm:164 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC18D66.
    case 0xC18D68: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/misc/remove_item_from_inventory.asm:165 CLC
    case 0xC18D69: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:166 ADC @VIRTUAL04
    case 0xC18D6A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:166 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC18D68.
    case 0xC18D6B: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/misc/remove_item_from_inventory.asm:167 TAX
    case 0xC18D6C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:168 SEP #PROC_FLAGS::ACCUM8
    case 0xC18D6D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:169 LDA __BSS_START__,X
    case 0xC18D6F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:170 STA @VIRTUAL00
    case 0xC18D72: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/misc/remove_item_from_inventory.asm:171 BRA @UNKNOWN9
    case 0xC18D74: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/misc/remove_item_from_inventory.asm:173 TYA
    case 0xC18D76: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:174 DEC
    case 0xC18D77: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:175 STA @VIRTUAL04
    case 0xC18D78: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:176 LDX @LOCAL01
    case 0xC18D7A: cpu.execute_instruction<0xA6>(0x00000F, 2); return true;
    // src/misc/remove_item_from_inventory.asm:177 TXA
    case 0xC18D7C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:178 CLC
    case 0xC18D7D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:179 ADC @VIRTUAL04
    case 0xC18D7E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:180 TAX
    case 0xC18D80: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:181 SEP #PROC_FLAGS::ACCUM8
    case 0xC18D81: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:182 LDA @LOCAL00
    case 0xC18D83: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/remove_item_from_inventory.asm:183 STA __BSS_START__,X
    case 0xC18D85: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:184 INY
    case 0xC18D88: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:185 STY @LOCAL03
    case 0xC18D89: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/misc/remove_item_from_inventory.asm:187 LDY @LOCAL03
    case 0xC18D8B: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/remove_item_from_inventory.asm:188 CPY #14
    case 0xC18D8D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00000E, 2); else cpu.execute_instruction<0xC0>(0x00000E, 3); return true;
    // src/misc/remove_item_from_inventory.asm:188 CPY #14
    // Overlapping static entry reached from 0xC18D8D.
    case 0xC18D8F: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/misc/remove_item_from_inventory.asm:189 BCS @UNKNOWN10
    case 0xC18D90: cpu.execute_instruction<0xB0>(0x000029, 2); return true;
    // src/misc/remove_item_from_inventory.asm:190 REP #PROC_FLAGS::ACCUM8
    case 0xC18D92: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:191 LDA @VIRTUAL02
    case 0xC18D94: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:192 LDY #.SIZEOF(char_struct)
    case 0xC18D96: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/remove_item_from_inventory.asm:192 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC18D96.
    case 0xC18D98: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/remove_item_from_inventory.asm:193 JSL MULT168
    case 0xC18D99: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/remove_item_from_inventory.asm:194 CLC
    case 0xC18D9D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:195 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC18D9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/misc/remove_item_from_inventory.asm:195 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC18D9E.
    case 0xC18DA0: cpu.execute_instruction<0x99>(0x0086AA, 3); return true;
    // src/misc/remove_item_from_inventory.asm:196 TAX
    case 0xC18DA1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:197 STX @LOCAL01
    case 0xC18DA2: cpu.execute_instruction<0x86>(0x00000F, 2); return true;
    // src/misc/remove_item_from_inventory.asm:197 STX @LOCAL01
    // Overlapping static entry reached from 0xC18DA0.
    case 0xC18DA3: cpu.execute_instruction<0x0F>(0x8412A4, 4); return true;
    // src/misc/remove_item_from_inventory.asm:198 LDY @LOCAL03
    case 0xC18DA4: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/remove_item_from_inventory.asm:199 STY @VIRTUAL04
    case 0xC18DA6: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:199 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC18DA3.
    case 0xC18DA7: cpu.execute_instruction<0x04>(0x00008A, 2); return true;
    // src/misc/remove_item_from_inventory.asm:200 TXA
    case 0xC18DA8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:201 CLC
    case 0xC18DA9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:202 ADC @VIRTUAL04
    case 0xC18DAA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:203 TAX
    case 0xC18DAC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:204 SEP #PROC_FLAGS::ACCUM8
    case 0xC18DAD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:205 LDA __BSS_START__,X
    case 0xC18DAF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:206 STA @LOCAL00
    case 0xC18DB2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/remove_item_from_inventory.asm:207 REP #PROC_FLAGS::ACCUM8
    case 0xC18DB4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:208 AND #$00FF
    case 0xC18DB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:208 AND #$00FF
    // Overlapping static entry reached from 0xC18DB6.
    case 0xC18DB8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/remove_item_from_inventory.asm:209 BNE @UNKNOWN8
    case 0xC18DB9: cpu.execute_instruction<0xD0>(0x0000BB, 2); return true;
    // src/misc/remove_item_from_inventory.asm:211 REP #PROC_FLAGS::ACCUM8
    case 0xC18DBB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:212 TYA
    case 0xC18DBD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:213 DEC
    case 0xC18DBE: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:214 STA @VIRTUAL04
    case 0xC18DBF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:215 LDA @VIRTUAL02
    case 0xC18DC1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:216 LDY #.SIZEOF(char_struct)
    case 0xC18DC3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/remove_item_from_inventory.asm:216 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC18DC3.
    case 0xC18DC5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/remove_item_from_inventory.asm:217 JSL MULT168
    case 0xC18DC6: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/remove_item_from_inventory.asm:218 CLC
    case 0xC18DCA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:219 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC18DCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/misc/remove_item_from_inventory.asm:219 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC18DCB.
    case 0xC18DCD: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/misc/remove_item_from_inventory.asm:220 CLC
    case 0xC18DCE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:221 ADC @VIRTUAL04
    case 0xC18DCF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:221 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC18DCD.
    case 0xC18DD0: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/misc/remove_item_from_inventory.asm:222 TAX
    case 0xC18DD1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:223 SEP #PROC_FLAGS::ACCUM8
    case 0xC18DD2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:224 LDA #0
    case 0xC18DD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/misc/remove_item_from_inventory.asm:225 STA __BSS_START__,X
    case 0xC18DD6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:225 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC18DD4.
    case 0xC18DD7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/remove_item_from_inventory.asm:226 REP #PROC_FLAGS::ACCUM8
    case 0xC18DD9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/remove_item_from_inventory.asm:227 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC18DDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x005000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/remove_item_from_inventory.asm:227 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC18DDB.
    case 0xC18DDD: cpu.execute_instruction<0x50>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/remove_item_from_inventory.asm:227 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC18DDE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/remove_item_from_inventory.asm:227 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC18DDD.
    case 0xC18DDF: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/remove_item_from_inventory.asm:227 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC18DE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/remove_item_from_inventory.asm:227 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC18DDF.
    case 0xC18DE1: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/remove_item_from_inventory.asm:227 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC18DE0.
    case 0xC18DE2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/remove_item_from_inventory.asm:227 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC18DE3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/remove_item_from_inventory.asm:228 LDA @VIRTUAL00
    case 0xC18DE5: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/misc/remove_item_from_inventory.asm:229 AND #$00FF
    case 0xC18DE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:229 AND #$00FF
    // Overlapping static entry reached from 0xC18DE7.
    case 0xC18DE9: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/remove_item_from_inventory.asm:230 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18DEA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/remove_item_from_inventory.asm:230 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC18DEA.
    case 0xC18DEC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/misc/remove_item_from_inventory.asm:230 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18DED: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/remove_item_from_inventory.asm:231 STA @LOCAL03
    case 0xC18DF1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/misc/remove_item_from_inventory.asm:232 CLC
    case 0xC18DF3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:233 ADC #item::type
    case 0xC18DF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000019, 2); else cpu.execute_instruction<0x69>(0x000019, 3); return true;
    // src/misc/remove_item_from_inventory.asm:233 ADC #item::type
    // Overlapping static entry reached from 0xC18DF4.
    case 0xC18DF6: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/misc/remove_item_from_inventory.asm:234 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC18DF7: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/misc/remove_item_from_inventory.asm:234 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC18DF9: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/misc/remove_item_from_inventory.asm:234 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC18DFB: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/misc/remove_item_from_inventory.asm:234 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC18DFD: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/misc/remove_item_from_inventory.asm:235 CLC
    case 0xC18DFF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:236 ADC @VIRTUAL0A
    case 0xC18E00: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/remove_item_from_inventory.asm:237 STA @VIRTUAL0A
    case 0xC18E02: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/remove_item_from_inventory.asm:238 LDA [@VIRTUAL0A]
    case 0xC18E04: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/remove_item_from_inventory.asm:239 AND #$00FF
    case 0xC18E06: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:239 AND #$00FF
    // Overlapping static entry reached from 0xC18E06.
    case 0xC18E08: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/misc/remove_item_from_inventory.asm:240 CMP #ITEM_TYPE::TEDDY_BEAR
    case 0xC18E09: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/misc/remove_item_from_inventory.asm:240 CMP #ITEM_TYPE::TEDDY_BEAR
    // Overlapping static entry reached from 0xC18E09.
    case 0xC18E0B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/remove_item_from_inventory.asm:241 BNE @UNKNOWN11
    case 0xC18E0C: cpu.execute_instruction<0xD0>(0x000023, 2); return true;
    // src/misc/remove_item_from_inventory.asm:242 LDA @LOCAL03
    case 0xC18E0E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/misc/remove_item_from_inventory.asm:243 CLC
    case 0xC18E10: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:244 ADC #item::params + item_parameters::strength
    case 0xC18E11: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001F, 2); else cpu.execute_instruction<0x69>(0x00001F, 3); return true;
    // src/misc/remove_item_from_inventory.asm:244 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC18E11.
    case 0xC18E13: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/remove_item_from_inventory.asm:245 CLC
    case 0xC18E14: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:246 ADC @VIRTUAL06
    case 0xC18E15: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/remove_item_from_inventory.asm:247 STA @VIRTUAL06
    case 0xC18E17: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/misc/remove_item_from_inventory.asm:248 SEP #PROC_FLAGS::ACCUM8
    case 0xC18E19: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:249 LDA [@VIRTUAL06]
    case 0xC18E1B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/misc/remove_item_from_inventory.asm:250 REP #PROC_FLAGS::ACCUM8
    case 0xC18E1D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:251 SEC
    case 0xC18E1F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:252 AND #$00FF
    case 0xC18E20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:252 AND #$00FF
    // Overlapping static entry reached from 0xC18E20.
    case 0xC18E22: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/misc/remove_item_from_inventory.asm:253 SBC #$0080
    case 0xC18E23: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/misc/remove_item_from_inventory.asm:253 SBC #$0080
    // Overlapping static entry reached from 0xC18E23.
    case 0xC18E25: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/misc/remove_item_from_inventory.asm:254 EOR #$FF80
    case 0xC18E26: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/misc/remove_item_from_inventory.asm:254 EOR #$FF80
    // Overlapping static entry reached from 0xC18E26.
    case 0xC18E28: cpu.execute_instruction<0xFF>(0x29BB22, 4); return true;
    // src/misc/remove_item_from_inventory.asm:255 JSL REMOVE_CHAR_FROM_PARTY
    case 0xC18E29: cpu.execute_instruction<0x22>(0xC229BB, 4); return true;
    // src/misc/remove_item_from_inventory.asm:255 JSL REMOVE_CHAR_FROM_PARTY
    // Overlapping static entry reached from 0xC18E28.
    case 0xC18E2C: cpu.execute_instruction<0xC2>(0x000022, 2); return true;
    // src/misc/remove_item_from_inventory.asm:256 JSL UNKNOWN_C216DB
    case 0xC18E2D: cpu.execute_instruction<0x22>(0xC216DB, 4); return true;
    // src/misc/remove_item_from_inventory.asm:256 JSL UNKNOWN_C216DB
    // Overlapping static entry reached from 0xC18E2C.
    case 0xC18E2E: cpu.execute_instruction<0xDB>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:258 LDA @VIRTUAL00
    case 0xC18E31: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/misc/remove_item_from_inventory.asm:259 AND #$00FF
    case 0xC18E33: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:259 AND #$00FF
    // Overlapping static entry reached from 0xC18E33.
    case 0xC18E35: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/remove_item_from_inventory.asm:260 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18E36: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/misc/remove_item_from_inventory.asm:260 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC18E36.
    case 0xC18E38: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/misc/remove_item_from_inventory.asm:260 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18E39: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/remove_item_from_inventory.asm:261 CLC
    case 0xC18E3D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:262 ADC #item::flags
    case 0xC18E3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00001C, 3); return true;
    // src/misc/remove_item_from_inventory.asm:262 ADC #item::flags
    // Overlapping static entry reached from 0xC18E3E.
    case 0xC18E40: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/remove_item_from_inventory.asm:263 TAX
    case 0xC18E41: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:264 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC18E42: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/misc/remove_item_from_inventory.asm:265 AND #$00FF
    case 0xC18E46: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:265 AND #$00FF
    // Overlapping static entry reached from 0xC18E46.
    case 0xC18E48: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/misc/remove_item_from_inventory.asm:266 AND #ITEM_FLAGS::TRANSFORM
    case 0xC18E49: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x000010, 3); return true;
    // src/misc/remove_item_from_inventory.asm:266 AND #ITEM_FLAGS::TRANSFORM
    // Overlapping static entry reached from 0xC18E49.
    case 0xC18E4B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/remove_item_from_inventory.asm:267 BEQ @UNKNOWN12
    case 0xC18E4C: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/misc/remove_item_from_inventory.asm:268 SEP #PROC_FLAGS::ACCUM8
    case 0xC18E4E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:269 LDA @VIRTUAL00
    case 0xC18E50: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/misc/remove_item_from_inventory.asm:270 JSL UNKNOWN_C3EB1C
    case 0xC18E52: cpu.execute_instruction<0x22>(0xC3EB1C, 4); return true;
    // src/misc/remove_item_from_inventory.asm:272 LDA @VIRTUAL02
    case 0xC18E56: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:273 INC
    case 0xC18E58: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/remove_item_from_inventory.asm:274 END_C_FUNCTION
    case 0xC18E59: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/remove_item_from_inventory.asm:274 END_C_FUNCTION
    case 0xC18E5A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/remove_item_from_inventory_redirect.asm (source_named).
bool execute_miscellaneous_remove_item_from_inventory_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/remove_item_from_inventory_redirect.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1DDC6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/misc/remove_item_from_inventory_redirect.asm:4 JSR REMOVE_ITEM_FROM_INVENTORY
    case 0xC1DDC8: cpu.execute_instruction<0x20>(0x008C27, 3); return true;
    // src/misc/remove_item_from_inventory_redirect.asm:5 RTL
    case 0xC1DDCB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/reset_char_level_one.asm (source_named).
bool execute_miscellaneous_reset_char_level_one_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/reset_char_level_one.asm:3 BEGIN_C_FUNCTION
    case 0xC1D8D0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/reset_char_level_one.asm:10 END_STACK_VARS
    case 0xC1D8D2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/reset_char_level_one.asm:10 END_STACK_VARS
    case 0xC1D8D3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/reset_char_level_one.asm:10 END_STACK_VARS
    case 0xC1D8D4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/reset_char_level_one.asm:10 END_STACK_VARS
    case 0xC1D8D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/reset_char_level_one.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1D8D5.
    case 0xC1D8D7: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/reset_char_level_one.asm:10 END_STACK_VARS
    case 0xC1D8D8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/reset_char_level_one.asm:10 END_STACK_VARS
    case 0xC1D8D9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:11 STY @VIRTUAL04
    case 0xC1D8DA: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/misc/reset_char_level_one.asm:11 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC1D8D7.
    case 0xC1D8DB: cpu.execute_instruction<0x04>(0x000086, 2); return true;
    // src/misc/reset_char_level_one.asm:12 STX @VIRTUAL02
    case 0xC1D8DC: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/reset_char_level_one.asm:12 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC1D8DB.
    case 0xC1D8DD: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/reset_char_level_one.asm:13 TAX
    case 0xC1D8DE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:14 DEX
    case 0xC1D8DF: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:15 TXA
    case 0xC1D8E0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:16 LDY #.SIZEOF(char_struct)
    case 0xC1D8E1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/reset_char_level_one.asm:16 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D8E1.
    case 0xC1D8E3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/reset_char_level_one.asm:17 JSL MULT168
    case 0xC1D8E4: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/reset_char_level_one.asm:18 TAY
    case 0xC1D8E8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D8E9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/reset_char_level_one.asm:20 LDA #STARTING_LEVEL
    case 0xC1D8EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009901, 3); return true;
    // src/misc/reset_char_level_one.asm:21 STA PARTY_CHARACTERS+char_struct::level,Y
    case 0xC1D8ED: cpu.execute_instruction<0x99>(0x0099D3, 3); return true;
    // src/misc/reset_char_level_one.asm:21 STA PARTY_CHARACTERS+char_struct::level,Y
    // Overlapping static entry reached from 0xC1D8EB.
    case 0xC1D8EE: cpu.execute_instruction<0xD3>(0x000099, 2); return true;
    // src/misc/reset_char_level_one.asm:22 LDA #STARTING_STATS
    case 0xC1D8F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x009902, 3); return true;
    // src/misc/reset_char_level_one.asm:23 STA PARTY_CHARACTERS+char_struct::base_offense,Y
    case 0xC1D8F2: cpu.execute_instruction<0x99>(0x0099EA, 3); return true;
    // src/misc/reset_char_level_one.asm:23 STA PARTY_CHARACTERS+char_struct::base_offense,Y
    // Overlapping static entry reached from 0xC1D8F0.
    case 0xC1D8F3: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:23 STA PARTY_CHARACTERS+char_struct::base_offense,Y
    // Overlapping static entry reached from 0xC1D8F3.
    case 0xC1D8F4: cpu.execute_instruction<0x99>(0x00EB99, 3); return true;
    // src/misc/reset_char_level_one.asm:24 STA PARTY_CHARACTERS+char_struct::base_defense,Y
    case 0xC1D8F5: cpu.execute_instruction<0x99>(0x0099EB, 3); return true;
    // src/misc/reset_char_level_one.asm:24 STA PARTY_CHARACTERS+char_struct::base_defense,Y
    // Overlapping static entry reached from 0xC1D8F4.
    case 0xC1D8F7: cpu.execute_instruction<0x99>(0x00EC99, 3); return true;
    // src/misc/reset_char_level_one.asm:25 STA PARTY_CHARACTERS+char_struct::base_speed,Y
    case 0xC1D8F8: cpu.execute_instruction<0x99>(0x0099EC, 3); return true;
    // src/misc/reset_char_level_one.asm:25 STA PARTY_CHARACTERS+char_struct::base_speed,Y
    // Overlapping static entry reached from 0xC1D8F7.
    case 0xC1D8FA: cpu.execute_instruction<0x99>(0x00ED99, 3); return true;
    // src/misc/reset_char_level_one.asm:26 STA PARTY_CHARACTERS+char_struct::base_guts,Y
    case 0xC1D8FB: cpu.execute_instruction<0x99>(0x0099ED, 3); return true;
    // src/misc/reset_char_level_one.asm:26 STA PARTY_CHARACTERS+char_struct::base_guts,Y
    // Overlapping static entry reached from 0xC1D8FA.
    case 0xC1D8FD: cpu.execute_instruction<0x99>(0x00EE99, 3); return true;
    // src/misc/reset_char_level_one.asm:27 STA PARTY_CHARACTERS+char_struct::base_luck,Y
    case 0xC1D8FE: cpu.execute_instruction<0x99>(0x0099EE, 3); return true;
    // src/misc/reset_char_level_one.asm:27 STA PARTY_CHARACTERS+char_struct::base_luck,Y
    // Overlapping static entry reached from 0xC1D8FD.
    case 0xC1D900: cpu.execute_instruction<0x99>(0x00EF99, 3); return true;
    // src/misc/reset_char_level_one.asm:28 STA PARTY_CHARACTERS+char_struct::base_vitality,Y
    case 0xC1D901: cpu.execute_instruction<0x99>(0x0099EF, 3); return true;
    // src/misc/reset_char_level_one.asm:28 STA PARTY_CHARACTERS+char_struct::base_vitality,Y
    // Overlapping static entry reached from 0xC1D900.
    case 0xC1D903: cpu.execute_instruction<0x99>(0x00F099, 3); return true;
    // src/misc/reset_char_level_one.asm:29 STA PARTY_CHARACTERS+char_struct::base_iq,Y
    case 0xC1D904: cpu.execute_instruction<0x99>(0x0099F0, 3); return true;
    // src/misc/reset_char_level_one.asm:29 STA PARTY_CHARACTERS+char_struct::base_iq,Y
    // Overlapping static entry reached from 0xC1D903.
    case 0xC1D906: cpu.execute_instruction<0x99>(0x0020C2, 3); return true;
    // src/misc/reset_char_level_one.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC1D907: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/reset_char_level_one.asm:31 LDA #STARTING_HP
    case 0xC1D909: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00001E, 3); return true;
    // src/misc/reset_char_level_one.asm:31 LDA #STARTING_HP
    // Overlapping static entry reached from 0xC1D909.
    case 0xC1D90B: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/misc/reset_char_level_one.asm:32 STA PARTY_CHARACTERS+char_struct::max_hp,Y
    case 0xC1D90C: cpu.execute_instruction<0x99>(0x0099D8, 3); return true;
    // src/misc/reset_char_level_one.asm:33 STA PARTY_CHARACTERS+char_struct::current_hp_target,Y
    case 0xC1D90F: cpu.execute_instruction<0x99>(0x009A15, 3); return true;
    // src/misc/reset_char_level_one.asm:34 STA PARTY_CHARACTERS+char_struct::current_hp,Y
    case 0xC1D912: cpu.execute_instruction<0x99>(0x009A13, 3); return true;
    // src/misc/reset_char_level_one.asm:35 CPX #2
    case 0xC1D915: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/misc/reset_char_level_one.asm:35 CPX #2
    // Overlapping static entry reached from 0xC1D915.
    case 0xC1D917: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/reset_char_level_one.asm:36 BEQ @UNKNOWN0
    case 0xC1D918: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/misc/reset_char_level_one.asm:37 LDA #STARTING_PP
    case 0xC1D91A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/misc/reset_char_level_one.asm:37 LDA #STARTING_PP
    // Overlapping static entry reached from 0xC1D91A.
    case 0xC1D91C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/reset_char_level_one.asm:38 STA @LOCAL01
    case 0xC1D91D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/reset_char_level_one.asm:39 BRA @UNKNOWN1
    case 0xC1D91F: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/misc/reset_char_level_one.asm:41 LDA #STARTING_PP_JEFF
    case 0xC1D921: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/reset_char_level_one.asm:41 LDA #STARTING_PP_JEFF
    // Overlapping static entry reached from 0xC1D921.
    case 0xC1D923: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/reset_char_level_one.asm:42 STA @LOCAL01
    case 0xC1D924: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/reset_char_level_one.asm:44 TXA
    case 0xC1D926: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:45 LDY #.SIZEOF(char_struct)
    case 0xC1D927: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/reset_char_level_one.asm:45 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D927.
    case 0xC1D929: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/reset_char_level_one.asm:46 JSL MULT168
    case 0xC1D92A: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/reset_char_level_one.asm:47 TAY
    case 0xC1D92E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:48 LDA @LOCAL01
    case 0xC1D92F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/reset_char_level_one.asm:49 STA PARTY_CHARACTERS+char_struct::max_pp,Y
    case 0xC1D931: cpu.execute_instruction<0x99>(0x0099DA, 3); return true;
    // src/misc/reset_char_level_one.asm:50 STA PARTY_CHARACTERS+char_struct::current_pp_target,Y
    case 0xC1D934: cpu.execute_instruction<0x99>(0x009A1B, 3); return true;
    // src/misc/reset_char_level_one.asm:51 STA PARTY_CHARACTERS+char_struct::current_pp,Y
    case 0xC1D937: cpu.execute_instruction<0x99>(0x009A19, 3); return true;
    // src/misc/reset_char_level_one.asm:52 TXY
    case 0xC1D93A: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:53 INY
    case 0xC1D93B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:54 STY @LOCAL00
    case 0xC1D93C: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/reset_char_level_one.asm:55 TYA
    case 0xC1D93E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:56 JSL RECALC_CHARACTER_POSTMATH_OFFENSE
    case 0xC1D93F: cpu.execute_instruction<0x22>(0xC21857, 4); return true;
    // src/misc/reset_char_level_one.asm:57 LDY @LOCAL00
    case 0xC1D943: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/reset_char_level_one.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC1D945: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/reset_char_level_one.asm:59 TYA
    case 0xC1D947: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:60 JSL RECALC_CHARACTER_POSTMATH_DEFENSE
    case 0xC1D948: cpu.execute_instruction<0x22>(0xC2192B, 4); return true;
    // src/misc/reset_char_level_one.asm:61 LDY @LOCAL00
    case 0xC1D94C: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/reset_char_level_one.asm:62 REP #PROC_FLAGS::ACCUM8
    case 0xC1D94E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/reset_char_level_one.asm:63 TYA
    case 0xC1D950: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:64 JSL RECALC_CHARACTER_POSTMATH_SPEED
    case 0xC1D951: cpu.execute_instruction<0x22>(0xC21AEB, 4); return true;
    // src/misc/reset_char_level_one.asm:65 LDY @LOCAL00
    case 0xC1D955: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/reset_char_level_one.asm:66 REP #PROC_FLAGS::ACCUM8
    case 0xC1D957: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/reset_char_level_one.asm:67 TYA
    case 0xC1D959: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:68 JSL RECALC_CHARACTER_POSTMATH_GUTS
    case 0xC1D95A: cpu.execute_instruction<0x22>(0xC21BA4, 4); return true;
    // src/misc/reset_char_level_one.asm:69 LDY @LOCAL00
    case 0xC1D95E: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/reset_char_level_one.asm:70 REP #PROC_FLAGS::ACCUM8
    case 0xC1D960: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/reset_char_level_one.asm:71 TYA
    case 0xC1D962: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:72 JSL RECALC_CHARACTER_POSTMATH_LUCK
    case 0xC1D963: cpu.execute_instruction<0x22>(0xC21C5D, 4); return true;
    // src/misc/reset_char_level_one.asm:73 LDY @LOCAL00
    case 0xC1D967: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/reset_char_level_one.asm:74 REP #PROC_FLAGS::ACCUM8
    case 0xC1D969: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/reset_char_level_one.asm:75 TYA
    case 0xC1D96B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:76 JSL RECALC_CHARACTER_POSTMATH_VITALITY
    case 0xC1D96C: cpu.execute_instruction<0x22>(0xC21D65, 4); return true;
    // src/misc/reset_char_level_one.asm:77 LDY @LOCAL00
    case 0xC1D970: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/reset_char_level_one.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC1D972: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/reset_char_level_one.asm:79 TYA
    case 0xC1D974: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:80 JSL RECALC_CHARACTER_POSTMATH_IQ
    case 0xC1D975: cpu.execute_instruction<0x22>(0xC21D7D, 4); return true;
    // src/misc/reset_char_level_one.asm:81 BRA @UNKNOWN3
    case 0xC1D979: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/misc/reset_char_level_one.asm:83 LDX #0
    case 0xC1D97B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/reset_char_level_one.asm:83 LDX #0
    // Overlapping static entry reached from 0xC1D97B.
    case 0xC1D97D: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/misc/reset_char_level_one.asm:84 LDY @LOCAL00
    case 0xC1D97E: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/reset_char_level_one.asm:85 TYA
    case 0xC1D980: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:86 JSR LEVEL_UP_CHAR
    case 0xC1D981: cpu.execute_instruction<0x20>(0x00D109, 3); return true;
    // src/misc/reset_char_level_one.asm:88 REP #PROC_FLAGS::ACCUM8
    case 0xC1D984: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/reset_char_level_one.asm:89 LDA @VIRTUAL02
    case 0xC1D986: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/reset_char_level_one.asm:90 DEC
    case 0xC1D988: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:91 STA @VIRTUAL02
    case 0xC1D989: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/reset_char_level_one.asm:92 BNE @UNKNOWN2
    case 0xC1D98B: cpu.execute_instruction<0xD0>(0x0000EE, 2); return true;
    // src/misc/reset_char_level_one.asm:93 LDA @VIRTUAL04
    case 0xC1D98D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/misc/reset_char_level_one.asm:94 BEQ @UNKNOWN4
    case 0xC1D98F: cpu.execute_instruction<0xF0>(0x000056, 2); return true;
    // src/misc/reset_char_level_one.asm:95 LDY @LOCAL00
    case 0xC1D991: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/reset_char_level_one.asm:96 TYX
    case 0xC1D993: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:97 DEX
    case 0xC1D994: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:98 STX @LOCAL01
    case 0xC1D995: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/misc/reset_char_level_one.asm:99 TXA
    case 0xC1D997: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:100 LDY #.SIZEOF(char_struct)
    case 0xC1D998: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/reset_char_level_one.asm:100 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D998.
    case 0xC1D99A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/reset_char_level_one.asm:101 JSL MULT168
    case 0xC1D99B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/reset_char_level_one.asm:102 STA @LOCAL00
    case 0xC1D99F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/reset_char_level_one.asm:103 LOADPTR EXP_TABLE, @VIRTUAL0A
    case 0xC1D9A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000049, 2); else cpu.execute_instruction<0xA9>(0x008F49, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/reset_char_level_one.asm:103 LOADPTR EXP_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1D9A1.
    case 0xC1D9A3: cpu.execute_instruction<0x8F>(0xA90A85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/reset_char_level_one.asm:103 LOADPTR EXP_TABLE, @VIRTUAL0A
    case 0xC1D9A4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/reset_char_level_one.asm:103 LOADPTR EXP_TABLE, @VIRTUAL0A
    case 0xC1D9A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/reset_char_level_one.asm:103 LOADPTR EXP_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1D9A3.
    case 0xC1D9A7: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/reset_char_level_one.asm:103 LOADPTR EXP_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1D9A6.
    case 0xC1D9A8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/reset_char_level_one.asm:103 LOADPTR EXP_TABLE, @VIRTUAL0A
    case 0xC1D9A9: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/misc/reset_char_level_one.asm:104 LDA @LOCAL00
    case 0xC1D9AB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/reset_char_level_one.asm:105 TAX
    case 0xC1D9AD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:106 LDA PARTY_CHARACTERS+char_struct::level,X
    case 0xC1D9AE: cpu.execute_instruction<0xBD>(0x0099D3, 3); return true;
    // src/misc/reset_char_level_one.asm:107 AND #$00FF
    case 0xC1D9B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/reset_char_level_one.asm:107 AND #$00FF
    // Overlapping static entry reached from 0xC1D9B1.
    case 0xC1D9B3: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/misc/reset_char_level_one.asm:108 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1D9B4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/misc/reset_char_level_one.asm:108 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1D9B5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:109 STA @VIRTUAL02
    case 0xC1D9B6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/reset_char_level_one.asm:110 LDY #(MAX_LEVEL+1) * 4
    case 0xC1D9B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000090, 2); else cpu.execute_instruction<0xA0>(0x000190, 3); return true;
    // src/misc/reset_char_level_one.asm:110 LDY #(MAX_LEVEL+1) * 4
    // Overlapping static entry reached from 0xC1D9B8.
    case 0xC1D9BA: cpu.execute_instruction<0x01>(0x0000A6, 2); return true;
    // src/misc/reset_char_level_one.asm:111 LDX @LOCAL01
    case 0xC1D9BB: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/misc/reset_char_level_one.asm:111 LDX @LOCAL01
    // Overlapping static entry reached from 0xC1D9BA.
    case 0xC1D9BC: cpu.execute_instruction<0x10>(0x00008A, 2); return true;
    // src/misc/reset_char_level_one.asm:112 TXA
    case 0xC1D9BD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:113 JSL MULT16
    case 0xC1D9BE: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/misc/reset_char_level_one.asm:114 CLC
    case 0xC1D9C2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:115 ADC @VIRTUAL02
    case 0xC1D9C3: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/reset_char_level_one.asm:116 CLC
    case 0xC1D9C5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:117 ADC @VIRTUAL0A
    case 0xC1D9C6: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/reset_char_level_one.asm:118 STA @VIRTUAL0A
    case 0xC1D9C8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/misc/reset_char_level_one.asm:119 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1D9CA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/misc/reset_char_level_one.asm:119 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1D9CA.
    case 0xC1D9CC: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/misc/reset_char_level_one.asm:119 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1D9CD: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/misc/reset_char_level_one.asm:119 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1D9CF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/misc/reset_char_level_one.asm:119 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1D9D0: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/misc/reset_char_level_one.asm:119 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1D9D2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/misc/reset_char_level_one.asm:119 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1D9D4: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/misc/reset_char_level_one.asm:120 LDA @LOCAL00
    case 0xC1D9D6: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/reset_char_level_one.asm:121 CLC
    case 0xC1D9D8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:122 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::exp
    case 0xC1D9D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0099D4, 3); return true;
    // src/misc/reset_char_level_one.asm:122 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::exp
    // Overlapping static entry reached from 0xC1D9D9.
    case 0xC1D9DB: cpu.execute_instruction<0x99>(0x00A5A8, 3); return true;
    // src/misc/reset_char_level_one.asm:123 TAY
    case 0xC1D9DC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/misc/reset_char_level_one.asm:124 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1D9DD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/misc/reset_char_level_one.asm:124 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC1D9DB.
    case 0xC1D9DE: cpu.execute_instruction<0x06>(0x000099, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/misc/reset_char_level_one.asm:124 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1D9DF: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/misc/reset_char_level_one.asm:124 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC1D9DE.
    case 0xC1D9E0: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/misc/reset_char_level_one.asm:124 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1D9E2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/misc/reset_char_level_one.asm:124 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1D9E4: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/reset_char_level_one.asm:126 END_C_FUNCTION
    case 0xC1D9E7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/reset_char_level_one.asm:126 END_C_FUNCTION
    case 0xC1D9E8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/reset_hppp_rolling.asm (source_named).
bool execute_miscellaneous_reset_hppp_rolling_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/reset_hppp_rolling.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC20F9A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/reset_hppp_rolling.asm:6 END_STACK_VARS
    case 0xC20F9C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/reset_hppp_rolling.asm:6 END_STACK_VARS
    case 0xC20F9D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/reset_hppp_rolling.asm:6 END_STACK_VARS
    case 0xC20F9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/reset_hppp_rolling.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC20F9E.
    case 0xC20FA0: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/reset_hppp_rolling.asm:6 END_STACK_VARS
    case 0xC20FA1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/misc/reset_hppp_rolling.asm:7 LDA #0
    case 0xC20FA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/reset_hppp_rolling.asm:7 LDA #0
    // Overlapping static entry reached from 0xC20FA2.
    case 0xC20FA4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/reset_hppp_rolling.asm:8 STA @VIRTUAL02
    case 0xC20FA5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/reset_hppp_rolling.asm:9 BRA @UNKNOWN4
    case 0xC20FA7: cpu.execute_instruction<0x80>(0x00006D, 2); return true;
    // src/misc/reset_hppp_rolling.asm:18 LDX @VIRTUAL02
    case 0xC20FA9: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/reset_hppp_rolling.asm:19 LDA GAME_STATE + game_state::party_members,X
    case 0xC20FAB: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/misc/reset_hppp_rolling.asm:21 AND #$00FF
    case 0xC20FAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/reset_hppp_rolling.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC20FAE.
    case 0xC20FB0: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/misc/reset_hppp_rolling.asm:22 DEC
    case 0xC20FB1: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/reset_hppp_rolling.asm:23 LDY #.SIZEOF(char_struct)
    case 0xC20FB2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/reset_hppp_rolling.asm:23 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC20FB2.
    case 0xC20FB4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/reset_hppp_rolling.asm:24 JSL MULT168
    case 0xC20FB5: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/reset_hppp_rolling.asm:25 CLC
    case 0xC20FB9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/reset_hppp_rolling.asm:26 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC20FBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/misc/reset_hppp_rolling.asm:26 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC20FBA.
    case 0xC20FBC: cpu.execute_instruction<0x99>(0x00B9A8, 3); return true;
    // src/misc/reset_hppp_rolling.asm:27 TAY
    case 0xC20FBD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/reset_hppp_rolling.asm:28 LDA a:char_struct::afflictions,Y
    case 0xC20FBE: cpu.execute_instruction<0xB9>(0x00000E, 3); return true;
    // src/misc/reset_hppp_rolling.asm:28 LDA a:char_struct::afflictions,Y
    // Overlapping static entry reached from 0xC20FBC.
    case 0xC20FBF: cpu.execute_instruction<0x0E>(0x002900, 3); return true;
    // src/misc/reset_hppp_rolling.asm:29 AND #$00FF
    case 0xC20FC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/reset_hppp_rolling.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC20FBF.
    case 0xC20FC2: cpu.execute_instruction<0xFF>(0x01C900, 4); return true;
    // src/misc/reset_hppp_rolling.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC20FC1.
    case 0xC20FC3: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/misc/reset_hppp_rolling.asm:30 CMP #1
    case 0xC20FC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/misc/reset_hppp_rolling.asm:30 CMP #1
    // Overlapping static entry reached from 0xC20FC4.
    case 0xC20FC6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/reset_hppp_rolling.asm:31 BEQ @UNKNOWN1
    case 0xC20FC7: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/misc/reset_hppp_rolling.asm:32 LDA a:char_struct::current_hp,Y
    case 0xC20FC9: cpu.execute_instruction<0xB9>(0x000045, 3); return true;
    // src/misc/reset_hppp_rolling.asm:33 BNE @UNKNOWN1
    case 0xC20FCC: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/misc/reset_hppp_rolling.asm:34 LDA #1
    case 0xC20FCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/reset_hppp_rolling.asm:34 LDA #1
    // Overlapping static entry reached from 0xC20FCE.
    case 0xC20FD0: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/misc/reset_hppp_rolling.asm:35 STA a:char_struct::current_hp_target,Y
    case 0xC20FD1: cpu.execute_instruction<0x99>(0x000047, 3); return true;
    // src/misc/reset_hppp_rolling.asm:37 LDA a:char_struct::current_hp_fraction,Y
    case 0xC20FD4: cpu.execute_instruction<0xB9>(0x000043, 3); return true;
    // src/misc/reset_hppp_rolling.asm:38 BEQ @UNKNOWN2
    case 0xC20FD7: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/misc/reset_hppp_rolling.asm:39 LDA a:char_struct::current_hp,Y
    case 0xC20FD9: cpu.execute_instruction<0xB9>(0x000045, 3); return true;
    // src/misc/reset_hppp_rolling.asm:40 STA @LOCAL00
    case 0xC20FDC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/reset_hppp_rolling.asm:41 TYA
    case 0xC20FDE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/reset_hppp_rolling.asm:42 CLC
    case 0xC20FDF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/reset_hppp_rolling.asm:43 ADC #char_struct::current_hp_target
    case 0xC20FE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000047, 2); else cpu.execute_instruction<0x69>(0x000047, 3); return true;
    // src/misc/reset_hppp_rolling.asm:43 ADC #char_struct::current_hp_target
    // Overlapping static entry reached from 0xC20FE0.
    case 0xC20FE2: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/reset_hppp_rolling.asm:44 TAX
    case 0xC20FE3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/reset_hppp_rolling.asm:45 LDA __BSS_START__,X
    case 0xC20FE4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/reset_hppp_rolling.asm:46 STA @VIRTUAL04
    case 0xC20FE7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/reset_hppp_rolling.asm:47 LDA @LOCAL00
    case 0xC20FE9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/reset_hppp_rolling.asm:48 CMP @VIRTUAL04
    case 0xC20FEB: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/misc/reset_hppp_rolling.asm:49 BLTEQ @UNKNOWN2
    case 0xC20FED: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/misc/reset_hppp_rolling.asm:49 BLTEQ @UNKNOWN2
    case 0xC20FEF: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/misc/reset_hppp_rolling.asm:50 STA __BSS_START__,X
    case 0xC20FF1: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/reset_hppp_rolling.asm:52 LDA a:char_struct::current_pp_fraction,Y
    case 0xC20FF4: cpu.execute_instruction<0xB9>(0x000049, 3); return true;
    // src/misc/reset_hppp_rolling.asm:53 BEQ @UNKNOWN3
    case 0xC20FF7: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/misc/reset_hppp_rolling.asm:54 LDA a:char_struct::current_pp,Y
    case 0xC20FF9: cpu.execute_instruction<0xB9>(0x00004B, 3); return true;
    // src/misc/reset_hppp_rolling.asm:55 STA @LOCAL00
    case 0xC20FFC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/reset_hppp_rolling.asm:56 TYA
    case 0xC20FFE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/reset_hppp_rolling.asm:57 CLC
    case 0xC20FFF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/reset_hppp_rolling.asm:58 ADC #char_struct::current_pp_target
    case 0xC21000: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004D, 2); else cpu.execute_instruction<0x69>(0x00004D, 3); return true;
    // src/misc/reset_hppp_rolling.asm:58 ADC #char_struct::current_pp_target
    // Overlapping static entry reached from 0xC21000.
    case 0xC21002: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/reset_hppp_rolling.asm:59 TAX
    case 0xC21003: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/reset_hppp_rolling.asm:60 LDA __BSS_START__,X
    case 0xC21004: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/reset_hppp_rolling.asm:61 STA @VIRTUAL04
    case 0xC21007: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/reset_hppp_rolling.asm:62 LDA @LOCAL00
    case 0xC21009: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/reset_hppp_rolling.asm:63 CMP @VIRTUAL04
    case 0xC2100B: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/misc/reset_hppp_rolling.asm:64 BLTEQ @UNKNOWN3
    case 0xC2100D: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/misc/reset_hppp_rolling.asm:64 BLTEQ @UNKNOWN3
    case 0xC2100F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/misc/reset_hppp_rolling.asm:65 STA __BSS_START__,X
    case 0xC21011: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/reset_hppp_rolling.asm:67 INC @VIRTUAL02
    case 0xC21014: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/reset_hppp_rolling.asm:69 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC21016: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/misc/reset_hppp_rolling.asm:70 AND #$00FF
    case 0xC21019: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/reset_hppp_rolling.asm:70 AND #$00FF
    // Overlapping static entry reached from 0xC21019.
    case 0xC2101B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/reset_hppp_rolling.asm:71 STA @VIRTUAL04
    case 0xC2101C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/reset_hppp_rolling.asm:72 LDA @VIRTUAL02
    case 0xC2101E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/reset_hppp_rolling.asm:73 CMP @VIRTUAL04
    case 0xC21020: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/misc/reset_hppp_rolling.asm:74 BCCL @UNKNOWN0
    case 0xC21022: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/misc/reset_hppp_rolling.asm:74 BCCL @UNKNOWN0
    case 0xC21024: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/misc/reset_hppp_rolling.asm:74 BCCL @UNKNOWN0
    case 0xC21026: cpu.execute_instruction<0x4C>(0x000FA9, 3); return true;
    // src/misc/reset_hppp_rolling.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xC21029: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/reset_hppp_rolling.asm:76 LDA #1
    case 0xC2102B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/misc/reset_hppp_rolling.asm:77 STA FASTEST_HPPP_METER_SPEED
    case 0xC2102D: cpu.execute_instruction<0x8D>(0x009696, 3); return true;
    // src/misc/reset_hppp_rolling.asm:77 STA FASTEST_HPPP_METER_SPEED
    // Overlapping static entry reached from 0xC2102B.
    case 0xC2102E: cpu.execute_instruction<0x96>(0x000096, 2); return true;
    // src/misc/reset_hppp_rolling.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC21030: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/reset_hppp_rolling.asm:79 END_C_FUNCTION
    case 0xC21032: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/reset_hppp_rolling.asm:79 END_C_FUNCTION
    case 0xC21033: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/save_game.asm (source_named).
bool execute_miscellaneous_save_game_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/save_game.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC22A2C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/misc/save_game.asm:4 LDA CURRENT_SAVE_SLOT
    case 0xC22A2E: cpu.execute_instruction<0xAD>(0x00B4A1, 3); return true;
    // src/misc/save_game.asm:5 AND #$00FF
    case 0xC22A31: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/save_game.asm:5 AND #$00FF
    // Overlapping static entry reached from 0xC22A31.
    case 0xC22A33: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/misc/save_game.asm:6 DEC
    case 0xC22A34: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/save_game.asm:7 JSL SAVE_GAME_SLOT
    case 0xC22A35: cpu.execute_instruction<0x22>(0xEF0A4D, 4); return true;
    // src/misc/save_game.asm:8 RTL
    case 0xC22A39: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/set_teleport_box_destination.asm (source_named).
bool execute_miscellaneous_set_teleport_box_destination_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/set_teleport_box_destination.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC230F3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/misc/set_teleport_box_destination.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC230F5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/set_teleport_box_destination.asm:5 STA GAME_STATE + game_state::unknownC3
    case 0xC230F7: cpu.execute_instruction<0x8D>(0x0098B8, 3); return true;
    // src/misc/set_teleport_box_destination.asm:6 REP #PROC_FLAGS::ACCUM8
    case 0xC230FA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/set_teleport_box_destination.asm:7 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC230FC: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/misc/set_teleport_box_destination.asm:8 STA RESPAWN_X
    case 0xC230FF: cpu.execute_instruction<0x8D>(0x009D1F, 3); return true;
    // src/misc/set_teleport_box_destination.asm:9 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC23102: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/misc/set_teleport_box_destination.asm:10 STA RESPAWN_Y
    case 0xC23105: cpu.execute_instruction<0x8D>(0x009D21, 3); return true;
    // src/misc/set_teleport_box_destination.asm:11 RTL
    case 0xC23108: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/take_item_from_character.asm (source_named).
bool execute_miscellaneous_take_item_from_character_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/take_item_from_character.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC18EAD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/take_item_from_character.asm:10 END_STACK_VARS
    case 0xC18EAF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/take_item_from_character.asm:10 END_STACK_VARS
    case 0xC18EB0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/take_item_from_character.asm:10 END_STACK_VARS
    case 0xC18EB1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/take_item_from_character.asm:10 END_STACK_VARS
    case 0xC18EB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/take_item_from_character.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC18EB2.
    case 0xC18EB4: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/take_item_from_character.asm:10 END_STACK_VARS
    case 0xC18EB5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/take_item_from_character.asm:10 END_STACK_VARS
    case 0xC18EB6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/take_item_from_character.asm:11 STX @VIRTUAL04
    case 0xC18EB7: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/misc/take_item_from_character.asm:11 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC18EB4.
    case 0xC18EB8: cpu.execute_instruction<0x04>(0x0000C9, 2); return true;
    // src/misc/take_item_from_character.asm:12 CMP #$00FF
    case 0xC18EB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/misc/take_item_from_character.asm:12 CMP #$00FF
    // Overlapping static entry reached from 0xC18EB8.
    case 0xC18EBA: cpu.execute_instruction<0xFF>(0x49D000, 4); return true;
    // src/misc/take_item_from_character.asm:12 CMP #$00FF
    // Overlapping static entry reached from 0xC18EB9.
    case 0xC18EBB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/take_item_from_character.asm:13 BNE @UNKNOWN3
    case 0xC18EBC: cpu.execute_instruction<0xD0>(0x000049, 2); return true;
    // src/misc/take_item_from_character.asm:14 LDA #0
    case 0xC18EBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/take_item_from_character.asm:14 LDA #0
    // Overlapping static entry reached from 0xC18EBE.
    case 0xC18EC0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/take_item_from_character.asm:15 STA @VIRTUAL02
    case 0xC18EC1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/take_item_from_character.asm:16 STA @LOCAL01
    case 0xC18EC3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/take_item_from_character.asm:17 BRA @UNKNOWN2
    case 0xC18EC5: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // src/misc/take_item_from_character.asm:19 LDA @LOCAL01
    case 0xC18EC7: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/take_item_from_character.asm:20 STA @VIRTUAL02
    case 0xC18EC9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/take_item_from_character.asm:21 CLC
    case 0xC18ECB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/take_item_from_character.asm:27 ADC #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC18ECC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006F, 2); else cpu.execute_instruction<0x69>(0x00986F, 3); return true;
    // src/misc/take_item_from_character.asm:27 ADC #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC18ECC.
    case 0xC18ECE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/take_item_from_character.asm:29 TAY
    case 0xC18ECF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/take_item_from_character.asm:30 STY @LOCAL00
    case 0xC18ED0: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/take_item_from_character.asm:31 LDX @VIRTUAL04
    case 0xC18ED2: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/take_item_from_character.asm:32 LDA __BSS_START__,Y
    case 0xC18ED4: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/take_item_from_character.asm:33 AND #$00FF
    case 0xC18ED7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/take_item_from_character.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC18ED7.
    case 0xC18ED9: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/misc/take_item_from_character.asm:34 JSR TAKE_ITEM_FROM_SPECIFIC_CHARACTER
    case 0xC18EDA: cpu.execute_instruction<0x20>(0x008E5B, 3); return true;
    // src/misc/take_item_from_character.asm:35 CMP #0
    case 0xC18EDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/misc/take_item_from_character.asm:35 CMP #0
    // Overlapping static entry reached from 0xC18EDD.
    case 0xC18EDF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/take_item_from_character.asm:36 BEQ @UNKNOWN1
    case 0xC18EE0: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/misc/take_item_from_character.asm:37 LDY @LOCAL00
    case 0xC18EE2: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/take_item_from_character.asm:38 LDA __BSS_START__,Y
    case 0xC18EE4: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/take_item_from_character.asm:39 AND #$00FF
    case 0xC18EE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/take_item_from_character.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC18EE7.
    case 0xC18EE9: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/take_item_from_character.asm:40 BRA @UNKNOWN4
    case 0xC18EEA: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/misc/take_item_from_character.asm:42 INC @VIRTUAL02
    case 0xC18EEC: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/take_item_from_character.asm:43 LDA @VIRTUAL02
    case 0xC18EEE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/take_item_from_character.asm:44 STA @LOCAL01
    case 0xC18EF0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/take_item_from_character.asm:46 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC18EF2: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/misc/take_item_from_character.asm:47 AND #$00FF
    case 0xC18EF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/take_item_from_character.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC18EF5.
    case 0xC18EF7: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/misc/take_item_from_character.asm:48 PHA
    case 0xC18EF8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/take_item_from_character.asm:49 LDA @VIRTUAL02
    case 0xC18EF9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/take_item_from_character.asm:50 PLY
    case 0xC18EFB: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/take_item_from_character.asm:51 STY @VIRTUAL02
    case 0xC18EFC: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/take_item_from_character.asm:52 CMP @VIRTUAL02
    case 0xC18EFE: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/take_item_from_character.asm:53 BCC @UNKNOWN0
    case 0xC18F00: cpu.execute_instruction<0x90>(0x0000C5, 2); return true;
    // src/misc/take_item_from_character.asm:54 LDA #0
    case 0xC18F02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/take_item_from_character.asm:54 LDA #0
    // Overlapping static entry reached from 0xC18F02.
    case 0xC18F04: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/take_item_from_character.asm:55 BRA @UNKNOWN4
    case 0xC18F05: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/misc/take_item_from_character.asm:57 LDX @VIRTUAL04
    case 0xC18F07: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/take_item_from_character.asm:58 JSR TAKE_ITEM_FROM_SPECIFIC_CHARACTER
    case 0xC18F09: cpu.execute_instruction<0x20>(0x008E5B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/take_item_from_character.asm:60 END_C_FUNCTION
    case 0xC18F0C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/take_item_from_character.asm:60 END_C_FUNCTION
    case 0xC18F0D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/take_item_from_specific_character.asm (source_named).
bool execute_miscellaneous_take_item_from_specific_character_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/take_item_from_specific_character.asm:3 BEGIN_C_FUNCTION
    case 0xC18E5B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/take_item_from_specific_character.asm:9 END_STACK_VARS
    case 0xC18E5D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/take_item_from_specific_character.asm:9 END_STACK_VARS
    case 0xC18E5E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/take_item_from_specific_character.asm:9 END_STACK_VARS
    case 0xC18E5F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/take_item_from_specific_character.asm:9 END_STACK_VARS
    case 0xC18E60: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/take_item_from_specific_character.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC18E60.
    case 0xC18E62: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/take_item_from_specific_character.asm:9 END_STACK_VARS
    case 0xC18E63: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/take_item_from_specific_character.asm:9 END_STACK_VARS
    case 0xC18E64: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/take_item_from_specific_character.asm:10 STX @VIRTUAL04
    case 0xC18E65: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/misc/take_item_from_specific_character.asm:10 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC18E62.
    case 0xC18E66: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/misc/take_item_from_specific_character.asm:11 TAX
    case 0xC18E67: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/take_item_from_specific_character.asm:12 DEC
    case 0xC18E68: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/take_item_from_specific_character.asm:13 STA @LOCAL00
    case 0xC18E69: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/take_item_from_specific_character.asm:14 LDA #0
    case 0xC18E6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/take_item_from_specific_character.asm:14 LDA #0
    // Overlapping static entry reached from 0xC18E6B.
    case 0xC18E6D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/take_item_from_specific_character.asm:15 STA @VIRTUAL02
    case 0xC18E6E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/take_item_from_specific_character.asm:16 BRA @UNKNOWN2
    case 0xC18E70: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/misc/take_item_from_specific_character.asm:18 LDA @LOCAL00
    case 0xC18E72: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/take_item_from_specific_character.asm:19 LDY #.SIZEOF(char_struct)
    case 0xC18E74: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/misc/take_item_from_specific_character.asm:19 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC18E74.
    case 0xC18E76: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/take_item_from_specific_character.asm:20 JSL MULT168
    case 0xC18E77: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/misc/take_item_from_specific_character.asm:21 CLC
    case 0xC18E7B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/take_item_from_specific_character.asm:22 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC18E7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/misc/take_item_from_specific_character.asm:22 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC18E7C.
    case 0xC18E7E: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/misc/take_item_from_specific_character.asm:23 CLC
    case 0xC18E7F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/take_item_from_specific_character.asm:24 ADC @VIRTUAL02
    case 0xC18E80: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/take_item_from_specific_character.asm:24 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC18E7E.
    case 0xC18E81: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/take_item_from_specific_character.asm:25 TAX
    case 0xC18E82: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/take_item_from_specific_character.asm:26 LDA __BSS_START__,X
    case 0xC18E83: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/take_item_from_specific_character.asm:27 AND #$00FF
    case 0xC18E86: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/take_item_from_specific_character.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC18E86.
    case 0xC18E88: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/take_item_from_specific_character.asm:28 CMP @VIRTUAL04
    case 0xC18E89: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/take_item_from_specific_character.asm:29 BNE @UNKNOWN1
    case 0xC18E8B: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/misc/take_item_from_specific_character.asm:30 LDX @VIRTUAL02
    case 0xC18E8D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/take_item_from_specific_character.asm:31 INX
    case 0xC18E8F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/take_item_from_specific_character.asm:32 LDA @LOCAL00
    case 0xC18E90: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/take_item_from_specific_character.asm:33 INC
    case 0xC18E92: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/take_item_from_specific_character.asm:34 JSR REMOVE_ITEM_FROM_INVENTORY
    case 0xC18E93: cpu.execute_instruction<0x20>(0x008C27, 3); return true;
    // src/misc/take_item_from_specific_character.asm:35 BRA @UNKNOWN5
    case 0xC18E96: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/misc/take_item_from_specific_character.asm:37 INC @VIRTUAL02
    case 0xC18E98: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/take_item_from_specific_character.asm:39 LDA #.SIZEOF(char_struct::items)
    case 0xC18E9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/misc/take_item_from_specific_character.asm:39 LDA #.SIZEOF(char_struct::items)
    // Overlapping static entry reached from 0xC18E9A.
    case 0xC18E9C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/take_item_from_specific_character.asm:40 CLC
    case 0xC18E9D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/take_item_from_specific_character.asm:41 SBC @VIRTUAL02
    case 0xC18E9E: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/misc/take_item_from_specific_character.asm:42 BRANCHGTS @UNKNOWN0
    case 0xC18EA0: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/misc/take_item_from_specific_character.asm:42 BRANCHGTS @UNKNOWN0
    case 0xC18EA2: cpu.execute_instruction<0x10>(0x0000CE, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/misc/take_item_from_specific_character.asm:42 BRANCHGTS @UNKNOWN0
    case 0xC18EA4: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/misc/take_item_from_specific_character.asm:42 BRANCHGTS @UNKNOWN0
    case 0xC18EA6: cpu.execute_instruction<0x30>(0x0000CA, 2); return true;
    // src/misc/take_item_from_specific_character.asm:43 LDA #0
    case 0xC18EA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/take_item_from_specific_character.asm:43 LDA #0
    // Overlapping static entry reached from 0xC18EA8.
    case 0xC18EAA: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/take_item_from_specific_character.asm:45 END_C_FUNCTION
    case 0xC18EAB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/take_item_from_specific_character.asm:45 END_C_FUNCTION
    case 0xC18EAC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/teleport_freezeobjects.asm (source_named).
bool execute_miscellaneous_teleport_freezeobjects_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/teleport_freezeobjects.asm:3 BEGIN_C_FUNCTION
    case 0xC0EA3E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/teleport_freezeobjects.asm:6 END_STACK_VARS
    case 0xC0EA40: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/teleport_freezeobjects.asm:6 END_STACK_VARS
    case 0xC0EA41: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/teleport_freezeobjects.asm:6 END_STACK_VARS
    case 0xC0EA42: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/teleport_freezeobjects.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0EA42.
    case 0xC0EA44: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/teleport_freezeobjects.asm:6 END_STACK_VARS
    case 0xC0EA45: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/misc/teleport_freezeobjects.asm:7 LDA #0
    case 0xC0EA46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/teleport_freezeobjects.asm:7 LDA #0
    // Overlapping static entry reached from 0xC0EA46.
    case 0xC0EA48: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/teleport_freezeobjects.asm:8 STA @LOCAL00
    case 0xC0EA49: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/teleport_freezeobjects.asm:9 BRA @UNKNOWN1
    case 0xC0EA4B: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/misc/teleport_freezeobjects.asm:11 ASL
    case 0xC0EA4D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/teleport_freezeobjects.asm:12 CLC
    case 0xC0EA4E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/teleport_freezeobjects.asm:13 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC0EA4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/misc/teleport_freezeobjects.asm:13 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC0EA4F.
    case 0xC0EA51: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/misc/teleport_freezeobjects.asm:14 TAX
    case 0xC0EA52: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/teleport_freezeobjects.asm:15 LDA __BSS_START__,X
    case 0xC0EA53: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/teleport_freezeobjects.asm:16 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC0EA56: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/misc/teleport_freezeobjects.asm:16 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC0EA56.
    case 0xC0EA58: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/misc/teleport_freezeobjects.asm:17 STA __BSS_START__,X
    case 0xC0EA59: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/teleport_freezeobjects.asm:17 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0EA58.
    case 0xC0EA5A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/teleport_freezeobjects.asm:17 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0EA58.
    case 0xC0EA5B: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/misc/teleport_freezeobjects.asm:18 LDA @LOCAL00
    case 0xC0EA5C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/teleport_freezeobjects.asm:19 INC
    case 0xC0EA5E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/teleport_freezeobjects.asm:20 STA @LOCAL00
    case 0xC0EA5F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/teleport_freezeobjects.asm:22 CMP #23
    case 0xC0EA61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/misc/teleport_freezeobjects.asm:22 CMP #23
    // Overlapping static entry reached from 0xC0EA61.
    case 0xC0EA63: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/misc/teleport_freezeobjects.asm:23 BCC @UNKNOWN0
    case 0xC0EA64: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/teleport_freezeobjects.asm:24 END_C_FUNCTION
    case 0xC0EA66: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/teleport_freezeobjects.asm:24 END_C_FUNCTION
    case 0xC0EA67: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/teleport_freezeobjects2.asm (source_named).
bool execute_miscellaneous_teleport_freezeobjects2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/teleport_freezeobjects2.asm:3 BEGIN_C_FUNCTION
    case 0xC0EA68: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/teleport_freezeobjects2.asm:6 END_STACK_VARS
    case 0xC0EA6A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/teleport_freezeobjects2.asm:6 END_STACK_VARS
    case 0xC0EA6B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/teleport_freezeobjects2.asm:6 END_STACK_VARS
    case 0xC0EA6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/teleport_freezeobjects2.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0EA6C.
    case 0xC0EA6E: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/teleport_freezeobjects2.asm:6 END_STACK_VARS
    case 0xC0EA6F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/misc/teleport_freezeobjects2.asm:7 LDY #0
    case 0xC0EA70: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/misc/teleport_freezeobjects2.asm:7 LDY #0
    // Overlapping static entry reached from 0xC0EA70.
    case 0xC0EA72: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/teleport_freezeobjects2.asm:8 BRA @UNKNOWN2
    case 0xC0EA73: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/misc/teleport_freezeobjects2.asm:10 TYA
    case 0xC0EA75: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/teleport_freezeobjects2.asm:11 ASL
    case 0xC0EA76: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/teleport_freezeobjects2.asm:12 CLC
    case 0xC0EA77: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/teleport_freezeobjects2.asm:13 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC0EA78: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/misc/teleport_freezeobjects2.asm:13 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC0EA78.
    case 0xC0EA7A: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/misc/teleport_freezeobjects2.asm:14 TAX
    case 0xC0EA7B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/teleport_freezeobjects2.asm:15 LDA __BSS_START__,X
    case 0xC0EA7C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/teleport_freezeobjects2.asm:16 STA @LOCAL00
    case 0xC0EA7F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/teleport_freezeobjects2.asm:17 AND #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC0EA81: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00C000, 3); return true;
    // src/misc/teleport_freezeobjects2.asm:17 AND #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC0EA81.
    case 0xC0EA83: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000C9, 2); else cpu.execute_instruction<0xC0>(0x0000C9, 3); return true;
    // src/misc/teleport_freezeobjects2.asm:18 CMP #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC0EA84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x00C000, 3); return true;
    // src/misc/teleport_freezeobjects2.asm:18 CMP #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC0EA83.
    case 0xC0EA85: cpu.execute_instruction<0x00>(0x0000C0, 2); return true;
    // src/misc/teleport_freezeobjects2.asm:18 CMP #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC0EA84.
    case 0xC0EA86: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000F0, 2); else cpu.execute_instruction<0xC0>(0x0008F0, 3); return true;
    // src/misc/teleport_freezeobjects2.asm:19 BEQ @UNKNOWN1
    case 0xC0EA87: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/misc/teleport_freezeobjects2.asm:19 BEQ @UNKNOWN1
    // Overlapping static entry reached from 0xC0EA86.
    case 0xC0EA88: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/misc/teleport_freezeobjects2.asm:20 LDA @LOCAL00
    case 0xC0EA89: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/teleport_freezeobjects2.asm:21 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC0EA8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/misc/teleport_freezeobjects2.asm:21 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC0EA8B.
    case 0xC0EA8D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/misc/teleport_freezeobjects2.asm:22 STA __BSS_START__,X
    case 0xC0EA8E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/teleport_freezeobjects2.asm:22 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0EA8D.
    case 0xC0EA8F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/teleport_freezeobjects2.asm:22 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0EA8D.
    case 0xC0EA90: cpu.execute_instruction<0x00>(0x0000C8, 2); return true;
    // src/misc/teleport_freezeobjects2.asm:24 INY
    case 0xC0EA91: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/teleport_freezeobjects2.asm:26 CPY #23
    case 0xC0EA92: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000017, 2); else cpu.execute_instruction<0xC0>(0x000017, 3); return true;
    // src/misc/teleport_freezeobjects2.asm:26 CPY #23
    // Overlapping static entry reached from 0xC0EA92.
    case 0xC0EA94: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/misc/teleport_freezeobjects2.asm:27 BCC @UNKNOWN0
    case 0xC0EA95: cpu.execute_instruction<0x90>(0x0000DE, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/teleport_freezeobjects2.asm:28 END_C_FUNCTION
    case 0xC0EA97: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/teleport_freezeobjects2.asm:28 END_C_FUNCTION
    case 0xC0EA98: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/teleport_mainloop.asm (source_named).
bool execute_miscellaneous_teleport_mainloop_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/teleport_mainloop.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0EA99: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/teleport_mainloop.asm:7 END_STACK_VARS
    case 0xC0EA9B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/teleport_mainloop.asm:7 END_STACK_VARS
    case 0xC0EA9C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/teleport_mainloop.asm:7 END_STACK_VARS
    case 0xC0EA9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/teleport_mainloop.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0EA9D.
    case 0xC0EA9F: cpu.execute_instruction<0xFF>(0xC6225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/teleport_mainloop.asm:7 END_STACK_VARS
    case 0xC0EAA0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/misc/teleport_mainloop.asm:8 JSL STOP_MUSIC
    case 0xC0EAA1: cpu.execute_instruction<0x22>(0xC0ABC6, 4); return true;
    // src/misc/teleport_mainloop.asm:8 JSL STOP_MUSIC
    // Overlapping static entry reached from 0xC0EA9F.
    case 0xC0EAA3: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/misc/teleport_mainloop.asm:8 JSL STOP_MUSIC
    // Overlapping static entry reached from 0xC0EAA3.
    case 0xC0EAA4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x005622, 3); return true;
    // src/misc/teleport_mainloop.asm:9 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0EAA5: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/misc/teleport_mainloop.asm:9 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC0EAA4.
    case 0xC0EAA6: cpu.execute_instruction<0x56>(0x000087, 2); return true;
    // src/misc/teleport_mainloop.asm:9 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC0EAA4.
    case 0xC0EAA7: cpu.execute_instruction<0x87>(0x0000C0, 2); return true;
    // src/misc/teleport_mainloop.asm:9 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC0EAA6.
    case 0xC0EAA8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x003E20, 3); return true;
    // src/misc/teleport_mainloop.asm:10 JSR TELEPORT_FREEZEOBJECTS
    case 0xC0EAA9: cpu.execute_instruction<0x20>(0x00EA3E, 3); return true;
    // src/misc/teleport_mainloop.asm:10 JSR TELEPORT_FREEZEOBJECTS
    // Overlapping static entry reached from 0xC0EAA8.
    case 0xC0EAAA: cpu.execute_instruction<0x3E>(0x00A9EA, 3); return true;
    // src/misc/teleport_mainloop.asm:10 JSR TELEPORT_FREEZEOBJECTS
    // Overlapping static entry reached from 0xC0EAA8.
    case 0xC0EAAB: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/misc/teleport_mainloop.asm:11 LDA #1
    case 0xC0EAAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/teleport_mainloop.asm:11 LDA #1
    // Overlapping static entry reached from 0xC0EAAA.
    case 0xC0EAAD: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/misc/teleport_mainloop.asm:11 LDA #1
    // Overlapping static entry reached from 0xC0EAAC.
    case 0xC0EAAE: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/misc/teleport_mainloop.asm:12 STA UNREAD_7E5DBA
    case 0xC0EAAF: cpu.execute_instruction<0x8D>(0x005DBA, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/teleport_mainloop.asm:13 MOVE_INT_CONSTANT 0, PSI_TELEPORT_SPEED
    case 0xC0EAB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/teleport_mainloop.asm:13 MOVE_INT_CONSTANT 0, PSI_TELEPORT_SPEED
    // Overlapping static entry reached from 0xC0EAB2.
    case 0xC0EAB4: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/teleport_mainloop.asm:13 MOVE_INT_CONSTANT 0, PSI_TELEPORT_SPEED
    case 0xC0EAB5: cpu.execute_instruction<0x8D>(0x009F45, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/teleport_mainloop.asm:13 MOVE_INT_CONSTANT 0, PSI_TELEPORT_SPEED
    case 0xC0EAB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/teleport_mainloop.asm:13 MOVE_INT_CONSTANT 0, PSI_TELEPORT_SPEED
    // Overlapping static entry reached from 0xC0EAB8.
    case 0xC0EABA: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/teleport_mainloop.asm:13 MOVE_INT_CONSTANT 0, PSI_TELEPORT_SPEED
    case 0xC0EABB: cpu.execute_instruction<0x8D>(0x009F47, 3); return true;
    // src/misc/teleport_mainloop.asm:14 STZ PSI_TELEPORT_STATE
    case 0xC0EABE: cpu.execute_instruction<0x9C>(0x009F43, 3); return true;
    // src/misc/teleport_mainloop.asm:15 JSL UNKNOWN_C07C5B
    case 0xC0EAC1: cpu.execute_instruction<0x22>(0xC07C5B, 4); return true;
    // src/misc/teleport_mainloop.asm:16 JSR UNKNOWN_C0DE46
    case 0xC0EAC5: cpu.execute_instruction<0x20>(0x00DE46, 3); return true;
    // src/misc/teleport_mainloop.asm:17 LDA PSI_TELEPORT_STYLE
    case 0xC0EAC8: cpu.execute_instruction<0xAD>(0x009F41, 3); return true;
    // src/misc/teleport_mainloop.asm:18 CMP #TELEPORT_STYLE::PSI_ALPHA
    case 0xC0EACB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/misc/teleport_mainloop.asm:18 CMP #TELEPORT_STYLE::PSI_ALPHA
    // Overlapping static entry reached from 0xC0EACB.
    case 0xC0EACD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/teleport_mainloop.asm:19 BEQ @STYLE_1_OR_5
    case 0xC0EACE: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/misc/teleport_mainloop.asm:20 CMP #TELEPORT_STYLE::UNKNOWN
    case 0xC0EAD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/misc/teleport_mainloop.asm:20 CMP #TELEPORT_STYLE::UNKNOWN
    // Overlapping static entry reached from 0xC0EAD0.
    case 0xC0EAD2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/teleport_mainloop.asm:21 BEQ @STYLE_1_OR_5
    case 0xC0EAD3: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/misc/teleport_mainloop.asm:22 CMP #TELEPORT_STYLE::PSI_BETA
    case 0xC0EAD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/misc/teleport_mainloop.asm:22 CMP #TELEPORT_STYLE::PSI_BETA
    // Overlapping static entry reached from 0xC0EAD5.
    case 0xC0EAD7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/teleport_mainloop.asm:23 BEQ @STYLE_2
    case 0xC0EAD8: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/misc/teleport_mainloop.asm:24 CMP #TELEPORT_STYLE::INSTANT
    case 0xC0EADA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/misc/teleport_mainloop.asm:24 CMP #TELEPORT_STYLE::INSTANT
    // Overlapping static entry reached from 0xC0EADA.
    case 0xC0EADC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/teleport_mainloop.asm:25 BEQ @STYLE_3
    case 0xC0EADD: cpu.execute_instruction<0xF0>(0x000041, 2); return true;
    // src/misc/teleport_mainloop.asm:26 CMP #TELEPORT_STYLE::PSI_BETTER
    case 0xC0EADF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/misc/teleport_mainloop.asm:26 CMP #TELEPORT_STYLE::PSI_BETTER
    // Overlapping static entry reached from 0xC0EADF.
    case 0xC0EAE1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/teleport_mainloop.asm:27 BEQ @STYLE_4
    case 0xC0EAE2: cpu.execute_instruction<0xF0>(0x000044, 2); return true;
    // src/misc/teleport_mainloop.asm:28 BRA @STYLE_OTHER
    case 0xC0EAE4: cpu.execute_instruction<0x80>(0x00005D, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:30 LOADPTR UNKNOWN_C0E28F, @LOCAL00
    case 0xC0EAE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008F, 2); else cpu.execute_instruction<0xA9>(0x00E28F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:30 LOADPTR UNKNOWN_C0E28F, @LOCAL00
    // Overlapping static entry reached from 0xC0EAE6.
    case 0xC0EAE8: cpu.execute_instruction<0xE2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:30 LOADPTR UNKNOWN_C0E28F, @LOCAL00
    case 0xC0EAE9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:30 LOADPTR UNKNOWN_C0E28F, @LOCAL00
    // Overlapping static entry reached from 0xC0EAE8.
    case 0xC0EAEA: cpu.execute_instruction<0x0E>(0x00C0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:30 LOADPTR UNKNOWN_C0E28F, @LOCAL00
    case 0xC0EAEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:30 LOADPTR UNKNOWN_C0E28F, @LOCAL00
    // Overlapping static entry reached from 0xC0EAEB.
    case 0xC0EAED: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:30 LOADPTR UNKNOWN_C0E28F, @LOCAL00
    case 0xC0EAEE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:31 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0EAF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x00E3C1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:31 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EAF0.
    case 0xC0EAF2: cpu.execute_instruction<0xE3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:31 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0EAF3: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:31 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EAF2.
    case 0xC0EAF4: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:31 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0EAF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:31 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EAF4.
    case 0xC0EAF6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:31 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EAF5.
    case 0xC0EAF7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:31 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0EAF8: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:31 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EAF6.
    case 0xC0EAF9: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // src/misc/teleport_mainloop.asm:32 LDA #23
    case 0xC0EAFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/misc/teleport_mainloop.asm:32 LDA #23
    // Overlapping static entry reached from 0xC0EAF9.
    case 0xC0EAFB: cpu.execute_instruction<0x17>(0x000000, 2); return true;
    // src/misc/teleport_mainloop.asm:32 LDA #23
    // Overlapping static entry reached from 0xC0EAFA.
    case 0xC0EAFC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/teleport_mainloop.asm:33 JSL SET_PARTY_TICK_CALLBACKS
    case 0xC0EAFD: cpu.execute_instruction<0x22>(0xC42F45, 4); return true;
    // src/misc/teleport_mainloop.asm:34 BRA @STYLE_OTHER
    case 0xC0EB01: cpu.execute_instruction<0x80>(0x000040, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:36 LOADPTR UNKNOWN_C0E516, @LOCAL00
    case 0xC0EB03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000016, 2); else cpu.execute_instruction<0xA9>(0x00E516, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:36 LOADPTR UNKNOWN_C0E516, @LOCAL00
    // Overlapping static entry reached from 0xC0EB03.
    case 0xC0EB05: cpu.execute_instruction<0xE5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:36 LOADPTR UNKNOWN_C0E516, @LOCAL00
    case 0xC0EB06: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:36 LOADPTR UNKNOWN_C0E516, @LOCAL00
    // Overlapping static entry reached from 0xC0EB05.
    case 0xC0EB07: cpu.execute_instruction<0x0E>(0x00C0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:36 LOADPTR UNKNOWN_C0E516, @LOCAL00
    case 0xC0EB08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:36 LOADPTR UNKNOWN_C0E516, @LOCAL00
    // Overlapping static entry reached from 0xC0EB08.
    case 0xC0EB0A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:36 LOADPTR UNKNOWN_C0E516, @LOCAL00
    case 0xC0EB0B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:37 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0EB0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x00E3C1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:37 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EB0D.
    case 0xC0EB0F: cpu.execute_instruction<0xE3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:37 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0EB10: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:37 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EB0F.
    case 0xC0EB11: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:37 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0EB12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:37 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EB11.
    case 0xC0EB13: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:37 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EB12.
    case 0xC0EB14: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:37 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0EB15: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:37 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EB13.
    case 0xC0EB16: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // src/misc/teleport_mainloop.asm:38 LDA #23
    case 0xC0EB17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/misc/teleport_mainloop.asm:38 LDA #23
    // Overlapping static entry reached from 0xC0EB16.
    case 0xC0EB18: cpu.execute_instruction<0x17>(0x000000, 2); return true;
    // src/misc/teleport_mainloop.asm:38 LDA #23
    // Overlapping static entry reached from 0xC0EB17.
    case 0xC0EB19: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/teleport_mainloop.asm:39 JSL SET_PARTY_TICK_CALLBACKS
    case 0xC0EB1A: cpu.execute_instruction<0x22>(0xC42F45, 4); return true;
    // src/misc/teleport_mainloop.asm:40 BRA @STYLE_OTHER
    case 0xC0EB1E: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/misc/teleport_mainloop.asm:42 LDA #1
    case 0xC0EB20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/teleport_mainloop.asm:42 LDA #1
    // Overlapping static entry reached from 0xC0EB20.
    case 0xC0EB22: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/misc/teleport_mainloop.asm:43 STA PSI_TELEPORT_STATE
    case 0xC0EB23: cpu.execute_instruction<0x8D>(0x009F43, 3); return true;
    // src/misc/teleport_mainloop.asm:44 BRA @STYLE_OTHER
    case 0xC0EB26: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:46 LOADPTR UNKNOWN_C0E516, @LOCAL00
    case 0xC0EB28: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000016, 2); else cpu.execute_instruction<0xA9>(0x00E516, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:46 LOADPTR UNKNOWN_C0E516, @LOCAL00
    // Overlapping static entry reached from 0xC0EB28.
    case 0xC0EB2A: cpu.execute_instruction<0xE5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:46 LOADPTR UNKNOWN_C0E516, @LOCAL00
    case 0xC0EB2B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:46 LOADPTR UNKNOWN_C0E516, @LOCAL00
    // Overlapping static entry reached from 0xC0EB2A.
    case 0xC0EB2C: cpu.execute_instruction<0x0E>(0x00C0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:46 LOADPTR UNKNOWN_C0E516, @LOCAL00
    case 0xC0EB2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:46 LOADPTR UNKNOWN_C0E516, @LOCAL00
    // Overlapping static entry reached from 0xC0EB2D.
    case 0xC0EB2F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:46 LOADPTR UNKNOWN_C0E516, @LOCAL00
    case 0xC0EB30: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:47 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0EB32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x00E3C1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:47 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EB32.
    case 0xC0EB34: cpu.execute_instruction<0xE3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:47 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0EB35: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:47 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EB34.
    case 0xC0EB36: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:47 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0EB37: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:47 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EB36.
    case 0xC0EB38: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:47 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EB37.
    case 0xC0EB39: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:47 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0EB3A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:47 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EB38.
    case 0xC0EB3B: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // src/misc/teleport_mainloop.asm:48 LDA #23
    case 0xC0EB3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/misc/teleport_mainloop.asm:48 LDA #23
    // Overlapping static entry reached from 0xC0EB3B.
    case 0xC0EB3D: cpu.execute_instruction<0x17>(0x000000, 2); return true;
    // src/misc/teleport_mainloop.asm:48 LDA #23
    // Overlapping static entry reached from 0xC0EB3C.
    case 0xC0EB3E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/teleport_mainloop.asm:49 JSL SET_PARTY_TICK_CALLBACKS
    case 0xC0EB3F: cpu.execute_instruction<0x22>(0xC42F45, 4); return true;
    // src/misc/teleport_mainloop.asm:51 LDA PSI_TELEPORT_STYLE
    case 0xC0EB43: cpu.execute_instruction<0xAD>(0x009F41, 3); return true;
    // src/misc/teleport_mainloop.asm:52 CMP #TELEPORT_STYLE::INSTANT
    case 0xC0EB46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/misc/teleport_mainloop.asm:52 CMP #TELEPORT_STYLE::INSTANT
    // Overlapping static entry reached from 0xC0EB46.
    case 0xC0EB48: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/teleport_mainloop.asm:53 BEQ @UNKNOWN6
    case 0xC0EB49: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/misc/teleport_mainloop.asm:54 LDA #MUSIC::TELEPORT_OUT
    case 0xC0EB4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00000D, 3); return true;
    // src/misc/teleport_mainloop.asm:54 LDA #MUSIC::TELEPORT_OUT
    // Overlapping static entry reached from 0xC0EB4B.
    case 0xC0EB4D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/teleport_mainloop.asm:55 JSL CHANGE_MUSIC
    case 0xC0EB4E: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/misc/teleport_mainloop.asm:56 BRA @UNKNOWN6
    case 0xC0EB52: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/misc/teleport_mainloop.asm:58 JSL OAM_CLEAR
    case 0xC0EB54: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/misc/teleport_mainloop.asm:59 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC0EB58: cpu.execute_instruction<0x22>(0xC09466, 4); return true;
    // src/misc/teleport_mainloop.asm:60 JSR TELEPORT_FREEZEOBJECTS2
    case 0xC0EB5C: cpu.execute_instruction<0x20>(0x00EA68, 3); return true;
    // src/misc/teleport_mainloop.asm:61 JSL UPDATE_SCREEN
    case 0xC0EB5F: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/misc/teleport_mainloop.asm:62 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0EB63: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/misc/teleport_mainloop.asm:64 LDA PSI_TELEPORT_STATE
    case 0xC0EB67: cpu.execute_instruction<0xAD>(0x009F43, 3); return true;
    // src/misc/teleport_mainloop.asm:65 BEQ @UNKNOWN5
    case 0xC0EB6A: cpu.execute_instruction<0xF0>(0x0000E8, 2); return true;
    // src/misc/teleport_mainloop.asm:66 LDA PSI_TELEPORT_STATE
    case 0xC0EB6C: cpu.execute_instruction<0xAD>(0x009F43, 3); return true;
    // src/misc/teleport_mainloop.asm:67 CMP #1
    case 0xC0EB6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/misc/teleport_mainloop.asm:67 CMP #1
    // Overlapping static entry reached from 0xC0EB6F.
    case 0xC0EB71: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/teleport_mainloop.asm:68 BEQ @UNKNOWN7
    case 0xC0EB72: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/misc/teleport_mainloop.asm:69 CMP #2
    case 0xC0EB74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/misc/teleport_mainloop.asm:69 CMP #2
    // Overlapping static entry reached from 0xC0EB74.
    case 0xC0EB76: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/teleport_mainloop.asm:70 BEQ @UNKNOWN8
    case 0xC0EB77: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/misc/teleport_mainloop.asm:71 BRA @UNKNOWN9
    case 0xC0EB79: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/misc/teleport_mainloop.asm:73 JSR UNKNOWN_C0E815
    case 0xC0EB7B: cpu.execute_instruction<0x20>(0x00E815, 3); return true;
    // src/misc/teleport_mainloop.asm:74 JSL UNKNOWN_C0DD79
    case 0xC0EB7E: cpu.execute_instruction<0x22>(0xC0DD79, 4); return true;
    // src/misc/teleport_mainloop.asm:75 JSR UNKNOWN_C0E897
    case 0xC0EB82: cpu.execute_instruction<0x20>(0x00E897, 3); return true;
    // src/misc/teleport_mainloop.asm:76 LDA PSI_TELEPORT_STYLE
    case 0xC0EB85: cpu.execute_instruction<0xAD>(0x009F41, 3); return true;
    // src/misc/teleport_mainloop.asm:77 CMP #TELEPORT_STYLE::UNKNOWN
    case 0xC0EB88: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/misc/teleport_mainloop.asm:77 CMP #TELEPORT_STYLE::UNKNOWN
    // Overlapping static entry reached from 0xC0EB88.
    case 0xC0EB8A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/teleport_mainloop.asm:78 BNE @UNKNOWN9
    case 0xC0EB8B: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:79 LOADPTR MSG_EVT_MASTER_TLPT, @LOCAL00
    case 0xC0EB8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E7, 2); else cpu.execute_instruction<0xA9>(0x002AE7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:79 LOADPTR MSG_EVT_MASTER_TLPT, @LOCAL00
    // Overlapping static entry reached from 0xC0EB8D.
    case 0xC0EB8F: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:79 LOADPTR MSG_EVT_MASTER_TLPT, @LOCAL00
    case 0xC0EB90: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:79 LOADPTR MSG_EVT_MASTER_TLPT, @LOCAL00
    case 0xC0EB92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C6, 2); else cpu.execute_instruction<0xA9>(0x0000C6, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:79 LOADPTR MSG_EVT_MASTER_TLPT, @LOCAL00
    // Overlapping static entry reached from 0xC0EB92.
    case 0xC0EB94: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:79 LOADPTR MSG_EVT_MASTER_TLPT, @LOCAL00
    case 0xC0EB95: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/teleport_mainloop.asm:80 JSL UNKNOWN_C46881
    case 0xC0EB97: cpu.execute_instruction<0x22>(0xC46881, 4); return true;
    // src/misc/teleport_mainloop.asm:81 BRA @UNKNOWN9
    case 0xC0EB9B: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/misc/teleport_mainloop.asm:83 JSR UNKNOWN_C0E9BA
    case 0xC0EB9D: cpu.execute_instruction<0x20>(0x00E9BA, 3); return true;
    // src/misc/teleport_mainloop.asm:84 LDA #10
    case 0xC0EBA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/misc/teleport_mainloop.asm:84 LDA #10
    // Overlapping static entry reached from 0xC0EBA0.
    case 0xC0EBA2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/teleport_mainloop.asm:85 JSL UNKNOWN_C0DD2C
    case 0xC0EBA3: cpu.execute_instruction<0x22>(0xC0DD2C, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:87 LOADPTR UNKNOWN_C05200, @LOCAL00
    case 0xC0EBA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x005200, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:87 LOADPTR UNKNOWN_C05200, @LOCAL00
    // Overlapping static entry reached from 0xC0EBA7.
    case 0xC0EBA9: cpu.execute_instruction<0x52>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:87 LOADPTR UNKNOWN_C05200, @LOCAL00
    case 0xC0EBAA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:87 LOADPTR UNKNOWN_C05200, @LOCAL00
    // Overlapping static entry reached from 0xC0EBA9.
    case 0xC0EBAB: cpu.execute_instruction<0x0E>(0x00C0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:87 LOADPTR UNKNOWN_C05200, @LOCAL00
    case 0xC0EBAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:87 LOADPTR UNKNOWN_C05200, @LOCAL00
    // Overlapping static entry reached from 0xC0EBAC.
    case 0xC0EBAE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:87 LOADPTR UNKNOWN_C05200, @LOCAL00
    case 0xC0EBAF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:88 LOADPTR UNKNOWN_C04D78, @LOCAL01
    case 0xC0EBB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x004D78, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:88 LOADPTR UNKNOWN_C04D78, @LOCAL01
    // Overlapping static entry reached from 0xC0EBB1.
    case 0xC0EBB3: cpu.execute_instruction<0x4D>(0x001285, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:88 LOADPTR UNKNOWN_C04D78, @LOCAL01
    case 0xC0EBB4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:88 LOADPTR UNKNOWN_C04D78, @LOCAL01
    case 0xC0EBB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:88 LOADPTR UNKNOWN_C04D78, @LOCAL01
    // Overlapping static entry reached from 0xC0EBB6.
    case 0xC0EBB8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:88 LOADPTR UNKNOWN_C04D78, @LOCAL01
    case 0xC0EBB9: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/misc/teleport_mainloop.asm:89 LDA #23
    case 0xC0EBBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/misc/teleport_mainloop.asm:89 LDA #23
    // Overlapping static entry reached from 0xC0EBBB.
    case 0xC0EBBD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/teleport_mainloop.asm:90 JSL SET_PARTY_TICK_CALLBACKS
    case 0xC0EBBE: cpu.execute_instruction<0x22>(0xC42F45, 4); return true;
    // src/misc/teleport_mainloop.asm:91 JSR UNKNOWN_C0DE7C
    case 0xC0EBC2: cpu.execute_instruction<0x20>(0x00DE7C, 3); return true;
    // src/misc/teleport_mainloop.asm:92 JSL UNKNOWN_C09451
    case 0xC0EBC5: cpu.execute_instruction<0x22>(0xC09451, 4); return true;
    // src/misc/teleport_mainloop.asm:93 STZ UNREAD_7E5DBA
    case 0xC0EBC9: cpu.execute_instruction<0x9C>(0x005DBA, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/teleport_mainloop.asm:94 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED
    case 0xC0EBCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/teleport_mainloop.asm:94 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED
    // Overlapping static entry reached from 0xC0EBCC.
    case 0xC0EBCE: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/teleport_mainloop.asm:94 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED
    case 0xC0EBCF: cpu.execute_instruction<0x8D>(0x009F45, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/teleport_mainloop.asm:94 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED
    case 0xC0EBD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/teleport_mainloop.asm:94 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED
    // Overlapping static entry reached from 0xC0EBD2.
    case 0xC0EBD4: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/teleport_mainloop.asm:94 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED
    case 0xC0EBD5: cpu.execute_instruction<0x8D>(0x009F47, 3); return true;
    // src/misc/teleport_mainloop.asm:95 STZ PLAYER_INTANGIBILITY_FRAMES
    case 0xC0EBD8: cpu.execute_instruction<0x9C>(0x005D58, 3); return true;
    // src/misc/teleport_mainloop.asm:96 STZ PSI_TELEPORT_DESTINATION
    case 0xC0EBDB: cpu.execute_instruction<0x9C>(0x009F3F, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/teleport_mainloop.asm:97 END_C_FUNCTION
    case 0xC0EBDE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/teleport_mainloop.asm:97 END_C_FUNCTION
    case 0xC0EBDF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
