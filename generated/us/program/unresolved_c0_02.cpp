// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/unknown/C0/C042EF.asm (unresolved).
bool execute_unresolved_c0_c042ef_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C042EF.asm:3 BEGIN_C_FUNCTION
    case 0xC042EF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    case 0xC042F1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    case 0xC042F2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    case 0xC042F3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    case 0xC042F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC042F4.
    case 0xC042F6: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    case 0xC042F7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    case 0xC042F8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:14 STA @LOCAL06
    case 0xC042F9: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C042EF.asm:14 STA @LOCAL06
    // Overlapping static entry reached from 0xC042F6.
    case 0xC042FA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:15 ASL
    case 0xC042FB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:16 TAX
    case 0xC042FC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:17 LDA f:UNKNOWN_C3E148,X
    case 0xC042FD: cpu.execute_instruction<0xBF>(0xC3E148, 4); return true;
    // src/unknown/C0/C042EF.asm:18 STA @LOCAL05
    case 0xC04301: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C042EF.asm:19 LDA f:UNKNOWN_C3E158,X
    case 0xC04303: cpu.execute_instruction<0xBF>(0xC3E158, 4); return true;
    // src/unknown/C0/C042EF.asm:20 STA @LOCAL04
    case 0xC04307: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C042EF.asm:21 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC04309: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C042EF.asm:22 CLC
    case 0xC0430C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:23 ADC @LOCAL05
    case 0xC0430D: cpu.execute_instruction<0x65>(0x000018, 2); return true;
    // src/unknown/C0/C042EF.asm:24 STA @LOCAL03
    case 0xC0430F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C042EF.asm:25 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC04311: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C0/C042EF.asm:26 CLC
    case 0xC04314: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:27 ADC @LOCAL04
    case 0xC04315: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/unknown/C0/C042EF.asm:28 STA @VIRTUAL04
    case 0xC04317: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C042EF.asm:29 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC04319: cpu.execute_instruction<0xAD>(0x005D58, 3); return true;
    // src/unknown/C0/C042EF.asm:30 STA @LOCAL02
    case 0xC0431C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C042EF.asm:31 LDA #1
    case 0xC0431E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C042EF.asm:31 LDA #1
    // Overlapping static entry reached from 0xC0431E.
    case 0xC04320: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C042EF.asm:32 STA PLAYER_INTANGIBILITY_FRAMES
    case 0xC04321: cpu.execute_instruction<0x8D>(0x005D58, 3); return true;
    // src/unknown/C0/C042EF.asm:34 LDA #.LOWORD(GAME_STATE) + game_state::current_party_members
    case 0xC04324: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x009889, 3); return true;
    // src/unknown/C0/C042EF.asm:34 LDA #.LOWORD(GAME_STATE) + game_state::current_party_members
    // Overlapping static entry reached from 0xC04324.
    case 0xC04326: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:35 STA @VIRTUAL02
    case 0xC04327: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C042EF.asm:36 LDX @VIRTUAL02
    case 0xC04329: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C042EF.asm:37 LDA __BSS_START__,X
    case 0xC0432B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C042EF.asm:38 TAY
    case 0xC0432E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:39 LDX @VIRTUAL04
    case 0xC0432F: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C042EF.asm:40 LDA @LOCAL03
    case 0xC04331: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C042EF.asm:41 JSL NPC_COLLISION_CHECK
    case 0xC04333: cpu.execute_instruction<0x22>(0xC05FF6, 4); return true;
    // src/unknown/C0/C042EF.asm:42 STA @LOCAL01
    case 0xC04337: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C042EF.asm:43 CMP #$8000
    case 0xC04339: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C042EF.asm:43 CMP #$8000
    // Overlapping static entry reached from 0xC04339.
    case 0xC0433B: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/C0/C042EF.asm:44 BCS @UNKNOWN1
    case 0xC0433C: cpu.execute_instruction<0xB0>(0x00000F, 2); return true;
    // src/unknown/C0/C042EF.asm:45 ASL
    case 0xC0433E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:46 TAX
    case 0xC0433F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:47 LDA ENTITY_NPC_IDS,X
    case 0xC04340: cpu.execute_instruction<0xBD>(0x002C9A, 3); return true;
    // src/unknown/C0/C042EF.asm:48 STA INTERACTING_NPC_ID
    case 0xC04343: cpu.execute_instruction<0x8D>(0x005D62, 3); return true;
    // src/unknown/C0/C042EF.asm:49 LDA @LOCAL01
    case 0xC04346: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C042EF.asm:50 STA INTERACTING_NPC_ENTITY
    case 0xC04348: cpu.execute_instruction<0x8D>(0x005D64, 3); return true;
    // src/unknown/C0/C042EF.asm:51 BRA @UNKNOWN7
    case 0xC0434B: cpu.execute_instruction<0x80>(0x000052, 2); return true;
    // src/unknown/C0/C042EF.asm:53 LDA @LOCAL06
    case 0xC0434D: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C042EF.asm:54 STA @LOCAL00
    case 0xC0434F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C042EF.asm:55 LDX @VIRTUAL02
    case 0xC04351: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C042EF.asm:56 LDA __BSS_START__,X
    case 0xC04353: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C042EF.asm:57 TAY
    case 0xC04356: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:58 LDX @VIRTUAL04
    case 0xC04357: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C042EF.asm:59 LDA @LOCAL03
    case 0xC04359: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C042EF.asm:60 JSL UNKNOWN_C05CD7
    case 0xC0435B: cpu.execute_instruction<0x22>(0xC05CD7, 4); return true;
    // src/unknown/C0/C042EF.asm:61 AND #$0082
    case 0xC0435F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000082, 2); else cpu.execute_instruction<0x29>(0x000082, 3); return true;
    // src/unknown/C0/C042EF.asm:61 AND #$0082
    // Overlapping static entry reached from 0xC0435F.
    case 0xC04361: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C042EF.asm:62 CMP #130
    case 0xC04362: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000082, 2); else cpu.execute_instruction<0xC9>(0x000082, 3); return true;
    // src/unknown/C0/C042EF.asm:62 CMP #130
    // Overlapping static entry reached from 0xC04362.
    case 0xC04364: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C042EF.asm:63 BNE @UNKNOWN7
    case 0xC04365: cpu.execute_instruction<0xD0>(0x000038, 2); return true;
    // src/unknown/C0/C042EF.asm:64 LDA @LOCAL05
    case 0xC04367: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C042EF.asm:65 BEQ @UNKNOWN4
    case 0xC04369: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C0/C042EF.asm:66 LDA @LOCAL05
    case 0xC0436B: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C042EF.asm:67 AND #$8000
    case 0xC0436D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C042EF.asm:67 AND #$8000
    // Overlapping static entry reached from 0xC0436D.
    case 0xC0436F: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C042EF.asm:68 BEQ @UNKNOWN2
    case 0xC04370: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C042EF.asm:69 LDX #.LOWORD(-8)
    case 0xC04372: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000F8, 2); else cpu.execute_instruction<0xA2>(0x00FFF8, 3); return true;
    // src/unknown/C0/C042EF.asm:69 LDX #.LOWORD(-8)
    // Overlapping static entry reached from 0xC04372.
    case 0xC04374: cpu.execute_instruction<0xFF>(0xA20380, 4); return true;
    // src/unknown/C0/C042EF.asm:70 BRA @UNKNOWN3
    case 0xC04375: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C042EF.asm:72 LDX #8
    case 0xC04377: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C0/C042EF.asm:72 LDX #8
    // Overlapping static entry reached from 0xC04374.
    case 0xC04378: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:72 LDX #8
    // Overlapping static entry reached from 0xC04377.
    case 0xC04379: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C0/C042EF.asm:74 TXA
    case 0xC0437A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:75 CLC
    case 0xC0437B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:76 ADC @LOCAL03
    case 0xC0437C: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/unknown/C0/C042EF.asm:77 STA @LOCAL03
    case 0xC0437E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C042EF.asm:79 LDA @LOCAL04
    case 0xC04380: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C042EF.asm:80 BEQ @UNKNOWN0
    case 0xC04382: cpu.execute_instruction<0xF0>(0x0000A0, 2); return true;
    // src/unknown/C0/C042EF.asm:81 LDA @LOCAL04
    case 0xC04384: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C042EF.asm:82 AND #$8000
    case 0xC04386: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C042EF.asm:82 AND #$8000
    // Overlapping static entry reached from 0xC04386.
    case 0xC04388: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C042EF.asm:83 BEQ @UNKNOWN5
    case 0xC04389: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C042EF.asm:84 LDX #.LOWORD(-8)
    case 0xC0438B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000F8, 2); else cpu.execute_instruction<0xA2>(0x00FFF8, 3); return true;
    // src/unknown/C0/C042EF.asm:84 LDX #.LOWORD(-8)
    // Overlapping static entry reached from 0xC0438B.
    case 0xC0438D: cpu.execute_instruction<0xFF>(0xA20380, 4); return true;
    // src/unknown/C0/C042EF.asm:85 BRA @UNKNOWN6
    case 0xC0438E: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C042EF.asm:87 LDX #8
    case 0xC04390: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C0/C042EF.asm:87 LDX #8
    // Overlapping static entry reached from 0xC0438D.
    case 0xC04391: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:87 LDX #8
    // Overlapping static entry reached from 0xC04390.
    case 0xC04392: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C042EF.asm:89 STX @VIRTUAL02
    case 0xC04393: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C042EF.asm:90 LDA @VIRTUAL04
    case 0xC04395: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C042EF.asm:91 CLC
    case 0xC04397: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:92 ADC @VIRTUAL02
    case 0xC04398: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C042EF.asm:93 STA @VIRTUAL04
    case 0xC0439A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C042EF.asm:94 JMP @UNKNOWN0
    case 0xC0439C: cpu.execute_instruction<0x4C>(0x004324, 3); return true;
    // src/unknown/C0/C042EF.asm:96 LDA @LOCAL02
    case 0xC0439F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C042EF.asm:97 STA PLAYER_INTANGIBILITY_FRAMES
    case 0xC043A1: cpu.execute_instruction<0x8D>(0x005D58, 3); return true;
    // src/unknown/C0/C042EF.asm:98 LDA INTERACTING_NPC_ID
    case 0xC043A4: cpu.execute_instruction<0xAD>(0x005D62, 3); return true;
    // src/unknown/C0/C042EF.asm:99 BEQ @UNKNOWN8
    case 0xC043A7: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C042EF.asm:100 LDA INTERACTING_NPC_ID
    case 0xC043A9: cpu.execute_instruction<0xAD>(0x005D62, 3); return true;
    // src/unknown/C0/C042EF.asm:101 CMP #.LOWORD(-1)
    case 0xC043AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C042EF.asm:101 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC043AC.
    case 0xC043AE: cpu.execute_instruction<0xFF>(0xA506D0, 4); return true;
    // src/unknown/C0/C042EF.asm:102 BNE @UNKNOWN9
    case 0xC043AF: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C042EF.asm:104 LDA @LOCAL06
    case 0xC043B1: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C042EF.asm:104 LDA @LOCAL06
    // Overlapping static entry reached from 0xC043AE.
    case 0xC043B2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:105 JSL UNKNOWN_C065C2
    case 0xC043B3: cpu.execute_instruction<0x22>(0xC065C2, 4); return true;
    // src/unknown/C0/C042EF.asm:107 LDA INTERACTING_NPC_ID
    case 0xC043B7: cpu.execute_instruction<0xAD>(0x005D62, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C042EF.asm:108 END_C_FUNCTION
    case 0xC043BA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C042EF.asm:108 END_C_FUNCTION
    case 0xC043BB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C043BC.asm (unresolved).
bool execute_unresolved_c0_c043bc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C043BC.asm:3 BEGIN_C_FUNCTION
    case 0xC043BC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C043BC.asm:8 END_STACK_VARS
    case 0xC043BE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C043BC.asm:8 END_STACK_VARS
    case 0xC043BF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C043BC.asm:8 END_STACK_VARS
    case 0xC043C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C043BC.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC043C0.
    case 0xC043C2: cpu.execute_instruction<0xFF>(0x7FAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C043BC.asm:8 END_STACK_VARS
    case 0xC043C3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:9 LDA GAME_STATE+game_state::leader_direction
    case 0xC043C4: cpu.execute_instruction<0xAD>(0x00987F, 3); return true;
    // src/unknown/C0/C043BC.asm:9 LDA GAME_STATE+game_state::leader_direction
    // Overlapping static entry reached from 0xC043C2.
    case 0xC043C6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:10 AND #$FFFE
    case 0xC043C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FE, 2); else cpu.execute_instruction<0x29>(0x00FFFE, 3); return true;
    // src/unknown/C0/C043BC.asm:10 AND #$FFFE
    // Overlapping static entry reached from 0xC043C7.
    case 0xC043C9: cpu.execute_instruction<0xFF>(0x1084A8, 4); return true;
    // src/unknown/C0/C043BC.asm:11 TAY
    case 0xC043CA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:12 STY @LOCAL01
    case 0xC043CB: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C043BC.asm:13 TYX
    case 0xC043CD: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:14 STX @LOCAL00
    case 0xC043CE: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C043BC.asm:15 TXA
    case 0xC043D0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:16 JSR UNKNOWN_C042EF
    case 0xC043D1: cpu.execute_instruction<0x20>(0x0042EF, 3); return true;
    // src/unknown/C0/C043BC.asm:17 CMP #.LOWORD(-1)
    case 0xC043D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C043BC.asm:17 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC043D4.
    case 0xC043D6: cpu.execute_instruction<0xFF>(0xC90AF0, 4); return true;
    // src/unknown/C0/C043BC.asm:18 BEQ @UNKNOWN0
    case 0xC043D7: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C043BC.asm:19 CMP #0
    case 0xC043D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C043BC.asm:19 CMP #0
    // Overlapping static entry reached from 0xC043D6.
    case 0xC043DA: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C043BC.asm:19 CMP #0
    // Overlapping static entry reached from 0xC043D9.
    case 0xC043DB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C043BC.asm:20 BEQ @UNKNOWN0
    case 0xC043DC: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C043BC.asm:21 LDX @LOCAL00
    case 0xC043DE: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C043BC.asm:22 TXA
    case 0xC043E0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:23 BRA @UNKNOWN4
    case 0xC043E1: cpu.execute_instruction<0x80>(0x00006D, 2); return true;
    // src/unknown/C0/C043BC.asm:25 LDX @LOCAL00
    case 0xC043E3: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C043BC.asm:26 TXA
    case 0xC043E5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:27 INC
    case 0xC043E6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:28 INC
    case 0xC043E7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:29 AND #$0007
    case 0xC043E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C043BC.asm:29 AND #$0007
    // Overlapping static entry reached from 0xC043E8.
    case 0xC043EA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C043BC.asm:30 TAX
    case 0xC043EB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:31 STX @LOCAL00
    case 0xC043EC: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C043BC.asm:32 STX GAME_STATE+game_state::leader_direction
    case 0xC043EE: cpu.execute_instruction<0x8E>(0x00987F, 3); return true;
    // src/unknown/C0/C043BC.asm:33 TXA
    case 0xC043F1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:34 JSR UNKNOWN_C042EF
    case 0xC043F2: cpu.execute_instruction<0x20>(0x0042EF, 3); return true;
    // src/unknown/C0/C043BC.asm:35 CMP #.LOWORD(-1)
    case 0xC043F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C043BC.asm:35 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC043F5.
    case 0xC043F7: cpu.execute_instruction<0xFF>(0xC90AF0, 4); return true;
    // src/unknown/C0/C043BC.asm:36 BEQ @UNKNOWN1
    case 0xC043F8: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C043BC.asm:37 CMP #0
    case 0xC043FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C043BC.asm:37 CMP #0
    // Overlapping static entry reached from 0xC043F7.
    case 0xC043FB: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C043BC.asm:37 CMP #0
    // Overlapping static entry reached from 0xC043FA.
    case 0xC043FC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C043BC.asm:38 BEQ @UNKNOWN1
    case 0xC043FD: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C043BC.asm:39 LDX @LOCAL00
    case 0xC043FF: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C043BC.asm:40 TXA
    case 0xC04401: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:41 BRA @UNKNOWN4
    case 0xC04402: cpu.execute_instruction<0x80>(0x00004C, 2); return true;
    // src/unknown/C0/C043BC.asm:43 LDX @LOCAL00
    case 0xC04404: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C043BC.asm:44 TXA
    case 0xC04406: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:45 INC
    case 0xC04407: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:46 INC
    case 0xC04408: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:47 INC
    case 0xC04409: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:48 INC
    case 0xC0440A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:49 AND #$0007
    case 0xC0440B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C043BC.asm:49 AND #$0007
    // Overlapping static entry reached from 0xC0440B.
    case 0xC0440D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C043BC.asm:50 TAX
    case 0xC0440E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:51 STX @LOCAL00
    case 0xC0440F: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C043BC.asm:52 STX GAME_STATE+game_state::leader_direction
    case 0xC04411: cpu.execute_instruction<0x8E>(0x00987F, 3); return true;
    // src/unknown/C0/C043BC.asm:53 TXA
    case 0xC04414: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:54 JSR UNKNOWN_C042EF
    case 0xC04415: cpu.execute_instruction<0x20>(0x0042EF, 3); return true;
    // src/unknown/C0/C043BC.asm:55 CMP #.LOWORD(-1)
    case 0xC04418: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C043BC.asm:55 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04418.
    case 0xC0441A: cpu.execute_instruction<0xFF>(0xC90AF0, 4); return true;
    // src/unknown/C0/C043BC.asm:56 BEQ @UNKNOWN2
    case 0xC0441B: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C043BC.asm:57 CMP #0
    case 0xC0441D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C043BC.asm:57 CMP #0
    // Overlapping static entry reached from 0xC0441A.
    case 0xC0441E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C043BC.asm:57 CMP #0
    // Overlapping static entry reached from 0xC0441D.
    case 0xC0441F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C043BC.asm:58 BEQ @UNKNOWN2
    case 0xC04420: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C043BC.asm:59 LDX @LOCAL00
    case 0xC04422: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C043BC.asm:60 TXA
    case 0xC04424: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:61 BRA @UNKNOWN4
    case 0xC04425: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C0/C043BC.asm:63 LDX @LOCAL00
    case 0xC04427: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C043BC.asm:64 TXA
    case 0xC04429: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:65 DEC
    case 0xC0442A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:66 DEC
    case 0xC0442B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:67 AND #$0007
    case 0xC0442C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C043BC.asm:67 AND #$0007
    // Overlapping static entry reached from 0xC0442C.
    case 0xC0442E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C043BC.asm:68 TAX
    case 0xC0442F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:69 STX @LOCAL00
    case 0xC04430: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C043BC.asm:70 STX GAME_STATE+game_state::leader_direction
    case 0xC04432: cpu.execute_instruction<0x8E>(0x00987F, 3); return true;
    // src/unknown/C0/C043BC.asm:71 TXA
    case 0xC04435: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:72 JSR UNKNOWN_C042EF
    case 0xC04436: cpu.execute_instruction<0x20>(0x0042EF, 3); return true;
    // src/unknown/C0/C043BC.asm:73 CMP #.LOWORD(-1)
    case 0xC04439: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C043BC.asm:73 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04439.
    case 0xC0443B: cpu.execute_instruction<0xFF>(0xC90AF0, 4); return true;
    // src/unknown/C0/C043BC.asm:74 BEQ @UNKNOWN3
    case 0xC0443C: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C043BC.asm:75 CMP #0
    case 0xC0443E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C043BC.asm:75 CMP #0
    // Overlapping static entry reached from 0xC0443B.
    case 0xC0443F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C043BC.asm:75 CMP #0
    // Overlapping static entry reached from 0xC0443E.
    case 0xC04440: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C043BC.asm:76 BEQ @UNKNOWN3
    case 0xC04441: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C043BC.asm:77 LDX @LOCAL00
    case 0xC04443: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C043BC.asm:78 TXA
    case 0xC04445: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:79 BRA @UNKNOWN4
    case 0xC04446: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C0/C043BC.asm:81 LDY @LOCAL01
    case 0xC04448: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C043BC.asm:82 STY GAME_STATE+game_state::leader_direction
    case 0xC0444A: cpu.execute_instruction<0x8C>(0x00987F, 3); return true;
    // src/unknown/C0/C043BC.asm:83 LDA #.LOWORD(-1)
    case 0xC0444D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C043BC.asm:83 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0444D.
    case 0xC0444F: cpu.execute_instruction<0xFF>(0xC2602B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C043BC.asm:85 END_C_FUNCTION
    case 0xC04450: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C043BC.asm:85 END_C_FUNCTION
    case 0xC04451: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0449B.asm (unresolved).
bool execute_unresolved_c0_c0449b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0449B.asm:3 BEGIN_C_FUNCTION
    case 0xC0449B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0449B.asm:13 END_STACK_VARS
    case 0xC0449D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0449B.asm:13 END_STACK_VARS
    case 0xC0449E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0449B.asm:13 END_STACK_VARS
    case 0xC0449F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DA, 2); else cpu.execute_instruction<0x69>(0x00FFDA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0449B.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC0449F.
    case 0xC044A1: cpu.execute_instruction<0xFF>(0x859C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0449B.asm:13 END_STACK_VARS
    case 0xC044A2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:14 STZ GAME_STATE + game_state::unknown90
    case 0xC044A3: cpu.execute_instruction<0x9C>(0x009885, 3); return true;
    // src/unknown/C0/C0449B.asm:14 STZ GAME_STATE + game_state::unknown90
    // Overlapping static entry reached from 0xC044A1.
    case 0xC044A5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:15 LDA MUSHROOMIZED_WALKING_FLAG
    case 0xC044A6: cpu.execute_instruction<0xAD>(0x005DA0, 3); return true;
    // src/unknown/C0/C0449B.asm:16 BEQ @NOT_MUSHROOMIZED
    case 0xC044A9: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0449B.asm:17 JSR MUSHROOMIZATION_MOVEMENT_SWAP
    case 0xC044AB: cpu.execute_instruction<0x20>(0x002C89, 3); return true;
    // src/unknown/C0/C0449B.asm:19 LDX #.LOWORD(GAME_STATE) + game_state::walking_style
    case 0xC044AE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000083, 2); else cpu.execute_instruction<0xA2>(0x009883, 3); return true;
    // src/unknown/C0/C0449B.asm:19 LDX #.LOWORD(GAME_STATE) + game_state::walking_style
    // Overlapping static entry reached from 0xC044AE.
    case 0xC044B0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:20 STX @LOCAL07
    case 0xC044B1: cpu.execute_instruction<0x86>(0x000024, 2); return true;
    // src/unknown/C0/C0449B.asm:21 LDA __BSS_START__,X
    case 0xC044B3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0449B.asm:22 JSL MAP_INPUT_TO_DIRECTION
    case 0xC044B6: cpu.execute_instruction<0x22>(0xC0404F, 4); return true;
    // src/unknown/C0/C0449B.asm:23 STA @VIRTUAL02
    case 0xC044BA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:24 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC044BC: cpu.execute_instruction<0xAD>(0x005D60, 3); return true;
    // src/unknown/C0/C0449B.asm:25 BEQ @UNKNOWN2
    case 0xC044BF: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/unknown/C0/C0449B.asm:26 LDX BATTLE_SWIRL_COUNTDOWN
    case 0xC044C1: cpu.execute_instruction<0xAE>(0x005D60, 3); return true;
    // src/unknown/C0/C0449B.asm:27 DEX
    case 0xC044C4: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:28 STX BATTLE_SWIRL_COUNTDOWN
    case 0xC044C5: cpu.execute_instruction<0x8E>(0x005D60, 3); return true;
    // src/unknown/C0/C0449B.asm:29 BEQ @UNKNOWN1
    case 0xC044C8: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C0/C0449B.asm:30 LDY GAME_STATE+game_state::current_party_members
    case 0xC044CA: cpu.execute_instruction<0xAC>(0x009889, 3); return true;
    // src/unknown/C0/C0449B.asm:31 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC044CD: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C0449B.asm:32 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC044D0: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C0449B.asm:33 JSL NPC_COLLISION_CHECK
    case 0xC044D3: cpu.execute_instruction<0x22>(0xC05FF6, 4); return true;
    // src/unknown/C0/C0449B.asm:34 JMP @RETURN
    case 0xC044D7: cpu.execute_instruction<0x4C>(0x00476B, 3); return true;
    // src/unknown/C0/C0449B.asm:36 LDA #.LOWORD(-1)
    case 0xC044DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0449B.asm:36 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC044DA.
    case 0xC044DC: cpu.execute_instruction<0xFF>(0x4DC28D, 4); return true;
    // src/unknown/C0/C0449B.asm:37 STA BATTLE_MODE
    case 0xC044DD: cpu.execute_instruction<0x8D>(0x004DC2, 3); return true;
    // src/unknown/C0/C0449B.asm:38 JMP @RETURN
    case 0xC044E0: cpu.execute_instruction<0x4C>(0x00476B, 3); return true;
    // src/unknown/C0/C0449B.asm:40 LDA @VIRTUAL02
    case 0xC044E3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:41 CMP #.LOWORD(-1)
    case 0xC044E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0449B.asm:41 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC044E5.
    case 0xC044E7: cpu.execute_instruction<0xFF>(0xAC10D0, 4); return true;
    // src/unknown/C0/C0449B.asm:42 BNE @UNKNOWN3
    case 0xC044E8: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C0/C0449B.asm:43 LDY GAME_STATE+game_state::current_party_members
    case 0xC044EA: cpu.execute_instruction<0xAC>(0x009889, 3); return true;
    // src/unknown/C0/C0449B.asm:43 LDY GAME_STATE+game_state::current_party_members
    // Overlapping static entry reached from 0xC044E7.
    case 0xC044EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000098, 2); else cpu.execute_instruction<0x89>(0x00AE98, 3); return true;
    // src/unknown/C0/C0449B.asm:44 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC044ED: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C0449B.asm:44 LDX GAME_STATE+game_state::leader_y_coord
    // Overlapping static entry reached from 0xC044EB.
    case 0xC044EE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:44 LDX GAME_STATE+game_state::leader_y_coord
    // Overlapping static entry reached from 0xC044EE.
    case 0xC044EF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:45 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC044F0: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C0449B.asm:46 JSL NPC_COLLISION_CHECK
    case 0xC044F3: cpu.execute_instruction<0x22>(0xC05FF6, 4); return true;
    // src/unknown/C0/C0449B.asm:47 JMP @RETURN
    case 0xC044F7: cpu.execute_instruction<0x4C>(0x00476B, 3); return true;
    // src/unknown/C0/C0449B.asm:49 LDX @LOCAL07
    case 0xC044FA: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // src/unknown/C0/C0449B.asm:50 LDA __BSS_START__,X
    case 0xC044FC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0449B.asm:51 CMP #13
    case 0xC044FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000D, 2); else cpu.execute_instruction<0xC9>(0x00000D, 3); return true;
    // src/unknown/C0/C0449B.asm:51 CMP #13
    // Overlapping static entry reached from 0xC044FF.
    case 0xC04501: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0449B.asm:52 BNE @UNKNOWN12
    case 0xC04502: cpu.execute_instruction<0xD0>(0x000057, 2); return true;
    // src/unknown/C0/C0449B.asm:53 LDA STAIRS_DIRECTION
    case 0xC04504: cpu.execute_instruction<0xAD>(0x005DC4, 3); return true;
    // src/unknown/C0/C0449B.asm:54 CMP #$0100
    case 0xC04507: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C0/C0449B.asm:54 CMP #$0100
    // Overlapping static entry reached from 0xC04507.
    case 0xC04509: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/C0/C0449B.asm:55 BEQ @UNKNOWN4
    case 0xC0450A: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C0449B.asm:55 BEQ @UNKNOWN4
    // Overlapping static entry reached from 0xC04509.
    case 0xC0450B: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:56 LDA STAIRS_DIRECTION
    case 0xC0450C: cpu.execute_instruction<0xAD>(0x005DC4, 3); return true;
    // src/unknown/C0/C0449B.asm:57 CMP #$0200
    case 0xC0450F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000200, 3); return true;
    // src/unknown/C0/C0449B.asm:57 CMP #$0200
    // Overlapping static entry reached from 0xC0450F.
    case 0xC04511: cpu.execute_instruction<0x02>(0x0000D0, 2); return true;
    // src/unknown/C0/C0449B.asm:58 BNE @UNKNOWN7
    case 0xC04512: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/unknown/C0/C0449B.asm:60 LDA @VIRTUAL02
    case 0xC04514: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:61 CMP #3
    case 0xC04516: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0449B.asm:61 CMP #3
    // Overlapping static entry reached from 0xC04516.
    case 0xC04518: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C0/C0449B.asm:62 BGT @UNKNOWN6
    case 0xC04519: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C0449B.asm:62 BGT @UNKNOWN6
    case 0xC0451B: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/unknown/C0/C0449B.asm:63 LDA #1
    case 0xC0451D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0449B.asm:63 LDA #1
    // Overlapping static entry reached from 0xC0451D.
    case 0xC0451F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0449B.asm:64 STA @VIRTUAL02
    case 0xC04520: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:65 BRA @UNKNOWN10
    case 0xC04522: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/unknown/C0/C0449B.asm:67 LDA #5
    case 0xC04524: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C0449B.asm:67 LDA #5
    // Overlapping static entry reached from 0xC04524.
    case 0xC04526: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0449B.asm:68 STA @VIRTUAL02
    case 0xC04527: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:69 BRA @UNKNOWN10
    case 0xC04529: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C0/C0449B.asm:71 LDA @VIRTUAL02
    case 0xC0452B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:72 DEC
    case 0xC0452D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:73 AND #$0007
    case 0xC0452E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C0449B.asm:73 AND #$0007
    // Overlapping static entry reached from 0xC0452E.
    case 0xC04530: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0449B.asm:74 CMP #3
    case 0xC04531: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0449B.asm:74 CMP #3
    // Overlapping static entry reached from 0xC04531.
    case 0xC04533: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C0/C0449B.asm:75 BGT @UNKNOWN9
    case 0xC04534: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C0449B.asm:75 BGT @UNKNOWN9
    case 0xC04536: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/unknown/C0/C0449B.asm:76 LDA #3
    case 0xC04538: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C0449B.asm:76 LDA #3
    // Overlapping static entry reached from 0xC04538.
    case 0xC0453A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0449B.asm:77 STA @VIRTUAL02
    case 0xC0453B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:78 BRA @UNKNOWN10
    case 0xC0453D: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C0/C0449B.asm:80 LDA #7
    case 0xC0453F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C0/C0449B.asm:80 LDA #7
    // Overlapping static entry reached from 0xC0453F.
    case 0xC04541: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0449B.asm:81 STA @VIRTUAL02
    case 0xC04542: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:83 LDA @VIRTUAL02
    case 0xC04544: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:84 CMP #4
    case 0xC04546: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0449B.asm:84 CMP #4
    // Overlapping static entry reached from 0xC04546.
    case 0xC04548: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C0449B.asm:85 BCS @UNKNOWN11
    case 0xC04549: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C0/C0449B.asm:86 LDA #2
    case 0xC0454B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0449B.asm:86 LDA #2
    // Overlapping static entry reached from 0xC0454B.
    case 0xC0454D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0449B.asm:87 STA GAME_STATE+game_state::leader_direction
    case 0xC0454E: cpu.execute_instruction<0x8D>(0x00987F, 3); return true;
    // src/unknown/C0/C0449B.asm:88 BRA @UNKNOWN13
    case 0xC04551: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C0/C0449B.asm:90 LDA #6
    case 0xC04553: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C0/C0449B.asm:90 LDA #6
    // Overlapping static entry reached from 0xC04553.
    case 0xC04555: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0449B.asm:91 STA GAME_STATE+game_state::leader_direction
    case 0xC04556: cpu.execute_instruction<0x8D>(0x00987F, 3); return true;
    // src/unknown/C0/C0449B.asm:92 BRA @UNKNOWN13
    case 0xC04559: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C0449B.asm:94 LDA PLAYER_MOVEMENT_FLAGS
    case 0xC0455B: cpu.execute_instruction<0xAD>(0x005D56, 3); return true;
    // src/unknown/C0/C0449B.asm:95 AND #$0001
    case 0xC0455E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0449B.asm:95 AND #$0001
    // Overlapping static entry reached from 0xC0455E.
    case 0xC04560: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0449B.asm:96 BNE @UNKNOWN13
    case 0xC04561: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0449B.asm:97 LDA @VIRTUAL02
    case 0xC04563: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:98 STA GAME_STATE+game_state::leader_direction
    case 0xC04565: cpu.execute_instruction<0x8D>(0x00987F, 3); return true;
    // src/unknown/C0/C0449B.asm:100 INC PLAYER_HAS_MOVED_SINCE_MAP_LOAD
    case 0xC04568: cpu.execute_instruction<0xEE>(0x002890, 3); return true;
    // src/unknown/C0/C0449B.asm:101 LDX #.LOWORD(GAME_STATE) + game_state::unknown90
    case 0xC0456B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000085, 2); else cpu.execute_instruction<0xA2>(0x009885, 3); return true;
    // src/unknown/C0/C0449B.asm:101 LDX #.LOWORD(GAME_STATE) + game_state::unknown90
    // Overlapping static entry reached from 0xC0456B.
    case 0xC0456D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:102 LDA __BSS_START__,X
    case 0xC0456E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0449B.asm:103 INC
    case 0xC04571: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:104 STA __BSS_START__,X
    case 0xC04572: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0449B.asm:105 LDA GAME_STATE+game_state::trodden_tile_type
    case 0xC04575: cpu.execute_instruction<0xAD>(0x009881, 3); return true;
    // src/unknown/C0/C0449B.asm:106 STA @LOCAL06
    case 0xC04578: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C0/C0449B.asm:107 LDA #.LOWORD(GAME_STATE) + game_state::unknown80
    case 0xC0457A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000075, 2); else cpu.execute_instruction<0xA9>(0x009875, 3); return true;
    // src/unknown/C0/C0449B.asm:107 LDA #.LOWORD(GAME_STATE) + game_state::unknown80
    // Overlapping static entry reached from 0xC0457A.
    case 0xC0457C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:108 STA @LOCAL05
    case 0xC0457D: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C0449B.asm:109 LDY @LOCAL05
    case 0xC0457F: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C0449B.asm:110 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04581: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:110 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04584: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C0449B.asm:110 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04586: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:110 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04589: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:111 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0458B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:111 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0458D: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:111 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0458F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:111 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC04591: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:112 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC04593: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:112 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC04595: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:112 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC04597: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:112 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC04599: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0449B.asm:113 LDA #.LOWORD(GAME_STATE) + game_state::unknown84
    case 0xC0459B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000079, 2); else cpu.execute_instruction<0xA9>(0x009879, 3); return true;
    // src/unknown/C0/C0449B.asm:113 LDA #.LOWORD(GAME_STATE) + game_state::unknown84
    // Overlapping static entry reached from 0xC0459B.
    case 0xC0459D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:114 STA @LOCAL03
    case 0xC0459E: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0449B.asm:115 LDY @LOCAL03
    case 0xC045A0: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C0449B.asm:116 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC045A2: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:116 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC045A5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C0449B.asm:116 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC045A7: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:116 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC045AA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:117 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC045AC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:117 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC045AE: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:117 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC045B0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:117 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC045B2: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:118 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC045B4: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:118 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC045B6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:118 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC045B8: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:118 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC045BA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC045BC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC045BE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC045C0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC045C2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0449B.asm:120 LDX @LOCAL06
    case 0xC045C4: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C0/C0449B.asm:121 LDA @VIRTUAL02
    case 0xC045C6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:122 JSR ADJUST_POSITION_HORIZONTAL
    case 0xC045C8: cpu.execute_instruction<0x20>(0x002D8F, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:123 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC045CB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:123 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC045CD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:123 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC045CF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:123 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC045D1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:124 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC045D3: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:124 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC045D5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:124 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC045D7: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:124 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC045D9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:125 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC045DB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:125 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC045DD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:125 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC045DF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:125 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC045E1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0449B.asm:126 LDX @LOCAL06
    case 0xC045E3: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C0/C0449B.asm:127 LDA @VIRTUAL02
    case 0xC045E5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:128 JSR ADJUST_POSITION_VERTICAL
    case 0xC045E7: cpu.execute_instruction<0x20>(0x003017, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:129 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC045EA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:129 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC045EC: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:129 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC045EE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:129 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC045F0: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0449B.asm:130 LDA #.LOWORD(-1)
    case 0xC045F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0449B.asm:130 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC045F2.
    case 0xC045F4: cpu.execute_instruction<0xFF>(0x5DA88D, 4); return true;
    // src/unknown/C0/C0449B.asm:131 STA LADDER_STAIRS_TILE_X
    case 0xC045F5: cpu.execute_instruction<0x8D>(0x005DA8, 3); return true;
    // src/unknown/C0/C0449B.asm:132 LDA PLAYER_MOVEMENT_FLAGS
    case 0xC045F8: cpu.execute_instruction<0xAD>(0x005D56, 3); return true;
    // src/unknown/C0/C0449B.asm:133 AND #$0002
    case 0xC045FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/unknown/C0/C0449B.asm:133 AND #$0002
    // Overlapping static entry reached from 0xC045FB.
    case 0xC045FD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0449B.asm:134 BNE @UNKNOWN14
    case 0xC045FE: cpu.execute_instruction<0xD0>(0x000062, 2); return true;
    // src/unknown/C0/C0449B.asm:135 LDA @VIRTUAL02
    case 0xC04600: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:136 STA @LOCAL00
    case 0xC04602: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0449B.asm:137 LDY GAME_STATE+game_state::current_party_members
    case 0xC04604: cpu.execute_instruction<0xAC>(0x009889, 3); return true;
    // src/unknown/C0/C0449B.asm:138 LDX @LOCAL02 + fixed_point::integer
    case 0xC04607: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0449B.asm:139 LDA @LOCAL01 + fixed_point::integer
    case 0xC04609: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0449B.asm:140 JSL UNKNOWN_C05B7B
    case 0xC0460B: cpu.execute_instruction<0x22>(0xC05B7B, 4); return true;
    // src/unknown/C0/C0449B.asm:141 STA @VIRTUAL04
    case 0xC0460F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0449B.asm:142 LDA @VIRTUAL02
    case 0xC04611: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:143 CMP FINAL_MOVEMENT_DIRECTION
    case 0xC04613: cpu.execute_instruction<0xCD>(0x005DA6, 3); return true;
    // src/unknown/C0/C0449B.asm:144 BEQ @UNKNOWN16
    case 0xC04616: cpu.execute_instruction<0xF0>(0x000065, 2); return true;
    // src/unknown/C0/C0449B.asm:145 LDY @LOCAL05
    case 0xC04618: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C0449B.asm:146 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0461A: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:146 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0461D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C0449B.asm:146 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0461F: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:146 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04622: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:147 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC04624: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:147 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC04626: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:147 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC04628: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:147 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0462A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0449B.asm:148 LDX @LOCAL06
    case 0xC0462C: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C0/C0449B.asm:149 LDA FINAL_MOVEMENT_DIRECTION
    case 0xC0462E: cpu.execute_instruction<0xAD>(0x005DA6, 3); return true;
    // src/unknown/C0/C0449B.asm:150 JSR ADJUST_POSITION_HORIZONTAL
    case 0xC04631: cpu.execute_instruction<0x20>(0x002D8F, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:151 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC04634: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:151 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC04636: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:151 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC04638: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:151 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0463A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0449B.asm:152 LDY @LOCAL03
    case 0xC0463C: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C0449B.asm:153 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0463E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:153 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04641: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C0449B.asm:153 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04643: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:153 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04646: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:154 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC04648: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:154 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0464A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:154 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0464C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:154 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0464E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0449B.asm:155 LDX @LOCAL06
    case 0xC04650: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C0/C0449B.asm:156 LDA FINAL_MOVEMENT_DIRECTION
    case 0xC04652: cpu.execute_instruction<0xAD>(0x005DA6, 3); return true;
    // src/unknown/C0/C0449B.asm:157 JSR ADJUST_POSITION_VERTICAL
    case 0xC04655: cpu.execute_instruction<0x20>(0x003017, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:158 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC04658: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:158 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0465A: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:158 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0465C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:158 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0465E: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0449B.asm:159 BRA @UNKNOWN16
    case 0xC04660: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C0/C0449B.asm:161 LDA DEMO_FRAMES_LEFT
    case 0xC04662: cpu.execute_instruction<0xAD>(0x000081, 3); return true;
    // src/unknown/C0/C0449B.asm:162 BNE @UNKNOWN15
    case 0xC04665: cpu.execute_instruction<0xD0>(0x000011, 2); return true;
    // src/unknown/C0/C0449B.asm:163 LDY GAME_STATE+game_state::current_party_members
    case 0xC04667: cpu.execute_instruction<0xAC>(0x009889, 3); return true;
    // src/unknown/C0/C0449B.asm:164 LDX @LOCAL02 + fixed_point::integer
    case 0xC0466A: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0449B.asm:165 LDA @LOCAL01 + fixed_point::integer
    case 0xC0466C: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0449B.asm:166 JSR UNKNOWN_C05FD1
    case 0xC0466E: cpu.execute_instruction<0x20>(0x005FD1, 3); return true;
    // src/unknown/C0/C0449B.asm:167 AND #$003F
    case 0xC04671: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0449B.asm:167 AND #$003F
    // Overlapping static entry reached from 0xC04671.
    case 0xC04673: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0449B.asm:168 STA @VIRTUAL04
    case 0xC04674: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0449B.asm:169 BRA @UNKNOWN16
    case 0xC04676: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C0/C0449B.asm:171 LDA #0
    case 0xC04678: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0449B.asm:171 LDA #0
    // Overlapping static entry reached from 0xC04678.
    case 0xC0467A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0449B.asm:172 STA @VIRTUAL04
    case 0xC0467B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0449B.asm:174 LDA @VIRTUAL04
    case 0xC0467D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0449B.asm:175 STA GAME_STATE+game_state::trodden_tile_type
    case 0xC0467F: cpu.execute_instruction<0x8D>(0x009881, 3); return true;
    // src/unknown/C0/C0449B.asm:176 LDA #1
    case 0xC04682: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0449B.asm:176 LDA #1
    // Overlapping static entry reached from 0xC04682.
    case 0xC04684: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0449B.asm:177 STA @VIRTUAL02
    case 0xC04685: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:178 LDY GAME_STATE+game_state::current_party_members
    case 0xC04687: cpu.execute_instruction<0xAC>(0x009889, 3); return true;
    // src/unknown/C0/C0449B.asm:179 LDX @LOCAL02 + fixed_point::integer
    case 0xC0468A: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0449B.asm:180 LDA @LOCAL01 + fixed_point::integer
    case 0xC0468C: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0449B.asm:181 JSL NPC_COLLISION_CHECK
    case 0xC0468E: cpu.execute_instruction<0x22>(0xC05FF6, 4); return true;
    // src/unknown/C0/C0449B.asm:182 LDA ENTITY_COLLIDED_OBJECTS+46
    case 0xC04692: cpu.execute_instruction<0xAD>(0x0028CC, 3); return true;
    // src/unknown/C0/C0449B.asm:183 CMP #ENTITY_COLLISION_NO_OBJECT
    case 0xC04695: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0449B.asm:183 CMP #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC04695.
    case 0xC04697: cpu.execute_instruction<0xFF>(0xA905F0, 4); return true;
    // src/unknown/C0/C0449B.asm:184 BEQ @UNKNOWN17
    case 0xC04698: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0449B.asm:185 LDA #0
    case 0xC0469A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0449B.asm:185 LDA #0
    // Overlapping static entry reached from 0xC04697.
    case 0xC0469B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0449B.asm:185 LDA #0
    // Overlapping static entry reached from 0xC0469A.
    case 0xC0469C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0449B.asm:186 STA @VIRTUAL02
    case 0xC0469D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:188 LDA @VIRTUAL04
    case 0xC0469F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0449B.asm:189 AND #$00C0
    case 0xC046A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/unknown/C0/C0449B.asm:189 AND #$00C0
    // Overlapping static entry reached from 0xC046A1.
    case 0xC046A3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0449B.asm:190 BEQ @UNKNOWN18
    case 0xC046A4: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0449B.asm:191 LDA #0
    case 0xC046A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0449B.asm:191 LDA #0
    // Overlapping static entry reached from 0xC046A6.
    case 0xC046A8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0449B.asm:192 STA @VIRTUAL02
    case 0xC046A9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:194 LDA LADDER_STAIRS_TILE_X
    case 0xC046AB: cpu.execute_instruction<0xAD>(0x005DA8, 3); return true;
    // src/unknown/C0/C0449B.asm:195 CMP #.LOWORD(-1)
    case 0xC046AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0449B.asm:195 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC046AE.
    case 0xC046B0: cpu.execute_instruction<0xFF>(0xAE0EF0, 4); return true;
    // src/unknown/C0/C0449B.asm:196 BEQ @UNKNOWN19
    case 0xC046B1: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C0/C0449B.asm:197 LDX LADDER_STAIRS_TILE_Y
    case 0xC046B3: cpu.execute_instruction<0xAE>(0x005DAA, 3); return true;
    // src/unknown/C0/C0449B.asm:197 LDX LADDER_STAIRS_TILE_Y
    // Overlapping static entry reached from 0xC046B0.
    case 0xC046B4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:197 LDX LADDER_STAIRS_TILE_Y
    // Overlapping static entry reached from 0xC046B4.
    case 0xC046B5: cpu.execute_instruction<0x5D>(0x00A8AD, 3); return true;
    // src/unknown/C0/C0449B.asm:198 LDA LADDER_STAIRS_TILE_X
    case 0xC046B6: cpu.execute_instruction<0xAD>(0x005DA8, 3); return true;
    // src/unknown/C0/C0449B.asm:198 LDA LADDER_STAIRS_TILE_X
    // Overlapping static entry reached from 0xC046B5.
    case 0xC046B8: cpu.execute_instruction<0x5D>(0x002622, 3); return true;
    // src/unknown/C0/C0449B.asm:199 JSL UNKNOWN_C07526
    case 0xC046B9: cpu.execute_instruction<0x22>(0xC07526, 4); return true;
    // src/unknown/C0/C0449B.asm:199 JSL UNKNOWN_C07526
    // Overlapping static entry reached from 0xC046B8.
    case 0xC046BB: cpu.execute_instruction<0x75>(0x0000C0, 2); return true;
    // src/unknown/C0/C0449B.asm:200 STA @VIRTUAL02
    case 0xC046BD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:201 BRA @UNKNOWN21
    case 0xC046BF: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C0/C0449B.asm:203 LDX GAME_STATE+game_state::walking_style
    case 0xC046C1: cpu.execute_instruction<0xAE>(0x009883, 3); return true;
    // src/unknown/C0/C0449B.asm:204 CPX #WALKING_STYLE::LADDER
    case 0xC046C4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000007, 2); else cpu.execute_instruction<0xE0>(0x000007, 3); return true;
    // src/unknown/C0/C0449B.asm:204 CPX #WALKING_STYLE::LADDER
    // Overlapping static entry reached from 0xC046C4.
    case 0xC046C6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0449B.asm:205 BEQ @UNKNOWN20
    case 0xC046C7: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0449B.asm:206 CPX #WALKING_STYLE::ROPE
    case 0xC046C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000008, 2); else cpu.execute_instruction<0xE0>(0x000008, 3); return true;
    // src/unknown/C0/C0449B.asm:206 CPX #WALKING_STYLE::ROPE
    // Overlapping static entry reached from 0xC046C9.
    case 0xC046CB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0449B.asm:207 BNE @UNKNOWN21
    case 0xC046CC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C0449B.asm:209 STZ GAME_STATE+game_state::walking_style
    case 0xC046CE: cpu.execute_instruction<0x9C>(0x009883, 3); return true;
    // src/unknown/C0/C0449B.asm:211 LDA @VIRTUAL02
    case 0xC046D1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:212 BEQ @UNKNOWN22
    case 0xC046D3: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:213 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC046D5: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:213 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC046D7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:213 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC046D9: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:213 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC046DB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0449B.asm:214 LDA @VIRTUAL06
    case 0xC046DD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0449B.asm:215 STA GAME_STATE + game_state::unknown80
    case 0xC046DF: cpu.execute_instruction<0x8D>(0x009875, 3); return true;
    // src/unknown/C0/C0449B.asm:216 LDA @VIRTUAL06 + fixed_point::integer
    case 0xC046E2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C0449B.asm:217 STA GAME_STATE+game_state::leader_x_coord
    case 0xC046E4: cpu.execute_instruction<0x8D>(0x009877, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:218 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC046E7: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:218 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC046E9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:218 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC046EB: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:218 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC046ED: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0449B.asm:219 LDA @VIRTUAL06
    case 0xC046EF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0449B.asm:220 STA GAME_STATE + game_state::unknown84
    case 0xC046F1: cpu.execute_instruction<0x8D>(0x009879, 3); return true;
    // src/unknown/C0/C0449B.asm:221 LDA @VIRTUAL06 + fixed_point::integer
    case 0xC046F4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C0449B.asm:222 STA GAME_STATE+game_state::leader_y_coord
    case 0xC046F6: cpu.execute_instruction<0x8D>(0x00987B, 3); return true;
    // src/unknown/C0/C0449B.asm:223 BRA @UNKNOWN23
    case 0xC046F9: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0449B.asm:225 STZ GAME_STATE + game_state::unknown90
    case 0xC046FB: cpu.execute_instruction<0x9C>(0x009885, 3); return true;
    // src/unknown/C0/C0449B.asm:227 LDA FRAME_COUNTER
    case 0xC046FE: cpu.execute_instruction<0xAD>(0x000002, 3); return true;
    // src/unknown/C0/C0449B.asm:228 AND #$00FF
    case 0xC04701: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0449B.asm:228 AND #$00FF
    // Overlapping static entry reached from 0xC04701.
    case 0xC04703: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C0449B.asm:229 AND #$0001
    case 0xC04704: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0449B.asm:229 AND #$0001
    // Overlapping static entry reached from 0xC04704.
    case 0xC04706: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0449B.asm:230 BNE @UNKNOWN24
    case 0xC04707: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/C0/C0449B.asm:231 LDA ACTIVE_HOTSPOTS
    case 0xC04709: cpu.execute_instruction<0xAD>(0x005E3C, 3); return true;
    // src/unknown/C0/C0449B.asm:232 BEQ @UNKNOWN24
    case 0xC0470C: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C0449B.asm:233 LDA #0
    case 0xC0470E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0449B.asm:233 LDA #0
    // Overlapping static entry reached from 0xC0470E.
    case 0xC04710: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0449B.asm:234 JSL UNKNOWN_C073C0
    case 0xC04711: cpu.execute_instruction<0x22>(0xC073C0, 4); return true;
    // src/unknown/C0/C0449B.asm:236 LDA FRAME_COUNTER
    case 0xC04715: cpu.execute_instruction<0xAD>(0x000002, 3); return true;
    // src/unknown/C0/C0449B.asm:237 AND #$00FF
    case 0xC04718: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0449B.asm:237 AND #$00FF
    // Overlapping static entry reached from 0xC04718.
    case 0xC0471A: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C0449B.asm:238 AND #$0001
    case 0xC0471B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0449B.asm:238 AND #$0001
    // Overlapping static entry reached from 0xC0471B.
    case 0xC0471D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0449B.asm:239 BEQ @UNKNOWN25
    case 0xC0471E: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C0449B.asm:240 LDA ACTIVE_HOTSPOTS + .SIZEOF(active_hotspot)
    case 0xC04720: cpu.execute_instruction<0xAD>(0x005E4A, 3); return true;
    // src/unknown/C0/C0449B.asm:241 BEQ @UNKNOWN25
    case 0xC04723: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C0449B.asm:242 LDA #1
    case 0xC04725: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0449B.asm:242 LDA #1
    // Overlapping static entry reached from 0xC04725.
    case 0xC04727: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0449B.asm:243 JSL UNKNOWN_C073C0
    case 0xC04728: cpu.execute_instruction<0x22>(0xC073C0, 4); return true;
    // src/unknown/C0/C0449B.asm:245 LDX GAME_STATE+game_state::walking_style
    case 0xC0472C: cpu.execute_instruction<0xAE>(0x009883, 3); return true;
    // src/unknown/C0/C0449B.asm:246 CPX #WALKING_STYLE::LADDER
    case 0xC0472F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000007, 2); else cpu.execute_instruction<0xE0>(0x000007, 3); return true;
    // src/unknown/C0/C0449B.asm:246 CPX #WALKING_STYLE::LADDER
    // Overlapping static entry reached from 0xC0472F.
    case 0xC04731: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0449B.asm:247 BEQ @UNKNOWN26
    case 0xC04732: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0449B.asm:248 CPX #WALKING_STYLE::ROPE
    case 0xC04734: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000008, 2); else cpu.execute_instruction<0xE0>(0x000008, 3); return true;
    // src/unknown/C0/C0449B.asm:248 CPX #WALKING_STYLE::ROPE
    // Overlapping static entry reached from 0xC04734.
    case 0xC04736: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0449B.asm:249 BNE @UNKNOWN27
    case 0xC04737: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C0/C0449B.asm:251 LDA LADDER_STAIRS_TILE_X
    case 0xC04739: cpu.execute_instruction<0xAD>(0x005DA8, 3); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C0449B.asm:252 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0473C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C0449B.asm:252 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0473D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C0449B.asm:252 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0473E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:253 CLC
    case 0xC0473F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:254 ADC #8
    case 0xC04740: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C0/C0449B.asm:254 ADC #8
    // Overlapping static entry reached from 0xC04740.
    case 0xC04742: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0449B.asm:255 STA GAME_STATE+game_state::leader_x_coord
    case 0xC04743: cpu.execute_instruction<0x8D>(0x009877, 3); return true;
    // src/unknown/C0/C0449B.asm:257 LDA DEBUG
    case 0xC04746: cpu.execute_instruction<0xAD>(0x00436C, 3); return true;
    // src/unknown/C0/C0449B.asm:258 BEQ @RETURN
    case 0xC04749: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/unknown/C0/C0449B.asm:259 LDA PAD_STATE
    case 0xC0474B: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/unknown/C0/C0449B.asm:260 AND #PAD::X_BUTTON
    case 0xC0474E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/unknown/C0/C0449B.asm:260 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xC0474E.
    case 0xC04750: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0449B.asm:261 BEQ @RETURN
    case 0xC04751: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C0/C0449B.asm:262 LDX #.LOWORD(GAME_STATE) + game_state::leader_x_coord
    case 0xC04753: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000077, 2); else cpu.execute_instruction<0xA2>(0x009877, 3); return true;
    // src/unknown/C0/C0449B.asm:262 LDX #.LOWORD(GAME_STATE) + game_state::leader_x_coord
    // Overlapping static entry reached from 0xC04753.
    case 0xC04755: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:263 LDA __BSS_START__,X
    case 0xC04756: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0449B.asm:264 AND #$FFF8
    case 0xC04759: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x00FFF8, 3); return true;
    // src/unknown/C0/C0449B.asm:264 AND #$FFF8
    // Overlapping static entry reached from 0xC04759.
    case 0xC0475B: cpu.execute_instruction<0xFF>(0x00009D, 4); return true;
    // src/unknown/C0/C0449B.asm:265 STA __BSS_START__,X
    case 0xC0475C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0449B.asm:266 LDX #.LOWORD(GAME_STATE) + game_state::leader_y_coord
    case 0xC0475F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00007B, 2); else cpu.execute_instruction<0xA2>(0x00987B, 3); return true;
    // src/unknown/C0/C0449B.asm:266 LDX #.LOWORD(GAME_STATE) + game_state::leader_y_coord
    // Overlapping static entry reached from 0xC0475F.
    case 0xC04761: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:267 LDA __BSS_START__,X
    case 0xC04762: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0449B.asm:268 AND #$FFF8
    case 0xC04765: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x00FFF8, 3); return true;
    // src/unknown/C0/C0449B.asm:268 AND #$FFF8
    // Overlapping static entry reached from 0xC04765.
    case 0xC04767: cpu.execute_instruction<0xFF>(0x00009D, 4); return true;
    // src/unknown/C0/C0449B.asm:269 STA __BSS_START__,X
    case 0xC04768: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0449B.asm:271 END_C_FUNCTION
    case 0xC0476B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0449B.asm:271 END_C_FUNCTION
    case 0xC0476C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0476D.asm (unresolved).
bool execute_unresolved_c0_c0476d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0476D.asm:3 BEGIN_C_FUNCTION
    case 0xC0476D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0476D.asm:6 END_STACK_VARS
    case 0xC0476F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0476D.asm:6 END_STACK_VARS
    case 0xC04770: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0476D.asm:6 END_STACK_VARS
    case 0xC04771: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0476D.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC04771.
    case 0xC04773: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0476D.asm:6 END_STACK_VARS
    case 0xC04774: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0476D.asm:7 LDA #0
    case 0xC04775: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0476D.asm:7 LDA #0
    // Overlapping static entry reached from 0xC04775.
    case 0xC04777: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0476D.asm:8 STA @VIRTUAL04
    case 0xC04778: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0476D.asm:9 LDA CAMERA_FOCUS_ENTITY
    case 0xC0477A: cpu.execute_instruction<0xAD>(0x009E33, 3); return true;
    // src/unknown/C0/C0476D.asm:10 ASL
    case 0xC0477D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0476D.asm:11 TAX
    case 0xC0477E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0476D.asm:12 LDY ENTITY_ABS_X_TABLE,X
    case 0xC0477F: cpu.execute_instruction<0xBC>(0x000B8E, 3); return true;
    // src/unknown/C0/C0476D.asm:13 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC04782: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0476D.asm:14 STA @LOCAL00
    case 0xC04785: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0476D.asm:15 LDA ENTITY_ABS_X_FRACTION_TABLE,X
    case 0xC04787: cpu.execute_instruction<0xBD>(0x000C42, 3); return true;
    // src/unknown/C0/C0476D.asm:16 STA @VIRTUAL02
    case 0xC0478A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0476D.asm:17 LDA ENTITY_ABS_Y_FRACTION_TABLE,X
    case 0xC0478C: cpu.execute_instruction<0xBD>(0x000C7E, 3); return true;
    // src/unknown/C0/C0476D.asm:18 TAX
    case 0xC0478F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0476D.asm:19 CPY GAME_STATE+game_state::leader_x_coord
    case 0xC04790: cpu.execute_instruction<0xCC>(0x009877, 3); return true;
    // src/unknown/C0/C0476D.asm:20 BNE @UNKNOWN0
    case 0xC04793: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/unknown/C0/C0476D.asm:21 LDA @LOCAL00
    case 0xC04795: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0476D.asm:22 CMP GAME_STATE+game_state::leader_y_coord
    case 0xC04797: cpu.execute_instruction<0xCD>(0x00987B, 3); return true;
    // src/unknown/C0/C0476D.asm:23 BNE @UNKNOWN0
    case 0xC0479A: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/C0/C0476D.asm:24 LDA @VIRTUAL02
    case 0xC0479C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0476D.asm:25 CMP GAME_STATE + game_state::unknown80
    case 0xC0479E: cpu.execute_instruction<0xCD>(0x009875, 3); return true;
    // src/unknown/C0/C0476D.asm:26 BNE @UNKNOWN0
    case 0xC047A1: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0476D.asm:27 CPX GAME_STATE + game_state::unknown84
    case 0xC047A3: cpu.execute_instruction<0xEC>(0x009879, 3); return true;
    // src/unknown/C0/C0476D.asm:28 BEQ @UNKNOWN1
    case 0xC047A6: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0476D.asm:30 LDA #1
    case 0xC047A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0476D.asm:30 LDA #1
    // Overlapping static entry reached from 0xC047A8.
    case 0xC047AA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0476D.asm:31 STA @VIRTUAL04
    case 0xC047AB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0476D.asm:33 STY GAME_STATE+game_state::leader_x_coord
    case 0xC047AD: cpu.execute_instruction<0x8C>(0x009877, 3); return true;
    // src/unknown/C0/C0476D.asm:34 LDA @LOCAL00
    case 0xC047B0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0476D.asm:35 STA GAME_STATE+game_state::leader_y_coord
    case 0xC047B2: cpu.execute_instruction<0x8D>(0x00987B, 3); return true;
    // src/unknown/C0/C0476D.asm:36 LDA @VIRTUAL02
    case 0xC047B5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0476D.asm:37 STA GAME_STATE + game_state::unknown80
    case 0xC047B7: cpu.execute_instruction<0x8D>(0x009875, 3); return true;
    // src/unknown/C0/C0476D.asm:38 STX GAME_STATE + game_state::unknown84
    case 0xC047BA: cpu.execute_instruction<0x8E>(0x009879, 3); return true;
    // src/unknown/C0/C0476D.asm:39 LDA CAMERA_FOCUS_ENTITY
    case 0xC047BD: cpu.execute_instruction<0xAD>(0x009E33, 3); return true;
    // src/unknown/C0/C0476D.asm:40 ASL
    case 0xC047C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0476D.asm:41 TAX
    case 0xC047C1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0476D.asm:42 LDA ENTITY_DIRECTIONS,X
    case 0xC047C2: cpu.execute_instruction<0xBD>(0x002AF6, 3); return true;
    // src/unknown/C0/C0476D.asm:43 STA GAME_STATE+game_state::leader_direction
    case 0xC047C5: cpu.execute_instruction<0x8D>(0x00987F, 3); return true;
    // src/unknown/C0/C0476D.asm:44 LDA @VIRTUAL04
    case 0xC047C8: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0476D.asm:45 STA GAME_STATE + game_state::unknown90
    case 0xC047CA: cpu.execute_instruction<0x8D>(0x009885, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0476D.asm:46 END_C_FUNCTION
    case 0xC047CD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0476D.asm:46 END_C_FUNCTION
    case 0xC047CE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C047CF.asm (unresolved).
bool execute_unresolved_c0_c047cf_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C047CF.asm:3 BEGIN_C_FUNCTION
    case 0xC047CF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C047CF.asm:9 END_STACK_VARS
    case 0xC047D1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C047CF.asm:9 END_STACK_VARS
    case 0xC047D2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C047CF.asm:9 END_STACK_VARS
    case 0xC047D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C047CF.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC047D3.
    case 0xC047D5: cpu.execute_instruction<0xFF>(0xBAAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C047CF.asm:9 END_STACK_VARS
    case 0xC047D6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C047CF.asm:10 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC047D7: cpu.execute_instruction<0xAD>(0x004DBA, 3); return true;
    // src/unknown/C0/C047CF.asm:10 LDA ENEMY_HAS_BEEN_TOUCHED
    // Overlapping static entry reached from 0xC047D5.
    case 0xC047D9: cpu.execute_instruction<0x4D>(0x0003F0, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C047CF.asm:11 BNEL @UNKNOWN9
    case 0xC047DA: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C047CF.asm:11 BNEL @UNKNOWN9
    case 0xC047DC: cpu.execute_instruction<0x4C>(0x0048D1, 3); return true;
    // src/unknown/C0/C047CF.asm:12 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC047DF: cpu.execute_instruction<0xAD>(0x005D60, 3); return true;
    // src/unknown/C0/C047CF.asm:13 BEQ @UNKNOWN1
    case 0xC047E2: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C047CF.asm:14 DEC BATTLE_SWIRL_COUNTDOWN
    case 0xC047E4: cpu.execute_instruction<0xCE>(0x005D60, 3); return true;
    // src/unknown/C0/C047CF.asm:15 JMP @UNKNOWN9
    case 0xC047E7: cpu.execute_instruction<0x4C>(0x0048D1, 3); return true;
    // src/unknown/C0/C047CF.asm:17 LDA ESCALATOR_ENTRANCE_DIRECTION
    case 0xC047EA: cpu.execute_instruction<0xAD>(0x005DC6, 3); return true;
    // src/unknown/C0/C047CF.asm:18 AND #$0300
    case 0xC047ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000300, 3); return true;
    // src/unknown/C0/C047CF.asm:18 AND #$0300
    // Overlapping static entry reached from 0xC047ED.
    case 0xC047EF: cpu.execute_instruction<0x03>(0x0000F0, 2); return true;
    // src/unknown/C0/C047CF.asm:19 BEQ @UNKNOWN2
    case 0xC047F0: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C047CF.asm:19 BEQ @UNKNOWN2
    // Overlapping static entry reached from 0xC047EF.
    case 0xC047F1: cpu.execute_instruction<0x11>(0x0000C9, 2); return true;
    // src/unknown/C0/C047CF.asm:20 CMP #2 << 8
    case 0xC047F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000200, 3); return true;
    // src/unknown/C0/C047CF.asm:20 CMP #2 << 8
    // Overlapping static entry reached from 0xC047F1.
    case 0xC047F3: cpu.execute_instruction<0x00>(0x000002, 2); return true;
    // src/unknown/C0/C047CF.asm:20 CMP #2 << 8
    // Overlapping static entry reached from 0xC047F2.
    case 0xC047F4: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/C0/C047CF.asm:21 BEQ @UNKNOWN3
    case 0xC047F5: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C0/C047CF.asm:22 CMP #1 << 8
    case 0xC047F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C0/C047CF.asm:22 CMP #1 << 8
    // Overlapping static entry reached from 0xC047F7.
    case 0xC047F9: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/C0/C047CF.asm:23 BEQ @UNKNOWN4
    case 0xC047FA: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/unknown/C0/C047CF.asm:23 BEQ @UNKNOWN4
    // Overlapping static entry reached from 0xC047F9.
    case 0xC047FB: cpu.execute_instruction<0x19>(0x0000C9, 3); return true;
    // src/unknown/C0/C047CF.asm:24 CMP #3 << 8
    case 0xC047FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000300, 3); return true;
    // src/unknown/C0/C047CF.asm:24 CMP #3 << 8
    // Overlapping static entry reached from 0xC047FC.
    case 0xC047FE: cpu.execute_instruction<0x03>(0x0000F0, 2); return true;
    // src/unknown/C0/C047CF.asm:25 BEQ @UNKNOWN5
    case 0xC047FF: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/unknown/C0/C047CF.asm:25 BEQ @UNKNOWN5
    // Overlapping static entry reached from 0xC047FE.
    case 0xC04800: cpu.execute_instruction<0x1D>(0x002280, 3); return true;
    // src/unknown/C0/C047CF.asm:26 BRA @UNKNOWN6
    case 0xC04801: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/unknown/C0/C047CF.asm:28 LDA #7
    case 0xC04803: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C0/C047CF.asm:28 LDA #7
    // Overlapping static entry reached from 0xC04803.
    case 0xC04805: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C047CF.asm:29 STA @VIRTUAL02
    case 0xC04806: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C047CF.asm:30 STA @LOCAL03
    case 0xC04808: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C047CF.asm:31 BRA @UNKNOWN6
    case 0xC0480A: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C0/C047CF.asm:33 LDA #5
    case 0xC0480C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C047CF.asm:33 LDA #5
    // Overlapping static entry reached from 0xC0480C.
    case 0xC0480E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C047CF.asm:34 STA @VIRTUAL02
    case 0xC0480F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C047CF.asm:35 STA @LOCAL03
    case 0xC04811: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C047CF.asm:36 BRA @UNKNOWN6
    case 0xC04813: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C0/C047CF.asm:38 LDA #1
    case 0xC04815: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C047CF.asm:38 LDA #1
    // Overlapping static entry reached from 0xC04815.
    case 0xC04817: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C047CF.asm:39 STA @VIRTUAL02
    case 0xC04818: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C047CF.asm:40 STA @LOCAL03
    case 0xC0481A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C047CF.asm:41 BRA @UNKNOWN6
    case 0xC0481C: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C0/C047CF.asm:43 LDA #3
    case 0xC0481E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C047CF.asm:43 LDA #3
    // Overlapping static entry reached from 0xC0481E.
    case 0xC04820: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C047CF.asm:44 STA @VIRTUAL02
    case 0xC04821: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C047CF.asm:45 STA @LOCAL03
    case 0xC04823: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C047CF.asm:47 LDA #.LOWORD(-1)
    case 0xC04825: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C047CF.asm:47 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04825.
    case 0xC04827: cpu.execute_instruction<0xFF>(0x5DA88D, 4); return true;
    // src/unknown/C0/C047CF.asm:48 STA LADDER_STAIRS_TILE_X
    case 0xC04828: cpu.execute_instruction<0x8D>(0x005DA8, 3); return true;
    // src/unknown/C0/C047CF.asm:49 LDA @LOCAL03
    case 0xC0482B: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C047CF.asm:50 STA @VIRTUAL02
    case 0xC0482D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C047CF.asm:51 STA @LOCAL00
    case 0xC0482F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C047CF.asm:52 LDY GAME_STATE+game_state::current_party_members
    case 0xC04831: cpu.execute_instruction<0xAC>(0x009889, 3); return true;
    // src/unknown/C0/C047CF.asm:53 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC04834: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C047CF.asm:54 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC04837: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C047CF.asm:55 JSL UNKNOWN_C05B7B
    case 0xC0483A: cpu.execute_instruction<0x22>(0xC05B7B, 4); return true;
    // src/unknown/C0/C047CF.asm:56 LDA LADDER_STAIRS_TILE_X
    case 0xC0483E: cpu.execute_instruction<0xAD>(0x005DA8, 3); return true;
    // src/unknown/C0/C047CF.asm:57 CMP #.LOWORD(-1)
    case 0xC04841: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C047CF.asm:57 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04841.
    case 0xC04843: cpu.execute_instruction<0xFF>(0xAE0AF0, 4); return true;
    // src/unknown/C0/C047CF.asm:58 BEQ @UNKNOWN7
    case 0xC04844: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C047CF.asm:59 LDX LADDER_STAIRS_TILE_Y
    case 0xC04846: cpu.execute_instruction<0xAE>(0x005DAA, 3); return true;
    // src/unknown/C0/C047CF.asm:59 LDX LADDER_STAIRS_TILE_Y
    // Overlapping static entry reached from 0xC04843.
    case 0xC04847: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C047CF.asm:59 LDX LADDER_STAIRS_TILE_Y
    // Overlapping static entry reached from 0xC04847.
    case 0xC04848: cpu.execute_instruction<0x5D>(0x00A8AD, 3); return true;
    // src/unknown/C0/C047CF.asm:60 LDA LADDER_STAIRS_TILE_X
    case 0xC04849: cpu.execute_instruction<0xAD>(0x005DA8, 3); return true;
    // src/unknown/C0/C047CF.asm:60 LDA LADDER_STAIRS_TILE_X
    // Overlapping static entry reached from 0xC04848.
    case 0xC0484B: cpu.execute_instruction<0x5D>(0x002622, 3); return true;
    // src/unknown/C0/C047CF.asm:61 JSL UNKNOWN_C07526
    case 0xC0484C: cpu.execute_instruction<0x22>(0xC07526, 4); return true;
    // src/unknown/C0/C047CF.asm:61 JSL UNKNOWN_C07526
    // Overlapping static entry reached from 0xC0484B.
    case 0xC0484E: cpu.execute_instruction<0x75>(0x0000C0, 2); return true;
    // src/unknown/C0/C047CF.asm:63 LDX #1
    case 0xC04850: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C047CF.asm:63 LDX #1
    // Overlapping static entry reached from 0xC04850.
    case 0xC04852: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C047CF.asm:67 BEQ @UNKNOWN8
    case 0xC04853: cpu.execute_instruction<0xF0>(0x000076, 2); return true;
    // src/unknown/C0/C047CF.asm:69 LDY #.LOWORD(GAME_STATE) + game_state::unknown80
    case 0xC04855: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000075, 2); else cpu.execute_instruction<0xA0>(0x009875, 3); return true;
    // src/unknown/C0/C047CF.asm:69 LDY #.LOWORD(GAME_STATE) + game_state::unknown80
    // Overlapping static entry reached from 0xC04855.
    case 0xC04857: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C047CF.asm:70 STY @LOCAL02
    case 0xC04858: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C047CF.asm:71 LDA @VIRTUAL02
    case 0xC0485A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C047CF.asm:72 ASL
    case 0xC0485C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C047CF.asm:73 ASL
    case 0xC0485D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C047CF.asm:74 STA @LOCAL01
    case 0xC0485E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C047CF.asm:75 CLC
    case 0xC04860: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C047CF.asm:81 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + .SIZEOF(movement_speeds) * 12
    case 0xC04861: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000056, 2); else cpu.execute_instruction<0x69>(0x004F56, 3); return true;
    // src/unknown/C0/C047CF.asm:81 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + .SIZEOF(movement_speeds) * 12
    // Overlapping static entry reached from 0xC04861.
    case 0xC04863: cpu.execute_instruction<0x4F>(0x00B9A8, 4); return true;
    // src/unknown/C0/C047CF.asm:83 TAY
    case 0xC04864: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C047CF.asm:84 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04865: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C047CF.asm:84 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    // Overlapping static entry reached from 0xC04863.
    case 0xC04867: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C047CF.asm:84 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04868: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C047CF.asm:84 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC0486A: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C047CF.asm:84 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC0486D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C047CF.asm:85 LDY @LOCAL02
    case 0xC0486F: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C047CF.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04871: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C047CF.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04874: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C047CF.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04876: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C047CF.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04879: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C047CF.asm:87 CLC
    case 0xC0487B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C047CF.asm:88 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0487C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C047CF.asm:88 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0487E: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C047CF.asm:88 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04880: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C047CF.asm:88 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04882: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C047CF.asm:88 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04884: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C047CF.asm:88 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04886: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C047CF.asm:89 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04888: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C047CF.asm:89 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0488A: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C047CF.asm:89 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0488D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C047CF.asm:89 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0488F: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C0/C047CF.asm:90 LDY #.LOWORD(GAME_STATE) + game_state::unknown84
    case 0xC04892: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000079, 2); else cpu.execute_instruction<0xA0>(0x009879, 3); return true;
    // src/unknown/C0/C047CF.asm:90 LDY #.LOWORD(GAME_STATE) + game_state::unknown84
    // Overlapping static entry reached from 0xC04892.
    case 0xC04894: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C047CF.asm:91 STY @LOCAL03
    case 0xC04895: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C047CF.asm:92 LDA @LOCAL01
    case 0xC04897: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C047CF.asm:93 CLC
    case 0xC04899: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C047CF.asm:99 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + .SIZEOF(movement_speeds) * 12
    case 0xC0489A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000016, 2); else cpu.execute_instruction<0x69>(0x005116, 3); return true;
    // src/unknown/C0/C047CF.asm:99 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + .SIZEOF(movement_speeds) * 12
    // Overlapping static entry reached from 0xC0489A.
    case 0xC0489C: cpu.execute_instruction<0x51>(0x0000A8, 2); return true;
    // src/unknown/C0/C047CF.asm:101 TAY
    case 0xC0489D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C047CF.asm:102 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC0489E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C047CF.asm:102 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC048A1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C047CF.asm:102 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC048A3: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C047CF.asm:102 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC048A6: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C047CF.asm:103 LDY @LOCAL03
    case 0xC048A8: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C047CF.asm:104 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC048AA: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C047CF.asm:104 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC048AD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C047CF.asm:104 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC048AF: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C047CF.asm:104 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC048B2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C047CF.asm:105 CLC
    case 0xC048B4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C047CF.asm:106 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC048B5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C047CF.asm:106 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC048B7: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C047CF.asm:106 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC048B9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C047CF.asm:106 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC048BB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C047CF.asm:106 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC048BD: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C047CF.asm:106 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC048BF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C047CF.asm:107 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC048C1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C047CF.asm:107 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC048C3: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C047CF.asm:107 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC048C6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C047CF.asm:107 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC048C8: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C0/C047CF.asm:109 LDA #1
    case 0xC048CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C047CF.asm:109 LDA #1
    // Overlapping static entry reached from 0xC048CB.
    case 0xC048CD: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C047CF.asm:110 STA GAME_STATE + game_state::unknown90
    case 0xC048CE: cpu.execute_instruction<0x8D>(0x009885, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C047CF.asm:112 END_C_FUNCTION
    case 0xC048D1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C047CF.asm:112 END_C_FUNCTION
    case 0xC048D2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C048D3.asm (unresolved).
bool execute_unresolved_c0_c048d3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C048D3.asm:3 BEGIN_C_FUNCTION
    case 0xC048D3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C048D3.asm:14 END_STACK_VARS
    case 0xC048D5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C048D3.asm:14 END_STACK_VARS
    case 0xC048D6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C048D3.asm:14 END_STACK_VARS
    case 0xC048D7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C048D3.asm:14 END_STACK_VARS
    case 0xC048D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x00FFDE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C048D3.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC048D8.
    case 0xC048DA: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C048D3.asm:14 END_STACK_VARS
    case 0xC048DB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C048D3.asm:14 END_STACK_VARS
    case 0xC048DC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C048D3.asm:15 TAX
    case 0xC048DD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C048D3.asm:16 STX @LOCAL07
    case 0xC048DE: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/unknown/C0/C048D3.asm:17 LDA GAME_STATE+game_state::walking_style
    case 0xC048E0: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/unknown/C0/C048D3.asm:18 JSL MAP_INPUT_TO_DIRECTION
    case 0xC048E3: cpu.execute_instruction<0x22>(0xC0404F, 4); return true;
    // src/unknown/C0/C048D3.asm:19 TAY
    case 0xC048E7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C048D3.asm:20 STY @LOCAL06
    case 0xC048E8: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/unknown/C0/C048D3.asm:21 STY @VIRTUAL02
    case 0xC048EA: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C048D3.asm:22 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC048EC: cpu.execute_instruction<0xAD>(0x005D60, 3); return true;
    // src/unknown/C0/C048D3.asm:23 BEQ @UNKNOWN1
    case 0xC048EF: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/unknown/C0/C048D3.asm:24 LDX BATTLE_SWIRL_COUNTDOWN
    case 0xC048F1: cpu.execute_instruction<0xAE>(0x005D60, 3); return true;
    // src/unknown/C0/C048D3.asm:25 DEX
    case 0xC048F4: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C048D3.asm:26 STX BATTLE_SWIRL_COUNTDOWN
    case 0xC048F5: cpu.execute_instruction<0x8E>(0x005D60, 3); return true;
    // src/unknown/C0/C048D3.asm:27 BEQ @UNKNOWN0
    case 0xC048F8: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C0/C048D3.asm:28 LDY GAME_STATE+game_state::current_party_members
    case 0xC048FA: cpu.execute_instruction<0xAC>(0x009889, 3); return true;
    // src/unknown/C0/C048D3.asm:29 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC048FD: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C048D3.asm:30 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC04900: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C048D3.asm:31 JSL NPC_COLLISION_CHECK
    case 0xC04903: cpu.execute_instruction<0x22>(0xC05FF6, 4); return true;
    // src/unknown/C0/C048D3.asm:32 JMP @UNKNOWN9
    case 0xC04907: cpu.execute_instruction<0x4C>(0x004A79, 3); return true;
    // src/unknown/C0/C048D3.asm:34 LDA #.LOWORD(-1)
    case 0xC0490A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C048D3.asm:34 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0490A.
    case 0xC0490C: cpu.execute_instruction<0xFF>(0x4DC28D, 4); return true;
    // src/unknown/C0/C048D3.asm:35 STA BATTLE_MODE
    case 0xC0490D: cpu.execute_instruction<0x8D>(0x004DC2, 3); return true;
    // src/unknown/C0/C048D3.asm:36 JMP @UNKNOWN9
    case 0xC04910: cpu.execute_instruction<0x4C>(0x004A79, 3); return true;
    // src/unknown/C0/C048D3.asm:38 LDA PAD_PRESS
    case 0xC04913: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C0/C048D3.asm:39 AND #PAD::R_BUTTON
    case 0xC04916: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x000010, 3); return true;
    // src/unknown/C0/C048D3.asm:39 AND #PAD::R_BUTTON
    // Overlapping static entry reached from 0xC04916.
    case 0xC04918: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C048D3.asm:40 BEQ @UNKNOWN2
    case 0xC04919: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C048D3.asm:41 LDA #SFX::BICYCLE_BELL
    case 0xC0491B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/unknown/C0/C048D3.asm:41 LDA #SFX::BICYCLE_BELL
    // Overlapping static entry reached from 0xC0491B.
    case 0xC0491D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C048D3.asm:42 JSL PLAY_SOUND
    case 0xC0491E: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/unknown/C0/C048D3.asm:44 LDY @LOCAL06
    case 0xC04922: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/unknown/C0/C048D3.asm:45 CPY #.LOWORD(-1)
    case 0xC04924: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C048D3.asm:45 CPY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04924.
    case 0xC04926: cpu.execute_instruction<0xFF>(0xA61BD0, 4); return true;
    // src/unknown/C0/C048D3.asm:46 BNE @UNKNOWN4
    case 0xC04927: cpu.execute_instruction<0xD0>(0x00001B, 2); return true;
    // src/unknown/C0/C048D3.asm:47 LDX @LOCAL07
    case 0xC04929: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/unknown/C0/C048D3.asm:47 LDX @LOCAL07
    // Overlapping static entry reached from 0xC04926.
    case 0xC0492A: cpu.execute_instruction<0x20>(0x0007F0, 3); return true;
    // src/unknown/C0/C048D3.asm:48 BEQ @UNKNOWN3
    case 0xC0492B: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C048D3.asm:49 LDY GAME_STATE+game_state::leader_direction
    case 0xC0492D: cpu.execute_instruction<0xAC>(0x00987F, 3); return true;
    // src/unknown/C0/C048D3.asm:50 STY @LOCAL06
    case 0xC04930: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/unknown/C0/C048D3.asm:51 BRA @UNKNOWN4
    case 0xC04932: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C0/C048D3.asm:53 LDY GAME_STATE+game_state::current_party_members
    case 0xC04934: cpu.execute_instruction<0xAC>(0x009889, 3); return true;
    // src/unknown/C0/C048D3.asm:54 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC04937: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C048D3.asm:55 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0493A: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C048D3.asm:56 JSL NPC_COLLISION_CHECK
    case 0xC0493D: cpu.execute_instruction<0x22>(0xC05FF6, 4); return true;
    // src/unknown/C0/C048D3.asm:57 JMP @UNKNOWN9
    case 0xC04941: cpu.execute_instruction<0x4C>(0x004A79, 3); return true;
    // src/unknown/C0/C048D3.asm:59 TYA
    case 0xC04944: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C048D3.asm:60 AND #$0001
    case 0xC04945: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C048D3.asm:60 AND #$0001
    // Overlapping static entry reached from 0xC04945.
    case 0xC04947: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C048D3.asm:61 BEQ @UNKNOWN5
    case 0xC04948: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C048D3.asm:62 LDA #4
    case 0xC0494A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C0/C048D3.asm:62 LDA #4
    // Overlapping static entry reached from 0xC0494A.
    case 0xC0494C: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C048D3.asm:63 STA BICYCLE_DIAGONAL_TURN_COUNTER
    case 0xC0494D: cpu.execute_instruction<0x8D>(0x005D5A, 3); return true;
    // src/unknown/C0/C048D3.asm:64 BRA @UNKNOWN7
    case 0xC04950: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/unknown/C0/C048D3.asm:66 LDA BICYCLE_DIAGONAL_TURN_COUNTER
    case 0xC04952: cpu.execute_instruction<0xAD>(0x005D5A, 3); return true;
    // src/unknown/C0/C048D3.asm:67 BEQ @UNKNOWN7
    case 0xC04955: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C0/C048D3.asm:68 LDX BICYCLE_DIAGONAL_TURN_COUNTER
    case 0xC04957: cpu.execute_instruction<0xAE>(0x005D5A, 3); return true;
    // src/unknown/C0/C048D3.asm:69 DEX
    case 0xC0495A: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C048D3.asm:70 STX BICYCLE_DIAGONAL_TURN_COUNTER
    case 0xC0495B: cpu.execute_instruction<0x8E>(0x005D5A, 3); return true;
    // src/unknown/C0/C048D3.asm:71 BEQ @UNKNOWN6
    case 0xC0495E: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C048D3.asm:72 LDY GAME_STATE+game_state::leader_direction
    case 0xC04960: cpu.execute_instruction<0xAC>(0x00987F, 3); return true;
    // src/unknown/C0/C048D3.asm:73 STY @LOCAL06
    case 0xC04963: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/unknown/C0/C048D3.asm:74 BRA @UNKNOWN7
    case 0xC04965: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C0/C048D3.asm:76 LDA @VIRTUAL02
    case 0xC04967: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C048D3.asm:77 CMP #.LOWORD(-1)
    case 0xC04969: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C048D3.asm:77 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04969.
    case 0xC0496B: cpu.execute_instruction<0xFF>(0xAC05D0, 4); return true;
    // src/unknown/C0/C048D3.asm:78 BNE @UNKNOWN7
    case 0xC0496C: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C048D3.asm:79 LDY GAME_STATE+game_state::leader_direction
    case 0xC0496E: cpu.execute_instruction<0xAC>(0x00987F, 3); return true;
    // src/unknown/C0/C048D3.asm:79 LDY GAME_STATE+game_state::leader_direction
    // Overlapping static entry reached from 0xC0496B.
    case 0xC0496F: cpu.execute_instruction<0x7F>(0x1E8498, 4); return true;
    // src/unknown/C0/C048D3.asm:80 STY @LOCAL06
    case 0xC04971: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/unknown/C0/C048D3.asm:82 STY GAME_STATE+game_state::leader_direction
    case 0xC04973: cpu.execute_instruction<0x8C>(0x00987F, 3); return true;
    // src/unknown/C0/C048D3.asm:83 LDA #.LOWORD(GAME_STATE) + game_state::unknown80
    case 0xC04976: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000075, 2); else cpu.execute_instruction<0xA9>(0x009875, 3); return true;
    // src/unknown/C0/C048D3.asm:83 LDA #.LOWORD(GAME_STATE) + game_state::unknown80
    // Overlapping static entry reached from 0xC04976.
    case 0xC04978: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C048D3.asm:84 STA @LOCAL05
    case 0xC04979: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C048D3.asm:85 TYA
    case 0xC0497B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C048D3.asm:86 ASL
    case 0xC0497C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C048D3.asm:87 ASL
    case 0xC0497D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C048D3.asm:88 STA @LOCAL04
    case 0xC0497E: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C048D3.asm:89 CLC
    case 0xC04980: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C048D3.asm:90 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + .SIZEOF(movement_speeds) * 3
    case 0xC04981: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000036, 2); else cpu.execute_instruction<0x69>(0x004E36, 3); return true;
    // src/unknown/C0/C048D3.asm:90 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + .SIZEOF(movement_speeds) * 3
    // Overlapping static entry reached from 0xC04981.
    case 0xC04983: cpu.execute_instruction<0x4E>(0x00B9A8, 3); return true;
    // src/unknown/C0/C048D3.asm:91 TAY
    case 0xC04984: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C048D3.asm:92 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04985: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C048D3.asm:92 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    // Overlapping static entry reached from 0xC04983.
    case 0xC04986: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C048D3.asm:92 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04988: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C048D3.asm:92 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC0498A: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C048D3.asm:92 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC0498D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C048D3.asm:93 LDY @LOCAL05
    case 0xC0498F: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C048D3.asm:94 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04991: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C048D3.asm:94 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04994: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C048D3.asm:94 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04996: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C048D3.asm:94 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04999: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C048D3.asm:95 CLC
    case 0xC0499B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C048D3.asm:96 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0499C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C048D3.asm:96 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0499E: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C048D3.asm:96 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC049A0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C048D3.asm:96 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC049A2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C048D3.asm:96 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC049A4: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C048D3.asm:96 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC049A6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C048D3.asm:97 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC049A8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C048D3.asm:97 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC049AA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C048D3.asm:97 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC049AC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C048D3.asm:97 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC049AE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C048D3.asm:98 LDA #.LOWORD(GAME_STATE) + game_state::unknown84
    case 0xC049B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000079, 2); else cpu.execute_instruction<0xA9>(0x009879, 3); return true;
    // src/unknown/C0/C048D3.asm:98 LDA #.LOWORD(GAME_STATE) + game_state::unknown84
    // Overlapping static entry reached from 0xC049B0.
    case 0xC049B2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C048D3.asm:99 STA @LOCAL07
    case 0xC049B3: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C048D3.asm:100 LDA @LOCAL04
    case 0xC049B5: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C048D3.asm:101 CLC
    case 0xC049B7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C048D3.asm:102 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + .SIZEOF(movement_speeds) * 3
    case 0xC049B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F6, 2); else cpu.execute_instruction<0x69>(0x004FF6, 3); return true;
    // src/unknown/C0/C048D3.asm:102 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + .SIZEOF(movement_speeds) * 3
    // Overlapping static entry reached from 0xC049B8.
    case 0xC049BA: cpu.execute_instruction<0x4F>(0x00B9A8, 4); return true;
    // src/unknown/C0/C048D3.asm:103 TAY
    case 0xC049BB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C048D3.asm:104 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC049BC: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C048D3.asm:104 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    // Overlapping static entry reached from 0xC049BA.
    case 0xC049BE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C048D3.asm:104 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC049BF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C048D3.asm:104 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC049C1: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C048D3.asm:104 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC049C4: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C048D3.asm:105 LDY @LOCAL07
    case 0xC049C6: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C048D3.asm:106 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC049C8: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C048D3.asm:106 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC049CB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C048D3.asm:106 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC049CD: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C048D3.asm:106 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC049D0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C048D3.asm:107 CLC
    case 0xC049D2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C048D3.asm:108 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC049D3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C048D3.asm:108 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC049D5: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C048D3.asm:108 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC049D7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C048D3.asm:108 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC049D9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C048D3.asm:108 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC049DB: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C048D3.asm:108 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC049DD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C048D3.asm:109 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC049DF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C048D3.asm:109 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC049E1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C048D3.asm:109 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC049E3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C048D3.asm:109 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC049E5: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C048D3.asm:110 LDA #.LOWORD(-1)
    case 0xC049E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C048D3.asm:110 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC049E7.
    case 0xC049E9: cpu.execute_instruction<0xFF>(0x5DA88D, 4); return true;
    // src/unknown/C0/C048D3.asm:111 STA LADDER_STAIRS_TILE_X
    case 0xC049EA: cpu.execute_instruction<0x8D>(0x005DA8, 3); return true;
    // src/unknown/C0/C048D3.asm:112 TDC
    case 0xC049ED: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C0/C048D3.asm:113 CLC
    case 0xC049EE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C048D3.asm:114 ADC #18
    case 0xC049EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x000012, 3); return true;
    // src/unknown/C0/C048D3.asm:114 ADC #18
    // Overlapping static entry reached from 0xC049EF.
    case 0xC049F1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C048D3.asm:115 STA @VIRTUAL04
    case 0xC049F2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C048D3.asm:116 TDC
    case 0xC049F4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C0/C048D3.asm:117 CLC
    case 0xC049F5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C048D3.asm:118 ADC #22
    case 0xC049F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000016, 2); else cpu.execute_instruction<0x69>(0x000016, 3); return true;
    // src/unknown/C0/C048D3.asm:118 ADC #22
    // Overlapping static entry reached from 0xC049F6.
    case 0xC049F8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C048D3.asm:119 STA @VIRTUAL02
    case 0xC049F9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C048D3.asm:120 LDY @LOCAL06
    case 0xC049FB: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/unknown/C0/C048D3.asm:121 STY @LOCAL00
    case 0xC049FD: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C048D3.asm:122 LDY #24
    case 0xC049FF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x000018, 3); return true;
    // src/unknown/C0/C048D3.asm:122 LDY #24
    // Overlapping static entry reached from 0xC049FF.
    case 0xC04A01: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C048D3.asm:123 LDX @VIRTUAL02
    case 0xC04A02: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C048D3.asm:124 LDA __BSS_START__,X
    case 0xC04A04: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C048D3.asm:125 TAX
    case 0xC04A07: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C048D3.asm:126 STX @LOCAL03
    case 0xC04A08: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C0/C048D3.asm:127 LDX @VIRTUAL04
    case 0xC04A0A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C048D3.asm:128 LDA __BSS_START__,X
    case 0xC04A0C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C048D3.asm:129 LDX @LOCAL03
    case 0xC04A0F: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C048D3.asm:130 JSL UNKNOWN_C05CD7
    case 0xC04A11: cpu.execute_instruction<0x22>(0xC05CD7, 4); return true;
    // src/unknown/C0/C048D3.asm:131 STA @LOCAL04
    case 0xC04A15: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C048D3.asm:132 LDY GAME_STATE+game_state::current_party_members
    case 0xC04A17: cpu.execute_instruction<0xAC>(0x009889, 3); return true;
    // src/unknown/C0/C048D3.asm:133 LDX @VIRTUAL02
    case 0xC04A1A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C048D3.asm:134 LDA __BSS_START__,X
    case 0xC04A1C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C048D3.asm:135 TAX
    case 0xC04A1F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C048D3.asm:136 STX @LOCAL06
    case 0xC04A20: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/unknown/C0/C048D3.asm:137 LDX @VIRTUAL04
    case 0xC04A22: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C048D3.asm:138 LDA __BSS_START__,X
    case 0xC04A24: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C048D3.asm:139 LDX @LOCAL06
    case 0xC04A27: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/unknown/C0/C048D3.asm:140 JSL NPC_COLLISION_CHECK
    case 0xC04A29: cpu.execute_instruction<0x22>(0xC05FF6, 4); return true;
    // src/unknown/C0/C048D3.asm:141 LDA ENTITY_COLLIDED_OBJECTS + 23 * 2
    case 0xC04A2D: cpu.execute_instruction<0xAD>(0x0028CC, 3); return true;
    // src/unknown/C0/C048D3.asm:142 CMP #ENTITY_COLLISION_NO_OBJECT
    case 0xC04A30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C048D3.asm:142 CMP #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC04A30.
    case 0xC04A32: cpu.execute_instruction<0xFF>(0xA244D0, 4); return true;
    // src/unknown/C0/C048D3.asm:143 BNE @UNKNOWN9
    case 0xC04A33: cpu.execute_instruction<0xD0>(0x000044, 2); return true;
    // src/unknown/C0/C048D3.asm:144 LDX #.LOWORD(GAME_STATE) + game_state::unknown90
    case 0xC04A35: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000085, 2); else cpu.execute_instruction<0xA2>(0x009885, 3); return true;
    // src/unknown/C0/C048D3.asm:144 LDX #.LOWORD(GAME_STATE) + game_state::unknown90
    // Overlapping static entry reached from 0xC04A32.
    case 0xC04A36: cpu.execute_instruction<0x85>(0x000098, 2); return true;
    // src/unknown/C0/C048D3.asm:144 LDX #.LOWORD(GAME_STATE) + game_state::unknown90
    // Overlapping static entry reached from 0xC04A35.
    case 0xC04A37: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C048D3.asm:145 LDA __BSS_START__,X
    case 0xC04A38: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C048D3.asm:146 INC
    case 0xC04A3B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C048D3.asm:147 STA __BSS_START__,X
    case 0xC04A3C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C048D3.asm:148 INC PLAYER_HAS_MOVED_SINCE_MAP_LOAD
    case 0xC04A3F: cpu.execute_instruction<0xEE>(0x002890, 3); return true;
    // src/unknown/C0/C048D3.asm:149 LDA @LOCAL04
    case 0xC04A42: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C048D3.asm:150 AND #$00C0
    case 0xC04A44: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/unknown/C0/C048D3.asm:150 AND #$00C0
    // Overlapping static entry reached from 0xC04A44.
    case 0xC04A46: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C048D3.asm:151 BEQ @UNKNOWN8
    case 0xC04A47: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C048D3.asm:152 LDA #0
    case 0xC04A49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C048D3.asm:152 LDA #0
    // Overlapping static entry reached from 0xC04A49.
    case 0xC04A4B: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C048D3.asm:153 STA __BSS_START__,X
    case 0xC04A4C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C048D3.asm:154 BRA @UNKNOWN9
    case 0xC04A4F: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C048D3.asm:156 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC04A51: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C048D3.asm:156 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC04A53: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C048D3.asm:156 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC04A55: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C048D3.asm:156 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC04A57: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C048D3.asm:157 LDY @LOCAL05
    case 0xC04A59: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C048D3.asm:158 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04A5B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C048D3.asm:158 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04A5D: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C048D3.asm:158 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04A60: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C048D3.asm:158 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04A62: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C048D3.asm:159 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC04A65: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C048D3.asm:159 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC04A67: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C048D3.asm:159 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC04A69: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C048D3.asm:159 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC04A6B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C048D3.asm:160 LDY @LOCAL07
    case 0xC04A6D: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C048D3.asm:161 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04A6F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C048D3.asm:161 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04A71: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C048D3.asm:161 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04A74: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C048D3.asm:161 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04A76: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C048D3.asm:163 END_C_FUNCTION
    case 0xC04A79: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C048D3.asm:163 END_C_FUNCTION
    case 0xC04A7A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04A7B.asm (unresolved).
bool execute_unresolved_c0_c04a7b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C04A7B.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC04A7B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C04A7B.asm:4 LDA CAMERA_MODE_BACKUP
    case 0xC04A7D: cpu.execute_instruction<0xAD>(0x005D7A, 3); return true;
    // src/unknown/C0/C04A7B.asm:5 STA GAME_STATE + game_state::unknownB0
    case 0xC04A80: cpu.execute_instruction<0x8D>(0x0098A5, 3); return true;
    // src/unknown/C0/C04A7B.asm:6 JSL UNKNOWN_C0D19B
    case 0xC04A83: cpu.execute_instruction<0x22>(0xC0D19B, 4); return true;
    // src/unknown/C0/C04A7B.asm:7 RTL
    case 0xC04A87: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04A88.asm (unresolved).
bool execute_unresolved_c0_c04a88_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C04A88.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC04A88: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C04A88.asm:4 LDA #$000C
    case 0xC04A8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C0/C04A88.asm:4 LDA #$000C
    // Overlapping static entry reached from 0xC04A8A.
    case 0xC04A8C: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C04A88.asm:5 STA CAMERA_MODE_3_FRAMES_LEFT
    case 0xC04A8D: cpu.execute_instruction<0x8D>(0x005D7C, 3); return true;
    // src/unknown/C0/C04A88.asm:6 LDX #.LOWORD(GAME_STATE) + game_state::unknownB0
    case 0xC04A90: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000A5, 2); else cpu.execute_instruction<0xA2>(0x0098A5, 3); return true;
    // src/unknown/C0/C04A88.asm:6 LDX #.LOWORD(GAME_STATE) + game_state::unknownB0
    // Overlapping static entry reached from 0xC04A90.
    case 0xC04A92: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C04A88.asm:7 LDA __BSS_START__,X
    case 0xC04A93: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04A88.asm:8 STA CAMERA_MODE_BACKUP
    case 0xC04A96: cpu.execute_instruction<0x8D>(0x005D7A, 3); return true;
    // src/unknown/C0/C04A88.asm:9 LDA #$0003
    case 0xC04A99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C04A88.asm:9 LDA #$0003
    // Overlapping static entry reached from 0xC04A99.
    case 0xC04A9B: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C04A88.asm:10 STA __BSS_START__,X
    case 0xC04A9C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04A88.asm:11 LDA #$0002
    case 0xC04A9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C04A88.asm:11 LDA #$0002
    // Overlapping static entry reached from 0xC04A9F.
    case 0xC04AA1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C04A88.asm:12 JSL UNKNOWN_C0AC0C
    case 0xC04AA2: cpu.execute_instruction<0x22>(0xC0AC0C, 4); return true;
    // src/unknown/C0/C04A88.asm:13 LDA #$0001
    case 0xC04AA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C04A88.asm:13 LDA #$0001
    // Overlapping static entry reached from 0xC04AA6.
    case 0xC04AA8: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C04A88.asm:14 STA OVERWORLD_STATUS_SUPPRESSION
    case 0xC04AA9: cpu.execute_instruction<0x8D>(0x005D98, 3); return true;
    // src/unknown/C0/C04A88.asm:15 RTL
    case 0xC04AAC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04AAD.asm (unresolved).
bool execute_unresolved_c0_c04aad_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C04AAD.asm:3 BEGIN_C_FUNCTION
    case 0xC04AAD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C04AAD.asm:7 END_STACK_VARS
    case 0xC04AAF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C04AAD.asm:7 END_STACK_VARS
    case 0xC04AB0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04AAD.asm:7 END_STACK_VARS
    case 0xC04AB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04AAD.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC04AB1.
    case 0xC04AB3: cpu.execute_instruction<0xFF>(0x7CAE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C04AAD.asm:7 END_STACK_VARS
    case 0xC04AB4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:8 LDX CAMERA_MODE_3_FRAMES_LEFT
    case 0xC04AB5: cpu.execute_instruction<0xAE>(0x005D7C, 3); return true;
    // src/unknown/C0/C04AAD.asm:8 LDX CAMERA_MODE_3_FRAMES_LEFT
    // Overlapping static entry reached from 0xC04AB3.
    case 0xC04AB7: cpu.execute_instruction<0x5D>(0x008ECA, 3); return true;
    // src/unknown/C0/C04AAD.asm:9 DEX
    case 0xC04AB8: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:10 STX CAMERA_MODE_3_FRAMES_LEFT
    case 0xC04AB9: cpu.execute_instruction<0x8E>(0x005D7C, 3); return true;
    // src/unknown/C0/C04AAD.asm:10 STX CAMERA_MODE_3_FRAMES_LEFT
    // Overlapping static entry reached from 0xC04AB7.
    case 0xC04ABA: cpu.execute_instruction<0x7C>(0x00D05D, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C04AAD.asm:11 BEQL @UNKNOWN5
    case 0xC04ABC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C04AAD.asm:11 BEQL @UNKNOWN5
    case 0xC04ABE: cpu.execute_instruction<0x4C>(0x004B4D, 3); return true;
    // src/unknown/C0/C04AAD.asm:12 LDA GAME_STATE+game_state::walking_style
    case 0xC04AC1: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/unknown/C0/C04AAD.asm:13 JSL MAP_INPUT_TO_DIRECTION
    case 0xC04AC4: cpu.execute_instruction<0x22>(0xC0404F, 4); return true;
    // src/unknown/C0/C04AAD.asm:14 STA @VIRTUAL04
    case 0xC04AC8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C04AAD.asm:15 STA @LOCAL01
    case 0xC04ACA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C04AAD.asm:16 LDA @VIRTUAL04
    case 0xC04ACC: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C04AAD.asm:17 CMP #.LOWORD(-1)
    case 0xC04ACE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C04AAD.asm:17 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04ACE.
    case 0xC04AD0: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C04AAD.asm:18 BEQL @UNKNOWN6
    case 0xC04AD1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C04AAD.asm:18 BEQL @UNKNOWN6
    case 0xC04AD3: cpu.execute_instruction<0x4C>(0x004B51, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C04AAD.asm:18 BEQL @UNKNOWN6
    // Overlapping static entry reached from 0xC04AD0.
    case 0xC04AD4: cpu.execute_instruction<0x51>(0x00004B, 2); return true;
    // src/unknown/C0/C04AAD.asm:19 LDA #24
    case 0xC04AD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C04AAD.asm:19 LDA #24
    // Overlapping static entry reached from 0xC04AD6.
    case 0xC04AD8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C04AAD.asm:20 STA @VIRTUAL02
    case 0xC04AD9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C04AAD.asm:21 BRA @UNKNOWN4
    case 0xC04ADB: cpu.execute_instruction<0x80>(0x00005E, 2); return true;
    // src/unknown/C0/C04AAD.asm:23 LDA @VIRTUAL02
    case 0xC04ADD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C04AAD.asm:24 ASL
    case 0xC04ADF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:25 TAX
    case 0xC04AE0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:26 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC04AE1: cpu.execute_instruction<0xBD>(0x000A62, 3); return true;
    // src/unknown/C0/C04AAD.asm:27 CMP #.LOWORD(-1)
    case 0xC04AE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C04AAD.asm:27 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04AE4.
    case 0xC04AE6: cpu.execute_instruction<0xFF>(0x8A50F0, 4); return true;
    // src/unknown/C0/C04AAD.asm:28 BEQ @UNKNOWN3
    case 0xC04AE7: cpu.execute_instruction<0xF0>(0x000050, 2); return true;
    // src/unknown/C0/C04AAD.asm:29 TXA
    case 0xC04AE9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:30 CLC
    case 0xC04AEA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:31 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC04AEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F6, 2); else cpu.execute_instruction<0x69>(0x002AF6, 3); return true;
    // src/unknown/C0/C04AAD.asm:31 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC04AEB.
    case 0xC04AED: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:32 TAY
    case 0xC04AEE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:33 STY @LOCAL00
    case 0xC04AEF: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C04AAD.asm:34 LDA @LOCAL01
    case 0xC04AF1: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C04AAD.asm:35 STA @VIRTUAL04
    case 0xC04AF3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C04AAD.asm:36 LDA __BSS_START__,Y
    case 0xC04AF5: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C04AAD.asm:37 CMP @VIRTUAL04
    case 0xC04AF8: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C0/C04AAD.asm:38 BEQ @UNKNOWN3
    case 0xC04AFA: cpu.execute_instruction<0xF0>(0x00003D, 2); return true;
    // src/unknown/C0/C04AAD.asm:39 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC04AFC: cpu.execute_instruction<0xBD>(0x000E9A, 3); return true;
    // src/unknown/C0/C04AAD.asm:40 LDY #.SIZEOF(char_struct)
    case 0xC04AFF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C0/C04AAD.asm:40 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC04AFF.
    case 0xC04B01: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C04AAD.asm:41 JSL MULT168
    case 0xC04B02: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C04AAD.asm:42 CLC
    case 0xC04B06: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:43 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC04B07: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/unknown/C0/C04AAD.asm:43 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC04B07.
    case 0xC04B09: cpu.execute_instruction<0x99>(0x008EAA, 3); return true;
    // src/unknown/C0/C04AAD.asm:44 TAX
    case 0xC04B0A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:45 STX CURRENT_PARTY_MEMBER_TICK
    case 0xC04B0B: cpu.execute_instruction<0x8E>(0x004DC6, 3); return true;
    // src/unknown/C0/C04AAD.asm:45 STX CURRENT_PARTY_MEMBER_TICK
    // Overlapping static entry reached from 0xC04B09.
    case 0xC04B0C: cpu.execute_instruction<0xC6>(0x00004D, 2); return true;
    // src/unknown/C0/C04AAD.asm:46 LDA a:char_struct::position_index,X
    case 0xC04B0E: cpu.execute_instruction<0xBD>(0x00003D, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C0/C04AAD.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04B11: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C0/C04AAD.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04B13: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C0/C04AAD.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04B14: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C0/C04AAD.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04B16: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C0/C04AAD.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04B17: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:48 CLC
    case 0xC04B18: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:49 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC04B19: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000056, 2); else cpu.execute_instruction<0x69>(0x005156, 3); return true;
    // src/unknown/C0/C04AAD.asm:49 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC04B19.
    case 0xC04B1B: cpu.execute_instruction<0x51>(0x0000AA, 2); return true;
    // src/unknown/C0/C04AAD.asm:50 TAX
    case 0xC04B1C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:51 LDA a:player_position_buffer_entry::walking_style,X
    case 0xC04B1D: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // src/unknown/C0/C04AAD.asm:52 CMP #WALKING_STYLE::ROPE
    case 0xC04B20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C0/C04AAD.asm:52 CMP #WALKING_STYLE::ROPE
    // Overlapping static entry reached from 0xC04B20.
    case 0xC04B22: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04AAD.asm:53 BEQ @UNKNOWN3
    case 0xC04B23: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/unknown/C0/C04AAD.asm:54 CMP #WALKING_STYLE::LADDER
    case 0xC04B25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C04AAD.asm:54 CMP #WALKING_STYLE::LADDER
    // Overlapping static entry reached from 0xC04B25.
    case 0xC04B27: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04AAD.asm:55 BEQ @UNKNOWN3
    case 0xC04B28: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C0/C04AAD.asm:56 LDA @LOCAL01
    case 0xC04B2A: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C04AAD.asm:57 STA @VIRTUAL04
    case 0xC04B2C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C04AAD.asm:58 LDY @LOCAL00
    case 0xC04B2E: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C04AAD.asm:59 STA __BSS_START__,Y
    case 0xC04B30: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C04AAD.asm:60 LDA @VIRTUAL02
    case 0xC04B33: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C04AAD.asm:61 JSL UNKNOWN_C0A780
    case 0xC04B35: cpu.execute_instruction<0x22>(0xC0A780, 4); return true;
    // src/unknown/C0/C04AAD.asm:63 INC @VIRTUAL02
    case 0xC04B39: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C04AAD.asm:65 LDA @VIRTUAL02
    case 0xC04B3B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C04AAD.asm:66 CMP #29
    case 0xC04B3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001D, 2); else cpu.execute_instruction<0xC9>(0x00001D, 3); return true;
    // src/unknown/C0/C04AAD.asm:66 CMP #29
    // Overlapping static entry reached from 0xC04B3D.
    case 0xC04B3F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C04AAD.asm:67 BLTEQ @UNKNOWN2
    case 0xC04B40: cpu.execute_instruction<0x90>(0x00009B, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C04AAD.asm:67 BLTEQ @UNKNOWN2
    case 0xC04B42: cpu.execute_instruction<0xF0>(0x000099, 2); return true;
    // src/unknown/C0/C04AAD.asm:68 LDA @LOCAL01
    case 0xC04B44: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C04AAD.asm:69 STA @VIRTUAL04
    case 0xC04B46: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C04AAD.asm:70 STA GAME_STATE+game_state::leader_direction
    case 0xC04B48: cpu.execute_instruction<0x8D>(0x00987F, 3); return true;
    // src/unknown/C0/C04AAD.asm:71 BRA @UNKNOWN6
    case 0xC04B4B: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C0/C04AAD.asm:73 JSL UNKNOWN_C04A7B
    case 0xC04B4D: cpu.execute_instruction<0x22>(0xC04A7B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C04AAD.asm:75 END_C_FUNCTION
    case 0xC04B51: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C04AAD.asm:75 END_C_FUNCTION
    case 0xC04B52: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04B53.asm (unresolved).
bool execute_unresolved_c0_c04b53_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C04B53.asm:3 BEGIN_C_FUNCTION
    case 0xC04B53: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C04B53.asm:8 END_STACK_VARS
    case 0xC04B55: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C04B53.asm:8 END_STACK_VARS
    case 0xC04B56: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04B53.asm:8 END_STACK_VARS
    case 0xC04B57: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04B53.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC04B57.
    case 0xC04B59: cpu.execute_instruction<0xFF>(0x83AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C04B53.asm:8 END_STACK_VARS
    case 0xC04B5A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C04B53.asm:9 LDX GAME_STATE+game_state::walking_style
    case 0xC04B5B: cpu.execute_instruction<0xAE>(0x009883, 3); return true;
    // src/unknown/C0/C04B53.asm:9 LDX GAME_STATE+game_state::walking_style
    // Overlapping static entry reached from 0xC04B59.
    case 0xC04B5D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C04B53.asm:10 STX @LOCAL02
    case 0xC04B5E: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C04B53.asm:11 CPX #WALKING_STYLE::STAIRS
    case 0xC04B60: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00000D, 2); else cpu.execute_instruction<0xE0>(0x00000D, 3); return true;
    // src/unknown/C0/C04B53.asm:11 CPX #WALKING_STYLE::STAIRS
    // Overlapping static entry reached from 0xC04B60.
    case 0xC04B62: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04B53.asm:12 BEQ @UNKNOWN0
    case 0xC04B63: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C04B53.asm:13 LDA GAME_STATE+game_state::leader_direction
    case 0xC04B65: cpu.execute_instruction<0xAD>(0x00987F, 3); return true;
    // src/unknown/C0/C04B53.asm:14 STA @LOCAL01
    case 0xC04B68: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C04B53.asm:15 BRA @UNKNOWN1
    case 0xC04B6A: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C0/C04B53.asm:17 LDA AUTO_MOVEMENT_DIRECTION
    case 0xC04B6C: cpu.execute_instruction<0xAD>(0x005DCA, 3); return true;
    // src/unknown/C0/C04B53.asm:18 STA @LOCAL01
    case 0xC04B6F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C04B53.asm:20 LDA #.LOWORD(GAME_STATE) + game_state::unknownB0
    case 0xC04B71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A5, 2); else cpu.execute_instruction<0xA9>(0x0098A5, 3); return true;
    // src/unknown/C0/C04B53.asm:20 LDA #.LOWORD(GAME_STATE) + game_state::unknownB0
    // Overlapping static entry reached from 0xC04B71.
    case 0xC04B73: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C04B53.asm:21 STA @VIRTUAL02
    case 0xC04B74: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C04B53.asm:22 LDX @VIRTUAL02
    case 0xC04B76: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C04B53.asm:23 LDA __BSS_START__,X
    case 0xC04B78: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04B53.asm:24 AND #$00FF
    case 0xC04B7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C04B53.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC04B7B.
    case 0xC04B7D: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C04B53.asm:25 CMP #1
    case 0xC04B7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C04B53.asm:25 CMP #1
    // Overlapping static entry reached from 0xC04B7E.
    case 0xC04B80: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04B53.asm:26 BEQ @UNKNOWN4
    case 0xC04B81: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C0/C04B53.asm:27 CMP #2
    case 0xC04B83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C04B53.asm:27 CMP #2
    // Overlapping static entry reached from 0xC04B83.
    case 0xC04B85: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C04B53.asm:28 BEQL @UNKNOWN6
    case 0xC04B86: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C04B53.asm:28 BEQL @UNKNOWN6
    case 0xC04B88: cpu.execute_instruction<0x4C>(0x004C3B, 3); return true;
    // src/unknown/C0/C04B53.asm:29 CMP #3
    case 0xC04B8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C04B53.asm:29 CMP #3
    // Overlapping static entry reached from 0xC04B8B.
    case 0xC04B8D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C04B53.asm:30 BEQL @UNKNOWN7
    case 0xC04B8E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C04B53.asm:30 BEQL @UNKNOWN7
    case 0xC04B90: cpu.execute_instruction<0x4C>(0x004C40, 3); return true;
    // src/unknown/C0/C04B53.asm:31 JMP @UNKNOWN8
    case 0xC04B93: cpu.execute_instruction<0x4C>(0x004C43, 3); return true;
    // src/unknown/C0/C04B53.asm:33 LDY #.LOWORD(GAME_STATE) + game_state::unknown80
    case 0xC04B96: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000075, 2); else cpu.execute_instruction<0xA0>(0x009875, 3); return true;
    // src/unknown/C0/C04B53.asm:33 LDY #.LOWORD(GAME_STATE) + game_state::unknown80
    // Overlapping static entry reached from 0xC04B96.
    case 0xC04B98: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C04B53.asm:34 STY @LOCAL00
    case 0xC04B99: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C04B53.asm:35 LDA @LOCAL01
    case 0xC04B9B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/unknown/C0/C04B53.asm:36 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC04B9D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/unknown/C0/C04B53.asm:36 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC04B9E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04B53.asm:37 STA @VIRTUAL04
    case 0xC04B9F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C04B53.asm:38 LDX @LOCAL02
    case 0xC04BA1: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C04B53.asm:39 TXA
    case 0xC04BA3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C04B53.asm:40 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC04BA4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C04B53.asm:40 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC04BA5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C04B53.asm:40 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC04BA6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C04B53.asm:40 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC04BA7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C04B53.asm:40 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC04BA8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04B53.asm:41 CLC
    case 0xC04BA9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04B53.asm:42 ADC @VIRTUAL04
    case 0xC04BAA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C04B53.asm:43 STA @LOCAL01
    case 0xC04BAC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C04B53.asm:44 CLC
    case 0xC04BAE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04B53.asm:45 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC04BAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x004DD6, 3); return true;
    // src/unknown/C0/C04B53.asm:45 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC04BAF.
    case 0xC04BB1: cpu.execute_instruction<0x4D>(0x00B9A8, 3); return true;
    // src/unknown/C0/C04B53.asm:46 TAY
    case 0xC04BB2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C04B53.asm:47 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04BB3: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C04B53.asm:47 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    // Overlapping static entry reached from 0xC04BB1.
    case 0xC04BB4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C04B53.asm:47 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04BB6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C04B53.asm:47 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04BB8: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C04B53.asm:47 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04BBB: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C04B53.asm:48 LDY @LOCAL00
    case 0xC04BBD: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C04B53.asm:49 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04BBF: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C04B53.asm:49 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04BC2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C04B53.asm:49 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04BC4: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C04B53.asm:49 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04BC7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C04B53.asm:50 CLC
    case 0xC04BC9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C04B53.asm:51 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04BCA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C04B53.asm:51 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04BCC: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C04B53.asm:51 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04BCE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C04B53.asm:51 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04BD0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C04B53.asm:51 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04BD2: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C04B53.asm:51 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04BD4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C04B53.asm:52 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04BD6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C04B53.asm:52 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04BD8: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C04B53.asm:52 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04BDB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C04B53.asm:52 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04BDD: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C0/C04B53.asm:53 LDY #.LOWORD(GAME_STATE) + game_state::unknown84
    case 0xC04BE0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000079, 2); else cpu.execute_instruction<0xA0>(0x009879, 3); return true;
    // src/unknown/C0/C04B53.asm:53 LDY #.LOWORD(GAME_STATE) + game_state::unknown84
    // Overlapping static entry reached from 0xC04BE0.
    case 0xC04BE2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C04B53.asm:54 STY @LOCAL02
    case 0xC04BE3: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C04B53.asm:55 LDA @LOCAL01
    case 0xC04BE5: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C04B53.asm:56 CLC
    case 0xC04BE7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04B53.asm:57 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC04BE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000096, 2); else cpu.execute_instruction<0x69>(0x004F96, 3); return true;
    // src/unknown/C0/C04B53.asm:57 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC04BE8.
    case 0xC04BEA: cpu.execute_instruction<0x4F>(0x00B9A8, 4); return true;
    // src/unknown/C0/C04B53.asm:58 TAY
    case 0xC04BEB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C04B53.asm:59 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04BEC: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C04B53.asm:59 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    // Overlapping static entry reached from 0xC04BEA.
    case 0xC04BEE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C04B53.asm:59 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04BEF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C04B53.asm:59 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04BF1: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C04B53.asm:59 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04BF4: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C04B53.asm:60 LDY @LOCAL02
    case 0xC04BF6: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C04B53.asm:61 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04BF8: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C04B53.asm:61 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04BFB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C04B53.asm:61 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04BFD: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C04B53.asm:61 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04C00: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C04B53.asm:62 CLC
    case 0xC04C02: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C04B53.asm:63 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04C03: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C04B53.asm:63 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04C05: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C04B53.asm:63 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04C07: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C04B53.asm:63 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04C09: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C04B53.asm:63 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04C0B: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C04B53.asm:63 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04C0D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C04B53.asm:64 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04C0F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C04B53.asm:64 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04C11: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C04B53.asm:64 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04C14: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C04B53.asm:64 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04C16: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C0/C04B53.asm:65 LDX #.LOWORD(GAME_STATE) + game_state::unknownB2
    case 0xC04C19: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000A7, 2); else cpu.execute_instruction<0xA2>(0x0098A7, 3); return true;
    // src/unknown/C0/C04B53.asm:65 LDX #.LOWORD(GAME_STATE) + game_state::unknownB2
    // Overlapping static entry reached from 0xC04C19.
    case 0xC04C1B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C04B53.asm:66 LDA __BSS_START__,X
    case 0xC04C1C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04B53.asm:67 DEC
    case 0xC04C1F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C04B53.asm:68 STA __BSS_START__,X
    case 0xC04C20: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04B53.asm:69 BNE @UNKNOWN5
    case 0xC04C23: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/unknown/C0/C04B53.asm:70 LDA #0
    case 0xC04C25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C04B53.asm:70 LDA #0
    // Overlapping static entry reached from 0xC04C25.
    case 0xC04C27: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C04B53.asm:71 LDX @VIRTUAL02
    case 0xC04C28: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C04B53.asm:72 STA __BSS_START__,X
    case 0xC04C2A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04B53.asm:73 LDA GAME_STATE + game_state::unknownB4
    case 0xC04C2D: cpu.execute_instruction<0xAD>(0x0098A9, 3); return true;
    // src/unknown/C0/C04B53.asm:74 STA GAME_STATE+game_state::walking_style
    case 0xC04C30: cpu.execute_instruction<0x8D>(0x009883, 3); return true;
    // src/unknown/C0/C04B53.asm:76 LDA #1
    case 0xC04C33: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C04B53.asm:76 LDA #1
    // Overlapping static entry reached from 0xC04C33.
    case 0xC04C35: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C04B53.asm:77 STA GAME_STATE + game_state::unknown90
    case 0xC04C36: cpu.execute_instruction<0x8D>(0x009885, 3); return true;
    // src/unknown/C0/C04B53.asm:78 BRA @UNKNOWN8
    case 0xC04C39: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C0/C04B53.asm:80 JSR UNKNOWN_C0476D
    case 0xC04C3B: cpu.execute_instruction<0x20>(0x00476D, 3); return true;
    // src/unknown/C0/C04B53.asm:81 BRA @UNKNOWN8
    case 0xC04C3E: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C04B53.asm:83 JSR UNKNOWN_C04AAD
    case 0xC04C40: cpu.execute_instruction<0x20>(0x004AAD, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C04B53.asm:85 END_C_FUNCTION
    case 0xC04C43: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C04B53.asm:85 END_C_FUNCTION
    case 0xC04C44: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04C45.asm (unresolved).
bool execute_unresolved_c0_c04c45_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C04C45.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC04C45: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C04C45.asm:9 END_STACK_VARS
    case 0xC04C47: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C04C45.asm:9 END_STACK_VARS
    case 0xC04C48: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04C45.asm:9 END_STACK_VARS
    case 0xC04C49: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04C45.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC04C49.
    case 0xC04C4B: cpu.execute_instruction<0xFF>(0x85A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C04C45.asm:9 END_STACK_VARS
    case 0xC04C4C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:10 LDX #.LOWORD(GAME_STATE) + game_state::unknown90
    case 0xC04C4D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000085, 2); else cpu.execute_instruction<0xA2>(0x009885, 3); return true;
    // src/unknown/C0/C04C45.asm:10 LDX #.LOWORD(GAME_STATE) + game_state::unknown90
    // Overlapping static entry reached from 0xC04C4D.
    case 0xC04C4F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:11 LDA __BSS_START__,X
    case 0xC04C50: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:12 STA @LOCAL03
    case 0xC04C53: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C04C45.asm:13 LDA #0
    case 0xC04C55: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:13 LDA #0
    // Overlapping static entry reached from 0xC04C55.
    case 0xC04C57: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C04C45.asm:14 STA __BSS_START__,X
    case 0xC04C58: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:15 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC04C5B: cpu.execute_instruction<0xAD>(0x005D58, 3); return true;
    // src/unknown/C0/C04C45.asm:16 BEQ @UNKNOWN0
    case 0xC04C5E: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C04C45.asm:17 JSL UNKNOWN_C07C5B
    case 0xC04C60: cpu.execute_instruction<0x22>(0xC07C5B, 4); return true;
    // src/unknown/C0/C04C45.asm:18 DEC PLAYER_INTANGIBILITY_FRAMES
    case 0xC04C64: cpu.execute_instruction<0xCE>(0x005D58, 3); return true;
    // src/unknown/C0/C04C45.asm:20 LDA DEBUG
    case 0xC04C67: cpu.execute_instruction<0xAD>(0x00436C, 3); return true;
    // src/unknown/C0/C04C45.asm:21 BEQ @UNKNOWN1
    case 0xC04C6A: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C0/C04C45.asm:22 LDA PAD_STATE
    case 0xC04C6C: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/unknown/C0/C04C45.asm:23 AND #PAD::X_BUTTON
    case 0xC04C6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/unknown/C0/C04C45.asm:23 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xC04C6F.
    case 0xC04C71: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04C45.asm:24 BEQ @UNKNOWN1
    case 0xC04C72: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C0/C04C45.asm:25 LDA FRAME_COUNTER
    case 0xC04C74: cpu.execute_instruction<0xAD>(0x000002, 3); return true;
    // src/unknown/C0/C04C45.asm:26 AND #$00FF
    case 0xC04C77: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C04C45.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC04C77.
    case 0xC04C79: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C04C45.asm:27 AND #$000F
    case 0xC04C7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C0/C04C45.asm:27 AND #$000F
    // Overlapping static entry reached from 0xC04C7A.
    case 0xC04C7C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C04C45.asm:28 BNEL @UNKNOWN10
    case 0xC04C7D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C04C45.asm:28 BNEL @UNKNOWN10
    // Overlapping static entry reached from 0xC04CD3.
    case 0xC04C7E: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C04C45.asm:28 BNEL @UNKNOWN10
    case 0xC04C7F: cpu.execute_instruction<0x4C>(0x004D76, 3); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C04C45.asm:28 BNEL @UNKNOWN10
    // Overlapping static entry reached from 0xC04C7E.
    case 0xC04C80: cpu.execute_instruction<0x76>(0x00004D, 2); return true;
    // src/unknown/C0/C04C45.asm:30 LDA GAME_STATE+game_state::current_party_members
    case 0xC04C82: cpu.execute_instruction<0xAD>(0x009889, 3); return true;
    // src/unknown/C0/C04C45.asm:31 ASL
    case 0xC04C85: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:32 TAX
    case 0xC04C86: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:33 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC04C87: cpu.execute_instruction<0xBD>(0x000E9A, 3); return true;
    // src/unknown/C0/C04C45.asm:34 ASL
    case 0xC04C8A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:35 TAX
    case 0xC04C8B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:36 LDA CHOSEN_FOUR_PTRS,X
    case 0xC04C8C: cpu.execute_instruction<0xBD>(0x004DC8, 3); return true;
    // src/unknown/C0/C04C45.asm:37 TAX
    case 0xC04C8F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:38 LDA GAME_STATE + game_state::unknown88
    case 0xC04C90: cpu.execute_instruction<0xAD>(0x00987D, 3); return true;
    // src/unknown/C0/C04C45.asm:39 STA a:char_struct::position_index,X
    case 0xC04C93: cpu.execute_instruction<0x9D>(0x00003D, 3); return true;
    // src/unknown/C0/C04C45.asm:40 LDA GAME_STATE + game_state::unknownB0
    case 0xC04C96: cpu.execute_instruction<0xAD>(0x0098A5, 3); return true;
    // src/unknown/C0/C04C45.asm:41 BEQ @UNKNOWN2
    case 0xC04C99: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C04C45.asm:42 JSR UNKNOWN_C04B53
    case 0xC04C9B: cpu.execute_instruction<0x20>(0x004B53, 3); return true;
    // src/unknown/C0/C04C45.asm:43 BRA @UNKNOWN6
    case 0xC04C9E: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/unknown/C0/C04C45.asm:45 LDA GAME_STATE+game_state::walking_style
    case 0xC04CA0: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/unknown/C0/C04C45.asm:46 CMP #WALKING_STYLE::ESCALATOR
    case 0xC04CA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/unknown/C0/C04C45.asm:46 CMP #WALKING_STYLE::ESCALATOR
    // Overlapping static entry reached from 0xC04CA3.
    case 0xC04CA5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04C45.asm:47 BEQ @UNKNOWN3
    case 0xC04CA6: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C04C45.asm:48 CMP #WALKING_STYLE::BICYCLE
    case 0xC04CA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C04C45.asm:48 CMP #WALKING_STYLE::BICYCLE
    // Overlapping static entry reached from 0xC04CA8.
    case 0xC04CAA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04C45.asm:49 BEQ @UNKNOWN4
    case 0xC04CAB: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C04C45.asm:50 BRA @UNKNOWN5
    case 0xC04CAD: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C0/C04C45.asm:52 JSR UNKNOWN_C047CF
    case 0xC04CAF: cpu.execute_instruction<0x20>(0x0047CF, 3); return true;
    // src/unknown/C0/C04C45.asm:53 BRA @UNKNOWN6
    case 0xC04CB2: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C0/C04C45.asm:55 LDA @LOCAL03
    case 0xC04CB4: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C04C45.asm:56 JSR UNKNOWN_C048D3
    case 0xC04CB6: cpu.execute_instruction<0x20>(0x0048D3, 3); return true;
    // src/unknown/C0/C04C45.asm:57 BRA @UNKNOWN6
    case 0xC04CB9: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C04C45.asm:59 JSR UNKNOWN_C0449B
    case 0xC04CBB: cpu.execute_instruction<0x20>(0x00449B, 3); return true;
    // src/unknown/C0/C04C45.asm:61 LDA #.LOWORD(GAME_STATE) + game_state::unknown88
    case 0xC04CBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007D, 2); else cpu.execute_instruction<0xA9>(0x00987D, 3); return true;
    // src/unknown/C0/C04C45.asm:61 LDA #.LOWORD(GAME_STATE) + game_state::unknown88
    // Overlapping static entry reached from 0xC04CBE.
    case 0xC04CC0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:62 STA @LOCAL03
    case 0xC04CC1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C04C45.asm:63 LDA (@LOCAL03)
    case 0xC04CC3: cpu.execute_instruction<0xB2>(0x000014, 2); return true;
    // src/unknown/C0/C04C45.asm:64 STA @LOCAL02
    case 0xC04CC5: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C0/C04C45.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04CC7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C0/C04C45.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04CC9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C0/C04C45.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04CCA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C0/C04C45.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04CCC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C0/C04C45.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04CCD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:66 CLC
    case 0xC04CCE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:67 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC04CCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000056, 2); else cpu.execute_instruction<0x69>(0x005156, 3); return true;
    // src/unknown/C0/C04C45.asm:67 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC04CCF.
    case 0xC04CD1: cpu.execute_instruction<0x51>(0x000085, 2); return true;
    // src/unknown/C0/C04C45.asm:68 STA @LOCAL01
    case 0xC04CD2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C04C45.asm:68 STA @LOCAL01
    // Overlapping static entry reached from 0xC04CD1.
    case 0xC04CD3: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // src/unknown/C0/C04C45.asm:69 LDA #.LOWORD(GAME_STATE) + game_state::leader_x_coord
    case 0xC04CD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000077, 2); else cpu.execute_instruction<0xA9>(0x009877, 3); return true;
    // src/unknown/C0/C04C45.asm:69 LDA #.LOWORD(GAME_STATE) + game_state::leader_x_coord
    // Overlapping static entry reached from 0xC04CD3.
    case 0xC04CD5: cpu.execute_instruction<0x77>(0x000098, 2); return true;
    // src/unknown/C0/C04C45.asm:69 LDA #.LOWORD(GAME_STATE) + game_state::leader_x_coord
    // Overlapping static entry reached from 0xC04CD4.
    case 0xC04CD6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:70 STA @VIRTUAL04
    case 0xC04CD7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C04C45.asm:71 LDA #.LOWORD(GAME_STATE) + game_state::leader_y_coord
    case 0xC04CD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007B, 2); else cpu.execute_instruction<0xA9>(0x00987B, 3); return true;
    // src/unknown/C0/C04C45.asm:71 LDA #.LOWORD(GAME_STATE) + game_state::leader_y_coord
    // Overlapping static entry reached from 0xC04CD9.
    case 0xC04CDB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:72 STA @VIRTUAL02
    case 0xC04CDC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C04C45.asm:73 LDY GAME_STATE+game_state::current_party_members
    case 0xC04CDE: cpu.execute_instruction<0xAC>(0x009889, 3); return true;
    // src/unknown/C0/C04C45.asm:74 LDX @VIRTUAL02
    case 0xC04CE1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C04C45.asm:75 LDA __BSS_START__,X
    case 0xC04CE3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:76 TAX
    case 0xC04CE6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:77 STX @LOCAL00
    case 0xC04CE7: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C04C45.asm:78 LDX @VIRTUAL04
    case 0xC04CE9: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C04C45.asm:79 LDA __BSS_START__,X
    case 0xC04CEB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:80 LDX @LOCAL00
    case 0xC04CEE: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C04C45.asm:81 JSL UNKNOWN_C05F82
    case 0xC04CF0: cpu.execute_instruction<0x22>(0xC05F82, 4); return true;
    // src/unknown/C0/C04C45.asm:82 STA GAME_STATE+game_state::trodden_tile_type
    case 0xC04CF4: cpu.execute_instruction<0x8D>(0x009881, 3); return true;
    // src/unknown/C0/C04C45.asm:83 LDA GAME_STATE + game_state::unknown90
    case 0xC04CF7: cpu.execute_instruction<0xAD>(0x009885, 3); return true;
    // src/unknown/C0/C04C45.asm:84 BEQ @UNKNOWN7
    case 0xC04CFA: cpu.execute_instruction<0xF0>(0x000034, 2); return true;
    // src/unknown/C0/C04C45.asm:85 LDX @VIRTUAL04
    case 0xC04CFC: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C04C45.asm:86 LDA __BSS_START__,X
    case 0xC04CFE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:87 STA (@LOCAL01) ;player_position_buffer_entry::x_coord
    case 0xC04D01: cpu.execute_instruction<0x92>(0x000010, 2); return true;
    // src/unknown/C0/C04C45.asm:88 LDX @VIRTUAL02
    case 0xC04D03: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C04C45.asm:89 LDA __BSS_START__,X
    case 0xC04D05: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:90 LDY #player_position_buffer_entry::y_coord
    case 0xC04D08: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C0/C04C45.asm:90 LDY #player_position_buffer_entry::y_coord
    // Overlapping static entry reached from 0xC04D08.
    case 0xC04D0A: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/unknown/C0/C04C45.asm:91 STA (@LOCAL01),Y
    case 0xC04D0B: cpu.execute_instruction<0x91>(0x000010, 2); return true;
    // src/unknown/C0/C04C45.asm:92 LDA @LOCAL02
    case 0xC04D0D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C04C45.asm:93 INC
    case 0xC04D0F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:94 AND #$00FF
    case 0xC04D10: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C04C45.asm:94 AND #$00FF
    // Overlapping static entry reached from 0xC04D10.
    case 0xC04D12: cpu.execute_instruction<0x00>(0x000092, 2); return true;
    // src/unknown/C0/C04C45.asm:95 STA (@LOCAL03)
    case 0xC04D13: cpu.execute_instruction<0x92>(0x000014, 2); return true;
    // src/unknown/C0/C04C45.asm:96 LDX @VIRTUAL02
    case 0xC04D15: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C04C45.asm:97 LDA __BSS_START__,X
    case 0xC04D17: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:98 TAX
    case 0xC04D1A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:99 STX @LOCAL00
    case 0xC04D1B: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C04C45.asm:100 LDX @VIRTUAL04
    case 0xC04D1D: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C04C45.asm:101 LDA __BSS_START__,X
    case 0xC04D1F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:102 LDX @LOCAL00
    case 0xC04D22: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C04C45.asm:103 JSL CENTER_SCREEN
    case 0xC04D24: cpu.execute_instruction<0x22>(0xC0400E, 4); return true;
    // src/unknown/C0/C04C45.asm:104 LDA #1
    case 0xC04D28: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C04C45.asm:104 LDA #1
    // Overlapping static entry reached from 0xC04D28.
    case 0xC04D2A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C04C45.asm:105 STA UNREAD_7E4DD4
    case 0xC04D2B: cpu.execute_instruction<0x8D>(0x004DD4, 3); return true;
    // src/unknown/C0/C04C45.asm:106 BRA @UNKNOWN8
    case 0xC04D2E: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C04C45.asm:108 STZ UNREAD_7E4DD4
    case 0xC04D30: cpu.execute_instruction<0x9C>(0x004DD4, 3); return true;
    // src/unknown/C0/C04C45.asm:110 LDX #.LOWORD(GAME_STATE)+game_state::trodden_tile_type
    case 0xC04D33: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000081, 2); else cpu.execute_instruction<0xA2>(0x009881, 3); return true;
    // src/unknown/C0/C04C45.asm:110 LDX #.LOWORD(GAME_STATE)+game_state::trodden_tile_type
    // Overlapping static entry reached from 0xC04D33.
    case 0xC04D35: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:111 LDA __BSS_START__,X
    case 0xC04D36: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:112 LDY #player_position_buffer_entry::tile_flags
    case 0xC04D39: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C0/C04C45.asm:112 LDY #player_position_buffer_entry::tile_flags
    // Overlapping static entry reached from 0xC04D39.
    case 0xC04D3B: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/unknown/C0/C04C45.asm:113 STA (@LOCAL01),Y
    case 0xC04D3C: cpu.execute_instruction<0x91>(0x000010, 2); return true;
    // src/unknown/C0/C04C45.asm:114 LDA GAME_STATE+game_state::walking_style
    case 0xC04D3E: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/unknown/C0/C04C45.asm:115 LDY #player_position_buffer_entry::walking_style
    case 0xC04D41: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C0/C04C45.asm:115 LDY #player_position_buffer_entry::walking_style
    // Overlapping static entry reached from 0xC04D41.
    case 0xC04D43: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/unknown/C0/C04C45.asm:116 STA (@LOCAL01),Y
    case 0xC04D44: cpu.execute_instruction<0x91>(0x000010, 2); return true;
    // src/unknown/C0/C04C45.asm:117 LDA GAME_STATE+game_state::leader_direction
    case 0xC04D46: cpu.execute_instruction<0xAD>(0x00987F, 3); return true;
    // src/unknown/C0/C04C45.asm:118 LDY #player_position_buffer_entry::direction
    case 0xC04D49: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C0/C04C45.asm:118 LDY #player_position_buffer_entry::direction
    // Overlapping static entry reached from 0xC04D49.
    case 0xC04D4B: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/unknown/C0/C04C45.asm:119 STA (@LOCAL01),Y
    case 0xC04D4C: cpu.execute_instruction<0x91>(0x000010, 2); return true;
    // src/unknown/C0/C04C45.asm:120 LDY #.LOWORD(FOOTSTEP_SOUND_ID_OVERRIDE)
    case 0xC04D4E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00009C, 2); else cpu.execute_instruction<0xA0>(0x00289C, 3); return true;
    // src/unknown/C0/C04C45.asm:120 LDY #.LOWORD(FOOTSTEP_SOUND_ID_OVERRIDE)
    // Overlapping static entry reached from 0xC04D4E.
    case 0xC04D50: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:121 LDA #0
    case 0xC04D51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:121 LDA #0
    // Overlapping static entry reached from 0xC04D51.
    case 0xC04D53: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C04C45.asm:122 STA __BSS_START__,Y
    case 0xC04D54: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:123 LDA __BSS_START__,X
    case 0xC04D57: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:124 STA @LOCAL03
    case 0xC04D5A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C04C45.asm:125 AND #$0008
    case 0xC04D5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000008, 2); else cpu.execute_instruction<0x29>(0x000008, 3); return true;
    // src/unknown/C0/C04C45.asm:125 AND #$0008
    // Overlapping static entry reached from 0xC04D5C.
    case 0xC04D5E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04C45.asm:126 BEQ @UNKNOWN10
    case 0xC04D5F: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C0/C04C45.asm:127 LDA @LOCAL03
    case 0xC04D61: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C04C45.asm:128 AND #$0004
    case 0xC04D63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/unknown/C0/C04C45.asm:128 AND #$0004
    // Overlapping static entry reached from 0xC04D63.
    case 0xC04D65: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04C45.asm:129 BEQ @UNKNOWN9
    case 0xC04D66: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C04C45.asm:130 LDA #16
    case 0xC04D68: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C0/C04C45.asm:130 LDA #16
    // Overlapping static entry reached from 0xC04D68.
    case 0xC04D6A: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C04C45.asm:131 STA __BSS_START__,Y
    case 0xC04D6B: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:132 BRA @UNKNOWN10
    case 0xC04D6E: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C04C45.asm:134 LDA #18
    case 0xC04D70: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x000012, 3); return true;
    // src/unknown/C0/C04C45.asm:134 LDA #18
    // Overlapping static entry reached from 0xC04D70.
    case 0xC04D72: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C04C45.asm:135 STA __BSS_START__,Y
    case 0xC04D73: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C04C45.asm:137 END_C_FUNCTION
    case 0xC04D76: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C04C45.asm:137 END_C_FUNCTION
    case 0xC04D77: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04D78.asm (unresolved).
bool execute_unresolved_c0_c04d78_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C04D78.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC04D78: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C04D78.asm:13 END_STACK_VARS
    case 0xC04D7A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C04D78.asm:13 END_STACK_VARS
    case 0xC04D7B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04D78.asm:13 END_STACK_VARS
    case 0xC04D7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04D78.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC04D7C.
    case 0xC04D7E: cpu.execute_instruction<0xFF>(0xA5AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C04D78.asm:13 END_STACK_VARS
    case 0xC04D7F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:14 LDA GAME_STATE + game_state::unknownB0
    case 0xC04D80: cpu.execute_instruction<0xAD>(0x0098A5, 3); return true;
    // src/unknown/C0/C04D78.asm:14 LDA GAME_STATE + game_state::unknownB0
    // Overlapping static entry reached from 0xC04D7E.
    case 0xC04D82: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:15 CMP #3
    case 0xC04D83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C04D78.asm:15 CMP #3
    // Overlapping static entry reached from 0xC04D83.
    case 0xC04D85: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C04D78.asm:16 BEQL @UNKNOWN14
    case 0xC04D86: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C04D78.asm:16 BEQL @UNKNOWN14
    case 0xC04D88: cpu.execute_instruction<0x4C>(0x004EEE, 3); return true;
    // src/unknown/C0/C04D78.asm:17 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC04D8B: cpu.execute_instruction<0xAD>(0x005D60, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C04D78.asm:18 BNEL @UNKNOWN14
    case 0xC04D8E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C04D78.asm:18 BNEL @UNKNOWN14
    case 0xC04D90: cpu.execute_instruction<0x4C>(0x004EEE, 3); return true;
    // src/unknown/C0/C04D78.asm:19 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC04D93: cpu.execute_instruction<0xAD>(0x004DBA, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C04D78.asm:20 BNEL @UNKNOWN14
    case 0xC04D96: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C04D78.asm:20 BNEL @UNKNOWN14
    case 0xC04D98: cpu.execute_instruction<0x4C>(0x004EEE, 3); return true;
    // src/unknown/C0/C04D78.asm:21 LDA BATTLE_MODE
    case 0xC04D9B: cpu.execute_instruction<0xAD>(0x004DC2, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C04D78.asm:22 BNEL @UNKNOWN14
    case 0xC04D9E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C04D78.asm:22 BNEL @UNKNOWN14
    case 0xC04DA0: cpu.execute_instruction<0x4C>(0x004EEE, 3); return true;
    // src/unknown/C0/C04D78.asm:23 LDA CURRENT_ENTITY_SLOT
    case 0xC04DA3: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C04D78.asm:24 STA @VIRTUAL04
    case 0xC04DA6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C04D78.asm:25 STA @LOCAL07
    case 0xC04DA8: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C04D78.asm:26 LDA @VIRTUAL04
    case 0xC04DAA: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C04D78.asm:27 ASL
    case 0xC04DAC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:28 TAX
    case 0xC04DAD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:29 STX @LOCAL06
    case 0xC04DAE: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C0/C04D78.asm:30 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC04DB0: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/unknown/C0/C04D78.asm:31 STA @LOCAL05
    case 0xC04DB3: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C04D78.asm:32 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC04DB5: cpu.execute_instruction<0xBD>(0x000E9A, 3); return true;
    // src/unknown/C0/C04D78.asm:33 ASL
    case 0xC04DB8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:34 TAX
    case 0xC04DB9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:35 LDY CHOSEN_FOUR_PTRS,X
    case 0xC04DBA: cpu.execute_instruction<0xBC>(0x004DC8, 3); return true;
    // src/unknown/C0/C04D78.asm:36 STY CURRENT_PARTY_MEMBER_TICK
    case 0xC04DBD: cpu.execute_instruction<0x8C>(0x004DC6, 3); return true;
    // src/unknown/C0/C04D78.asm:37 LDA a:char_struct::position_index,Y
    case 0xC04DC0: cpu.execute_instruction<0xB9>(0x00003D, 3); return true;
    // src/unknown/C0/C04D78.asm:38 STA @LOCAL04
    case 0xC04DC3: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C0/C04D78.asm:39 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04DC5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C0/C04D78.asm:39 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04DC7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C0/C04D78.asm:39 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04DC8: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C0/C04D78.asm:39 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04DCA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C0/C04D78.asm:39 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04DCB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:40 CLC
    case 0xC04DCC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:41 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC04DCD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000056, 2); else cpu.execute_instruction<0x69>(0x005156, 3); return true;
    // src/unknown/C0/C04D78.asm:41 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC04DCD.
    case 0xC04DCF: cpu.execute_instruction<0x51>(0x000085, 2); return true;
    // src/unknown/C0/C04D78.asm:42 STA @LOCAL03
    case 0xC04DD0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C04D78.asm:42 STA @LOCAL03
    // Overlapping static entry reached from 0xC04DCF.
    case 0xC04DD1: cpu.execute_instruction<0x14>(0x0000A0, 2); return true;
    // src/unknown/C0/C04D78.asm:43 LDY #player_position_buffer_entry::direction
    case 0xC04DD2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C0/C04D78.asm:43 LDY #player_position_buffer_entry::direction
    // Overlapping static entry reached from 0xC04DD1.
    case 0xC04DD3: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:43 LDY #player_position_buffer_entry::direction
    // Overlapping static entry reached from 0xC04DD2.
    case 0xC04DD4: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C0/C04D78.asm:44 LDA (@LOCAL03),Y
    case 0xC04DD5: cpu.execute_instruction<0xB1>(0x000014, 2); return true;
    // src/unknown/C0/C04D78.asm:45 LDX @LOCAL06
    case 0xC04DD7: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/unknown/C0/C04D78.asm:46 STA ENTITY_DIRECTIONS,X
    case 0xC04DD9: cpu.execute_instruction<0x9D>(0x002AF6, 3); return true;
    // src/unknown/C0/C04D78.asm:47 LDY #player_position_buffer_entry::tile_flags
    case 0xC04DDC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C0/C04D78.asm:47 LDY #player_position_buffer_entry::tile_flags
    // Overlapping static entry reached from 0xC04DDC.
    case 0xC04DDE: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C0/C04D78.asm:48 LDA (@LOCAL03),Y
    case 0xC04DDF: cpu.execute_instruction<0xB1>(0x000014, 2); return true;
    // src/unknown/C0/C04D78.asm:49 STA ENTITY_SURFACE_FLAGS,X
    case 0xC04DE1: cpu.execute_instruction<0x9D>(0x002BAA, 3); return true;
    // src/unknown/C0/C04D78.asm:50 LDA @LOCAL03
    case 0xC04DE4: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C04D78.asm:51 CLC
    case 0xC04DE6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:52 ADC #player_position_buffer_entry::walking_style
    case 0xC04DE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/unknown/C0/C04D78.asm:52 ADC #player_position_buffer_entry::walking_style
    // Overlapping static entry reached from 0xC04DE7.
    case 0xC04DE9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C04D78.asm:53 STA @VIRTUAL02
    case 0xC04DEA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C04D78.asm:54 LDY CURRENT_ENTITY_SLOT
    case 0xC04DEC: cpu.execute_instruction<0xAC>(0x001A42, 3); return true;
    // src/unknown/C0/C04D78.asm:55 LDX @VIRTUAL02
    case 0xC04DEF: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C04D78.asm:56 LDA __BSS_START__,X
    case 0xC04DF1: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04D78.asm:57 TAX
    case 0xC04DF4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:58 LDA @LOCAL05
    case 0xC04DF5: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C04D78.asm:59 JSL UNKNOWN_C07A56
    case 0xC04DF7: cpu.execute_instruction<0x22>(0xC07A56, 4); return true;
    // src/unknown/C0/C04D78.asm:60 LDA GAME_STATE + game_state::unknown90
    case 0xC04DFB: cpu.execute_instruction<0xAD>(0x009885, 3); return true;
    // src/unknown/C0/C04D78.asm:61 BNE @UNKNOWN4
    case 0xC04DFE: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C0/C04D78.asm:62 LDX @VIRTUAL02
    case 0xC04E00: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C04D78.asm:63 LDA __BSS_START__,X
    case 0xC04E02: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04D78.asm:64 CMP #12
    case 0xC04E05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/unknown/C0/C04D78.asm:64 CMP #12
    // Overlapping static entry reached from 0xC04E05.
    case 0xC04E07: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C04D78.asm:65 BNEL @UNKNOWN14
    case 0xC04E08: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C04D78.asm:65 BNEL @UNKNOWN14
    case 0xC04E0A: cpu.execute_instruction<0x4C>(0x004EEE, 3); return true;
    // src/unknown/C0/C04D78.asm:67 LDA @LOCAL07
    case 0xC04E0D: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C04D78.asm:68 STA @VIRTUAL04
    case 0xC04E0F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C04D78.asm:69 ASL
    case 0xC04E11: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:70 TAX
    case 0xC04E12: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:71 LDA (@LOCAL03) ;player_position_buffer_entry::x_coord
    case 0xC04E13: cpu.execute_instruction<0xB2>(0x000014, 2); return true;
    // src/unknown/C0/C04D78.asm:72 STA ENTITY_ABS_X_TABLE,X
    case 0xC04E15: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/unknown/C0/C04D78.asm:73 LDY #player_position_buffer_entry::y_coord
    case 0xC04E18: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C0/C04D78.asm:73 LDY #player_position_buffer_entry::y_coord
    // Overlapping static entry reached from 0xC04E18.
    case 0xC04E1A: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C0/C04D78.asm:74 LDA (@LOCAL03),Y
    case 0xC04E1B: cpu.execute_instruction<0xB1>(0x000014, 2); return true;
    // src/unknown/C0/C04D78.asm:75 STA ENTITY_ABS_Y_TABLE,X
    case 0xC04E1D: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/unknown/C0/C04D78.asm:76 LDX #0
    case 0xC04E20: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C04D78.asm:76 LDX #0
    // Overlapping static entry reached from 0xC04E20.
    case 0xC04E22: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C04D78.asm:77 STX @LOCAL07
    case 0xC04E23: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C04D78.asm:78 LDA GAME_STATE + game_state::unknown96
    case 0xC04E25: cpu.execute_instruction<0xAD>(0x00988B, 3); return true;
    // src/unknown/C0/C04D78.asm:79 AND #$00FF
    case 0xC04E28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C04D78.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC04E28.
    case 0xC04E2A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C04D78.asm:80 STA @VIRTUAL02
    case 0xC04E2B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C04D78.asm:81 LDA @LOCAL05
    case 0xC04E2D: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C04D78.asm:82 INC
    case 0xC04E2F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:83 CMP @VIRTUAL02
    case 0xC04E30: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C04D78.asm:84 BEQ @UNKNOWN11
    case 0xC04E32: cpu.execute_instruction<0xF0>(0x000053, 2); return true;
    // src/unknown/C0/C04D78.asm:85 LDY #player_position_buffer_entry::walking_style
    case 0xC04E34: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C0/C04D78.asm:85 LDY #player_position_buffer_entry::walking_style
    // Overlapping static entry reached from 0xC04E34.
    case 0xC04E36: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C0/C04D78.asm:86 LDA (@LOCAL03),Y
    case 0xC04E37: cpu.execute_instruction<0xB1>(0x000014, 2); return true;
    // src/unknown/C0/C04D78.asm:87 AND #$00FF
    case 0xC04E39: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C04D78.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC04E39.
    case 0xC04E3B: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C04D78.asm:88 CMP #WALKING_STYLE::LADDER
    case 0xC04E3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C04D78.asm:88 CMP #WALKING_STYLE::LADDER
    // Overlapping static entry reached from 0xC04E3C.
    case 0xC04E3E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04D78.asm:89 BEQ @UNKNOWN5
    case 0xC04E3F: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C04D78.asm:90 CMP #WALKING_STYLE::ROPE
    case 0xC04E41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C0/C04D78.asm:90 CMP #WALKING_STYLE::ROPE
    // Overlapping static entry reached from 0xC04E41.
    case 0xC04E43: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04D78.asm:91 BEQ @UNKNOWN5
    case 0xC04E44: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C04D78.asm:92 CMP #WALKING_STYLE::ESCALATOR
    case 0xC04E46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/unknown/C0/C04D78.asm:92 CMP #WALKING_STYLE::ESCALATOR
    // Overlapping static entry reached from 0xC04E46.
    case 0xC04E48: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04D78.asm:93 BEQ @UNKNOWN6
    case 0xC04E49: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C0/C04D78.asm:94 CMP #WALKING_STYLE::STAIRS
    case 0xC04E4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000D, 2); else cpu.execute_instruction<0xC9>(0x00000D, 3); return true;
    // src/unknown/C0/C04D78.asm:94 CMP #WALKING_STYLE::STAIRS
    // Overlapping static entry reached from 0xC04E4B.
    case 0xC04E4D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04D78.asm:95 BEQ @UNKNOWN8
    case 0xC04E4E: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C0/C04D78.asm:96 BRA @UNKNOWN9
    case 0xC04E50: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/unknown/C0/C04D78.asm:98 LDA #30
    case 0xC04E52: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00001E, 3); return true;
    // src/unknown/C0/C04D78.asm:98 LDA #30
    // Overlapping static entry reached from 0xC04E52.
    case 0xC04E54: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C04D78.asm:99 STA @LOCAL02
    case 0xC04E55: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C04D78.asm:100 BRA @UNKNOWN11
    case 0xC04E57: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/unknown/C0/C04D78.asm:102 LDA GAME_STATE+game_state::walking_style
    case 0xC04E59: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/unknown/C0/C04D78.asm:103 BNE @UNKNOWN7
    case 0xC04E5C: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/unknown/C0/C04D78.asm:104 LDX #1
    case 0xC04E5E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C04D78.asm:104 LDX #1
    // Overlapping static entry reached from 0xC04E5E.
    case 0xC04E60: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C04D78.asm:105 STX @LOCAL07
    case 0xC04E61: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C04D78.asm:106 BRA @UNKNOWN11
    case 0xC04E63: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/unknown/C0/C04D78.asm:108 LDA #30
    case 0xC04E65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00001E, 3); return true;
    // src/unknown/C0/C04D78.asm:108 LDA #30
    // Overlapping static entry reached from 0xC04E65.
    case 0xC04E67: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C04D78.asm:109 STA @LOCAL02
    case 0xC04E68: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C04D78.asm:110 BRA @UNKNOWN11
    case 0xC04E6A: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C0/C04D78.asm:112 LDA #24
    case 0xC04E6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C04D78.asm:112 LDA #24
    // Overlapping static entry reached from 0xC04E6C.
    case 0xC04E6E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C04D78.asm:113 STA @LOCAL02
    case 0xC04E6F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C04D78.asm:114 BRA @UNKNOWN11
    case 0xC04E71: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C0/C04D78.asm:116 LDA GAME_STATE + game_state::unknown92
    case 0xC04E73: cpu.execute_instruction<0xAD>(0x009887, 3); return true;
    // src/unknown/C0/C04D78.asm:117 CMP #3
    case 0xC04E76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C04D78.asm:117 CMP #3
    // Overlapping static entry reached from 0xC04E76.
    case 0xC04E78: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C04D78.asm:118 BNE @UNKNOWN10
    case 0xC04E79: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/unknown/C0/C04D78.asm:119 LDA #8
    case 0xC04E7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C0/C04D78.asm:119 LDA #8
    // Overlapping static entry reached from 0xC04E7B.
    case 0xC04E7D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C04D78.asm:120 STA @LOCAL02
    case 0xC04E7E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C04D78.asm:121 BRA @UNKNOWN11
    case 0xC04E80: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C0/C04D78.asm:123 LDA #12
    case 0xC04E82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C0/C04D78.asm:123 LDA #12
    // Overlapping static entry reached from 0xC04E82.
    case 0xC04E84: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C04D78.asm:124 STA @LOCAL02
    case 0xC04E85: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C04D78.asm:126 LDA CURRENT_ENTITY_SLOT
    case 0xC04E87: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C04D78.asm:127 ASL
    case 0xC04E8A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:128 TAX
    case 0xC04E8B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:129 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC04E8C: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/unknown/C0/C04D78.asm:130 ASL
    case 0xC04E8F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:131 TAX
    case 0xC04E90: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:132 LDA f:CHARACTER_SIZES,X
    case 0xC04E91: cpu.execute_instruction<0xBF>(0xC3E09A, 4); return true;
    // src/unknown/C0/C04D78.asm:133 CLC
    case 0xC04E95: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:134 ADC @LOCAL02
    case 0xC04E96: cpu.execute_instruction<0x65>(0x000012, 2); return true;
    // src/unknown/C0/C04D78.asm:135 STA @LOCAL01
    case 0xC04E98: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C04D78.asm:136 LDY #player_position_buffer_entry::walking_style
    case 0xC04E9A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C0/C04D78.asm:136 LDY #player_position_buffer_entry::walking_style
    // Overlapping static entry reached from 0xC04E9A.
    case 0xC04E9C: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C0/C04D78.asm:137 LDA (@LOCAL03),Y
    case 0xC04E9D: cpu.execute_instruction<0xB1>(0x000014, 2); return true;
    // src/unknown/C0/C04D78.asm:138 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC04E9F: cpu.execute_instruction<0xAE>(0x004DC6, 3); return true;
    // src/unknown/C0/C04D78.asm:139 STA a:char_struct::unknown65,X
    case 0xC04EA2: cpu.execute_instruction<0x9D>(0x000041, 3); return true;
    // src/unknown/C0/C04D78.asm:140 LDA GAME_STATE + game_state::unknown96
    case 0xC04EA5: cpu.execute_instruction<0xAD>(0x00988B, 3); return true;
    // src/unknown/C0/C04D78.asm:141 AND #$00FF
    case 0xC04EA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C04D78.asm:141 AND #$00FF
    // Overlapping static entry reached from 0xC04EA8.
    case 0xC04EAA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C04D78.asm:142 STA @VIRTUAL02
    case 0xC04EAB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C04D78.asm:143 LDA @LOCAL05
    case 0xC04EAD: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C04D78.asm:144 INC
    case 0xC04EAF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:145 CMP @VIRTUAL02
    case 0xC04EB0: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C04D78.asm:146 BEQ @UNKNOWN12
    case 0xC04EB2: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C0/C04D78.asm:147 LDX @LOCAL07
    case 0xC04EB4: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C0/C04D78.asm:148 BNE @UNKNOWN12
    case 0xC04EB6: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/unknown/C0/C04D78.asm:149 LDA #2
    case 0xC04EB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C04D78.asm:149 LDA #2
    // Overlapping static entry reached from 0xC04EB8.
    case 0xC04EBA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C04D78.asm:150 STA @LOCAL00
    case 0xC04EBB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C04D78.asm:151 LDY @LOCAL04
    case 0xC04EBD: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C0/C04D78.asm:152 LDA @LOCAL01
    case 0xC04EBF: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C04D78.asm:153 TAX
    case 0xC04EC1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:154 LDA @LOCAL05
    case 0xC04EC2: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C04D78.asm:155 JSL UNKNOWN_C03EC3
    case 0xC04EC4: cpu.execute_instruction<0x22>(0xC03EC3, 4); return true;
    // src/unknown/C0/C04D78.asm:159 STA @LOCAL06
    case 0xC04EC8: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C04D78.asm:161 BRA @UNKNOWN13
    case 0xC04ECA: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/unknown/C0/C04D78.asm:163 LDA @LOCAL04
    case 0xC04ECC: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C04D78.asm:164 INC
    case 0xC04ECE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:168 STA @LOCAL06
    case 0xC04ECF: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C04D78.asm:170 LDA CURRENT_ENTITY_SLOT
    case 0xC04ED1: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C04D78.asm:171 ASL
    case 0xC04ED4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:172 CLC
    case 0xC04ED5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:173 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC04ED6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x001002, 3); return true;
    // src/unknown/C0/C04D78.asm:173 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC04ED6.
    case 0xC04ED8: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C0/C04D78.asm:174 TAX
    case 0xC04ED9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:175 LDA __BSS_START__,X
    case 0xC04EDA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04D78.asm:176 AND #$FFFF ^ (SPRITE_TABLE_10_FLAGS::UNKNOWN12)
    case 0xC04EDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x00EFFF, 3); return true;
    // src/unknown/C0/C04D78.asm:176 AND #$FFFF ^ (SPRITE_TABLE_10_FLAGS::UNKNOWN12)
    // Overlapping static entry reached from 0xC04EDD.
    case 0xC04EDF: cpu.execute_instruction<0xEF>(0x00009D, 4); return true;
    // src/unknown/C0/C04D78.asm:177 STA __BSS_START__,X
    case 0xC04EE0: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04D78.asm:182 LDA @LOCAL06
    case 0xC04EE3: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C04D78.asm:184 AND #$00FF
    case 0xC04EE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C04D78.asm:184 AND #$00FF
    // Overlapping static entry reached from 0xC04EE5.
    case 0xC04EE7: cpu.execute_instruction<0x00>(0x0000AE, 2); return true;
    // src/unknown/C0/C04D78.asm:185 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC04EE8: cpu.execute_instruction<0xAE>(0x004DC6, 3); return true;
    // src/unknown/C0/C04D78.asm:186 STA a:char_struct::position_index,X
    case 0xC04EEB: cpu.execute_instruction<0x9D>(0x00003D, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C04D78.asm:188 END_C_FUNCTION
    case 0xC04EEE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C04D78.asm:188 END_C_FUNCTION
    case 0xC04EEF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04EF0.asm (unresolved).
bool execute_unresolved_c0_c04ef0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C04EF0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC04EF0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C04EF0.asm:6 END_STACK_VARS
    case 0xC04EF2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C04EF0.asm:6 END_STACK_VARS
    case 0xC04EF3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04EF0.asm:6 END_STACK_VARS
    case 0xC04EF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04EF0.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC04EF4.
    case 0xC04EF6: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C04EF0.asm:6 END_STACK_VARS
    case 0xC04EF7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C04EF0.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0xC04EF8: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C04EF0.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC04EF6.
    case 0xC04EFA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C04EF0.asm:8 ASL
    case 0xC04EFB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04EF0.asm:9 TAY
    case 0xC04EFC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C04EF0.asm:10 LDA ENTITY_SCRIPT_VAR1_TABLE,Y
    case 0xC04EFD: cpu.execute_instruction<0xB9>(0x000E9A, 3); return true;
    // src/unknown/C0/C04EF0.asm:11 ASL
    case 0xC04F00: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04EF0.asm:12 TAX
    case 0xC04F01: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04EF0.asm:13 LDA CHOSEN_FOUR_PTRS,X
    case 0xC04F02: cpu.execute_instruction<0xBD>(0x004DC8, 3); return true;
    // src/unknown/C0/C04EF0.asm:14 TAX
    case 0xC04F05: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04EF0.asm:15 STX CURRENT_PARTY_MEMBER_TICK
    case 0xC04F06: cpu.execute_instruction<0x8E>(0x004DC6, 3); return true;
    // src/unknown/C0/C04EF0.asm:16 LDA __BSS_START__ + char_struct::position_index,X
    case 0xC04F09: cpu.execute_instruction<0xBD>(0x00003D, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C0/C04EF0.asm:17 OPTIMIZED_MULT $04, .SIZEOF(player_position_buffer_entry)
    case 0xC04F0C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C0/C04EF0.asm:17 OPTIMIZED_MULT $04, .SIZEOF(player_position_buffer_entry)
    case 0xC04F0E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C0/C04EF0.asm:17 OPTIMIZED_MULT $04, .SIZEOF(player_position_buffer_entry)
    case 0xC04F0F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C0/C04EF0.asm:17 OPTIMIZED_MULT $04, .SIZEOF(player_position_buffer_entry)
    case 0xC04F11: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C0/C04EF0.asm:17 OPTIMIZED_MULT $04, .SIZEOF(player_position_buffer_entry)
    case 0xC04F12: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04EF0.asm:18 CLC
    case 0xC04F13: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04EF0.asm:19 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC04F14: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000056, 2); else cpu.execute_instruction<0x69>(0x005156, 3); return true;
    // src/unknown/C0/C04EF0.asm:19 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC04F14.
    case 0xC04F16: cpu.execute_instruction<0x51>(0x0000AA, 2); return true;
    // src/unknown/C0/C04EF0.asm:20 TAX
    case 0xC04F17: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04EF0.asm:21 STX @LOCAL00
    case 0xC04F18: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C04EF0.asm:22 LDA a:player_position_buffer_entry::direction,X
    case 0xC04F1A: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/unknown/C0/C04EF0.asm:23 STA ENTITY_DIRECTIONS,Y
    case 0xC04F1D: cpu.execute_instruction<0x99>(0x002AF6, 3); return true;
    // src/unknown/C0/C04EF0.asm:24 LDA CURRENT_ENTITY_SLOT
    case 0xC04F20: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C04EF0.asm:25 ASL
    case 0xC04F23: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04EF0.asm:26 PHA
    case 0xC04F24: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C04EF0.asm:27 LDA a:player_position_buffer_entry::tile_flags,X
    case 0xC04F25: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/unknown/C0/C04EF0.asm:28 PLX
    case 0xC04F28: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C04EF0.asm:29 STA ENTITY_SURFACE_FLAGS,X
    case 0xC04F29: cpu.execute_instruction<0x9D>(0x002BAA, 3); return true;
    // src/unknown/C0/C04EF0.asm:30 LDY CURRENT_ENTITY_SLOT
    case 0xC04F2C: cpu.execute_instruction<0xAC>(0x001A42, 3); return true;
    // src/unknown/C0/C04EF0.asm:31 LDX @LOCAL00
    case 0xC04F2F: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C04EF0.asm:32 LDA a:player_position_buffer_entry::walking_style,X
    case 0xC04F31: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // src/unknown/C0/C04EF0.asm:33 TAX
    case 0xC04F34: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04EF0.asm:34 STX @LOCAL00
    case 0xC04F35: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C04EF0.asm:35 LDA CURRENT_ENTITY_SLOT
    case 0xC04F37: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C04EF0.asm:36 ASL
    case 0xC04F3A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04EF0.asm:37 TAX
    case 0xC04F3B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04EF0.asm:38 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC04F3C: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/unknown/C0/C04EF0.asm:39 LDX @LOCAL00
    case 0xC04F3F: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C04EF0.asm:39 LDX @LOCAL00
    // Overlapping static entry reached from 0xC04F95.
    case 0xC04F40: cpu.execute_instruction<0x0E>(0x005622, 3); return true;
    // src/unknown/C0/C04EF0.asm:40 JSL UNKNOWN_C07A56
    case 0xC04F41: cpu.execute_instruction<0x22>(0xC07A56, 4); return true;
    // src/unknown/C0/C04EF0.asm:40 JSL UNKNOWN_C07A56
    // Overlapping static entry reached from 0xC04F40.
    case 0xC04F43: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C04EF0.asm:40 JSL UNKNOWN_C07A56
    // Overlapping static entry reached from 0xC04F43.
    case 0xC04F44: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C04EF0.asm:41 END_C_FUNCTION
    case 0xC04F45: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C04EF0.asm:41 END_C_FUNCTION
    case 0xC04F46: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04F47.asm (unresolved).
bool execute_unresolved_c0_c04f47_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C04F47.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC04F47: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C04F47.asm:4 LDA BACKGROUND_COLOUR_BACKUP
    case 0xC04F49: cpu.execute_instruction<0xAD>(0x005D72, 3); return true;
    // src/unknown/C0/C04F47.asm:5 STA PALETTES
    case 0xC04F4C: cpu.execute_instruction<0x8D>(0x000200, 3); return true;
    // src/unknown/C0/C04F47.asm:6 SEP #PROC_FLAGS::ACCUM8
    case 0xC04F4F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C04F47.asm:7 LDA #$0017
    case 0xC04F51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/unknown/C0/C04F47.asm:8 STA TM_MIRROR
    case 0xC04F53: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/C0/C04F47.asm:8 STA TM_MIRROR
    // Overlapping static entry reached from 0xC04F51.
    case 0xC04F54: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C04F47.asm:8 STA TM_MIRROR
    // Overlapping static entry reached from 0xC04F54.
    case 0xC04F55: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C0/C04F47.asm:9 REP #PROC_FLAGS::ACCUM8
    case 0xC04F56: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C04F47.asm:10 LDA #$0008
    case 0xC04F58: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C0/C04F47.asm:10 LDA #$0008
    // Overlapping static entry reached from 0xC04F58.
    case 0xC04F5A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C04F47.asm:11 JSL UNKNOWN_C0856B
    case 0xC04F5B: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/unknown/C0/C04F47.asm:12 RTL
    case 0xC04F5F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04F60.asm (unresolved).
bool execute_unresolved_c0_c04f60_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C04F60.asm:3 BEGIN_C_FUNCTION
    case 0xC04F60: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C04F60.asm:7 END_STACK_VARS
    case 0xC04F62: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C04F60.asm:7 END_STACK_VARS
    case 0xC04F63: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04F60.asm:7 END_STACK_VARS
    case 0xC04F64: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04F60.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC04F64.
    case 0xC04F66: cpu.execute_instruction<0xFF>(0x60AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C04F60.asm:7 END_STACK_VARS
    case 0xC04F67: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C04F60.asm:8 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC04F68: cpu.execute_instruction<0xAD>(0x005D60, 3); return true;
    // src/unknown/C0/C04F60.asm:8 LDA BATTLE_SWIRL_COUNTDOWN
    // Overlapping static entry reached from 0xC04F66.
    case 0xC04F6A: cpu.execute_instruction<0x5D>(0x0030D0, 3); return true;
    // src/unknown/C0/C04F60.asm:9 BNE @UNKNOWN0
    case 0xC04F6B: cpu.execute_instruction<0xD0>(0x000030, 2); return true;
    // src/unknown/C0/C04F60.asm:10 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC04F6D: cpu.execute_instruction<0xAD>(0x004DBA, 3); return true;
    // src/unknown/C0/C04F60.asm:11 BNE @UNKNOWN0
    case 0xC04F70: cpu.execute_instruction<0xD0>(0x00002B, 2); return true;
    // src/unknown/C0/C04F60.asm:12 LDA PALETTES
    case 0xC04F72: cpu.execute_instruction<0xAD>(0x000200, 3); return true;
    // src/unknown/C0/C04F60.asm:13 STA BACKGROUND_COLOUR_BACKUP
    case 0xC04F75: cpu.execute_instruction<0x8D>(0x005D72, 3); return true;
    // src/unknown/C0/C04F60.asm:14 LDA #RGBVAL 31, 0, 0
    case 0xC04F78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x00001F, 3); return true;
    // src/unknown/C0/C04F60.asm:14 LDA #RGBVAL 31, 0, 0
    // Overlapping static entry reached from 0xC04F78.
    case 0xC04F7A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C04F60.asm:15 STA PALETTES
    case 0xC04F7B: cpu.execute_instruction<0x8D>(0x000200, 3); return true;
    // src/unknown/C0/C04F60.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC04F7E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C04F60.asm:17 STZ TM_MIRROR
    case 0xC04F80: cpu.execute_instruction<0x9C>(0x00001A, 3); return true;
    // src/unknown/C0/C04F60.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC04F83: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C04F60.asm:19 LDA #8
    case 0xC04F85: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C0/C04F60.asm:19 LDA #8
    // Overlapping static entry reached from 0xC04F85.
    case 0xC04F87: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C04F60.asm:20 JSL UNKNOWN_C0856B
    case 0xC04F88: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C04F60.asm:21 LOADPTR UNKNOWN_C04F47, $0E
    case 0xC04F8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000047, 2); else cpu.execute_instruction<0xA9>(0x004F47, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C04F60.asm:21 LOADPTR UNKNOWN_C04F47, $0E
    // Overlapping static entry reached from 0xC04F8C.
    case 0xC04F8E: cpu.execute_instruction<0x4F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C04F60.asm:21 LOADPTR UNKNOWN_C04F47, $0E
    case 0xC04F8F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C04F60.asm:21 LOADPTR UNKNOWN_C04F47, $0E
    case 0xC04F91: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C04F60.asm:21 LOADPTR UNKNOWN_C04F47, $0E
    // Overlapping static entry reached from 0xC04F8E.
    case 0xC04F92: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C04F60.asm:21 LOADPTR UNKNOWN_C04F47, $0E
    // Overlapping static entry reached from 0xC04F91.
    case 0xC04F93: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C04F60.asm:21 LOADPTR UNKNOWN_C04F47, $0E
    case 0xC04F94: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C04F60.asm:21 LOADPTR UNKNOWN_C04F47, $0E
    // Overlapping static entry reached from 0xC04F92.
    case 0xC04F95: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // src/unknown/C0/C04F60.asm:22 LDA #1
    case 0xC04F96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C04F60.asm:22 LDA #1
    // Overlapping static entry reached from 0xC04F95.
    case 0xC04F97: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C04F60.asm:22 LDA #1
    // Overlapping static entry reached from 0xC04F96.
    case 0xC04F98: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C04F60.asm:23 JSL SCHEDULE_OVERWORLD_TASK
    case 0xC04F99: cpu.execute_instruction<0x22>(0xC0DBE6, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C04F60.asm:25 END_C_FUNCTION
    case 0xC04F9D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C04F60.asm:25 END_C_FUNCTION
    case 0xC04F9E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04F9F.asm (unresolved).
bool execute_unresolved_c0_c04f9f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C04F9F.asm:3 BEGIN_C_FUNCTION
    case 0xC04F9F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C04F9F.asm:8 END_STACK_VARS
    case 0xC04FA1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C04F9F.asm:8 END_STACK_VARS
    case 0xC04FA2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C04F9F.asm:8 END_STACK_VARS
    case 0xC04FA3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04F9F.asm:8 END_STACK_VARS
    case 0xC04FA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04F9F.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC04FA4.
    case 0xC04FA6: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C04F9F.asm:8 END_STACK_VARS
    case 0xC04FA7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C04F9F.asm:8 END_STACK_VARS
    case 0xC04FA8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:9 TAY
    case 0xC04FA9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:10 STY @LOCAL01
    case 0xC04FAA: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C04F9F.asm:18 LDA GAME_STATE+game_state::player_controlled_party_members,Y
    case 0xC04FAC: cpu.execute_instruction<0xB9>(0x009891, 3); return true;
    // src/unknown/C0/C04F9F.asm:20 AND #$00FF
    case 0xC04FAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C04F9F.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC04FAF.
    case 0xC04FB1: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C04F9F.asm:21 ASL
    case 0xC04FB2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:22 TAX
    case 0xC04FB3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:23 LDA CHOSEN_FOUR_PTRS,X
    case 0xC04FB4: cpu.execute_instruction<0xBD>(0x004DC8, 3); return true;
    // src/unknown/C0/C04F9F.asm:24 TAX
    case 0xC04FB7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:25 STX @LOCAL00
    case 0xC04FB8: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C04F9F.asm:26 LDY #100
    case 0xC04FBA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000064, 2); else cpu.execute_instruction<0xA0>(0x000064, 3); return true;
    // src/unknown/C0/C04F9F.asm:26 LDY #100
    // Overlapping static entry reached from 0xC04FBA.
    case 0xC04FBC: cpu.execute_instruction<0x00>(0x0000BD, 2); return true;
    // src/unknown/C0/C04F9F.asm:27 LDA a:char_struct::max_hp,X
    case 0xC04FBD: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/C0/C04F9F.asm:28 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC04FC0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/C0/C04F9F.asm:28 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC04FC2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/C0/C04F9F.asm:28 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC04FC3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/C0/C04F9F.asm:28 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC04FC4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/C0/C04F9F.asm:28 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC04FC6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/C0/C04F9F.asm:28 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC04FC7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:29 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC04FC8: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/unknown/C0/C04F9F.asm:30 CMP a:char_struct::current_hp,X
    case 0xC04FCC: cpu.execute_instruction<0xDD>(0x000045, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C04F9F.asm:31 BLTEQ @UNKNOWN1
    case 0xC04FCF: cpu.execute_instruction<0x90>(0x000023, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C04F9F.asm:31 BLTEQ @UNKNOWN1
    case 0xC04FD1: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/unknown/C0/C04F9F.asm:32 LDY @LOCAL01
    case 0xC04FD3: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C04F9F.asm:33 TYA
    case 0xC04FD5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:34 ASL
    case 0xC04FD6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:35 TAX
    case 0xC04FD7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:36 LDA HP_ALERT_SHOWN,X
    case 0xC04FD8: cpu.execute_instruction<0xBD>(0x005D8C, 3); return true;
    // src/unknown/C0/C04F9F.asm:37 BNE @UNKNOWN0
    case 0xC04FDB: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C0/C04F9F.asm:38 LDX @LOCAL00
    case 0xC04FDD: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C04F9F.asm:39 LDA a:char_struct::unknown53,X
    case 0xC04FDF: cpu.execute_instruction<0xBD>(0x000035, 3); return true;
    // src/unknown/C0/C04F9F.asm:40 INC
    case 0xC04FE2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:41 JSL SHOW_HP_ALERT
    case 0xC04FE3: cpu.execute_instruction<0x22>(0xC1DBBB, 4); return true;
    // src/unknown/C0/C04F9F.asm:43 LDY @LOCAL01
    case 0xC04FE7: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C04F9F.asm:44 TYA
    case 0xC04FE9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:45 ASL
    case 0xC04FEA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:46 TAX
    case 0xC04FEB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:47 LDA #1
    case 0xC04FEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C04F9F.asm:47 LDA #1
    // Overlapping static entry reached from 0xC04FEC.
    case 0xC04FEE: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C04F9F.asm:48 STA HP_ALERT_SHOWN,X
    case 0xC04FEF: cpu.execute_instruction<0x9D>(0x005D8C, 3); return true;
    // src/unknown/C0/C04F9F.asm:49 BRA @UNKNOWN2
    case 0xC04FF2: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C0/C04F9F.asm:51 LDY @LOCAL01
    case 0xC04FF4: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C04F9F.asm:52 TYA
    case 0xC04FF6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:53 ASL
    case 0xC04FF7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:54 TAX
    case 0xC04FF8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:55 STZ HP_ALERT_SHOWN,X
    case 0xC04FF9: cpu.execute_instruction<0x9E>(0x005D8C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C04F9F.asm:57 END_C_FUNCTION
    case 0xC04FFC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C04F9F.asm:57 END_C_FUNCTION
    case 0xC04FFD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04FFE.asm (unresolved).
bool execute_unresolved_c0_c04ffe_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C04FFE.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC04FFE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C04FFE.asm:11 END_STACK_VARS
    case 0xC05000: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C04FFE.asm:11 END_STACK_VARS
    case 0xC05001: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04FFE.asm:11 END_STACK_VARS
    case 0xC05002: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04FFE.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC05002.
    case 0xC05004: cpu.execute_instruction<0xFF>(0xA5AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C04FFE.asm:11 END_STACK_VARS
    case 0xC05005: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:12 LDA GAME_STATE + game_state::unknownB0
    case 0xC05006: cpu.execute_instruction<0xAD>(0x0098A5, 3); return true;
    // src/unknown/C0/C04FFE.asm:12 LDA GAME_STATE + game_state::unknownB0
    // Overlapping static entry reached from 0xC05004.
    case 0xC05008: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:13 CMP #2
    case 0xC05009: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C04FFE.asm:13 CMP #2
    // Overlapping static entry reached from 0xC05009.
    case 0xC0500B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C04FFE.asm:14 BNE @UNKNOWN0
    case 0xC0500C: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C04FFE.asm:15 LDA #1
    case 0xC0500E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C04FFE.asm:15 LDA #1
    // Overlapping static entry reached from 0xC0500E.
    case 0xC05010: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C04FFE.asm:16 JMP @UNKNOWN28
    case 0xC05011: cpu.execute_instruction<0x4C>(0x0051FE, 3); return true;
    // src/unknown/C0/C04FFE.asm:18 LDA OVERWORLD_STATUS_SUPPRESSION
    case 0xC05014: cpu.execute_instruction<0xAD>(0x005D98, 3); return true;
    // src/unknown/C0/C04FFE.asm:19 BEQ @UNKNOWN1
    case 0xC05017: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C04FFE.asm:20 LDA #1
    case 0xC05019: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C04FFE.asm:20 LDA #1
    // Overlapping static entry reached from 0xC05019.
    case 0xC0501B: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C04FFE.asm:21 JMP @UNKNOWN28
    case 0xC0501C: cpu.execute_instruction<0x4C>(0x0051FE, 3); return true;
    // src/unknown/C0/C04FFE.asm:23 STZ @LOCAL04
    case 0xC0501F: cpu.execute_instruction<0x64>(0x000016, 2); return true;
    // src/unknown/C0/C04FFE.asm:24 STZ @LOCAL03
    case 0xC05021: cpu.execute_instruction<0x64>(0x000014, 2); return true;
    // src/unknown/C0/C04FFE.asm:25 LDA #0
    case 0xC05023: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:25 LDA #0
    // Overlapping static entry reached from 0xC05023.
    case 0xC05025: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C04FFE.asm:26 STA @VIRTUAL04
    case 0xC05026: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C04FFE.asm:27 STA @VIRTUAL02
    case 0xC05028: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C04FFE.asm:28 STA @LOCAL02
    case 0xC0502A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C04FFE.asm:29 JMP @UNKNOWN23
    case 0xC0502C: cpu.execute_instruction<0x4C>(0x0051C0, 3); return true;
    // src/unknown/C0/C04FFE.asm:31 LDA __BSS_START__+game_state::player_controlled_party_members,X
    case 0xC0502F: cpu.execute_instruction<0xBD>(0x00009C, 3); return true;
    // src/unknown/C0/C04FFE.asm:32 AND #$00FF
    case 0xC05032: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C04FFE.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC05032.
    case 0xC05034: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C04FFE.asm:33 ASL
    case 0xC05035: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:34 TAX
    case 0xC05036: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:35 LDA CHOSEN_FOUR_PTRS,X
    case 0xC05037: cpu.execute_instruction<0xBD>(0x004DC8, 3); return true;
    // src/unknown/C0/C04FFE.asm:36 STA CURRENT_PARTY_MEMBER_TICK
    case 0xC0503A: cpu.execute_instruction<0x8D>(0x004DC6, 3); return true;
    // src/unknown/C0/C04FFE.asm:37 TAX
    case 0xC0503D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:38 LDA __BSS_START__+char_struct::afflictions,X
    case 0xC0503E: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C0/C04FFE.asm:39 AND #$00FF
    case 0xC05041: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C04FFE.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC05041.
    case 0xC05043: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C04FFE.asm:40 TAY
    case 0xC05044: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:41 STY @LOCAL01
    case 0xC05045: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C04FFE.asm:42 CPY #1
    case 0xC05047: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000001, 2); else cpu.execute_instruction<0xC0>(0x000001, 3); return true;
    // src/unknown/C0/C04FFE.asm:42 CPY #1
    // Overlapping static entry reached from 0xC05047.
    case 0xC05049: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C04FFE.asm:43 BEQL @UNKNOWN22
    case 0xC0504A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C04FFE.asm:43 BEQL @UNKNOWN22
    case 0xC0504C: cpu.execute_instruction<0x4C>(0x0051B6, 3); return true;
    // src/unknown/C0/C04FFE.asm:44 CPY #2
    case 0xC0504F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000002, 2); else cpu.execute_instruction<0xC0>(0x000002, 3); return true;
    // src/unknown/C0/C04FFE.asm:44 CPY #2
    // Overlapping static entry reached from 0xC0504F.
    case 0xC05051: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C04FFE.asm:45 BEQL @UNKNOWN22
    case 0xC05052: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C04FFE.asm:45 BEQL @UNKNOWN22
    case 0xC05054: cpu.execute_instruction<0x4C>(0x0051B6, 3); return true;
    // src/unknown/C0/C04FFE.asm:46 CPY #5
    case 0xC05057: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000005, 2); else cpu.execute_instruction<0xC0>(0x000005, 3); return true;
    // src/unknown/C0/C04FFE.asm:46 CPY #5
    // Overlapping static entry reached from 0xC05057.
    case 0xC05059: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C04FFE.asm:47 BNE @UNKNOWN7
    case 0xC0505A: cpu.execute_instruction<0xD0>(0x00004D, 2); return true;
    // src/unknown/C0/C04FFE.asm:48 LDA @VIRTUAL02
    case 0xC0505C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C04FFE.asm:49 ASL
    case 0xC0505E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:50 CLC
    case 0xC0505F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:51 ADC #.LOWORD(OVERWORLD_DAMAGE_COUNTDOWN_FRAMES)
    case 0xC05060: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000066, 2); else cpu.execute_instruction<0x69>(0x005D66, 3); return true;
    // src/unknown/C0/C04FFE.asm:51 ADC #.LOWORD(OVERWORLD_DAMAGE_COUNTDOWN_FRAMES)
    // Overlapping static entry reached from 0xC05060.
    case 0xC05062: cpu.execute_instruction<0x5D>(0x00BDAA, 3); return true;
    // src/unknown/C0/C04FFE.asm:52 TAX
    case 0xC05063: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:53 LDA __BSS_START__,X
    case 0xC05064: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:53 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC05062.
    case 0xC05065: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C04FFE.asm:54 BEQ @UNKNOWN6
    case 0xC05067: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // src/unknown/C0/C04FFE.asm:55 DEC
    case 0xC05069: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:56 STA __BSS_START__,X
    case 0xC0506A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C04FFE.asm:57 BNEL @UNKNOWN14
    case 0xC0506D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C04FFE.asm:57 BNEL @UNKNOWN14
    case 0xC0506F: cpu.execute_instruction<0x4C>(0x00513D, 3); return true;
    // src/unknown/C0/C04FFE.asm:58 INC @VIRTUAL04
    case 0xC05072: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C0/C04FFE.asm:59 LDA CURRENT_PARTY_MEMBER_TICK
    case 0xC05074: cpu.execute_instruction<0xAD>(0x004DC6, 3); return true;
    // src/unknown/C0/C04FFE.asm:60 CLC
    case 0xC05077: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:61 ADC #char_struct::current_hp
    case 0xC05078: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000045, 2); else cpu.execute_instruction<0x69>(0x000045, 3); return true;
    // src/unknown/C0/C04FFE.asm:61 ADC #char_struct::current_hp
    // Overlapping static entry reached from 0xC05078.
    case 0xC0507A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C04FFE.asm:62 TAX
    case 0xC0507B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:63 LDA __BSS_START__,X
    case 0xC0507C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:64 SEC
    case 0xC0507F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:65 SBC #10
    case 0xC05080: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000A, 2); else cpu.execute_instruction<0xE9>(0x00000A, 3); return true;
    // src/unknown/C0/C04FFE.asm:65 SBC #10
    // Overlapping static entry reached from 0xC05080.
    case 0xC05082: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C04FFE.asm:66 STA __BSS_START__,X
    case 0xC05083: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:67 LDA CURRENT_PARTY_MEMBER_TICK
    case 0xC05086: cpu.execute_instruction<0xAD>(0x004DC6, 3); return true;
    // src/unknown/C0/C04FFE.asm:68 CLC
    case 0xC05089: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:69 ADC #char_struct::current_hp_target
    case 0xC0508A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000047, 2); else cpu.execute_instruction<0x69>(0x000047, 3); return true;
    // src/unknown/C0/C04FFE.asm:69 ADC #char_struct::current_hp_target
    // Overlapping static entry reached from 0xC0508A.
    case 0xC0508C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C04FFE.asm:70 TAX
    case 0xC0508D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:71 LDA __BSS_START__,X
    case 0xC0508E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:72 SEC
    case 0xC05091: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:73 SBC #10
    case 0xC05092: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000A, 2); else cpu.execute_instruction<0xE9>(0x00000A, 3); return true;
    // src/unknown/C0/C04FFE.asm:73 SBC #10
    // Overlapping static entry reached from 0xC05092.
    case 0xC05094: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C04FFE.asm:74 STA __BSS_START__,X
    case 0xC05095: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:75 LDA @VIRTUAL02
    case 0xC05098: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C04FFE.asm:76 JSR UNKNOWN_C04F9F
    case 0xC0509A: cpu.execute_instruction<0x20>(0x004F9F, 3); return true;
    // src/unknown/C0/C04FFE.asm:77 JMP @UNKNOWN14
    case 0xC0509D: cpu.execute_instruction<0x4C>(0x00513D, 3); return true;
    // src/unknown/C0/C04FFE.asm:79 LDA #120
    case 0xC050A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x000078, 3); return true;
    // src/unknown/C0/C04FFE.asm:79 LDA #120
    // Overlapping static entry reached from 0xC050A0.
    case 0xC050A2: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C04FFE.asm:80 STA __BSS_START__,X
    case 0xC050A3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:81 JMP @UNKNOWN14
    case 0xC050A6: cpu.execute_instruction<0x4C>(0x00513D, 3); return true;
    // src/unknown/C0/C04FFE.asm:83 CPY #4
    case 0xC050A9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000004, 2); else cpu.execute_instruction<0xC0>(0x000004, 3); return true;
    // src/unknown/C0/C04FFE.asm:83 CPY #4
    // Overlapping static entry reached from 0xC050A9.
    case 0xC050AB: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C04FFE.asm:84 BCC @UNKNOWN8
    case 0xC050AC: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // src/unknown/C0/C04FFE.asm:85 CPY #7
    case 0xC050AE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000007, 2); else cpu.execute_instruction<0xC0>(0x000007, 3); return true;
    // src/unknown/C0/C04FFE.asm:85 CPY #7
    // Overlapping static entry reached from 0xC050AE.
    case 0xC050B0: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C04FFE.asm:86 BLTEQ @UNKNOWN9
    case 0xC050B1: cpu.execute_instruction<0x90>(0x000010, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C04FFE.asm:86 BLTEQ @UNKNOWN9
    case 0xC050B3: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C0/C04FFE.asm:88 LDA GAME_STATE+game_state::trodden_tile_type
    case 0xC050B5: cpu.execute_instruction<0xAD>(0x009881, 3); return true;
    // src/unknown/C0/C04FFE.asm:89 AND #$000C
    case 0xC050B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/unknown/C0/C04FFE.asm:89 AND #$000C
    // Overlapping static entry reached from 0xC050B8.
    case 0xC050BA: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C04FFE.asm:90 CMP #12
    case 0xC050BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/unknown/C0/C04FFE.asm:90 CMP #12
    // Overlapping static entry reached from 0xC050BB.
    case 0xC050BD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C04FFE.asm:91 BNEL @UNKNOWN14
    case 0xC050BE: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C04FFE.asm:91 BNEL @UNKNOWN14
    case 0xC050C0: cpu.execute_instruction<0x4C>(0x00513D, 3); return true;
    // src/unknown/C0/C04FFE.asm:93 LDA @VIRTUAL02
    case 0xC050C3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C04FFE.asm:94 ASL
    case 0xC050C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:95 CLC
    case 0xC050C6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:96 ADC #.LOWORD(OVERWORLD_DAMAGE_COUNTDOWN_FRAMES)
    case 0xC050C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000066, 2); else cpu.execute_instruction<0x69>(0x005D66, 3); return true;
    // src/unknown/C0/C04FFE.asm:96 ADC #.LOWORD(OVERWORLD_DAMAGE_COUNTDOWN_FRAMES)
    // Overlapping static entry reached from 0xC050C7.
    case 0xC050C9: cpu.execute_instruction<0x5D>(0x00BDAA, 3); return true;
    // src/unknown/C0/C04FFE.asm:97 TAX
    case 0xC050CA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:98 LDA __BSS_START__,X
    case 0xC050CB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:98 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC050C9.
    case 0xC050CC: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C04FFE.asm:99 BEQ @UNKNOWN12
    case 0xC050CE: cpu.execute_instruction<0xF0>(0x00005A, 2); return true;
    // src/unknown/C0/C04FFE.asm:100 DEC
    case 0xC050D0: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:101 STA __BSS_START__,X
    case 0xC050D1: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:102 BNE @UNKNOWN14
    case 0xC050D4: cpu.execute_instruction<0xD0>(0x000067, 2); return true;
    // src/unknown/C0/C04FFE.asm:103 INC @VIRTUAL04
    case 0xC050D6: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C0/C04FFE.asm:104 CPY #4
    case 0xC050D8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000004, 2); else cpu.execute_instruction<0xC0>(0x000004, 3); return true;
    // src/unknown/C0/C04FFE.asm:104 CPY #4
    // Overlapping static entry reached from 0xC050D8.
    case 0xC050DA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C04FFE.asm:105 BNE @UNKNOWN10
    case 0xC050DB: cpu.execute_instruction<0xD0>(0x000026, 2); return true;
    // src/unknown/C0/C04FFE.asm:106 LDA CURRENT_PARTY_MEMBER_TICK
    case 0xC050DD: cpu.execute_instruction<0xAD>(0x004DC6, 3); return true;
    // src/unknown/C0/C04FFE.asm:107 CLC
    case 0xC050E0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:108 ADC #char_struct::current_hp
    case 0xC050E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000045, 2); else cpu.execute_instruction<0x69>(0x000045, 3); return true;
    // src/unknown/C0/C04FFE.asm:108 ADC #char_struct::current_hp
    // Overlapping static entry reached from 0xC050E1.
    case 0xC050E3: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C04FFE.asm:109 TAX
    case 0xC050E4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:110 LDA __BSS_START__,X
    case 0xC050E5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:111 SEC
    case 0xC050E8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:112 SBC #10
    case 0xC050E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000A, 2); else cpu.execute_instruction<0xE9>(0x00000A, 3); return true;
    // src/unknown/C0/C04FFE.asm:112 SBC #10
    // Overlapping static entry reached from 0xC050E9.
    case 0xC050EB: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C04FFE.asm:113 STA __BSS_START__,X
    case 0xC050EC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:114 LDA CURRENT_PARTY_MEMBER_TICK
    case 0xC050EF: cpu.execute_instruction<0xAD>(0x004DC6, 3); return true;
    // src/unknown/C0/C04FFE.asm:115 CLC
    case 0xC050F2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:116 ADC #char_struct::current_hp_target
    case 0xC050F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000047, 2); else cpu.execute_instruction<0x69>(0x000047, 3); return true;
    // src/unknown/C0/C04FFE.asm:116 ADC #char_struct::current_hp_target
    // Overlapping static entry reached from 0xC050F3.
    case 0xC050F5: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C04FFE.asm:117 TAX
    case 0xC050F6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:118 LDA __BSS_START__,X
    case 0xC050F7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:119 SEC
    case 0xC050FA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:120 SBC #10
    case 0xC050FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000A, 2); else cpu.execute_instruction<0xE9>(0x00000A, 3); return true;
    // src/unknown/C0/C04FFE.asm:120 SBC #10
    // Overlapping static entry reached from 0xC050FB.
    case 0xC050FD: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C04FFE.asm:121 STA __BSS_START__,X
    case 0xC050FE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:122 BRA @UNKNOWN11
    case 0xC05101: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/unknown/C0/C04FFE.asm:124 LDA CURRENT_PARTY_MEMBER_TICK
    case 0xC05103: cpu.execute_instruction<0xAD>(0x004DC6, 3); return true;
    // src/unknown/C0/C04FFE.asm:125 CLC
    case 0xC05106: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:126 ADC #char_struct::current_hp
    case 0xC05107: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000045, 2); else cpu.execute_instruction<0x69>(0x000045, 3); return true;
    // src/unknown/C0/C04FFE.asm:126 ADC #char_struct::current_hp
    // Overlapping static entry reached from 0xC05107.
    case 0xC05109: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C04FFE.asm:127 TAX
    case 0xC0510A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:128 LDA __BSS_START__,X
    case 0xC0510B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:129 DEC
    case 0xC0510E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:130 DEC
    case 0xC0510F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:131 STA __BSS_START__,X
    case 0xC05110: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:132 LDA CURRENT_PARTY_MEMBER_TICK
    case 0xC05113: cpu.execute_instruction<0xAD>(0x004DC6, 3); return true;
    // src/unknown/C0/C04FFE.asm:133 CLC
    case 0xC05116: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:134 ADC #char_struct::current_hp_target
    case 0xC05117: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000047, 2); else cpu.execute_instruction<0x69>(0x000047, 3); return true;
    // src/unknown/C0/C04FFE.asm:134 ADC #char_struct::current_hp_target
    // Overlapping static entry reached from 0xC05117.
    case 0xC05119: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C04FFE.asm:135 TAX
    case 0xC0511A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:136 LDA __BSS_START__,X
    case 0xC0511B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:137 DEC
    case 0xC0511E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:138 DEC
    case 0xC0511F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:139 STA __BSS_START__,X
    case 0xC05120: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:141 LDA @VIRTUAL02
    case 0xC05123: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C04FFE.asm:142 JSR UNKNOWN_C04F9F
    case 0xC05125: cpu.execute_instruction<0x20>(0x004F9F, 3); return true;
    // src/unknown/C0/C04FFE.asm:143 BRA @UNKNOWN14
    case 0xC05128: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C0/C04FFE.asm:145 CPY #4
    case 0xC0512A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000004, 2); else cpu.execute_instruction<0xC0>(0x000004, 3); return true;
    // src/unknown/C0/C04FFE.asm:145 CPY #4
    // Overlapping static entry reached from 0xC0512A.
    case 0xC0512C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C04FFE.asm:146 BNE @UNKNOWN13
    case 0xC0512D: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C0/C04FFE.asm:147 LDA #120
    case 0xC0512F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x000078, 3); return true;
    // src/unknown/C0/C04FFE.asm:147 LDA #120
    // Overlapping static entry reached from 0xC0512F.
    case 0xC05131: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C04FFE.asm:148 STA __BSS_START__,X
    case 0xC05132: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:149 BRA @UNKNOWN14
    case 0xC05135: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C04FFE.asm:151 LDA #240
    case 0xC05137: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F0, 2); else cpu.execute_instruction<0xA9>(0x0000F0, 3); return true;
    // src/unknown/C0/C04FFE.asm:151 LDA #240
    // Overlapping static entry reached from 0xC05137.
    case 0xC05139: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C04FFE.asm:152 STA __BSS_START__,X
    case 0xC0513A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:154 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC0513D: cpu.execute_instruction<0xAE>(0x004DC6, 3); return true;
    // src/unknown/C0/C04FFE.asm:155 LDA __BSS_START__+char_struct::current_hp,X
    case 0xC05140: cpu.execute_instruction<0xBD>(0x000045, 3); return true;
    // src/unknown/C0/C04FFE.asm:156 CMP #$8000
    case 0xC05143: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C04FFE.asm:156 CMP #$8000
    // Overlapping static entry reached from 0xC05143.
    case 0xC05145: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C0/C04FFE.asm:157 BGT @UNKNOWN16
    case 0xC05146: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C04FFE.asm:157 BGT @UNKNOWN16
    case 0xC05148: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C04FFE.asm:158 CMP #0
    case 0xC0514A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:158 CMP #0
    // Overlapping static entry reached from 0xC0514A.
    case 0xC0514C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C04FFE.asm:159 BNE @UNKNOWN21
    case 0xC0514D: cpu.execute_instruction<0xD0>(0x00005B, 2); return true;
    // src/unknown/C0/C04FFE.asm:161 LDY @LOCAL01
    case 0xC0514F: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C04FFE.asm:162 CPY #1
    case 0xC05151: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000001, 2); else cpu.execute_instruction<0xC0>(0x000001, 3); return true;
    // src/unknown/C0/C04FFE.asm:162 CPY #1
    // Overlapping static entry reached from 0xC05151.
    case 0xC05153: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04FFE.asm:163 BEQ @UNKNOWN22
    case 0xC05154: cpu.execute_instruction<0xF0>(0x000060, 2); return true;
    // src/unknown/C0/C04FFE.asm:164 LDA #0
    case 0xC05156: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:164 LDA #0
    // Overlapping static entry reached from 0xC05156.
    case 0xC05158: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C04FFE.asm:165 STA @LOCAL00
    case 0xC05159: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C04FFE.asm:166 BRA @UNKNOWN18
    case 0xC0515B: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C0/C04FFE.asm:168 LDA @LOCAL00
    case 0xC0515D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C04FFE.asm:169 CLC
    case 0xC0515F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:170 ADC CURRENT_PARTY_MEMBER_TICK
    case 0xC05160: cpu.execute_instruction<0x6D>(0x004DC6, 3); return true;
    // src/unknown/C0/C04FFE.asm:171 TAX
    case 0xC05163: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:172 SEP #PROC_FLAGS::ACCUM8
    case 0xC05164: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C04FFE.asm:173 STZ __BSS_START__+char_struct::afflictions,X
    case 0xC05166: cpu.execute_instruction<0x9E>(0x00000E, 3); return true;
    // src/unknown/C0/C04FFE.asm:174 REP #PROC_FLAGS::ACCUM8
    case 0xC05169: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C04FFE.asm:175 LDA @LOCAL00
    case 0xC0516B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C04FFE.asm:176 INC
    case 0xC0516D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:177 STA @LOCAL00
    case 0xC0516E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C04FFE.asm:179 STA @VIRTUAL02
    case 0xC05170: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C04FFE.asm:180 LDA #6
    case 0xC05172: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C0/C04FFE.asm:180 LDA #6
    // Overlapping static entry reached from 0xC05172.
    case 0xC05174: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C04FFE.asm:181 CLC
    case 0xC05175: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:182 SBC @VIRTUAL02
    case 0xC05176: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C0/C04FFE.asm:183 BRANCHGTS @UNKNOWN17
    case 0xC05178: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C0/C04FFE.asm:183 BRANCHGTS @UNKNOWN17
    case 0xC0517A: cpu.execute_instruction<0x10>(0x0000E1, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C0/C04FFE.asm:183 BRANCHGTS @UNKNOWN17
    case 0xC0517C: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C0/C04FFE.asm:183 BRANCHGTS @UNKNOWN17
    case 0xC0517E: cpu.execute_instruction<0x30>(0x0000DD, 2); return true;
    // src/unknown/C0/C04FFE.asm:184 SEP #PROC_FLAGS::ACCUM8
    case 0xC05180: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C04FFE.asm:185 LDA #1
    case 0xC05182: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00AE01, 3); return true;
    // src/unknown/C0/C04FFE.asm:186 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC05184: cpu.execute_instruction<0xAE>(0x004DC6, 3); return true;
    // src/unknown/C0/C04FFE.asm:186 LDX CURRENT_PARTY_MEMBER_TICK
    // Overlapping static entry reached from 0xC05182.
    case 0xC05185: cpu.execute_instruction<0xC6>(0x00004D, 2); return true;
    // src/unknown/C0/C04FFE.asm:187 STA a:char_struct::afflictions,X
    case 0xC05187: cpu.execute_instruction<0x9D>(0x00000E, 3); return true;
    // src/unknown/C0/C04FFE.asm:188 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC0518A: cpu.execute_instruction<0xAE>(0x004DC6, 3); return true;
    // src/unknown/C0/C04FFE.asm:189 REP #PROC_FLAGS::ACCUM8
    case 0xC0518D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C04FFE.asm:190 STZ a:char_struct::current_hp_target,X
    case 0xC0518F: cpu.execute_instruction<0x9E>(0x000047, 3); return true;
    // src/unknown/C0/C04FFE.asm:191 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC05192: cpu.execute_instruction<0xAE>(0x004DC6, 3); return true;
    // src/unknown/C0/C04FFE.asm:192 STZ a:char_struct::current_hp,X
    case 0xC05195: cpu.execute_instruction<0x9E>(0x000045, 3); return true;
    // src/unknown/C0/C04FFE.asm:193 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC05198: cpu.execute_instruction<0xAE>(0x004DC6, 3); return true;
    // src/unknown/C0/C04FFE.asm:194 LDA a:char_struct::unknown59,X
    case 0xC0519B: cpu.execute_instruction<0xBD>(0x00003B, 3); return true;
    // src/unknown/C0/C04FFE.asm:195 ASL
    case 0xC0519E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:196 TAX
    case 0xC0519F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:197 LDA #16
    case 0xC051A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C0/C04FFE.asm:197 LDA #16
    // Overlapping static entry reached from 0xC051A0.
    case 0xC051A2: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C04FFE.asm:198 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC051A3: cpu.execute_instruction<0x9D>(0x000F12, 3); return true;
    // src/unknown/C0/C04FFE.asm:199 INC @LOCAL04
    case 0xC051A6: cpu.execute_instruction<0xE6>(0x000016, 2); return true;
    // src/unknown/C0/C04FFE.asm:200 BRA @UNKNOWN22
    case 0xC051A8: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C0/C04FFE.asm:202 LDY @LOCAL01
    case 0xC051AA: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C04FFE.asm:203 CPY #2
    case 0xC051AC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000002, 2); else cpu.execute_instruction<0xC0>(0x000002, 3); return true;
    // src/unknown/C0/C04FFE.asm:203 CPY #2
    // Overlapping static entry reached from 0xC051AC.
    case 0xC051AE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04FFE.asm:204 BEQ @UNKNOWN22
    case 0xC051AF: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C04FFE.asm:205 CLC
    case 0xC051B1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:206 ADC @LOCAL03
    case 0xC051B2: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/unknown/C0/C04FFE.asm:207 STA @LOCAL03
    case 0xC051B4: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C04FFE.asm:209 LDA @LOCAL02
    case 0xC051B6: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C04FFE.asm:210 STA @VIRTUAL02
    case 0xC051B8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C04FFE.asm:211 INC @VIRTUAL02
    case 0xC051BA: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C04FFE.asm:212 LDA @VIRTUAL02
    case 0xC051BC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C04FFE.asm:213 STA @LOCAL02
    case 0xC051BE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C04FFE.asm:215 LDA @VIRTUAL02
    case 0xC051C0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C04FFE.asm:216 CLC
    case 0xC051C2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:217 ADC #.LOWORD(GAME_STATE)
    case 0xC051C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F5, 2); else cpu.execute_instruction<0x69>(0x0097F5, 3); return true;
    // src/unknown/C0/C04FFE.asm:217 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC051C3.
    case 0xC051C5: cpu.execute_instruction<0x97>(0x0000AA, 2); return true;
    // src/unknown/C0/C04FFE.asm:218 TAX
    case 0xC051C6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:219 LDA __BSS_START__+game_state::unknown96,X
    case 0xC051C7: cpu.execute_instruction<0xBD>(0x000096, 3); return true;
    // src/unknown/C0/C04FFE.asm:220 AND #$00FF
    case 0xC051CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C04FFE.asm:220 AND #$00FF
    // Overlapping static entry reached from 0xC051CA.
    case 0xC051CC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04FFE.asm:221 BEQ @UNKNOWN25
    case 0xC051CD: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C0/C04FFE.asm:222 AND #$00FF
    case 0xC051CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C04FFE.asm:222 AND #$00FF
    // Overlapping static entry reached from 0xC051CF.
    case 0xC051D1: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C04FFE.asm:223 CLC
    case 0xC051D2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:224 SBC #4
    case 0xC051D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/unknown/C0/C04FFE.asm:224 SBC #4
    // Overlapping static entry reached from 0xC051D3.
    case 0xC051D5: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:826 BVC :+
    // Macro caller: src/unknown/C0/C04FFE.asm:225 JUMPLTEQS @UNKNOWN2
    case 0xC051D6: cpu.execute_instruction<0x50>(0x000005, 2); return true;
    // include/macros.asm:827 BMI :++
    // Macro caller: src/unknown/C0/C04FFE.asm:225 JUMPLTEQS @UNKNOWN2
    case 0xC051D8: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:828 JMP dest
    // Macro caller: src/unknown/C0/C04FFE.asm:225 JUMPLTEQS @UNKNOWN2
    case 0xC051DA: cpu.execute_instruction<0x4C>(0x00502F, 3); return true;
    // include/macros.asm:830 BPL :+
    // Macro caller: src/unknown/C0/C04FFE.asm:225 JUMPLTEQS @UNKNOWN2
    case 0xC051DD: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:831 JMP dest
    // Macro caller: src/unknown/C0/C04FFE.asm:225 JUMPLTEQS @UNKNOWN2
    case 0xC051DF: cpu.execute_instruction<0x4C>(0x00502F, 3); return true;
    // src/unknown/C0/C04FFE.asm:227 LDA @VIRTUAL04
    case 0xC051E2: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C04FFE.asm:228 BEQ @UNKNOWN26
    case 0xC051E4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C04FFE.asm:229 JSR UNKNOWN_C04F60
    case 0xC051E6: cpu.execute_instruction<0x20>(0x004F60, 3); return true;
    // src/unknown/C0/C04FFE.asm:231 LDA @LOCAL04
    case 0xC051E9: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C04FFE.asm:232 BEQ @UNKNOWN27
    case 0xC051EB: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C0/C04FFE.asm:233 STZ PARTY_MEMBERS_ALIVE_OVERWORLD
    case 0xC051ED: cpu.execute_instruction<0x9C>(0x004DC4, 3); return true;
    // src/unknown/C0/C04FFE.asm:234 JSL UPDATE_PARTY
    case 0xC051F0: cpu.execute_instruction<0x22>(0xC034D6, 4); return true;
    // src/unknown/C0/C04FFE.asm:235 JSL UNKNOWN_C07B52
    case 0xC051F4: cpu.execute_instruction<0x22>(0xC07B52, 4); return true;
    // src/unknown/C0/C04FFE.asm:236 JSL UNKNOWN_C09451
    case 0xC051F8: cpu.execute_instruction<0x22>(0xC09451, 4); return true;
    // src/unknown/C0/C04FFE.asm:238 LDA @LOCAL03
    case 0xC051FC: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C04FFE.asm:240 END_C_FUNCTION
    case 0xC051FE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C04FFE.asm:240 END_C_FUNCTION
    case 0xC051FF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05200.asm (unresolved).
bool execute_unresolved_c0_c05200_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05200.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC05200: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05200.asm:6 END_STACK_VARS
    case 0xC05202: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05200.asm:6 END_STACK_VARS
    case 0xC05203: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05200.asm:6 END_STACK_VARS
    case 0xC05204: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05200.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC05204.
    case 0xC05206: cpu.execute_instruction<0xFF>(0xC2AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05200.asm:6 END_STACK_VARS
    case 0xC05207: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C05200.asm:7 LDA BATTLE_MODE
    case 0xC05208: cpu.execute_instruction<0xAD>(0x004DC2, 3); return true;
    // src/unknown/C0/C05200.asm:7 LDA BATTLE_MODE
    // Overlapping static entry reached from 0xC05206.
    case 0xC0520A: cpu.execute_instruction<0x4D>(0x0003F0, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C05200.asm:8 BNEL @UNKNOWN9
    case 0xC0520B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C05200.asm:8 BNEL @UNKNOWN9
    case 0xC0520D: cpu.execute_instruction<0x4C>(0x0052A8, 3); return true;
    // src/unknown/C0/C05200.asm:9 LDA POSSESSED_PLAYER_COUNT
    case 0xC05210: cpu.execute_instruction<0xAD>(0x009F6F, 3); return true;
    // src/unknown/C0/C05200.asm:10 BEQ @UNKNOWN1
    case 0xC05213: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C0/C05200.asm:11 LDA MINI_GHOST_ENTITY_ID
    case 0xC05215: cpu.execute_instruction<0xAD>(0x009F6B, 3); return true;
    // src/unknown/C0/C05200.asm:12 CMP #.LOWORD(-1)
    case 0xC05218: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C05200.asm:12 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC05218.
    case 0xC0521A: cpu.execute_instruction<0xFF>(0x2212D0, 4); return true;
    // src/unknown/C0/C05200.asm:13 BNE @UNKNOWN2
    case 0xC0521B: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/unknown/C0/C05200.asm:14 JSL UNKNOWN_C07716
    case 0xC0521D: cpu.execute_instruction<0x22>(0xC07716, 4); return true;
    // src/unknown/C0/C05200.asm:14 JSL UNKNOWN_C07716
    // Overlapping static entry reached from 0xC0521A.
    case 0xC0521E: cpu.execute_instruction<0x16>(0x000077, 2); return true;
    // src/unknown/C0/C05200.asm:14 JSL UNKNOWN_C07716
    // Overlapping static entry reached from 0xC0521E.
    case 0xC05220: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000080, 2); else cpu.execute_instruction<0xC0>(0x000C80, 3); return true;
    // src/unknown/C0/C05200.asm:15 BRA @UNKNOWN2
    case 0xC05221: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C0/C05200.asm:15 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC05220.
    case 0xC05222: cpu.execute_instruction<0x0C>(0x006BAD, 3); return true;
    // src/unknown/C0/C05200.asm:17 LDA MINI_GHOST_ENTITY_ID
    case 0xC05223: cpu.execute_instruction<0xAD>(0x009F6B, 3); return true;
    // src/unknown/C0/C05200.asm:17 LDA MINI_GHOST_ENTITY_ID
    // Overlapping static entry reached from 0xC05222.
    case 0xC05225: cpu.execute_instruction<0x9F>(0xFFFFC9, 4); return true;
    // src/unknown/C0/C05200.asm:18 CMP #.LOWORD(-1)
    case 0xC05226: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C05200.asm:18 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC05226.
    case 0xC05228: cpu.execute_instruction<0xFF>(0x2204F0, 4); return true;
    // src/unknown/C0/C05200.asm:19 BEQ @UNKNOWN2
    case 0xC05229: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C0/C05200.asm:20 JSL UNKNOWN_C0777A
    case 0xC0522B: cpu.execute_instruction<0x22>(0xC0777A, 4); return true;
    // src/unknown/C0/C05200.asm:20 JSL UNKNOWN_C0777A
    // Overlapping static entry reached from 0xC05228.
    case 0xC0522C: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C05200.asm:20 JSL UNKNOWN_C0777A
    // Overlapping static entry reached from 0xC0522C.
    case 0xC0522D: cpu.execute_instruction<0x77>(0x0000C0, 2); return true;
    // src/unknown/C0/C05200.asm:22 LDA LOADED_ANIMATED_TILE_COUNT
    case 0xC0522F: cpu.execute_instruction<0xAD>(0x004472, 3); return true;
    // src/unknown/C0/C05200.asm:23 BEQ @UNKNOWN3
    case 0xC05232: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C0/C05200.asm:24 JSL ANIMATE_TILESET
    case 0xC05234: cpu.execute_instruction<0x22>(0xC00172, 4); return true;
    // src/unknown/C0/C05200.asm:26 LDA MAP_PALETTE_ANIMATION_LOADED
    case 0xC05238: cpu.execute_instruction<0xAD>(0x004474, 3); return true;
    // src/unknown/C0/C05200.asm:27 BEQ @UNKNOWN4
    case 0xC0523B: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C0/C05200.asm:28 JSL ANIMATE_PALETTE
    case 0xC0523D: cpu.execute_instruction<0x22>(0xC0030F, 4); return true;
    // src/unknown/C0/C05200.asm:30 LDA ITEM_TRANSFORMATIONS_LOADED
    case 0xC05241: cpu.execute_instruction<0xAD>(0x009F2A, 3); return true;
    // src/unknown/C0/C05200.asm:31 BEQ @UNKNOWN5
    case 0xC05244: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C0/C05200.asm:32 JSL PROCESS_ITEM_TRANSFORMATIONS
    case 0xC05246: cpu.execute_instruction<0x22>(0xC48FC4, 4); return true;
    // src/unknown/C0/C05200.asm:34 JSL UNKNOWN_C04C45
    case 0xC0524A: cpu.execute_instruction<0x22>(0xC04C45, 4); return true;
    // src/unknown/C0/C05200.asm:35 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0524E: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C05200.asm:36 XBA
    case 0xC05251: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C05200.asm:37 AND #$00FF
    case 0xC05252: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C05200.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC05252.
    case 0xC05254: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05200.asm:38 STA @LOCAL00
    case 0xC05255: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05200.asm:39 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC05257: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C0/C05200.asm:40 XBA
    case 0xC0525A: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C05200.asm:41 AND #$00FF
    case 0xC0525B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C05200.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC0525B.
    case 0xC0525D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C05200.asm:42 TAX
    case 0xC0525E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05200.asm:43 LDA @LOCAL00
    case 0xC0525F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05200.asm:44 EOR LAST_SECTOR_X
    case 0xC05261: cpu.execute_instruction<0x4D>(0x005D5C, 3); return true;
    // src/unknown/C0/C05200.asm:45 BNE @UNKNOWN6
    case 0xC05264: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C05200.asm:46 TXA
    case 0xC05266: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05200.asm:47 EOR LAST_SECTOR_Y
    case 0xC05267: cpu.execute_instruction<0x4D>(0x005D5E, 3); return true;
    // src/unknown/C0/C05200.asm:48 BEQ @UNKNOWN7
    case 0xC0526A: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C0/C05200.asm:50 LDA @LOCAL00
    case 0xC0526C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05200.asm:51 STA LAST_SECTOR_X
    case 0xC0526E: cpu.execute_instruction<0x8D>(0x005D5C, 3); return true;
    // src/unknown/C0/C05200.asm:52 STX LAST_SECTOR_Y
    case 0xC05271: cpu.execute_instruction<0x8E>(0x005D5E, 3); return true;
    // src/unknown/C0/C05200.asm:53 LDA ENABLE_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC05274: cpu.execute_instruction<0xAD>(0x00B549, 3); return true;
    // src/unknown/C0/C05200.asm:54 BEQ @UNKNOWN7
    case 0xC05277: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C05200.asm:55 JSR UNKNOWN_C03C25
    case 0xC05279: cpu.execute_instruction<0x20>(0x003C25, 3); return true;
    // src/unknown/C0/C05200.asm:57 LDA DAD_PHONE_TIMER
    case 0xC0527C: cpu.execute_instruction<0xAD>(0x009E54, 3); return true;
    // src/unknown/C0/C05200.asm:58 BNE @UNKNOWN8
    case 0xC0527F: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/C0/C05200.asm:59 LDA GAME_STATE + game_state::unknownB0
    case 0xC05281: cpu.execute_instruction<0xAD>(0x0098A5, 3); return true;
    // src/unknown/C0/C05200.asm:60 CMP #2
    case 0xC05284: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C05200.asm:60 CMP #2
    // Overlapping static entry reached from 0xC05284.
    case 0xC05286: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05200.asm:61 BEQ @UNKNOWN8
    case 0xC05287: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C0/C05200.asm:62 JSL LOAD_DAD_PHONE
    case 0xC05289: cpu.execute_instruction<0x22>(0xC0DCC6, 4); return true;
    // src/unknown/C0/C05200.asm:64 STZ POSSESSED_PLAYER_COUNT
    case 0xC0528D: cpu.execute_instruction<0x9C>(0x009F6F, 3); return true;
    // src/unknown/C0/C05200.asm:65 LDA GAME_STATE+game_state::leader_direction
    case 0xC05290: cpu.execute_instruction<0xAD>(0x00987F, 3); return true;
    // src/unknown/C0/C05200.asm:66 STA CURRENT_LEADER_DIRECTION
    case 0xC05293: cpu.execute_instruction<0x8D>(0x005D76, 3); return true;
    // src/unknown/C0/C05200.asm:67 LDA GAME_STATE+game_state::current_party_members
    case 0xC05296: cpu.execute_instruction<0xAD>(0x009889, 3); return true;
    // src/unknown/C0/C05200.asm:68 ASL
    case 0xC05299: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05200.asm:69 STA CURRENT_LEADING_PARTY_MEMBER_ENTITY
    case 0xC0529A: cpu.execute_instruction<0x8D>(0x005D78, 3); return true;
    // src/unknown/C0/C05200.asm:70 LDA GAME_STATE + game_state::unknown90
    case 0xC0529D: cpu.execute_instruction<0xAD>(0x009885, 3); return true;
    // src/unknown/C0/C05200.asm:71 BEQ @UNKNOWN9
    case 0xC052A0: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C05200.asm:72 LDA #1
    case 0xC052A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C05200.asm:72 LDA #1
    // Overlapping static entry reached from 0xC052A2.
    case 0xC052A4: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C05200.asm:73 STA PLAYER_HAS_DONE_SOMETHING_THIS_FRAME
    case 0xC052A5: cpu.execute_instruction<0x8D>(0x000A34, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05200.asm:75 END_C_FUNCTION
    case 0xC052A8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C05200.asm:75 END_C_FUNCTION
    case 0xC052A9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C052D4.asm (unresolved).
bool execute_unresolved_c0_c052d4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C052D4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC052D4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C052D4.asm:17 END_STACK_VARS
    case 0xC052D6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C052D4.asm:17 END_STACK_VARS
    case 0xC052D7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C052D4.asm:17 END_STACK_VARS
    case 0xC052D8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C052D4.asm:17 END_STACK_VARS
    case 0xC052D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x00FFD6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C052D4.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC052D9.
    case 0xC052DB: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C052D4.asm:17 END_STACK_VARS
    case 0xC052DC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C052D4.asm:17 END_STACK_VARS
    case 0xC052DD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:18 STA @LOCAL0A
    case 0xC052DE: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C052D4.asm:18 STA @LOCAL0A
    // Overlapping static entry reached from 0xC052DB.
    case 0xC052DF: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:19 LDA #$00FF
    case 0xC052E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C0/C052D4.asm:19 LDA #$00FF
    // Overlapping static entry reached from 0xC052E0.
    case 0xC052E2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C052D4.asm:20 STA @LOCAL09
    case 0xC052E3: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C0/C052D4.asm:21 STA GAME_STATE + game_state::unknown88
    case 0xC052E5: cpu.execute_instruction<0x8D>(0x00987D, 3); return true;
    // src/unknown/C0/C052D4.asm:22 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC052E8: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C052D4.asm:23 STA @LOCAL08
    case 0xC052EB: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C0/C052D4.asm:24 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC052ED: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C0/C052D4.asm:25 STA @LOCAL07
    case 0xC052F0: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C0/C052D4.asm:26 LDA GAME_STATE+game_state::trodden_tile_type
    case 0xC052F2: cpu.execute_instruction<0xAD>(0x009881, 3); return true;
    // src/unknown/C0/C052D4.asm:27 STA @VIRTUAL04
    case 0xC052F5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C052D4.asm:28 STA @LOCAL06
    case 0xC052F7: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C052D4.asm:29 LDA GAME_STATE+game_state::walking_style
    case 0xC052F9: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/unknown/C0/C052D4.asm:30 STA @LOCAL05
    case 0xC052FC: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C0/C052D4.asm:31 LDA @LOCAL0A
    case 0xC052FE: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C052D4.asm:32 INC
    case 0xC05300: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:33 INC
    case 0xC05301: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:34 INC
    case 0xC05302: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:35 INC
    case 0xC05303: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:36 AND #$0007
    case 0xC05304: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C052D4.asm:36 AND #$0007
    // Overlapping static entry reached from 0xC05304.
    case 0xC05306: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C052D4.asm:37 STA @VIRTUAL02
    case 0xC05307: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C052D4.asm:38 LDY #.LOWORD(GAME_STATE) + game_state::unknown80
    case 0xC05309: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000075, 2); else cpu.execute_instruction<0xA0>(0x009875, 3); return true;
    // src/unknown/C0/C052D4.asm:38 LDY #.LOWORD(GAME_STATE) + game_state::unknown80
    // Overlapping static entry reached from 0xC05309.
    case 0xC0530B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:39 STY @LOCAL04
    case 0xC0530C: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C052D4.asm:40 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0530E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C052D4.asm:40 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC05311: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C052D4.asm:40 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC05313: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C052D4.asm:40 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC05316: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C052D4.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC05318: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C052D4.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0531A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C052D4.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0531C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C052D4.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0531E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C052D4.asm:42 LDX @VIRTUAL04
    case 0xC05320: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C052D4.asm:43 LDA @VIRTUAL02
    case 0xC05322: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C052D4.asm:44 JSR ADJUST_POSITION_HORIZONTAL
    case 0xC05324: cpu.execute_instruction<0x20>(0x002D8F, 3); return true;
    // src/unknown/C0/C052D4.asm:45 LDY @LOCAL04
    case 0xC05327: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C052D4.asm:46 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC05329: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C052D4.asm:46 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC0532C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C052D4.asm:46 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC0532E: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C052D4.asm:46 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC05331: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C052D4.asm:47 SEC
    case 0xC05333: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/unknown/C0/C052D4.asm:48 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC05334: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/unknown/C0/C052D4.asm:48 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC05336: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/unknown/C0/C052D4.asm:48 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC05338: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/unknown/C0/C052D4.asm:48 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0533A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/unknown/C0/C052D4.asm:48 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0533C: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/unknown/C0/C052D4.asm:48 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0533E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C052D4.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC05340: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C052D4.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC05342: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C052D4.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC05344: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C052D4.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC05346: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C052D4.asm:50 LDY #.LOWORD(GAME_STATE) + game_state::unknown84
    case 0xC05348: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000079, 2); else cpu.execute_instruction<0xA0>(0x009879, 3); return true;
    // src/unknown/C0/C052D4.asm:50 LDY #.LOWORD(GAME_STATE) + game_state::unknown84
    // Overlapping static entry reached from 0xC05348.
    case 0xC0534A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:51 STY @LOCAL04
    case 0xC0534B: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C052D4.asm:52 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0534D: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C052D4.asm:52 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC05350: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C052D4.asm:52 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC05352: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C052D4.asm:52 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC05355: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C052D4.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC05357: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C052D4.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC05359: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C052D4.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0535B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C052D4.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0535D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C052D4.asm:54 LDX @VIRTUAL04
    case 0xC0535F: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C052D4.asm:55 LDA @VIRTUAL02
    case 0xC05361: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C052D4.asm:56 JSR ADJUST_POSITION_VERTICAL
    case 0xC05363: cpu.execute_instruction<0x20>(0x003017, 3); return true;
    // src/unknown/C0/C052D4.asm:57 LDY @LOCAL04
    case 0xC05366: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C052D4.asm:58 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC05368: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C052D4.asm:58 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC0536B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C052D4.asm:58 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC0536D: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C052D4.asm:58 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC05370: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C052D4.asm:59 SEC
    case 0xC05372: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/unknown/C0/C052D4.asm:60 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC05373: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/unknown/C0/C052D4.asm:60 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC05375: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/unknown/C0/C052D4.asm:60 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC05377: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/unknown/C0/C052D4.asm:60 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC05379: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/unknown/C0/C052D4.asm:60 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0537B: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/unknown/C0/C052D4.asm:60 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0537D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C052D4.asm:61 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0537F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C052D4.asm:61 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC05381: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C052D4.asm:61 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC05383: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C052D4.asm:61 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC05385: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C052D4.asm:62 LDX #256
    case 0xC05387: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/unknown/C0/C052D4.asm:62 LDX #256
    // Overlapping static entry reached from 0xC05387.
    case 0xC05389: cpu.execute_instruction<0x01>(0x000080, 2); return true;
    // src/unknown/C0/C052D4.asm:63 BRA @UNKNOWN1
    case 0xC0538A: cpu.execute_instruction<0x80>(0x00003F, 2); return true;
    // src/unknown/C0/C052D4.asm:63 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC05389.
    case 0xC0538B: cpu.execute_instruction<0x3F>(0x853A8A, 4); return true;
    // src/unknown/C0/C052D4.asm:65 TXA
    case 0xC0538C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:66 DEC
    case 0xC0538D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:67 STA @LOCAL04
    case 0xC0538E: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C052D4.asm:67 STA @LOCAL04
    // Overlapping static entry reached from 0xC0538B.
    case 0xC0538F: cpu.execute_instruction<0x1C>(0x000485, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C0/C052D4.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC05390: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C0/C052D4.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC05392: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C0/C052D4.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC05393: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C0/C052D4.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC05395: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C0/C052D4.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC05396: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:69 CLC
    case 0xC05397: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:70 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC05398: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000056, 2); else cpu.execute_instruction<0x69>(0x005156, 3); return true;
    // src/unknown/C0/C052D4.asm:70 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC05398.
    case 0xC0539A: cpu.execute_instruction<0x51>(0x0000AA, 2); return true;
    // src/unknown/C0/C052D4.asm:71 TAX
    case 0xC0539B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:72 LDA @LOCAL08
    case 0xC0539C: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/unknown/C0/C052D4.asm:73 STA a:player_position_buffer_entry::x_coord,X
    case 0xC0539E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C052D4.asm:74 LDA @LOCAL07
    case 0xC053A1: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C0/C052D4.asm:75 STA a:player_position_buffer_entry::y_coord,X
    case 0xC053A3: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/unknown/C0/C052D4.asm:76 LDA @LOCAL06
    case 0xC053A6: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C052D4.asm:77 STA @VIRTUAL04
    case 0xC053A8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C052D4.asm:78 STA a:player_position_buffer_entry::tile_flags,X
    case 0xC053AA: cpu.execute_instruction<0x9D>(0x000004, 3); return true;
    // src/unknown/C0/C052D4.asm:79 LDA @LOCAL05
    case 0xC053AD: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C052D4.asm:80 STA a:player_position_buffer_entry::walking_style,X
    case 0xC053AF: cpu.execute_instruction<0x9D>(0x000006, 3); return true;
    // src/unknown/C0/C052D4.asm:81 LDA @LOCAL0A
    case 0xC053B2: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C052D4.asm:82 STA a:player_position_buffer_entry::direction,X
    case 0xC053B4: cpu.execute_instruction<0x9D>(0x000008, 3); return true;
    // src/unknown/C0/C052D4.asm:83 STZ a:player_position_buffer_entry::unknown10,X
    case 0xC053B7: cpu.execute_instruction<0x9E>(0x00000A, 3); return true;
    // src/unknown/C0/C052D4.asm:84 LDA @LOCAL08
    case 0xC053BA: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/unknown/C0/C052D4.asm:85 CLC
    case 0xC053BC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:86 ADC @LOCAL01 + fixed_point::integer
    case 0xC053BD: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/unknown/C0/C052D4.asm:87 STA @LOCAL08
    case 0xC053BF: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C0/C052D4.asm:88 LDA @LOCAL07
    case 0xC053C1: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C0/C052D4.asm:89 CLC
    case 0xC053C3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:90 ADC @LOCAL02 + fixed_point::integer
    case 0xC053C4: cpu.execute_instruction<0x65>(0x000018, 2); return true;
    // src/unknown/C0/C052D4.asm:91 STA @LOCAL07
    case 0xC053C6: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C0/C052D4.asm:92 LDA @LOCAL04
    case 0xC053C8: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C052D4.asm:93 TAX
    case 0xC053CA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:95 BNE @UNKNOWN0
    case 0xC053CB: cpu.execute_instruction<0xD0>(0x0000BF, 2); return true;
    // src/unknown/C0/C052D4.asm:96 LDA @LOCAL09
    case 0xC053CD: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C0/C052D4.asm:97 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC053CF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C0/C052D4.asm:97 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC053D1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C0/C052D4.asm:97 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC053D2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C0/C052D4.asm:97 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC053D4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C0/C052D4.asm:97 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC053D5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:98 CLC
    case 0xC053D6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:99 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC053D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000056, 2); else cpu.execute_instruction<0x69>(0x005156, 3); return true;
    // src/unknown/C0/C052D4.asm:99 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC053D7.
    case 0xC053D9: cpu.execute_instruction<0x51>(0x0000AA, 2); return true;
    // src/unknown/C0/C052D4.asm:100 TAX
    case 0xC053DA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:101 STX @LOCAL04
    case 0xC053DB: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C052D4.asm:102 LDA #0
    case 0xC053DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C052D4.asm:102 LDA #0
    // Overlapping static entry reached from 0xC053DD.
    case 0xC053DF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C052D4.asm:103 STA @LOCAL03
    case 0xC053E0: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C052D4.asm:107 BRA @UNKNOWN3
    case 0xC053E2: cpu.execute_instruction<0x80>(0x000072, 2); return true;
    // src/unknown/C0/C052D4.asm:116 TAX
    case 0xC053E4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:117 LDA GAME_STATE+game_state::player_controlled_party_members,X
    case 0xC053E5: cpu.execute_instruction<0xBD>(0x009891, 3); return true;
    // src/unknown/C0/C052D4.asm:119 AND #$00FF
    case 0xC053E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C052D4.asm:119 AND #$00FF
    // Overlapping static entry reached from 0xC053E8.
    case 0xC053EA: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C0/C052D4.asm:120 LDY #.SIZEOF(char_struct)
    case 0xC053EB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C0/C052D4.asm:120 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC053EB.
    case 0xC053ED: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C052D4.asm:121 JSL MULT168
    case 0xC053EE: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C052D4.asm:122 CLC
    case 0xC053F2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:123 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC053F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/unknown/C0/C052D4.asm:123 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC053F3.
    case 0xC053F5: cpu.execute_instruction<0x99>(0x00A5A8, 3); return true;
    // src/unknown/C0/C052D4.asm:124 TAY
    case 0xC053F6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:125 LDA @LOCAL09
    case 0xC053F7: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C0/C052D4.asm:125 LDA @LOCAL09
    // Overlapping static entry reached from 0xC053F5.
    case 0xC053F8: cpu.execute_instruction<0x26>(0x000099, 2); return true;
    // src/unknown/C0/C052D4.asm:126 STA __BSS_START__+char_struct::position_index,Y
    case 0xC053F9: cpu.execute_instruction<0x99>(0x00003D, 3); return true;
    // src/unknown/C0/C052D4.asm:126 STA __BSS_START__+char_struct::position_index,Y
    // Overlapping static entry reached from 0xC053F8.
    case 0xC053FA: cpu.execute_instruction<0x3D>(0x00A900, 3); return true;
    // src/unknown/C0/C052D4.asm:127 LDA #.LOWORD(-1)
    case 0xC053FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C052D4.asm:127 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC053FA.
    case 0xC053FD: cpu.execute_instruction<0xFF>(0x4199FF, 4); return true;
    // src/unknown/C0/C052D4.asm:127 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC053FC.
    case 0xC053FE: cpu.execute_instruction<0xFF>(0x004199, 4); return true;
    // src/unknown/C0/C052D4.asm:128 STA __BSS_START__+char_struct::unknown63 + 2,Y
    case 0xC053FF: cpu.execute_instruction<0x99>(0x000041, 3); return true;
    // src/unknown/C0/C052D4.asm:128 STA __BSS_START__+char_struct::unknown63 + 2,Y
    // Overlapping static entry reached from 0xC053FD.
    case 0xC05401: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C052D4.asm:129 STA __BSS_START__+char_struct::unknown53 + 2,Y
    case 0xC05402: cpu.execute_instruction<0x99>(0x000037, 3); return true;
    // src/unknown/C0/C052D4.asm:130 LDA @LOCAL03
    case 0xC05405: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C052D4.asm:131 ASL
    case 0xC05407: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:132 STA @VIRTUAL02
    case 0xC05408: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C052D4.asm:133 CLC
    case 0xC0540A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:139 ADC #.LOWORD(GAME_STATE) + game_state::unknownA2
    case 0xC0540B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000097, 2); else cpu.execute_instruction<0x69>(0x009897, 3); return true;
    // src/unknown/C0/C052D4.asm:139 ADC #.LOWORD(GAME_STATE) + game_state::unknownA2
    // Overlapping static entry reached from 0xC0540B.
    case 0xC0540D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:141 TAY
    case 0xC0540E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:142 LDA __BSS_START__,Y
    case 0xC0540F: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C052D4.asm:143 ASL
    case 0xC05412: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:144 PHA
    case 0xC05413: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:145 LDX @LOCAL04
    case 0xC05414: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C0/C052D4.asm:146 LDA a:player_position_buffer_entry::x_coord,X
    case 0xC05416: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C052D4.asm:147 PLX
    case 0xC05419: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:148 STA ENTITY_ABS_X_TABLE,X
    case 0xC0541A: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/unknown/C0/C052D4.asm:149 LDA __BSS_START__,Y
    case 0xC0541D: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C052D4.asm:150 ASL
    case 0xC05420: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:151 PHA
    case 0xC05421: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:152 LDX @LOCAL04
    case 0xC05422: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C0/C052D4.asm:153 LDA a:player_position_buffer_entry::y_coord,X
    case 0xC05424: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C0/C052D4.asm:154 PLX
    case 0xC05427: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:155 STA ENTITY_ABS_Y_TABLE,X
    case 0xC05428: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/unknown/C0/C052D4.asm:156 LDX @LOCAL04
    case 0xC0542B: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C0/C052D4.asm:157 LDA a:player_position_buffer_entry::direction,X
    case 0xC0542D: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/unknown/C0/C052D4.asm:158 LDX @VIRTUAL02
    case 0xC05430: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C052D4.asm:159 STA ENTITY_DIRECTIONS,X
    case 0xC05432: cpu.execute_instruction<0x9D>(0x002AF6, 3); return true;
    // src/unknown/C0/C052D4.asm:160 LDX @LOCAL04
    case 0xC05435: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C0/C052D4.asm:161 LDA a:player_position_buffer_entry::tile_flags,X
    case 0xC05437: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/unknown/C0/C052D4.asm:162 LDX @VIRTUAL02
    case 0xC0543A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C052D4.asm:163 STA ENTITY_SURFACE_FLAGS,X
    case 0xC0543C: cpu.execute_instruction<0x9D>(0x002BAA, 3); return true;
    // src/unknown/C0/C052D4.asm:164 LDA @LOCAL09
    case 0xC0543F: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C0/C052D4.asm:165 SEC
    case 0xC05441: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:166 SBC #16
    case 0xC05442: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/unknown/C0/C052D4.asm:166 SBC #16
    // Overlapping static entry reached from 0xC05442.
    case 0xC05444: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C052D4.asm:167 STA @LOCAL09
    case 0xC05445: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C0/C052D4.asm:168 LDX @LOCAL04
    case 0xC05447: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C0/C052D4.asm:169 TXA
    case 0xC05449: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:170 SEC
    case 0xC0544A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:171 SBC #192
    case 0xC0544B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000C0, 2); else cpu.execute_instruction<0xE9>(0x0000C0, 3); return true;
    // src/unknown/C0/C052D4.asm:171 SBC #192
    // Overlapping static entry reached from 0xC0544B.
    case 0xC0544D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C052D4.asm:172 TAX
    case 0xC0544E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:173 STX @LOCAL04
    case 0xC0544F: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C052D4.asm:174 LDA @LOCAL03
    case 0xC05451: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C052D4.asm:175 INC
    case 0xC05453: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:176 STA @LOCAL03
    case 0xC05454: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C052D4.asm:178 LDA GAME_STATE+game_state::party_count
    case 0xC05456: cpu.execute_instruction<0xAD>(0x0098A3, 3); return true;
    // src/unknown/C0/C052D4.asm:179 AND #$00FF
    case 0xC05459: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C052D4.asm:179 AND #$00FF
    // Overlapping static entry reached from 0xC05459.
    case 0xC0545B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C052D4.asm:180 STA @VIRTUAL02
    case 0xC0545C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C052D4.asm:181 LDA @LOCAL03
    case 0xC0545E: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C052D4.asm:182 CMP @VIRTUAL02
    case 0xC05460: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C052D4.asm:183 BCCL @UNKNOWN2
    case 0xC05462: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C052D4.asm:183 BCCL @UNKNOWN2
    case 0xC05464: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C052D4.asm:183 BCCL @UNKNOWN2
    case 0xC05466: cpu.execute_instruction<0x4C>(0x0053E4, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C052D4.asm:184 END_C_FUNCTION
    case 0xC05469: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C052D4.asm:184 END_C_FUNCTION
    case 0xC0546A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0546B.asm (unresolved).
bool execute_unresolved_c0_c0546b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0546B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0546B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0546B.asm:8 END_STACK_VARS
    case 0xC0546D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0546B.asm:8 END_STACK_VARS
    case 0xC0546E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0546B.asm:8 END_STACK_VARS
    case 0xC0546F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0546B.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0546F.
    case 0xC05471: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0546B.asm:8 END_STACK_VARS
    case 0xC05472: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0546B.asm:9 LDY #0
    case 0xC05473: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0546B.asm:9 LDY #0
    // Overlapping static entry reached from 0xC05473.
    case 0xC05475: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C0546B.asm:10 STY @LOCAL01
    case 0xC05476: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C0546B.asm:11 TYA
    case 0xC05478: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0546B.asm:12 STA @LOCAL00
    case 0xC05479: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0546B.asm:13 BRA @UNKNOWN4
    case 0xC0547B: cpu.execute_instruction<0x80>(0x00003B, 2); return true;
    // src/unknown/C0/C0546B.asm:15 CLC
    case 0xC0547D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0546B.asm:16 ADC #.LOWORD(GAME_STATE)
    case 0xC0547E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F5, 2); else cpu.execute_instruction<0x69>(0x0097F5, 3); return true;
    // src/unknown/C0/C0546B.asm:16 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC0547E.
    case 0xC05480: cpu.execute_instruction<0x97>(0x0000AA, 2); return true;
    // src/unknown/C0/C0546B.asm:17 TAX
    case 0xC05481: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0546B.asm:18 LDA __BSS_START__ + game_state::unknown96,X
    case 0xC05482: cpu.execute_instruction<0xBD>(0x000096, 3); return true;
    // src/unknown/C0/C0546B.asm:19 AND #$00FF
    case 0xC05485: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0546B.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC05485.
    case 0xC05487: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0546B.asm:20 CLC
    case 0xC05488: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0546B.asm:21 SBC #4
    case 0xC05489: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/unknown/C0/C0546B.asm:21 SBC #4
    // Overlapping static entry reached from 0xC05489.
    case 0xC0548B: cpu.execute_instruction<0x00>(0x000070, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C0/C0546B.asm:22 BRANCHGTS @UNKNOWN3
    case 0xC0548C: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C0/C0546B.asm:22 BRANCHGTS @UNKNOWN3
    case 0xC0548E: cpu.execute_instruction<0x10>(0x000023, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C0/C0546B.asm:22 BRANCHGTS @UNKNOWN3
    case 0xC05490: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C0/C0546B.asm:22 BRANCHGTS @UNKNOWN3
    case 0xC05492: cpu.execute_instruction<0x30>(0x00001F, 2); return true;
    // src/unknown/C0/C0546B.asm:23 LDA __BSS_START__ + game_state::player_controlled_party_members,X
    case 0xC05494: cpu.execute_instruction<0xBD>(0x00009C, 3); return true;
    // src/unknown/C0/C0546B.asm:24 AND #$00FF
    case 0xC05497: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0546B.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC05497.
    case 0xC05499: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C0/C0546B.asm:25 LDY #.SIZEOF(char_struct)
    case 0xC0549A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C0/C0546B.asm:25 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC0549A.
    case 0xC0549C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0546B.asm:26 JSL MULT168
    case 0xC0549D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C0546B.asm:27 TAX
    case 0xC054A1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0546B.asm:28 LDA PARTY_CHARACTERS+char_struct::level,X
    case 0xC054A2: cpu.execute_instruction<0xBD>(0x0099D3, 3); return true;
    // src/unknown/C0/C0546B.asm:29 AND #$00FF
    case 0xC054A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0546B.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC054A5.
    case 0xC054A7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0546B.asm:30 STA @VIRTUAL02
    case 0xC054A8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0546B.asm:31 LDY @LOCAL01
    case 0xC054AA: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C0546B.asm:32 TYA
    case 0xC054AC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0546B.asm:33 CLC
    case 0xC054AD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0546B.asm:34 ADC @VIRTUAL02
    case 0xC054AE: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0546B.asm:35 TAY
    case 0xC054B0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0546B.asm:36 STY @LOCAL01
    case 0xC054B1: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C0546B.asm:38 LDA @LOCAL00
    case 0xC054B3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0546B.asm:39 INC
    case 0xC054B5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0546B.asm:40 STA @LOCAL00
    case 0xC054B6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0546B.asm:42 LDA GAME_STATE+game_state::party_count
    case 0xC054B8: cpu.execute_instruction<0xAD>(0x0098A3, 3); return true;
    // src/unknown/C0/C0546B.asm:43 AND #$00FF
    case 0xC054BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0546B.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC054BB.
    case 0xC054BD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0546B.asm:44 STA @VIRTUAL02
    case 0xC054BE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0546B.asm:45 LDA @LOCAL00
    case 0xC054C0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0546B.asm:46 CMP @VIRTUAL02
    case 0xC054C2: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C0546B.asm:47 BNE @UNKNOWN0
    case 0xC054C4: cpu.execute_instruction<0xD0>(0x0000B7, 2); return true;
    // src/unknown/C0/C0546B.asm:48 TYA
    case 0xC054C6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0546B.asm:49 END_C_FUNCTION
    case 0xC054C7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0546B.asm:49 END_C_FUNCTION
    case 0xC054C8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C054C9.asm (unresolved).
bool execute_unresolved_c0_c054c9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C054C9.asm:3 BEGIN_C_FUNCTION
    case 0xC054C9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C054C9.asm:10 END_STACK_VARS
    case 0xC054CB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C054C9.asm:10 END_STACK_VARS
    case 0xC054CC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C054C9.asm:10 END_STACK_VARS
    case 0xC054CD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C054C9.asm:10 END_STACK_VARS
    case 0xC054CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C054C9.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC054CE.
    case 0xC054D0: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C054C9.asm:10 END_STACK_VARS
    case 0xC054D1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C054C9.asm:10 END_STACK_VARS
    case 0xC054D2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C054C9.asm:11 STX @LOCAL01
    case 0xC054D3: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C054C9.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC054D0.
    case 0xC054D4: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // src/unknown/C0/C054C9.asm:12 STA @LOCAL00
    case 0xC054D5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C054C9.asm:12 STA @LOCAL00
    // Overlapping static entry reached from 0xC054D4.
    case 0xC054D6: cpu.execute_instruction<0x0E>(0x003F29, 3); return true;
    // src/unknown/C0/C054C9.asm:13 AND #$003F
    case 0xC054D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C054C9.asm:13 AND #$003F
    // Overlapping static entry reached from 0xC054D7.
    case 0xC054D9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C054C9.asm:14 STA @VIRTUAL02
    case 0xC054DA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C054C9.asm:15 TXA
    case 0xC054DC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C054C9.asm:16 AND #$003F
    case 0xC054DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C054C9.asm:16 AND #$003F
    // Overlapping static entry reached from 0xC054DD.
    case 0xC054DF: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:696 ASL
    // Macro caller: src/unknown/C0/C054C9.asm:17 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC054E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:697 ASL
    // Macro caller: src/unknown/C0/C054C9.asm:17 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC054E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:698 ASL
    // Macro caller: src/unknown/C0/C054C9.asm:17 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC054E2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:699 ASL
    // Macro caller: src/unknown/C0/C054C9.asm:17 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC054E3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:700 ASL
    // Macro caller: src/unknown/C0/C054C9.asm:17 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC054E4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:701 ASL
    // Macro caller: src/unknown/C0/C054C9.asm:17 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC054E5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C054C9.asm:18 CLC
    case 0xC054E6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C054C9.asm:19 ADC @VIRTUAL02
    case 0xC054E7: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C054C9.asm:20 TAX
    case 0xC054E9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C054C9.asm:21 LDA LOADED_COLLISION_TILES,X
    case 0xC054EA: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C054C9.asm:22 AND #$00FF
    case 0xC054ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C054C9.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC054ED.
    case 0xC054EF: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C054C9.asm:23 TAY
    case 0xC054F0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C054C9.asm:24 AND #$0010
    case 0xC054F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x000010, 3); return true;
    // src/unknown/C0/C054C9.asm:24 AND #$0010
    // Overlapping static entry reached from 0xC054F1.
    case 0xC054F3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C054C9.asm:25 BEQ @UNKNOWN0
    case 0xC054F4: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C054C9.asm:26 LDA @LOCAL00
    case 0xC054F6: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C054C9.asm:27 STA LADDER_STAIRS_TILE_X
    case 0xC054F8: cpu.execute_instruction<0x8D>(0x005DA8, 3); return true;
    // src/unknown/C0/C054C9.asm:28 LDX @LOCAL01
    case 0xC054FB: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C054C9.asm:29 STX LADDER_STAIRS_TILE_Y
    case 0xC054FD: cpu.execute_instruction<0x8E>(0x005DAA, 3); return true;
    // src/unknown/C0/C054C9.asm:31 TYA
    case 0xC05500: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C054C9.asm:32 END_C_FUNCTION
    case 0xC05501: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C054C9.asm:32 END_C_FUNCTION
    case 0xC05502: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05503.asm (unresolved).
bool execute_unresolved_c0_c05503_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05503.asm:3 BEGIN_C_FUNCTION
    case 0xC05503: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05503.asm:10 END_STACK_VARS
    case 0xC05505: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C05503.asm:10 END_STACK_VARS
    case 0xC05506: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05503.asm:10 END_STACK_VARS
    case 0xC05507: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05503.asm:10 END_STACK_VARS
    case 0xC05508: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05503.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC05508.
    case 0xC0550A: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05503.asm:10 END_STACK_VARS
    case 0xC0550B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C05503.asm:10 END_STACK_VARS
    case 0xC0550C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:11 TAY
    case 0xC0550D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:12 LDA TEMP_ENTITY_SURFACE_FLAGS
    case 0xC0550E: cpu.execute_instruction<0xAD>(0x005DA4, 3); return true;
    // src/unknown/C0/C05503.asm:13 STA @LOCAL03
    case 0xC05511: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C05503.asm:14 TXA
    case 0xC05513: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:15 ASL
    case 0xC05514: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:16 TAX
    case 0xC05515: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:17 LDA f:UNKNOWN_C42AA7,X
    case 0xC05516: cpu.execute_instruction<0xBF>(0xC42AA7, 4); return true;
    // src/unknown/C0/C05503.asm:18 STA @LOCAL02
    case 0xC0551A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05503.asm:19 LDA CHECKED_COLLISION_TOP_Y
    case 0xC0551C: cpu.execute_instruction<0xAD>(0x005DAE, 3); return true;
    // src/unknown/C0/C05503.asm:20 LSR
    case 0xC0551F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:21 LSR
    case 0xC05520: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:22 LSR
    case 0xC05521: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:23 STA @VIRTUAL04
    case 0xC05522: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C05503.asm:24 TYA
    case 0xC05524: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:25 LSR
    case 0xC05525: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:26 LSR
    case 0xC05526: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:27 LSR
    case 0xC05527: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:28 AND #$003F
    case 0xC05528: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05503.asm:28 AND #$003F
    // Overlapping static entry reached from 0xC05528.
    case 0xC0552A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05503.asm:29 STA @VIRTUAL02
    case 0xC0552B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05503.asm:30 LDA @VIRTUAL04
    case 0xC0552D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C05503.asm:31 AND #$003F
    case 0xC0552F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05503.asm:31 AND #$003F
    // Overlapping static entry reached from 0xC0552F.
    case 0xC05531: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C05503.asm:32 ASL
    case 0xC05532: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:33 ASL
    case 0xC05533: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:34 ASL
    case 0xC05534: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:35 ASL
    case 0xC05535: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:36 ASL
    case 0xC05536: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:37 ASL
    case 0xC05537: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:38 CLC
    case 0xC05538: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:39 ADC @VIRTUAL02
    case 0xC05539: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C05503.asm:40 TAX
    case 0xC0553B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:41 LDA LOADED_COLLISION_TILES,X
    case 0xC0553C: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C05503.asm:42 AND #$00FF
    case 0xC0553F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C05503.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC0553F.
    case 0xC05541: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05503.asm:43 STA @VIRTUAL02
    case 0xC05542: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05503.asm:44 LDA @LOCAL03
    case 0xC05544: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C05503.asm:45 ORA @VIRTUAL02
    case 0xC05546: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C05503.asm:46 STA @VIRTUAL02
    case 0xC05548: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05503.asm:47 STA @LOCAL01
    case 0xC0554A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C05503.asm:48 TYA
    case 0xC0554C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:49 CLC
    case 0xC0554D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:50 ADC #7
    case 0xC0554E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/unknown/C0/C05503.asm:50 ADC #7
    // Overlapping static entry reached from 0xC0554E.
    case 0xC05550: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C05503.asm:51 LSR
    case 0xC05551: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:52 LSR
    case 0xC05552: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:53 LSR
    case 0xC05553: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:54 TAX
    case 0xC05554: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:55 STX @LOCAL03
    case 0xC05555: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C05503.asm:56 LDA #0
    case 0xC05557: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C05503.asm:56 LDA #0
    // Overlapping static entry reached from 0xC05557.
    case 0xC05559: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05503.asm:57 STA @LOCAL00
    case 0xC0555A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05503.asm:58 BRA @UNKNOWN1
    case 0xC0555C: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/unknown/C0/C05503.asm:60 TXA
    case 0xC0555E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:61 AND #$003F
    case 0xC0555F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05503.asm:61 AND #$003F
    // Overlapping static entry reached from 0xC0555F.
    case 0xC05561: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05503.asm:62 STA @VIRTUAL02
    case 0xC05562: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05503.asm:63 LDA @VIRTUAL04
    case 0xC05564: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C05503.asm:64 AND #$003F
    case 0xC05566: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05503.asm:64 AND #$003F
    // Overlapping static entry reached from 0xC05566.
    case 0xC05568: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C05503.asm:65 ASL
    case 0xC05569: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:66 ASL
    case 0xC0556A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:67 ASL
    case 0xC0556B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:68 ASL
    case 0xC0556C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:69 ASL
    case 0xC0556D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:70 ASL
    case 0xC0556E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:71 CLC
    case 0xC0556F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:72 ADC @VIRTUAL02
    case 0xC05570: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C05503.asm:73 TAX
    case 0xC05572: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:74 LDA LOADED_COLLISION_TILES,X
    case 0xC05573: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C05503.asm:75 AND #$00FF
    case 0xC05576: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C05503.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC05576.
    case 0xC05578: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C0/C05503.asm:76 PHA
    case 0xC05579: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:77 LDA @LOCAL01
    case 0xC0557A: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C05503.asm:78 STA @VIRTUAL02
    case 0xC0557C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05503.asm:79 PLY
    case 0xC0557E: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:80 STY @VIRTUAL02
    case 0xC0557F: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C05503.asm:81 ORA @VIRTUAL02
    case 0xC05581: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C05503.asm:82 STA @VIRTUAL02
    case 0xC05583: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05503.asm:83 STA @LOCAL01
    case 0xC05585: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C05503.asm:84 LDX @LOCAL03
    case 0xC05587: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C05503.asm:85 INX
    case 0xC05589: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:86 STX @LOCAL03
    case 0xC0558A: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C05503.asm:87 LDA @LOCAL00
    case 0xC0558C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05503.asm:88 INC
    case 0xC0558E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:89 STA @LOCAL00
    case 0xC0558F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05503.asm:91 CMP @LOCAL02
    case 0xC05591: cpu.execute_instruction<0xC5>(0x000012, 2); return true;
    // src/unknown/C0/C05503.asm:92 BCC @UNKNOWN0
    case 0xC05593: cpu.execute_instruction<0x90>(0x0000C9, 2); return true;
    // src/unknown/C0/C05503.asm:93 LDA @VIRTUAL02
    case 0xC05595: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05503.asm:94 STA TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05597: cpu.execute_instruction<0x8D>(0x005DA4, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05503.asm:95 END_C_FUNCTION
    case 0xC0559A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C05503.asm:95 END_C_FUNCTION
    case 0xC0559B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0559C.asm (unresolved).
bool execute_unresolved_c0_c0559c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0559C.asm:3 BEGIN_C_FUNCTION
    case 0xC0559C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0559C.asm:9 END_STACK_VARS
    case 0xC0559E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0559C.asm:9 END_STACK_VARS
    case 0xC0559F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0559C.asm:9 END_STACK_VARS
    case 0xC055A0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0559C.asm:9 END_STACK_VARS
    case 0xC055A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0559C.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC055A1.
    case 0xC055A3: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0559C.asm:9 END_STACK_VARS
    case 0xC055A4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0559C.asm:9 END_STACK_VARS
    case 0xC055A5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:10 STA @LOCAL02
    case 0xC055A6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0559C.asm:10 STA @LOCAL02
    // Overlapping static entry reached from 0xC055A3.
    case 0xC055A7: cpu.execute_instruction<0x12>(0x0000AC, 2); return true;
    // src/unknown/C0/C0559C.asm:11 LDY TEMP_ENTITY_SURFACE_FLAGS
    case 0xC055A8: cpu.execute_instruction<0xAC>(0x005DA4, 3); return true;
    // src/unknown/C0/C0559C.asm:11 LDY TEMP_ENTITY_SURFACE_FLAGS
    // Overlapping static entry reached from 0xC055A7.
    case 0xC055A9: cpu.execute_instruction<0xA4>(0x00005D, 2); return true;
    // src/unknown/C0/C0559C.asm:12 TXA
    case 0xC055AB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:13 ASL
    case 0xC055AC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:14 TAX
    case 0xC055AD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:15 LDA f:UNKNOWN_C42AA7,X
    case 0xC055AE: cpu.execute_instruction<0xBF>(0xC42AA7, 4); return true;
    // src/unknown/C0/C0559C.asm:16 STA @VIRTUAL04
    case 0xC055B2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0559C.asm:17 LDA f:UNKNOWN_C42AC9,X
    case 0xC055B4: cpu.execute_instruction<0xBF>(0xC42AC9, 4); return true;
    // src/unknown/C0/C0559C.asm:18 ASL
    case 0xC055B8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:19 ASL
    case 0xC055B9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:20 ASL
    case 0xC055BA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:21 CLC
    case 0xC055BB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:22 ADC CHECKED_COLLISION_TOP_Y
    case 0xC055BC: cpu.execute_instruction<0x6D>(0x005DAE, 3); return true;
    // src/unknown/C0/C0559C.asm:23 DEC
    case 0xC055BF: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:24 LSR
    case 0xC055C0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:25 LSR
    case 0xC055C1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:26 LSR
    case 0xC055C2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:27 STA @VIRTUAL02
    case 0xC055C3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0559C.asm:28 STA @LOCAL01
    case 0xC055C5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0559C.asm:29 LDA @LOCAL02
    case 0xC055C7: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0559C.asm:30 LSR
    case 0xC055C9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:31 LSR
    case 0xC055CA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:32 LSR
    case 0xC055CB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:33 AND #$003F
    case 0xC055CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0559C.asm:33 AND #$003F
    // Overlapping static entry reached from 0xC055CC.
    case 0xC055CE: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C0/C0559C.asm:34 PHA
    case 0xC055CF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:35 LDA @VIRTUAL02
    case 0xC055D0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0559C.asm:36 AND #$003F
    case 0xC055D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0559C.asm:36 AND #$003F
    // Overlapping static entry reached from 0xC055D2.
    case 0xC055D4: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C0559C.asm:37 ASL
    case 0xC055D5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:38 ASL
    case 0xC055D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:39 ASL
    case 0xC055D7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:40 ASL
    case 0xC055D8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:41 ASL
    case 0xC055D9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:42 ASL
    case 0xC055DA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:43 PLX
    case 0xC055DB: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:44 STX @VIRTUAL02
    case 0xC055DC: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0559C.asm:45 CLC
    case 0xC055DE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:46 ADC @VIRTUAL02
    case 0xC055DF: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0559C.asm:47 TAX
    case 0xC055E1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:48 LDA LOADED_COLLISION_TILES,X
    case 0xC055E2: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C0559C.asm:49 AND #$00FF
    case 0xC055E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0559C.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC055E5.
    case 0xC055E7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0559C.asm:50 STA @VIRTUAL02
    case 0xC055E8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0559C.asm:51 TYA
    case 0xC055EA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:52 ORA @VIRTUAL02
    case 0xC055EB: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C0559C.asm:53 TAY
    case 0xC055ED: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:54 LDA @LOCAL02
    case 0xC055EE: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0559C.asm:55 CLC
    case 0xC055F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:56 ADC #7
    case 0xC055F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/unknown/C0/C0559C.asm:56 ADC #7
    // Overlapping static entry reached from 0xC055F1.
    case 0xC055F3: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C0559C.asm:57 LSR
    case 0xC055F4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:58 LSR
    case 0xC055F5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:59 LSR
    case 0xC055F6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:60 TAX
    case 0xC055F7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:61 STX @LOCAL02
    case 0xC055F8: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C0559C.asm:62 LDA #0
    case 0xC055FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0559C.asm:62 LDA #0
    // Overlapping static entry reached from 0xC055FA.
    case 0xC055FC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0559C.asm:63 STA @LOCAL00
    case 0xC055FD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0559C.asm:64 BRA @UNKNOWN1
    case 0xC055FF: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C0/C0559C.asm:66 TXA
    case 0xC05601: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:67 AND #$003F
    case 0xC05602: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0559C.asm:67 AND #$003F
    // Overlapping static entry reached from 0xC05602.
    case 0xC05604: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C0/C0559C.asm:68 PHA
    case 0xC05605: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:69 LDA @LOCAL01
    case 0xC05606: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0559C.asm:70 STA @VIRTUAL02
    case 0xC05608: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0559C.asm:71 AND #$003F
    case 0xC0560A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0559C.asm:71 AND #$003F
    // Overlapping static entry reached from 0xC0560A.
    case 0xC0560C: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C0559C.asm:72 ASL
    case 0xC0560D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:73 ASL
    case 0xC0560E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:74 ASL
    case 0xC0560F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:75 ASL
    case 0xC05610: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:76 ASL
    case 0xC05611: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:77 ASL
    case 0xC05612: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:78 PLX
    case 0xC05613: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:79 STX @VIRTUAL02
    case 0xC05614: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0559C.asm:80 CLC
    case 0xC05616: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:81 ADC @VIRTUAL02
    case 0xC05617: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0559C.asm:82 TAX
    case 0xC05619: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:83 LDA LOADED_COLLISION_TILES,X
    case 0xC0561A: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C0559C.asm:84 AND #$00FF
    case 0xC0561D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0559C.asm:84 AND #$00FF
    // Overlapping static entry reached from 0xC0561D.
    case 0xC0561F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0559C.asm:85 STA @VIRTUAL02
    case 0xC05620: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0559C.asm:86 TYA
    case 0xC05622: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:87 ORA @VIRTUAL02
    case 0xC05623: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C0559C.asm:88 TAY
    case 0xC05625: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:89 LDX @LOCAL02
    case 0xC05626: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C0559C.asm:90 INX
    case 0xC05628: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:91 STX @LOCAL02
    case 0xC05629: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C0559C.asm:92 LDA @LOCAL00
    case 0xC0562B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0559C.asm:93 INC
    case 0xC0562D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:94 STA @LOCAL00
    case 0xC0562E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0559C.asm:96 CMP @VIRTUAL04
    case 0xC05630: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C0/C0559C.asm:97 BCC @UNKNOWN0
    case 0xC05632: cpu.execute_instruction<0x90>(0x0000CD, 2); return true;
    // src/unknown/C0/C0559C.asm:98 STY TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05634: cpu.execute_instruction<0x8C>(0x005DA4, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0559C.asm:99 END_C_FUNCTION
    case 0xC05637: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0559C.asm:99 END_C_FUNCTION
    case 0xC05638: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05639.asm (unresolved).
bool execute_unresolved_c0_c05639_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05639.asm:3 BEGIN_C_FUNCTION
    case 0xC05639: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05639.asm:11 END_STACK_VARS
    case 0xC0563B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C05639.asm:11 END_STACK_VARS
    case 0xC0563C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05639.asm:11 END_STACK_VARS
    case 0xC0563D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05639.asm:11 END_STACK_VARS
    case 0xC0563E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05639.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC0563E.
    case 0xC05640: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05639.asm:11 END_STACK_VARS
    case 0xC05641: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C05639.asm:11 END_STACK_VARS
    case 0xC05642: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:12 TAY
    case 0xC05643: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:13 TXA
    case 0xC05644: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:14 ASL
    case 0xC05645: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:15 TAX
    case 0xC05646: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:16 LDA f:UNKNOWN_C42AC9,X
    case 0xC05647: cpu.execute_instruction<0xBF>(0xC42AC9, 4); return true;
    // src/unknown/C0/C05639.asm:17 STA @LOCAL03
    case 0xC0564B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C05639.asm:18 LDA TEMP_ENTITY_SURFACE_FLAGS
    case 0xC0564D: cpu.execute_instruction<0xAD>(0x005DA4, 3); return true;
    // src/unknown/C0/C05639.asm:19 STA @LOCAL02
    case 0xC05650: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05639.asm:20 LDA CHECKED_COLLISION_LEFT_X
    case 0xC05652: cpu.execute_instruction<0xAD>(0x005DAC, 3); return true;
    // src/unknown/C0/C05639.asm:21 LSR
    case 0xC05655: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:22 LSR
    case 0xC05656: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:23 LSR
    case 0xC05657: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:24 STA @VIRTUAL04
    case 0xC05658: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C05639.asm:25 AND #$003F
    case 0xC0565A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05639.asm:25 AND #$003F
    // Overlapping static entry reached from 0xC0565A.
    case 0xC0565C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05639.asm:26 STA @VIRTUAL02
    case 0xC0565D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05639.asm:27 TYA
    case 0xC0565F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:28 LSR
    case 0xC05660: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:29 LSR
    case 0xC05661: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:30 LSR
    case 0xC05662: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:31 AND #$003F
    case 0xC05663: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05639.asm:31 AND #$003F
    // Overlapping static entry reached from 0xC05663.
    case 0xC05665: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C05639.asm:32 ASL
    case 0xC05666: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:33 ASL
    case 0xC05667: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:34 ASL
    case 0xC05668: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:35 ASL
    case 0xC05669: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:36 ASL
    case 0xC0566A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:37 ASL
    case 0xC0566B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:38 CLC
    case 0xC0566C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:39 ADC @VIRTUAL02
    case 0xC0566D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C05639.asm:40 TAX
    case 0xC0566F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:41 LDA LOADED_COLLISION_TILES,X
    case 0xC05670: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C05639.asm:42 AND #$00FF
    case 0xC05673: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C05639.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC05673.
    case 0xC05675: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05639.asm:43 STA @VIRTUAL02
    case 0xC05676: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05639.asm:44 LDA @LOCAL02
    case 0xC05678: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C05639.asm:45 ORA @VIRTUAL02
    case 0xC0567A: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C05639.asm:46 STA @VIRTUAL02
    case 0xC0567C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05639.asm:47 STA @LOCAL01
    case 0xC0567E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C05639.asm:48 TYA
    case 0xC05680: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:49 CLC
    case 0xC05681: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:50 ADC #7
    case 0xC05682: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/unknown/C0/C05639.asm:50 ADC #7
    // Overlapping static entry reached from 0xC05682.
    case 0xC05684: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C05639.asm:51 LSR
    case 0xC05685: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:52 LSR
    case 0xC05686: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:53 LSR
    case 0xC05687: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:54 TAX
    case 0xC05688: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:55 STX @LOCAL02
    case 0xC05689: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C05639.asm:56 LDA #0
    case 0xC0568B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C05639.asm:56 LDA #0
    // Overlapping static entry reached from 0xC0568B.
    case 0xC0568D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05639.asm:57 STA @LOCAL00
    case 0xC0568E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05639.asm:58 BRA @UNKNOWN1
    case 0xC05690: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/unknown/C0/C05639.asm:60 LDA @VIRTUAL04
    case 0xC05692: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C05639.asm:61 AND #$003F
    case 0xC05694: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05639.asm:61 AND #$003F
    // Overlapping static entry reached from 0xC05694.
    case 0xC05696: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05639.asm:62 STA @VIRTUAL02
    case 0xC05697: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05639.asm:63 TXA
    case 0xC05699: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:64 AND #$003F
    case 0xC0569A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05639.asm:64 AND #$003F
    // Overlapping static entry reached from 0xC0569A.
    case 0xC0569C: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C05639.asm:65 ASL
    case 0xC0569D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:66 ASL
    case 0xC0569E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:67 ASL
    case 0xC0569F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:68 ASL
    case 0xC056A0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:69 ASL
    case 0xC056A1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:70 ASL
    case 0xC056A2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:71 CLC
    case 0xC056A3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:72 ADC @VIRTUAL02
    case 0xC056A4: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C05639.asm:73 TAX
    case 0xC056A6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:74 LDA LOADED_COLLISION_TILES,X
    case 0xC056A7: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C05639.asm:75 AND #$00FF
    case 0xC056AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C05639.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC056AA.
    case 0xC056AC: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C0/C05639.asm:76 PHA
    case 0xC056AD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:77 LDA @LOCAL01
    case 0xC056AE: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C05639.asm:78 STA @VIRTUAL02
    case 0xC056B0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05639.asm:79 PLY
    case 0xC056B2: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:80 STY @VIRTUAL02
    case 0xC056B3: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C05639.asm:81 ORA @VIRTUAL02
    case 0xC056B5: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C05639.asm:82 STA @VIRTUAL02
    case 0xC056B7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05639.asm:83 STA @LOCAL01
    case 0xC056B9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C05639.asm:84 LDX @LOCAL02
    case 0xC056BB: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C05639.asm:85 INX
    case 0xC056BD: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:86 STX @LOCAL02
    case 0xC056BE: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C05639.asm:87 LDA @LOCAL00
    case 0xC056C0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05639.asm:88 INC
    case 0xC056C2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:89 STA @LOCAL00
    case 0xC056C3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05639.asm:91 CMP @LOCAL03
    case 0xC056C5: cpu.execute_instruction<0xC5>(0x000014, 2); return true;
    // src/unknown/C0/C05639.asm:92 BCC @UNKNOWN0
    case 0xC056C7: cpu.execute_instruction<0x90>(0x0000C9, 2); return true;
    // src/unknown/C0/C05639.asm:93 LDA @VIRTUAL02
    case 0xC056C9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05639.asm:94 STA TEMP_ENTITY_SURFACE_FLAGS
    case 0xC056CB: cpu.execute_instruction<0x8D>(0x005DA4, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05639.asm:95 END_C_FUNCTION
    case 0xC056CE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C05639.asm:95 END_C_FUNCTION
    case 0xC056CF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C056D0.asm (unresolved).
bool execute_unresolved_c0_c056d0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C056D0.asm:3 BEGIN_C_FUNCTION
    case 0xC056D0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C056D0.asm:9 END_STACK_VARS
    case 0xC056D2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C056D0.asm:9 END_STACK_VARS
    case 0xC056D3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C056D0.asm:9 END_STACK_VARS
    case 0xC056D4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C056D0.asm:9 END_STACK_VARS
    case 0xC056D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C056D0.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC056D5.
    case 0xC056D7: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C056D0.asm:9 END_STACK_VARS
    case 0xC056D8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C056D0.asm:9 END_STACK_VARS
    case 0xC056D9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:10 STA @LOCAL02
    case 0xC056DA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C056D0.asm:10 STA @LOCAL02
    // Overlapping static entry reached from 0xC056D7.
    case 0xC056DB: cpu.execute_instruction<0x12>(0x0000AC, 2); return true;
    // src/unknown/C0/C056D0.asm:11 LDY TEMP_ENTITY_SURFACE_FLAGS
    case 0xC056DC: cpu.execute_instruction<0xAC>(0x005DA4, 3); return true;
    // src/unknown/C0/C056D0.asm:11 LDY TEMP_ENTITY_SURFACE_FLAGS
    // Overlapping static entry reached from 0xC056DB.
    case 0xC056DD: cpu.execute_instruction<0xA4>(0x00005D, 2); return true;
    // src/unknown/C0/C056D0.asm:12 TXA
    case 0xC056DF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:13 ASL
    case 0xC056E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:14 TAX
    case 0xC056E1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:15 LDA f:UNKNOWN_C42AC9,X
    case 0xC056E2: cpu.execute_instruction<0xBF>(0xC42AC9, 4); return true;
    // src/unknown/C0/C056D0.asm:16 STA @VIRTUAL04
    case 0xC056E6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C056D0.asm:17 LDA f:UNKNOWN_C42AA7,X
    case 0xC056E8: cpu.execute_instruction<0xBF>(0xC42AA7, 4); return true;
    // src/unknown/C0/C056D0.asm:18 ASL
    case 0xC056EC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:19 ASL
    case 0xC056ED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:20 ASL
    case 0xC056EE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:21 CLC
    case 0xC056EF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:22 ADC CHECKED_COLLISION_LEFT_X
    case 0xC056F0: cpu.execute_instruction<0x6D>(0x005DAC, 3); return true;
    // src/unknown/C0/C056D0.asm:23 DEC
    case 0xC056F3: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:24 LSR
    case 0xC056F4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:25 LSR
    case 0xC056F5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:26 LSR
    case 0xC056F6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:27 STA @VIRTUAL02
    case 0xC056F7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C056D0.asm:28 STA @LOCAL01
    case 0xC056F9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C056D0.asm:29 LDA @VIRTUAL02
    case 0xC056FB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C056D0.asm:30 AND #$003F
    case 0xC056FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C056D0.asm:30 AND #$003F
    // Overlapping static entry reached from 0xC056FD.
    case 0xC056FF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C056D0.asm:31 STA @VIRTUAL02
    case 0xC05700: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C056D0.asm:32 LDA @LOCAL02
    case 0xC05702: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C056D0.asm:33 LSR
    case 0xC05704: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:34 LSR
    case 0xC05705: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:35 LSR
    case 0xC05706: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:36 AND #$003F
    case 0xC05707: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C056D0.asm:36 AND #$003F
    // Overlapping static entry reached from 0xC05707.
    case 0xC05709: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C056D0.asm:37 ASL
    case 0xC0570A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:38 ASL
    case 0xC0570B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:39 ASL
    case 0xC0570C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:40 ASL
    case 0xC0570D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:41 ASL
    case 0xC0570E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:42 ASL
    case 0xC0570F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:43 CLC
    case 0xC05710: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:44 ADC @VIRTUAL02
    case 0xC05711: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C056D0.asm:45 TAX
    case 0xC05713: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:46 LDA LOADED_COLLISION_TILES,X
    case 0xC05714: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C056D0.asm:47 AND #$00FF
    case 0xC05717: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C056D0.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC05717.
    case 0xC05719: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C056D0.asm:48 STA @VIRTUAL02
    case 0xC0571A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C056D0.asm:49 TYA
    case 0xC0571C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:50 ORA @VIRTUAL02
    case 0xC0571D: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C056D0.asm:51 TAY
    case 0xC0571F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:52 LDA @LOCAL02
    case 0xC05720: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C056D0.asm:53 CLC
    case 0xC05722: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:54 ADC #7
    case 0xC05723: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/unknown/C0/C056D0.asm:54 ADC #7
    // Overlapping static entry reached from 0xC05723.
    case 0xC05725: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C056D0.asm:55 LSR
    case 0xC05726: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:56 LSR
    case 0xC05727: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:57 LSR
    case 0xC05728: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:58 TAX
    case 0xC05729: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:59 STX @LOCAL02
    case 0xC0572A: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C056D0.asm:60 LDA #0
    case 0xC0572C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C056D0.asm:60 LDA #0
    // Overlapping static entry reached from 0xC0572C.
    case 0xC0572E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C056D0.asm:61 STA @LOCAL00
    case 0xC0572F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C056D0.asm:62 BRA @UNKNOWN1
    case 0xC05731: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/unknown/C0/C056D0.asm:64 LDA @LOCAL01
    case 0xC05733: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C056D0.asm:65 STA @VIRTUAL02
    case 0xC05735: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C056D0.asm:66 AND #$003F
    case 0xC05737: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C056D0.asm:66 AND #$003F
    // Overlapping static entry reached from 0xC05737.
    case 0xC05739: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C056D0.asm:67 STA @VIRTUAL02
    case 0xC0573A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C056D0.asm:68 TXA
    case 0xC0573C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:69 AND #$003F
    case 0xC0573D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C056D0.asm:69 AND #$003F
    // Overlapping static entry reached from 0xC0573D.
    case 0xC0573F: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C056D0.asm:70 ASL
    case 0xC05740: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:71 ASL
    case 0xC05741: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:72 ASL
    case 0xC05742: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:73 ASL
    case 0xC05743: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:74 ASL
    case 0xC05744: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:75 ASL
    case 0xC05745: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:76 CLC
    case 0xC05746: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:77 ADC @VIRTUAL02
    case 0xC05747: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C056D0.asm:78 TAX
    case 0xC05749: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:79 LDA LOADED_COLLISION_TILES,X
    case 0xC0574A: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C056D0.asm:80 AND #$00FF
    case 0xC0574D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C056D0.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC0574D.
    case 0xC0574F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C056D0.asm:81 STA @VIRTUAL02
    case 0xC05750: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C056D0.asm:82 TYA
    case 0xC05752: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:83 ORA @VIRTUAL02
    case 0xC05753: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C056D0.asm:84 TAY
    case 0xC05755: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:85 LDX @LOCAL02
    case 0xC05756: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C056D0.asm:86 INX
    case 0xC05758: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:87 STX @LOCAL02
    case 0xC05759: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C056D0.asm:88 LDA @LOCAL00
    case 0xC0575B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C056D0.asm:89 INC
    case 0xC0575D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:90 STA @LOCAL00
    case 0xC0575E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C056D0.asm:92 CMP @VIRTUAL04
    case 0xC05760: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C0/C056D0.asm:93 BCC @UNKNOWN0
    case 0xC05762: cpu.execute_instruction<0x90>(0x0000CF, 2); return true;
    // src/unknown/C0/C056D0.asm:94 STY TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05764: cpu.execute_instruction<0x8C>(0x005DA4, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C056D0.asm:95 END_C_FUNCTION
    case 0xC05767: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C056D0.asm:95 END_C_FUNCTION
    case 0xC05768: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05769.asm (unresolved).
bool execute_unresolved_c0_c05769_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05769.asm:3 BEGIN_C_FUNCTION
    case 0xC05769: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05769.asm:11 END_STACK_VARS
    case 0xC0576B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C05769.asm:11 END_STACK_VARS
    case 0xC0576C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05769.asm:11 END_STACK_VARS
    case 0xC0576D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05769.asm:11 END_STACK_VARS
    case 0xC0576E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05769.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC0576E.
    case 0xC05770: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05769.asm:11 END_STACK_VARS
    case 0xC05771: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C05769.asm:11 END_STACK_VARS
    case 0xC05772: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:12 STA @VIRTUAL04
    case 0xC05773: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C05769.asm:12 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC05770.
    case 0xC05774: cpu.execute_instruction<0x04>(0x0000A0, 2); return true;
    // src/unknown/C0/C05769.asm:13 LDY #0
    case 0xC05775: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C05769.asm:13 LDY #0
    // Overlapping static entry reached from 0xC05774.
    case 0xC05776: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C05769.asm:13 LDY #0
    // Overlapping static entry reached from 0xC05775.
    case 0xC05777: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C05769.asm:14 STY @LOCAL03
    case 0xC05778: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C05769.asm:15 STY @VIRTUAL02
    case 0xC0577A: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C05769.asm:16 LDA @VIRTUAL02
    case 0xC0577C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05769.asm:17 STA @LOCAL02
    case 0xC0577E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05769.asm:18 BRA @UNKNOWN2
    case 0xC05780: cpu.execute_instruction<0x80>(0x000050, 2); return true;
    // src/unknown/C0/C05769.asm:20 LDA @VIRTUAL04
    case 0xC05782: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C05769.asm:21 AND #$0001
    case 0xC05784: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C05769.asm:21 AND #$0001
    // Overlapping static entry reached from 0xC05784.
    case 0xC05786: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05769.asm:22 BEQ @UNKNOWN1
    case 0xC05787: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/unknown/C0/C05769.asm:23 TYA
    case 0xC05789: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:24 ASL
    case 0xC0578A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:25 STA @LOCAL01
    case 0xC0578B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C05769.asm:26 TAX
    case 0xC0578D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:27 LDA f:UNKNOWN_C200C5,X
    case 0xC0578E: cpu.execute_instruction<0xBF>(0xC200C5, 4); return true;
    // src/unknown/C0/C05769.asm:28 CLC
    case 0xC05792: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:29 ADC CHECKED_COLLISION_TOP_Y
    case 0xC05793: cpu.execute_instruction<0x6D>(0x005DAE, 3); return true;
    // src/unknown/C0/C05769.asm:30 LSR
    case 0xC05796: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:31 LSR
    case 0xC05797: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:32 LSR
    case 0xC05798: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:33 TAX
    case 0xC05799: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:34 STX @LOCAL00
    case 0xC0579A: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C05769.asm:35 LDA @LOCAL01
    case 0xC0579C: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C05769.asm:36 TAX
    case 0xC0579E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:37 LDA f:UNKNOWN_C200B9,X
    case 0xC0579F: cpu.execute_instruction<0xBF>(0xC200B9, 4); return true;
    // src/unknown/C0/C05769.asm:38 CLC
    case 0xC057A3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:39 ADC CHECKED_COLLISION_LEFT_X
    case 0xC057A4: cpu.execute_instruction<0x6D>(0x005DAC, 3); return true;
    // src/unknown/C0/C05769.asm:40 LSR
    case 0xC057A7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:41 LSR
    case 0xC057A8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:42 LSR
    case 0xC057A9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:43 LDX @LOCAL00
    case 0xC057AA: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C05769.asm:44 JSR UNKNOWN_C054C9
    case 0xC057AC: cpu.execute_instruction<0x20>(0x0054C9, 3); return true;
    // src/unknown/C0/C05769.asm:45 STA @LOCAL00
    case 0xC057AF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05769.asm:46 ORA @LOCAL02
    case 0xC057B1: cpu.execute_instruction<0x05>(0x000012, 2); return true;
    // src/unknown/C0/C05769.asm:47 STA @LOCAL02
    case 0xC057B3: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05769.asm:48 LDA @LOCAL00
    case 0xC057B5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05769.asm:49 AND #$00C0
    case 0xC057B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/unknown/C0/C05769.asm:49 AND #$00C0
    // Overlapping static entry reached from 0xC057B7.
    case 0xC057B9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05769.asm:50 BEQ @UNKNOWN1
    case 0xC057BA: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C05769.asm:51 LDA @VIRTUAL02
    case 0xC057BC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05769.asm:52 ORA #$0040
    case 0xC057BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000040, 2); else cpu.execute_instruction<0x09>(0x000040, 3); return true;
    // src/unknown/C0/C05769.asm:52 ORA #$0040
    // Overlapping static entry reached from 0xC057BE.
    case 0xC057C0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05769.asm:53 STA @VIRTUAL02
    case 0xC057C1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05769.asm:55 LDA @VIRTUAL02
    case 0xC057C3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05769.asm:56 LSR
    case 0xC057C5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:57 STA @VIRTUAL02
    case 0xC057C6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05769.asm:58 LDA @VIRTUAL04
    case 0xC057C8: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C05769.asm:59 LSR
    case 0xC057CA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:60 STA @VIRTUAL04
    case 0xC057CB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C05769.asm:61 LDY @LOCAL03
    case 0xC057CD: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C0/C05769.asm:62 INY
    case 0xC057CF: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:63 STY @LOCAL03
    case 0xC057D0: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C05769.asm:65 CPY #6
    case 0xC057D2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/unknown/C0/C05769.asm:65 CPY #6
    // Overlapping static entry reached from 0xC057D2.
    case 0xC057D4: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C05769.asm:66 BCC @UNKNOWN0
    case 0xC057D5: cpu.execute_instruction<0x90>(0x0000AB, 2); return true;
    // src/unknown/C0/C05769.asm:67 LDA SET_TEMP_ENTITY_SURFACE_FLAGS
    case 0xC057D7: cpu.execute_instruction<0xAD>(0x005DB4, 3); return true;
    // src/unknown/C0/C05769.asm:68 CMP #1
    case 0xC057DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C05769.asm:68 CMP #1
    // Overlapping static entry reached from 0xC057DA.
    case 0xC057DC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C05769.asm:69 BNE @UNKNOWN3
    case 0xC057DD: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C05769.asm:70 LDA @LOCAL02
    case 0xC057DF: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C05769.asm:71 STA TEMP_ENTITY_SURFACE_FLAGS
    case 0xC057E1: cpu.execute_instruction<0x8D>(0x005DA4, 3); return true;
    // src/unknown/C0/C05769.asm:73 LDA @VIRTUAL02
    case 0xC057E4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05769.asm:74 END_C_FUNCTION
    case 0xC057E6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C05769.asm:74 END_C_FUNCTION
    case 0xC057E7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C057E8.asm (unresolved).
bool execute_unresolved_c0_c057e8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C057E8.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC057E8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C057E8.asm:4 STZ TEMP_ENTITY_SURFACE_FLAGS
    case 0xC057EA: cpu.execute_instruction<0x9C>(0x005DA4, 3); return true;
    // src/unknown/C0/C057E8.asm:5 INC SET_TEMP_ENTITY_SURFACE_FLAGS
    case 0xC057ED: cpu.execute_instruction<0xEE>(0x005DB4, 3); return true;
    // src/unknown/C0/C057E8.asm:6 LDA #$0007
    case 0xC057F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C0/C057E8.asm:6 LDA #$0007
    // Overlapping static entry reached from 0xC057F0.
    case 0xC057F2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C0/C057E8.asm:7 JSR UNKNOWN_C05769
    case 0xC057F3: cpu.execute_instruction<0x20>(0x005769, 3); return true;
    // src/unknown/C0/C057E8.asm:8 STA NORTH_SOUTH_COLLISION_TEST_RESULT
    case 0xC057F6: cpu.execute_instruction<0x8D>(0x005DB6, 3); return true;
    // src/unknown/C0/C057E8.asm:9 CMP #$0007
    case 0xC057F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C057E8.asm:9 CMP #$0007
    // Overlapping static entry reached from 0xC057F9.
    case 0xC057FB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C057E8.asm:10 BEQ @UNKNOWN0
    case 0xC057FC: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C057E8.asm:11 CMP #$0002
    case 0xC057FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C057E8.asm:11 CMP #$0002
    // Overlapping static entry reached from 0xC057FE.
    case 0xC05800: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C057E8.asm:12 BNE @UNKNOWN1
    case 0xC05801: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C057E8.asm:14 LDA #$FF00
    case 0xC05803: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00FF00, 3); return true;
    // src/unknown/C0/C057E8.asm:14 LDA #$FF00
    // Overlapping static entry reached from 0xC05803.
    case 0xC05805: cpu.execute_instruction<0xFF>(0xC93380, 4); return true;
    // src/unknown/C0/C057E8.asm:15 BRA @UNKNOWN6
    case 0xC05806: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/unknown/C0/C057E8.asm:17 CMP #$0000
    case 0xC05808: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C057E8.asm:17 CMP #$0000
    // Overlapping static entry reached from 0xC05805.
    case 0xC05809: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C057E8.asm:17 CMP #$0000
    // Overlapping static entry reached from 0xC05808.
    case 0xC0580A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C057E8.asm:18 BNE @UNKNOWN2
    case 0xC0580B: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C057E8.asm:19 LDA #$FFFF
    case 0xC0580D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C057E8.asm:19 LDA #$FFFF
    // Overlapping static entry reached from 0xC0580D.
    case 0xC0580F: cpu.execute_instruction<0xFF>(0xC92980, 4); return true;
    // src/unknown/C0/C057E8.asm:20 BRA @UNKNOWN6
    case 0xC05810: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C0/C057E8.asm:22 CMP #$0001
    case 0xC05812: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C057E8.asm:22 CMP #$0001
    // Overlapping static entry reached from 0xC0580F.
    case 0xC05813: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C057E8.asm:22 CMP #$0001
    // Overlapping static entry reached from 0xC05812.
    case 0xC05814: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C057E8.asm:23 BNE @UNKNOWN3
    case 0xC05815: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C057E8.asm:24 LDA #$0001
    case 0xC05817: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C057E8.asm:24 LDA #$0001
    // Overlapping static entry reached from 0xC05817.
    case 0xC05819: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C057E8.asm:25 BRA @UNKNOWN6
    case 0xC0581A: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/unknown/C0/C057E8.asm:27 CMP #$0004
    case 0xC0581C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C057E8.asm:27 CMP #$0004
    // Overlapping static entry reached from 0xC0581C.
    case 0xC0581E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C057E8.asm:28 BNE @UNKNOWN4
    case 0xC0581F: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C057E8.asm:29 LDA #$0007
    case 0xC05821: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C0/C057E8.asm:29 LDA #$0007
    // Overlapping static entry reached from 0xC05821.
    case 0xC05823: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C057E8.asm:30 BRA @UNKNOWN6
    case 0xC05824: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C0/C057E8.asm:32 CMP #$0006
    case 0xC05826: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C057E8.asm:32 CMP #$0006
    // Overlapping static entry reached from 0xC05826.
    case 0xC05828: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C057E8.asm:33 BNE @UNKNOWN5
    case 0xC05829: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C0/C057E8.asm:34 LDA CHECKED_COLLISION_LEFT_X
    case 0xC0582B: cpu.execute_instruction<0xAD>(0x005DAC, 3); return true;
    // src/unknown/C0/C057E8.asm:35 AND #$0007
    case 0xC0582E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C057E8.asm:35 AND #$0007
    // Overlapping static entry reached from 0xC0582E.
    case 0xC05830: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C057E8.asm:36 BNE @UNKNOWN5
    case 0xC05831: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C057E8.asm:37 LDA #$0007
    case 0xC05833: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C0/C057E8.asm:37 LDA #$0007
    // Overlapping static entry reached from 0xC05833.
    case 0xC05835: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C057E8.asm:38 BRA @UNKNOWN6
    case 0xC05836: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C057E8.asm:40 LDA #$FFFF
    case 0xC05838: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C057E8.asm:40 LDA #$FFFF
    // Overlapping static entry reached from 0xC05838.
    case 0xC0583A: cpu.execute_instruction<0xFF>(0x31C260, 4); return true;
    // src/unknown/C0/C057E8.asm:42 RTS
    case 0xC0583B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0583C.asm (unresolved).
bool execute_unresolved_c0_c0583c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0583C.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0583C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0583C.asm:4 STZ TEMP_ENTITY_SURFACE_FLAGS
    case 0xC0583E: cpu.execute_instruction<0x9C>(0x005DA4, 3); return true;
    // src/unknown/C0/C0583C.asm:5 INC SET_TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05841: cpu.execute_instruction<0xEE>(0x005DB4, 3); return true;
    // src/unknown/C0/C0583C.asm:6 LDA #$0038
    case 0xC05844: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000038, 2); else cpu.execute_instruction<0xA9>(0x000038, 3); return true;
    // src/unknown/C0/C0583C.asm:6 LDA #$0038
    // Overlapping static entry reached from 0xC05844.
    case 0xC05846: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C0/C0583C.asm:7 JSR UNKNOWN_C05769
    case 0xC05847: cpu.execute_instruction<0x20>(0x005769, 3); return true;
    // src/unknown/C0/C0583C.asm:8 STA NORTH_SOUTH_COLLISION_TEST_RESULT
    case 0xC0584A: cpu.execute_instruction<0x8D>(0x005DB6, 3); return true;
    // src/unknown/C0/C0583C.asm:9 CMP #$0007
    case 0xC0584D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C0583C.asm:9 CMP #$0007
    // Overlapping static entry reached from 0xC0584D.
    case 0xC0584F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0583C.asm:10 BEQ @UNKNOWN0
    case 0xC05850: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0583C.asm:11 CMP #$0010
    case 0xC05852: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/unknown/C0/C0583C.asm:11 CMP #$0010
    // Overlapping static entry reached from 0xC05852.
    case 0xC05854: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0583C.asm:12 BNE @UNKNOWN1
    case 0xC05855: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0583C.asm:14 LDA #$FF00
    case 0xC05857: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00FF00, 3); return true;
    // src/unknown/C0/C0583C.asm:14 LDA #$FF00
    // Overlapping static entry reached from 0xC05857.
    case 0xC05859: cpu.execute_instruction<0xFF>(0xC93380, 4); return true;
    // src/unknown/C0/C0583C.asm:15 BRA @UNKNOWN6
    case 0xC0585A: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/unknown/C0/C0583C.asm:17 CMP #$0000
    case 0xC0585C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0583C.asm:17 CMP #$0000
    // Overlapping static entry reached from 0xC05859.
    case 0xC0585D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0583C.asm:17 CMP #$0000
    // Overlapping static entry reached from 0xC0585C.
    case 0xC0585E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0583C.asm:18 BNE @UNKNOWN2
    case 0xC0585F: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0583C.asm:19 LDA #$FFFF
    case 0xC05861: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0583C.asm:19 LDA #$FFFF
    // Overlapping static entry reached from 0xC05861.
    case 0xC05863: cpu.execute_instruction<0xFF>(0xC92980, 4); return true;
    // src/unknown/C0/C0583C.asm:20 BRA @UNKNOWN6
    case 0xC05864: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C0/C0583C.asm:22 CMP #$0008
    case 0xC05866: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C0/C0583C.asm:22 CMP #$0008
    // Overlapping static entry reached from 0xC05863.
    case 0xC05867: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C0583C.asm:22 CMP #$0008
    // Overlapping static entry reached from 0xC05866.
    case 0xC05868: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0583C.asm:23 BNE @UNKNOWN3
    case 0xC05869: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0583C.asm:24 LDA #$0003
    case 0xC0586B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C0583C.asm:24 LDA #$0003
    // Overlapping static entry reached from 0xC0586B.
    case 0xC0586D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0583C.asm:25 BRA @UNKNOWN6
    case 0xC0586E: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/unknown/C0/C0583C.asm:27 CMP #$0020
    case 0xC05870: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C0/C0583C.asm:27 CMP #$0020
    // Overlapping static entry reached from 0xC05870.
    case 0xC05872: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0583C.asm:28 BNE @UNKNOWN4
    case 0xC05873: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0583C.asm:29 LDA #$0005
    case 0xC05875: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C0583C.asm:29 LDA #$0005
    // Overlapping static entry reached from 0xC05875.
    case 0xC05877: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0583C.asm:30 BRA @UNKNOWN6
    case 0xC05878: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C0/C0583C.asm:32 CMP #$0030
    case 0xC0587A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000030, 2); else cpu.execute_instruction<0xC9>(0x000030, 3); return true;
    // src/unknown/C0/C0583C.asm:32 CMP #$0030
    // Overlapping static entry reached from 0xC0587A.
    case 0xC0587C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0583C.asm:33 BNE @UNKNOWN5
    case 0xC0587D: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C0/C0583C.asm:34 LDA CHECKED_COLLISION_LEFT_X
    case 0xC0587F: cpu.execute_instruction<0xAD>(0x005DAC, 3); return true;
    // src/unknown/C0/C0583C.asm:35 AND #$0007
    case 0xC05882: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C0583C.asm:35 AND #$0007
    // Overlapping static entry reached from 0xC05882.
    case 0xC05884: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0583C.asm:36 BNE @UNKNOWN5
    case 0xC05885: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0583C.asm:37 LDA #$0005
    case 0xC05887: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C0583C.asm:37 LDA #$0005
    // Overlapping static entry reached from 0xC05887.
    case 0xC05889: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0583C.asm:38 BRA @UNKNOWN6
    case 0xC0588A: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0583C.asm:40 LDA #$FFFF
    case 0xC0588C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0583C.asm:40 LDA #$FFFF
    // Overlapping static entry reached from 0xC0588C.
    case 0xC0588E: cpu.execute_instruction<0xFF>(0x31C260, 4); return true;
    // src/unknown/C0/C0583C.asm:42 RTS
    case 0xC0588F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05890.asm (unresolved).
bool execute_unresolved_c0_c05890_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05890.asm:3 BEGIN_C_FUNCTION
    case 0xC05890: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05890.asm:9 END_STACK_VARS
    case 0xC05892: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05890.asm:9 END_STACK_VARS
    case 0xC05893: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05890.asm:9 END_STACK_VARS
    case 0xC05894: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05890.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC05894.
    case 0xC05896: cpu.execute_instruction<0xFF>(0xFFA05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05890.asm:9 END_STACK_VARS
    case 0xC05897: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:10 LDY #.LOWORD(-1)
    case 0xC05898: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C05890.asm:10 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC05898.
    case 0xC0589A: cpu.execute_instruction<0xFF>(0xA91284, 4); return true;
    // src/unknown/C0/C05890.asm:11 STY @LOCAL02
    case 0xC0589B: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C05890.asm:12 LDA #0
    case 0xC0589D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C05890.asm:12 LDA #0
    // Overlapping static entry reached from 0xC0589A.
    case 0xC0589E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C05890.asm:12 LDA #0
    // Overlapping static entry reached from 0xC0589D.
    case 0xC0589F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05890.asm:13 STA @VIRTUAL02
    case 0xC058A0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05890.asm:14 TAX
    case 0xC058A2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:15 STX @LOCAL01
    case 0xC058A3: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C05890.asm:16 STZ TEMP_ENTITY_SURFACE_FLAGS
    case 0xC058A5: cpu.execute_instruction<0x9C>(0x005DA4, 3); return true;
    // src/unknown/C0/C05890.asm:17 LDA #1
    case 0xC058A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C05890.asm:17 LDA #1
    // Overlapping static entry reached from 0xC058A8.
    case 0xC058AA: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C05890.asm:18 STA SET_TEMP_ENTITY_SURFACE_FLAGS
    case 0xC058AB: cpu.execute_instruction<0x8D>(0x005DB4, 3); return true;
    // src/unknown/C0/C05890.asm:19 LDA #9
    case 0xC058AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/unknown/C0/C05890.asm:19 LDA #9
    // Overlapping static entry reached from 0xC058AE.
    case 0xC058B0: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C0/C05890.asm:20 JSR UNKNOWN_C05769
    case 0xC058B1: cpu.execute_instruction<0x20>(0x005769, 3); return true;
    // src/unknown/C0/C05890.asm:21 STA @LOCAL00
    case 0xC058B4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05890.asm:22 CMP #0
    case 0xC058B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C05890.asm:22 CMP #0
    // Overlapping static entry reached from 0xC058B6.
    case 0xC058B8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C05890.asm:23 BNE @UNKNOWN1
    case 0xC058B9: cpu.execute_instruction<0xD0>(0x000024, 2); return true;
    // src/unknown/C0/C05890.asm:24 DEC CHECKED_COLLISION_LEFT_X
    case 0xC058BB: cpu.execute_instruction<0xCE>(0x005DAC, 3); return true;
    // src/unknown/C0/C05890.asm:25 DEC CHECKED_COLLISION_LEFT_X
    case 0xC058BE: cpu.execute_instruction<0xCE>(0x005DAC, 3); return true;
    // src/unknown/C0/C05890.asm:26 DEC CHECKED_COLLISION_LEFT_X
    case 0xC058C1: cpu.execute_instruction<0xCE>(0x005DAC, 3); return true;
    // src/unknown/C0/C05890.asm:27 DEC CHECKED_COLLISION_LEFT_X
    case 0xC058C4: cpu.execute_instruction<0xCE>(0x005DAC, 3); return true;
    // src/unknown/C0/C05890.asm:28 LDA #9
    case 0xC058C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/unknown/C0/C05890.asm:28 LDA #9
    // Overlapping static entry reached from 0xC058C7.
    case 0xC058C9: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C0/C05890.asm:29 JSR UNKNOWN_C05769
    case 0xC058CA: cpu.execute_instruction<0x20>(0x005769, 3); return true;
    // src/unknown/C0/C05890.asm:30 STA @LOCAL00
    case 0xC058CD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05890.asm:31 CMP #0
    case 0xC058CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C05890.asm:31 CMP #0
    // Overlapping static entry reached from 0xC058CF.
    case 0xC058D1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C05890.asm:32 BNE @UNKNOWN0
    case 0xC058D2: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C05890.asm:33 LDA #6
    case 0xC058D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C0/C05890.asm:33 LDA #6
    // Overlapping static entry reached from 0xC058D4.
    case 0xC058D6: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C05890.asm:34 JMP @UNKNOWN14
    case 0xC058D7: cpu.execute_instruction<0x4C>(0x0059ED, 3); return true;
    // src/unknown/C0/C05890.asm:36 LDA #1
    case 0xC058DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C05890.asm:36 LDA #1
    // Overlapping static entry reached from 0xC058DA.
    case 0xC058DC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05890.asm:37 STA @VIRTUAL02
    case 0xC058DD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05890.asm:39 LDA @LOCAL00
    case 0xC058DF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05890.asm:40 AND #$0009
    case 0xC058E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000009, 2); else cpu.execute_instruction<0x29>(0x000009, 3); return true;
    // src/unknown/C0/C05890.asm:40 AND #$0009
    // Overlapping static entry reached from 0xC058E1.
    case 0xC058E3: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C05890.asm:41 CMP #9
    case 0xC058E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/unknown/C0/C05890.asm:41 CMP #9
    // Overlapping static entry reached from 0xC058E4.
    case 0xC058E6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C05890.asm:42 BNE @UNKNOWN3
    case 0xC058E7: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/unknown/C0/C05890.asm:43 LDA CHECKED_COLLISION_TOP_Y
    case 0xC058E9: cpu.execute_instruction<0xAD>(0x005DAE, 3); return true;
    // src/unknown/C0/C05890.asm:44 AND #$0007
    case 0xC058EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C05890.asm:44 AND #$0007
    // Overlapping static entry reached from 0xC058EC.
    case 0xC058EE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05890.asm:45 BEQ @UNKNOWN3
    case 0xC058EF: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C0/C05890.asm:46 LDA @VIRTUAL02
    case 0xC058F1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05890.asm:47 BEQ @UNKNOWN2
    case 0xC058F3: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C05890.asm:48 LDA #6
    case 0xC058F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C0/C05890.asm:48 LDA #6
    // Overlapping static entry reached from 0xC058F5.
    case 0xC058F7: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C05890.asm:49 JMP @UNKNOWN14
    case 0xC058F8: cpu.execute_instruction<0x4C>(0x0059ED, 3); return true;
    // src/unknown/C0/C05890.asm:51 LDA #.LOWORD(-1)
    case 0xC058FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C05890.asm:51 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC058FB.
    case 0xC058FD: cpu.execute_instruction<0xFF>(0x59ED4C, 4); return true;
    // src/unknown/C0/C05890.asm:52 JMP @UNKNOWN14
    case 0xC058FE: cpu.execute_instruction<0x4C>(0x0059ED, 3); return true;
    // src/unknown/C0/C05890.asm:54 LDA CHECKED_COLLISION_LEFT_X
    case 0xC05901: cpu.execute_instruction<0xAD>(0x005DAC, 3); return true;
    // src/unknown/C0/C05890.asm:55 SEC
    case 0xC05904: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:56 SBC #4
    case 0xC05905: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/unknown/C0/C05890.asm:56 SBC #4
    // Overlapping static entry reached from 0xC05905.
    case 0xC05907: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C05890.asm:57 LSR
    case 0xC05908: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:58 LSR
    case 0xC05909: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:59 LSR
    case 0xC0590A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:60 AND #$003F
    case 0xC0590B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05890.asm:60 AND #$003F
    // Overlapping static entry reached from 0xC0590B.
    case 0xC0590D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05890.asm:61 STA @VIRTUAL04
    case 0xC0590E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C05890.asm:62 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05910: cpu.execute_instruction<0xAD>(0x005DAE, 3); return true;
    // src/unknown/C0/C05890.asm:63 DEC
    case 0xC05913: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:64 DEC
    case 0xC05914: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:65 LSR
    case 0xC05915: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:66 LSR
    case 0xC05916: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:67 LSR
    case 0xC05917: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:68 AND #$003F
    case 0xC05918: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05890.asm:68 AND #$003F
    // Overlapping static entry reached from 0xC05918.
    case 0xC0591A: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C05890.asm:69 ASL
    case 0xC0591B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:70 ASL
    case 0xC0591C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:71 ASL
    case 0xC0591D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:72 ASL
    case 0xC0591E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:73 ASL
    case 0xC0591F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:74 ASL
    case 0xC05920: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:75 CLC
    case 0xC05921: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:76 ADC @VIRTUAL04
    case 0xC05922: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C05890.asm:77 TAX
    case 0xC05924: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:78 LDA LOADED_COLLISION_TILES,X
    case 0xC05925: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C05890.asm:79 AND #$00FF
    case 0xC05928: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C05890.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC05928.
    case 0xC0592A: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C05890.asm:80 AND #$00C0
    case 0xC0592B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/unknown/C0/C05890.asm:80 AND #$00C0
    // Overlapping static entry reached from 0xC0592B.
    case 0xC0592D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05890.asm:81 BEQ @UNKNOWN4
    case 0xC0592E: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C0/C05890.asm:82 LDX @LOCAL01
    case 0xC05930: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C05890.asm:83 TXA
    case 0xC05932: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:84 ORA #$0001
    case 0xC05933: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000001, 2); else cpu.execute_instruction<0x09>(0x000001, 3); return true;
    // src/unknown/C0/C05890.asm:84 ORA #$0001
    // Overlapping static entry reached from 0xC05933.
    case 0xC05935: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C05890.asm:85 TAX
    case 0xC05936: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:86 STX @LOCAL01
    case 0xC05937: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C05890.asm:88 LDA CHECKED_COLLISION_LEFT_X
    case 0xC05939: cpu.execute_instruction<0xAD>(0x005DAC, 3); return true;
    // src/unknown/C0/C05890.asm:89 SEC
    case 0xC0593C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:90 SBC #4
    case 0xC0593D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/unknown/C0/C05890.asm:90 SBC #4
    // Overlapping static entry reached from 0xC0593D.
    case 0xC0593F: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C05890.asm:91 LSR
    case 0xC05940: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:92 LSR
    case 0xC05941: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:93 LSR
    case 0xC05942: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:94 AND #$003F
    case 0xC05943: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05890.asm:94 AND #$003F
    // Overlapping static entry reached from 0xC05943.
    case 0xC05945: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05890.asm:95 STA @VIRTUAL04
    case 0xC05946: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C05890.asm:96 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05948: cpu.execute_instruction<0xAD>(0x005DAE, 3); return true;
    // src/unknown/C0/C05890.asm:97 CLC
    case 0xC0594B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:98 ADC #9
    case 0xC0594C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/unknown/C0/C05890.asm:98 ADC #9
    // Overlapping static entry reached from 0xC0594C.
    case 0xC0594E: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C05890.asm:99 LSR
    case 0xC0594F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:100 LSR
    case 0xC05950: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:101 LSR
    case 0xC05951: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:102 AND #$003F
    case 0xC05952: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05890.asm:102 AND #$003F
    // Overlapping static entry reached from 0xC05952.
    case 0xC05954: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C05890.asm:103 ASL
    case 0xC05955: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:104 ASL
    case 0xC05956: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:105 ASL
    case 0xC05957: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:106 ASL
    case 0xC05958: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:107 ASL
    case 0xC05959: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:108 ASL
    case 0xC0595A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:109 CLC
    case 0xC0595B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:110 ADC @VIRTUAL04
    case 0xC0595C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C05890.asm:111 TAX
    case 0xC0595E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:112 LDA LOADED_COLLISION_TILES,X
    case 0xC0595F: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C05890.asm:113 AND #$00FF
    case 0xC05962: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C05890.asm:113 AND #$00FF
    // Overlapping static entry reached from 0xC05962.
    case 0xC05964: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C05890.asm:114 AND #$00C0
    case 0xC05965: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/unknown/C0/C05890.asm:114 AND #$00C0
    // Overlapping static entry reached from 0xC05965.
    case 0xC05967: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05890.asm:115 BEQ @UNKNOWN5
    case 0xC05968: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C0/C05890.asm:116 LDX @LOCAL01
    case 0xC0596A: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C05890.asm:117 TXA
    case 0xC0596C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:118 ORA #$0002
    case 0xC0596D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000002, 2); else cpu.execute_instruction<0x09>(0x000002, 3); return true;
    // src/unknown/C0/C05890.asm:118 ORA #$0002
    // Overlapping static entry reached from 0xC0596D.
    case 0xC0596F: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C05890.asm:119 TAX
    case 0xC05970: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:120 STX @LOCAL01
    case 0xC05971: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C05890.asm:122 LDA @LOCAL00
    case 0xC05973: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05890.asm:123 CMP #9
    case 0xC05975: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/unknown/C0/C05890.asm:123 CMP #9
    // Overlapping static entry reached from 0xC05975.
    case 0xC05977: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05890.asm:124 BEQ @UNKNOWN6
    case 0xC05978: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C05890.asm:125 CMP #1
    case 0xC0597A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C05890.asm:125 CMP #1
    // Overlapping static entry reached from 0xC0597A.
    case 0xC0597C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05890.asm:126 BEQ @UNKNOWN10
    case 0xC0597D: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // src/unknown/C0/C05890.asm:127 CMP #8
    case 0xC0597F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C0/C05890.asm:127 CMP #8
    // Overlapping static entry reached from 0xC0597F.
    case 0xC05981: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05890.asm:128 BEQ @UNKNOWN11
    case 0xC05982: cpu.execute_instruction<0xF0>(0x000049, 2); return true;
    // src/unknown/C0/C05890.asm:129 BRA @UNKNOWN12
    case 0xC05984: cpu.execute_instruction<0x80>(0x000054, 2); return true;
    // src/unknown/C0/C05890.asm:131 LDX @LOCAL01
    case 0xC05986: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C05890.asm:132 CPX #1
    case 0xC05988: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/unknown/C0/C05890.asm:132 CPX #1
    // Overlapping static entry reached from 0xC05988.
    case 0xC0598A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C05890.asm:133 BNE @UNKNOWN7
    case 0xC0598B: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/unknown/C0/C05890.asm:134 LDY #5
    case 0xC0598D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/unknown/C0/C05890.asm:134 LDY #5
    // Overlapping static entry reached from 0xC0598D.
    case 0xC0598F: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C05890.asm:135 STY @LOCAL02
    case 0xC05990: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C05890.asm:136 BRA @UNKNOWN12
    case 0xC05992: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/unknown/C0/C05890.asm:138 CPX #2
    case 0xC05994: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/unknown/C0/C05890.asm:138 CPX #2
    // Overlapping static entry reached from 0xC05994.
    case 0xC05996: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C05890.asm:139 BNE @UNKNOWN8
    case 0xC05997: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/unknown/C0/C05890.asm:140 LDY #7
    case 0xC05999: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000007, 2); else cpu.execute_instruction<0xA0>(0x000007, 3); return true;
    // src/unknown/C0/C05890.asm:140 LDY #7
    // Overlapping static entry reached from 0xC05999.
    case 0xC0599B: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C05890.asm:141 STY @LOCAL02
    case 0xC0599C: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C05890.asm:142 BRA @UNKNOWN12
    case 0xC0599E: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/unknown/C0/C05890.asm:144 CPX #0
    case 0xC059A0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C05890.asm:144 CPX #0
    // Overlapping static entry reached from 0xC059A0.
    case 0xC059A2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C05890.asm:145 BNE @UNKNOWN12
    case 0xC059A3: cpu.execute_instruction<0xD0>(0x000035, 2); return true;
    // src/unknown/C0/C05890.asm:146 LDA CHECKED_COLLISION_TOP_Y
    case 0xC059A5: cpu.execute_instruction<0xAD>(0x005DAE, 3); return true;
    // src/unknown/C0/C05890.asm:147 AND #$0007
    case 0xC059A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C05890.asm:147 AND #$0007
    // Overlapping static entry reached from 0xC059A8.
    case 0xC059AA: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C05890.asm:148 CMP #4
    case 0xC059AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C05890.asm:148 CMP #4
    // Overlapping static entry reached from 0xC059AB.
    case 0xC059AD: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C05890.asm:149 BCS @UNKNOWN9
    case 0xC059AE: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/unknown/C0/C05890.asm:150 LDY #7
    case 0xC059B0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000007, 2); else cpu.execute_instruction<0xA0>(0x000007, 3); return true;
    // src/unknown/C0/C05890.asm:150 LDY #7
    // Overlapping static entry reached from 0xC059B0.
    case 0xC059B2: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C05890.asm:151 STY @LOCAL02
    case 0xC059B3: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C05890.asm:152 BRA @UNKNOWN12
    case 0xC059B5: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/unknown/C0/C05890.asm:154 LDY #5
    case 0xC059B7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/unknown/C0/C05890.asm:154 LDY #5
    // Overlapping static entry reached from 0xC059B7.
    case 0xC059B9: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C05890.asm:155 STY @LOCAL02
    case 0xC059BA: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C05890.asm:156 BRA @UNKNOWN12
    case 0xC059BC: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/unknown/C0/C05890.asm:158 LDX @LOCAL01
    case 0xC059BE: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C05890.asm:159 TXA
    case 0xC059C0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:160 AND #$0002
    case 0xC059C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/unknown/C0/C05890.asm:160 AND #$0002
    // Overlapping static entry reached from 0xC059C1.
    case 0xC059C3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C05890.asm:161 BNE @UNKNOWN12
    case 0xC059C4: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/unknown/C0/C05890.asm:162 LDY #5
    case 0xC059C6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/unknown/C0/C05890.asm:162 LDY #5
    // Overlapping static entry reached from 0xC059C6.
    case 0xC059C8: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C05890.asm:163 STY @LOCAL02
    case 0xC059C9: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C05890.asm:164 BRA @UNKNOWN12
    case 0xC059CB: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C05890.asm:166 LDX @LOCAL01
    case 0xC059CD: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C05890.asm:167 TXA
    case 0xC059CF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:168 AND #$0001
    case 0xC059D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C05890.asm:168 AND #$0001
    // Overlapping static entry reached from 0xC059D0.
    case 0xC059D2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C05890.asm:169 BNE @UNKNOWN12
    case 0xC059D3: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C05890.asm:170 LDY #7
    case 0xC059D5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000007, 2); else cpu.execute_instruction<0xA0>(0x000007, 3); return true;
    // src/unknown/C0/C05890.asm:170 LDY #7
    // Overlapping static entry reached from 0xC059D5.
    case 0xC059D7: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C05890.asm:171 STY @LOCAL02
    case 0xC059D8: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C05890.asm:173 LDA @VIRTUAL02
    case 0xC059DA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05890.asm:174 BEQ @UNKNOWN13
    case 0xC059DC: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C05890.asm:175 LDY @LOCAL02
    case 0xC059DE: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C05890.asm:176 CPY #.LOWORD(-1)
    case 0xC059E0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C05890.asm:176 CPY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC059E0.
    case 0xC059E2: cpu.execute_instruction<0xFF>(0xA905D0, 4); return true;
    // src/unknown/C0/C05890.asm:177 BNE @UNKNOWN13
    case 0xC059E3: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C05890.asm:178 LDA #6
    case 0xC059E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C0/C05890.asm:178 LDA #6
    // Overlapping static entry reached from 0xC059E2.
    case 0xC059E6: cpu.execute_instruction<0x06>(0x000000, 2); return true;
    // src/unknown/C0/C05890.asm:178 LDA #6
    // Overlapping static entry reached from 0xC059E5.
    case 0xC059E7: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C05890.asm:179 BRA @UNKNOWN14
    case 0xC059E8: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C05890.asm:181 LDY @LOCAL02
    case 0xC059EA: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C05890.asm:182 TYA
    case 0xC059EC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05890.asm:184 END_C_FUNCTION
    case 0xC059ED: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C05890.asm:184 END_C_FUNCTION
    case 0xC059EE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C059EF.asm (unresolved).
bool execute_unresolved_c0_c059ef_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C059EF.asm:3 BEGIN_C_FUNCTION
    case 0xC059EF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C059EF.asm:9 END_STACK_VARS
    case 0xC059F1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C059EF.asm:9 END_STACK_VARS
    case 0xC059F2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C059EF.asm:9 END_STACK_VARS
    case 0xC059F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C059EF.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC059F3.
    case 0xC059F5: cpu.execute_instruction<0xFF>(0xFFA05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C059EF.asm:9 END_STACK_VARS
    case 0xC059F6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:10 LDY #.LOWORD(-1)
    case 0xC059F7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C059EF.asm:10 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC059F7.
    case 0xC059F9: cpu.execute_instruction<0xFF>(0xA91284, 4); return true;
    // src/unknown/C0/C059EF.asm:11 STY @LOCAL02
    case 0xC059FA: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C059EF.asm:12 LDA #0
    case 0xC059FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C059EF.asm:12 LDA #0
    // Overlapping static entry reached from 0xC059F9.
    case 0xC059FD: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C059EF.asm:12 LDA #0
    // Overlapping static entry reached from 0xC059FC.
    case 0xC059FE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C059EF.asm:13 STA @VIRTUAL02
    case 0xC059FF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C059EF.asm:14 TAX
    case 0xC05A01: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:15 STX @LOCAL01
    case 0xC05A02: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C059EF.asm:16 STZ TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05A04: cpu.execute_instruction<0x9C>(0x005DA4, 3); return true;
    // src/unknown/C0/C059EF.asm:17 LDA #1
    case 0xC05A07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C059EF.asm:17 LDA #1
    // Overlapping static entry reached from 0xC05A07.
    case 0xC05A09: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C059EF.asm:18 STA SET_TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05A0A: cpu.execute_instruction<0x8D>(0x005DB4, 3); return true;
    // src/unknown/C0/C059EF.asm:19 LDA #36
    case 0xC05A0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x000024, 3); return true;
    // src/unknown/C0/C059EF.asm:19 LDA #36
    // Overlapping static entry reached from 0xC05A0D.
    case 0xC05A0F: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C0/C059EF.asm:20 JSR UNKNOWN_C05769
    case 0xC05A10: cpu.execute_instruction<0x20>(0x005769, 3); return true;
    // src/unknown/C0/C059EF.asm:21 STA @LOCAL00
    case 0xC05A13: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C059EF.asm:22 CMP #0
    case 0xC05A15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C059EF.asm:22 CMP #0
    // Overlapping static entry reached from 0xC05A15.
    case 0xC05A17: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C059EF.asm:23 BNE @UNKNOWN1
    case 0xC05A18: cpu.execute_instruction<0xD0>(0x000024, 2); return true;
    // src/unknown/C0/C059EF.asm:24 INC CHECKED_COLLISION_LEFT_X
    case 0xC05A1A: cpu.execute_instruction<0xEE>(0x005DAC, 3); return true;
    // src/unknown/C0/C059EF.asm:25 INC CHECKED_COLLISION_LEFT_X
    case 0xC05A1D: cpu.execute_instruction<0xEE>(0x005DAC, 3); return true;
    // src/unknown/C0/C059EF.asm:26 INC CHECKED_COLLISION_LEFT_X
    case 0xC05A20: cpu.execute_instruction<0xEE>(0x005DAC, 3); return true;
    // src/unknown/C0/C059EF.asm:27 INC CHECKED_COLLISION_LEFT_X
    case 0xC05A23: cpu.execute_instruction<0xEE>(0x005DAC, 3); return true;
    // src/unknown/C0/C059EF.asm:28 LDA #36
    case 0xC05A26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x000024, 3); return true;
    // src/unknown/C0/C059EF.asm:28 LDA #36
    // Overlapping static entry reached from 0xC05A26.
    case 0xC05A28: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C0/C059EF.asm:29 JSR UNKNOWN_C05769
    case 0xC05A29: cpu.execute_instruction<0x20>(0x005769, 3); return true;
    // src/unknown/C0/C059EF.asm:30 STA @LOCAL00
    case 0xC05A2C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C059EF.asm:31 CMP #0
    case 0xC05A2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C059EF.asm:31 CMP #0
    // Overlapping static entry reached from 0xC05A2E.
    case 0xC05A30: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C059EF.asm:32 BNE @UNKNOWN0
    case 0xC05A31: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C059EF.asm:33 LDA #2
    case 0xC05A33: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C059EF.asm:33 LDA #2
    // Overlapping static entry reached from 0xC05A33.
    case 0xC05A35: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C059EF.asm:34 JMP @UNKNOWN14
    case 0xC05A36: cpu.execute_instruction<0x4C>(0x005B4C, 3); return true;
    // src/unknown/C0/C059EF.asm:36 LDA #1
    case 0xC05A39: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C059EF.asm:36 LDA #1
    // Overlapping static entry reached from 0xC05A39.
    case 0xC05A3B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C059EF.asm:37 STA @VIRTUAL02
    case 0xC05A3C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C059EF.asm:39 LDA @LOCAL00
    case 0xC05A3E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C059EF.asm:40 AND #$0024
    case 0xC05A40: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000024, 2); else cpu.execute_instruction<0x29>(0x000024, 3); return true;
    // src/unknown/C0/C059EF.asm:40 AND #$0024
    // Overlapping static entry reached from 0xC05A40.
    case 0xC05A42: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C059EF.asm:41 CMP #36
    case 0xC05A43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000024, 2); else cpu.execute_instruction<0xC9>(0x000024, 3); return true;
    // src/unknown/C0/C059EF.asm:41 CMP #36
    // Overlapping static entry reached from 0xC05A43.
    case 0xC05A45: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C059EF.asm:42 BNE @UNKNOWN3
    case 0xC05A46: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/unknown/C0/C059EF.asm:43 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05A48: cpu.execute_instruction<0xAD>(0x005DAE, 3); return true;
    // src/unknown/C0/C059EF.asm:44 AND #$0007
    case 0xC05A4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C059EF.asm:44 AND #$0007
    // Overlapping static entry reached from 0xC05A4B.
    case 0xC05A4D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C059EF.asm:45 BEQ @UNKNOWN3
    case 0xC05A4E: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C0/C059EF.asm:46 LDA @VIRTUAL02
    case 0xC05A50: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C059EF.asm:47 BEQ @UNKNOWN2
    case 0xC05A52: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C059EF.asm:48 LDA #2
    case 0xC05A54: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C059EF.asm:48 LDA #2
    // Overlapping static entry reached from 0xC05A54.
    case 0xC05A56: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C059EF.asm:49 JMP @UNKNOWN14
    case 0xC05A57: cpu.execute_instruction<0x4C>(0x005B4C, 3); return true;
    // src/unknown/C0/C059EF.asm:51 LDA #.LOWORD(-1)
    case 0xC05A5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C059EF.asm:51 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC05A5A.
    case 0xC05A5C: cpu.execute_instruction<0xFF>(0x5B4C4C, 4); return true;
    // src/unknown/C0/C059EF.asm:52 JMP @UNKNOWN14
    case 0xC05A5D: cpu.execute_instruction<0x4C>(0x005B4C, 3); return true;
    // src/unknown/C0/C059EF.asm:54 LDA CHECKED_COLLISION_LEFT_X
    case 0xC05A60: cpu.execute_instruction<0xAD>(0x005DAC, 3); return true;
    // src/unknown/C0/C059EF.asm:55 INC
    case 0xC05A63: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:56 INC
    case 0xC05A64: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:57 INC
    case 0xC05A65: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:58 INC
    case 0xC05A66: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:59 LSR
    case 0xC05A67: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:60 LSR
    case 0xC05A68: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:61 LSR
    case 0xC05A69: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:62 AND #$003F
    case 0xC05A6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C059EF.asm:62 AND #$003F
    // Overlapping static entry reached from 0xC05A6A.
    case 0xC05A6C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C059EF.asm:63 STA @VIRTUAL04
    case 0xC05A6D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C059EF.asm:64 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05A6F: cpu.execute_instruction<0xAD>(0x005DAE, 3); return true;
    // src/unknown/C0/C059EF.asm:65 DEC
    case 0xC05A72: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:66 DEC
    case 0xC05A73: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:67 LSR
    case 0xC05A74: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:68 LSR
    case 0xC05A75: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:69 LSR
    case 0xC05A76: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:70 AND #$003F
    case 0xC05A77: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C059EF.asm:70 AND #$003F
    // Overlapping static entry reached from 0xC05A77.
    case 0xC05A79: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C059EF.asm:71 ASL
    case 0xC05A7A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:72 ASL
    case 0xC05A7B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:73 ASL
    case 0xC05A7C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:74 ASL
    case 0xC05A7D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:75 ASL
    case 0xC05A7E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:76 ASL
    case 0xC05A7F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:77 CLC
    case 0xC05A80: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:78 ADC @VIRTUAL04
    case 0xC05A81: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C059EF.asm:79 TAX
    case 0xC05A83: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:80 LDA LOADED_COLLISION_TILES,X
    case 0xC05A84: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C059EF.asm:81 AND #$00FF
    case 0xC05A87: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C059EF.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC05A87.
    case 0xC05A89: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C059EF.asm:82 AND #$00C0
    case 0xC05A8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/unknown/C0/C059EF.asm:82 AND #$00C0
    // Overlapping static entry reached from 0xC05A8A.
    case 0xC05A8C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C059EF.asm:83 BEQ @UNKNOWN4
    case 0xC05A8D: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C0/C059EF.asm:84 LDX @LOCAL01
    case 0xC05A8F: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C059EF.asm:85 TXA
    case 0xC05A91: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:86 ORA #$0001
    case 0xC05A92: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000001, 2); else cpu.execute_instruction<0x09>(0x000001, 3); return true;
    // src/unknown/C0/C059EF.asm:86 ORA #$0001
    // Overlapping static entry reached from 0xC05A92.
    case 0xC05A94: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C059EF.asm:87 TAX
    case 0xC05A95: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:88 STX @LOCAL01
    case 0xC05A96: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C059EF.asm:90 LDA CHECKED_COLLISION_LEFT_X
    case 0xC05A98: cpu.execute_instruction<0xAD>(0x005DAC, 3); return true;
    // src/unknown/C0/C059EF.asm:91 INC
    case 0xC05A9B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:92 INC
    case 0xC05A9C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:93 INC
    case 0xC05A9D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:94 INC
    case 0xC05A9E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:95 LSR
    case 0xC05A9F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:96 LSR
    case 0xC05AA0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:97 LSR
    case 0xC05AA1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:98 AND #$003F
    case 0xC05AA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C059EF.asm:98 AND #$003F
    // Overlapping static entry reached from 0xC05AA2.
    case 0xC05AA4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C059EF.asm:99 STA @VIRTUAL04
    case 0xC05AA5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C059EF.asm:100 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05AA7: cpu.execute_instruction<0xAD>(0x005DAE, 3); return true;
    // src/unknown/C0/C059EF.asm:101 CLC
    case 0xC05AAA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:102 ADC #9
    case 0xC05AAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/unknown/C0/C059EF.asm:102 ADC #9
    // Overlapping static entry reached from 0xC05AAB.
    case 0xC05AAD: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C059EF.asm:103 LSR
    case 0xC05AAE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:104 LSR
    case 0xC05AAF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:105 LSR
    case 0xC05AB0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:106 AND #$003F
    case 0xC05AB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C059EF.asm:106 AND #$003F
    // Overlapping static entry reached from 0xC05AB1.
    case 0xC05AB3: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C059EF.asm:107 ASL
    case 0xC05AB4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:108 ASL
    case 0xC05AB5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:109 ASL
    case 0xC05AB6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:110 ASL
    case 0xC05AB7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:111 ASL
    case 0xC05AB8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:112 ASL
    case 0xC05AB9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:113 CLC
    case 0xC05ABA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:114 ADC @VIRTUAL04
    case 0xC05ABB: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C059EF.asm:115 TAX
    case 0xC05ABD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:116 LDA LOADED_COLLISION_TILES,X
    case 0xC05ABE: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C059EF.asm:117 AND #$00FF
    case 0xC05AC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C059EF.asm:117 AND #$00FF
    // Overlapping static entry reached from 0xC05AC1.
    case 0xC05AC3: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C059EF.asm:118 AND #$00C0
    case 0xC05AC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/unknown/C0/C059EF.asm:118 AND #$00C0
    // Overlapping static entry reached from 0xC05AC4.
    case 0xC05AC6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C059EF.asm:119 BEQ @UNKNOWN5
    case 0xC05AC7: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C0/C059EF.asm:120 LDX @LOCAL01
    case 0xC05AC9: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C059EF.asm:121 TXA
    case 0xC05ACB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:122 ORA #$0002
    case 0xC05ACC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000002, 2); else cpu.execute_instruction<0x09>(0x000002, 3); return true;
    // src/unknown/C0/C059EF.asm:122 ORA #$0002
    // Overlapping static entry reached from 0xC05ACC.
    case 0xC05ACE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C059EF.asm:123 TAX
    case 0xC05ACF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:124 STX @LOCAL01
    case 0xC05AD0: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C059EF.asm:126 LDA @LOCAL00
    case 0xC05AD2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C059EF.asm:127 CMP #36
    case 0xC05AD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000024, 2); else cpu.execute_instruction<0xC9>(0x000024, 3); return true;
    // src/unknown/C0/C059EF.asm:127 CMP #36
    // Overlapping static entry reached from 0xC05AD4.
    case 0xC05AD6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C059EF.asm:128 BEQ @UNKNOWN6
    case 0xC05AD7: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C059EF.asm:129 CMP #4
    case 0xC05AD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C059EF.asm:129 CMP #4
    // Overlapping static entry reached from 0xC05AD9.
    case 0xC05ADB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C059EF.asm:130 BEQ @UNKNOWN10
    case 0xC05ADC: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // src/unknown/C0/C059EF.asm:131 CMP #32
    case 0xC05ADE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C0/C059EF.asm:131 CMP #32
    // Overlapping static entry reached from 0xC05ADE.
    case 0xC05AE0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C059EF.asm:132 BEQ @UNKNOWN11
    case 0xC05AE1: cpu.execute_instruction<0xF0>(0x000049, 2); return true;
    // src/unknown/C0/C059EF.asm:133 BRA @UNKNOWN12
    case 0xC05AE3: cpu.execute_instruction<0x80>(0x000054, 2); return true;
    // src/unknown/C0/C059EF.asm:135 LDX @LOCAL01
    case 0xC05AE5: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C059EF.asm:136 CPX #1
    case 0xC05AE7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/unknown/C0/C059EF.asm:136 CPX #1
    // Overlapping static entry reached from 0xC05AE7.
    case 0xC05AE9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C059EF.asm:137 BNE @UNKNOWN7
    case 0xC05AEA: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/unknown/C0/C059EF.asm:138 LDY #3
    case 0xC05AEC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C0/C059EF.asm:138 LDY #3
    // Overlapping static entry reached from 0xC05AEC.
    case 0xC05AEE: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C059EF.asm:139 STY @LOCAL02
    case 0xC05AEF: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C059EF.asm:140 BRA @UNKNOWN12
    case 0xC05AF1: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/unknown/C0/C059EF.asm:142 CPX #2
    case 0xC05AF3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/unknown/C0/C059EF.asm:142 CPX #2
    // Overlapping static entry reached from 0xC05AF3.
    case 0xC05AF5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C059EF.asm:143 BNE @UNKNOWN8
    case 0xC05AF6: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/unknown/C0/C059EF.asm:144 LDY #1
    case 0xC05AF8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C059EF.asm:144 LDY #1
    // Overlapping static entry reached from 0xC05AF8.
    case 0xC05AFA: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C059EF.asm:145 STY @LOCAL02
    case 0xC05AFB: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C059EF.asm:146 BRA @UNKNOWN12
    case 0xC05AFD: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/unknown/C0/C059EF.asm:148 CPX #0
    case 0xC05AFF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C059EF.asm:148 CPX #0
    // Overlapping static entry reached from 0xC05AFF.
    case 0xC05B01: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C059EF.asm:149 BNE @UNKNOWN12
    case 0xC05B02: cpu.execute_instruction<0xD0>(0x000035, 2); return true;
    // src/unknown/C0/C059EF.asm:150 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05B04: cpu.execute_instruction<0xAD>(0x005DAE, 3); return true;
    // src/unknown/C0/C059EF.asm:151 AND #$0007
    case 0xC05B07: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C059EF.asm:151 AND #$0007
    // Overlapping static entry reached from 0xC05B07.
    case 0xC05B09: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C059EF.asm:152 CMP #4
    case 0xC05B0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C059EF.asm:152 CMP #4
    // Overlapping static entry reached from 0xC05B0A.
    case 0xC05B0C: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C059EF.asm:153 BCS @UNKNOWN9
    case 0xC05B0D: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/unknown/C0/C059EF.asm:154 LDY #1
    case 0xC05B0F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C059EF.asm:154 LDY #1
    // Overlapping static entry reached from 0xC05B0F.
    case 0xC05B11: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C059EF.asm:155 STY @LOCAL02
    case 0xC05B12: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C059EF.asm:156 BRA @UNKNOWN12
    case 0xC05B14: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/unknown/C0/C059EF.asm:158 LDY #3
    case 0xC05B16: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C0/C059EF.asm:158 LDY #3
    // Overlapping static entry reached from 0xC05B16.
    case 0xC05B18: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C059EF.asm:159 STY @LOCAL02
    case 0xC05B19: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C059EF.asm:160 BRA @UNKNOWN12
    case 0xC05B1B: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/unknown/C0/C059EF.asm:162 LDX @LOCAL01
    case 0xC05B1D: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C059EF.asm:163 TXA
    case 0xC05B1F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:164 AND #$0002
    case 0xC05B20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/unknown/C0/C059EF.asm:164 AND #$0002
    // Overlapping static entry reached from 0xC05B20.
    case 0xC05B22: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C059EF.asm:165 BNE @UNKNOWN12
    case 0xC05B23: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/unknown/C0/C059EF.asm:166 LDY #3
    case 0xC05B25: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C0/C059EF.asm:166 LDY #3
    // Overlapping static entry reached from 0xC05B25.
    case 0xC05B27: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C059EF.asm:167 STY @LOCAL02
    case 0xC05B28: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C059EF.asm:168 BRA @UNKNOWN12
    case 0xC05B2A: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C059EF.asm:170 LDX @LOCAL01
    case 0xC05B2C: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C059EF.asm:171 TXA
    case 0xC05B2E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:172 AND #$0001
    case 0xC05B2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C059EF.asm:172 AND #$0001
    // Overlapping static entry reached from 0xC05B2F.
    case 0xC05B31: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C059EF.asm:173 BNE @UNKNOWN12
    case 0xC05B32: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C059EF.asm:174 LDY #1
    case 0xC05B34: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C059EF.asm:174 LDY #1
    // Overlapping static entry reached from 0xC05B34.
    case 0xC05B36: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C059EF.asm:175 STY @LOCAL02
    case 0xC05B37: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C059EF.asm:177 LDA @VIRTUAL02
    case 0xC05B39: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C059EF.asm:178 BEQ @UNKNOWN13
    case 0xC05B3B: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C059EF.asm:179 LDY @LOCAL02
    case 0xC05B3D: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C059EF.asm:180 CPY #.LOWORD(-1)
    case 0xC05B3F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C059EF.asm:180 CPY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC05B3F.
    case 0xC05B41: cpu.execute_instruction<0xFF>(0xA905D0, 4); return true;
    // src/unknown/C0/C059EF.asm:181 BNE @UNKNOWN13
    case 0xC05B42: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C059EF.asm:182 LDA #2
    case 0xC05B44: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C059EF.asm:182 LDA #2
    // Overlapping static entry reached from 0xC05B41.
    case 0xC05B45: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/unknown/C0/C059EF.asm:182 LDA #2
    // Overlapping static entry reached from 0xC05B44.
    case 0xC05B46: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C059EF.asm:183 BRA @UNKNOWN14
    case 0xC05B47: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C059EF.asm:185 LDY @LOCAL02
    case 0xC05B49: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C059EF.asm:186 TYA
    case 0xC05B4B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C059EF.asm:188 END_C_FUNCTION
    case 0xC05B4C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C059EF.asm:188 END_C_FUNCTION
    case 0xC05B4D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05B4E.asm (unresolved).
bool execute_unresolved_c0_c05b4e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05B4E.asm:3 BEGIN_C_FUNCTION
    case 0xC05B4E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05B4E.asm:8 END_STACK_VARS
    case 0xC05B50: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C05B4E.asm:8 END_STACK_VARS
    case 0xC05B51: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05B4E.asm:8 END_STACK_VARS
    case 0xC05B52: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05B4E.asm:8 END_STACK_VARS
    case 0xC05B53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05B4E.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC05B53.
    case 0xC05B55: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05B4E.asm:8 END_STACK_VARS
    case 0xC05B56: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C05B4E.asm:8 END_STACK_VARS
    case 0xC05B57: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C05B4E.asm:9 TAX
    case 0xC05B58: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05B4E.asm:10 STX @LOCAL00
    case 0xC05B59: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C05B4E.asm:11 STZ TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05B5B: cpu.execute_instruction<0x9C>(0x005DA4, 3); return true;
    // src/unknown/C0/C05B4E.asm:12 INC SET_TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05B5E: cpu.execute_instruction<0xEE>(0x005DB4, 3); return true;
    // src/unknown/C0/C05B4E.asm:13 TXA
    case 0xC05B61: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05B4E.asm:14 LSR
    case 0xC05B62: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05B4E.asm:15 ASL
    case 0xC05B63: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05B4E.asm:16 TAX
    case 0xC05B64: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05B4E.asm:17 LDA f:UNKNOWN_C200D1,X
    case 0xC05B65: cpu.execute_instruction<0xBF>(0xC200D1, 4); return true;
    // src/unknown/C0/C05B4E.asm:18 JSR UNKNOWN_C05769
    case 0xC05B69: cpu.execute_instruction<0x20>(0x005769, 3); return true;
    // src/unknown/C0/C05B4E.asm:19 CMP #0
    case 0xC05B6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C05B4E.asm:19 CMP #0
    // Overlapping static entry reached from 0xC05B6C.
    case 0xC05B6E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05B4E.asm:20 BEQ @UNKNOWN0
    case 0xC05B6F: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C05B4E.asm:21 LDA #$FF00
    case 0xC05B71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00FF00, 3); return true;
    // src/unknown/C0/C05B4E.asm:21 LDA #$FF00
    // Overlapping static entry reached from 0xC05B71.
    case 0xC05B73: cpu.execute_instruction<0xFF>(0xA60380, 4); return true;
    // src/unknown/C0/C05B4E.asm:22 BRA @UNKNOWN1
    case 0xC05B74: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C05B4E.asm:24 LDX @LOCAL00
    case 0xC05B76: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C05B4E.asm:24 LDX @LOCAL00
    // Overlapping static entry reached from 0xC05B73.
    case 0xC05B77: cpu.execute_instruction<0x0E>(0x002B8A, 3); return true;
    // src/unknown/C0/C05B4E.asm:25 TXA
    case 0xC05B78: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05B4E.asm:27 END_C_FUNCTION
    case 0xC05B79: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C05B4E.asm:27 END_C_FUNCTION
    case 0xC05B7A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05B7B.asm (unresolved).
bool execute_unresolved_c0_c05b7b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05B7B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC05B7B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05B7B.asm:14 END_STACK_VARS
    case 0xC05B7D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C05B7B.asm:14 END_STACK_VARS
    case 0xC05B7E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05B7B.asm:14 END_STACK_VARS
    case 0xC05B7F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05B7B.asm:14 END_STACK_VARS
    case 0xC05B80: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05B7B.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC05B80.
    case 0xC05B82: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05B7B.asm:14 END_STACK_VARS
    case 0xC05B83: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C05B7B.asm:14 END_STACK_VARS
    case 0xC05B84: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C05B7B.asm:15 STX @VIRTUAL04
    case 0xC05B85: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C0/C05B7B.asm:15 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC05B82.
    case 0xC05B86: cpu.execute_instruction<0x04>(0x0000A8, 2); return true;
    // src/unknown/C0/C05B7B.asm:16 TAY
    case 0xC05B87: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C05B7B.asm:17 LDX @PARAM03
    case 0xC05B88: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // src/unknown/C0/C05B7B.asm:18 STX @LOCAL03
    case 0xC05B8A: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C05B7B.asm:19 STZ NOT_MOVING_IN_SAME_DIRECTION_FACED
    case 0xC05B8C: cpu.execute_instruction<0x9C>(0x005DB8, 3); return true;
    // src/unknown/C0/C05B7B.asm:20 STZ SET_TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05B8F: cpu.execute_instruction<0x9C>(0x005DB4, 3); return true;
    // src/unknown/C0/C05B7B.asm:21 STZ TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05B92: cpu.execute_instruction<0x9C>(0x005DA4, 3); return true;
    // src/unknown/C0/C05B7B.asm:22 LDA @LOCAL03
    case 0xC05B95: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C05B7B.asm:23 STA FINAL_MOVEMENT_DIRECTION
    case 0xC05B97: cpu.execute_instruction<0x8D>(0x005DA6, 3); return true;
    // src/unknown/C0/C05B7B.asm:24 LDA @LOCAL03
    case 0xC05B9A: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C05B7B.asm:25 STA UNREAD_7E5DA2
    case 0xC05B9C: cpu.execute_instruction<0x8D>(0x005DA2, 3); return true;
    // src/unknown/C0/C05B7B.asm:26 STY CHECKED_COLLISION_LEFT_X
    case 0xC05B9F: cpu.execute_instruction<0x8C>(0x005DAC, 3); return true;
    // src/unknown/C0/C05B7B.asm:27 LDA @VIRTUAL04
    case 0xC05BA2: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C05B7B.asm:28 STA CHECKED_COLLISION_TOP_Y
    case 0xC05BA4: cpu.execute_instruction<0x8D>(0x005DAE, 3); return true;
    // src/unknown/C0/C05B7B.asm:29 LDA @LOCAL03
    case 0xC05BA7: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C05B7B.asm:30 BEQ @UNKNOWN7
    case 0xC05BA9: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/unknown/C0/C05B7B.asm:31 CMP #4
    case 0xC05BAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C05B7B.asm:31 CMP #4
    // Overlapping static entry reached from 0xC05BAB.
    case 0xC05BAD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C05B7B.asm:32 BEQL @UNKNOWN10
    case 0xC05BAE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C05B7B.asm:32 BEQL @UNKNOWN10
    case 0xC05BB0: cpu.execute_instruction<0x4C>(0x005C2D, 3); return true;
    // src/unknown/C0/C05B7B.asm:33 CMP #6
    case 0xC05BB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C05B7B.asm:33 CMP #6
    // Overlapping static entry reached from 0xC05BB3.
    case 0xC05BB5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C05B7B.asm:34 BEQL @UNKNOWN12
    case 0xC05BB6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C05B7B.asm:34 BEQL @UNKNOWN12
    case 0xC05BB8: cpu.execute_instruction<0x4C>(0x005C73, 3); return true;
    // src/unknown/C0/C05B7B.asm:35 CMP #2
    case 0xC05BBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C05B7B.asm:35 CMP #2
    // Overlapping static entry reached from 0xC05BBB.
    case 0xC05BBD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C05B7B.asm:36 BEQL @UNKNOWN13
    case 0xC05BBE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C05B7B.asm:36 BEQL @UNKNOWN13
    case 0xC05BC0: cpu.execute_instruction<0x4C>(0x005C7C, 3); return true;
    // src/unknown/C0/C05B7B.asm:37 CMP #7
    case 0xC05BC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C05B7B.asm:37 CMP #7
    // Overlapping static entry reached from 0xC05BC3.
    case 0xC05BC5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C05B7B.asm:38 BEQL @UNKNOWN14
    case 0xC05BC6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C05B7B.asm:38 BEQL @UNKNOWN14
    case 0xC05BC8: cpu.execute_instruction<0x4C>(0x005C85, 3); return true;
    // src/unknown/C0/C05B7B.asm:39 CMP #1
    case 0xC05BCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C05B7B.asm:39 CMP #1
    // Overlapping static entry reached from 0xC05BCB.
    case 0xC05BCD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C05B7B.asm:40 BEQL @UNKNOWN14
    case 0xC05BCE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C05B7B.asm:40 BEQL @UNKNOWN14
    case 0xC05BD0: cpu.execute_instruction<0x4C>(0x005C85, 3); return true;
    // src/unknown/C0/C05B7B.asm:41 CMP #5
    case 0xC05BD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C0/C05B7B.asm:41 CMP #5
    // Overlapping static entry reached from 0xC05BD3.
    case 0xC05BD5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C05B7B.asm:42 BEQL @UNKNOWN14
    case 0xC05BD6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C05B7B.asm:42 BEQL @UNKNOWN14
    case 0xC05BD8: cpu.execute_instruction<0x4C>(0x005C85, 3); return true;
    // src/unknown/C0/C05B7B.asm:43 CMP #3
    case 0xC05BDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C05B7B.asm:43 CMP #3
    // Overlapping static entry reached from 0xC05BDB.
    case 0xC05BDD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C05B7B.asm:44 BEQL @UNKNOWN14
    case 0xC05BDE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C05B7B.asm:44 BEQL @UNKNOWN14
    case 0xC05BE0: cpu.execute_instruction<0x4C>(0x005C85, 3); return true;
    // src/unknown/C0/C05B7B.asm:45 JMP @UNKNOWN15
    case 0xC05BE3: cpu.execute_instruction<0x4C>(0x005C9B, 3); return true;
    // src/unknown/C0/C05B7B.asm:47 JSR UNKNOWN_C057E8
    case 0xC05BE6: cpu.execute_instruction<0x20>(0x0057E8, 3); return true;
    // src/unknown/C0/C05B7B.asm:48 STA @VIRTUAL02
    case 0xC05BE9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:49 STA @LOCAL02
    case 0xC05BEB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05B7B.asm:50 LDA @VIRTUAL02
    case 0xC05BED: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:51 CMP #.LOWORD(-1)
    case 0xC05BEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C05B7B.asm:51 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC05BEF.
    case 0xC05BF1: cpu.execute_instruction<0xFF>(0x4C03F0, 4); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C05B7B.asm:52 BNEL @UNKNOWN15
    case 0xC05BF2: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C05B7B.asm:52 BNEL @UNKNOWN15
    case 0xC05BF4: cpu.execute_instruction<0x4C>(0x005C9B, 3); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C05B7B.asm:52 BNEL @UNKNOWN15
    // Overlapping static entry reached from 0xC05BF1.
    case 0xC05BF5: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C05B7B.asm:52 BNEL @UNKNOWN15
    // Overlapping static entry reached from 0xC05BF5.
    case 0xC05BF6: cpu.execute_instruction<0x5C>(0x5DA8AE, 4); return true;
    // src/unknown/C0/C05B7B.asm:53 LDX LADDER_STAIRS_TILE_X
    case 0xC05BF7: cpu.execute_instruction<0xAE>(0x005DA8, 3); return true;
    // src/unknown/C0/C05B7B.asm:54 STX @LOCAL01
    case 0xC05BFA: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C05B7B.asm:55 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05BFC: cpu.execute_instruction<0xAD>(0x005DAE, 3); return true;
    // src/unknown/C0/C05B7B.asm:56 AND #$0007
    case 0xC05BFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C05B7B.asm:56 AND #$0007
    // Overlapping static entry reached from 0xC05BFF.
    case 0xC05C01: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C05B7B.asm:57 CMP #5
    case 0xC05C02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C0/C05B7B.asm:57 CMP #5
    // Overlapping static entry reached from 0xC05C02.
    case 0xC05C04: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C05B7B.asm:58 BCS @UNKNOWN9
    case 0xC05C05: cpu.execute_instruction<0xB0>(0x00001F, 2); return true;
    // src/unknown/C0/C05B7B.asm:59 DEC CHECKED_COLLISION_TOP_Y
    case 0xC05C07: cpu.execute_instruction<0xCE>(0x005DAE, 3); return true;
    // src/unknown/C0/C05B7B.asm:60 DEC CHECKED_COLLISION_TOP_Y
    case 0xC05C0A: cpu.execute_instruction<0xCE>(0x005DAE, 3); return true;
    // src/unknown/C0/C05B7B.asm:61 DEC CHECKED_COLLISION_TOP_Y
    case 0xC05C0D: cpu.execute_instruction<0xCE>(0x005DAE, 3); return true;
    // src/unknown/C0/C05B7B.asm:62 DEC CHECKED_COLLISION_TOP_Y
    case 0xC05C10: cpu.execute_instruction<0xCE>(0x005DAE, 3); return true;
    // src/unknown/C0/C05B7B.asm:63 JSR UNKNOWN_C057E8
    case 0xC05C13: cpu.execute_instruction<0x20>(0x0057E8, 3); return true;
    // src/unknown/C0/C05B7B.asm:64 STA @LOCAL00
    case 0xC05C16: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05B7B.asm:65 AND #$FF00
    case 0xC05C18: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C05B7B.asm:65 AND #$FF00
    // Overlapping static entry reached from 0xC05C18.
    case 0xC05C1A: cpu.execute_instruction<0xFF>(0xFF00C9, 4); return true;
    // src/unknown/C0/C05B7B.asm:66 CMP #$FF00
    case 0xC05C1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x00FF00, 3); return true;
    // src/unknown/C0/C05B7B.asm:66 CMP #$FF00
    // Overlapping static entry reached from 0xC05C1B.
    case 0xC05C1D: cpu.execute_instruction<0xFF>(0xA506F0, 4); return true;
    // src/unknown/C0/C05B7B.asm:67 BEQ @UNKNOWN9
    case 0xC05C1E: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C05B7B.asm:68 LDA @LOCAL00
    case 0xC05C20: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05B7B.asm:68 LDA @LOCAL00
    // Overlapping static entry reached from 0xC05C1D.
    case 0xC05C21: cpu.execute_instruction<0x0E>(0x000285, 3); return true;
    // src/unknown/C0/C05B7B.asm:69 STA @VIRTUAL02
    case 0xC05C22: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:70 STA @LOCAL02
    case 0xC05C24: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05B7B.asm:72 LDX @LOCAL01
    case 0xC05C26: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C05B7B.asm:73 STX LADDER_STAIRS_TILE_X
    case 0xC05C28: cpu.execute_instruction<0x8E>(0x005DA8, 3); return true;
    // src/unknown/C0/C05B7B.asm:74 BRA @UNKNOWN15
    case 0xC05C2B: cpu.execute_instruction<0x80>(0x00006E, 2); return true;
    // src/unknown/C0/C05B7B.asm:76 JSR UNKNOWN_C0583C
    case 0xC05C2D: cpu.execute_instruction<0x20>(0x00583C, 3); return true;
    // src/unknown/C0/C05B7B.asm:77 STA @VIRTUAL02
    case 0xC05C30: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:78 STA @LOCAL02
    case 0xC05C32: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05B7B.asm:79 LDA @VIRTUAL02
    case 0xC05C34: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:80 CMP #.LOWORD(-1)
    case 0xC05C36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C05B7B.asm:80 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC05C36.
    case 0xC05C38: cpu.execute_instruction<0xFF>(0xAE60D0, 4); return true;
    // src/unknown/C0/C05B7B.asm:81 BNE @UNKNOWN15
    case 0xC05C39: cpu.execute_instruction<0xD0>(0x000060, 2); return true;
    // src/unknown/C0/C05B7B.asm:82 LDX LADDER_STAIRS_TILE_X
    case 0xC05C3B: cpu.execute_instruction<0xAE>(0x005DA8, 3); return true;
    // src/unknown/C0/C05B7B.asm:82 LDX LADDER_STAIRS_TILE_X
    // Overlapping static entry reached from 0xC05C38.
    case 0xC05C3C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C05B7B.asm:82 LDX LADDER_STAIRS_TILE_X
    // Overlapping static entry reached from 0xC05C3C.
    case 0xC05C3D: cpu.execute_instruction<0x5D>(0x001086, 3); return true;
    // src/unknown/C0/C05B7B.asm:83 STX @LOCAL01
    case 0xC05C3E: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C05B7B.asm:84 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05C40: cpu.execute_instruction<0xAD>(0x005DAE, 3); return true;
    // src/unknown/C0/C05B7B.asm:85 AND #$0007
    case 0xC05C43: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C05B7B.asm:85 AND #$0007
    // Overlapping static entry reached from 0xC05C43.
    case 0xC05C45: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C05B7B.asm:86 CMP #3
    case 0xC05C46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C05B7B.asm:86 CMP #3
    // Overlapping static entry reached from 0xC05C46.
    case 0xC05C48: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C05B7B.asm:87 BLTEQ @UNKNOWN11
    case 0xC05C49: cpu.execute_instruction<0x90>(0x000021, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C05B7B.asm:87 BLTEQ @UNKNOWN11
    case 0xC05C4B: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/unknown/C0/C05B7B.asm:88 INC CHECKED_COLLISION_TOP_Y
    case 0xC05C4D: cpu.execute_instruction<0xEE>(0x005DAE, 3); return true;
    // src/unknown/C0/C05B7B.asm:89 INC CHECKED_COLLISION_TOP_Y
    case 0xC05C50: cpu.execute_instruction<0xEE>(0x005DAE, 3); return true;
    // src/unknown/C0/C05B7B.asm:90 INC CHECKED_COLLISION_TOP_Y
    case 0xC05C53: cpu.execute_instruction<0xEE>(0x005DAE, 3); return true;
    // src/unknown/C0/C05B7B.asm:91 INC CHECKED_COLLISION_TOP_Y
    case 0xC05C56: cpu.execute_instruction<0xEE>(0x005DAE, 3); return true;
    // src/unknown/C0/C05B7B.asm:92 JSR UNKNOWN_C0583C
    case 0xC05C59: cpu.execute_instruction<0x20>(0x00583C, 3); return true;
    // src/unknown/C0/C05B7B.asm:93 STA @LOCAL00
    case 0xC05C5C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05B7B.asm:94 AND #$FF00
    case 0xC05C5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C05B7B.asm:94 AND #$FF00
    // Overlapping static entry reached from 0xC05C5E.
    case 0xC05C60: cpu.execute_instruction<0xFF>(0xFF00C9, 4); return true;
    // src/unknown/C0/C05B7B.asm:95 CMP #$FF00
    case 0xC05C61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x00FF00, 3); return true;
    // src/unknown/C0/C05B7B.asm:95 CMP #$FF00
    // Overlapping static entry reached from 0xC05C61.
    case 0xC05C63: cpu.execute_instruction<0xFF>(0xA506F0, 4); return true;
    // src/unknown/C0/C05B7B.asm:96 BEQ @UNKNOWN11
    case 0xC05C64: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C05B7B.asm:97 LDA @LOCAL00
    case 0xC05C66: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05B7B.asm:97 LDA @LOCAL00
    // Overlapping static entry reached from 0xC05C63.
    case 0xC05C67: cpu.execute_instruction<0x0E>(0x000285, 3); return true;
    // src/unknown/C0/C05B7B.asm:98 STA @VIRTUAL02
    case 0xC05C68: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:99 STA @LOCAL02
    case 0xC05C6A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05B7B.asm:101 LDX @LOCAL01
    case 0xC05C6C: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C05B7B.asm:102 STX LADDER_STAIRS_TILE_X
    case 0xC05C6E: cpu.execute_instruction<0x8E>(0x005DA8, 3); return true;
    // src/unknown/C0/C05B7B.asm:103 BRA @UNKNOWN15
    case 0xC05C71: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/unknown/C0/C05B7B.asm:105 JSR UNKNOWN_C05890
    case 0xC05C73: cpu.execute_instruction<0x20>(0x005890, 3); return true;
    // src/unknown/C0/C05B7B.asm:106 STA @VIRTUAL02
    case 0xC05C76: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:107 STA @LOCAL02
    case 0xC05C78: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05B7B.asm:108 BRA @UNKNOWN15
    case 0xC05C7A: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/unknown/C0/C05B7B.asm:110 JSR UNKNOWN_C059EF
    case 0xC05C7C: cpu.execute_instruction<0x20>(0x0059EF, 3); return true;
    // src/unknown/C0/C05B7B.asm:111 STA @VIRTUAL02
    case 0xC05C7F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:112 STA @LOCAL02
    case 0xC05C81: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05B7B.asm:113 BRA @UNKNOWN15
    case 0xC05C83: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C0/C05B7B.asm:115 LDA @LOCAL03
    case 0xC05C85: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C05B7B.asm:116 JSR UNKNOWN_C05B4E
    case 0xC05C87: cpu.execute_instruction<0x20>(0x005B4E, 3); return true;
    // src/unknown/C0/C05B7B.asm:117 STA @VIRTUAL02
    case 0xC05C8A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:118 STA @LOCAL02
    case 0xC05C8C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05B7B.asm:119 LDA @VIRTUAL02
    case 0xC05C8E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:120 CMP #$FF00
    case 0xC05C90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x00FF00, 3); return true;
    // src/unknown/C0/C05B7B.asm:120 CMP #$FF00
    // Overlapping static entry reached from 0xC05C90.
    case 0xC05C92: cpu.execute_instruction<0xFF>(0xA506F0, 4); return true;
    // src/unknown/C0/C05B7B.asm:121 BEQ @UNKNOWN15
    case 0xC05C93: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C05B7B.asm:122 LDA @LOCAL03
    case 0xC05C95: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C05B7B.asm:122 LDA @LOCAL03
    // Overlapping static entry reached from 0xC05C92.
    case 0xC05C96: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/unknown/C0/C05B7B.asm:123 STA @VIRTUAL02
    case 0xC05C97: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:123 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC05C96.
    case 0xC05C98: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C0/C05B7B.asm:124 STA @LOCAL02
    case 0xC05C99: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05B7B.asm:126 LDA PENDING_INTERACTIONS
    case 0xC05C9B: cpu.execute_instruction<0xAD>(0x005D9A, 3); return true;
    // src/unknown/C0/C05B7B.asm:127 BEQ @UNKNOWN16
    case 0xC05C9E: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C05B7B.asm:128 LDA #.LOWORD(-1)
    case 0xC05CA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C05B7B.asm:128 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC05CA0.
    case 0xC05CA2: cpu.execute_instruction<0xFF>(0x5DA88D, 4); return true;
    // src/unknown/C0/C05B7B.asm:129 STA LADDER_STAIRS_TILE_X
    case 0xC05CA3: cpu.execute_instruction<0x8D>(0x005DA8, 3); return true;
    // src/unknown/C0/C05B7B.asm:131 LDA @LOCAL02
    case 0xC05CA6: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C05B7B.asm:132 STA @VIRTUAL02
    case 0xC05CA8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:133 CMP #.LOWORD(-1)
    case 0xC05CAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C05B7B.asm:133 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC05CAA.
    case 0xC05CAC: cpu.execute_instruction<0xFF>(0xA507F0, 4); return true;
    // src/unknown/C0/C05B7B.asm:134 BEQ @UNKNOWN17
    case 0xC05CAD: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C05B7B.asm:135 LDA @VIRTUAL02
    case 0xC05CAF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:135 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC05CAC.
    case 0xC05CB0: cpu.execute_instruction<0x02>(0x0000C9, 2); return true;
    // src/unknown/C0/C05B7B.asm:136 CMP #$FF00
    case 0xC05CB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x00FF00, 3); return true;
    // src/unknown/C0/C05B7B.asm:136 CMP #$FF00
    // Overlapping static entry reached from 0xC05CB1.
    case 0xC05CB3: cpu.execute_instruction<0xFF>(0xAD05D0, 4); return true;
    // src/unknown/C0/C05B7B.asm:137 BNE @UNKNOWN18
    case 0xC05CB4: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C05B7B.asm:139 LDA TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05CB6: cpu.execute_instruction<0xAD>(0x005DA4, 3); return true;
    // src/unknown/C0/C05B7B.asm:139 LDA TEMP_ENTITY_SURFACE_FLAGS
    // Overlapping static entry reached from 0xC05CB3.
    case 0xC05CB7: cpu.execute_instruction<0xA4>(0x00005D, 2); return true;
    // src/unknown/C0/C05B7B.asm:140 BRA @UNKNOWN20
    case 0xC05CB9: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C0/C05B7B.asm:142 LDX #0
    case 0xC05CBB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C05B7B.asm:142 LDX #0
    // Overlapping static entry reached from 0xC05CBB.
    case 0xC05CBD: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C05B7B.asm:143 LDA @VIRTUAL02
    case 0xC05CBE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:144 CMP @LOCAL03
    case 0xC05CC0: cpu.execute_instruction<0xC5>(0x000014, 2); return true;
    // src/unknown/C0/C05B7B.asm:145 BEQ @UNKNOWN19
    case 0xC05CC2: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C05B7B.asm:146 LDX #1
    case 0xC05CC4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C05B7B.asm:146 LDX #1
    // Overlapping static entry reached from 0xC05CC4.
    case 0xC05CC6: cpu.execute_instruction<0x00>(0x00008E, 2); return true;
    // src/unknown/C0/C05B7B.asm:148 STX NOT_MOVING_IN_SAME_DIRECTION_FACED
    case 0xC05CC7: cpu.execute_instruction<0x8E>(0x005DB8, 3); return true;
    // src/unknown/C0/C05B7B.asm:149 LDA @VIRTUAL02
    case 0xC05CCA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:150 STA FINAL_MOVEMENT_DIRECTION
    case 0xC05CCC: cpu.execute_instruction<0x8D>(0x005DA6, 3); return true;
    // src/unknown/C0/C05B7B.asm:151 LDA TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05CCF: cpu.execute_instruction<0xAD>(0x005DA4, 3); return true;
    // src/unknown/C0/C05B7B.asm:152 AND #$003F
    case 0xC05CD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05B7B.asm:152 AND #$003F
    // Overlapping static entry reached from 0xC05CD2.
    case 0xC05CD4: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05B7B.asm:154 END_C_FUNCTION
    case 0xC05CD5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C05B7B.asm:154 END_C_FUNCTION
    case 0xC05CD6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05CD7.asm (unresolved).
bool execute_unresolved_c0_c05cd7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05CD7.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC05CD7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05CD7.asm:13 END_STACK_VARS
    case 0xC05CD9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C05CD7.asm:13 END_STACK_VARS
    case 0xC05CDA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05CD7.asm:13 END_STACK_VARS
    case 0xC05CDB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05CD7.asm:13 END_STACK_VARS
    case 0xC05CDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05CD7.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC05CDC.
    case 0xC05CDE: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05CD7.asm:13 END_STACK_VARS
    case 0xC05CDF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C05CD7.asm:13 END_STACK_VARS
    case 0xC05CE0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:14 STX @VIRTUAL04
    case 0xC05CE1: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C0/C05CD7.asm:14 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC05CDE.
    case 0xC05CE2: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C0/C05CD7.asm:15 STA @LOCAL02
    case 0xC05CE3: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05CD7.asm:15 STA @LOCAL02
    // Overlapping static entry reached from 0xC05CE2.
    case 0xC05CE4: cpu.execute_instruction<0x12>(0x0000A6, 2); return true;
    // src/unknown/C0/C05CD7.asm:16 LDX @PARAM03
    case 0xC05CE5: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C0/C05CD7.asm:16 LDX @PARAM03
    // Overlapping static entry reached from 0xC05CE4.
    case 0xC05CE6: cpu.execute_instruction<0x22>(0x9C1086, 4); return true;
    // src/unknown/C0/C05CD7.asm:17 STX @LOCAL01
    case 0xC05CE7: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C05CD7.asm:18 STZ TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05CE9: cpu.execute_instruction<0x9C>(0x005DA4, 3); return true;
    // src/unknown/C0/C05CD7.asm:18 STZ TEMP_ENTITY_SURFACE_FLAGS
    // Overlapping static entry reached from 0xC05CE6.
    case 0xC05CEA: cpu.execute_instruction<0xA4>(0x00005D, 2); return true;
    // src/unknown/C0/C05CD7.asm:19 TYA
    case 0xC05CEC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:20 ASL
    case 0xC05CED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:21 TAX
    case 0xC05CEE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:22 LDA ENTITY_SIZES,X
    case 0xC05CEF: cpu.execute_instruction<0xBD>(0x002B6E, 3); return true;
    // src/unknown/C0/C05CD7.asm:23 STA @VIRTUAL02
    case 0xC05CF2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05CD7.asm:24 ASL
    case 0xC05CF4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:25 STA @LOCAL00
    case 0xC05CF5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05CD7.asm:26 LDX @LOCAL00
    case 0xC05CF7: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C05CD7.asm:27 LDA @LOCAL02
    case 0xC05CF9: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C05CD7.asm:28 SEC
    case 0xC05CFB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:29 SBC f:UNKNOWN_C42A1F,X
    case 0xC05CFC: cpu.execute_instruction<0xFF>(0xC42A1F, 4); return true;
    // src/unknown/C0/C05CD7.asm:30 TAY
    case 0xC05D00: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:31 STY CHECKED_COLLISION_LEFT_X
    case 0xC05D01: cpu.execute_instruction<0x8C>(0x005DAC, 3); return true;
    // src/unknown/C0/C05CD7.asm:32 LDX @LOCAL00
    case 0xC05D04: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C05CD7.asm:33 LDA @VIRTUAL04
    case 0xC05D06: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C05CD7.asm:34 SEC
    case 0xC05D08: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:35 SBC f:UNKNOWN_C42A41,X
    case 0xC05D09: cpu.execute_instruction<0xFF>(0xC42A41, 4); return true;
    // src/unknown/C0/C05CD7.asm:36 LDX @LOCAL00
    case 0xC05D0D: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C05CD7.asm:37 CLC
    case 0xC05D0F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:38 ADC f:UNKNOWN_C42AEB,X
    case 0xC05D10: cpu.execute_instruction<0x7F>(0xC42AEB, 4); return true;
    // src/unknown/C0/C05CD7.asm:39 STA @LOCAL00
    case 0xC05D14: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05CD7.asm:40 STA CHECKED_COLLISION_TOP_Y
    case 0xC05D16: cpu.execute_instruction<0x8D>(0x005DAE, 3); return true;
    // src/unknown/C0/C05CD7.asm:41 LDX @LOCAL01
    case 0xC05D19: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C05CD7.asm:42 TXA
    case 0xC05D1B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:43 CMP #1
    case 0xC05D1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C05CD7.asm:43 CMP #1
    // Overlapping static entry reached from 0xC05D1C.
    case 0xC05D1E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05CD7.asm:44 BEQ @UNKNOWN0
    case 0xC05D1F: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/C0/C05CD7.asm:45 CMP #0
    case 0xC05D21: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C05CD7.asm:45 CMP #0
    // Overlapping static entry reached from 0xC05D21.
    case 0xC05D23: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05CD7.asm:46 BEQ @UNKNOWN1
    case 0xC05D24: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/unknown/C0/C05CD7.asm:47 CMP #3
    case 0xC05D26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C05CD7.asm:47 CMP #3
    // Overlapping static entry reached from 0xC05D26.
    case 0xC05D28: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05CD7.asm:48 BEQ @UNKNOWN2
    case 0xC05D29: cpu.execute_instruction<0xF0>(0x00002C, 2); return true;
    // src/unknown/C0/C05CD7.asm:49 CMP #2
    case 0xC05D2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C05CD7.asm:49 CMP #2
    // Overlapping static entry reached from 0xC05D2B.
    case 0xC05D2D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05CD7.asm:50 BEQ @UNKNOWN3
    case 0xC05D2E: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/unknown/C0/C05CD7.asm:51 CMP #5
    case 0xC05D30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C0/C05CD7.asm:51 CMP #5
    // Overlapping static entry reached from 0xC05D30.
    case 0xC05D32: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05CD7.asm:52 BEQ @UNKNOWN4
    case 0xC05D33: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/unknown/C0/C05CD7.asm:53 CMP #4
    case 0xC05D35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C05CD7.asm:53 CMP #4
    // Overlapping static entry reached from 0xC05D35.
    case 0xC05D37: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05CD7.asm:54 BEQ @UNKNOWN5
    case 0xC05D38: cpu.execute_instruction<0xF0>(0x000034, 2); return true;
    // src/unknown/C0/C05CD7.asm:55 CMP #7
    case 0xC05D3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C05CD7.asm:55 CMP #7
    // Overlapping static entry reached from 0xC05D3A.
    case 0xC05D3C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05CD7.asm:56 BEQ @UNKNOWN6
    case 0xC05D3D: cpu.execute_instruction<0xF0>(0x000039, 2); return true;
    // src/unknown/C0/C05CD7.asm:57 CMP #6
    case 0xC05D3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C05CD7.asm:57 CMP #6
    // Overlapping static entry reached from 0xC05D3F.
    case 0xC05D41: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05CD7.asm:58 BEQ @UNKNOWN7
    case 0xC05D42: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/unknown/C0/C05CD7.asm:59 BRA @UNKNOWN8
    case 0xC05D44: cpu.execute_instruction<0x80>(0x000040, 2); return true;
    // src/unknown/C0/C05CD7.asm:61 LDX @VIRTUAL02
    case 0xC05D46: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05CD7.asm:62 LDA @LOCAL00
    case 0xC05D48: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05CD7.asm:63 JSR UNKNOWN_C056D0
    case 0xC05D4A: cpu.execute_instruction<0x20>(0x0056D0, 3); return true;
    // src/unknown/C0/C05CD7.asm:65 LDX @VIRTUAL02
    case 0xC05D4D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05CD7.asm:66 LDA CHECKED_COLLISION_LEFT_X
    case 0xC05D4F: cpu.execute_instruction<0xAD>(0x005DAC, 3); return true;
    // src/unknown/C0/C05CD7.asm:67 JSR UNKNOWN_C05503
    case 0xC05D52: cpu.execute_instruction<0x20>(0x005503, 3); return true;
    // src/unknown/C0/C05CD7.asm:68 BRA @UNKNOWN8
    case 0xC05D55: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C0/C05CD7.asm:70 LDX @VIRTUAL02
    case 0xC05D57: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05CD7.asm:71 TYA
    case 0xC05D59: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:72 JSR UNKNOWN_C0559C
    case 0xC05D5A: cpu.execute_instruction<0x20>(0x00559C, 3); return true;
    // src/unknown/C0/C05CD7.asm:74 LDX @VIRTUAL02
    case 0xC05D5D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05CD7.asm:75 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05D5F: cpu.execute_instruction<0xAD>(0x005DAE, 3); return true;
    // src/unknown/C0/C05CD7.asm:76 JSR UNKNOWN_C056D0
    case 0xC05D62: cpu.execute_instruction<0x20>(0x0056D0, 3); return true;
    // src/unknown/C0/C05CD7.asm:77 BRA @UNKNOWN8
    case 0xC05D65: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/unknown/C0/C05CD7.asm:79 LDX @VIRTUAL02
    case 0xC05D67: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05CD7.asm:80 LDA @LOCAL00
    case 0xC05D69: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05CD7.asm:81 JSR UNKNOWN_C05639
    case 0xC05D6B: cpu.execute_instruction<0x20>(0x005639, 3); return true;
    // src/unknown/C0/C05CD7.asm:83 LDX @VIRTUAL02
    case 0xC05D6E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05CD7.asm:84 LDA CHECKED_COLLISION_LEFT_X
    case 0xC05D70: cpu.execute_instruction<0xAD>(0x005DAC, 3); return true;
    // src/unknown/C0/C05CD7.asm:85 JSR UNKNOWN_C0559C
    case 0xC05D73: cpu.execute_instruction<0x20>(0x00559C, 3); return true;
    // src/unknown/C0/C05CD7.asm:86 BRA @UNKNOWN8
    case 0xC05D76: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C0/C05CD7.asm:88 LDX @VIRTUAL02
    case 0xC05D78: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05CD7.asm:89 TYA
    case 0xC05D7A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:90 JSR UNKNOWN_C05503
    case 0xC05D7B: cpu.execute_instruction<0x20>(0x005503, 3); return true;
    // src/unknown/C0/C05CD7.asm:92 LDX @VIRTUAL02
    case 0xC05D7E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05CD7.asm:93 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05D80: cpu.execute_instruction<0xAD>(0x005DAE, 3); return true;
    // src/unknown/C0/C05CD7.asm:94 JSR UNKNOWN_C05639
    case 0xC05D83: cpu.execute_instruction<0x20>(0x005639, 3); return true;
    // src/unknown/C0/C05CD7.asm:96 LDA TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05D86: cpu.execute_instruction<0xAD>(0x005DA4, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05CD7.asm:97 END_C_FUNCTION
    case 0xC05D89: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C05CD7.asm:97 END_C_FUNCTION
    case 0xC05D8A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05D8B.asm (unresolved).
bool execute_unresolved_c0_c05d8b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05D8B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC05D8B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05D8B.asm:12 END_STACK_VARS
    case 0xC05D8D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C05D8B.asm:12 END_STACK_VARS
    case 0xC05D8E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05D8B.asm:12 END_STACK_VARS
    case 0xC05D8F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05D8B.asm:12 END_STACK_VARS
    case 0xC05D90: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05D8B.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC05D90.
    case 0xC05D92: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05D8B.asm:12 END_STACK_VARS
    case 0xC05D93: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C05D8B.asm:12 END_STACK_VARS
    case 0xC05D94: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C05D8B.asm:13 STY @LOCAL02
    case 0xC05D95: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C05D8B.asm:13 STY @LOCAL02
    // Overlapping static entry reached from 0xC05D92.
    case 0xC05D96: cpu.execute_instruction<0x12>(0x000086, 2); return true;
    // src/unknown/C0/C05D8B.asm:14 STX @LOCAL01
    case 0xC05D97: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C05D8B.asm:14 STX @LOCAL01
    // Overlapping static entry reached from 0xC05D96.
    case 0xC05D98: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // src/unknown/C0/C05D8B.asm:15 STA @LOCAL00
    case 0xC05D99: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05D8B.asm:15 STA @LOCAL00
    // Overlapping static entry reached from 0xC05D98.
    case 0xC05D9A: cpu.execute_instruction<0x0E>(0x000A98, 3); return true;
    // src/unknown/C0/C05D8B.asm:16 TYA
    case 0xC05D9B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05D8B.asm:17 ASL
    case 0xC05D9C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05D8B.asm:18 STA @VIRTUAL02
    case 0xC05D9D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05D8B.asm:19 LDX @VIRTUAL02
    case 0xC05D9F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05D8B.asm:20 LDA @LOCAL00
    case 0xC05DA1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05D8B.asm:21 SEC
    case 0xC05DA3: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C05D8B.asm:22 SBC f:UNKNOWN_C42A1F,X
    case 0xC05DA4: cpu.execute_instruction<0xFF>(0xC42A1F, 4); return true;
    // src/unknown/C0/C05D8B.asm:23 STA @LOCAL00
    case 0xC05DA8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05D8B.asm:24 STA CHECKED_COLLISION_LEFT_X
    case 0xC05DAA: cpu.execute_instruction<0x8D>(0x005DAC, 3); return true;
    // src/unknown/C0/C05D8B.asm:25 LDX @LOCAL01
    case 0xC05DAD: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C05D8B.asm:26 TXA
    case 0xC05DAF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05D8B.asm:27 LDX @VIRTUAL02
    case 0xC05DB0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05D8B.asm:28 SEC
    case 0xC05DB2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C05D8B.asm:29 SBC f:UNKNOWN_C42A41,X
    case 0xC05DB3: cpu.execute_instruction<0xFF>(0xC42A41, 4); return true;
    // src/unknown/C0/C05D8B.asm:30 LDX @VIRTUAL02
    case 0xC05DB7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05D8B.asm:31 CLC
    case 0xC05DB9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05D8B.asm:32 ADC f:UNKNOWN_C42AEB,X
    case 0xC05DBA: cpu.execute_instruction<0x7F>(0xC42AEB, 4); return true;
    // src/unknown/C0/C05D8B.asm:33 STA CHECKED_COLLISION_TOP_Y
    case 0xC05DBE: cpu.execute_instruction<0x8D>(0x005DAE, 3); return true;
    // src/unknown/C0/C05D8B.asm:34 TYX
    case 0xC05DC1: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C05D8B.asm:35 LDA @LOCAL00
    case 0xC05DC2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05D8B.asm:36 JSR UNKNOWN_C05503
    case 0xC05DC4: cpu.execute_instruction<0x20>(0x005503, 3); return true;
    // src/unknown/C0/C05D8B.asm:37 LDY @LOCAL02
    case 0xC05DC7: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C05D8B.asm:38 TYX
    case 0xC05DC9: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C05D8B.asm:39 LDA CHECKED_COLLISION_LEFT_X
    case 0xC05DCA: cpu.execute_instruction<0xAD>(0x005DAC, 3); return true;
    // src/unknown/C0/C05D8B.asm:40 JSR UNKNOWN_C0559C
    case 0xC05DCD: cpu.execute_instruction<0x20>(0x00559C, 3); return true;
    // src/unknown/C0/C05D8B.asm:41 LDY @LOCAL02
    case 0xC05DD0: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C05D8B.asm:42 TYX
    case 0xC05DD2: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C05D8B.asm:43 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05DD3: cpu.execute_instruction<0xAD>(0x005DAE, 3); return true;
    // src/unknown/C0/C05D8B.asm:44 JSR UNKNOWN_C05639
    case 0xC05DD6: cpu.execute_instruction<0x20>(0x005639, 3); return true;
    // src/unknown/C0/C05D8B.asm:45 LDY @LOCAL02
    case 0xC05DD9: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C05D8B.asm:46 TYX
    case 0xC05DDB: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C05D8B.asm:47 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05DDC: cpu.execute_instruction<0xAD>(0x005DAE, 3); return true;
    // src/unknown/C0/C05D8B.asm:48 JSR UNKNOWN_C056D0
    case 0xC05DDF: cpu.execute_instruction<0x20>(0x0056D0, 3); return true;
    // src/unknown/C0/C05D8B.asm:49 LDA TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05DE2: cpu.execute_instruction<0xAD>(0x005DA4, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05D8B.asm:50 END_C_FUNCTION
    case 0xC05DE5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C05D8B.asm:50 END_C_FUNCTION
    case 0xC05DE6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05DE7.asm (unresolved).
bool execute_unresolved_c0_c05de7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C05DE7.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC05DE7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05DE7.asm:7 END_STACK_VARS
    case 0xC05DE9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C05DE7.asm:7 END_STACK_VARS
    case 0xC05DEA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05DE7.asm:7 END_STACK_VARS
    case 0xC05DEB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05DE7.asm:7 END_STACK_VARS
    case 0xC05DEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05DE7.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC05DEC.
    case 0xC05DEE: cpu.execute_instruction<0xFF>(0xA2685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05DE7.asm:7 END_STACK_VARS
    case 0xC05DEF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C05DE7.asm:7 END_STACK_VARS
    case 0xC05DF0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C05DE7.asm:8 LDX #$0000
    case 0xC05DF1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C05DE7.asm:8 LDX #$0000
    // Overlapping static entry reached from 0xC05DEE.
    case 0xC05DF2: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C05DE7.asm:8 LDX #$0000
    // Overlapping static entry reached from 0xC05DF1.
    case 0xC05DF3: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C05DE7.asm:9 AND #$000C
    case 0xC05DF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/unknown/C0/C05DE7.asm:9 AND #$000C
    // Overlapping static entry reached from 0xC05DF4.
    case 0xC05DF6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05DE7.asm:10 BEQ @UNKNOWN0
    case 0xC05DF7: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C05DE7.asm:11 CMP #$0004
    case 0xC05DF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C05DE7.asm:11 CMP #$0004
    // Overlapping static entry reached from 0xC05DF9.
    case 0xC05DFB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05DE7.asm:12 BEQ @UNKNOWN1
    case 0xC05DFC: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C05DE7.asm:13 CMP #$0008
    case 0xC05DFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C0/C05DE7.asm:13 CMP #$0008
    // Overlapping static entry reached from 0xC05DFE.
    case 0xC05E00: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05DE7.asm:14 BEQ @UNKNOWN2
    case 0xC05E01: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C05DE7.asm:15 CMP #$000C
    case 0xC05E03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/unknown/C0/C05DE7.asm:15 CMP #$000C
    // Overlapping static entry reached from 0xC05E03.
    case 0xC05E05: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05DE7.asm:16 BEQ @UNKNOWN2
    case 0xC05E06: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C05DE7.asm:17 BRA @UNKNOWN3
    case 0xC05E08: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C05DE7.asm:19 LDX #$0004
    case 0xC05E0A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C0/C05DE7.asm:19 LDX #$0004
    // Overlapping static entry reached from 0xC05E0A.
    case 0xC05E0C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C05DE7.asm:20 BRA @UNKNOWN3
    case 0xC05E0D: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C0/C05DE7.asm:22 LDX #$0002
    case 0xC05E0F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/unknown/C0/C05DE7.asm:22 LDX #$0002
    // Overlapping static entry reached from 0xC05E0F.
    case 0xC05E11: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C05DE7.asm:23 BRA @UNKNOWN3
    case 0xC05E12: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C05DE7.asm:25 LDX #$0001
    case 0xC05E14: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C05DE7.asm:25 LDX #$0001
    // Overlapping static entry reached from 0xC05E14.
    case 0xC05E16: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C05DE7.asm:27 STX @VIRTUAL02
    case 0xC05E17: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C05DE7.asm:28 TYA
    case 0xC05E19: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05DE7.asm:29 LDY #.SIZEOF(enemy_data)
    case 0xC05E1A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C05DE7.asm:29 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC05E1A.
    case 0xC05E1C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C05DE7.asm:30 JSL MULT168
    case 0xC05E1D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C05DE7.asm:31 CLC
    case 0xC05E21: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05DE7.asm:32 ADC #enemy_data::run_flag
    case 0xC05E22: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/unknown/C0/C05DE7.asm:32 ADC #enemy_data::run_flag
    // Overlapping static entry reached from 0xC05E22.
    case 0xC05E24: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C05DE7.asm:33 TAX
    case 0xC05E25: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05DE7.asm:34 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC05E26: cpu.execute_instruction<0xBF>(0xD59589, 4); return true;
    // src/unknown/C0/C05DE7.asm:35 AND #$00FF
    case 0xC05E2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C05DE7.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC05E2A.
    case 0xC05E2C: cpu.execute_instruction<0x00>(0x000025, 2); return true;
    // src/unknown/C0/C05DE7.asm:36 AND @VIRTUAL02
    case 0xC05E2D: cpu.execute_instruction<0x25>(0x000002, 2); return true;
    // src/unknown/C0/C05DE7.asm:37 BEQ @UNKNOWN4
    case 0xC05E2F: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C05DE7.asm:38 LDA #$0000
    case 0xC05E31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C05DE7.asm:38 LDA #$0000
    // Overlapping static entry reached from 0xC05E31.
    case 0xC05E33: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C05DE7.asm:39 BRA @UNKNOWN5
    case 0xC05E34: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C05DE7.asm:41 LDA #$0080
    case 0xC05E36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/unknown/C0/C05DE7.asm:41 LDA #$0080
    // Overlapping static entry reached from 0xC05E36.
    case 0xC05E38: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/unknown/C0/C05DE7.asm:43 PLD
    case 0xC05E39: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C05DE7.asm:44 RTL
    case 0xC05E3A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05E3B.asm (unresolved).
bool execute_unresolved_c0_c05e3b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05E3B.asm:3 BEGIN_C_FUNCTION
    case 0xC05E3B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05E3B.asm:8 END_STACK_VARS
    case 0xC05E3D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C05E3B.asm:8 END_STACK_VARS
    case 0xC05E3E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05E3B.asm:8 END_STACK_VARS
    case 0xC05E3F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05E3B.asm:8 END_STACK_VARS
    case 0xC05E40: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05E3B.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC05E40.
    case 0xC05E42: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05E3B.asm:8 END_STACK_VARS
    case 0xC05E43: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C05E3B.asm:8 END_STACK_VARS
    case 0xC05E44: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C05E3B.asm:9 STA @LOCAL01
    case 0xC05E45: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C05E3B.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC05E42.
    case 0xC05E46: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/unknown/C0/C05E3B.asm:10 JSL UNKNOWN_C09EFF
    case 0xC05E47: cpu.execute_instruction<0x22>(0xC09EFF, 4); return true;
    // src/unknown/C0/C05E3B.asm:10 JSL UNKNOWN_C09EFF
    // Overlapping static entry reached from 0xC05E46.
    case 0xC05E48: cpu.execute_instruction<0xFF>(0xAAC09E, 4); return true;
    // src/unknown/C0/C05E3B.asm:11 TAX
    case 0xC05E4B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05E3B.asm:12 BNE @UNKNOWN0
    case 0xC05E4C: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C05E3B.asm:13 LDA #$FF00
    case 0xC05E4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00FF00, 3); return true;
    // src/unknown/C0/C05E3B.asm:13 LDA #$FF00
    // Overlapping static entry reached from 0xC05E4E.
    case 0xC05E50: cpu.execute_instruction<0xFF>(0xA52180, 4); return true;
    // src/unknown/C0/C05E3B.asm:14 BRA @UNKNOWN1
    case 0xC05E51: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/unknown/C0/C05E3B.asm:16 LDA @LOCAL01
    case 0xC05E53: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C05E3B.asm:16 LDA @LOCAL01
    // Overlapping static entry reached from 0xC05E50.
    case 0xC05E54: cpu.execute_instruction<0x10>(0x00000A, 2); return true;
    // src/unknown/C0/C05E3B.asm:17 ASL
    case 0xC05E55: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05E3B.asm:18 STA @VIRTUAL02
    case 0xC05E56: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05E3B.asm:19 LDX @VIRTUAL02
    case 0xC05E58: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05E3B.asm:20 LDA ENTITY_DIRECTIONS,X
    case 0xC05E5A: cpu.execute_instruction<0xBD>(0x002AF6, 3); return true;
    // src/unknown/C0/C05E3B.asm:21 STA @LOCAL00
    case 0xC05E5D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05E3B.asm:22 LDA @LOCAL01
    case 0xC05E5F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C05E3B.asm:22 LDA @LOCAL01
    // Overlapping static entry reached from 0xC05E54.
    case 0xC05E60: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C0/C05E3B.asm:23 TAY
    case 0xC05E61: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C05E3B.asm:24 LDX ENTITY_MOVEMENT_PROSPECTIVE_Y
    case 0xC05E62: cpu.execute_instruction<0xAE>(0x00284A, 3); return true;
    // src/unknown/C0/C05E3B.asm:25 LDA ENTITY_MOVEMENT_PROSPECTIVE_X
    case 0xC05E65: cpu.execute_instruction<0xAD>(0x002848, 3); return true;
    // src/unknown/C0/C05E3B.asm:26 JSL UNKNOWN_C05CD7
    case 0xC05E68: cpu.execute_instruction<0x22>(0xC05CD7, 4); return true;
    // src/unknown/C0/C05E3B.asm:26 JSL UNKNOWN_C05CD7
    // Overlapping static entry reached from 0xC05E46.
    case 0xC05E6A: cpu.execute_instruction<0x5C>(0xD029C0, 4); return true;
    // src/unknown/C0/C05E3B.asm:27 AND #$00D0
    case 0xC05E6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000D0, 2); else cpu.execute_instruction<0x29>(0x0000D0, 3); return true;
    // src/unknown/C0/C05E3B.asm:27 AND #$00D0
    // Overlapping static entry reached from 0xC05E6C.
    case 0xC05E6E: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C05E3B.asm:28 LDX @VIRTUAL02
    case 0xC05E6F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05E3B.asm:29 STA ENTITY_OBSTACLE_FLAGS,X
    case 0xC05E71: cpu.execute_instruction<0x9D>(0x0028DA, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05E3B.asm:31 END_C_FUNCTION
    case 0xC05E74: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C05E3B.asm:31 END_C_FUNCTION
    case 0xC05E75: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05E76.asm (unresolved).
bool execute_unresolved_c0_c05e76_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C05E76.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC05E76: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C05E76.asm:4 LDA CURRENT_ENTITY_SLOT
    case 0xC05E78: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C05E76.asm:5 JSR UNKNOWN_C05E3B
    case 0xC05E7B: cpu.execute_instruction<0x20>(0x005E3B, 3); return true;
    // src/unknown/C0/C05E76.asm:6 AND #$00FF
    case 0xC05E7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C05E76.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC05E7E.
    case 0xC05E80: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/unknown/C0/C05E76.asm:7 RTL
    case 0xC05E81: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05E82.asm (unresolved).
bool execute_unresolved_c0_c05e82_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05E82.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC05E82: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05E82.asm:7 END_STACK_VARS
    case 0xC05E84: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05E82.asm:7 END_STACK_VARS
    case 0xC05E85: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05E82.asm:7 END_STACK_VARS
    case 0xC05E86: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05E82.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC05E86.
    case 0xC05E88: cpu.execute_instruction<0xFF>(0x42AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05E82.asm:7 END_STACK_VARS
    case 0xC05E89: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C05E82.asm:8 LDX CURRENT_ENTITY_SLOT
    case 0xC05E8A: cpu.execute_instruction<0xAE>(0x001A42, 3); return true;
    // src/unknown/C0/C05E82.asm:8 LDX CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC05E88.
    case 0xC05E8C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C05E82.asm:9 STX @LOCAL01
    case 0xC05E8D: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C05E82.asm:10 TXA
    case 0xC05E8F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05E82.asm:11 JSR UNKNOWN_C05E3B
    case 0xC05E90: cpu.execute_instruction<0x20>(0x005E3B, 3); return true;
    // src/unknown/C0/C05E82.asm:12 STA @LOCAL00
    case 0xC05E93: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05E82.asm:13 CMP #$FF00
    case 0xC05E95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x00FF00, 3); return true;
    // src/unknown/C0/C05E82.asm:13 CMP #$FF00
    // Overlapping static entry reached from 0xC05E95.
    case 0xC05E97: cpu.execute_instruction<0xFF>(0xA905D0, 4); return true;
    // src/unknown/C0/C05E82.asm:14 BNE @UNKNOWN0
    case 0xC05E98: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C05E82.asm:15 LDA #0
    case 0xC05E9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C05E82.asm:15 LDA #0
    // Overlapping static entry reached from 0xC05E97.
    case 0xC05E9B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C05E82.asm:15 LDA #0
    // Overlapping static entry reached from 0xC05E9A.
    case 0xC05E9C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C05E82.asm:16 BRA @UNKNOWN2
    case 0xC05E9D: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/unknown/C0/C05E82.asm:18 CMP #0
    case 0xC05E9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C05E82.asm:18 CMP #0
    // Overlapping static entry reached from 0xC05E9F.
    case 0xC05EA1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05E82.asm:19 BEQ @UNKNOWN1
    case 0xC05EA2: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C05E82.asm:20 LDA #0
    case 0xC05EA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C05E82.asm:20 LDA #0
    // Overlapping static entry reached from 0xC05EA4.
    case 0xC05EA6: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C05E82.asm:21 BRA @UNKNOWN2
    case 0xC05EA7: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/unknown/C0/C05E82.asm:23 LDX @LOCAL01
    case 0xC05EA9: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C05E82.asm:24 TXA
    case 0xC05EAB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05E82.asm:25 ASL
    case 0xC05EAC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05E82.asm:26 TAY
    case 0xC05EAD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C05E82.asm:27 CLC
    case 0xC05EAE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05E82.asm:28 ADC #.LOWORD(ENTITY_OBSTACLE_FLAGS)
    case 0xC05EAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DA, 2); else cpu.execute_instruction<0x69>(0x0028DA, 3); return true;
    // src/unknown/C0/C05E82.asm:28 ADC #.LOWORD(ENTITY_OBSTACLE_FLAGS)
    // Overlapping static entry reached from 0xC05EAF.
    case 0xC05EB1: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C05E82.asm:29 STA @VIRTUAL02
    case 0xC05EB2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05E82.asm:30 LDA ENTITY_ENEMY_IDS,Y
    case 0xC05EB4: cpu.execute_instruction<0xB9>(0x002D12, 3); return true;
    // src/unknown/C0/C05E82.asm:31 TAY
    case 0xC05EB7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C05E82.asm:32 LDA @LOCAL00
    case 0xC05EB8: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05E82.asm:33 JSL UNKNOWN_C05DE7
    case 0xC05EBA: cpu.execute_instruction<0x22>(0xC05DE7, 4); return true;
    // src/unknown/C0/C05E82.asm:34 STA @VIRTUAL04
    case 0xC05EBE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C05E82.asm:35 LDX @VIRTUAL02
    case 0xC05EC0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05E82.asm:36 LDA __BSS_START__,X
    case 0xC05EC2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C05E82.asm:37 ORA @VIRTUAL04
    case 0xC05EC5: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/unknown/C0/C05E82.asm:38 LDX @VIRTUAL02
    case 0xC05EC7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05E82.asm:39 STA __BSS_START__,X
    case 0xC05EC9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05E82.asm:41 END_C_FUNCTION
    case 0xC05ECC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C05E82.asm:41 END_C_FUNCTION
    case 0xC05ECD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05ECE.asm (unresolved).
bool execute_unresolved_c0_c05ece_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05ECE.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC05ECE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05ECE.asm:7 END_STACK_VARS
    case 0xC05ED0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05ECE.asm:7 END_STACK_VARS
    case 0xC05ED1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05ECE.asm:7 END_STACK_VARS
    case 0xC05ED2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05ECE.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC05ED2.
    case 0xC05ED4: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05ECE.asm:7 END_STACK_VARS
    case 0xC05ED5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C05ECE.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC05ED6: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C05ECE.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC05ED4.
    case 0xC05ED8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C05ECE.asm:9 STA @LOCAL01
    case 0xC05ED9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C05ECE.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC05F40.
    case 0xC05EDA: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/unknown/C0/C05ECE.asm:10 JSL UNKNOWN_C09EFF
    case 0xC05EDB: cpu.execute_instruction<0x22>(0xC09EFF, 4); return true;
    // src/unknown/C0/C05ECE.asm:10 JSL UNKNOWN_C09EFF
    // Overlapping static entry reached from 0xC05EDA.
    case 0xC05EDC: cpu.execute_instruction<0xFF>(0xC9C09E, 4); return true;
    // src/unknown/C0/C05ECE.asm:11 CMP #0
    case 0xC05EDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C05ECE.asm:11 CMP #0
    // Overlapping static entry reached from 0xC05EDC.
    case 0xC05EE0: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C05ECE.asm:11 CMP #0
    // Overlapping static entry reached from 0xC05EDF.
    case 0xC05EE1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C05ECE.asm:12 BNE @UNKNOWN0
    case 0xC05EE2: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C05ECE.asm:13 LDA #0
    case 0xC05EE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C05ECE.asm:13 LDA #0
    // Overlapping static entry reached from 0xC05EE4.
    case 0xC05EE6: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C05ECE.asm:14 BRA @UNKNOWN2
    case 0xC05EE7: cpu.execute_instruction<0x80>(0x000048, 2); return true;
    // src/unknown/C0/C05ECE.asm:16 LDY @LOCAL01
    case 0xC05EE9: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C05ECE.asm:17 LDX ENTITY_MOVEMENT_PROSPECTIVE_Y
    case 0xC05EEB: cpu.execute_instruction<0xAE>(0x00284A, 3); return true;
    // src/unknown/C0/C05ECE.asm:18 LDA ENTITY_MOVEMENT_PROSPECTIVE_X
    case 0xC05EEE: cpu.execute_instruction<0xAD>(0x002848, 3); return true;
    // src/unknown/C0/C05ECE.asm:19 JSL UNKNOWN_C05F82
    case 0xC05EF1: cpu.execute_instruction<0x22>(0xC05F82, 4); return true;
    // src/unknown/C0/C05ECE.asm:20 AND #$00D0
    case 0xC05EF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000D0, 2); else cpu.execute_instruction<0x29>(0x0000D0, 3); return true;
    // src/unknown/C0/C05ECE.asm:20 AND #$00D0
    // Overlapping static entry reached from 0xC05EF5.
    case 0xC05EF7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05ECE.asm:21 STA @VIRTUAL02
    case 0xC05EF8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05ECE.asm:22 LDA @LOCAL01
    case 0xC05EFA: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C05ECE.asm:23 ASL
    case 0xC05EFC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05ECE.asm:24 TAX
    case 0xC05EFD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05ECE.asm:25 STX @LOCAL00
    case 0xC05EFE: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C05ECE.asm:26 TXA
    case 0xC05F00: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05ECE.asm:27 CLC
    case 0xC05F01: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05ECE.asm:28 ADC #.LOWORD(ENTITY_OBSTACLE_FLAGS)
    case 0xC05F02: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DA, 2); else cpu.execute_instruction<0x69>(0x0028DA, 3); return true;
    // src/unknown/C0/C05ECE.asm:28 ADC #.LOWORD(ENTITY_OBSTACLE_FLAGS)
    // Overlapping static entry reached from 0xC05F02.
    case 0xC05F04: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C05ECE.asm:29 STA @VIRTUAL04
    case 0xC05F05: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C05ECE.asm:30 LDA @VIRTUAL02
    case 0xC05F07: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05ECE.asm:31 LDX @VIRTUAL04
    case 0xC05F09: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C05ECE.asm:32 STA __BSS_START__,X
    case 0xC05F0B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C05ECE.asm:33 LDA @VIRTUAL02
    case 0xC05F0E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05ECE.asm:34 BEQ @UNKNOWN1
    case 0xC05F10: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C05ECE.asm:35 LDA #0
    case 0xC05F12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C05ECE.asm:35 LDA #0
    // Overlapping static entry reached from 0xC05F12.
    case 0xC05F14: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C05ECE.asm:36 BRA @UNKNOWN2
    case 0xC05F15: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C0/C05ECE.asm:38 LDX @LOCAL00
    case 0xC05F17: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C05ECE.asm:39 LDY ENTITY_ENEMY_IDS,X
    case 0xC05F19: cpu.execute_instruction<0xBC>(0x002D12, 3); return true;
    // src/unknown/C0/C05ECE.asm:40 LDX @LOCAL01
    case 0xC05F1C: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C05ECE.asm:41 LDA @VIRTUAL02
    case 0xC05F1E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05ECE.asm:42 JSL UNKNOWN_C05DE7
    case 0xC05F20: cpu.execute_instruction<0x22>(0xC05DE7, 4); return true;
    // src/unknown/C0/C05ECE.asm:43 PHA
    case 0xC05F24: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C05ECE.asm:44 LDA @VIRTUAL02
    case 0xC05F25: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05ECE.asm:45 PLY
    case 0xC05F27: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C05ECE.asm:46 STY @VIRTUAL02
    case 0xC05F28: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C05ECE.asm:47 ORA @VIRTUAL02
    case 0xC05F2A: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C05ECE.asm:48 LDX @VIRTUAL04
    case 0xC05F2C: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C05ECE.asm:48 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC05F8F.
    case 0xC05F2D: cpu.execute_instruction<0x04>(0x00009D, 2); return true;
    // src/unknown/C0/C05ECE.asm:49 STA __BSS_START__,X
    case 0xC05F2E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C05ECE.asm:49 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC05F2D.
    case 0xC05F2F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05ECE.asm:51 END_C_FUNCTION
    case 0xC05F31: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C05ECE.asm:51 END_C_FUNCTION
    case 0xC05F32: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05F33.asm (unresolved).
bool execute_unresolved_c0_c05f33_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05F33.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC05F33: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05F33.asm:12 END_STACK_VARS
    case 0xC05F35: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C05F33.asm:12 END_STACK_VARS
    case 0xC05F36: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05F33.asm:12 END_STACK_VARS
    case 0xC05F37: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05F33.asm:12 END_STACK_VARS
    case 0xC05F38: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05F33.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC05F38.
    case 0xC05F3A: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05F33.asm:12 END_STACK_VARS
    case 0xC05F3B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C05F33.asm:12 END_STACK_VARS
    case 0xC05F3C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C05F33.asm:13 STX @LOCAL02
    case 0xC05F3D: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C05F33.asm:13 STX @LOCAL02
    // Overlapping static entry reached from 0xC05F3A.
    case 0xC05F3E: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/unknown/C0/C05F33.asm:14 STA @LOCAL01
    case 0xC05F3F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C05F33.asm:14 STA @LOCAL01
    // Overlapping static entry reached from 0xC05F3E.
    case 0xC05F40: cpu.execute_instruction<0x10>(0x000098, 2); return true;
    // src/unknown/C0/C05F33.asm:15 TYA
    case 0xC05F41: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05F33.asm:16 ASL
    case 0xC05F42: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05F33.asm:17 TAX
    case 0xC05F43: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05F33.asm:18 LDY ENTITY_SIZES,X
    case 0xC05F44: cpu.execute_instruction<0xBC>(0x002B6E, 3); return true;
    // src/unknown/C0/C05F33.asm:19 STY @LOCAL00
    case 0xC05F47: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C05F33.asm:20 STZ TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05F49: cpu.execute_instruction<0x9C>(0x005DA4, 3); return true;
    // src/unknown/C0/C05F33.asm:21 TYA
    case 0xC05F4C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05F33.asm:22 ASL
    case 0xC05F4D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05F33.asm:23 STA @VIRTUAL02
    case 0xC05F4E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05F33.asm:24 LDX @VIRTUAL02
    case 0xC05F50: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05F33.asm:25 LDA @LOCAL01
    case 0xC05F52: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C05F33.asm:26 SEC
    case 0xC05F54: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C05F33.asm:27 SBC f:UNKNOWN_C42A1F,X
    case 0xC05F55: cpu.execute_instruction<0xFF>(0xC42A1F, 4); return true;
    // src/unknown/C0/C05F33.asm:28 STA CHECKED_COLLISION_LEFT_X
    case 0xC05F59: cpu.execute_instruction<0x8D>(0x005DAC, 3); return true;
    // src/unknown/C0/C05F33.asm:29 LDX @LOCAL02
    case 0xC05F5C: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C05F33.asm:30 TXA
    case 0xC05F5E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05F33.asm:31 LDX @VIRTUAL02
    case 0xC05F5F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05F33.asm:32 SEC
    case 0xC05F61: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C05F33.asm:33 SBC f:UNKNOWN_C42A41,X
    case 0xC05F62: cpu.execute_instruction<0xFF>(0xC42A41, 4); return true;
    // src/unknown/C0/C05F33.asm:34 LDX @VIRTUAL02
    case 0xC05F66: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05F33.asm:35 CLC
    case 0xC05F68: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05F33.asm:36 ADC f:UNKNOWN_C42AEB,X
    case 0xC05F69: cpu.execute_instruction<0x7F>(0xC42AEB, 4); return true;
    // src/unknown/C0/C05F33.asm:37 STA CHECKED_COLLISION_TOP_Y
    case 0xC05F6D: cpu.execute_instruction<0x8D>(0x005DAE, 3); return true;
    // src/unknown/C0/C05F33.asm:38 TYX
    case 0xC05F70: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C05F33.asm:39 JSR UNKNOWN_C05639
    case 0xC05F71: cpu.execute_instruction<0x20>(0x005639, 3); return true;
    // src/unknown/C0/C05F33.asm:40 LDY @LOCAL00
    case 0xC05F74: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C05F33.asm:41 TYX
    case 0xC05F76: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C05F33.asm:42 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05F77: cpu.execute_instruction<0xAD>(0x005DAE, 3); return true;
    // src/unknown/C0/C05F33.asm:43 JSR UNKNOWN_C056D0
    case 0xC05F7A: cpu.execute_instruction<0x20>(0x0056D0, 3); return true;
    // src/unknown/C0/C05F33.asm:44 LDA TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05F7D: cpu.execute_instruction<0xAD>(0x005DA4, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05F33.asm:45 END_C_FUNCTION
    case 0xC05F80: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C05F33.asm:45 END_C_FUNCTION
    case 0xC05F81: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05F82.asm (unresolved).
bool execute_unresolved_c0_c05f82_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05F82.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC05F82: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05F82.asm:11 END_STACK_VARS
    case 0xC05F84: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C05F82.asm:11 END_STACK_VARS
    case 0xC05F85: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05F82.asm:11 END_STACK_VARS
    case 0xC05F86: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05F82.asm:11 END_STACK_VARS
    case 0xC05F87: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05F82.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC05F87.
    case 0xC05F89: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05F82.asm:11 END_STACK_VARS
    case 0xC05F8A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C05F82.asm:11 END_STACK_VARS
    case 0xC05F8B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:12 STX @LOCAL02
    case 0xC05F8C: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C05F82.asm:12 STX @LOCAL02
    // Overlapping static entry reached from 0xC05F89.
    case 0xC05F8D: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/unknown/C0/C05F82.asm:13 STA @LOCAL01
    case 0xC05F8E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C05F82.asm:13 STA @LOCAL01
    // Overlapping static entry reached from 0xC05F8D.
    case 0xC05F8F: cpu.execute_instruction<0x10>(0x00009C, 2); return true;
    // src/unknown/C0/C05F82.asm:14 STZ TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05F90: cpu.execute_instruction<0x9C>(0x005DA4, 3); return true;
    // src/unknown/C0/C05F82.asm:14 STZ TEMP_ENTITY_SURFACE_FLAGS
    // Overlapping static entry reached from 0xC05F8F.
    case 0xC05F91: cpu.execute_instruction<0xA4>(0x00005D, 2); return true;
    // src/unknown/C0/C05F82.asm:15 TYA
    case 0xC05F93: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:16 ASL
    case 0xC05F94: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:17 TAX
    case 0xC05F95: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:18 LDY ENTITY_SIZES,X
    case 0xC05F96: cpu.execute_instruction<0xBC>(0x002B6E, 3); return true;
    // src/unknown/C0/C05F82.asm:19 STY @LOCAL00
    case 0xC05F99: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C05F82.asm:20 TYA
    case 0xC05F9B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:21 ASL
    case 0xC05F9C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:22 STA @VIRTUAL02
    case 0xC05F9D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05F82.asm:23 LDX @LOCAL02
    case 0xC05F9F: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C05F82.asm:24 TXA
    case 0xC05FA1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:25 LDX @VIRTUAL02
    case 0xC05FA2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05F82.asm:26 SEC
    case 0xC05FA4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:27 SBC f:UNKNOWN_C42A41,X
    case 0xC05FA5: cpu.execute_instruction<0xFF>(0xC42A41, 4); return true;
    // src/unknown/C0/C05F82.asm:28 LDX @VIRTUAL02
    case 0xC05FA9: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05F82.asm:29 CLC
    case 0xC05FAB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:30 ADC f:UNKNOWN_C42AEB,X
    case 0xC05FAC: cpu.execute_instruction<0x7F>(0xC42AEB, 4); return true;
    // src/unknown/C0/C05F82.asm:31 STA CHECKED_COLLISION_TOP_Y
    case 0xC05FB0: cpu.execute_instruction<0x8D>(0x005DAE, 3); return true;
    // src/unknown/C0/C05F82.asm:32 LDX @VIRTUAL02
    case 0xC05FB3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05F82.asm:33 LDA @LOCAL01
    case 0xC05FB5: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C05F82.asm:34 SEC
    case 0xC05FB7: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:35 SBC f:UNKNOWN_C42A1F,X
    case 0xC05FB8: cpu.execute_instruction<0xFF>(0xC42A1F, 4); return true;
    // src/unknown/C0/C05F82.asm:36 STA CHECKED_COLLISION_LEFT_X
    case 0xC05FBC: cpu.execute_instruction<0x8D>(0x005DAC, 3); return true;
    // src/unknown/C0/C05F82.asm:37 TYX
    case 0xC05FBF: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:38 JSR UNKNOWN_C05503
    case 0xC05FC0: cpu.execute_instruction<0x20>(0x005503, 3); return true;
    // src/unknown/C0/C05F82.asm:39 LDY @LOCAL00
    case 0xC05FC3: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C05F82.asm:40 TYX
    case 0xC05FC5: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:41 LDA CHECKED_COLLISION_LEFT_X
    case 0xC05FC6: cpu.execute_instruction<0xAD>(0x005DAC, 3); return true;
    // src/unknown/C0/C05F82.asm:42 JSR UNKNOWN_C0559C
    case 0xC05FC9: cpu.execute_instruction<0x20>(0x00559C, 3); return true;
    // src/unknown/C0/C05F82.asm:43 LDA TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05FCC: cpu.execute_instruction<0xAD>(0x005DA4, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05F82.asm:44 END_C_FUNCTION
    case 0xC05FCF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C05F82.asm:44 END_C_FUNCTION
    case 0xC05FD0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05FD1.asm (unresolved).
bool execute_unresolved_c0_c05fd1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05FD1.asm:3 BEGIN_C_FUNCTION
    case 0xC05FD1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05FD1.asm:7 END_STACK_VARS
    case 0xC05FD3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C05FD1.asm:7 END_STACK_VARS
    case 0xC05FD4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05FD1.asm:7 END_STACK_VARS
    case 0xC05FD5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05FD1.asm:7 END_STACK_VARS
    case 0xC05FD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05FD1.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC05FD6.
    case 0xC05FD8: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05FD1.asm:7 END_STACK_VARS
    case 0xC05FD9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C05FD1.asm:7 END_STACK_VARS
    case 0xC05FDA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:8 STA @LOCAL00
    case 0xC05FDB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05FD1.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC05FD8.
    case 0xC05FDC: cpu.execute_instruction<0x0E>(0x00A49C, 3); return true;
    // src/unknown/C0/C05FD1.asm:9 STZ TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05FDD: cpu.execute_instruction<0x9C>(0x005DA4, 3); return true;
    // src/unknown/C0/C05FD1.asm:9 STZ TEMP_ENTITY_SURFACE_FLAGS
    // Overlapping static entry reached from 0xC05FDC.
    case 0xC05FDF: cpu.execute_instruction<0x5D>(0x001A8A, 3); return true;
    // src/unknown/C0/C05FD1.asm:10 TXA
    case 0xC05FE0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:11 INC
    case 0xC05FE1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:12 INC
    case 0xC05FE2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:13 INC
    case 0xC05FE3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:14 INC
    case 0xC05FE4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:15 LSR
    case 0xC05FE5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:16 LSR
    case 0xC05FE6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:17 LSR
    case 0xC05FE7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:18 TAX
    case 0xC05FE8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:19 LDA @LOCAL00
    case 0xC05FE9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05FD1.asm:20 LSR
    case 0xC05FEB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:21 LSR
    case 0xC05FEC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:22 LSR
    case 0xC05FED: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:23 JSR UNKNOWN_C054C9
    case 0xC05FEE: cpu.execute_instruction<0x20>(0x0054C9, 3); return true;
    // src/unknown/C0/C05FD1.asm:24 STA TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05FF1: cpu.execute_instruction<0x8D>(0x005DA4, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05FD1.asm:25 END_C_FUNCTION
    case 0xC05FF4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C05FD1.asm:25 END_C_FUNCTION
    case 0xC05FF5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0613C.asm (unresolved).
bool execute_unresolved_c0_c0613c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0613C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0613C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0613C.asm:18 END_STACK_VARS
    case 0xC0613E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0613C.asm:18 END_STACK_VARS
    case 0xC0613F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0613C.asm:18 END_STACK_VARS
    case 0xC06140: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0613C.asm:18 END_STACK_VARS
    case 0xC06141: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0613C.asm:18 END_STACK_VARS
    // Overlapping static entry reached from 0xC06141.
    case 0xC06143: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0613C.asm:18 END_STACK_VARS
    case 0xC06144: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0613C.asm:18 END_STACK_VARS
    case 0xC06145: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:19 STY @LOCAL08
    case 0xC06146: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/unknown/C0/C0613C.asm:19 STY @LOCAL08
    // Overlapping static entry reached from 0xC06143.
    case 0xC06147: cpu.execute_instruction<0x1E>(0x000286, 3); return true;
    // src/unknown/C0/C0613C.asm:20 STX @VIRTUAL02
    case 0xC06148: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:21 STX @LOCAL07
    case 0xC0614A: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C0613C.asm:22 TAY
    case 0xC0614C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:23 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC0614D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0613C.asm:23 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC0614D.
    case 0xC0614F: cpu.execute_instruction<0xFF>(0xA51A85, 4); return true;
    // src/unknown/C0/C0613C.asm:24 STA @LOCAL06
    case 0xC06150: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0613C.asm:25 LDA @LOCAL08
    case 0xC06152: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C0613C.asm:25 LDA @LOCAL08
    // Overlapping static entry reached from 0xC0614F.
    case 0xC06153: cpu.execute_instruction<0x1E>(0x00AA0A, 3); return true;
    // src/unknown/C0/C0613C.asm:26 ASL
    case 0xC06154: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:27 TAX
    case 0xC06155: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:28 LDA ENTITY_HITBOX_ENABLED,X
    case 0xC06156: cpu.execute_instruction<0xBD>(0x00332A, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0613C.asm:29 BEQL @UNKNOWN13
    case 0xC06159: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0613C.asm:29 BEQL @UNKNOWN13
    case 0xC0615B: cpu.execute_instruction<0x4C>(0x00625A, 3); return true;
    // src/unknown/C0/C0613C.asm:30 LDA ENTITY_DIRECTIONS,X
    case 0xC0615E: cpu.execute_instruction<0xBD>(0x002AF6, 3); return true;
    // src/unknown/C0/C0613C.asm:31 CMP #DIRECTION::RIGHT
    case 0xC06161: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0613C.asm:31 CMP #DIRECTION::RIGHT
    // Overlapping static entry reached from 0xC06161.
    case 0xC06163: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0613C.asm:32 BEQ @UNKNOWN1
    case 0xC06164: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0613C.asm:33 CMP #DIRECTION::LEFT
    case 0xC06166: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C0613C.asm:33 CMP #DIRECTION::LEFT
    // Overlapping static entry reached from 0xC06166.
    case 0xC06168: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0613C.asm:34 BNE @UNKNOWN2
    case 0xC06169: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C0/C0613C.asm:36 LDA @LOCAL08
    case 0xC0616B: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C0613C.asm:37 ASL
    case 0xC0616D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:38 TAX
    case 0xC0616E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:39 LDA ENTITY_HITBOX_LEFT_RIGHT_WIDTHS,X
    case 0xC0616F: cpu.execute_instruction<0xBD>(0x0033DE, 3); return true;
    // src/unknown/C0/C0613C.asm:40 STA @LOCAL05
    case 0xC06172: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0613C.asm:41 LDA ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS,X
    case 0xC06174: cpu.execute_instruction<0xBD>(0x001A4A, 3); return true;
    // src/unknown/C0/C0613C.asm:42 STA @VIRTUAL04
    case 0xC06177: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0613C.asm:43 BRA @UNKNOWN3
    case 0xC06179: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C0/C0613C.asm:45 LDA ENTITY_HITBOX_UP_DOWN_WIDTHS,X
    case 0xC0617B: cpu.execute_instruction<0xBD>(0x003366, 3); return true;
    // src/unknown/C0/C0613C.asm:46 STA @LOCAL05
    case 0xC0617E: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0613C.asm:47 LDA ENTITY_HITBOX_UP_DOWN_HEIGHTS,X
    case 0xC06180: cpu.execute_instruction<0xBD>(0x0033A2, 3); return true;
    // src/unknown/C0/C0613C.asm:48 STA @VIRTUAL04
    case 0xC06183: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0613C.asm:50 LDA @LOCAL05
    case 0xC06185: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0613C.asm:51 STA @VIRTUAL02
    case 0xC06187: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:52 TYA
    case 0xC06189: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:53 SEC
    case 0xC0618A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:54 SBC @VIRTUAL02
    case 0xC0618B: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:55 STA @LOCAL04
    case 0xC0618D: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0613C.asm:56 LDA @LOCAL05
    case 0xC0618F: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0613C.asm:57 ASL
    case 0xC06191: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:58 STA @LOCAL03
    case 0xC06192: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0613C.asm:59 LDA @LOCAL07
    case 0xC06194: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0613C.asm:60 STA @VIRTUAL02
    case 0xC06196: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:61 SEC
    case 0xC06198: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:62 SBC @VIRTUAL04
    case 0xC06199: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C0/C0613C.asm:63 STA @LOCAL07
    case 0xC0619B: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C0613C.asm:64 LDA #0
    case 0xC0619D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0613C.asm:64 LDA #0
    // Overlapping static entry reached from 0xC0619D.
    case 0xC0619F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0613C.asm:65 STA @VIRTUAL02
    case 0xC061A0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:66 STA @LOCAL02
    case 0xC061A2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0613C.asm:67 JMP @UNKNOWN12
    case 0xC061A4: cpu.execute_instruction<0x4C>(0x006250, 3); return true;
    // src/unknown/C0/C0613C.asm:69 LDA @VIRTUAL02
    case 0xC061A7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:70 CMP @LOCAL08
    case 0xC061A9: cpu.execute_instruction<0xC5>(0x00001E, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0613C.asm:71 BEQL @UNKNOWN11
    case 0xC061AB: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0613C.asm:71 BEQL @UNKNOWN11
    case 0xC061AD: cpu.execute_instruction<0x4C>(0x006246, 3); return true;
    // src/unknown/C0/C0613C.asm:72 LDA @VIRTUAL02
    case 0xC061B0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:73 CMP #23
    case 0xC061B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/unknown/C0/C0613C.asm:73 CMP #23
    // Overlapping static entry reached from 0xC061B2.
    case 0xC061B4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0613C.asm:74 BEQL @UNKNOWN11
    case 0xC061B5: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0613C.asm:74 BEQL @UNKNOWN11
    case 0xC061B7: cpu.execute_instruction<0x4C>(0x006246, 3); return true;
    // src/unknown/C0/C0613C.asm:75 LDA @VIRTUAL02
    case 0xC061BA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:76 ASL
    case 0xC061BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:77 TAX
    case 0xC061BD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:78 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC061BE: cpu.execute_instruction<0xBD>(0x000A62, 3); return true;
    // src/unknown/C0/C0613C.asm:78 LDA ENTITY_SCRIPT_TABLE,X
    // Overlapping static entry reached from 0xC061CE.
    case 0xC061C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:79 CMP #.LOWORD(-1)
    case 0xC061C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0613C.asm:79 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC061C1.
    case 0xC061C3: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0613C.asm:80 BEQL @UNKNOWN11
    case 0xC061C4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0613C.asm:80 BEQL @UNKNOWN11
    case 0xC061C6: cpu.execute_instruction<0x4C>(0x006246, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0613C.asm:80 BEQL @UNKNOWN11
    // Overlapping static entry reached from 0xC061C3.
    case 0xC061C7: cpu.execute_instruction<0x46>(0x000062, 2); return true;
    // src/unknown/C0/C0613C.asm:81 LDA ENTITY_COLLIDED_OBJECTS,X
    case 0xC061C9: cpu.execute_instruction<0xBD>(0x00289E, 3); return true;
    // src/unknown/C0/C0613C.asm:82 CMP #ENTITY_COLLISION_DISABLED
    case 0xC061CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C0613C.asm:82 CMP #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC061CC.
    case 0xC061CE: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C0613C.asm:83 BEQ @UNKNOWN11
    case 0xC061CF: cpu.execute_instruction<0xF0>(0x000075, 2); return true;
    // src/unknown/C0/C0613C.asm:84 LDA ENTITY_HITBOX_ENABLED,X
    case 0xC061D1: cpu.execute_instruction<0xBD>(0x00332A, 3); return true;
    // src/unknown/C0/C0613C.asm:85 BEQ @UNKNOWN11
    case 0xC061D4: cpu.execute_instruction<0xF0>(0x000070, 2); return true;
    // src/unknown/C0/C0613C.asm:86 LDA ENTITY_DIRECTIONS,X
    case 0xC061D6: cpu.execute_instruction<0xBD>(0x002AF6, 3); return true;
    // src/unknown/C0/C0613C.asm:87 CMP #DIRECTION::RIGHT
    case 0xC061D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0613C.asm:87 CMP #DIRECTION::RIGHT
    // Overlapping static entry reached from 0xC061D9.
    case 0xC061DB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0613C.asm:88 BEQ @UNKNOWN8
    case 0xC061DC: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0613C.asm:89 CMP #DIRECTION::LEFT
    case 0xC061DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C0613C.asm:89 CMP #DIRECTION::LEFT
    // Overlapping static entry reached from 0xC061DE.
    case 0xC061E0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0613C.asm:90 BNE @UNKNOWN9
    case 0xC061E1: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/unknown/C0/C0613C.asm:92 LDA @VIRTUAL02
    case 0xC061E3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:93 ASL
    case 0xC061E5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:94 TAX
    case 0xC061E6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:95 LDY ENTITY_HITBOX_LEFT_RIGHT_WIDTHS,X
    case 0xC061E7: cpu.execute_instruction<0xBC>(0x0033DE, 3); return true;
    // src/unknown/C0/C0613C.asm:96 LDA ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS,X
    case 0xC061EA: cpu.execute_instruction<0xBD>(0x001A4A, 3); return true;
    // src/unknown/C0/C0613C.asm:97 STA @LOCAL01
    case 0xC061ED: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0613C.asm:98 BRA @UNKNOWN10
    case 0xC061EF: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C0/C0613C.asm:100 LDY ENTITY_HITBOX_UP_DOWN_WIDTHS,X
    case 0xC061F1: cpu.execute_instruction<0xBC>(0x003366, 3); return true;
    // src/unknown/C0/C0613C.asm:101 LDA ENTITY_HITBOX_UP_DOWN_HEIGHTS,X
    case 0xC061F4: cpu.execute_instruction<0xBD>(0x0033A2, 3); return true;
    // src/unknown/C0/C0613C.asm:102 STA @LOCAL01
    case 0xC061F7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0613C.asm:104 LDA @VIRTUAL02
    case 0xC061F9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:105 ASL
    case 0xC061FB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:106 TAX
    case 0xC061FC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:107 LDA @LOCAL01
    case 0xC061FD: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0613C.asm:108 STA @VIRTUAL02
    case 0xC061FF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:109 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC06201: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0613C.asm:110 SEC
    case 0xC06204: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:111 SBC @VIRTUAL02
    case 0xC06205: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:112 STA @LOCAL00
    case 0xC06207: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0613C.asm:113 SEC
    case 0xC06209: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:114 SBC @VIRTUAL04
    case 0xC0620A: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C0/C0613C.asm:115 CMP @LOCAL07
    case 0xC0620C: cpu.execute_instruction<0xC5>(0x00001C, 2); return true;
    // src/unknown/C0/C0613C.asm:116 BCS @UNKNOWN11
    case 0xC0620E: cpu.execute_instruction<0xB0>(0x000036, 2); return true;
    // src/unknown/C0/C0613C.asm:117 LDA @LOCAL01
    case 0xC06210: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0613C.asm:118 CLC
    case 0xC06212: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:119 ADC @LOCAL00
    case 0xC06213: cpu.execute_instruction<0x65>(0x00000E, 2); return true;
    // src/unknown/C0/C0613C.asm:120 CMP @LOCAL07
    case 0xC06215: cpu.execute_instruction<0xC5>(0x00001C, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0613C.asm:121 BLTEQ @UNKNOWN11
    case 0xC06217: cpu.execute_instruction<0x90>(0x00002D, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0613C.asm:121 BLTEQ @UNKNOWN11
    case 0xC06219: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/unknown/C0/C0613C.asm:122 STY @VIRTUAL02
    case 0xC0621B: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:123 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0621D: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0613C.asm:124 SEC
    case 0xC06220: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:125 SBC @VIRTUAL02
    case 0xC06221: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:126 STA @LOCAL00
    case 0xC06223: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0613C.asm:127 TYA
    case 0xC06225: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:128 ASL
    case 0xC06226: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:129 TAX
    case 0xC06227: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:130 LDA @LOCAL00
    case 0xC06228: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0613C.asm:131 SEC
    case 0xC0622A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:132 SBC @LOCAL03
    case 0xC0622B: cpu.execute_instruction<0xE5>(0x000014, 2); return true;
    // src/unknown/C0/C0613C.asm:133 CMP @LOCAL04
    case 0xC0622D: cpu.execute_instruction<0xC5>(0x000016, 2); return true;
    // src/unknown/C0/C0613C.asm:134 BCS @UNKNOWN11
    case 0xC0622F: cpu.execute_instruction<0xB0>(0x000015, 2); return true;
    // src/unknown/C0/C0613C.asm:135 STX @VIRTUAL02
    case 0xC06231: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:136 LDA @LOCAL00
    case 0xC06233: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0613C.asm:137 CLC
    case 0xC06235: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:138 ADC @VIRTUAL02
    case 0xC06236: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:139 CMP @LOCAL04
    case 0xC06238: cpu.execute_instruction<0xC5>(0x000016, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0613C.asm:140 BLTEQ @UNKNOWN11
    case 0xC0623A: cpu.execute_instruction<0x90>(0x00000A, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0613C.asm:140 BLTEQ @UNKNOWN11
    case 0xC0623C: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C0613C.asm:141 LDA @LOCAL02
    case 0xC0623E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0613C.asm:142 STA @VIRTUAL02
    case 0xC06240: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:143 STA @LOCAL06
    case 0xC06242: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0613C.asm:144 BRA @UNKNOWN13
    case 0xC06244: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C0/C0613C.asm:146 LDA @LOCAL02
    case 0xC06246: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0613C.asm:147 STA @VIRTUAL02
    case 0xC06248: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:148 INC @VIRTUAL02
    case 0xC0624A: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:149 LDA @VIRTUAL02
    case 0xC0624C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:150 STA @LOCAL02
    case 0xC0624E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0613C.asm:152 LDA @VIRTUAL02
    case 0xC06250: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:153 CMP #30
    case 0xC06252: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C0/C0613C.asm:153 CMP #30
    // Overlapping static entry reached from 0xC06252.
    case 0xC06254: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0613C.asm:154 BNEL @UNKNOWN4
    case 0xC06255: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0613C.asm:154 BNEL @UNKNOWN4
    case 0xC06257: cpu.execute_instruction<0x4C>(0x0061A7, 3); return true;
    // src/unknown/C0/C0613C.asm:156 LDA @LOCAL08
    case 0xC0625A: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C0613C.asm:157 ASL
    case 0xC0625C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:158 TAX
    case 0xC0625D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:159 LDA @LOCAL06
    case 0xC0625E: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0613C.asm:160 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC06260: cpu.execute_instruction<0x9D>(0x00289E, 3); return true;
    // src/unknown/C0/C0613C.asm:161 LDA @LOCAL06
    case 0xC06263: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0613C.asm:162 END_C_FUNCTION
    case 0xC06265: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0613C.asm:162 END_C_FUNCTION
    case 0xC06266: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06267.asm (unresolved).
bool execute_unresolved_c0_c06267_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C06267.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC06267: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C06267.asm:18 END_STACK_VARS
    case 0xC06269: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C06267.asm:18 END_STACK_VARS
    case 0xC0626A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C06267.asm:18 END_STACK_VARS
    case 0xC0626B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06267.asm:18 END_STACK_VARS
    case 0xC0626C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06267.asm:18 END_STACK_VARS
    // Overlapping static entry reached from 0xC0626C.
    case 0xC0626E: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C06267.asm:18 END_STACK_VARS
    case 0xC0626F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C06267.asm:18 END_STACK_VARS
    case 0xC06270: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:19 STY @LOCAL08
    case 0xC06271: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/unknown/C0/C06267.asm:19 STY @LOCAL08
    // Overlapping static entry reached from 0xC0626E.
    case 0xC06272: cpu.execute_instruction<0x1E>(0x00AA9B, 3); return true;
    // src/unknown/C0/C06267.asm:20 TXY
    case 0xC06273: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:21 TAX
    case 0xC06274: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:22 STX @LOCAL07
    case 0xC06275: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C06267.asm:23 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC06277: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C06267.asm:23 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC06277.
    case 0xC06279: cpu.execute_instruction<0xFF>(0xA51A85, 4); return true;
    // src/unknown/C0/C06267.asm:24 STA @LOCAL06
    case 0xC0627A: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C06267.asm:25 LDA @LOCAL08
    case 0xC0627C: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C06267.asm:25 LDA @LOCAL08
    // Overlapping static entry reached from 0xC06279.
    case 0xC0627D: cpu.execute_instruction<0x1E>(0x00850A, 3); return true;
    // src/unknown/C0/C06267.asm:26 ASL
    case 0xC0627E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:27 STA @VIRTUAL04
    case 0xC0627F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C06267.asm:27 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC0627D.
    case 0xC06280: cpu.execute_instruction<0x04>(0x0000A6, 2); return true;
    // src/unknown/C0/C06267.asm:28 LDX @VIRTUAL04
    case 0xC06281: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C06267.asm:28 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC06280.
    case 0xC06282: cpu.execute_instruction<0x04>(0x0000BD, 2); return true;
    // src/unknown/C0/C06267.asm:29 LDA ENTITY_HITBOX_ENABLED,X
    case 0xC06283: cpu.execute_instruction<0xBD>(0x00332A, 3); return true;
    // src/unknown/C0/C06267.asm:29 LDA ENTITY_HITBOX_ENABLED,X
    // Overlapping static entry reached from 0xC06282.
    case 0xC06284: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:29 LDA ENTITY_HITBOX_ENABLED,X
    // Overlapping static entry reached from 0xC06284.
    case 0xC06285: cpu.execute_instruction<0x33>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C06267.asm:30 BEQL @UNKNOWN26
    case 0xC06286: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C06267.asm:30 BEQL @UNKNOWN26
    // Overlapping static entry reached from 0xC06285.
    case 0xC06287: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:30 BEQL @UNKNOWN26
    case 0xC06288: cpu.execute_instruction<0x4C>(0x00646B, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:30 BEQL @UNKNOWN26
    // Overlapping static entry reached from 0xC06287.
    case 0xC06289: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:31 LDX @VIRTUAL04
    case 0xC0628B: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C06267.asm:32 LDA ENTITY_DIRECTIONS,X
    case 0xC0628D: cpu.execute_instruction<0xBD>(0x002AF6, 3); return true;
    // src/unknown/C0/C06267.asm:33 CMP #DIRECTION::RIGHT
    case 0xC06290: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C06267.asm:33 CMP #DIRECTION::RIGHT
    // Overlapping static entry reached from 0xC06290.
    case 0xC06292: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C06267.asm:34 BEQ @UNKNOWN1
    case 0xC06293: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C06267.asm:35 CMP #DIRECTION::LEFT
    case 0xC06295: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C06267.asm:35 CMP #DIRECTION::LEFT
    // Overlapping static entry reached from 0xC06295.
    case 0xC06297: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C06267.asm:36 BNE @UNKNOWN2
    case 0xC06298: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/unknown/C0/C06267.asm:38 LDA @LOCAL08
    case 0xC0629A: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C06267.asm:39 ASL
    case 0xC0629C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:40 STA @LOCAL05
    case 0xC0629D: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C06267.asm:41 TAX
    case 0xC0629F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:42 LDA ENTITY_HITBOX_LEFT_RIGHT_WIDTHS,X
    case 0xC062A0: cpu.execute_instruction<0xBD>(0x0033DE, 3); return true;
    // src/unknown/C0/C06267.asm:43 STA @VIRTUAL02
    case 0xC062A3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:44 LDA @LOCAL05
    case 0xC062A5: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C06267.asm:45 TAX
    case 0xC062A7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:46 LDA ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS,X
    case 0xC062A8: cpu.execute_instruction<0xBD>(0x001A4A, 3); return true;
    // src/unknown/C0/C06267.asm:47 STA @LOCAL04
    case 0xC062AB: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C06267.asm:48 BRA @UNKNOWN3
    case 0xC062AD: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C0/C06267.asm:50 LDX @VIRTUAL04
    case 0xC062AF: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C06267.asm:51 LDA ENTITY_HITBOX_UP_DOWN_WIDTHS,X
    case 0xC062B1: cpu.execute_instruction<0xBD>(0x003366, 3); return true;
    // src/unknown/C0/C06267.asm:52 STA @VIRTUAL02
    case 0xC062B4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:53 LDX @VIRTUAL04
    case 0xC062B6: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C06267.asm:54 LDA ENTITY_HITBOX_UP_DOWN_HEIGHTS,X
    case 0xC062B8: cpu.execute_instruction<0xBD>(0x0033A2, 3); return true;
    // src/unknown/C0/C06267.asm:55 STA @LOCAL04
    case 0xC062BB: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C06267.asm:57 LDX @LOCAL07
    case 0xC062BD: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C0/C06267.asm:58 TXA
    case 0xC062BF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:59 SEC
    case 0xC062C0: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:60 SBC @VIRTUAL02
    case 0xC062C1: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:61 STA @VIRTUAL04
    case 0xC062C3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C06267.asm:62 LDA @VIRTUAL02
    case 0xC062C5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:63 ASL
    case 0xC062C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:64 STA @LOCAL05
    case 0xC062C8: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C06267.asm:65 TYA
    case 0xC062CA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:66 SEC
    case 0xC062CB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:67 SBC @LOCAL04
    case 0xC062CC: cpu.execute_instruction<0xE5>(0x000016, 2); return true;
    // src/unknown/C0/C06267.asm:68 STA @VIRTUAL02
    case 0xC062CE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:69 STA @LOCAL03
    case 0xC062D0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C06267.asm:70 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC062D2: cpu.execute_instruction<0xAD>(0x005D58, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C06267.asm:71 BNEL @UNKNOWN14
    case 0xC062D5: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:71 BNEL @UNKNOWN14
    case 0xC062D7: cpu.execute_instruction<0x4C>(0x006399, 3); return true;
    // src/unknown/C0/C06267.asm:72 LDX #24
    case 0xC062DA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000018, 2); else cpu.execute_instruction<0xA2>(0x000018, 3); return true;
    // src/unknown/C0/C06267.asm:72 LDX #24
    // Overlapping static entry reached from 0xC062DA.
    case 0xC062DC: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C06267.asm:73 JMP @UNKNOWN13
    case 0xC062DD: cpu.execute_instruction<0x4C>(0x006391, 3); return true;
    // src/unknown/C0/C06267.asm:75 TXA
    case 0xC062E0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:76 ASL
    case 0xC062E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:77 TAY
    case 0xC062E2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:78 LDA ENTITY_SCRIPT_TABLE,Y
    case 0xC062E3: cpu.execute_instruction<0xB9>(0x000A62, 3); return true;
    // src/unknown/C0/C06267.asm:79 CMP #.LOWORD(-1)
    case 0xC062E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C06267.asm:79 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC062E6.
    case 0xC062E8: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C06267.asm:80 BEQL @UNKNOWN12
    case 0xC062E9: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:80 BEQL @UNKNOWN12
    case 0xC062EB: cpu.execute_instruction<0x4C>(0x006390, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:80 BEQL @UNKNOWN12
    // Overlapping static entry reached from 0xC062E8.
    case 0xC062EC: cpu.execute_instruction<0x90>(0x000063, 2); return true;
    // src/unknown/C0/C06267.asm:81 LDA ENTITY_COLLIDED_OBJECTS,Y
    case 0xC062EE: cpu.execute_instruction<0xB9>(0x00289E, 3); return true;
    // src/unknown/C0/C06267.asm:82 CMP #ENTITY_COLLISION_DISABLED
    case 0xC062F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C06267.asm:82 CMP #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC062F1.
    case 0xC062F3: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C06267.asm:83 BEQL @UNKNOWN12
    case 0xC062F4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:83 BEQL @UNKNOWN12
    case 0xC062F6: cpu.execute_instruction<0x4C>(0x006390, 3); return true;
    // src/unknown/C0/C06267.asm:84 LDA ENTITY_HITBOX_ENABLED,Y
    case 0xC062F9: cpu.execute_instruction<0xB9>(0x00332A, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C06267.asm:85 BEQL @UNKNOWN12
    case 0xC062FC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:85 BEQL @UNKNOWN12
    case 0xC062FE: cpu.execute_instruction<0x4C>(0x006390, 3); return true;
    // src/unknown/C0/C06267.asm:86 LDA ENTITY_DIRECTIONS,Y
    case 0xC06301: cpu.execute_instruction<0xB9>(0x002AF6, 3); return true;
    // src/unknown/C0/C06267.asm:87 CMP #DIRECTION::RIGHT
    case 0xC06304: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C06267.asm:87 CMP #DIRECTION::RIGHT
    // Overlapping static entry reached from 0xC06304.
    case 0xC06306: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C06267.asm:88 BEQ @UNKNOWN9
    case 0xC06307: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C06267.asm:89 CMP #DIRECTION::LEFT
    case 0xC06309: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C06267.asm:89 CMP #DIRECTION::LEFT
    // Overlapping static entry reached from 0xC06309.
    case 0xC0630B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C06267.asm:90 BNE @UNKNOWN10
    case 0xC0630C: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C0/C06267.asm:92 TXA
    case 0xC0630E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:93 ASL
    case 0xC0630F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:94 TAY
    case 0xC06310: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:95 LDA ENTITY_HITBOX_LEFT_RIGHT_WIDTHS,Y
    case 0xC06311: cpu.execute_instruction<0xB9>(0x0033DE, 3); return true;
    // src/unknown/C0/C06267.asm:96 STA @LOCAL02
    case 0xC06314: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06267.asm:97 LDA ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS,Y
    case 0xC06316: cpu.execute_instruction<0xB9>(0x001A4A, 3); return true;
    // src/unknown/C0/C06267.asm:98 STA @LOCAL01
    case 0xC06319: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C06267.asm:99 BRA @UNKNOWN11
    case 0xC0631B: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C0/C06267.asm:101 LDA ENTITY_HITBOX_UP_DOWN_WIDTHS,Y
    case 0xC0631D: cpu.execute_instruction<0xB9>(0x003366, 3); return true;
    // src/unknown/C0/C06267.asm:102 STA @LOCAL02
    case 0xC06320: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06267.asm:103 LDA ENTITY_HITBOX_UP_DOWN_HEIGHTS,Y
    case 0xC06322: cpu.execute_instruction<0xB9>(0x0033A2, 3); return true;
    // src/unknown/C0/C06267.asm:104 STA @LOCAL01
    case 0xC06325: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C06267.asm:106 TXA
    case 0xC06327: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:107 ASL
    case 0xC06328: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:108 STA @LOCAL00
    case 0xC06329: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C06267.asm:109 LDY #.LOWORD(ENTITY_ABS_Y_TABLE)
    case 0xC0632B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000CA, 2); else cpu.execute_instruction<0xA0>(0x000BCA, 3); return true;
    // src/unknown/C0/C06267.asm:109 LDY #.LOWORD(ENTITY_ABS_Y_TABLE)
    // Overlapping static entry reached from 0xC0632B.
    case 0xC0632D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:110 LDA (@LOCAL00),Y
    case 0xC0632E: cpu.execute_instruction<0xB1>(0x00000E, 2); return true;
    // src/unknown/C0/C06267.asm:111 SEC
    case 0xC06330: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:112 SBC @LOCAL01
    case 0xC06331: cpu.execute_instruction<0xE5>(0x000010, 2); return true;
    // src/unknown/C0/C06267.asm:113 TAY
    case 0xC06333: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:114 SEC
    case 0xC06334: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:115 SBC @LOCAL04
    case 0xC06335: cpu.execute_instruction<0xE5>(0x000016, 2); return true;
    // src/unknown/C0/C06267.asm:116 PHA
    case 0xC06337: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:117 LDA @LOCAL03
    case 0xC06338: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C06267.asm:118 STA @VIRTUAL02
    case 0xC0633A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:119 STA TEMP_REGISTER
    case 0xC0633C: cpu.execute_instruction<0x8D>(0x0000C0, 3); return true;
    // src/unknown/C0/C06267.asm:120 PLA
    case 0xC0633F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:121 STA @VIRTUAL02
    case 0xC06340: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:122 LDA TEMP_REGISTER
    case 0xC06342: cpu.execute_instruction<0xAD>(0x0000C0, 3); return true;
    // src/unknown/C0/C06267.asm:123 CMP @VIRTUAL02
    case 0xC06345: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C06267.asm:124 BLTEQ @UNKNOWN12
    case 0xC06347: cpu.execute_instruction<0x90>(0x000047, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C06267.asm:124 BLTEQ @UNKNOWN12
    case 0xC06349: cpu.execute_instruction<0xF0>(0x000045, 2); return true;
    // src/unknown/C0/C06267.asm:125 TYA
    case 0xC0634B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:126 CLC
    case 0xC0634C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:127 ADC @LOCAL01
    case 0xC0634D: cpu.execute_instruction<0x65>(0x000010, 2); return true;
    // src/unknown/C0/C06267.asm:128 PHA
    case 0xC0634F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:129 LDA @LOCAL03
    case 0xC06350: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C06267.asm:129 LDA @LOCAL03
    // Overlapping static entry reached from 0xC062EC.
    case 0xC06351: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/unknown/C0/C06267.asm:130 STA @VIRTUAL02
    case 0xC06352: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:130 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC06351.
    case 0xC06353: cpu.execute_instruction<0x02>(0x00007A, 2); return true;
    // src/unknown/C0/C06267.asm:131 PLY
    case 0xC06354: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:132 STY @VIRTUAL02
    case 0xC06355: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:133 CMP @VIRTUAL02
    case 0xC06357: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:134 BCS @UNKNOWN12
    case 0xC06359: cpu.execute_instruction<0xB0>(0x000035, 2); return true;
    // src/unknown/C0/C06267.asm:135 LDA @LOCAL02
    case 0xC0635B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06267.asm:136 STA @VIRTUAL02
    case 0xC0635D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:137 LDY #.LOWORD(ENTITY_ABS_X_TABLE)
    case 0xC0635F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00008E, 2); else cpu.execute_instruction<0xA0>(0x000B8E, 3); return true;
    // src/unknown/C0/C06267.asm:137 LDY #.LOWORD(ENTITY_ABS_X_TABLE)
    // Overlapping static entry reached from 0xC0635F.
    case 0xC06361: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:138 LDA (@LOCAL00),Y
    case 0xC06362: cpu.execute_instruction<0xB1>(0x00000E, 2); return true;
    // src/unknown/C0/C06267.asm:139 SEC
    case 0xC06364: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:140 SBC @VIRTUAL02
    case 0xC06365: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:141 TAY
    case 0xC06367: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:142 LDA @LOCAL02
    case 0xC06368: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06267.asm:143 ASL
    case 0xC0636A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:144 STA @LOCAL02
    case 0xC0636B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06267.asm:145 TYA
    case 0xC0636D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:146 SEC
    case 0xC0636E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:147 SBC @LOCAL05
    case 0xC0636F: cpu.execute_instruction<0xE5>(0x000018, 2); return true;
    // src/unknown/C0/C06267.asm:148 STA @VIRTUAL02
    case 0xC06371: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:149 LDA @VIRTUAL04
    case 0xC06373: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C06267.asm:150 CMP @VIRTUAL02
    case 0xC06375: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C06267.asm:151 BLTEQ @UNKNOWN12
    case 0xC06377: cpu.execute_instruction<0x90>(0x000017, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C06267.asm:151 BLTEQ @UNKNOWN12
    case 0xC06379: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C0/C06267.asm:152 LDA @LOCAL02
    case 0xC0637B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06267.asm:153 STA @VIRTUAL02
    case 0xC0637D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:154 TYA
    case 0xC0637F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:155 CLC
    case 0xC06380: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:156 ADC @VIRTUAL02
    case 0xC06381: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:157 STA @VIRTUAL02
    case 0xC06383: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:158 LDA @VIRTUAL04
    case 0xC06385: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C06267.asm:159 CMP @VIRTUAL02
    case 0xC06387: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:160 BCS @UNKNOWN12
    case 0xC06389: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C06267.asm:161 STX @LOCAL06
    case 0xC0638B: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C0/C06267.asm:162 JMP @UNKNOWN26
    case 0xC0638D: cpu.execute_instruction<0x4C>(0x00646B, 3); return true;
    // src/unknown/C0/C06267.asm:164 INX
    case 0xC06390: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:166 CPX #MAX_ENTITIES
    case 0xC06391: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00001E, 2); else cpu.execute_instruction<0xE0>(0x00001E, 3); return true;
    // src/unknown/C0/C06267.asm:166 CPX #MAX_ENTITIES
    // Overlapping static entry reached from 0xC06391.
    case 0xC06393: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C06267.asm:167 BNEL @UNKNOWN5
    case 0xC06394: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:167 BNEL @UNKNOWN5
    case 0xC06396: cpu.execute_instruction<0x4C>(0x0062E0, 3); return true;
    // src/unknown/C0/C06267.asm:169 LDX #0
    case 0xC06399: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C06267.asm:169 LDX #0
    // Overlapping static entry reached from 0xC06399.
    case 0xC0639B: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C06267.asm:170 JMP @UNKNOWN25
    case 0xC0639C: cpu.execute_instruction<0x4C>(0x006463, 3); return true;
    // src/unknown/C0/C06267.asm:172 CPX @LOCAL08
    case 0xC0639F: cpu.execute_instruction<0xE4>(0x00001E, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C06267.asm:173 BEQL @UNKNOWN24
    case 0xC063A1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:173 BEQL @UNKNOWN24
    case 0xC063A3: cpu.execute_instruction<0x4C>(0x006462, 3); return true;
    // src/unknown/C0/C06267.asm:174 TXA
    case 0xC063A6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:175 ASL
    case 0xC063A7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:176 TAY
    case 0xC063A8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:177 LDA ENTITY_SCRIPT_TABLE,Y
    case 0xC063A9: cpu.execute_instruction<0xB9>(0x000A62, 3); return true;
    // src/unknown/C0/C06267.asm:178 CMP #.LOWORD(-1)
    case 0xC063AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C06267.asm:178 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC063AC.
    case 0xC063AE: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C06267.asm:179 BEQL @UNKNOWN24
    case 0xC063AF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:179 BEQL @UNKNOWN24
    case 0xC063B1: cpu.execute_instruction<0x4C>(0x006462, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:179 BEQL @UNKNOWN24
    // Overlapping static entry reached from 0xC063AE.
    case 0xC063B2: cpu.execute_instruction<0x62>(0x00B964, 3); return true;
    // src/unknown/C0/C06267.asm:180 LDA ENTITY_NPC_IDS,Y
    case 0xC063B4: cpu.execute_instruction<0xB9>(0x002C9A, 3); return true;
    // src/unknown/C0/C06267.asm:180 LDA ENTITY_NPC_IDS,Y
    // Overlapping static entry reached from 0xC063B2.
    case 0xC063B5: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:180 LDA ENTITY_NPC_IDS,Y
    // Overlapping static entry reached from 0xC063B5.
    case 0xC063B6: cpu.execute_instruction<0x2C>(0x0000C9, 3); return true;
    // src/unknown/C0/C06267.asm:181 CMP #$1000
    case 0xC063B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x001000, 3); return true;
    // src/unknown/C0/C06267.asm:181 CMP #$1000
    // Overlapping static entry reached from 0xC063B7.
    case 0xC063B9: cpu.execute_instruction<0x10>(0x000090, 2); return true;
    // src/unknown/C0/C06267.asm:182 BCC @UNKNOWN18
    case 0xC063BA: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C0/C06267.asm:182 BCC @UNKNOWN18
    // Overlapping static entry reached from 0xC063B9.
    case 0xC063BB: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // src/unknown/C0/C06267.asm:183 JMP @UNKNOWN24
    case 0xC063BC: cpu.execute_instruction<0x4C>(0x006462, 3); return true;
    // src/unknown/C0/C06267.asm:183 JMP @UNKNOWN24
    // Overlapping static entry reached from 0xC063BB.
    case 0xC063BD: cpu.execute_instruction<0x62>(0x00B964, 3); return true;
    // src/unknown/C0/C06267.asm:185 LDA ENTITY_COLLIDED_OBJECTS,Y
    case 0xC063BF: cpu.execute_instruction<0xB9>(0x00289E, 3); return true;
    // src/unknown/C0/C06267.asm:185 LDA ENTITY_COLLIDED_OBJECTS,Y
    // Overlapping static entry reached from 0xC063BD.
    case 0xC063C0: cpu.execute_instruction<0x9E>(0x00C928, 3); return true;
    // src/unknown/C0/C06267.asm:186 CMP #ENTITY_COLLISION_DISABLED
    case 0xC063C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C06267.asm:186 CMP #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC063C0.
    case 0xC063C3: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C06267.asm:186 CMP #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC063C2.
    case 0xC063C4: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C06267.asm:187 BEQL @UNKNOWN24
    case 0xC063C5: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:187 BEQL @UNKNOWN24
    case 0xC063C7: cpu.execute_instruction<0x4C>(0x006462, 3); return true;
    // src/unknown/C0/C06267.asm:188 LDA ENTITY_HITBOX_ENABLED,Y
    case 0xC063CA: cpu.execute_instruction<0xB9>(0x00332A, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C06267.asm:189 BEQL @UNKNOWN24
    case 0xC063CD: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:189 BEQL @UNKNOWN24
    case 0xC063CF: cpu.execute_instruction<0x4C>(0x006462, 3); return true;
    // src/unknown/C0/C06267.asm:190 LDA ENTITY_DIRECTIONS,Y
    case 0xC063D2: cpu.execute_instruction<0xB9>(0x002AF6, 3); return true;
    // src/unknown/C0/C06267.asm:191 CMP #DIRECTION::RIGHT
    case 0xC063D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C06267.asm:191 CMP #DIRECTION::RIGHT
    // Overlapping static entry reached from 0xC063D5.
    case 0xC063D7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C06267.asm:192 BEQ @UNKNOWN21
    case 0xC063D8: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C06267.asm:193 CMP #DIRECTION::LEFT
    case 0xC063DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C06267.asm:193 CMP #DIRECTION::LEFT
    // Overlapping static entry reached from 0xC063DA.
    case 0xC063DC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C06267.asm:194 BNE @UNKNOWN22
    case 0xC063DD: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C0/C06267.asm:196 TXA
    case 0xC063DF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:197 ASL
    case 0xC063E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:198 TAY
    case 0xC063E1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:199 LDA ENTITY_HITBOX_LEFT_RIGHT_WIDTHS,Y
    case 0xC063E2: cpu.execute_instruction<0xB9>(0x0033DE, 3); return true;
    // src/unknown/C0/C06267.asm:200 STA @LOCAL02
    case 0xC063E5: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06267.asm:201 LDA ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS,Y
    case 0xC063E7: cpu.execute_instruction<0xB9>(0x001A4A, 3); return true;
    // src/unknown/C0/C06267.asm:202 STA @LOCAL01
    case 0xC063EA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C06267.asm:203 BRA @UNKNOWN23
    case 0xC063EC: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C0/C06267.asm:205 LDA ENTITY_HITBOX_UP_DOWN_WIDTHS,Y
    case 0xC063EE: cpu.execute_instruction<0xB9>(0x003366, 3); return true;
    // src/unknown/C0/C06267.asm:206 STA @LOCAL02
    case 0xC063F1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06267.asm:207 LDA ENTITY_HITBOX_UP_DOWN_HEIGHTS,Y
    case 0xC063F3: cpu.execute_instruction<0xB9>(0x0033A2, 3); return true;
    // src/unknown/C0/C06267.asm:208 STA @LOCAL01
    case 0xC063F6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C06267.asm:210 TXA
    case 0xC063F8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:211 ASL
    case 0xC063F9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:212 STA @LOCAL00
    case 0xC063FA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C06267.asm:213 LDY #.LOWORD(ENTITY_ABS_Y_TABLE)
    case 0xC063FC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000CA, 2); else cpu.execute_instruction<0xA0>(0x000BCA, 3); return true;
    // src/unknown/C0/C06267.asm:213 LDY #.LOWORD(ENTITY_ABS_Y_TABLE)
    // Overlapping static entry reached from 0xC063FC.
    case 0xC063FE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:214 LDA (@LOCAL00),Y
    case 0xC063FF: cpu.execute_instruction<0xB1>(0x00000E, 2); return true;
    // src/unknown/C0/C06267.asm:215 SEC
    case 0xC06401: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:216 SBC @LOCAL01
    case 0xC06402: cpu.execute_instruction<0xE5>(0x000010, 2); return true;
    // src/unknown/C0/C06267.asm:217 TAY
    case 0xC06404: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:218 SEC
    case 0xC06405: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:219 SBC @LOCAL04
    case 0xC06406: cpu.execute_instruction<0xE5>(0x000016, 2); return true;
    // src/unknown/C0/C06267.asm:220 PHA
    case 0xC06408: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:221 LDA @LOCAL03
    case 0xC06409: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C06267.asm:222 STA @VIRTUAL02
    case 0xC0640B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:223 STA TEMP_REGISTER
    case 0xC0640D: cpu.execute_instruction<0x8D>(0x0000C0, 3); return true;
    // src/unknown/C0/C06267.asm:224 PLA
    case 0xC06410: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:225 STA @VIRTUAL02
    case 0xC06411: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:226 LDA TEMP_REGISTER
    case 0xC06413: cpu.execute_instruction<0xAD>(0x0000C0, 3); return true;
    // src/unknown/C0/C06267.asm:227 CMP @VIRTUAL02
    case 0xC06416: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C06267.asm:228 BLTEQ @UNKNOWN24
    case 0xC06418: cpu.execute_instruction<0x90>(0x000048, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C06267.asm:228 BLTEQ @UNKNOWN24
    case 0xC0641A: cpu.execute_instruction<0xF0>(0x000046, 2); return true;
    // src/unknown/C0/C06267.asm:229 TYA
    case 0xC0641C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:230 CLC
    case 0xC0641D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:231 ADC @LOCAL01
    case 0xC0641E: cpu.execute_instruction<0x65>(0x000010, 2); return true;
    // src/unknown/C0/C06267.asm:232 DEC
    case 0xC06420: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:233 PHA
    case 0xC06421: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:234 LDA @LOCAL03
    case 0xC06422: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C06267.asm:235 STA @VIRTUAL02
    case 0xC06424: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:236 PLY
    case 0xC06426: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:237 STY @VIRTUAL02
    case 0xC06427: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:238 CMP @VIRTUAL02
    case 0xC06429: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:239 BCS @UNKNOWN24
    case 0xC0642B: cpu.execute_instruction<0xB0>(0x000035, 2); return true;
    // src/unknown/C0/C06267.asm:240 LDA @LOCAL02
    case 0xC0642D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06267.asm:241 STA @VIRTUAL02
    case 0xC0642F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:242 LDY #.LOWORD(ENTITY_ABS_X_TABLE)
    case 0xC06431: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00008E, 2); else cpu.execute_instruction<0xA0>(0x000B8E, 3); return true;
    // src/unknown/C0/C06267.asm:242 LDY #.LOWORD(ENTITY_ABS_X_TABLE)
    // Overlapping static entry reached from 0xC06431.
    case 0xC06433: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:243 LDA (@LOCAL00),Y
    case 0xC06434: cpu.execute_instruction<0xB1>(0x00000E, 2); return true;
    // src/unknown/C0/C06267.asm:244 SEC
    case 0xC06436: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:245 SBC @VIRTUAL02
    case 0xC06437: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:246 TAY
    case 0xC06439: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:247 LDA @LOCAL02
    case 0xC0643A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06267.asm:248 ASL
    case 0xC0643C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:249 STA @LOCAL02
    case 0xC0643D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06267.asm:250 TYA
    case 0xC0643F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:251 SEC
    case 0xC06440: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:252 SBC @LOCAL05
    case 0xC06441: cpu.execute_instruction<0xE5>(0x000018, 2); return true;
    // src/unknown/C0/C06267.asm:253 STA @VIRTUAL02
    case 0xC06443: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:254 LDA @VIRTUAL04
    case 0xC06445: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C06267.asm:255 CMP @VIRTUAL02
    case 0xC06447: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C06267.asm:256 BLTEQ @UNKNOWN24
    case 0xC06449: cpu.execute_instruction<0x90>(0x000017, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C06267.asm:256 BLTEQ @UNKNOWN24
    case 0xC0644B: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C0/C06267.asm:257 LDA @LOCAL02
    case 0xC0644D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06267.asm:258 STA @VIRTUAL02
    case 0xC0644F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:259 TYA
    case 0xC06451: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:260 CLC
    case 0xC06452: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:261 ADC @VIRTUAL02
    case 0xC06453: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:262 DEC
    case 0xC06455: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:263 STA @VIRTUAL02
    case 0xC06456: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:264 LDA @VIRTUAL04
    case 0xC06458: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C06267.asm:265 CMP @VIRTUAL02
    case 0xC0645A: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:266 BCS @UNKNOWN24
    case 0xC0645C: cpu.execute_instruction<0xB0>(0x000004, 2); return true;
    // src/unknown/C0/C06267.asm:267 STX @LOCAL06
    case 0xC0645E: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C0/C06267.asm:268 BRA @UNKNOWN26
    case 0xC06460: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C0/C06267.asm:270 INX
    case 0xC06462: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:272 CPX #23
    case 0xC06463: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000017, 2); else cpu.execute_instruction<0xE0>(0x000017, 3); return true;
    // src/unknown/C0/C06267.asm:272 CPX #23
    // Overlapping static entry reached from 0xC06463.
    case 0xC06465: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C06267.asm:273 BNEL @UNKNOWN15
    case 0xC06466: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:273 BNEL @UNKNOWN15
    case 0xC06468: cpu.execute_instruction<0x4C>(0x00639F, 3); return true;
    // src/unknown/C0/C06267.asm:275 LDA @LOCAL08
    case 0xC0646B: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C06267.asm:276 ASL
    case 0xC0646D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:277 TAX
    case 0xC0646E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:278 LDA @LOCAL06
    case 0xC0646F: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C06267.asm:279 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC06471: cpu.execute_instruction<0x9D>(0x00289E, 3); return true;
    // src/unknown/C0/C06267.asm:280 LDA @LOCAL06
    case 0xC06474: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C06267.asm:281 END_C_FUNCTION
    case 0xC06476: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C06267.asm:281 END_C_FUNCTION
    case 0xC06477: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06478.asm (unresolved).
bool execute_unresolved_c0_c06478_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C06478.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC06478: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C06478.asm:6 END_STACK_VARS
    case 0xC0647A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C06478.asm:6 END_STACK_VARS
    case 0xC0647B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06478.asm:6 END_STACK_VARS
    case 0xC0647C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06478.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0647C.
    case 0xC0647E: cpu.execute_instruction<0xFF>(0x42AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C06478.asm:6 END_STACK_VARS
    case 0xC0647F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C06478.asm:7 LDX CURRENT_ENTITY_SLOT
    case 0xC06480: cpu.execute_instruction<0xAE>(0x001A42, 3); return true;
    // src/unknown/C0/C06478.asm:7 LDX CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0647E.
    case 0xC06482: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C06478.asm:8 STX @LOCAL00
    case 0xC06483: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C06478.asm:9 TXA
    case 0xC06485: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06478.asm:10 ASL
    case 0xC06486: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06478.asm:11 TAX
    case 0xC06487: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C06478.asm:12 LDA ENTITY_COLLIDED_OBJECTS,X
    case 0xC06488: cpu.execute_instruction<0xBD>(0x00289E, 3); return true;
    // src/unknown/C0/C06478.asm:13 CMP #ENTITY_COLLISION_DISABLED
    case 0xC0648B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C06478.asm:13 CMP #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC0648B.
    case 0xC0648D: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C06478.asm:14 BEQ @UNKNOWN0
    case 0xC0648E: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/unknown/C0/C06478.asm:15 LDX @LOCAL00
    case 0xC06490: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C06478.asm:16 TXA
    case 0xC06492: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06478.asm:17 JSL UNKNOWN_C09EFF_ENTRY2
    case 0xC06493: cpu.execute_instruction<0x22>(0xC09F08, 4); return true;
    // src/unknown/C0/C06478.asm:18 LDX @LOCAL00
    case 0xC06497: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C06478.asm:19 TXY
    case 0xC06499: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C06478.asm:20 LDX ENTITY_MOVEMENT_PROSPECTIVE_Y
    case 0xC0649A: cpu.execute_instruction<0xAE>(0x00284A, 3); return true;
    // src/unknown/C0/C06478.asm:21 LDA ENTITY_MOVEMENT_PROSPECTIVE_X
    case 0xC0649D: cpu.execute_instruction<0xAD>(0x002848, 3); return true;
    // src/unknown/C0/C06478.asm:22 JSL UNKNOWN_C06267
    case 0xC064A0: cpu.execute_instruction<0x22>(0xC06267, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C06478.asm:24 END_C_FUNCTION
    case 0xC064A4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C06478.asm:24 END_C_FUNCTION
    case 0xC064A5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C064A6.asm (unresolved).
bool execute_unresolved_c0_c064a6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C064A6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC064A6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C064A6.asm:6 END_STACK_VARS
    case 0xC064A8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C064A6.asm:6 END_STACK_VARS
    case 0xC064A9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C064A6.asm:6 END_STACK_VARS
    case 0xC064AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C064A6.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC064AA.
    case 0xC064AC: cpu.execute_instruction<0xFF>(0x42AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C064A6.asm:6 END_STACK_VARS
    case 0xC064AD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C064A6.asm:7 LDX CURRENT_ENTITY_SLOT
    case 0xC064AE: cpu.execute_instruction<0xAE>(0x001A42, 3); return true;
    // src/unknown/C0/C064A6.asm:7 LDX CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC064AC.
    case 0xC064B0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C064A6.asm:8 STX @LOCAL00
    case 0xC064B1: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C064A6.asm:9 TXA
    case 0xC064B3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C064A6.asm:10 ASL
    case 0xC064B4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C064A6.asm:11 TAX
    case 0xC064B5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C064A6.asm:12 LDA ENTITY_COLLIDED_OBJECTS,X
    case 0xC064B6: cpu.execute_instruction<0xBD>(0x00289E, 3); return true;
    // src/unknown/C0/C064A6.asm:13 CMP #ENTITY_COLLISION_DISABLED
    case 0xC064B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C064A6.asm:13 CMP #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC064B9.
    case 0xC064BB: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C064A6.asm:14 BEQ @UNKNOWN0
    case 0xC064BC: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/unknown/C0/C064A6.asm:15 LDX @LOCAL00
    case 0xC064BE: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C064A6.asm:16 TXA
    case 0xC064C0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C064A6.asm:17 JSL UNKNOWN_C09EFF_ENTRY2
    case 0xC064C1: cpu.execute_instruction<0x22>(0xC09F08, 4); return true;
    // src/unknown/C0/C064A6.asm:18 LDX @LOCAL00
    case 0xC064C5: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C064A6.asm:19 TXY
    case 0xC064C7: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C064A6.asm:20 LDX ENTITY_MOVEMENT_PROSPECTIVE_Y
    case 0xC064C8: cpu.execute_instruction<0xAE>(0x00284A, 3); return true;
    // src/unknown/C0/C064A6.asm:21 LDA ENTITY_MOVEMENT_PROSPECTIVE_X
    case 0xC064CB: cpu.execute_instruction<0xAD>(0x002848, 3); return true;
    // src/unknown/C0/C064A6.asm:22 JSL UNKNOWN_C0613C
    case 0xC064CE: cpu.execute_instruction<0x22>(0xC0613C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C064A6.asm:24 END_C_FUNCTION
    case 0xC064D2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C064A6.asm:24 END_C_FUNCTION
    case 0xC064D3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C064D4.asm (unresolved).
bool execute_unresolved_c0_c064d4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C064D4.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC064D4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C064D4.asm:4 STZ NEXT_QUEUED_INTERACTION
    case 0xC064D6: cpu.execute_instruction<0x9C>(0x005E04, 3); return true;
    // src/unknown/C0/C064D4.asm:5 STZ CURRENT_QUEUED_INTERACTION
    case 0xC064D9: cpu.execute_instruction<0x9C>(0x005E02, 3); return true;
    // src/unknown/C0/C064D4.asm:6 LDA #$FFFF
    case 0xC064DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C064D4.asm:6 LDA #$FFFF
    // Overlapping static entry reached from 0xC064DC.
    case 0xC064DE: cpu.execute_instruction<0xFF>(0x5DC08D, 4); return true;
    // src/unknown/C0/C064D4.asm:7 STA CURRENT_QUEUED_INTERACTION_TYPE
    case 0xC064DF: cpu.execute_instruction<0x8D>(0x005DC0, 3); return true;
    // src/unknown/C0/C064D4.asm:8 RTL
    case 0xC064E2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C064E3.asm (unresolved).
bool execute_unresolved_c0_c064e3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C064E3.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC064E3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C064E3.asm:8 END_STACK_VARS
    case 0xC064E5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C064E3.asm:8 END_STACK_VARS
    case 0xC064E6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C064E3.asm:8 END_STACK_VARS
    case 0xC064E7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C064E3.asm:8 END_STACK_VARS
    case 0xC064E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C064E3.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC064E8.
    case 0xC064EA: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C064E3.asm:8 END_STACK_VARS
    case 0xC064EB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C064E3.asm:8 END_STACK_VARS
    case 0xC064EC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C064E3.asm:9 STA @LOCAL00
    case 0xC064ED: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C064E3.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC064EA.
    case 0xC064EE: cpu.execute_instruction<0x0E>(0x001EA5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C064E3.asm:10 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC064EF: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C064E3.asm:10 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC064F1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C064E3.asm:10 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC064F3: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C064E3.asm:10 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC064F5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C064E3.asm:11 LDA @LOCAL00
    case 0xC064F7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C064E3.asm:12 CMP CURRENT_QUEUED_INTERACTION_TYPE
    case 0xC064F9: cpu.execute_instruction<0xCD>(0x005DC0, 3); return true;
    // src/unknown/C0/C064E3.asm:13 BEQ @UNKNOWN0
    case 0xC064FC: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // src/unknown/C0/C064E3.asm:14 LDA NEXT_QUEUED_INTERACTION
    case 0xC064FE: cpu.execute_instruction<0xAD>(0x005E04, 3); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C0/C064E3.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06501: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C0/C064E3.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06503: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C0/C064E3.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06504: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C0/C064E3.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06506: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C064E3.asm:16 TAX
    case 0xC06507: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C064E3.asm:17 LDA @LOCAL00
    case 0xC06508: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C064E3.asm:18 STA QUEUED_INTERACTIONS + queued_interaction::type,X
    case 0xC0650A: cpu.execute_instruction<0x9D>(0x005DEA, 3); return true;
    // src/unknown/C0/C064E3.asm:19 LDA NEXT_QUEUED_INTERACTION
    case 0xC0650D: cpu.execute_instruction<0xAD>(0x005E04, 3); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C0/C064E3.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06510: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C0/C064E3.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06512: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C0/C064E3.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06513: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C0/C064E3.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06515: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C064E3.asm:21 CLC
    case 0xC06516: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C064E3.asm:22 ADC #.LOWORD(QUEUED_INTERACTIONS) + queued_interaction::text_ptr
    case 0xC06517: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x005DEC, 3); return true;
    // src/unknown/C0/C064E3.asm:22 ADC #.LOWORD(QUEUED_INTERACTIONS) + queued_interaction::text_ptr
    // Overlapping static entry reached from 0xC06517.
    case 0xC06519: cpu.execute_instruction<0x5D>(0x00A5A8, 3); return true;
    // src/unknown/C0/C064E3.asm:23 TAY
    case 0xC0651A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C064E3.asm:24 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0651B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C064E3.asm:24 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC06519.
    case 0xC0651C: cpu.execute_instruction<0x06>(0x000099, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C064E3.asm:24 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0651D: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C064E3.asm:24 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC0651C.
    case 0xC0651E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C064E3.asm:24 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC06520: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C064E3.asm:24 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC06522: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C0/C064E3.asm:25 LDA NEXT_QUEUED_INTERACTION
    case 0xC06525: cpu.execute_instruction<0xAD>(0x005E04, 3); return true;
    // src/unknown/C0/C064E3.asm:26 INC
    case 0xC06528: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C064E3.asm:27 AND #$0003
    case 0xC06529: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C064E3.asm:27 AND #$0003
    // Overlapping static entry reached from 0xC06529.
    case 0xC0652B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C064E3.asm:28 STA NEXT_QUEUED_INTERACTION
    case 0xC0652C: cpu.execute_instruction<0x8D>(0x005E04, 3); return true;
    // src/unknown/C0/C064E3.asm:29 LDA #1
    case 0xC0652F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C064E3.asm:29 LDA #1
    // Overlapping static entry reached from 0xC0652F.
    case 0xC06531: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C064E3.asm:30 STA PENDING_INTERACTIONS
    case 0xC06532: cpu.execute_instruction<0x8D>(0x005D9A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C064E3.asm:32 END_C_FUNCTION
    case 0xC06535: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C064E3.asm:32 END_C_FUNCTION
    case 0xC06536: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06537.asm (unresolved).
bool execute_unresolved_c0_c06537_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C06537.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC06537: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C06537.asm:5 END_STACK_VARS
    case 0xC06539: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C06537.asm:5 END_STACK_VARS
    case 0xC0653A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06537.asm:5 END_STACK_VARS
    case 0xC0653B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06537.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC0653B.
    case 0xC0653D: cpu.execute_instruction<0xFF>(0x02AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C06537.asm:5 END_STACK_VARS
    case 0xC0653E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C06537.asm:6 LDA CURRENT_QUEUED_INTERACTION
    case 0xC0653F: cpu.execute_instruction<0xAD>(0x005E02, 3); return true;
    // src/unknown/C0/C06537.asm:6 LDA CURRENT_QUEUED_INTERACTION
    // Overlapping static entry reached from 0xC0653D.
    case 0xC06541: cpu.execute_instruction<0x5E>(0x000485, 3); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C0/C06537.asm:7 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06542: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C0/C06537.asm:7 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06544: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C0/C06537.asm:7 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06545: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C0/C06537.asm:7 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06547: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06537.asm:8 TAX
    case 0xC06548: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C06537.asm:9 LDA QUEUED_INTERACTIONS + queued_interaction::type,X
    case 0xC06549: cpu.execute_instruction<0xBD>(0x005DEA, 3); return true;
    // src/unknown/C0/C06537.asm:10 PLD
    case 0xC0654C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C06537.asm:11 RTL
    case 0xC0654D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0654E.asm (unresolved).
bool execute_unresolved_c0_c0654e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0654E.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0654E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0654E.asm:6 END_STACK_VARS
    case 0xC06550: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0654E.asm:6 END_STACK_VARS
    case 0xC06551: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0654E.asm:6 END_STACK_VARS
    case 0xC06552: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0654E.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC06552.
    case 0xC06554: cpu.execute_instruction<0xFF>(0x02AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0654E.asm:6 END_STACK_VARS
    case 0xC06555: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0654E.asm:7 LDA CURRENT_QUEUED_INTERACTION
    case 0xC06556: cpu.execute_instruction<0xAD>(0x005E02, 3); return true;
    // src/unknown/C0/C0654E.asm:7 LDA CURRENT_QUEUED_INTERACTION
    // Overlapping static entry reached from 0xC06554.
    case 0xC06558: cpu.execute_instruction<0x5E>(0x000485, 3); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C0/C0654E.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06559: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C0/C0654E.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC0655B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C0/C0654E.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC0655C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C0/C0654E.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC0655E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0654E.asm:9 CLC
    case 0xC0655F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0654E.asm:10 ADC #.LOWORD(QUEUED_INTERACTIONS) + queued_interaction::text_ptr
    case 0xC06560: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x005DEC, 3); return true;
    // src/unknown/C0/C0654E.asm:10 ADC #.LOWORD(QUEUED_INTERACTIONS) + queued_interaction::text_ptr
    // Overlapping static entry reached from 0xC06560.
    case 0xC06562: cpu.execute_instruction<0x5D>(0x00B9A8, 3); return true;
    // src/unknown/C0/C0654E.asm:11 TAY
    case 0xC06563: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C0654E.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC06564: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C0654E.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC06562.
    case 0xC06565: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C0654E.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC06567: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C0654E.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC06569: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C0654E.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0656C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0654E.asm:13 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0656E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0654E.asm:13 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC06570: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0654E.asm:13 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC06572: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0654E.asm:13 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC06574: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0654E.asm:14 PLD
    case 0xC06576: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0654E.asm:15 RTL
    case 0xC06577: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06578.asm (unresolved).
bool execute_unresolved_c0_c06578_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C06578.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC06578: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C06578.asm:9 END_STACK_VARS
    case 0xC0657A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C06578.asm:9 END_STACK_VARS
    case 0xC0657B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C06578.asm:9 END_STACK_VARS
    case 0xC0657C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06578.asm:9 END_STACK_VARS
    case 0xC0657D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06578.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0657D.
    case 0xC0657F: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C06578.asm:9 END_STACK_VARS
    case 0xC06580: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C06578.asm:9 END_STACK_VARS
    case 0xC06581: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C06578.asm:10 STX @LOCAL01
    case 0xC06582: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C06578.asm:10 STX @LOCAL01
    // Overlapping static entry reached from 0xC0657F.
    case 0xC06583: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // src/unknown/C0/C06578.asm:11 STA @LOCAL00
    case 0xC06584: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C06578.asm:11 STA @LOCAL00
    // Overlapping static entry reached from 0xC06583.
    case 0xC06585: cpu.execute_instruction<0x0E>(0x0036AD, 3); return true;
    // src/unknown/C0/C06578.asm:12 LDA ENTITY_CREATION_QUEUE_LENGTH
    case 0xC06586: cpu.execute_instruction<0xAD>(0x005E36, 3); return true;
    // src/unknown/C0/C06578.asm:12 LDA ENTITY_CREATION_QUEUE_LENGTH
    // Overlapping static entry reached from 0xC06585.
    case 0xC06588: cpu.execute_instruction<0x5E>(0x000A0A, 3); return true;
    // src/unknown/C0/C06578.asm:13 ASL
    case 0xC06589: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06578.asm:14 ASL
    case 0xC0658A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06578.asm:15 TAX
    case 0xC0658B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C06578.asm:16 LDA @LOCAL00
    case 0xC0658C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C06578.asm:17 STA ENTITY_CREATION_QUEUE + queued_entity_creation::sprite,X
    case 0xC0658E: cpu.execute_instruction<0x9D>(0x005E06, 3); return true;
    // src/unknown/C0/C06578.asm:18 LDX @LOCAL01
    case 0xC06591: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C06578.asm:19 PHX
    case 0xC06593: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C06578.asm:20 LDA ENTITY_CREATION_QUEUE_LENGTH
    case 0xC06594: cpu.execute_instruction<0xAD>(0x005E36, 3); return true;
    // src/unknown/C0/C06578.asm:21 ASL
    case 0xC06597: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06578.asm:22 ASL
    case 0xC06598: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06578.asm:23 TAX
    case 0xC06599: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C06578.asm:24 PLA
    case 0xC0659A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C06578.asm:25 STA ENTITY_CREATION_QUEUE + queued_entity_creation::script,X
    case 0xC0659B: cpu.execute_instruction<0x9D>(0x005E08, 3); return true;
    // src/unknown/C0/C06578.asm:26 INC ENTITY_CREATION_QUEUE_LENGTH
    case 0xC0659E: cpu.execute_instruction<0xEE>(0x005E36, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C06578.asm:27 END_C_FUNCTION
    case 0xC065A1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C06578.asm:27 END_C_FUNCTION
    case 0xC065A2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C065A3.asm (unresolved).
bool execute_unresolved_c0_c065a3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C065A3.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC065A3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C065A3.asm:4 BRA @UNKNOWN1
    case 0xC065A5: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C0/C065A3.asm:6 LDA ENTITY_CREATION_QUEUE_LENGTH
    case 0xC065A7: cpu.execute_instruction<0xAD>(0x005E36, 3); return true;
    // src/unknown/C0/C065A3.asm:7 DEC
    case 0xC065AA: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C065A3.asm:8 STA ENTITY_CREATION_QUEUE_LENGTH
    case 0xC065AB: cpu.execute_instruction<0x8D>(0x005E36, 3); return true;
    // src/unknown/C0/C065A3.asm:9 ASL
    case 0xC065AE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C065A3.asm:10 ASL
    case 0xC065AF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C065A3.asm:11 TAY
    case 0xC065B0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C065A3.asm:12 LDA ENTITY_CREATION_QUEUE + queued_entity_creation::script,Y
    case 0xC065B1: cpu.execute_instruction<0xB9>(0x005E08, 3); return true;
    // src/unknown/C0/C065A3.asm:13 TAX
    case 0xC065B4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C065A3.asm:14 LDA ENTITY_CREATION_QUEUE + queued_entity_creation::sprite,Y
    case 0xC065B5: cpu.execute_instruction<0xB9>(0x005E06, 3); return true;
    // src/unknown/C0/C065A3.asm:15 JSL CREATE_PREPARED_ENTITY_SPRITE
    case 0xC065B8: cpu.execute_instruction<0x22>(0xC46507, 4); return true;
    // src/unknown/C0/C065A3.asm:17 LDA ENTITY_CREATION_QUEUE_LENGTH
    case 0xC065BC: cpu.execute_instruction<0xAD>(0x005E36, 3); return true;
    // src/unknown/C0/C065A3.asm:18 BNE @UNKNOWN0
    case 0xC065BF: cpu.execute_instruction<0xD0>(0x0000E6, 2); return true;
    // src/unknown/C0/C065A3.asm:19 RTL
    case 0xC065C1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C065C2.asm (unresolved).
bool execute_unresolved_c0_c065c2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C065C2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC065C2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C065C2.asm:8 END_STACK_VARS
    case 0xC065C4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C065C2.asm:8 END_STACK_VARS
    case 0xC065C5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C065C2.asm:8 END_STACK_VARS
    case 0xC065C6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C065C2.asm:8 END_STACK_VARS
    case 0xC065C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C065C2.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC065C7.
    case 0xC065C9: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C065C2.asm:8 END_STACK_VARS
    case 0xC065CA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C065C2.asm:8 END_STACK_VARS
    case 0xC065CB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:9 STA @LOCAL01
    case 0xC065CC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C065C2.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC065C9.
    case 0xC065CD: cpu.execute_instruction<0x10>(0x00000A, 2); return true;
    // src/unknown/C0/C065C2.asm:10 ASL
    case 0xC065CE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:11 TAX
    case 0xC065CF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:12 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC065D0: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C065C2.asm:13 LSR
    case 0xC065D3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:14 LSR
    case 0xC065D4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:15 LSR
    case 0xC065D5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:16 CLC
    case 0xC065D6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:17 ADC f:UNKNOWN_C3E230,X
    case 0xC065D7: cpu.execute_instruction<0x7F>(0xC3E230, 4); return true;
    // src/unknown/C0/C065C2.asm:17 ADC f:UNKNOWN_C3E230,X
    // Overlapping static entry reached from 0xC065CD.
    case 0xC065D9: cpu.execute_instruction<0xE2>(0x0000C3, 2); return true;
    // src/unknown/C0/C065C2.asm:18 TAY
    case 0xC065DB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:19 STY @LOCAL00
    case 0xC065DC: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C065C2.asm:20 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC065DE: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C0/C065C2.asm:21 LSR
    case 0xC065E1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:22 LSR
    case 0xC065E2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:23 LSR
    case 0xC065E3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:24 CLC
    case 0xC065E4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:25 ADC f:UNKNOWN_C3E240,X
    case 0xC065E5: cpu.execute_instruction<0x7F>(0xC3E240, 4); return true;
    // src/unknown/C0/C065C2.asm:26 STA @VIRTUAL02
    case 0xC065E9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C065C2.asm:27 LDA @LOCAL01
    case 0xC065EB: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C065C2.asm:28 CMP #6
    case 0xC065ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C065C2.asm:28 CMP #6
    // Overlapping static entry reached from 0xC065ED.
    case 0xC065EF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C065C2.asm:29 BNE @UNKNOWN0
    case 0xC065F0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C065C2.asm:30 DEY
    case 0xC065F2: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:31 STY @LOCAL00
    case 0xC065F3: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C065C2.asm:33 LDX @VIRTUAL02
    case 0xC065F5: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C065C2.asm:34 TYA
    case 0xC065F7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:35 JSL UNKNOWN_C07477
    case 0xC065F8: cpu.execute_instruction<0x22>(0xC07477, 4); return true;
    // src/unknown/C0/C065C2.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC065FC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C065C2.asm:37 AND #$00FF
    case 0xC065FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C065C2.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC065FE.
    case 0xC06600: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C065C2.asm:38 TAX
    case 0xC06601: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:39 CPX #$00FF
    case 0xC06602: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x0000FF, 3); return true;
    // src/unknown/C0/C065C2.asm:39 CPX #$00FF
    // Overlapping static entry reached from 0xC06602.
    case 0xC06604: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C065C2.asm:40 BNE @UNKNOWN1
    case 0xC06605: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C0/C065C2.asm:41 LDX @VIRTUAL02
    case 0xC06607: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C065C2.asm:42 LDY @LOCAL00
    case 0xC06609: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C065C2.asm:43 TYA
    case 0xC0660B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:44 INC
    case 0xC0660C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:45 JSL UNKNOWN_C07477
    case 0xC0660D: cpu.execute_instruction<0x22>(0xC07477, 4); return true;
    // src/unknown/C0/C065C2.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xC06611: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C065C2.asm:47 AND #$00FF
    case 0xC06613: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C065C2.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC06613.
    case 0xC06615: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C065C2.asm:48 TAX
    case 0xC06616: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:50 CPX #$00FF
    case 0xC06617: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x0000FF, 3); return true;
    // src/unknown/C0/C065C2.asm:50 CPX #$00FF
    // Overlapping static entry reached from 0xC06617.
    case 0xC06619: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C065C2.asm:51 BEQ @UNKNOWN2
    case 0xC0661A: cpu.execute_instruction<0xF0>(0x000044, 2); return true;
    // src/unknown/C0/C065C2.asm:52 CPX #6
    case 0xC0661C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000006, 2); else cpu.execute_instruction<0xE0>(0x000006, 3); return true;
    // src/unknown/C0/C065C2.asm:52 CPX #6
    // Overlapping static entry reached from 0xC0661C.
    case 0xC0661E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C065C2.asm:53 BNE @UNKNOWN2
    case 0xC0661F: cpu.execute_instruction<0xD0>(0x00003F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C065C2.asm:54 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL06
    case 0xC06621: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C065C2.asm:54 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC06621.
    case 0xC06623: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C065C2.asm:54 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL06
    case 0xC06624: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C065C2.asm:54 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL06
    case 0xC06626: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C065C2.asm:54 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC06626.
    case 0xC06628: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C065C2.asm:54 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL06
    case 0xC06629: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C065C2.asm:55 LDA DOOR_FOUND
    case 0xC0662B: cpu.execute_instruction<0xAD>(0x005DBC, 3); return true;
    // src/unknown/C0/C065C2.asm:56 AND #$7FFF
    case 0xC0662E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C065C2.asm:56 AND #$7FFF
    // Overlapping static entry reached from 0xC0662E.
    case 0xC06630: cpu.execute_instruction<0x7F>(0x066518, 4); return true;
    // src/unknown/C0/C065C2.asm:57 CLC
    case 0xC06631: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:58 ADC @VIRTUAL06
    case 0xC06632: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C065C2.asm:59 STA @VIRTUAL06
    case 0xC06634: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C065C2.asm:60 LDA DOOR_FOUND_TYPE
    case 0xC06636: cpu.execute_instruction<0xAD>(0x005DBE, 3); return true;
    // src/unknown/C0/C065C2.asm:61 STA UNREAD_7E5DDC
    case 0xC06639: cpu.execute_instruction<0x8D>(0x005DDC, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C065C2.asm:62 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0663C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C065C2.asm:62 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0663E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C065C2.asm:62 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC06640: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C065C2.asm:62 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC06642: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C065C2.asm:63 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC06644: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C065C2.asm:63 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC06644.
    case 0xC06646: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C0/C065C2.asm:63 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC06647: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C0/C065C2.asm:63 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC06649: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C0/C065C2.asm:63 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0664A: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C0/C065C2.asm:63 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0664C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C0/C065C2.asm:63 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0664E: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C065C2.asm:64 MOVE_INT @VIRTUAL06, MAP_OBJECT_TEXT
    case 0xC06650: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C065C2.asm:64 MOVE_INT @VIRTUAL06, MAP_OBJECT_TEXT
    case 0xC06652: cpu.execute_instruction<0x8D>(0x005DDE, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C065C2.asm:64 MOVE_INT @VIRTUAL06, MAP_OBJECT_TEXT
    case 0xC06655: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C065C2.asm:64 MOVE_INT @VIRTUAL06, MAP_OBJECT_TEXT
    case 0xC06657: cpu.execute_instruction<0x8D>(0x005DE0, 3); return true;
    // src/unknown/C0/C065C2.asm:65 LDA #.LOWORD(-2)
    case 0xC0665A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x00FFFE, 3); return true;
    // src/unknown/C0/C065C2.asm:65 LDA #.LOWORD(-2)
    // Overlapping static entry reached from 0xC0665A.
    case 0xC0665C: cpu.execute_instruction<0xFF>(0x5D628D, 4); return true;
    // src/unknown/C0/C065C2.asm:66 STA INTERACTING_NPC_ID
    case 0xC0665D: cpu.execute_instruction<0x8D>(0x005D62, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C065C2.asm:68 END_C_FUNCTION
    case 0xC06660: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C065C2.asm:68 END_C_FUNCTION
    case 0xC06661: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C068F4.asm (unresolved).
bool execute_unresolved_c0_c068f4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C068F4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC068F4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C068F4.asm:8 END_STACK_VARS
    case 0xC068F6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C068F4.asm:8 END_STACK_VARS
    case 0xC068F7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C068F4.asm:8 END_STACK_VARS
    case 0xC068F8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C068F4.asm:8 END_STACK_VARS
    case 0xC068F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C068F4.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC068F9.
    case 0xC068FB: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C068F4.asm:8 END_STACK_VARS
    case 0xC068FC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C068F4.asm:8 END_STACK_VARS
    case 0xC068FD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:9 STA @LOCAL01
    case 0xC068FE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C068F4.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC068FB.
    case 0xC068FF: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/unknown/C0/C068F4.asm:10 LDA DISABLE_MUSIC_CHANGES
    case 0xC06900: cpu.execute_instruction<0xAD>(0x005DD8, 3); return true;
    // src/unknown/C0/C068F4.asm:10 LDA DISABLE_MUSIC_CHANGES
    // Overlapping static entry reached from 0xC068FF.
    case 0xC06901: cpu.execute_instruction<0xD8>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:10 LDA DISABLE_MUSIC_CHANGES
    // Overlapping static entry reached from 0xC06901.
    case 0xC06902: cpu.execute_instruction<0x5D>(0x0003F0, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C068F4.asm:11 BNEL @UNKNOWN4
    case 0xC06903: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C068F4.asm:11 BNEL @UNKNOWN4
    case 0xC06905: cpu.execute_instruction<0x4C>(0x0069AD, 3); return true;
    // src/unknown/C0/C068F4.asm:12 LDA @LOCAL01
    case 0xC06908: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C068F4.asm:13 XBA
    case 0xC0690A: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:14 AND #$00FF
    case 0xC0690B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C068F4.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC0690B.
    case 0xC0690D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C068F4.asm:15 STA @VIRTUAL02
    case 0xC0690E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C068F4.asm:16 LDY #MAP_WIDTH_TILES
    case 0xC06910: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000080, 2); else cpu.execute_instruction<0xA0>(0x000080, 3); return true;
    // src/unknown/C0/C068F4.asm:16 LDY #MAP_WIDTH_TILES
    // Overlapping static entry reached from 0xC06910.
    case 0xC06912: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C0/C068F4.asm:17 TXA
    case 0xC06913: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:18 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC06914: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/unknown/C0/C068F4.asm:19 ASL
    case 0xC06918: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:20 ASL
    case 0xC06919: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:21 ASL
    case 0xC0691A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:22 ASL
    case 0xC0691B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:23 ASL
    case 0xC0691C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:24 CLC
    case 0xC0691D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:25 ADC @VIRTUAL02
    case 0xC0691E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C068F4.asm:26 TAX
    case 0xC06920: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:27 LDA f:MAP_DATA_PER_SECTOR_MUSIC,X
    case 0xC06921: cpu.execute_instruction<0xBF>(0xDCD637, 4); return true;
    // src/unknown/C0/C068F4.asm:28 AND #$00FF
    case 0xC06925: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C068F4.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC06925.
    case 0xC06927: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C068F4.asm:29 STA @LOCAL01
    case 0xC06928: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C068F4.asm:30 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    case 0xC0692A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C068F4.asm:30 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0692A.
    case 0xC0692C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C068F4.asm:30 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    case 0xC0692D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C068F4.asm:30 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    case 0xC0692F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C068F4.asm:30 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0692F.
    case 0xC06931: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C068F4.asm:30 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    case 0xC06932: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C068F4.asm:31 LDA @LOCAL01
    case 0xC06934: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C068F4.asm:32 ASL
    case 0xC06936: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:33 TAX
    case 0xC06937: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:34 LDA f:OVERWORLD_EVENT_MUSIC_PTR_TABLE,X
    case 0xC06938: cpu.execute_instruction<0xBF>(0xCF58EF, 4); return true;
    // src/unknown/C0/C068F4.asm:35 AND #$7FFF
    case 0xC0693C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C068F4.asm:35 AND #$7FFF
    // Overlapping static entry reached from 0xC0693C.
    case 0xC0693E: cpu.execute_instruction<0x7F>(0x0A6518, 4); return true;
    // src/unknown/C0/C068F4.asm:36 CLC
    case 0xC0693F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:37 ADC @VIRTUAL0A
    case 0xC06940: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C068F4.asm:38 STA @VIRTUAL0A
    case 0xC06942: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C068F4.asm:40 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06944: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C068F4.asm:40 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06946: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C068F4.asm:40 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06948: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C068F4.asm:40 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0694A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C068F4.asm:41 LDA [@VIRTUAL06]
    case 0xC0694C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C068F4.asm:42 BEQ @UNKNOWN3
    case 0xC0694E: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/unknown/C0/C068F4.asm:43 AND #$7FFF
    case 0xC06950: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C068F4.asm:43 AND #$7FFF
    // Overlapping static entry reached from 0xC06950.
    case 0xC06952: cpu.execute_instruction<0x7F>(0x162822, 4); return true;
    // src/unknown/C0/C068F4.asm:44 JSL GET_EVENT_FLAG
    case 0xC06953: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/unknown/C0/C068F4.asm:44 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC06952.
    case 0xC06956: cpu.execute_instruction<0xC2>(0x000085, 2); return true;
    // src/unknown/C0/C068F4.asm:45 STA @LOCAL00
    case 0xC06957: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C068F4.asm:45 STA @LOCAL00
    // Overlapping static entry reached from 0xC06956.
    case 0xC06958: cpu.execute_instruction<0x0E>(0x0000A2, 3); return true;
    // src/unknown/C0/C068F4.asm:46 LDX #0
    case 0xC06959: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C068F4.asm:46 LDX #0
    // Overlapping static entry reached from 0xC06959.
    case 0xC0695B: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/unknown/C0/C068F4.asm:47 LDA [@VIRTUAL06]
    case 0xC0695C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C068F4.asm:48 CMP #$8000
    case 0xC0695E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C068F4.asm:48 CMP #$8000
    // Overlapping static entry reached from 0xC0695E.
    case 0xC06960: cpu.execute_instruction<0x80>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C068F4.asm:49 BLTEQ @UNKNOWN2
    case 0xC06961: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C068F4.asm:49 BLTEQ @UNKNOWN2
    case 0xC06963: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C068F4.asm:50 LDX #1
    case 0xC06965: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C068F4.asm:50 LDX #1
    // Overlapping static entry reached from 0xC06965.
    case 0xC06967: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C068F4.asm:52 STX @VIRTUAL02
    case 0xC06968: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C068F4.asm:53 LDA @LOCAL00
    case 0xC0696A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C068F4.asm:54 CMP @VIRTUAL02
    case 0xC0696C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C068F4.asm:55 BEQ @UNKNOWN3
    case 0xC0696E: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C068F4.asm:56 LDA #4
    case 0xC06970: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C0/C068F4.asm:56 LDA #4
    // Overlapping static entry reached from 0xC06970.
    case 0xC06972: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C068F4.asm:57 CLC
    case 0xC06973: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:58 ADC @VIRTUAL0A
    case 0xC06974: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C068F4.asm:59 STA @VIRTUAL0A
    case 0xC06976: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C068F4.asm:60 BRA @UNKNOWN1
    case 0xC06978: cpu.execute_instruction<0x80>(0x0000CA, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C068F4.asm:62 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0697A: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C068F4.asm:62 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0697C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C068F4.asm:62 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0697E: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C068F4.asm:62 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06980: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C068F4.asm:63 MOVE_INT @VIRTUAL06, LOADED_MAP_MUSIC_ENTRY
    case 0xC06982: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C068F4.asm:63 MOVE_INT @VIRTUAL06, LOADED_MAP_MUSIC_ENTRY
    case 0xC06984: cpu.execute_instruction<0x8D>(0x005E38, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C068F4.asm:63 MOVE_INT @VIRTUAL06, LOADED_MAP_MUSIC_ENTRY
    case 0xC06987: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C068F4.asm:63 MOVE_INT @VIRTUAL06, LOADED_MAP_MUSIC_ENTRY
    case 0xC06989: cpu.execute_instruction<0x8D>(0x005E3A, 3); return true;
    // src/unknown/C0/C068F4.asm:64 SEP #PROC_FLAGS::ACCUM8
    case 0xC0698C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C068F4.asm:65 LDY #2
    case 0xC0698E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C0/C068F4.asm:65 LDY #2
    // Overlapping static entry reached from 0xC0698E.
    case 0xC06990: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C068F4.asm:66 LDA [@VIRTUAL0A],Y
    case 0xC06991: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C0/C068F4.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC06993: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C068F4.asm:68 AND #$00FF
    case 0xC06995: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C068F4.asm:68 AND #$00FF
    // Overlapping static entry reached from 0xC06995.
    case 0xC06997: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C068F4.asm:69 TAX
    case 0xC06998: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:70 STX NEXT_MAP_MUSIC_TRACK
    case 0xC06999: cpu.execute_instruction<0x8E>(0x005DD6, 3); return true;
    // src/unknown/C0/C068F4.asm:71 LDA DO_MAP_MUSIC_FADE
    case 0xC0699C: cpu.execute_instruction<0xAD>(0x005DDA, 3); return true;
    // src/unknown/C0/C068F4.asm:72 BNE @UNKNOWN4
    case 0xC0699F: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/C0/C068F4.asm:73 CPX CURRENT_MAP_MUSIC_TRACK
    case 0xC069A1: cpu.execute_instruction<0xEC>(0x005DD4, 3); return true;
    // src/unknown/C0/C068F4.asm:74 BEQ @UNKNOWN4
    case 0xC069A4: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C068F4.asm:75 LDA #2
    case 0xC069A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C068F4.asm:75 LDA #2
    // Overlapping static entry reached from 0xC069A6.
    case 0xC069A8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C068F4.asm:76 JSL UNKNOWN_C0AC0C
    case 0xC069A9: cpu.execute_instruction<0x22>(0xC0AC0C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C068F4.asm:78 END_C_FUNCTION
    case 0xC069AD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C068F4.asm:78 END_C_FUNCTION
    case 0xC069AE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C069AF.asm (unresolved).
bool execute_unresolved_c0_c069af_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C069AF.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC069AF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C069AF.asm:5 END_STACK_VARS
    case 0xC069B1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C069AF.asm:5 END_STACK_VARS
    case 0xC069B2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C069AF.asm:5 END_STACK_VARS
    case 0xC069B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C069AF.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC069B3.
    case 0xC069B5: cpu.execute_instruction<0xFF>(0xD8AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C069AF.asm:5 END_STACK_VARS
    case 0xC069B6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C069AF.asm:6 LDA DISABLE_MUSIC_CHANGES
    case 0xC069B7: cpu.execute_instruction<0xAD>(0x005DD8, 3); return true;
    // src/unknown/C0/C069AF.asm:6 LDA DISABLE_MUSIC_CHANGES
    // Overlapping static entry reached from 0xC069B5.
    case 0xC069B9: cpu.execute_instruction<0x5D>(0x002FD0, 3); return true;
    // src/unknown/C0/C069AF.asm:7 BNE @UNKNOWN0
    case 0xC069BA: cpu.execute_instruction<0xD0>(0x00002F, 2); return true;
    // include/macros.asm:230 LDA .LOWORD(ptr)
    // Macro caller: src/unknown/C0/C069AF.asm:8 LOADPTRPTR LOADED_MAP_MUSIC_ENTRY, @VIRTUAL06
    case 0xC069BC: cpu.execute_instruction<0xAD>(0x005E38, 3); return true;
    // include/macros.asm:231 STA var
    // Macro caller: src/unknown/C0/C069AF.asm:8 LOADPTRPTR LOADED_MAP_MUSIC_ENTRY, @VIRTUAL06
    case 0xC069BF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:232 LDA .LOWORD(ptr)+2
    // Macro caller: src/unknown/C0/C069AF.asm:8 LOADPTRPTR LOADED_MAP_MUSIC_ENTRY, @VIRTUAL06
    case 0xC069C1: cpu.execute_instruction<0xAD>(0x005E3A, 3); return true;
    // include/macros.asm:233 STA var+2
    // Macro caller: src/unknown/C0/C069AF.asm:8 LOADPTRPTR LOADED_MAP_MUSIC_ENTRY, @VIRTUAL06
    case 0xC069C4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C069AF.asm:9 LDA NEXT_MAP_MUSIC_TRACK
    case 0xC069C6: cpu.execute_instruction<0xAD>(0x005DD6, 3); return true;
    // src/unknown/C0/C069AF.asm:10 CMP CURRENT_MAP_MUSIC_TRACK
    case 0xC069C9: cpu.execute_instruction<0xCD>(0x005DD4, 3); return true;
    // src/unknown/C0/C069AF.asm:11 BEQ @UNKNOWN0
    case 0xC069CC: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/unknown/C0/C069AF.asm:12 LDA NEXT_MAP_MUSIC_TRACK
    case 0xC069CE: cpu.execute_instruction<0xAD>(0x005DD6, 3); return true;
    // src/unknown/C0/C069AF.asm:13 STA CURRENT_MAP_MUSIC_TRACK
    case 0xC069D1: cpu.execute_instruction<0x8D>(0x005DD4, 3); return true;
    // src/unknown/C0/C069AF.asm:14 LDA NEXT_MAP_MUSIC_TRACK
    case 0xC069D4: cpu.execute_instruction<0xAD>(0x005DD6, 3); return true;
    // src/unknown/C0/C069AF.asm:15 JSL CHANGE_MUSIC
    case 0xC069D7: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/unknown/C0/C069AF.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC069DB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C069AF.asm:17 LDY #$0003
    case 0xC069DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C0/C069AF.asm:17 LDY #$0003
    // Overlapping static entry reached from 0xC069DD.
    case 0xC069DF: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C069AF.asm:18 LDA [@VIRTUAL06],Y
    case 0xC069E0: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C069AF.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC069E2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C069AF.asm:20 AND #$00FF
    case 0xC069E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C069AF.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC069E4.
    case 0xC069E6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C069AF.asm:21 JSL UNKNOWN_C0AC0C
    case 0xC069E7: cpu.execute_instruction<0x22>(0xC0AC0C, 4); return true;
    // src/unknown/C0/C069AF.asm:23 PLD
    case 0xC069EB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C069AF.asm:24 RTL
    case 0xC069EC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C069F7.asm (unresolved).
bool execute_unresolved_c0_c069f7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C069F7.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC069F7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C069F7.asm:4 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC069F9: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C069F7.asm:5 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC069FC: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C069F7.asm:6 JSL UNKNOWN_C068F4
    case 0xC069FF: cpu.execute_instruction<0x22>(0xC068F4, 4); return true;
    // src/unknown/C0/C069F7.asm:7 LDA NEXT_MAP_MUSIC_TRACK
    case 0xC06A03: cpu.execute_instruction<0xAD>(0x005DD6, 3); return true;
    // src/unknown/C0/C069F7.asm:8 RTL
    case 0xC06A06: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06A07.asm (unresolved).
bool execute_unresolved_c0_c06a07_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C06A07.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC06A07: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C06A07.asm:4 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC06A09: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C06A07.asm:5 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC06A0C: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C06A07.asm:6 JSL UNKNOWN_C068F4
    case 0xC06A0F: cpu.execute_instruction<0x22>(0xC068F4, 4); return true;
    // src/unknown/C0/C06A07.asm:7 LDA NEXT_MAP_MUSIC_TRACK
    case 0xC06A13: cpu.execute_instruction<0xAD>(0x005DD6, 3); return true;
    // src/unknown/C0/C06A07.asm:8 JSL CHANGE_MUSIC
    case 0xC06A16: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/unknown/C0/C06A07.asm:9 RTL
    case 0xC06A1A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
